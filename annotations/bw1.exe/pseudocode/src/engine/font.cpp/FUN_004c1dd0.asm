; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_font_cpp_FUN_004c1dd0(CBitFont *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6)
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
; XREF[25]:
;   core_flashlit.cpp_FUN_004b9f70 at 004b9fe4
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004be0f0 at 004be44e
;   core_fldnotes.cpp_SNotesMap_draw_FUN_004bc830 at 004bc997
;   core_fldnotes.cpp_SPageResourceText_draw_FUN_004ba930 at 004ba94e
;   core_game.cpp_CGame_renderOverlay_FUN_004cc2b0 at 004cc3be
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004ccc40 at 004ccccd
;   core_game.cpp_drawCreditsLine_FUN_004ccb00 at 004ccb21
;   core_game.cpp_drawKeyBindingEntry_FUN_004ccb80 at 004ccbd3
;   core_inv.cpp_FUN_004fae10 at 004fb00f
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0 at 004fef55
;   ... and 15 more
;
; Referenced Globals:
;   undefined4 DAT_005e0a56
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01c50948
;   undefined4 DAT_01cc8cd8
;   undefined4 DAT_01cc8cdc
;   undefined4 DAT_01cc8ce0
;   undefined4 DAT_01d224c0
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_font.cpp_FUN_004c2810
;   engine_font.cpp_FUN_004c47f0
;   engine_palette.cpp_FUN_00531ee0
;   engine_palette.cpp_FUN_005320b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1dd0
        ;   Label: engine_font.cpp_FUN_004c1dd0
    PUSH ESI                            ; 004c1dd1
    PUSH EDI                            ; 004c1dd2
    PUSH EBP                            ; 004c1dd3
    SUB ESP,0x1c                        ; 004c1dd4
    MOV EBX,dword ptr [ESP + 0x30]      ; 004c1dd7
    MOV EBP,dword ptr [ESP + 0x38]      ; 004c1ddb
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004c1ddf
    CMP dword ptr [EBX + 0x420c],0x0    ; 004c1de3
    JZ 0x004c1e41                       ; 004c1dea
        ;   XREF to: 004c1e41 (CONDITIONAL_JUMP)  ; LAB_004c1e41
    CMP dword ptr [0x01c50948],0x0      ; 004c1dec | DAT_01c50948
    JZ 0x004c1e41                       ; 004c1df3
        ;   XREF to: 004c1e41 (CONDITIONAL_JUMP)  ; LAB_004c1e41
    CMP dword ptr [EBX + 0x4210],0x0    ; 004c1df5
    JZ 0x004c1e2a                       ; 004c1dfc
        ;   XREF to: 004c1e2a (CONDITIONAL_JUMP)  ; LAB_004c1e2a
    MOV ESI,dword ptr [ESP + 0x44]      ; 004c1dfe
    PUSH ESI                            ; 004c1e02
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c1e03
    PUSH EAX                            ; 004c1e07
    PUSH EDI                            ; 004c1e08
    PUSH EBP                            ; 004c1e09
    MOV EDX,dword ptr [ESP + 0x44]      ; 004c1e0a
    PUSH EDX                            ; 004c1e0e
    MOV ECX,dword ptr [EBX + 0x4214]    ; 004c1e0f
    PUSH ECX                            ; 004c1e15
    CALL engine_palette.cpp_FUN_00531ee0 ; 004c1e16
        ;   XREF to: 00531ee0 (UNCONDITIONAL_CALL)  ; undefined engine_palette.cpp_FUN_00531ee0()
    ADD ESP,0x18                        ; 004c1e1b
    MOV ESI,EAX                         ; 004c1e1e
        ;   Label: LAB_004c1e1e
    MOV EAX,ESI                         ; 004c1e20
    ADD ESP,0x1c                        ; 004c1e22
    POP EBP                             ; 004c1e25
    POP EDI                             ; 004c1e26
    POP ESI                             ; 004c1e27
    POP EBX                             ; 004c1e28
    RET                                 ; 004c1e29
    MOV EDX,dword ptr [ESP + 0x40]      ; 004c1e2a
        ;   Label: LAB_004c1e2a
    PUSH EDX                            ; 004c1e2e
    PUSH EDI                            ; 004c1e2f
    PUSH EBP                            ; 004c1e30
    MOV ECX,dword ptr [ESP + 0x40]      ; 004c1e31
    PUSH ECX                            ; 004c1e35
    PUSH EBX                            ; 004c1e36
    CALL engine_font.cpp_FUN_004c47f0   ; 004c1e37
        ;   XREF to: 004c47f0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c47f0()
    ADD ESP,0x14                        ; 004c1e3c
    JMP 0x004c1e1e                      ; 004c1e3f
        ;   XREF to: 004c1e1e (UNCONDITIONAL_JUMP)  ; LAB_004c1e1e
    CMP dword ptr [EBX + 0x4210],0x0    ; 004c1e41
        ;   Label: LAB_004c1e41
    JZ 0x004c1ed4                       ; 004c1e48
        ;   XREF to: 004c1ed4 (CONDITIONAL_JUMP)  ; LAB_004c1ed4
    XOR ESI,ESI                         ; 004c1e4e
    MOV ECX,dword ptr [ESP + 0x34]      ; 004c1e50
    MOV dword ptr [ESP + 0xc],ESI       ; 004c1e54
    MOV DL,0xa                          ; 004c1e58
        ;   Label: LAB_004c1e58
    MOV ESI,ECX                         ; 004c1e5a
    MOV AL,byte ptr [ESI]               ; 004c1e5c
        ;   Label: LAB_004c1e5c
    CMP AL,DL                           ; 004c1e5e
    JZ 0x004c1e74                       ; 004c1e60
        ;   XREF to: 004c1e74 (CONDITIONAL_JUMP)  ; LAB_004c1e74
    CMP AL,0x0                          ; 004c1e62
    JZ 0x004c1e72                       ; 004c1e64
        ;   XREF to: 004c1e72 (CONDITIONAL_JUMP)  ; LAB_004c1e72
    INC ESI                             ; 004c1e66
    MOV AL,byte ptr [ESI]               ; 004c1e67
    CMP AL,DL                           ; 004c1e69
    JZ 0x004c1e74                       ; 004c1e6b
        ;   XREF to: 004c1e74 (CONDITIONAL_JUMP)  ; LAB_004c1e74
    INC ESI                             ; 004c1e6d
    CMP AL,0x0                          ; 004c1e6e
    JNZ 0x004c1e5c                      ; 004c1e70
        ;   XREF to: 004c1e5c (CONDITIONAL_JUMP)  ; LAB_004c1e5c
    SUB ESI,ESI                         ; 004c1e72
        ;   Label: LAB_004c1e72
    MOV dword ptr [ESP + 0x18],ESI      ; 004c1e74
        ;   Label: LAB_004c1e74
    TEST ESI,ESI                        ; 004c1e78
    JZ 0x004c1e7f                       ; 004c1e7a
        ;   XREF to: 004c1e7f (CONDITIONAL_JUMP)  ; LAB_004c1e7f
    MOV byte ptr [ESI],0x0              ; 004c1e7c
    MOV EDX,dword ptr [ESP + 0x44]      ; 004c1e7f
        ;   Label: LAB_004c1e7f
    PUSH EDX                            ; 004c1e83
    MOV ESI,dword ptr [ESP + 0x44]      ; 004c1e84
    PUSH ESI                            ; 004c1e88
    PUSH EDI                            ; 004c1e89
    PUSH EBP                            ; 004c1e8a
    PUSH ECX                            ; 004c1e8b
    MOV EAX,dword ptr [EBX + 0x4214]    ; 004c1e8c
    PUSH EAX                            ; 004c1e92
    CALL engine_palette.cpp_FUN_00531ee0 ; 004c1e93
        ;   XREF to: 00531ee0 (UNCONDITIONAL_CALL)  ; undefined engine_palette.cpp_FUN_00531ee0()
    ADD ESP,0x18                        ; 004c1e98
    MOV EDX,dword ptr [EBX + 0x4214]    ; 004c1e9b
    PUSH EDX                            ; 004c1ea1
    CALL engine_palette.cpp_FUN_005320b0 ; 004c1ea2
        ;   XREF to: 005320b0 (UNCONDITIONAL_CALL)  ; undefined engine_palette.cpp_FUN_005320b0()
    ADD ESP,0x4                         ; 004c1ea7
    MOV ECX,dword ptr [ESP + 0x18]      ; 004c1eaa
    TEST ECX,ECX                        ; 004c1eae
    JZ 0x004c1ec6                       ; 004c1eb0
        ;   XREF to: 004c1ec6 (CONDITIONAL_JUMP)  ; LAB_004c1ec6
    MOV byte ptr [ECX],0xa              ; 004c1eb2
    MOV ESI,dword ptr [EBX + 0x41f0]    ; 004c1eb5
    ADD ESI,dword ptr [EBX + 0x41f8]    ; 004c1ebb
    INC ECX                             ; 004c1ec1
    ADD EDI,ESI                         ; 004c1ec2
    JMP 0x004c1e58                      ; 004c1ec4
        ;   XREF to: 004c1e58 (UNCONDITIONAL_JUMP)  ; LAB_004c1e58
    MOV ESI,dword ptr [ESP + 0xc]       ; 004c1ec6
        ;   Label: LAB_004c1ec6
    MOV EAX,ESI                         ; 004c1eca
    ADD ESP,0x1c                        ; 004c1ecc
    POP EBP                             ; 004c1ecf
    POP EDI                             ; 004c1ed0
    POP ESI                             ; 004c1ed1
    POP EBX                             ; 004c1ed2
    RET                                 ; 004c1ed3
    CMP dword ptr [EBX + 0x420c],0x0    ; 004c1ed4
        ;   Label: LAB_004c1ed4
    JNZ 0x004c1eff                      ; 004c1edb
        ;   XREF to: 004c1eff (CONDITIONAL_JUMP)  ; LAB_004c1eff
    MOV dword ptr [ESP + 0x14],EBP      ; 004c1edd
        ;   Label: LAB_004c1edd
    MOV ESI,dword ptr [ESP + 0x34]      ; 004c1ee1
        ;   Label: LAB_004c1ee1
    MOVZX ESI,byte ptr [ESI]            ; 004c1ee5
    TEST ESI,ESI                        ; 004c1ee8
    JZ 0x004c2041                       ; 004c1eea
        ;   XREF to: 004c2041 (CONDITIONAL_JUMP)  ; LAB_004c2041
    CMP ESI,0xd                         ; 004c1ef0
    JNZ 0x004c2000                      ; 004c1ef3
        ;   XREF to: 004c2000 (CONDITIONAL_JUMP)  ; LAB_004c2000
    INC dword ptr [ESP + 0x34]          ; 004c1ef9
    JMP 0x004c1ee1                      ; 004c1efd
        ;   XREF to: 004c1ee1 (UNCONDITIONAL_JUMP)  ; LAB_004c1ee1
    MOV EDX,dword ptr [ESP + 0x40]      ; 004c1eff
        ;   Label: LAB_004c1eff
    CMP EDX,-0x2                        ; 004c1f03
    JNZ 0x004c1f84                      ; 004c1f06
        ;   XREF to: 004c1f84 (CONDITIONAL_JUMP)  ; LAB_004c1f84
    MOV EAX,[0x01cc8cdc]                ; 004c1f0c | DAT_01cc8cdc
    MOV EDX,dword ptr [0x0061b4a0]      ; 004c1f11 | DAT_0061b4a0
    MOV ESI,dword ptr [0x01cc8cd8]      ; 004c1f17 | DAT_01cc8cd8
    MOV dword ptr [ESP + 0x10],EAX      ; 004c1f1d
    MOV EAX,[0x01cc8ce0]                ; 004c1f21 | DAT_01cc8ce0
    CMP EDX,0x20                        ; 004c1f26
    JNZ 0x004c1f76                      ; 004c1f29
        ;   XREF to: 004c1f76 (CONDITIONAL_JUMP)  ; LAB_004c1f76
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c1f2b | DAT_01c4e9d4
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c1f31
    SHL ESI,CL                          ; 004c1f35
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c1f37 | DAT_01c4e9e0
    SHL EDX,CL                          ; 004c1f3d
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c1f3f | DAT_01c4e9ec
    OR ESI,EDX                          ; 004c1f45
    SHL EAX,CL                          ; 004c1f47
    MOV ECX,ESI                         ; 004c1f49
    OR ECX,EAX                          ; 004c1f4b
        ;   Label: LAB_004c1f4b
    FLD float ptr [0x01d224c0]          ; 004c1f4d | DAT_01d224c0
        ;   Label: LAB_004c1f4d
    FMUL double ptr [0x005e0a56]        ; 004c1f53 | DAT_005e0a56
    CALL crt_math.c_round_FUN_005c03a0  ; 004c1f59
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x4]         ; 004c1f5e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c1f62
    SHL EAX,0x18                        ; 004c1f66
    OR ECX,EAX                          ; 004c1f69
    MOV dword ptr [EBX + 0x1de0],ECX    ; 004c1f6b
    JMP 0x004c1edd                      ; 004c1f71
        ;   XREF to: 004c1edd (UNCONDITIONAL_JUMP)  ; LAB_004c1edd
    MOV ECX,dword ptr [ESP + 0x10]      ; 004c1f76
        ;   Label: LAB_004c1f76
    SHL ESI,0x10                        ; 004c1f7a
    SHL ECX,0x8                         ; 004c1f7d
    OR ECX,ESI                          ; 004c1f80
    JMP 0x004c1f4b                      ; 004c1f82
        ;   XREF to: 004c1f4b (UNCONDITIONAL_JUMP)  ; LAB_004c1f4b
    TEST EDX,EDX                        ; 004c1f84
        ;   Label: LAB_004c1f84
    JL 0x004c1ff6                       ; 004c1f86
        ;   XREF to: 004c1ff6 (CONDITIONAL_JUMP)  ; LAB_004c1ff6
    MOV ECX,EDX                         ; 004c1f88
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c1f8a
    SUB EAX,EDX                         ; 004c1f91
    XOR ECX,EDX                         ; 004c1f93
    MOV CL,byte ptr [EAX + 0x1c4e9fa]   ; 004c1f95 | DAT_01c4e9fa
    MOVZX ESI,byte ptr [EAX + 0x1c4e9f9] ; 004c1f9b | DAT_01c4e9f9
    MOV dword ptr [ESP],ECX             ; 004c1fa2
    MOV AL,byte ptr [EAX + 0x1c4e9f8]   ; 004c1fa5 | DAT_01c4e9f8
    MOV EDX,dword ptr [0x0061b4a0]      ; 004c1fab | DAT_0061b4a0
    AND EAX,0xff                        ; 004c1fb1
    CMP EDX,0x20                        ; 004c1fb6
    JNZ 0x004c1fe9                      ; 004c1fb9
        ;   XREF to: 004c1fe9 (CONDITIONAL_JUMP)  ; LAB_004c1fe9
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c1fbb | DAT_01c4e9d4
    SHL EAX,CL                          ; 004c1fc1
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c1fc3 | DAT_01c4e9e0
    MOV dword ptr [ESP + 0x8],EAX       ; 004c1fc9
    MOV EAX,ESI                         ; 004c1fcd
    SHL EAX,CL                          ; 004c1fcf
    MOV ECX,dword ptr [ESP + 0x8]       ; 004c1fd1
    MOV EDX,dword ptr [ESP]             ; 004c1fd5
    OR EAX,ECX                          ; 004c1fd8
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c1fda | DAT_01c4e9ec
    SHL EDX,CL                          ; 004c1fe0
    MOV ECX,EDX                         ; 004c1fe2
    JMP 0x004c1f4b                      ; 004c1fe4
        ;   XREF to: 004c1f4b (UNCONDITIONAL_JUMP)  ; LAB_004c1f4b
    SHL ESI,0x8                         ; 004c1fe9
        ;   Label: LAB_004c1fe9
    SHL EAX,0x10                        ; 004c1fec
    OR EAX,ESI                          ; 004c1fef
    JMP 0x004c1f4b                      ; 004c1ff1
        ;   XREF to: 004c1f4b (UNCONDITIONAL_JUMP)  ; LAB_004c1f4b
    MOV ECX,0xffffff                    ; 004c1ff6
        ;   Label: LAB_004c1ff6
    JMP 0x004c1f4d                      ; 004c1ffb
        ;   XREF to: 004c1f4d (UNCONDITIONAL_JUMP)  ; LAB_004c1f4d
    CMP ESI,0xa                         ; 004c2000
        ;   Label: LAB_004c2000
    JNZ 0x004c2020                      ; 004c2003
        ;   XREF to: 004c2020 (CONDITIONAL_JUMP)  ; LAB_004c2020
    MOV ECX,dword ptr [EBX + 0x41f0]    ; 004c2005
    ADD ECX,dword ptr [EBX + 0x41f8]    ; 004c200b
    MOV EBP,dword ptr [ESP + 0x14]      ; 004c2011
    ADD EDI,ECX                         ; 004c2015
    INC dword ptr [ESP + 0x34]          ; 004c2017
    JMP 0x004c1ee1                      ; 004c201b
        ;   XREF to: 004c1ee1 (UNCONDITIONAL_JUMP)  ; LAB_004c1ee1
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c2020
        ;   Label: LAB_004c2020
    PUSH EAX                            ; 004c2024
    MOV EDX,dword ptr [ESP + 0x44]      ; 004c2025
    PUSH EDX                            ; 004c2029
    PUSH EDI                            ; 004c202a
    PUSH EBP                            ; 004c202b
    PUSH ESI                            ; 004c202c
    PUSH EBX                            ; 004c202d
    CALL engine_font.cpp_FUN_004c2810   ; 004c202e
        ;   XREF to: 004c2810 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c2810(CBitFont * this_ptr, int character_code, int x, int y, ...)
    ADD ESP,0x18                        ; 004c2033
    ADD EBP,EAX                         ; 004c2036
    INC dword ptr [ESP + 0x34]          ; 004c2038
    JMP 0x004c1ee1                      ; 004c203c
        ;   XREF to: 004c1ee1 (UNCONDITIONAL_JUMP)  ; LAB_004c1ee1
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c2041
        ;   Label: LAB_004c2041
    MOV ESI,EBP                         ; 004c2045
    SUB ESI,EBX                         ; 004c2047
    MOV EAX,ESI                         ; 004c2049
    ADD ESP,0x1c                        ; 004c204b
    POP EBP                             ; 004c204e
    POP EDI                             ; 004c204f
    POP ESI                             ; 004c2050
    POP EBX                             ; 004c2051
    RET                                 ; 004c2052

