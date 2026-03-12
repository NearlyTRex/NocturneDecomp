; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl crt_math_c_set_math_errno_FUN_0060befa(int errorFlags,double *valuePtr)
;
; Parameters:
; int              Stack[0x4]:4   errorFlags
; double *         Stack[0x8]:4   valuePtr
;
; XREF[1]:
;   crt_math.c_handle_math_error_FUN_0060c02b at 0060c08d
;
; Called Functions:
;   crt_math.c_process_math_error_FUN_0060bf2d
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060befa
        ;   Label: crt_math.c_set_math_errno_FUN_0060befa
    MOV EBP,ESP                         ; 0060befb
    SUB ESP,0x10                        ; 0060befd
    MOV EDX,dword ptr [EBP + 0xc]       ; 0060bf00
    PUSH EDX                            ; 0060bf03
    PUSH EDX                            ; 0060bf04
    MOV ECX,dword ptr [EBP + 0x8]       ; 0060bf05
    PUSH ECX                            ; 0060bf08
    CALL crt_math.c_process_math_error_FUN_0060bf2d ; 0060bf09
        ;   XREF to: 0060bf2d (UNCONDITIONAL_CALL)  ; double crt_math.c_process_math_error_FUN_0060bf2d(int errorFlags, double * value1, double * value2)
    MOV dword ptr [EBP + -0x10],EAX     ; 0060bf0e
    MOV dword ptr [EBP + -0xc],EDX      ; 0060bf11
    ADD ESP,0xc                         ; 0060bf14
    MOV EAX,dword ptr [EBP + -0x10]     ; 0060bf17
    MOV dword ptr [EBP + -0x8],EAX      ; 0060bf1a
    MOV EAX,dword ptr [EBP + -0xc]      ; 0060bf1d
    MOV dword ptr [EBP + -0x4],EAX      ; 0060bf20
    MOV EAX,dword ptr [EBP + -0x8]      ; 0060bf23
    MOV EDX,dword ptr [EBP + -0x4]      ; 0060bf26
    MOV ESP,EBP                         ; 0060bf29
    POP EBP                             ; 0060bf2b
    RET                                 ; 0060bf2c

