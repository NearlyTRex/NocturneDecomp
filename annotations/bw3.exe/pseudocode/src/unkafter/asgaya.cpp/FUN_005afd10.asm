; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_asgaya_cpp_FUN_005afd10(int param_1)
;
;
; XREF[1]:
;   unkafter_asgaya.cpp_FUN_005adaac at 005adadd
;
; Referenced Globals:
;   void* PTR_GetCurrentThreadId_005b3590 = 001b3e70
;
; Called Functions:
;   GetCurrentThreadId
;   unkafter_asgaya.cpp_FUN_005adf10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afd10
        ;   Label: unkafter_asgaya.cpp_FUN_005afd10
    MOV EBX,dword ptr [ESP + 0x8]       ; 005afd11
    TEST EBX,EBX                        ; 005afd15
    JZ 0x005afd38                       ; 005afd17
        ;   XREF to: 005afd38 (CONDITIONAL_JUMP)  ; LAB_005afd38
    PUSH 0x0                            ; 005afd19
    PUSH EBX                            ; 005afd1b
    MOV dword ptr [EBX + 0xc],0x1       ; 005afd1c
    CALL unkafter_asgaya.cpp_FUN_005adf10 ; 005afd23
        ;   XREF to: 005adf10 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005adf10()
    ADD ESP,0x8                         ; 005afd28
    CALL dword ptr CS:[0x5b3590]        ; 005afd2b | PTR_GetCurrentThreadId_005b3590
    MOV dword ptr [EBX + 0xda],EAX      ; 005afd32
    POP EBX                             ; 005afd38
        ;   Label: LAB_005afd38
    RET                                 ; 005afd39

