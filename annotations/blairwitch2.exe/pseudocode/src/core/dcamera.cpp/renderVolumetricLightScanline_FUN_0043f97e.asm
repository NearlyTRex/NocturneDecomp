; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_renderVolumetricLightScanline_FUN_0043f97e(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_013083cc
;   undefined4 DAT_013083d0
;   undefined4 DAT_01308800
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0043f97e
        ;   Label: core_dcamera.cpp_renderVolumetricLightScanline_FUN_0043f97e
    PUSH EBX                            ; 0043f980
        ;   Label: LAB_0043f980
    PUSH ESI                            ; 0043f981
    PUSH EDI                            ; 0043f982
    PUSH EBP                            ; 0043f983
    MOV EBP,ESP                         ; 0043f984
    SUB ESP,0x1c                        ; 0043f986
    MOV EDI,dword ptr [EBP + 0x18]      ; 0043f989
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043f98c
    SUB EDX,dword ptr [0x01c35e4c]      ; 0043f98f | DAT_01c35e4c
    MOV ECX,dword ptr [0x01308800]      ; 0043f995 | DAT_01308800
    MOV dword ptr [EBP + 0x14],EDX      ; 0043f99b
    CMP ECX,0x1                         ; 0043f99e
    JNZ 0x0043f9ad                      ; 0043f9a1
        ;   XREF to: 0043f9ad (CONDITIONAL_JUMP)  ; LAB_0043f9ad
    TEST byte ptr [EBP + 0x14],0x1      ; 0043f9a3
    JNZ 0x0043fb16                      ; 0043f9a7
        ;   XREF to: 0043fb16 (CONDITIONAL_JUMP)  ; LAB_0043fb16
    CMP dword ptr [0x01308800],0x2      ; 0043f9ad | DAT_01308800
        ;   Label: LAB_0043f9ad
    JNZ 0x0043f9c0                      ; 0043f9b4
        ;   XREF to: 0043f9c0 (CONDITIONAL_JUMP)  ; LAB_0043f9c0
    TEST byte ptr [EBP + 0x14],0x3      ; 0043f9b6
    JNZ 0x0043fb16                      ; 0043f9ba
        ;   XREF to: 0043fb16 (CONDITIONAL_JUMP)  ; LAB_0043fb16
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043f9c0
        ;   Label: LAB_0043f9c0
    MOV CL,byte ptr [0x01308800]        ; 0043f9c3 | DAT_01308800
    SAR ESI,CL                          ; 0043f9c9
    MOV dword ptr [EBP + 0x14],ESI      ; 0043f9cb
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0043f9ce
    MOV EAX,[0x01c35e48]                ; 0043f9d1 | DAT_01c35e48
    MOV EBX,dword ptr [EDI + 0x8]       ; 0043f9d6
    MOV ESI,dword ptr [ESI + 0x8]       ; 0043f9d9
    SAR EBX,0x10                        ; 0043f9dc
    SAR ESI,0x10                        ; 0043f9df
    SUB EBX,EAX                         ; 0043f9e2
    SUB ESI,EAX                         ; 0043f9e4
    SAR EBX,CL                          ; 0043f9e6
    SAR ESI,CL                          ; 0043f9e8
    CMP EBX,ESI                         ; 0043f9ea
    JLE 0x0043f9fc                      ; 0043f9ec
        ;   XREF to: 0043f9fc (CONDITIONAL_JUMP)  ; LAB_0043f9fc
    MOV EAX,EBX                         ; 0043f9ee
    MOV EBX,ESI                         ; 0043f9f0
    MOV ESI,EAX                         ; 0043f9f2
    MOV EAX,EDI                         ; 0043f9f4
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0043f9f6
    MOV dword ptr [EBP + 0x1c],EAX      ; 0043f9f9
    MOV EAX,dword ptr [EDI + 0x28]      ; 0043f9fc
        ;   Label: LAB_0043f9fc
    MOV EDX,EAX                         ; 0043f9ff
    SAR EDX,0x1f                        ; 0043fa01
    SHL EDX,0x8                         ; 0043fa04
    SBB EAX,EDX                         ; 0043fa07
    SAR EAX,0x8                         ; 0043fa09
    MOV dword ptr [EBP + -0x1c],EAX     ; 0043fa0c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0043fa0f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043fa12
    MOV EDX,dword ptr [EDX + 0x28]      ; 0043fa15
    MOV EAX,dword ptr [EAX + 0x28]      ; 0043fa18
    SAR EDX,0x1f                        ; 0043fa1b
    SHL EDX,0x8                         ; 0043fa1e
    SBB EAX,EDX                         ; 0043fa21
    SAR EAX,0x8                         ; 0043fa23
    MOV ECX,EAX                         ; 0043fa26
    MOV EAX,dword ptr [EDI + 0x28]      ; 0043fa28
    MOV EDX,EAX                         ; 0043fa2b
    SAR EDX,0x1f                        ; 0043fa2d
    SHL EDX,0x8                         ; 0043fa30
    SBB EAX,EDX                         ; 0043fa33
    SAR EAX,0x8                         ; 0043fa35
    MOV EDX,ECX                         ; 0043fa38
    MOV ECX,ESI                         ; 0043fa3a
    SUB EDX,EAX                         ; 0043fa3c
    SUB ECX,EBX                         ; 0043fa3e
    MOV EAX,EDX                         ; 0043fa40
    INC ECX                             ; 0043fa42
    SAR EDX,0x1f                        ; 0043fa43
    IDIV ECX                            ; 0043fa46
    MOV dword ptr [EBP + -0x18],EAX     ; 0043fa48
    MOV EAX,dword ptr [EDI + 0x10]      ; 0043fa4b
    MOV dword ptr [EBP + -0x14],EAX     ; 0043fa4e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0043fa51
    MOV EDX,dword ptr [EDX + 0x10]      ; 0043fa54
    SUB EDX,EAX                         ; 0043fa57
    MOV EAX,EDX                         ; 0043fa59
    SAR EDX,0x1f                        ; 0043fa5b
    IDIV ECX                            ; 0043fa5e
    MOV dword ptr [EBP + -0x10],EAX     ; 0043fa60
    MOV CL,byte ptr [0x01308800]        ; 0043fa63 | DAT_01308800
    MOV EDX,EBX                         ; 0043fa69
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043fa6b
    SHL EDX,CL                          ; 0043fa6e
    SHL EAX,CL                          ; 0043fa70
    SHL EDX,0x2                         ; 0043fa72
    MOV EAX,dword ptr [EAX*0x4 + 0x1c2b64c] ; 0043fa75 | DAT_01c2b64c
    ADD EAX,EDX                         ; 0043fa7c
    MOV dword ptr [EBP + -0xc],EAX      ; 0043fa7e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043fa81
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043fa84
    ADD EAX,EDX                         ; 0043fa8b
    SHL EAX,0x6                         ; 0043fa8d
    ADD EAX,0x1326d20                   ; 0043fa90
    ADD EAX,EBX                         ; 0043fa95
    MOV dword ptr [EBP + -0x8],EAX      ; 0043fa97
    SUB ESI,EBX                         ; 0043fa9a
    MOV dword ptr [EBP + -0x4],ESI      ; 0043fa9c
    MOV ECX,dword ptr [EBP + 0xfffffffc] ; 0043fa9f
    SHL ECX,0x2                         ; 0043faa5
    MOV ESI,dword ptr [EBP + 0xfffffff8] ; 0043faa8
    MOV EDI,dword ptr [0x013083d0]      ; 0043faae | DAT_013083d0
    MOV EBX,dword ptr [EBP + 0xffffffe4] ; 0043fab4
    MOV EDX,dword ptr [EBP + 0xffffffec] ; 0043faba
    MOV EAX,ECX                         ; 0043fac0
        ;   Label: LAB_0043fac0
    ADD EAX,dword ptr [EBP + 0xfffffff4] ; 0043fac2
    CMP EBX,dword ptr [EAX]             ; 0043fac8
    JLE 0x0043faf4                      ; 0043faca
        ;   XREF to: 0043faf4 (CONDITIONAL_JUMP)  ; LAB_0043faf4
    MOVZX EAX,byte ptr [ESI]            ; 0043facc
    SHL EAX,0x8                         ; 0043facf
    ADD EAX,EDX                         ; 0043fad2
    ADD EAX,dword ptr [EDI + 0x13083d4] ; 0043fad4
    ADD EDI,0x4                         ; 0043fada
    AND EDI,0x3fc                       ; 0043fadd
    SHR EAX,0x8                         ; 0043fae3
    CMP EAX,0xff                        ; 0043fae6
    JC 0x0043faf2                       ; 0043faeb
        ;   XREF to: 0043faf2 (CONDITIONAL_JUMP)  ; LAB_0043faf2
    MOV EAX,0xff                        ; 0043faed
    MOV byte ptr [ESI],AL               ; 0043faf2
        ;   Label: LAB_0043faf2
    ADD EDX,dword ptr [EBP + 0xfffffff0] ; 0043faf4
        ;   Label: LAB_0043faf4
    ADD EBX,dword ptr [EBP + 0xffffffe8] ; 0043fafa
    INC ESI                             ; 0043fb00
    SUB ECX,0x4                         ; 0043fb01
    JG 0x0043fac0                       ; 0043fb04
        ;   XREF to: 0043fac0 (CONDITIONAL_JUMP)  ; LAB_0043fac0
    MOV dword ptr [0x013083d0],EDI      ; 0043fb06 | DAT_013083d0
    MOV dword ptr [0x013083cc],0x1      ; 0043fb0c | DAT_013083cc
    MOV ESP,EBP                         ; 0043fb16
        ;   Label: LAB_0043fb16
    POP EBP                             ; 0043fb18
    POP EDI                             ; 0043fb19
    POP ESI                             ; 0043fb1a
    POP EBX                             ; 0043fb1b
    RET                                 ; 0043fb1c

