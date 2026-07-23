; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_0050e8a0(int *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004a3b90 at 004a3dfa
;
; Referenced Globals:
;   TerminatedCString s_Set_state_version_00590882
;   TerminatedCString s_s_1_00590898
;   string s_//_Camera_count,_enabled_list_0059089b
;   TerminatedCString s_d_005908ba
;   TerminatedCString s_d_005908be
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e8a0
        ;   Label: core_set.cpp_CDemonSet_saveStateInfo_FUN_0050e8a0
    PUSH EDI                            ; 0050e8a1
    PUSH EBP                            ; 0050e8a2
    MOV EBP,dword ptr [ESP + 0x10]      ; 0050e8a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0050e8a7
    PUSH 0x590882                       ; 0050e8ab | = "// Set state version\n"
    PUSH EDI                            ; 0050e8b0
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0050e8b1
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0050e8b6
    PUSH 0x590898                       ; 0050e8b9 | = "1\n"
    PUSH EDI                            ; 0050e8be
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0050e8bf
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0050e8c4
    PUSH 0x59089b                       ; 0050e8c7 | = "// Camera count, enabled list\n"
    PUSH EDI                            ; 0050e8cc
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0050e8cd
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0050e8d2
    MOV EDX,dword ptr [EBP]             ; 0050e8d5
    PUSH EDX                            ; 0050e8d8
    PUSH 0x5908ba                       ; 0050e8d9 | = "%d\n"
    PUSH EDI                            ; 0050e8de
    XOR EBX,EBX                         ; 0050e8df
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0050e8e1
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ECX,dword ptr [EBP]             ; 0050e8e6
    ADD ESP,0xc                         ; 0050e8e9
    TEST ECX,ECX                        ; 0050e8ec
    JLE 0x0050e917                      ; 0050e8ee
        ;   XREF to: 0050e917 (CONDITIONAL_JUMP)  ; LAB_0050e917
    PUSH ESI                            ; 0050e8f0
    MOV ESI,EBP                         ; 0050e8f1
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 0050e8f3
        ;   Label: LAB_0050e8f3
    PUSH EAX                            ; 0050e8f9
    PUSH 0x5908be                       ; 0050e8fa | = "%d\n"
    PUSH EDI                            ; 0050e8ff
    ADD ESI,0x1a0                       ; 0050e900
    INC EBX                             ; 0050e906
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0050e907
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDX,dword ptr [EBP]             ; 0050e90c
    ADD ESP,0xc                         ; 0050e90f
    CMP EBX,EDX                         ; 0050e912
    JL 0x0050e8f3                       ; 0050e914
        ;   XREF to: 0050e8f3 (CONDITIONAL_JUMP)  ; LAB_0050e8f3
    POP ESI                             ; 0050e916
    POP EBP                             ; 0050e917
        ;   Label: LAB_0050e917
    POP EDI                             ; 0050e918
    POP EBX                             ; 0050e919
    RET                                 ; 0050e91a

