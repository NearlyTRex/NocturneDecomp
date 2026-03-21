; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_006047a4(void)
;
;
; Referenced Globals:
;   byte BYTE_00684acd = 0x0
;   ENTER_CRITICAL_SECTION_FUNC* PTR_crt_thread.c_EnterCriticalSection_FUN_0060b180_00685464 = 0060b180
;   EXIT_CRITICAL_SECTION_FUNC* PTR_crt_thread.c_ExitCriticalSection_FUN_0060b180_00685468 = 0060b180
;   undefined2 DAT_0068546c
;
; Called Functions:
;   crt_unknown.c_FUN_0060b190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006047a4
        ;   Label: crt_unknown.c_FUN_006047a4
    CMP byte ptr [0x00684acd],0x0       ; 006047a5 | BYTE_00684acd
    JZ 0x006047c4                       ; 006047ac
        ;   XREF to: 006047c4 (CONDITIONAL_JUMP)  ; LAB_006047c4
    MOV EDX,0x604790                    ; 006047ae | LAB_00604790
    MOV EBX,0x60479c                    ; 006047b3 | LAB_0060479c
    MOV dword ptr [0x00685464],EDX      ; 006047b8 | PTR_crt_thread.c_EnterCriticalSection_FUN_0060b180_00685464
    MOV dword ptr [0x00685468],EBX      ; 006047be | PTR_crt_thread.c_ExitCriticalSection_FUN_0060b180_00685468
    XOR EAX,EAX                         ; 006047c4
        ;   Label: LAB_006047c4
    MOV AX,[0x0068546c]                 ; 006047c6 | DAT_0068546c
    CALL crt_unknown.c_FUN_0060b190     ; 006047cc
        ;   XREF to: 0060b190 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060b190()
    POP EBX                             ; 006047d1
    RET                                 ; 006047d2

