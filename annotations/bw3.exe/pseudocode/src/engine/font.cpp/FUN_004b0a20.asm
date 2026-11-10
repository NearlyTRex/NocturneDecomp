; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_font_cpp_FUN_004b0a20(CBitFont *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[23]:
;   core_fldnotes.cpp_FUN_004a8570 at 004a858e
;   core_fldnotes.cpp_FUN_004aa490 at 004aa572
;   core_fldnotes.cpp_FUN_004abe00 at 004ac107
;   core_game.cpp_CGame_renderOverlay_FUN_004b47d0 at 004b4a5e
;   core_game.cpp_FUN_004b503e at 004b5066
;   core_game.cpp_FUN_004b51e0 at 004b5274
;   core_game.cpp_drawKeyBindingEntry_FUN_004b50ee at 004b5147
;   core_inv.cpp_CInventory_renderAllItems_FUN_004dda90 at 004ddcad
;   core_menu.cpp_FUN_004e7860 at 004e7999
;   core_menu.cpp_FUN_004e7dc0 at 004e7e52
;   ... and 13 more
;
; Referenced Globals:
;   undefined4 DAT_005c2074
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d1ad68
;   undefined4 DAT_01d1ad6c
;   undefined4 DAT_01d1ad70
;   undefined4 DAT_01d76c40
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_font.cpp_FUN_004b1460
;   unkafter_font.cpp_FUN_004b33d0
;   unkafter_palette.cpp_FUN_00509bc0
;   unkafter_palette.cpp_FUN_00509d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0a20
        ;   Label: engine_font.cpp_FUN_004b0a20
    PUSH ESI                            ; 004b0a21
    PUSH EDI                            ; 004b0a22
    PUSH EBP                            ; 004b0a23
    SUB ESP,0x1c                        ; 004b0a24
    MOV EBX,dword ptr [ESP + 0x30]      ; 004b0a27
    MOV EBP,dword ptr [ESP + 0x38]      ; 004b0a2b
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004b0a2f
    CMP dword ptr [EBX + 0x420c],0x0    ; 004b0a33
    JZ 0x004b0a91                       ; 004b0a3a
        ;   XREF to: 004b0a91 (CONDITIONAL_JUMP)  ; LAB_004b0a91
    CMP dword ptr [0x01c6cee8],0x0      ; 004b0a3c | DAT_01c6cee8
    JZ 0x004b0a91                       ; 004b0a43
        ;   XREF to: 004b0a91 (CONDITIONAL_JUMP)  ; LAB_004b0a91
    CMP dword ptr [EBX + 0x4210],0x0    ; 004b0a45
    JZ 0x004b0a7a                       ; 004b0a4c
        ;   XREF to: 004b0a7a (CONDITIONAL_JUMP)  ; LAB_004b0a7a
    MOV ESI,dword ptr [ESP + 0x44]      ; 004b0a4e
    PUSH ESI                            ; 004b0a52
    MOV EAX,dword ptr [ESP + 0x44]      ; 004b0a53
    PUSH EAX                            ; 004b0a57
    PUSH EDI                            ; 004b0a58
    PUSH EBP                            ; 004b0a59
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b0a5a
    PUSH EDX                            ; 004b0a5e
    MOV ECX,dword ptr [EBX + 0x4214]    ; 004b0a5f
    PUSH ECX                            ; 004b0a65
    CALL unkafter_palette.cpp_FUN_00509bc0 ; 004b0a66
        ;   XREF to: 00509bc0 (UNCONDITIONAL_CALL)  ; undefined unkafter_palette.cpp_FUN_00509bc0()
    ADD ESP,0x18                        ; 004b0a6b
    MOV ESI,EAX                         ; 004b0a6e
        ;   Label: LAB_004b0a6e
    MOV EAX,ESI                         ; 004b0a70
    ADD ESP,0x1c                        ; 004b0a72
    POP EBP                             ; 004b0a75
    POP EDI                             ; 004b0a76
    POP ESI                             ; 004b0a77
    POP EBX                             ; 004b0a78
    RET                                 ; 004b0a79
    MOV EDX,dword ptr [ESP + 0x40]      ; 004b0a7a
        ;   Label: LAB_004b0a7a
    PUSH EDX                            ; 004b0a7e
    PUSH EDI                            ; 004b0a7f
    PUSH EBP                            ; 004b0a80
    MOV ECX,dword ptr [ESP + 0x40]      ; 004b0a81
    PUSH ECX                            ; 004b0a85
    PUSH EBX                            ; 004b0a86
    CALL unkafter_font.cpp_FUN_004b33d0 ; 004b0a87
        ;   XREF to: 004b33d0 (UNCONDITIONAL_CALL)  ; undefined unkafter_font.cpp_FUN_004b33d0()
    ADD ESP,0x14                        ; 004b0a8c
    JMP 0x004b0a6e                      ; 004b0a8f
        ;   XREF to: 004b0a6e (UNCONDITIONAL_JUMP)  ; LAB_004b0a6e
    CMP dword ptr [EBX + 0x4210],0x0    ; 004b0a91
        ;   Label: LAB_004b0a91
    JZ 0x004b0b24                       ; 004b0a98
        ;   XREF to: 004b0b24 (CONDITIONAL_JUMP)  ; LAB_004b0b24
    XOR ESI,ESI                         ; 004b0a9e
    MOV ECX,dword ptr [ESP + 0x34]      ; 004b0aa0
    MOV dword ptr [ESP + 0xc],ESI       ; 004b0aa4
    MOV DL,0xa                          ; 004b0aa8
        ;   Label: LAB_004b0aa8
    MOV ESI,ECX                         ; 004b0aaa
    MOV AL,byte ptr [ESI]               ; 004b0aac
        ;   Label: LAB_004b0aac
    CMP AL,DL                           ; 004b0aae
    JZ 0x004b0ac4                       ; 004b0ab0
        ;   XREF to: 004b0ac4 (CONDITIONAL_JUMP)  ; LAB_004b0ac4
    CMP AL,0x0                          ; 004b0ab2
    JZ 0x004b0ac2                       ; 004b0ab4
        ;   XREF to: 004b0ac2 (CONDITIONAL_JUMP)  ; LAB_004b0ac2
    INC ESI                             ; 004b0ab6
    MOV AL,byte ptr [ESI]               ; 004b0ab7
    CMP AL,DL                           ; 004b0ab9
    JZ 0x004b0ac4                       ; 004b0abb
        ;   XREF to: 004b0ac4 (CONDITIONAL_JUMP)  ; LAB_004b0ac4
    INC ESI                             ; 004b0abd
    CMP AL,0x0                          ; 004b0abe
    JNZ 0x004b0aac                      ; 004b0ac0
        ;   XREF to: 004b0aac (CONDITIONAL_JUMP)  ; LAB_004b0aac
    SUB ESI,ESI                         ; 004b0ac2
        ;   Label: LAB_004b0ac2
    MOV dword ptr [ESP + 0x18],ESI      ; 004b0ac4
        ;   Label: LAB_004b0ac4
    TEST ESI,ESI                        ; 004b0ac8
    JZ 0x004b0acf                       ; 004b0aca
        ;   XREF to: 004b0acf (CONDITIONAL_JUMP)  ; LAB_004b0acf
    MOV byte ptr [ESI],0x0              ; 004b0acc
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b0acf
        ;   Label: LAB_004b0acf
    PUSH EDX                            ; 004b0ad3
    MOV ESI,dword ptr [ESP + 0x44]      ; 004b0ad4
    PUSH ESI                            ; 004b0ad8
    PUSH EDI                            ; 004b0ad9
    PUSH EBP                            ; 004b0ada
    PUSH ECX                            ; 004b0adb
    MOV EAX,dword ptr [EBX + 0x4214]    ; 004b0adc
    PUSH EAX                            ; 004b0ae2
    CALL unkafter_palette.cpp_FUN_00509bc0 ; 004b0ae3
        ;   XREF to: 00509bc0 (UNCONDITIONAL_CALL)  ; undefined unkafter_palette.cpp_FUN_00509bc0()
    ADD ESP,0x18                        ; 004b0ae8
    MOV EDX,dword ptr [EBX + 0x4214]    ; 004b0aeb
    PUSH EDX                            ; 004b0af1
    CALL unkafter_palette.cpp_FUN_00509d90 ; 004b0af2
        ;   XREF to: 00509d90 (UNCONDITIONAL_CALL)  ; undefined unkafter_palette.cpp_FUN_00509d90()
    ADD ESP,0x4                         ; 004b0af7
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b0afa
    TEST ECX,ECX                        ; 004b0afe
    JZ 0x004b0b16                       ; 004b0b00
        ;   XREF to: 004b0b16 (CONDITIONAL_JUMP)  ; LAB_004b0b16
    MOV byte ptr [ECX],0xa              ; 004b0b02
    MOV ESI,dword ptr [EBX + 0x41f0]    ; 004b0b05
    ADD ESI,dword ptr [EBX + 0x41f8]    ; 004b0b0b
    INC ECX                             ; 004b0b11
    ADD EDI,ESI                         ; 004b0b12
    JMP 0x004b0aa8                      ; 004b0b14
        ;   XREF to: 004b0aa8 (UNCONDITIONAL_JUMP)  ; LAB_004b0aa8
    MOV ESI,dword ptr [ESP + 0xc]       ; 004b0b16
        ;   Label: LAB_004b0b16
    MOV EAX,ESI                         ; 004b0b1a
    ADD ESP,0x1c                        ; 004b0b1c
    POP EBP                             ; 004b0b1f
    POP EDI                             ; 004b0b20
    POP ESI                             ; 004b0b21
    POP EBX                             ; 004b0b22
    RET                                 ; 004b0b23
    CMP dword ptr [EBX + 0x420c],0x0    ; 004b0b24
        ;   Label: LAB_004b0b24
    JNZ 0x004b0b4f                      ; 004b0b2b
        ;   XREF to: 004b0b4f (CONDITIONAL_JUMP)  ; LAB_004b0b4f
    MOV dword ptr [ESP + 0x14],EBP      ; 004b0b2d
        ;   Label: LAB_004b0b2d
    MOV ESI,dword ptr [ESP + 0x34]      ; 004b0b31
        ;   Label: LAB_004b0b31
    MOVZX ESI,byte ptr [ESI]            ; 004b0b35
    TEST ESI,ESI                        ; 004b0b38
    JZ 0x004b0c91                       ; 004b0b3a
        ;   XREF to: 004b0c91 (CONDITIONAL_JUMP)  ; LAB_004b0c91
    CMP ESI,0xd                         ; 004b0b40
    JNZ 0x004b0c50                      ; 004b0b43
        ;   XREF to: 004b0c50 (CONDITIONAL_JUMP)  ; LAB_004b0c50
    INC dword ptr [ESP + 0x34]          ; 004b0b49
    JMP 0x004b0b31                      ; 004b0b4d
        ;   XREF to: 004b0b31 (UNCONDITIONAL_JUMP)  ; LAB_004b0b31
    MOV EDX,dword ptr [ESP + 0x40]      ; 004b0b4f
        ;   Label: LAB_004b0b4f
    CMP EDX,-0x2                        ; 004b0b53
    JNZ 0x004b0bd4                      ; 004b0b56
        ;   XREF to: 004b0bd4 (CONDITIONAL_JUMP)  ; LAB_004b0bd4
    MOV EAX,[0x01d1ad6c]                ; 004b0b5c | DAT_01d1ad6c
    MOV EDX,dword ptr [0x005fba20]      ; 004b0b61 | DAT_005fba20
    MOV ESI,dword ptr [0x01d1ad68]      ; 004b0b67 | DAT_01d1ad68
    MOV dword ptr [ESP + 0x10],EAX      ; 004b0b6d
    MOV EAX,[0x01d1ad70]                ; 004b0b71 | DAT_01d1ad70
    CMP EDX,0x20                        ; 004b0b76
    JNZ 0x004b0bc6                      ; 004b0b79
        ;   XREF to: 004b0bc6 (CONDITIONAL_JUMP)  ; LAB_004b0bc6
    MOV CL,byte ptr [0x01c6af74]        ; 004b0b7b | DAT_01c6af74
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b0b81
    SHL ESI,CL                          ; 004b0b85
    MOV CL,byte ptr [0x01c6af80]        ; 004b0b87 | DAT_01c6af80
    SHL EDX,CL                          ; 004b0b8d
    MOV CL,byte ptr [0x01c6af8c]        ; 004b0b8f | DAT_01c6af8c
    OR ESI,EDX                          ; 004b0b95
    SHL EAX,CL                          ; 004b0b97
    MOV ECX,ESI                         ; 004b0b99
    OR ECX,EAX                          ; 004b0b9b
        ;   Label: LAB_004b0b9b
    FLD float ptr [0x01d76c40]          ; 004b0b9d | DAT_01d76c40
        ;   Label: LAB_004b0b9d
    FMUL double ptr [0x005c2074]        ; 004b0ba3 | DAT_005c2074
    CALL crt_math.c_round_FUN_005a3120  ; 004b0ba9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x4]         ; 004b0bae
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b0bb2
    SHL EAX,0x18                        ; 004b0bb6
    OR ECX,EAX                          ; 004b0bb9
    MOV dword ptr [EBX + 0x1de0],ECX    ; 004b0bbb
    JMP 0x004b0b2d                      ; 004b0bc1
        ;   XREF to: 004b0b2d (UNCONDITIONAL_JUMP)  ; LAB_004b0b2d
    MOV ECX,dword ptr [ESP + 0x10]      ; 004b0bc6
        ;   Label: LAB_004b0bc6
    SHL ESI,0x10                        ; 004b0bca
    SHL ECX,0x8                         ; 004b0bcd
    OR ECX,ESI                          ; 004b0bd0
    JMP 0x004b0b9b                      ; 004b0bd2
        ;   XREF to: 004b0b9b (UNCONDITIONAL_JUMP)  ; LAB_004b0b9b
    TEST EDX,EDX                        ; 004b0bd4
        ;   Label: LAB_004b0bd4
    JL 0x004b0c46                       ; 004b0bd6
        ;   XREF to: 004b0c46 (CONDITIONAL_JUMP)  ; LAB_004b0c46
    MOV ECX,EDX                         ; 004b0bd8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b0bda
    SUB EAX,EDX                         ; 004b0be1
    XOR ECX,EDX                         ; 004b0be3
    MOV CL,byte ptr [EAX + 0x1c6af9a]   ; 004b0be5 | DAT_01c6af9a
    MOVZX ESI,byte ptr [EAX + 0x1c6af99] ; 004b0beb | DAT_01c6af99
    MOV dword ptr [ESP],ECX             ; 004b0bf2
    MOV AL,byte ptr [EAX + 0x1c6af98]   ; 004b0bf5 | DAT_01c6af98
    MOV EDX,dword ptr [0x005fba20]      ; 004b0bfb | DAT_005fba20
    AND EAX,0xff                        ; 004b0c01
    CMP EDX,0x20                        ; 004b0c06
    JNZ 0x004b0c39                      ; 004b0c09
        ;   XREF to: 004b0c39 (CONDITIONAL_JUMP)  ; LAB_004b0c39
    MOV CL,byte ptr [0x01c6af74]        ; 004b0c0b | DAT_01c6af74
    SHL EAX,CL                          ; 004b0c11
    MOV CL,byte ptr [0x01c6af80]        ; 004b0c13 | DAT_01c6af80
    MOV dword ptr [ESP + 0x8],EAX       ; 004b0c19
    MOV EAX,ESI                         ; 004b0c1d
    SHL EAX,CL                          ; 004b0c1f
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b0c21
    MOV EDX,dword ptr [ESP]             ; 004b0c25
    OR EAX,ECX                          ; 004b0c28
    MOV CL,byte ptr [0x01c6af8c]        ; 004b0c2a | DAT_01c6af8c
    SHL EDX,CL                          ; 004b0c30
    MOV ECX,EDX                         ; 004b0c32
    JMP 0x004b0b9b                      ; 004b0c34
        ;   XREF to: 004b0b9b (UNCONDITIONAL_JUMP)  ; LAB_004b0b9b
    SHL ESI,0x8                         ; 004b0c39
        ;   Label: LAB_004b0c39
    SHL EAX,0x10                        ; 004b0c3c
    OR EAX,ESI                          ; 004b0c3f
    JMP 0x004b0b9b                      ; 004b0c41
        ;   XREF to: 004b0b9b (UNCONDITIONAL_JUMP)  ; LAB_004b0b9b
    MOV ECX,0xffffff                    ; 004b0c46
        ;   Label: LAB_004b0c46
    JMP 0x004b0b9d                      ; 004b0c4b
        ;   XREF to: 004b0b9d (UNCONDITIONAL_JUMP)  ; LAB_004b0b9d
    CMP ESI,0xa                         ; 004b0c50
        ;   Label: LAB_004b0c50
    JNZ 0x004b0c70                      ; 004b0c53
        ;   XREF to: 004b0c70 (CONDITIONAL_JUMP)  ; LAB_004b0c70
    MOV ECX,dword ptr [EBX + 0x41f0]    ; 004b0c55
    ADD ECX,dword ptr [EBX + 0x41f8]    ; 004b0c5b
    MOV EBP,dword ptr [ESP + 0x14]      ; 004b0c61
    ADD EDI,ECX                         ; 004b0c65
    INC dword ptr [ESP + 0x34]          ; 004b0c67
    JMP 0x004b0b31                      ; 004b0c6b
        ;   XREF to: 004b0b31 (UNCONDITIONAL_JUMP)  ; LAB_004b0b31
    MOV EAX,dword ptr [ESP + 0x44]      ; 004b0c70
        ;   Label: LAB_004b0c70
    PUSH EAX                            ; 004b0c74
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b0c75
    PUSH EDX                            ; 004b0c79
    PUSH EDI                            ; 004b0c7a
    PUSH EBP                            ; 004b0c7b
    PUSH ESI                            ; 004b0c7c
    PUSH EBX                            ; 004b0c7d
    CALL engine_font.cpp_FUN_004b1460   ; 004b0c7e
        ;   XREF to: 004b1460 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b1460(CBitFont * this_ptr, int character_code, int x, int y, ...)
    ADD ESP,0x18                        ; 004b0c83
    ADD EBP,EAX                         ; 004b0c86
    INC dword ptr [ESP + 0x34]          ; 004b0c88
    JMP 0x004b0b31                      ; 004b0c8c
        ;   XREF to: 004b0b31 (UNCONDITIONAL_JUMP)  ; LAB_004b0b31
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b0c91
        ;   Label: LAB_004b0c91
    MOV ESI,EBP                         ; 004b0c95
    SUB ESI,EBX                         ; 004b0c97
    MOV EAX,ESI                         ; 004b0c99
    ADD ESP,0x1c                        ; 004b0c9b
    POP EBP                             ; 004b0c9e
    POP EDI                             ; 004b0c9f
    POP ESI                             ; 004b0ca0
    POP EBX                             ; 004b0ca1
    RET                                 ; 004b0ca2

