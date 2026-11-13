; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00472780(int param_1)
;
;
; XREF[1]:
;   core_dtrace.cpp_FUN_00472600 at 0047265b
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_operator_new_array_FUN_005b8df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472780
        ;   Label: core_dtrace.cpp_FUN_00472780
    PUSH EBP                            ; 00472781
    MOV EBX,dword ptr [ESP + 0xc]       ; 00472782
    MOV EAX,dword ptr [EBX + 0x4]       ; 00472786
    SHL EAX,0x3                         ; 00472789
    MOV EDX,EAX                         ; 0047278c
    SHL EAX,0x3                         ; 0047278e
    SUB EAX,EDX                         ; 00472791
    PUSH EAX                            ; 00472793
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 00472794
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 00472799
    MOV EDX,dword ptr [EBX + 0x4]       ; 0047279c
    PUSH EDX                            ; 0047279f
    MOV dword ptr [EBX + 0x8],EAX       ; 004727a0
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 004727a3
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 004727a8
    MOV ECX,dword ptr [EBX + 0x8]       ; 004727ab
    MOV dword ptr [EBX + 0xc],EAX       ; 004727ae
    TEST ECX,ECX                        ; 004727b1
    JZ 0x004727bc                       ; 004727b3
        ;   XREF to: 004727bc (CONDITIONAL_JUMP)  ; LAB_004727bc
    TEST EAX,EAX                        ; 004727b5
    JZ 0x004727bc                       ; 004727b7
        ;   XREF to: 004727bc (CONDITIONAL_JUMP)  ; LAB_004727bc
    POP EBP                             ; 004727b9
    POP EBX                             ; 004727ba
    RET                                 ; 004727bb
    PUSH EDI                            ; 004727bc
        ;   Label: LAB_004727bc
    MOV EDI,0x5d19fc                    ; 004727bd
    MOV EBP,0xf9                        ; 004727c2
    PUSH 0x5d1a0f                       ; 004727c7
    MOV dword ptr [0x01d046a0],EDI      ; 004727cc | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004727d2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004727d8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004727dd
    POP EDI                             ; 004727e0
    POP EBP                             ; 004727e1
    POP EBX                             ; 004727e2
    RET                                 ; 004727e3

