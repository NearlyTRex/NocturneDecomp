; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574af5(LPCH param_1)
;
;
; Referenced Globals:
;   void* PTR_FreeEnvironmentStringsA_005754d8 = 00175c32
;   void* PTR_SetConsoleCtrlHandler_00575584 = 00175f5c
;
; *****************************************************************************

section .text

    AND EAX,0x575584                    ; 00574af5 | PTR_SetConsoleCtrlHandler_00575584
        ;   Label: crt_unknown.c_FUN_00574af5
    JMP dword ptr [0x005754d8]          ; 00574afa | PTR_FreeEnvironmentStringsA_005754d8

