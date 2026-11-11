; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_004737f0(int param_1)
;
;
; XREF[1]:
;   core_dtrace.cpp_FUN_0047366e at 004736cb
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_array_FUN_005a40df
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004737f0
        ;   Label: core_dtrace.cpp_FUN_004737f0
    PUSH EBP                            ; 004737f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004737f2
    MOV EAX,dword ptr [EBX + 0x4]       ; 004737f6
    SHL EAX,0x3                         ; 004737f9
    MOV EDX,EAX                         ; 004737fc
    SHL EAX,0x3                         ; 004737fe
    SUB EAX,EDX                         ; 00473801
    PUSH EAX                            ; 00473803
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 00473804
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 00473809
    MOV EDX,dword ptr [EBX + 0x4]       ; 0047380c
    PUSH EDX                            ; 0047380f
    MOV dword ptr [EBX + 0x8],EAX       ; 00473810
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 00473813
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 00473818
    MOV ECX,dword ptr [EBX + 0x8]       ; 0047381b
    MOV dword ptr [EBX + 0xc],EAX       ; 0047381e
    TEST ECX,ECX                        ; 00473821
    JZ 0x0047382c                       ; 00473823
        ;   XREF to: 0047382c (CONDITIONAL_JUMP)  ; LAB_0047382c
    TEST EAX,EAX                        ; 00473825
    JZ 0x0047382c                       ; 00473827
        ;   XREF to: 0047382c (CONDITIONAL_JUMP)  ; LAB_0047382c
    POP EBP                             ; 00473829
    POP EBX                             ; 0047382a
    RET                                 ; 0047382b
    PUSH EDI                            ; 0047382c
        ;   Label: LAB_0047382c
    MOV EDI,0x5bc8b2                    ; 0047382d
    MOV EBP,0xf9                        ; 00473832
    PUSH 0x5bc8c5                       ; 00473837
    MOV dword ptr [0x01d71de0],EDI      ; 0047383c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00473842 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00473848
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047384d
    POP EDI                             ; 00473850
    POP EBP                             ; 00473851
    POP EBX                             ; 00473852
    RET                                 ; 00473853

