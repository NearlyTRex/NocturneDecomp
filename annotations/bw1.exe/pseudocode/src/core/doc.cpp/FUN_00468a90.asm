; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_00468a90(CDemonActor *param_1)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00468a90
        ;   Label: core_doc.cpp_FUN_00468a90
    TEST EDX,EDX                        ; 00468a94
    JZ 0x00468ab0                       ; 00468a96
        ;   XREF to: 00468ab0 (CONDITIONAL_JUMP)  ; LAB_00468ab0
    MOV EAX,dword ptr [EDX + 0x2e0]     ; 00468a98
    CMP EAX,0x8                         ; 00468a9e
    JA 0x00468ad0                       ; 00468aa1
        ;   XREF to: 00468ad0 (CONDITIONAL_JUMP)  ; LAB_00468ad0
    JMP dword ptr [EAX*0x4 + 0x468a60]  ; 00468aa3
    XOR EAX,EAX                         ; 00468ab0
        ;   Label: LAB_00468ab0
    RET                                 ; 00468ab2
    MOV EAX,0x3                         ; 00468ad0
        ;   Label: LAB_00468ad0
    RET                                 ; 00468ad5

