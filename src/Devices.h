///////////////////////////////////////////////////////////////////////////////
// BOSSA
//
// Copyright (c) 2015, Arduino LLC
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of the <organization> nor the
//       names of its contributors may be used to endorse or promote products
//       derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
///////////////////////////////////////////////////////////////////////////////

#ifndef _DEVICES_H_
#define _DEVICES_H_

#define ATSAM_APPLET_MAX_SIZE                (0x1000)

#define ATSAMD_CHIPID_MASK                   (0xFFFF00FFul)  // mask for DIE & REV bitfields removal in Samba::chipId()
#define ATSAMD_BOOTLOADER_SIZE               (0x00002000ul)  // 8192 bytes
#define ATSAMR_BOOTLOADER_SIZE               (0x00002000ul) // 8192 bytes, USB-CDC only
#define ATSAMD_FLASH_ROW_PAGES               (4ul)           // 4 pages per row

#define ATSAMD21J18A_NAME                    "ATSAMD21J18A"
#define ATSAMD21J18A_CHIPID                  (0x10010000ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21J18A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21J18A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21J18A_FLASH_PAGES             (4096ul)
#define ATSAMD21J18A_FLASH_PLANES            (1ul)
#define ATSAMD21J18A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21J18A_BUFFER_ADDR             (0x20004000ul)
#define ATSAMD21J18A_STACK_ADDR              (0x20008000ul)
#define ATSAMD21J18A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21G18A_NAME                    "ATSAMD21G18A"
#define ATSAMD21G18A_CHIPID                  (0x10010005ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21G18A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21G18A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21G18A_FLASH_PAGES             (4096ul)
#define ATSAMD21G18A_FLASH_PLANES            (1ul)
#define ATSAMD21G18A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21G18A_BUFFER_ADDR             (0x20004000ul)
#define ATSAMD21G18A_STACK_ADDR              (0x20008000ul)
#define ATSAMD21G18A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMD21E18A_NAME                    "ATSAMD21E18A"
#define ATSAMD21E18A_CHIPID                  (0x1001000aul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMD21E18A_FLASH_BASE              (0x00000000ul + ATSAMD_BOOTLOADER_SIZE)
#define ATSAMD21E18A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMD21E18A_FLASH_PAGES             (4096ul)
#define ATSAMD21E18A_FLASH_PLANES            (1ul)
#define ATSAMD21E18A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMD21E18A_BUFFER_ADDR             (0x20004000ul)
#define ATSAMD21E18A_STACK_ADDR              (0x20008000ul)
#define ATSAMD21E18A_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMR21E18A_NAME                    "ATSAMR21E18A"
#define ATSAMR21E18A_CHIPID                  (0x1001001cul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMR21E18A_FLASH_BASE              (0x00000000ul + ATSAMR_BOOTLOADER_SIZE)
#define ATSAMR21E18A_FLASH_PAGE_SIZE         (64ul)
#define ATSAMR21E18A_FLASH_PAGES             (4096ul)
#define ATSAMR21E18A_FLASH_PLANES            (1ul)
#define ATSAMR21E18A_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMR21E18A_BUFFER_ADDR             (0x20004000ul)
#define ATSAMR21E18A_STACK_ADDR              (0x20008000ul)
#define ATSAMR21E18A_NVMCTRL_BASE            (0x41004000ul)

/*SAMR34 (SAML21 + LoRa with USB )*/

