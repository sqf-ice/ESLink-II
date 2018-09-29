/**
 * @file    usbd_cls.h
 * @brief   USB Device MSC header
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2009-2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __USBD_CLS_H__
#define __USBD_CLS_H__


/*--------------------------- Global variables -------------------------------*/

/* USB Device Mass Storage Device Class Global Variables */
//extern BOOL USBD_MSC_MediaReady;
//extern BOOL USBD_MSC_ReadOnly;
//extern U32 USBD_MSC_MemorySize;
//extern U32 USBD_MSC_BlockSize;
//extern U32 USBD_MSC_BlockGroup;
//extern U32 USBD_MSC_BlockCount;
extern U8 *USBD_CLS_WriteBuf;

extern U8 *USBD_CLS_ReadBuf;
/*--------------------------- Event handling routines ------------------------*/

extern void USBD_CLS_Reset_Event(void);

//extern void USBD_CLS_SOF_Event(void);

extern void USBD_CLS_EP_BULKIN_Event(U32 event);
extern void USBD_CLS_EP_BULKOUT_Event(U32 event);
extern void USBD_CLS_EP_BULK_Event(U32 event);




#endif  /* __USBD_MSC_H__ */