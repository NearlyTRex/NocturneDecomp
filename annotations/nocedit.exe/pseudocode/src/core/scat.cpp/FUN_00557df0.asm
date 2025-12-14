; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_scat.cpp_FUN_00557df0()
;
;
; Referenced Globals:
;   void* switchdataD_00557dc0 = 00557e46
;   double DOUBLE_0064141c = 0.950000000000000
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042e840
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557df0
        ;   Label: core_scat.cpp_FUN_00557df0
    SUB ESP,0x4                         ; 00557df1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00557df4
    PUSH EBX                            ; 00557df8
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 00557df9
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00557dfe
    TEST EAX,EAX                        ; 00557e01
    JZ 0x00557e16                       ; 00557e03
        ;   XREF to: 00557e16 (CONDITIONAL_JUMP)  ; LAB_00557e16
    PUSH ESI                            ; 00557e05
    MOV EDX,dword ptr [EBX + 0x1fbe8]   ; 00557e06
    TEST EDX,EDX                        ; 00557e0c
    JNZ 0x00557e1b                      ; 00557e0e
        ;   XREF to: 00557e1b (CONDITIONAL_JUMP)  ; LAB_00557e1b
    MOV EAX,0x1                         ; 00557e10
    POP ESI                             ; 00557e15
    ADD ESP,0x4                         ; 00557e16
        ;   Label: LAB_00557e16
    POP EBX                             ; 00557e19
    RET                                 ; 00557e1a
    PUSH EDX                            ; 00557e1b
        ;   Label: LAB_00557e1b
    MOV ESI,dword ptr [EDX + 0x154]     ; 00557e1c
    CALL dword ptr [ESI + 0x8]          ; 00557e22
    ADD ESP,0x4                         ; 00557e25
    MOV EAX,dword ptr [EBX + 0x1fbe8]   ; 00557e28
    XOR ESI,ESI                         ; 00557e2e
    TEST EAX,EAX                        ; 00557e30
    JZ 0x00557e4b                       ; 00557e32
        ;   XREF to: 00557e4b (CONDITIONAL_JUMP)  ; LAB_00557e4b
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 00557e34
    CMP EAX,0x8                         ; 00557e3a
    JA 0x00557e46                       ; 00557e3d
        ;   XREF to: 00557e46 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x557dc0]  ; 00557e3f | caseD_6 | caseD_8 | switchdataD_00557dc0
        ;   Label: switchD
    MOV EAX,0x2                         ; 00557e46
        ;   Label: caseD_7
    PUSH EAX                            ; 00557e4b
        ;   Label: LAB_00557e4b
    PUSH EBX                            ; 00557e4c
    CALL core_charactr.cpp_CCharacter_FUN_0042e840 ; 00557e4d
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_FUN_0042e840()
    MOV dword ptr [ESP + 0xc],EAX       ; 00557e52
    FLD float ptr [ESP + 0xc]           ; 00557e56
    ADD ESP,0x8                         ; 00557e5a
    FCOMP double ptr [0x0064141c]       ; 00557e5d | DOUBLE_0064141c
    FNSTSW AX                           ; 00557e63
    SAHF                                ; 00557e65
    JBE 0x00557e8d                      ; 00557e66
        ;   XREF to: 00557e8d (CONDITIONAL_JUMP)  ; LAB_00557e8d
    MOV EAX,dword ptr [EBX + 0x1fbe8]   ; 00557e68
        ;   Label: LAB_00557e68
    PUSH EAX                            ; 00557e6e
    MOV EBX,dword ptr [EAX + 0x154]     ; 00557e6f
    CALL dword ptr [EBX + 0x104]        ; 00557e75
    ADD ESP,0x4                         ; 00557e7b
    MOV EAX,0x1                         ; 00557e7e
    POP ESI                             ; 00557e83
    ADD ESP,0x4                         ; 00557e84
    POP EBX                             ; 00557e87
    RET                                 ; 00557e88
    XOR EAX,EAX                         ; 00557e89
        ;   Label: caseD_8
    JMP 0x00557e4b                      ; 00557e8b
        ;   XREF to: 00557e4b (UNCONDITIONAL_JUMP)  ; LAB_00557e4b
    TEST ESI,ESI                        ; 00557e8d
        ;   Label: LAB_00557e8d
    JNZ 0x00557e68                      ; 00557e8f
        ;   XREF to: 00557e68 (CONDITIONAL_JUMP)  ; LAB_00557e68
    MOV EAX,0x1                         ; 00557e91
    POP ESI                             ; 00557e96
    ADD ESP,0x4                         ; 00557e97
    POP EBX                             ; 00557e9a
    RET                                 ; 00557e9b

