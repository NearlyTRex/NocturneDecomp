; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_CScript_Unk18_FUN_005669a0()
;
;
; XREF[7]:
;   core_script.cpp_CScript_Unk20_FUN_00565130 at 0056516f
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 005648d1
;   core_script.cpp_FUN_00565ae0 at 00565c5a
;   core_script.cpp_FUN_00565d00 at 00565e1a
;   core_script.cpp_FUN_00565f70 at 0056605e
;   core_script.cpp_FUN_00566080 at 0056614d
;   core_script.cpp_FUN_005677a0 at 005679ee
;
; Referenced Globals:
;   undefined4 DAT_0310fcd8
;   undefined4 DAT_0310fcdc
;   undefined4 DAT_0310fce0
;   undefined4 DAT_0310fd0c
;   undefined4 DAT_0310fd10
;   undefined4 DAT_0310fd14
;   undefined4 DAT_0310fd44
;   undefined4 DAT_0310fd48
;
; Called Functions:
;   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005669a0
        ;   Label: core_script.cpp_CScript_Unk18_FUN_005669a0
    PUSH ESI                            ; 005669a1
    PUSH EDI                            ; 005669a2
    PUSH EBP                            ; 005669a3
    MOV EDX,dword ptr [ESP + 0x14]      ; 005669a4
    PUSH EDX                            ; 005669a8
    CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 ; 005669a9 | undefined core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910()
        ;   XREF to: 00566910 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0310fcdc]                ; 005669ae | undefined4 DAT_0310fcdc
    MOV ECX,dword ptr [0x0310fce0]      ; 005669b3 | undefined4 DAT_0310fce0
    MOV EBX,dword ptr [0x0310fcd8]      ; 005669b9 | undefined4 DAT_0310fcd8
    SUB EAX,ECX                         ; 005669bf
    ADD ESP,0x4                         ; 005669c1
    CMP EAX,EBX                         ; 005669c4
    JL 0x00566a61                       ; 005669c6 | LAB_00566a61
        ;   XREF to: 00566a61 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x0310fd48]      ; 005669cc | undefined4 DAT_0310fd48
        ;   Label: LAB_005669cc
    CMP ESI,dword ptr [0x0310fcd8]      ; 005669d2 | undefined4 DAT_0310fcd8
    JGE 0x005669e0                      ; 005669d8 | LAB_005669e0
        ;   XREF to: 005669e0 (CONDITIONAL_JUMP)
    MOV dword ptr [0x0310fcd8],ESI      ; 005669da | undefined4 DAT_0310fcd8
    MOV EDI,dword ptr [0x0310fce0]      ; 005669e0 | undefined4 DAT_0310fce0
        ;   Label: LAB_005669e0
    MOV EAX,[0x0310fd48]                ; 005669e6 | undefined4 DAT_0310fd48
    SUB EAX,EDI                         ; 005669eb
    MOV EBP,dword ptr [0x0310fcd8]      ; 005669ed | undefined4 DAT_0310fcd8
    INC EAX                             ; 005669f3
    CMP EAX,EBP                         ; 005669f4
    JLE 0x005669fd                      ; 005669f6 | LAB_005669fd
        ;   XREF to: 005669fd (CONDITIONAL_JUMP)
    MOV [0x0310fcd8],EAX                ; 005669f8 | undefined4 DAT_0310fcd8
    CMP dword ptr [0x0310fcd8],0x0      ; 005669fd | undefined4 DAT_0310fcd8
        ;   Label: LAB_005669fd
    JL 0x00566a6b                       ; 00566a04 | LAB_00566a6b
        ;   XREF to: 00566a6b (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x0310fd14]      ; 00566a06 | undefined4 DAT_0310fd14
        ;   Label: LAB_00566a06
    MOV EAX,[0x0310fd10]                ; 00566a0c | undefined4 DAT_0310fd10
    MOV EBX,dword ptr [0x0310fd0c]      ; 00566a11 | undefined4 DAT_0310fd0c
    SUB EAX,ECX                         ; 00566a17
    CMP EAX,EBX                         ; 00566a19
    JGE 0x00566a22                      ; 00566a1b | LAB_00566a22
        ;   XREF to: 00566a22 (CONDITIONAL_JUMP)
    MOV [0x0310fd0c],EAX                ; 00566a1d | undefined4 DAT_0310fd0c
    MOV ESI,dword ptr [0x0310fd44]      ; 00566a22 | undefined4 DAT_0310fd44
        ;   Label: LAB_00566a22
    CMP ESI,dword ptr [0x0310fd0c]      ; 00566a28 | undefined4 DAT_0310fd0c
    JGE 0x00566a36                      ; 00566a2e | LAB_00566a36
        ;   XREF to: 00566a36 (CONDITIONAL_JUMP)
    MOV dword ptr [0x0310fd0c],ESI      ; 00566a30 | undefined4 DAT_0310fd0c
    MOV EDI,dword ptr [0x0310fd14]      ; 00566a36 | undefined4 DAT_0310fd14
        ;   Label: LAB_00566a36
    MOV EAX,[0x0310fd44]                ; 00566a3c | undefined4 DAT_0310fd44
    SUB EAX,EDI                         ; 00566a41
    MOV EBP,dword ptr [0x0310fd0c]      ; 00566a43 | undefined4 DAT_0310fd0c
    INC EAX                             ; 00566a49
    CMP EAX,EBP                         ; 00566a4a
    JLE 0x00566a53                      ; 00566a4c | LAB_00566a53
        ;   XREF to: 00566a53 (CONDITIONAL_JUMP)
    MOV [0x0310fd0c],EAX                ; 00566a4e | undefined4 DAT_0310fd0c
    CMP dword ptr [0x0310fd0c],0x0      ; 00566a53 | undefined4 DAT_0310fd0c
        ;   Label: LAB_00566a53
    JL 0x00566a75                       ; 00566a5a | LAB_00566a75
        ;   XREF to: 00566a75 (CONDITIONAL_JUMP)
    POP EBP                             ; 00566a5c
    POP EDI                             ; 00566a5d
    POP ESI                             ; 00566a5e
    POP EBX                             ; 00566a5f
    RET                                 ; 00566a60
    MOV [0x0310fcd8],EAX                ; 00566a61 | undefined4 DAT_0310fcd8
        ;   Label: LAB_00566a61
    JMP 0x005669cc                      ; 00566a66 | LAB_005669cc
        ;   XREF to: 005669cc (UNCONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00566a6b
        ;   Label: LAB_00566a6b
    MOV dword ptr [0x0310fcd8],EDX      ; 00566a6d | undefined4 DAT_0310fcd8
    JMP 0x00566a06                      ; 00566a73 | LAB_00566a06
        ;   XREF to: 00566a06 (UNCONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00566a75
        ;   Label: LAB_00566a75
    MOV dword ptr [0x0310fd0c],EDX      ; 00566a77 | undefined4 DAT_0310fd0c
    POP EBP                             ; 00566a7d
    POP EDI                             ; 00566a7e
    POP ESI                             ; 00566a7f
    POP EBX                             ; 00566a80
    RET                                 ; 00566a81

