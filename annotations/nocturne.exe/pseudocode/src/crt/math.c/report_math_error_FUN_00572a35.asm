; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl crt_math_c_report_math_error_FUN_00572a35(MathErrorContext *errorCtx)
;
; Parameters:
; MathErrorContext * Stack[0x4]:4   errorCtx
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_math.c_process_math_error_FUN_005706dd at 005707b4
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_00573650_005c2164 = 00573650
;
; Called Functions:
;   crt_math.c_print_error_message_FUN_005729e8
;   crt_math.c_set_domain_error_errno_FUN_00568e90
;   crt_math.c_set_range_error_errno_FUN_00568e9c
;   crt_unknown.c_FUN_00573650
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00572a35
        ;   Label: crt_math.c_report_math_error_FUN_00572a35
    MOV EBP,ESP                         ; 00572a36
    PUSH EBX                            ; 00572a38
    PUSH ESI                            ; 00572a39
    SUB ESP,0x8                         ; 00572a3a
    MOV EBX,dword ptr [EBP + 0x8]       ; 00572a3d
    PUSH EBX                            ; 00572a40
    CALL dword ptr [0x005c2164]         ; 00572a41 | PTR_crt_unknown.c_FUN_00573650_005c2164
    ADD ESP,0x4                         ; 00572a47
    TEST EAX,EAX                        ; 00572a4a
    JNZ 0x00572a70                      ; 00572a4c
        ;   XREF to: 00572a70 (CONDITIONAL_JUMP)  ; LAB_00572a70
    MOV EDX,dword ptr [EBX + 0x4]       ; 00572a4e
    PUSH EDX                            ; 00572a51
    MOV ECX,dword ptr [EBX]             ; 00572a52
    PUSH ECX                            ; 00572a54
    CALL crt_math.c_print_error_message_FUN_005729e8 ; 00572a55
        ;   XREF to: 005729e8 (UNCONDITIONAL_CALL)  ; void crt_math.c_print_error_message_FUN_005729e8(int errorType, char * errorData)
    MOV ESI,dword ptr [EBX]             ; 00572a5a
    ADD ESP,0x8                         ; 00572a5c
    CMP ESI,0x1                         ; 00572a5f
    JNZ 0x00572a6b                      ; 00572a62
        ;   XREF to: 00572a6b (CONDITIONAL_JUMP)  ; LAB_00572a6b
    CALL crt_math.c_set_domain_error_errno_FUN_00568e90 ; 00572a64
        ;   XREF to: 00568e90 (UNCONDITIONAL_CALL)  ; void crt_math.c_set_domain_error_errno_FUN_00568e90()
    JMP 0x00572a70                      ; 00572a69
        ;   XREF to: 00572a70 (UNCONDITIONAL_JUMP)  ; LAB_00572a70
    CALL crt_math.c_set_range_error_errno_FUN_00568e9c ; 00572a6b
        ;   XREF to: 00568e9c (UNCONDITIONAL_CALL)  ; void crt_math.c_set_range_error_errno_FUN_00568e9c()
        ;   Label: LAB_00572a6b
    MOV EAX,dword ptr [EBX + 0x18]      ; 00572a70
        ;   Label: LAB_00572a70
    MOV dword ptr [EBP + -0x10],EAX     ; 00572a73
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00572a76
    MOV dword ptr [EBP + -0xc],EAX      ; 00572a79
    MOV EAX,dword ptr [EBP + -0x10]     ; 00572a7c
    MOV EDX,dword ptr [EBP + -0xc]      ; 00572a7f
    LEA ESP,[EBP + -0x8]                ; 00572a82
    POP ESI                             ; 00572a85
    POP EBX                             ; 00572a86
    POP EBP                             ; 00572a87
    RET                                 ; 00572a88

