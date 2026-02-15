; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl crt_math_c_report_math_error_FUN_0060e2e5(MathErrorContext *errorCtx)
;
; Parameters:
; MathErrorContext * Stack[0x4]:4   errorCtx
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_math.c_process_math_error_FUN_0060bf2d at 0060c004
;
; Referenced Globals:
;   MATH_CHECK_REPORTING_FUNC* PTR_crt_math.c_check_error_context_FUN_0060fa8b_00685590 = 0060eba0
;
; Called Functions:
;   crt_math.c_print_error_message_FUN_0060e298
;   crt_math.c_set_domain_error_errno_FUN_006027a0
;   crt_math.c_set_range_error_errno_FUN_006027ac
;   crt_operation.c_always_zero_FUN_0060fa8b
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060e2e5
        ;   Label: crt_math.c_report_math_error_FUN_0060e2e5
    MOV EBP,ESP                         ; 0060e2e6
    PUSH EBX                            ; 0060e2e8
    PUSH ESI                            ; 0060e2e9
    SUB ESP,0x8                         ; 0060e2ea
    MOV EBX,dword ptr [EBP + 0x8]       ; 0060e2ed
    PUSH EBX                            ; 0060e2f0
    CALL dword ptr [0x00685590]         ; 0060e2f1 | PTR_crt_math.c_check_error_context_FUN_0060fa8b_00685590
    ADD ESP,0x4                         ; 0060e2f7
    TEST EAX,EAX                        ; 0060e2fa
    JNZ 0x0060e320                      ; 0060e2fc
        ;   XREF to: 0060e320 (CONDITIONAL_JUMP)  ; LAB_0060e320
    MOV EDX,dword ptr [EBX + 0x4]       ; 0060e2fe
    PUSH EDX                            ; 0060e301
    MOV ECX,dword ptr [EBX]             ; 0060e302
    PUSH ECX                            ; 0060e304
    CALL crt_math.c_print_error_message_FUN_0060e298 ; 0060e305
        ;   XREF to: 0060e298 (UNCONDITIONAL_CALL)  ; void crt_math.c_print_error_message_FUN_0060e298(int errorType, char * errorData)
    MOV ESI,dword ptr [EBX]             ; 0060e30a
    ADD ESP,0x8                         ; 0060e30c
    CMP ESI,0x1                         ; 0060e30f
    JNZ 0x0060e31b                      ; 0060e312
        ;   XREF to: 0060e31b (CONDITIONAL_JUMP)  ; LAB_0060e31b
    CALL crt_math.c_set_domain_error_errno_FUN_006027a0 ; 0060e314
        ;   XREF to: 006027a0 (UNCONDITIONAL_CALL)  ; void crt_math.c_set_domain_error_errno_FUN_006027a0()
    JMP 0x0060e320                      ; 0060e319
        ;   XREF to: 0060e320 (UNCONDITIONAL_JUMP)  ; LAB_0060e320
    CALL crt_math.c_set_range_error_errno_FUN_006027ac ; 0060e31b
        ;   XREF to: 006027ac (UNCONDITIONAL_CALL)  ; void crt_math.c_set_range_error_errno_FUN_006027ac()
        ;   Label: LAB_0060e31b
    MOV EAX,dword ptr [EBX + 0x18]      ; 0060e320
        ;   Label: LAB_0060e320
    MOV dword ptr [EBP + -0x10],EAX     ; 0060e323
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0060e326
    MOV dword ptr [EBP + -0xc],EAX      ; 0060e329
    MOV EAX,dword ptr [EBP + -0x10]     ; 0060e32c
    MOV EDX,dword ptr [EBP + -0xc]      ; 0060e32f
    LEA ESP,[EBP + -0x8]                ; 0060e332
    POP ESI                             ; 0060e335
    POP EBX                             ; 0060e336
    POP EBP                             ; 0060e337
    RET                                 ; 0060e338

