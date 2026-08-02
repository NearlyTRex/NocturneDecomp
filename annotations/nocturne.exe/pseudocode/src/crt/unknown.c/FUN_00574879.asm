; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574879(void)
;
;
; Referenced Globals:
;   void* PTR_GetEnvironmentStrings_00575508 = 00175d12
;   void* PTR_GetVersion_00575540 = 00175e18
;
; *****************************************************************************

section .text

    AND EAX,0x575540                    ; 00574879 | PTR_GetVersion_00575540
        ;   Label: crt_unknown.c_FUN_00574879
    JMP dword ptr [0x00575508]          ; 0057487e | PTR_GetEnvironmentStrings_00575508

