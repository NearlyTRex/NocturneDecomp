; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_staticFinal_FUN_00602748()
;
;
; Referenced Globals:
;   char* g_CommandLineA
;   WCHAR* g_CommandLineW
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00602748
        ;   Label: crt_unknown.c_staticFinal_FUN_00602748
    PUSH EBP                            ; 00602749
    MOV EDX,dword ptr [0x03f9b224]      ; 0060274a | char * g_CommandLineA
    TEST EDX,EDX                        ; 00602750
    JZ 0x00602765                       ; 00602752 | LAB_00602765
        ;   XREF to: 00602765 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 00602754
    CALL crt_memory.c_free_FUN_00601cd0 ; 00602755 | void crt_memory.c_free_FUN_00601cd0(void * ptr)
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
    XOR ECX,ECX                         ; 0060275a
    ADD ESP,0x4                         ; 0060275c
    MOV dword ptr [0x03f9b224],ECX      ; 0060275f | char * g_CommandLineA
    MOV ESI,dword ptr [0x03f9b228]      ; 00602765 | WCHAR * g_CommandLineW
        ;   Label: LAB_00602765
    TEST ESI,ESI                        ; 0060276b
    JZ 0x00602780                       ; 0060276d | LAB_00602780
        ;   XREF to: 00602780 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0060276f
    CALL crt_memory.c_free_FUN_00601cd0 ; 00602770 | void crt_memory.c_free_FUN_00601cd0(void * ptr)
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
    XOR EBP,EBP                         ; 00602775
    ADD ESP,0x4                         ; 00602777
    MOV dword ptr [0x03f9b228],EBP      ; 0060277a | WCHAR * g_CommandLineW
    POP EBP                             ; 00602780
        ;   Label: LAB_00602780
    POP ESI                             ; 00602781
    RET                                 ; 00602782

