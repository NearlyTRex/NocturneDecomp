; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_0048ac70(int param_1)
;
;
; XREF[1]:
;   core_dtrace.cpp_FUN_0048aaf0 at 0048ab4b
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_operator_new_array_FUN_005c1268
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ac70
        ;   Label: core_dtrace.cpp_FUN_0048ac70
    PUSH EBP                            ; 0048ac71
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048ac72
    MOV EAX,dword ptr [EBX + 0x4]       ; 0048ac76
    SHL EAX,0x3                         ; 0048ac79
    MOV EDX,EAX                         ; 0048ac7c
    SHL EAX,0x3                         ; 0048ac7e
    SUB EAX,EDX                         ; 0048ac81
    PUSH EAX                            ; 0048ac83
    CALL crt_memory.c_operator_new_array_FUN_005c1268 ; 0048ac84
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005c1268()
    ADD ESP,0x4                         ; 0048ac89
    MOV EDX,dword ptr [EBX + 0x4]       ; 0048ac8c
    PUSH EDX                            ; 0048ac8f
    MOV dword ptr [EBX + 0x8],EAX       ; 0048ac90
    CALL crt_memory.c_operator_new_array_FUN_005c1268 ; 0048ac93
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005c1268()
    ADD ESP,0x4                         ; 0048ac98
    MOV ECX,dword ptr [EBX + 0x8]       ; 0048ac9b
    MOV dword ptr [EBX + 0xc],EAX       ; 0048ac9e
    TEST ECX,ECX                        ; 0048aca1
    JZ 0x0048acac                       ; 0048aca3
        ;   XREF to: 0048acac (CONDITIONAL_JUMP)  ; LAB_0048acac
    TEST EAX,EAX                        ; 0048aca5
    JZ 0x0048acac                       ; 0048aca7
        ;   XREF to: 0048acac (CONDITIONAL_JUMP)  ; LAB_0048acac
    POP EBP                             ; 0048aca9
    POP EBX                             ; 0048acaa
    RET                                 ; 0048acab
    PUSH EDI                            ; 0048acac
        ;   Label: LAB_0048acac
    MOV EDI,0x5db7f5                    ; 0048acad
    MOV EBP,0xf9                        ; 0048acb2
    PUSH 0x5db808                       ; 0048acb7
    MOV dword ptr [0x01d1d400],EDI      ; 0048acbc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0048acc2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0048acc8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0048accd
    POP EDI                             ; 0048acd0
    POP EBP                             ; 0048acd1
    POP EBX                             ; 0048acd2
    RET                                 ; 0048acd3

