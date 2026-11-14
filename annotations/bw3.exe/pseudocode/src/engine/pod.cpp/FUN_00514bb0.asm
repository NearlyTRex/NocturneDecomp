; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_pod_cpp_FUN_00514bb0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   engine_pod.cpp_CPodFile_ctor_FUN_00512f00
;   engine_pod.cpp_CPodFile_dtor_FUN_00512f70
;   engine_pod.cpp_FUN_00512fb0
;   engine_pod.cpp_FUN_00513d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514bb0
        ;   Label: engine_pod.cpp_FUN_00514bb0
    SUB ESP,0x42c                       ; 00514bb1
    MOV EAX,ESP                         ; 00514bb7
    PUSH EAX                            ; 00514bb9
    CALL engine_pod.cpp_CPodFile_ctor_FUN_00512f00 ; 00514bba
        ;   XREF to: 00512f00 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_00512f00(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 00514bbf
    PUSH 0x0                            ; 00514bc2
    MOV EDX,dword ptr [ESP + 0x43c]     ; 00514bc4
    PUSH EDX                            ; 00514bcb
    LEA EAX,[ESP + 0x8]                 ; 00514bcc
    PUSH EAX                            ; 00514bd0
    CALL engine_pod.cpp_FUN_00512fb0    ; 00514bd1
        ;   XREF to: 00512fb0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_00512fb0()
    ADD ESP,0xc                         ; 00514bd6
    TEST EAX,EAX                        ; 00514bd9
    JZ 0x00514c03                       ; 00514bdb
        ;   XREF to: 00514c03 (CONDITIONAL_JUMP)  ; LAB_00514c03
    MOV EAX,ESP                         ; 00514bdd
    PUSH EAX                            ; 00514bdf
    CALL engine_pod.cpp_FUN_00513d20    ; 00514be0
        ;   XREF to: 00513d20 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_00513d20()
    ADD ESP,0x4                         ; 00514be5
    PUSH 0x0                            ; 00514be8
    MOV EBX,EAX                         ; 00514bea
    LEA EAX,[ESP + 0x4]                 ; 00514bec
    PUSH EAX                            ; 00514bf0
    CALL engine_pod.cpp_CPodFile_dtor_FUN_00512f70 ; 00514bf1
        ;   XREF to: 00512f70 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_00512f70(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00514bf6
    MOV EAX,EBX                         ; 00514bf9
    ADD ESP,0x42c                       ; 00514bfb
    POP EBX                             ; 00514c01
    RET                                 ; 00514c02
    PUSH EAX                            ; 00514c03
        ;   Label: LAB_00514c03
    LEA EAX,[ESP + 0x4]                 ; 00514c04
    PUSH EAX                            ; 00514c08
    XOR EBX,EBX                         ; 00514c09
    CALL engine_pod.cpp_CPodFile_dtor_FUN_00512f70 ; 00514c0b
        ;   XREF to: 00512f70 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_00512f70(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00514c10
    MOV EAX,EBX                         ; 00514c13
    ADD ESP,0x42c                       ; 00514c15
    POP EBX                             ; 00514c1b
    RET                                 ; 00514c1c

