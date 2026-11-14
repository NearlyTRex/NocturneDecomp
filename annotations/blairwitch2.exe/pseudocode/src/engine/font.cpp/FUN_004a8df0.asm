; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_font_cpp_FUN_004a8df0(CBitFont *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[26]:
;   core_flashlit.cpp_FUN_004a16b0 at 004a1724
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004a5700 at 004a5a5e
;   core_fldnotes.cpp_SNotesMap_draw_FUN_004a3e40 at 004a3fa7
;   core_fldnotes.cpp_SPageResourceText_draw_FUN_004a2060 at 004a207e
;   core_game.cpp_CGame_renderOverlay_FUN_004b32c0 at 004b33ce
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004b3c50 at 004b3cdd
;   core_game.cpp_FUN_004b5190 at 004b55a9
;   core_game.cpp_drawCreditsLine_FUN_004b3b10 at 004b3b31
;   core_game.cpp_drawKeyBindingEntry_FUN_004b3b90 at 004b3be3
;   core_inv.cpp_FUN_004dd9b0 at 004ddb97
;   ... and 16 more
;
; Referenced Globals:
;   undefined4 DAT_005d69dd
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01c37788
;   undefined4 DAT_01cb0248
;   undefined4 DAT_01cb024c
;   undefined4 DAT_01cb0250
;   undefined4 DAT_01d09860
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_font.cpp_FUN_004a9870
;   engine_font.cpp_FUN_004ab840
;   engine_palette.cpp_FUN_00510cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8df0
        ;   Label: engine_font.cpp_FUN_004a8df0
    PUSH ESI                            ; 004a8df1
    PUSH EDI                            ; 004a8df2
    PUSH EBP                            ; 004a8df3
    SUB ESP,0x24                        ; 004a8df4
    MOV EBX,dword ptr [ESP + 0x38]      ; 004a8df7
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004a8dfb
    MOV EBP,dword ptr [ESP + 0x40]      ; 004a8dff
    MOV EDI,dword ptr [ESP + 0x44]      ; 004a8e03
    CMP dword ptr [EBX + 0x420c],0x0    ; 004a8e07
    JZ 0x004a8e59                       ; 004a8e0e
        ;   XREF to: 004a8e59 (CONDITIONAL_JUMP)  ; LAB_004a8e59
    CMP dword ptr [0x01c37788],0x0      ; 004a8e10 | DAT_01c37788
    JZ 0x004a8e59                       ; 004a8e17
        ;   XREF to: 004a8e59 (CONDITIONAL_JUMP)  ; LAB_004a8e59
    CMP dword ptr [EBX + 0x4210],0x0    ; 004a8e19
    JZ 0x004a8e46                       ; 004a8e20
        ;   XREF to: 004a8e46 (CONDITIONAL_JUMP)  ; LAB_004a8e46
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004a8e22
    PUSH EDX                            ; 004a8e26
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004a8e27
    PUSH ECX                            ; 004a8e2b
    PUSH EDI                            ; 004a8e2c
    PUSH EBP                            ; 004a8e2d
    PUSH ESI                            ; 004a8e2e
    MOV ESI,dword ptr [EBX + 0x4214]    ; 004a8e2f
    PUSH ESI                            ; 004a8e35
    CALL engine_palette.cpp_FUN_00510cd0 ; 004a8e36
        ;   XREF to: 00510cd0 (UNCONDITIONAL_CALL)  ; undefined engine_palette.cpp_FUN_00510cd0()
    ADD ESP,0x18                        ; 004a8e3b
    ADD ESP,0x24                        ; 004a8e3e
        ;   Label: LAB_004a8e3e
    POP EBP                             ; 004a8e41
    POP EDI                             ; 004a8e42
    POP ESI                             ; 004a8e43
    POP EBX                             ; 004a8e44
    RET                                 ; 004a8e45
    MOV EAX,dword ptr [ESP + 0x48]      ; 004a8e46
        ;   Label: LAB_004a8e46
    PUSH EAX                            ; 004a8e4a
    PUSH EDI                            ; 004a8e4b
    PUSH EBP                            ; 004a8e4c
    PUSH ESI                            ; 004a8e4d
    PUSH EBX                            ; 004a8e4e
    CALL engine_font.cpp_FUN_004ab840   ; 004a8e4f
        ;   XREF to: 004ab840 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004ab840()
    ADD ESP,0x14                        ; 004a8e54
    JMP 0x004a8e3e                      ; 004a8e57
        ;   XREF to: 004a8e3e (UNCONDITIONAL_JUMP)  ; LAB_004a8e3e
    CMP dword ptr [EBX + 0x4210],0x0    ; 004a8e59
        ;   Label: LAB_004a8e59
    JZ 0x004a8f1f                       ; 004a8e60
        ;   XREF to: 004a8f1f (CONDITIONAL_JUMP)  ; LAB_004a8f1f
    MOV dword ptr [ESP + 0x20],ESI      ; 004a8e66
    MOV DL,0xa                          ; 004a8e6a
        ;   Label: LAB_004a8e6a
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a8e6c
    MOV AL,byte ptr [ESI]               ; 004a8e70
        ;   Label: LAB_004a8e70
    CMP AL,DL                           ; 004a8e72
    JZ 0x004a8e88                       ; 004a8e74
        ;   XREF to: 004a8e88 (CONDITIONAL_JUMP)  ; LAB_004a8e88
    CMP AL,0x0                          ; 004a8e76
    JZ 0x004a8e86                       ; 004a8e78
        ;   XREF to: 004a8e86 (CONDITIONAL_JUMP)  ; LAB_004a8e86
    INC ESI                             ; 004a8e7a
    MOV AL,byte ptr [ESI]               ; 004a8e7b
    CMP AL,DL                           ; 004a8e7d
    JZ 0x004a8e88                       ; 004a8e7f
        ;   XREF to: 004a8e88 (CONDITIONAL_JUMP)  ; LAB_004a8e88
    INC ESI                             ; 004a8e81
    CMP AL,0x0                          ; 004a8e82
    JNZ 0x004a8e70                      ; 004a8e84
        ;   XREF to: 004a8e70 (CONDITIONAL_JUMP)  ; LAB_004a8e70
    SUB ESI,ESI                         ; 004a8e86
        ;   Label: LAB_004a8e86
    MOV dword ptr [ESP + 0x1c],ESI      ; 004a8e88
        ;   Label: LAB_004a8e88
    TEST ESI,ESI                        ; 004a8e8c
    JZ 0x004a8e93                       ; 004a8e8e
        ;   XREF to: 004a8e93 (CONDITIONAL_JUMP)  ; LAB_004a8e93
    MOV byte ptr [ESI],0x0              ; 004a8e90
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004a8e93
        ;   Label: LAB_004a8e93
    PUSH ECX                            ; 004a8e97
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004a8e98
    PUSH EDX                            ; 004a8e9c
    PUSH EDI                            ; 004a8e9d
    PUSH EBP                            ; 004a8e9e
    MOV ECX,dword ptr [ESP + 0x30]      ; 004a8e9f
    MOV EAX,dword ptr [EBX + 0x4214]    ; 004a8ea3
    PUSH ECX                            ; 004a8ea9
    MOV ESI,dword ptr [EAX + 0x6a44]    ; 004a8eaa
    PUSH EAX                            ; 004a8eb0
    CALL dword ptr [ESI + 0x4]          ; 004a8eb1
    ADD ESP,0x18                        ; 004a8eb4
    MOV ESI,EAX                         ; 004a8eb7
    CMP EAX,-0x1                        ; 004a8eb9
    JNZ 0x004a8eee                      ; 004a8ebc
        ;   XREF to: 004a8eee (CONDITIONAL_JUMP)  ; LAB_004a8eee
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004a8ebe
    PUSH ESI                            ; 004a8ec2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004a8ec3
    PUSH EAX                            ; 004a8ec7
    PUSH EDI                            ; 004a8ec8
    PUSH EBP                            ; 004a8ec9
    MOV EDX,dword ptr [ESP + 0x30]      ; 004a8eca
    PUSH EDX                            ; 004a8ece
    PUSH EBX                            ; 004a8ecf
    MOV dword ptr [EBX + 0x4210],0x0    ; 004a8ed0
    CALL engine_font.cpp_FUN_004a8df0   ; 004a8eda
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004a8edf
    MOV ESI,EAX                         ; 004a8ee2
    MOV dword ptr [EBX + 0x4210],0x1    ; 004a8ee4
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a8eee
        ;   Label: LAB_004a8eee
    TEST ECX,ECX                        ; 004a8ef2
    JZ 0x004a8f15                       ; 004a8ef4
        ;   XREF to: 004a8f15 (CONDITIONAL_JUMP)  ; LAB_004a8f15
    LEA EAX,[ECX + 0x1]                 ; 004a8ef6
    MOV byte ptr [ECX],0xa              ; 004a8ef9
    MOV dword ptr [ESP + 0x20],EAX      ; 004a8efc
    MOV ESI,dword ptr [EBX + 0x41f8]    ; 004a8f00
    MOV EAX,dword ptr [EBX + 0x41f0]    ; 004a8f06
    ADD EAX,ESI                         ; 004a8f0c
    ADD EDI,EAX                         ; 004a8f0e
    JMP 0x004a8e6a                      ; 004a8f10
        ;   XREF to: 004a8e6a (UNCONDITIONAL_JUMP)  ; LAB_004a8e6a
    MOV EAX,ESI                         ; 004a8f15
        ;   Label: LAB_004a8f15
    ADD ESP,0x24                        ; 004a8f17
    POP EBP                             ; 004a8f1a
    POP EDI                             ; 004a8f1b
    POP ESI                             ; 004a8f1c
    POP EBX                             ; 004a8f1d
    RET                                 ; 004a8f1e
    CMP dword ptr [EBX + 0x420c],0x0    ; 004a8f1f
        ;   Label: LAB_004a8f1f
    JNZ 0x004a8f44                      ; 004a8f26
        ;   XREF to: 004a8f44 (CONDITIONAL_JUMP)  ; LAB_004a8f44
    MOV dword ptr [ESP + 0x18],EBP      ; 004a8f28
        ;   Label: LAB_004a8f28
    XOR EAX,EAX                         ; 004a8f2c
        ;   Label: LAB_004a8f2c
    MOV AL,byte ptr [ESI]               ; 004a8f2e
    TEST EAX,EAX                        ; 004a8f30
    JZ 0x004a9094                       ; 004a8f32
        ;   XREF to: 004a9094 (CONDITIONAL_JUMP)  ; LAB_004a9094
    CMP EAX,0xd                         ; 004a8f38
    JNZ 0x004a9059                      ; 004a8f3b
        ;   XREF to: 004a9059 (CONDITIONAL_JUMP)  ; LAB_004a9059
    INC ESI                             ; 004a8f41
    JMP 0x004a8f2c                      ; 004a8f42
        ;   XREF to: 004a8f2c (UNCONDITIONAL_JUMP)  ; LAB_004a8f2c
    MOV ECX,dword ptr [ESP + 0x48]      ; 004a8f44
        ;   Label: LAB_004a8f44
    CMP ECX,-0x2                        ; 004a8f48
    JNZ 0x004a8fd3                      ; 004a8f4b
        ;   XREF to: 004a8fd3 (CONDITIONAL_JUMP)  ; LAB_004a8fd3
    MOV EAX,[0x01cb0248]                ; 004a8f51 | DAT_01cb0248
    MOV EDX,dword ptr [0x01cb0250]      ; 004a8f56 | DAT_01cb0250
    MOV ECX,dword ptr [0x006141c0]      ; 004a8f5c | DAT_006141c0
    MOV dword ptr [ESP + 0x4],EAX       ; 004a8f62
    MOV dword ptr [ESP + 0x10],EDX      ; 004a8f66
    MOV EAX,[0x01cb024c]                ; 004a8f6a | DAT_01cb024c
    CMP ECX,0x20                        ; 004a8f6f
    JNZ 0x004a8fc3                      ; 004a8f72
        ;   XREF to: 004a8fc3 (CONDITIONAL_JUMP)  ; LAB_004a8fc3
    MOV EDX,dword ptr [ESP + 0x4]       ; 004a8f74
    MOV CL,byte ptr [0x01c35814]        ; 004a8f78 | DAT_01c35814
    SHL EDX,CL                          ; 004a8f7e
    MOV CL,byte ptr [0x01c35820]        ; 004a8f80 | DAT_01c35820
    SHL EAX,CL                          ; 004a8f86
    MOV CL,byte ptr [0x01c3582c]        ; 004a8f88 | DAT_01c3582c
    OR EAX,EDX                          ; 004a8f8e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a8f90
    SHL EDX,CL                          ; 004a8f94
        ;   Label: LAB_004a8f94
    MOV ECX,EDX                         ; 004a8f96
    OR ECX,EAX                          ; 004a8f98
    FLD float ptr [0x01d09860]          ; 004a8f9a | DAT_01d09860
        ;   Label: LAB_004a8f9a
    FMUL double ptr [0x005d69dd]        ; 004a8fa0 | DAT_005d69dd
    CALL crt_math.c_round_FUN_005b7ff0  ; 004a8fa6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 004a8fab
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a8faf
    SHL EAX,0x18                        ; 004a8fb3
    OR ECX,EAX                          ; 004a8fb6
    MOV dword ptr [EBX + 0x1de0],ECX    ; 004a8fb8
    JMP 0x004a8f28                      ; 004a8fbe
        ;   XREF to: 004a8f28 (UNCONDITIONAL_JUMP)  ; LAB_004a8f28
    MOV ECX,dword ptr [ESP + 0x4]       ; 004a8fc3
        ;   Label: LAB_004a8fc3
    SHL EAX,0x8                         ; 004a8fc7
    SHL ECX,0x10                        ; 004a8fca
    OR ECX,EAX                          ; 004a8fcd
    OR ECX,EDX                          ; 004a8fcf
    JMP 0x004a8f9a                      ; 004a8fd1
        ;   XREF to: 004a8f9a (UNCONDITIONAL_JUMP)  ; LAB_004a8f9a
    TEST ECX,ECX                        ; 004a8fd3
        ;   Label: LAB_004a8fd3
    JL 0x004a904f                       ; 004a8fd5
        ;   XREF to: 004a904f (CONDITIONAL_JUMP)  ; LAB_004a904f
    LEA EAX,[ECX*0x4 + 0x0]             ; 004a8fd7
    SUB EAX,ECX                         ; 004a8fde
    XOR ECX,ECX                         ; 004a8fe0
    MOV CL,byte ptr [EAX + 0x1c3583a]   ; 004a8fe2 | DAT_01c3583a
    MOV dword ptr [ESP],ECX             ; 004a8fe8
    XOR ECX,ECX                         ; 004a8feb
    MOV CL,byte ptr [EAX + 0x1c35839]   ; 004a8fed | DAT_01c35839
    MOV dword ptr [ESP + 0x14],ECX      ; 004a8ff3
    MOV AL,byte ptr [EAX + 0x1c35838]   ; 004a8ff7 | DAT_01c35838
    MOV EDX,dword ptr [0x006141c0]      ; 004a8ffd | DAT_006141c0
    AND EAX,0xff                        ; 004a9003
    CMP EDX,0x20                        ; 004a9008
    JNZ 0x004a9039                      ; 004a900b
        ;   XREF to: 004a9039 (CONDITIONAL_JUMP)  ; LAB_004a9039
    MOV CL,byte ptr [0x01c35814]        ; 004a900d | DAT_01c35814
    SHL EAX,CL                          ; 004a9013
    MOV CL,byte ptr [0x01c35820]        ; 004a9015 | DAT_01c35820
    MOV dword ptr [ESP + 0xc],EAX       ; 004a901b
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a901f
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a9023
    SHL EAX,CL                          ; 004a9027
    MOV CL,byte ptr [0x01c3582c]        ; 004a9029 | DAT_01c3582c
    OR EAX,EDX                          ; 004a902f
    MOV EDX,dword ptr [ESP]             ; 004a9031
    JMP 0x004a8f94                      ; 004a9034
        ;   XREF to: 004a8f94 (UNCONDITIONAL_JUMP)  ; LAB_004a8f94
    MOV ECX,EAX                         ; 004a9039
        ;   Label: LAB_004a9039
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a903b
    SHL ECX,0x10                        ; 004a903f
    SHL EAX,0x8                         ; 004a9042
    OR ECX,EAX                          ; 004a9045
    OR ECX,dword ptr [ESP]              ; 004a9047
    JMP 0x004a8f9a                      ; 004a904a
        ;   XREF to: 004a8f9a (UNCONDITIONAL_JUMP)  ; LAB_004a8f9a
    MOV ECX,0xffffff                    ; 004a904f
        ;   Label: LAB_004a904f
    JMP 0x004a8f9a                      ; 004a9054
        ;   XREF to: 004a8f9a (UNCONDITIONAL_JUMP)  ; LAB_004a8f9a
    CMP EAX,0xa                         ; 004a9059
        ;   Label: LAB_004a9059
    JNZ 0x004a9076                      ; 004a905c
        ;   XREF to: 004a9076 (CONDITIONAL_JUMP)  ; LAB_004a9076
    MOV EAX,dword ptr [EBX + 0x41f0]    ; 004a905e
    ADD EAX,dword ptr [EBX + 0x41f8]    ; 004a9064
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a906a
    ADD EDI,EAX                         ; 004a906e
    INC ESI                             ; 004a9070
    JMP 0x004a8f2c                      ; 004a9071
        ;   XREF to: 004a8f2c (UNCONDITIONAL_JUMP)  ; LAB_004a8f2c
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004a9076
        ;   Label: LAB_004a9076
    PUSH EDX                            ; 004a907a
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004a907b
    PUSH ECX                            ; 004a907f
    PUSH EDI                            ; 004a9080
    PUSH EBP                            ; 004a9081
    PUSH EAX                            ; 004a9082
    PUSH EBX                            ; 004a9083
    CALL engine_font.cpp_FUN_004a9870   ; 004a9084
        ;   XREF to: 004a9870 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004a9870(CBitFont * this_ptr, int character_code, int x, int y, ...)
    ADD ESP,0x18                        ; 004a9089
    ADD EBP,EAX                         ; 004a908c
    INC ESI                             ; 004a908e
    JMP 0x004a8f2c                      ; 004a908f
        ;   XREF to: 004a8f2c (UNCONDITIONAL_JUMP)  ; LAB_004a8f2c
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a9094
        ;   Label: LAB_004a9094
    MOV EAX,EBP                         ; 004a9098
    SUB EAX,EDI                         ; 004a909a
    ADD ESP,0x24                        ; 004a909c
    POP EBP                             ; 004a909f
    POP EDI                             ; 004a90a0
    POP ESI                             ; 004a90a1
    POP EBX                             ; 004a90a2
    RET                                 ; 004a90a3

