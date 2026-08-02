; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574b55(DWORD param_1)
;
;
; Referenced Globals:
;   void* PTR_GetModuleFileNameW_00575528 = 00175da6
;   void* PTR_TlsFree_005755c4 = 00176092
;
; *****************************************************************************

section .text

    AND EAX,0x575528                    ; 00574b55 | PTR_GetModuleFileNameW_00575528
        ;   Label: crt_unknown.c_FUN_00574b55
    JMP dword ptr [0x005755c4]          ; 00574b5a | PTR_TlsFree_005755c4

