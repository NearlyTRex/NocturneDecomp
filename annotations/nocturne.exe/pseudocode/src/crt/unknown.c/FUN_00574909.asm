; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574909(UINT param_1)
;
;
; Referenced Globals:
;   void* PTR_GetKeyNameTextA_00575434 = 00175980
;   void* PTR_ExitProcess_005754b4 = 00175b8a
;
; *****************************************************************************

section .text

    AND EAX,0x575434                    ; 00574909 | PTR_GetKeyNameTextA_00575434
        ;   Label: crt_unknown.c_FUN_00574909
    JMP dword ptr [0x005754b4]          ; 0057490e | PTR_ExitProcess_005754b4

