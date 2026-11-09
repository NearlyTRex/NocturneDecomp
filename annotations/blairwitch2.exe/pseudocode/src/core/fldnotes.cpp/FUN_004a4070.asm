; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004a4070(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004a32e0 at 004a3429
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005d5e13
;   TerminatedCString s_Out_of_memory_005d5e28
;   undefined4 DAT_005d5e36
;   TerminatedCString s_core_fldnotes_cpp_005d5e3b
;   TerminatedCString s_NotesMap_paginate_unable_005d5e50
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a28b0
;   core_fldnotes.cpp_FUN_004a2ad0
;   core_fldnotes.cpp_FUN_004a4120
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4070
        ;   Label: core_fldnotes.cpp_FUN_004a4070
    PUSH ESI                            ; 004a4071
    PUSH EBP                            ; 004a4072
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a4073
    PUSH 0x1c                           ; 004a4077
    CALL crt_unknown.c_FUN_005b8be2     ; 004a4079
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004a407e
    TEST EAX,EAX                        ; 004a4081
    JNZ 0x004a40c7                      ; 004a4083
        ;   XREF to: 004a40c7 (CONDITIONAL_JUMP)  ; LAB_004a40c7
    MOV EBX,EAX                         ; 004a4085
        ;   Label: LAB_004a4085
    TEST EAX,EAX                        ; 004a4087
    JNZ 0x004a40b0                      ; 004a4089
        ;   XREF to: 004a40b0 (CONDITIONAL_JUMP)  ; LAB_004a40b0
    PUSH EDI                            ; 004a408b
    MOV ECX,0x5d5e13                    ; 004a408c | = "..\\core\\fldnotes.cpp"
    MOV EDI,0x82f                       ; 004a4091
    PUSH 0x5d5e28                       ; 004a4096 | = "Out of memory"
    MOV dword ptr [0x01d046a0],ECX      ; 004a409b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004a40a1 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a40a7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a40ac
    POP EDI                             ; 004a40af
    PUSH EBX                            ; 004a40b0
        ;   Label: LAB_004a40b0
    PUSH ESI                            ; 004a40b1
    CALL core_fldnotes.cpp_FUN_004a2ad0 ; 004a40b2
        ;   XREF to: 004a2ad0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a2ad0()
    ADD ESP,0x8                         ; 004a40b7
    TEST EAX,EAX                        ; 004a40ba
    JZ 0x004a40d7                       ; 004a40bc
        ;   XREF to: 004a40d7 (CONDITIONAL_JUMP)  ; LAB_004a40d7
    MOV EAX,0x1                         ; 004a40be
        ;   Label: LAB_004a40be
    POP EBP                             ; 004a40c3
    POP ESI                             ; 004a40c4
    POP EBX                             ; 004a40c5
    RET                                 ; 004a40c6
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a40c7
        ;   Label: LAB_004a40c7
    PUSH EDX                            ; 004a40cb
    PUSH EAX                            ; 004a40cc
    CALL core_fldnotes.cpp_FUN_004a4120 ; 004a40cd
        ;   XREF to: 004a4120 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a4120()
    ADD ESP,0x8                         ; 004a40d2
    JMP 0x004a4085                      ; 004a40d5
        ;   XREF to: 004a4085 (UNCONDITIONAL_JUMP)  ; LAB_004a4085
    PUSH 0x5d5e36                       ; 004a40d7 | DAT_005d5e36
        ;   Label: LAB_004a40d7
    PUSH ESI                            ; 004a40dc
    CALL core_fldnotes.cpp_FUN_004a28b0 ; 004a40dd
        ;   XREF to: 004a28b0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a28b0()
    ADD ESP,0x8                         ; 004a40e2
    PUSH EBX                            ; 004a40e5
    PUSH ESI                            ; 004a40e6
    CALL core_fldnotes.cpp_FUN_004a2ad0 ; 004a40e7
        ;   XREF to: 004a2ad0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a2ad0()
    ADD ESP,0x8                         ; 004a40ec
    TEST EAX,EAX                        ; 004a40ef
    JNZ 0x004a40be                      ; 004a40f1
        ;   XREF to: 004a40be (CONDITIONAL_JUMP)  ; LAB_004a40be
    MOV EBP,0x5d5e3b                    ; 004a40f3 | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x836                       ; 004a40f8
    PUSH 0x5d5e50                       ; 004a40fd | = "NotesMap::paginate - unable to add re..."
    MOV dword ptr [0x01d046a0],EBP      ; 004a4102 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004a4108 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a410d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a4112
    MOV EAX,0x1                         ; 004a4115
    POP EBP                             ; 004a411a
    POP ESI                             ; 004a411b
    POP EBX                             ; 004a411c
    RET                                 ; 004a411d

