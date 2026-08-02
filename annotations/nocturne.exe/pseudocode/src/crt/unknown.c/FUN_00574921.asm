; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574921(WNDCLASSA *param_1)
;
;
; Referenced Globals:
;   void* PTR_CreateWindowExA_0057541c = 00175916
;   void* PTR_RegisterClassA_00575460 = 00175a2e
;
; *****************************************************************************

section .text

    AND EAX,0x57541c                    ; 00574921 | PTR_CreateWindowExA_0057541c
        ;   Label: crt_unknown.c_FUN_00574921
    JMP dword ptr [0x00575460]          ; 00574926 | PTR_RegisterClassA_00575460

