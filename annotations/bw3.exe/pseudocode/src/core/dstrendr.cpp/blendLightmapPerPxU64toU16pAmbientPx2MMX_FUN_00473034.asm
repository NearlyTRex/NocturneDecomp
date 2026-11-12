; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00473034(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020 at 00450210
;
; Referenced Globals:
;   undefined8 DAT_005f8b78
;   undefined8 DAT_005f8b80
;   undefined4 DAT_005fa0e0
;   undefined4 DAT_005fa8d8
;   undefined4 DAT_00604e78
;   undefined4 DAT_00604e98
;   undefined4 DAT_00604eb8
;   undefined4 DAT_00604ec0
;   undefined4 DAT_00604ee0
;   undefined4 DAT_00604f00
;   undefined4 DAT_00b9e14c
;   undefined4 DAT_01c6e2bc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00473034
        ;   Label: core_dstrendr.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00473034
    MOV EBP,ESP                         ; 00473035
    PUSH ESI                            ; 00473037
    PUSH EDI                            ; 00473038
    PUSH EBP                            ; 00473039
    MOV ECX,dword ptr [EBP + 0x18]      ; 0047303a
    MOV EDI,dword ptr [EBP + 0x8]       ; 0047303d
    MOV ESI,dword ptr [EBP + 0xc]       ; 00473040
    MOV EBX,dword ptr [EBP + 0x10]      ; 00473043
    MOV EBP,dword ptr [EBP + 0x14]      ; 00473046
    PXOR MM7,MM7                        ; 00473049
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 0047304c | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 00473053
    PSLLW MM5,0x6                       ; 00473056
    MOV EAX,dword ptr [ESI]             ; 0047305a
    MOV EAX,dword ptr [ESI + 0x20]      ; 0047305c
    MOV EAX,dword ptr [ESI + 0x40]      ; 0047305f
    MOV EAX,dword ptr [ESI + 0x60]      ; 00473062
    MOV EAX,dword ptr [ESI + 0x80]      ; 00473065
    MOV EAX,dword ptr [ESI + 0xa0]      ; 0047306b
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00473071
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00473077
    MOV EAX,dword ptr [ESI + 0x100]     ; 0047307d
    MOV EAX,dword ptr [ESI + 0x120]     ; 00473083
    MOV EAX,dword ptr [ESI + 0x140]     ; 00473089
    MOV EAX,dword ptr [ESI + 0x160]     ; 0047308f
    MOV EAX,dword ptr [ESI + 0x180]     ; 00473095
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 0047309b
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 004730a1
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 004730a7
    MOV EAX,dword ptr [ESI + 0x200]     ; 004730ad
    MOV EAX,dword ptr [ESI + 0x220]     ; 004730b3
    MOV EAX,dword ptr [ESI + 0x240]     ; 004730b9
    MOV EAX,dword ptr [ESI + 0x260]     ; 004730bf
    MOV EAX,dword ptr [ESI + 0x280]     ; 004730c5
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 004730cb
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 004730d1
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 004730d7
    MOV EAX,dword ptr [ESI + 0x300]     ; 004730dd
    MOV EAX,dword ptr [ESI + 0x320]     ; 004730e3
    MOV EAX,dword ptr [ESI + 0x340]     ; 004730e9
    MOV EAX,dword ptr [ESI + 0x360]     ; 004730ef
    MOV EAX,dword ptr [ESI + 0x380]     ; 004730f5
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 004730fb
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00473101
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00473107
    MOV EAX,dword ptr [ESI + 0x400]     ; 0047310d
    MOV EAX,dword ptr [ESI + 0x420]     ; 00473113
    MOV EAX,dword ptr [ESI + 0x440]     ; 00473119
    MOV EAX,dword ptr [ESI + 0x460]     ; 0047311f
    MOV EAX,dword ptr [ESI + 0x480]     ; 00473125
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 0047312b
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00473131
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00473137
    MOV EAX,dword ptr [ESI + 0x500]     ; 0047313d
    MOV EAX,dword ptr [ESI + 0x520]     ; 00473143
    MOV EAX,dword ptr [ESI + 0x540]     ; 00473149
    MOV EAX,dword ptr [ESI + 0x560]     ; 0047314f
    MOV EAX,dword ptr [ESI + 0x580]     ; 00473155
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 0047315b
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00473161
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00473167
    MOV EAX,dword ptr [ESI + 0x600]     ; 0047316d
    MOV EAX,dword ptr [ESI + 0x620]     ; 00473173
    MOV EAX,dword ptr [ESI + 0x640]     ; 00473179
    MOV EAX,dword ptr [ESI + 0x660]     ; 0047317f
    MOV EAX,dword ptr [ESI + 0x680]     ; 00473185
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 0047318b
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00473191
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00473197
    MOV EAX,dword ptr [ESI + 0x700]     ; 0047319d
    MOV EAX,dword ptr [ESI + 0x720]     ; 004731a3
    MOV EAX,dword ptr [ESI + 0x740]     ; 004731a9
    MOV EAX,dword ptr [ESI + 0x760]     ; 004731af
    MOV EAX,dword ptr [ESI + 0x780]     ; 004731b5
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 004731bb
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 004731c1
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 004731c7
    MOV EAX,dword ptr [ESI + 0x800]     ; 004731cd
    MOV EAX,dword ptr [ESI + 0x820]     ; 004731d3
    MOV EAX,dword ptr [ESI + 0x840]     ; 004731d9
    MOV EAX,dword ptr [ESI + 0x860]     ; 004731df
    MOV EAX,dword ptr [ESI + 0x880]     ; 004731e5
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 004731eb
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 004731f1
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 004731f7
    MOV EAX,dword ptr [ESI + 0x900]     ; 004731fd
    MOV EAX,dword ptr [ESI + 0x920]     ; 00473203
    MOV EAX,dword ptr [ESI + 0x940]     ; 00473209
    MOV EAX,dword ptr [ESI + 0x960]     ; 0047320f
    MOV EAX,dword ptr [ESI + 0x980]     ; 00473215
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 0047321b
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00473221
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00473227
    MOVZX EDX,byte ptr [EBX]            ; 0047322d
        ;   Label: LAB_0047322d
    MOVQ MM0,qword ptr [ESI]            ; 00473230
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00473233 | DAT_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 0047323b
    PUNPCKLBW MM0,MM7                   ; 0047323f
    SHR EDX,0x1                         ; 00473242
    PUNPCKLBW MM2,MM7                   ; 00473244
    ADD EAX,EDX                         ; 00473247
    PMULLW MM0,MM2                      ; 00473249
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 0047324c | DAT_005fa0e0
    MOVQ MM2,MM3                        ; 00473254
    MOVQ MM4,MM5                        ; 00473257
    PXOR MM2,qword ptr [0x005fa8d8]     ; 0047325a | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 00473261
    PMULHW MM4,MM3                      ; 00473264
    PADDW MM0,MM4                       ; 00473267
    PADDW MM0,qword ptr [0x005f8b78]    ; 0047326a | DAT_005f8b78
    PSRLW MM0,0x4                       ; 00473271
    PACKUSWB MM0,MM7                    ; 00473275
    MOVQ MM2,MM0                        ; 00473278
    MOVQ MM3,MM0                        ; 0047327b
    PAND MM0,qword ptr [0x00604eb8]     ; 0047327e | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 00473285 | DAT_00604e98
    PAND MM3,qword ptr [0x00604e78]     ; 0047328c | DAT_00604e78
    PSRLQ MM0,qword ptr [0x00604f00]    ; 00473293 | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 0047329a | DAT_00604ee0
    PSRLQ MM3,qword ptr [0x00604ec0]    ; 004732a1 | DAT_00604ec0
    POR MM0,MM2                         ; 004732a8
    POR MM0,MM3                         ; 004732ab
    MOVQ MM6,MM0                        ; 004732ae
    ADD ESI,0x4                         ; 004732b1
    INC EBX                             ; 004732b4
    INC EBP                             ; 004732b5
    MOVZX EDX,byte ptr [EBX]            ; 004732b6
    MOVQ MM0,qword ptr [ESI]            ; 004732b9
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 004732bc | DAT_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 004732c4
    PUNPCKLBW MM0,MM7                   ; 004732c8
    SHR EDX,0x1                         ; 004732cb
    PUNPCKLBW MM2,MM7                   ; 004732cd
    ADD EAX,EDX                         ; 004732d0
    PMULLW MM0,MM2                      ; 004732d2
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 004732d5 | DAT_005fa0e0
    MOVQ MM2,MM3                        ; 004732dd
    MOVQ MM4,MM5                        ; 004732e0
    PXOR MM2,qword ptr [0x005fa8d8]     ; 004732e3 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 004732ea
    PMULHW MM4,MM3                      ; 004732ed
    PADDW MM0,MM4                       ; 004732f0
    PADDW MM0,qword ptr [0x005f8b80]    ; 004732f3 | DAT_005f8b80
    PSRLW MM0,0x4                       ; 004732fa
    PACKUSWB MM0,MM7                    ; 004732fe
    MOVQ MM2,MM0                        ; 00473301
    MOVQ MM3,MM0                        ; 00473304
    PAND MM0,qword ptr [0x00604eb8]     ; 00473307 | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 0047330e | DAT_00604e98
    PAND MM3,qword ptr [0x00604e78]     ; 00473315 | DAT_00604e78
    PSRLQ MM0,qword ptr [0x00604f00]    ; 0047331c | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 00473323 | DAT_00604ee0
    PSRLQ MM3,qword ptr [0x00604ec0]    ; 0047332a | DAT_00604ec0
    POR MM0,MM2                         ; 00473331
    POR MM0,MM3                         ; 00473334
    PSLLQ MM0,0x10                      ; 00473337
    POR MM0,MM6                         ; 0047333b
    MOVD dword ptr [EDI],MM0            ; 0047333e
    ADD ESI,0x4                         ; 00473341
    INC EBX                             ; 00473344
    INC EBP                             ; 00473345
    ADD EDI,0x4                         ; 00473346
    SUB ECX,0x2                         ; 00473349
    JG 0x0047322d                       ; 0047334c
        ;   XREF to: 0047322d (CONDITIONAL_JUMP)  ; LAB_0047322d
    POP EBP                             ; 00473352
    EMMS                                ; 00473353
    POP EDI                             ; 00473355
    POP ESI                             ; 00473356
    LEAVE                               ; 00473357
    RET                                 ; 00473358

