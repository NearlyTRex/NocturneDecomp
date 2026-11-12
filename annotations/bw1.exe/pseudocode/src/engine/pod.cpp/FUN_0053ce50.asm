; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_pod_cpp_FUN_0053ce50(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   engine_pod.cpp_CPodFile_ctor_FUN_0053b1a0
;   engine_pod.cpp_CPodFile_dtor_FUN_0053b210
;   engine_pod.cpp_FUN_0053b250
;   engine_pod.cpp_FUN_0053bfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ce50
        ;   Label: engine_pod.cpp_FUN_0053ce50
    SUB ESP,0x42c                       ; 0053ce51
    MOV EAX,ESP                         ; 0053ce57
    PUSH EAX                            ; 0053ce59
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0053b1a0 ; 0053ce5a
        ;   XREF to: 0053b1a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0053b1a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 0053ce5f
    PUSH 0x0                            ; 0053ce62
    MOV EDX,dword ptr [ESP + 0x43c]     ; 0053ce64
    PUSH EDX                            ; 0053ce6b
    LEA EAX,[ESP + 0x8]                 ; 0053ce6c
    PUSH EAX                            ; 0053ce70
    CALL engine_pod.cpp_FUN_0053b250    ; 0053ce71
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_0053b250()
    ADD ESP,0xc                         ; 0053ce76
    TEST EAX,EAX                        ; 0053ce79
    JZ 0x0053cea3                       ; 0053ce7b
        ;   XREF to: 0053cea3 (CONDITIONAL_JUMP)  ; LAB_0053cea3
    MOV EAX,ESP                         ; 0053ce7d
    PUSH EAX                            ; 0053ce7f
    CALL engine_pod.cpp_FUN_0053bfc0    ; 0053ce80
        ;   XREF to: 0053bfc0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_0053bfc0()
    ADD ESP,0x4                         ; 0053ce85
    PUSH 0x0                            ; 0053ce88
    MOV EBX,EAX                         ; 0053ce8a
    LEA EAX,[ESP + 0x4]                 ; 0053ce8c
    PUSH EAX                            ; 0053ce90
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0053b210 ; 0053ce91
        ;   XREF to: 0053b210 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0053b210(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053ce96
    MOV EAX,EBX                         ; 0053ce99
    ADD ESP,0x42c                       ; 0053ce9b
    POP EBX                             ; 0053cea1
    RET                                 ; 0053cea2
    PUSH EAX                            ; 0053cea3
        ;   Label: LAB_0053cea3
    LEA EAX,[ESP + 0x4]                 ; 0053cea4
    PUSH EAX                            ; 0053cea8
    XOR EBX,EBX                         ; 0053cea9
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0053b210 ; 0053ceab
        ;   XREF to: 0053b210 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0053b210(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053ceb0
    MOV EAX,EBX                         ; 0053ceb3
    ADD ESP,0x42c                       ; 0053ceb5
    POP EBX                             ; 0053cebb
    RET                                 ; 0053cebc

