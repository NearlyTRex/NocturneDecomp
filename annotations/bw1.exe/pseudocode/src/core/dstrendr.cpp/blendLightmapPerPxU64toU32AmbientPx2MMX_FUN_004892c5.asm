; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_004892c5(undefined4 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0 at 00454226
;
; Referenced Globals:
;   undefined8 DAT_006185f8
;   undefined8 DAT_00618600
;   undefined4 DAT_00619b60
;   undefined4 DAT_0061a358
;   undefined4 DAT_00b8189c
;   undefined4 DAT_01c51d1c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004892c5
        ;   Label: core_dstrendr.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_004892c5
    MOV EBP,ESP                         ; 004892c6
    PUSH ESI                            ; 004892c8
    PUSH EDI                            ; 004892c9
    PUSH EBP                            ; 004892ca
    MOV ECX,dword ptr [EBP + 0x18]      ; 004892cb
    MOV EDI,dword ptr [EBP + 0x8]       ; 004892ce
    MOV ESI,dword ptr [EBP + 0xc]       ; 004892d1
    MOV EBX,dword ptr [EBP + 0x10]      ; 004892d4
    MOV EBP,dword ptr [EBP + 0x14]      ; 004892d7
    PXOR MM7,MM7                        ; 004892da
    MOVD MM5,dword ptr [0x01c51d1c]     ; 004892dd | DAT_01c51d1c
    PUNPCKLBW MM5,MM7                   ; 004892e4
    PSLLW MM5,0x6                       ; 004892e7
    MOV EAX,dword ptr [ESI]             ; 004892eb
    MOV EAX,dword ptr [ESI + 0x20]      ; 004892ed
    MOV EAX,dword ptr [ESI + 0x40]      ; 004892f0
    MOV EAX,dword ptr [ESI + 0x60]      ; 004892f3
    MOV EAX,dword ptr [ESI + 0x80]      ; 004892f6
    MOV EAX,dword ptr [ESI + 0xa0]      ; 004892fc
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00489302
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00489308
    MOV EAX,dword ptr [ESI + 0x100]     ; 0048930e
    MOV EAX,dword ptr [ESI + 0x120]     ; 00489314
    MOV EAX,dword ptr [ESI + 0x140]     ; 0048931a
    MOV EAX,dword ptr [ESI + 0x160]     ; 00489320
    MOV EAX,dword ptr [ESI + 0x180]     ; 00489326
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 0048932c
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00489332
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00489338
    MOV EAX,dword ptr [ESI + 0x200]     ; 0048933e
    MOV EAX,dword ptr [ESI + 0x220]     ; 00489344
    MOV EAX,dword ptr [ESI + 0x240]     ; 0048934a
    MOV EAX,dword ptr [ESI + 0x260]     ; 00489350
    MOV EAX,dword ptr [ESI + 0x280]     ; 00489356
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 0048935c
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00489362
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00489368
    MOV EAX,dword ptr [ESI + 0x300]     ; 0048936e
    MOV EAX,dword ptr [ESI + 0x320]     ; 00489374
    MOV EAX,dword ptr [ESI + 0x340]     ; 0048937a
    MOV EAX,dword ptr [ESI + 0x360]     ; 00489380
    MOV EAX,dword ptr [ESI + 0x380]     ; 00489386
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 0048938c
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00489392
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00489398
    MOV EAX,dword ptr [ESI + 0x400]     ; 0048939e
    MOV EAX,dword ptr [ESI + 0x420]     ; 004893a4
    MOV EAX,dword ptr [ESI + 0x440]     ; 004893aa
    MOV EAX,dword ptr [ESI + 0x460]     ; 004893b0
    MOV EAX,dword ptr [ESI + 0x480]     ; 004893b6
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 004893bc
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 004893c2
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 004893c8
    MOV EAX,dword ptr [ESI + 0x500]     ; 004893ce
    MOV EAX,dword ptr [ESI + 0x520]     ; 004893d4
    MOV EAX,dword ptr [ESI + 0x540]     ; 004893da
    MOV EAX,dword ptr [ESI + 0x560]     ; 004893e0
    MOV EAX,dword ptr [ESI + 0x580]     ; 004893e6
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 004893ec
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 004893f2
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 004893f8
    MOV EAX,dword ptr [ESI + 0x600]     ; 004893fe
    MOV EAX,dword ptr [ESI + 0x620]     ; 00489404
    MOV EAX,dword ptr [ESI + 0x640]     ; 0048940a
    MOV EAX,dword ptr [ESI + 0x660]     ; 00489410
    MOV EAX,dword ptr [ESI + 0x680]     ; 00489416
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 0048941c
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00489422
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00489428
    MOV EAX,dword ptr [ESI + 0x700]     ; 0048942e
    MOV EAX,dword ptr [ESI + 0x720]     ; 00489434
    MOV EAX,dword ptr [ESI + 0x740]     ; 0048943a
    MOV EAX,dword ptr [ESI + 0x760]     ; 00489440
    MOV EAX,dword ptr [ESI + 0x780]     ; 00489446
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 0048944c
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00489452
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00489458
    MOV EAX,dword ptr [ESI + 0x800]     ; 0048945e
    MOV EAX,dword ptr [ESI + 0x820]     ; 00489464
    MOV EAX,dword ptr [ESI + 0x840]     ; 0048946a
    MOV EAX,dword ptr [ESI + 0x860]     ; 00489470
    MOV EAX,dword ptr [ESI + 0x880]     ; 00489476
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 0048947c
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00489482
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00489488
    MOV EAX,dword ptr [ESI + 0x900]     ; 0048948e
    MOV EAX,dword ptr [ESI + 0x920]     ; 00489494
    MOV EAX,dword ptr [ESI + 0x940]     ; 0048949a
    MOV EAX,dword ptr [ESI + 0x960]     ; 004894a0
    MOV EAX,dword ptr [ESI + 0x980]     ; 004894a6
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 004894ac
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 004894b2
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 004894b8
    MOVZX EDX,byte ptr [EBX]            ; 004894be
        ;   Label: LAB_004894be
    MOVQ MM0,qword ptr [ESI]            ; 004894c1
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 004894c4 | DAT_00b8189c
    MOVZX EAX,byte ptr [EBP]            ; 004894cc
    PUNPCKLBW MM0,MM7                   ; 004894d0
    SHR EDX,0x1                         ; 004894d3
    PUNPCKLBW MM2,MM7                   ; 004894d5
    ADD EAX,EDX                         ; 004894d8
    PMULLW MM0,MM2                      ; 004894da
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 004894dd | DAT_00619b60
    MOVQ MM2,MM3                        ; 004894e5
    MOVQ MM4,MM5                        ; 004894e8
    PXOR MM2,qword ptr [0x0061a358]     ; 004894eb | DAT_0061a358
    PMULHW MM0,MM2                      ; 004894f2
    PMULHW MM4,MM3                      ; 004894f5
    PADDW MM0,MM4                       ; 004894f8
    PADDW MM0,qword ptr [0x006185f8]    ; 004894fb | DAT_006185f8
    PSRLW MM0,0x4                       ; 00489502
    PACKUSWB MM0,MM7                    ; 00489506
    MOVD dword ptr [EDI],MM0            ; 00489509
    ADD ESI,0x4                         ; 0048950c
    INC EBX                             ; 0048950f
    INC EBP                             ; 00489510
    ADD EDI,0x4                         ; 00489511
    MOVZX EDX,byte ptr [EBX]            ; 00489514
    MOVQ MM0,qword ptr [ESI]            ; 00489517
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 0048951a | DAT_00b8189c
    MOVZX EAX,byte ptr [EBP]            ; 00489522
    PUNPCKLBW MM0,MM7                   ; 00489526
    SHR EDX,0x1                         ; 00489529
    PUNPCKLBW MM2,MM7                   ; 0048952b
    ADD EAX,EDX                         ; 0048952e
    PMULLW MM0,MM2                      ; 00489530
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 00489533 | DAT_00619b60
    MOVQ MM2,MM3                        ; 0048953b
    MOVQ MM4,MM5                        ; 0048953e
    PXOR MM2,qword ptr [0x0061a358]     ; 00489541 | DAT_0061a358
    PMULHW MM0,MM2                      ; 00489548
    PMULHW MM4,MM3                      ; 0048954b
    PADDW MM0,MM4                       ; 0048954e
    PADDW MM0,qword ptr [0x00618600]    ; 00489551 | DAT_00618600
    PSRLW MM0,0x4                       ; 00489558
    PACKUSWB MM0,MM7                    ; 0048955c
    MOVD dword ptr [EDI],MM0            ; 0048955f
    ADD ESI,0x4                         ; 00489562
    INC EBX                             ; 00489565
    INC EBP                             ; 00489566
    ADD EDI,0x4                         ; 00489567
    SUB ECX,0x2                         ; 0048956a
    JG 0x004894be                       ; 0048956d
        ;   XREF to: 004894be (CONDITIONAL_JUMP)  ; LAB_004894be
    POP EBP                             ; 00489573
    EMMS                                ; 00489574
    POP EDI                             ; 00489576
    POP ESI                             ; 00489577
    LEAVE                               ; 00489578
    RET                                 ; 00489579