#define ATSAMR34J18B_NAME                    "ATSAMR34J18B"
#define ATSAMR34J18B_CHIPID                  (0x10810028ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMR34J18B_FLASH_BASE              (0x00000000ul + ATSAMR_BOOTLOADER_SIZE)
#define ATSAMR34J18B_FLASH_PAGE_SIZE         (64ul)
#define ATSAMR34J18B_FLASH_PAGES             (4096ul)
#define ATSAMR34J18B_FLASH_PLANES            (1ul)
#define ATSAMR34J18B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMR34J18B_BUFFER_ADDR             (0x20004000ul)
#define ATSAMR34J18B_STACK_ADDR              (0x20008000ul)
#define ATSAMR34J18B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMR34J17B_NAME                    "ATSAMR34J17B"
#define ATSAMR34J17B_CHIPID                  (0x10810029ul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMR34J17B_FLASH_BASE              (0x00000000ul + ATSAMR_BOOTLOADER_SIZE)
#define ATSAMR34J17B_FLASH_PAGE_SIZE         (64ul)
#define ATSAMR34J17B_FLASH_PAGES             (2048ul)
#define ATSAMR34J17B_FLASH_PLANES            (1ul)
#define ATSAMR34J17B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMR34J17B_BUFFER_ADDR             (0x20004000ul)
#define ATSAMR34J17B_STACK_ADDR              (0x20008000ul)
#define ATSAMR34J17B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMR34J16B_NAME                    "ATSAMR34J16B"
#define ATSAMR34J16B_CHIPID                  (0x1081002Aul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMR34J16B_FLASH_BASE              (0x00000000ul + ATSAMR_BOOTLOADER_SIZE)
#define ATSAMR34J16B_FLASH_PAGE_SIZE         (64ul)
#define ATSAMR34J16B_FLASH_PAGES             (1024ul)
#define ATSAMR34J16B_FLASH_PLANES            (1ul)
#define ATSAMR34J16B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMR34J16B_BUFFER_ADDR             (0x20004000ul)
#define ATSAMR34J16B_STACK_ADDR              (0x20008000ul)
#define ATSAMR34J16B_NVMCTRL_BASE            (0x41004000ul)

/*SAMR35 (SAML21 +  LoRa, no USB ) */

#define ATSAMR35J18B_NAME                    "ATSAMR35J18B"
#define ATSAMR35J18B_CHIPID                  (0x1081002Bul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMR35J18B_FLASH_BASE              (0x00000000ul + ATSAMR_BOOTLOADER_SIZE)
#define ATSAMR35J18B_FLASH_PAGE_SIZE         (64ul)
#define ATSAMR35J18B_FLASH_PAGES             (4096ul)
#define ATSAMR35J18B_FLASH_PLANES            (1ul)
#define ATSAMR35J18B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMR35J18B_BUFFER_ADDR             (0x20004000ul)
#define ATSAMR35J18B_STACK_ADDR              (0x20008000ul)
#define ATSAMR35J18B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMR35J17B_NAME                    "ATSAMR35J17B"
#define ATSAMR35J17B_CHIPID                  (0x1081002Cul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMR35J17B_FLASH_BASE              (0x00000000ul + ATSAMR_BOOTLOADER_SIZE)
#define ATSAMR35J17B_FLASH_PAGE_SIZE         (64ul)
#define ATSAMR35J17B_FLASH_PAGES             (2048ul)
#define ATSAMR35J17B_FLASH_PLANES            (1ul)
#define ATSAMR35J17B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMR35J17B_BUFFER_ADDR             (0x20004000ul)
#define ATSAMR35J17B_STACK_ADDR              (0x20008000ul)
#define ATSAMR35J17B_NVMCTRL_BASE            (0x41004000ul)

#define ATSAMR35J16B_NAME                    "ATSAMR35J16B"
#define ATSAMR35J16B_CHIPID                  (0x1081002Dul)  // DIE & REV bitfields masked in Samba::chipId()
#define ATSAMR35J16B_FLASH_BASE              (0x00000000ul + ATSAMR_BOOTLOADER_SIZE)
#define ATSAMR35J16B_FLASH_PAGE_SIZE         (64ul)
#define ATSAMR35J16B_FLASH_PAGES             (1024ul)
#define ATSAMR35J16B_FLASH_PLANES            (1ul)
#define ATSAMR35J16B_FLASH_LOCK_REGIONS      (16ul)
#define ATSAMR35J16B_BUFFER_ADDR             (0x20004000ul)
#define ATSAMR35J16B_STACK_ADDR              (0x20008000ul)
#define ATSAMR35J16B_NVMCTRL_BASE            (0x41004000ul)
#endif // _DEVICES_H_
