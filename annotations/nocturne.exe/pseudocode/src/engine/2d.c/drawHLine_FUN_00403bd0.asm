; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_drawHLine_FUN_00403bd0(int param_1,int param_2,int param_3)
;
;
; XREF[6]:
;   FUN_004722b0 at 00472467
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004eb69e
;   engine_2d.c_drawRect_FUN_00403e10 at 00403e27
;   engine_2d.c_fillRectColor_FUN_00403e60 at 00403ec4
;   shape_edittool.cpp_draw3DBorder_FUN_00476260 at 0047628b
;   shape_edittool.cpp_draw3DInsetBorder_FUN_00476310 at 00476375
;
; Referenced Globals:
;   string s_..\\engine\\2d.c_00577309
;   string s_hLine_-_invalid_bitsPerPixel_00577318
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c00c70
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403bd0
        ;   Label: engine_2d.c_drawHLine_FUN_00403bd0
    PUSH EDI                            ; 00403bd1
    PUSH EBP                            ; 00403bd2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00403bd3
    MOV ECX,dword ptr [ESP + 0x14]      ; 00403bd7
    MOV EAX,dword ptr [ESP + 0x18]      ; 00403bdb
    CMP ECX,dword ptr [0x01c00c5c]      ; 00403bdf | DAT_01c00c5c
    JL 0x00403c50                       ; 00403be5
        ;   XREF to: 00403c50 (CONDITIONAL_JUMP)  ; LAB_00403c50
    CMP ECX,dword ptr [0x01c00c64]      ; 00403be7 | DAT_01c00c64
    JG 0x00403c50                       ; 00403bed
        ;   XREF to: 00403c50 (CONDITIONAL_JUMP)  ; LAB_00403c50
    MOV EDI,dword ptr [0x01c00c58]      ; 00403bef | DAT_01c00c58
    CMP EDX,EDI                         ; 00403bf5
    JGE 0x00403bfb                      ; 00403bf7
        ;   XREF to: 00403bfb (CONDITIONAL_JUMP)  ; LAB_00403bfb
    MOV EDX,EDI                         ; 00403bf9
    MOV EBP,dword ptr [0x01c00c60]      ; 00403bfb | DAT_01c00c60
        ;   Label: LAB_00403bfb
    CMP EAX,EBP                         ; 00403c01
    JLE 0x00403c07                      ; 00403c03
        ;   XREF to: 00403c07 (CONDITIONAL_JUMP)  ; LAB_00403c07
    MOV EAX,EBP                         ; 00403c05
    SUB EAX,EDX                         ; 00403c07
        ;   Label: LAB_00403c07
    INC EAX                             ; 00403c09
    CMP EAX,0x1                         ; 00403c0a
    JL 0x00403c50                       ; 00403c0d
        ;   XREF to: 00403c50 (CONDITIONAL_JUMP)  ; LAB_00403c50
    MOV EBX,dword ptr [0x005b7624]      ; 00403c0f | DAT_005b7624
    SHL ECX,0x2                         ; 00403c15
    CMP EBX,0x10                        ; 00403c18
    JNC 0x00403cab                      ; 00403c1b
        ;   XREF to: 00403cab (CONDITIONAL_JUMP)  ; LAB_00403cab
    CMP EBX,0x8                         ; 00403c21
    JNZ 0x00403cb2                      ; 00403c24
        ;   XREF to: 00403cb2 (CONDITIONAL_JUMP)  ; LAB_00403cb2
    PUSH EAX                            ; 00403c2a
    MOV EBX,dword ptr [0x01c00c70]      ; 00403c2b | DAT_01c00c70
    MOV EAX,dword ptr [ECX + 0x1bd2fa0] ; 00403c31 | DAT_01bd2fa0
    PUSH EBX                            ; 00403c37
    ADD EDX,EAX                         ; 00403c38
    PUSH EDX                            ; 00403c3a
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00403c3b
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 00403c40
    LEA EAX,[EAX]                       ; 00403c43
    LEA EDX,[EDX]                       ; 00403c49
    NOP                                 ; 00403c4f
    POP EBP                             ; 00403c50
        ;   Label: LAB_00403c50
    POP EDI                             ; 00403c51
    POP EBX                             ; 00403c52
    RET                                 ; 00403c53
    MOV EBX,dword ptr [0x01c00c70]      ; 00403c54 | DAT_01c00c70
        ;   Label: LAB_00403c54
    MOV ECX,dword ptr [ECX + 0x1bd2fa0] ; 00403c5a | DAT_01bd2fa0
    ADD EDX,EDX                         ; 00403c60
    MOV BX,word ptr [EBX*0x2 + 0x1bff720] ; 00403c62
    ADD EDX,ECX                         ; 00403c6a
    TEST EAX,EAX                        ; 00403c6c
    JLE 0x00403c50                      ; 00403c6e
        ;   XREF to: 00403c50 (CONDITIONAL_JUMP)  ; LAB_00403c50
    ADD EDX,0x2                         ; 00403c70
        ;   Label: LAB_00403c70
    DEC EAX                             ; 00403c73
    MOV word ptr [EDX + -0x2],BX        ; 00403c74
    TEST EAX,EAX                        ; 00403c78
    JG 0x00403c70                       ; 00403c7a
        ;   XREF to: 00403c70 (CONDITIONAL_JUMP)  ; LAB_00403c70
    POP EBP                             ; 00403c7c
    POP EDI                             ; 00403c7d
    POP EBX                             ; 00403c7e
    RET                                 ; 00403c7f
    MOV EBX,dword ptr [0x01c00c70]      ; 00403c80 | DAT_01c00c70
        ;   Label: LAB_00403c80
    SHL EDX,0x2                         ; 00403c86
    MOV ECX,dword ptr [ECX + 0x1bd2fa0] ; 00403c89 | DAT_01bd2fa0
    MOV EBX,dword ptr [EBX*0x4 + 0x1bff920] ; 00403c8f
    ADD EDX,ECX                         ; 00403c96
    TEST EAX,EAX                        ; 00403c98
    JLE 0x00403c50                      ; 00403c9a
        ;   XREF to: 00403c50 (CONDITIONAL_JUMP)  ; LAB_00403c50
    ADD EDX,0x4                         ; 00403c9c
        ;   Label: LAB_00403c9c
    DEC EAX                             ; 00403c9f
    MOV dword ptr [EDX + -0x4],EBX      ; 00403ca0
    TEST EAX,EAX                        ; 00403ca3
    JG 0x00403c9c                       ; 00403ca5
        ;   XREF to: 00403c9c (CONDITIONAL_JUMP)  ; LAB_00403c9c
    POP EBP                             ; 00403ca7
    POP EDI                             ; 00403ca8
    POP EBX                             ; 00403ca9
    RET                                 ; 00403caa
    JBE 0x00403c54                      ; 00403cab
        ;   XREF to: 00403c54 (CONDITIONAL_JUMP)  ; LAB_00403c54
        ;   Label: LAB_00403cab
    CMP EBX,0x20                        ; 00403cad
    JZ 0x00403c80                       ; 00403cb0
        ;   XREF to: 00403c80 (CONDITIONAL_JUMP)  ; LAB_00403c80
    MOV EAX,0x577309                    ; 00403cb2 | = "..\\engine\\2d.c"
        ;   Label: LAB_00403cb2
    MOV EDX,0x8a4                       ; 00403cb7
    PUSH 0x577318                       ; 00403cbc | = "hLine - invalid bitsPerPixel"
    MOV [0x01cc4800],EAX                ; 00403cc1 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00403cc6 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00403ccc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00403cd1
    POP EBP                             ; 00403cd4
    POP EDI                             ; 00403cd5
    POP EBX                             ; 00403cd6
    RET                                 ; 00403cd7

