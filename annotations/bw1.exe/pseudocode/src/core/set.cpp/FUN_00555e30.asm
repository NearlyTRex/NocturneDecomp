; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_00555e30(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004d6990 at 004d7174
;
; Referenced Globals:
;   TerminatedCString s_anon_005f0c72
;   undefined4 DAT_005f0c7a
;   TerminatedCString s_core_set_cpp_005f0c7e
;   TerminatedCString s_Set_saveState_info_is_in_005f0c8e
;   TerminatedCString s_anon_005f0cb7
;   undefined4 DAT_005f0cbf
;   TerminatedCString s_The_set_has_changed_sinc_005f0cc3
;   undefined4 DAT_005f0d29
;   TerminatedCString s_anon_005f0d2d
;   undefined4 DAT_005f0d35
;   TerminatedCString s_anon_005f0d39
;   undefined4 DAT_005f0d41
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fscanf_FUN_005c04b0
;   shape_edittool.cpp_FUN_00494340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555e30
        ;   Label: core_set.cpp_FUN_00555e30
    PUSH ESI                            ; 00555e31
    PUSH EDI                            ; 00555e32
    PUSH EBP                            ; 00555e33
    SUB ESP,0x14                        ; 00555e34
    MOV EBP,dword ptr [ESP + 0x28]      ; 00555e37
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00555e3b
    PUSH 0x5f0c72                       ; 00555e3f | = "%*[^\n]\n"
    PUSH EDI                            ; 00555e44
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00555e45
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 00555e4a
    MOV EAX,ESP                         ; 00555e4d
    PUSH EAX                            ; 00555e4f
    PUSH 0x5f0c7a                       ; 00555e50 | DAT_005f0c7a
    PUSH EDI                            ; 00555e55
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00555e56
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 00555e5b
    MOV EDX,dword ptr [ESP]             ; 00555e5e
    CMP EDX,0x1                         ; 00555e61
    JL 0x00555e6b                       ; 00555e64
        ;   XREF to: 00555e6b (CONDITIONAL_JUMP)  ; LAB_00555e6b
    CMP EDX,0x3                         ; 00555e66
    JLE 0x00555e92                      ; 00555e69
        ;   XREF to: 00555e92 (CONDITIONAL_JUMP)  ; LAB_00555e92
    MOV EAX,dword ptr [ESP]             ; 00555e6b
        ;   Label: LAB_00555e6b
    PUSH EAX                            ; 00555e6e
    MOV EBX,0x5f0c7e                    ; 00555e6f | = "..\\core\\set.cpp"
    MOV ESI,0x1494                      ; 00555e74
    PUSH 0x5f0c8e                       ; 00555e79 | = "Set saveState info is invalid version %d"
    MOV dword ptr [0x01d1d400],EBX      ; 00555e7e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00555e84 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00555e8a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00555e8f
    PUSH 0x5f0cb7                       ; 00555e92 | = "%*[^\n]\n"
        ;   Label: LAB_00555e92
    PUSH EDI                            ; 00555e97
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00555e98
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 00555e9d
    LEA EAX,[ESP + 0x4]                 ; 00555ea0
    PUSH EAX                            ; 00555ea4
    PUSH 0x5f0cbf                       ; 00555ea5 | DAT_005f0cbf
    PUSH EDI                            ; 00555eaa
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00555eab
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 00555eb0
    MOV EDX,dword ptr [EBP]             ; 00555eb3
    CMP EDX,dword ptr [ESP + 0x4]       ; 00555eb6
    JZ 0x00555ed0                       ; 00555eba
        ;   XREF to: 00555ed0 (CONDITIONAL_JUMP)  ; LAB_00555ed0
    PUSH 0x5f0cc3                       ; 00555ebc | = "The set has changed since you saved y..."
    MOV ECX,dword ptr [0x0061abc0]      ; 00555ec1 | g_CEditorToolsPtr
    PUSH ECX                            ; 00555ec7
    CALL shape_edittool.cpp_FUN_00494340 ; 00555ec8
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x8                         ; 00555ecd
    MOV ESI,dword ptr [ESP + 0x4]       ; 00555ed0
        ;   Label: LAB_00555ed0
    XOR EBX,EBX                         ; 00555ed4
    TEST ESI,ESI                        ; 00555ed6
    JLE 0x00555f0f                      ; 00555ed8
        ;   XREF to: 00555f0f (CONDITIONAL_JUMP)  ; LAB_00555f0f
    MOV ESI,EBP                         ; 00555eda
    LEA EAX,[ESP + 0x8]                 ; 00555edc
        ;   Label: LAB_00555edc
    PUSH EAX                            ; 00555ee0
    PUSH 0x5f0d29                       ; 00555ee1 | DAT_005f0d29
    PUSH EDI                            ; 00555ee6
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00555ee7
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [EBP]             ; 00555eec
    ADD ESP,0xc                         ; 00555eef
    CMP EBX,EAX                         ; 00555ef2
    JGE 0x00555f00                      ; 00555ef4
        ;   XREF to: 00555f00 (CONDITIONAL_JUMP)  ; LAB_00555f00
    MOV EAX,dword ptr [ESP + 0x8]       ; 00555ef6
    MOV dword ptr [ESI + 0x1a4],EAX     ; 00555efa
    MOV EAX,dword ptr [ESP + 0x4]       ; 00555f00
        ;   Label: LAB_00555f00
    INC EBX                             ; 00555f04
    ADD ESI,0x1a4                       ; 00555f05
    CMP EBX,EAX                         ; 00555f0b
    JL 0x00555edc                       ; 00555f0d
        ;   XREF to: 00555edc (CONDITIONAL_JUMP)  ; LAB_00555edc
    CMP dword ptr [ESP],0x2             ; 00555f0f
        ;   Label: LAB_00555f0f
    JL 0x00555f72                       ; 00555f13
        ;   XREF to: 00555f72 (CONDITIONAL_JUMP)  ; LAB_00555f72
    CMP dword ptr [ESP + 0x4],0x0       ; 00555f15
    JLE 0x00555f72                      ; 00555f1a
        ;   XREF to: 00555f72 (CONDITIONAL_JUMP)  ; LAB_00555f72
    PUSH 0x5f0d2d                       ; 00555f1c | = "%*[^\n]\n"
        ;   Label: LAB_00555f1c
    PUSH EDI                            ; 00555f21
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00555f22
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 00555f27
    MOV ECX,dword ptr [ESP + 0x4]       ; 00555f2a
    XOR EBX,EBX                         ; 00555f2e
    TEST ECX,ECX                        ; 00555f30
    JLE 0x00555f69                      ; 00555f32
        ;   XREF to: 00555f69 (CONDITIONAL_JUMP)  ; LAB_00555f69
    MOV ESI,EBP                         ; 00555f34
    LEA EAX,[ESP + 0xc]                 ; 00555f36
        ;   Label: LAB_00555f36
    PUSH EAX                            ; 00555f3a
    PUSH 0x5f0d35                       ; 00555f3b | DAT_005f0d35
    PUSH EDI                            ; 00555f40
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00555f41
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EDX,dword ptr [EBP]             ; 00555f46
    ADD ESP,0xc                         ; 00555f49
    CMP EBX,EDX                         ; 00555f4c
    JGE 0x00555f5a                      ; 00555f4e
        ;   XREF to: 00555f5a (CONDITIONAL_JUMP)  ; LAB_00555f5a
    MOV EAX,dword ptr [ESP + 0xc]       ; 00555f50
    MOV dword ptr [ESI + 0x14c],EAX     ; 00555f54
    MOV EAX,dword ptr [ESP + 0x4]       ; 00555f5a
        ;   Label: LAB_00555f5a
    INC EBX                             ; 00555f5e
    ADD ESI,0x1a4                       ; 00555f5f
    CMP EBX,EAX                         ; 00555f65
    JL 0x00555f36                       ; 00555f67
        ;   XREF to: 00555f36 (CONDITIONAL_JUMP)  ; LAB_00555f36
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555f69
        ;   Label: LAB_00555f69
    INC EBX                             ; 00555f6d
    CMP EBX,EDX                         ; 00555f6e
    JL 0x00555f1c                       ; 00555f70
        ;   XREF to: 00555f1c (CONDITIONAL_JUMP)  ; LAB_00555f1c
    CMP dword ptr [ESP],0x3             ; 00555f72
        ;   Label: LAB_00555f72
    JL 0x00555fcb                       ; 00555f76
        ;   XREF to: 00555fcb (CONDITIONAL_JUMP)  ; LAB_00555fcb
    CMP dword ptr [ESP + 0x4],0x0       ; 00555f78
    JLE 0x00555fcb                      ; 00555f7d
        ;   XREF to: 00555fcb (CONDITIONAL_JUMP)  ; LAB_00555fcb
    PUSH 0x5f0d39                       ; 00555f7f | = "%*[^\n]\n"
        ;   Label: LAB_00555f7f
    PUSH EDI                            ; 00555f84
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00555f85
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x8                         ; 00555f8a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00555f8d
    XOR EBX,EBX                         ; 00555f91
    TEST EAX,EAX                        ; 00555f93
    JLE 0x00555fc2                      ; 00555f95
        ;   XREF to: 00555fc2 (CONDITIONAL_JUMP)  ; LAB_00555fc2
    MOV ESI,EBP                         ; 00555f97
    LEA EAX,[ESP + 0x10]                ; 00555f99
        ;   Label: LAB_00555f99
    PUSH EAX                            ; 00555f9d
    PUSH 0x5f0d41                       ; 00555f9e | DAT_005f0d41
    PUSH EDI                            ; 00555fa3
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00555fa4
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV ECX,dword ptr [EBP]             ; 00555fa9
    ADD ESP,0xc                         ; 00555fac
    CMP EBX,ECX                         ; 00555faf
    JL 0x00555fd3                       ; 00555fb1
        ;   XREF to: 00555fd3 (CONDITIONAL_JUMP)  ; LAB_00555fd3
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555fb3
        ;   Label: LAB_00555fb3
    INC EBX                             ; 00555fb7
    ADD ESI,0x1a4                       ; 00555fb8
    CMP EBX,EDX                         ; 00555fbe
    JL 0x00555f99                       ; 00555fc0
        ;   XREF to: 00555f99 (CONDITIONAL_JUMP)  ; LAB_00555f99
    MOV ESI,dword ptr [ESP + 0x4]       ; 00555fc2
        ;   Label: LAB_00555fc2
    INC EBX                             ; 00555fc6
    CMP EBX,ESI                         ; 00555fc7
    JL 0x00555f7f                       ; 00555fc9
        ;   XREF to: 00555f7f (CONDITIONAL_JUMP)  ; LAB_00555f7f
    ADD ESP,0x14                        ; 00555fcb
        ;   Label: LAB_00555fcb
    POP EBP                             ; 00555fce
    POP EDI                             ; 00555fcf
    POP ESI                             ; 00555fd0
    POP EBX                             ; 00555fd1
    RET                                 ; 00555fd2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00555fd3
        ;   Label: LAB_00555fd3
    MOV dword ptr [ESI + 0x150],EAX     ; 00555fd7
    JMP 0x00555fb3                      ; 00555fdd
        ;   XREF to: 00555fb3 (UNCONDITIONAL_JUMP)  ; LAB_00555fb3

