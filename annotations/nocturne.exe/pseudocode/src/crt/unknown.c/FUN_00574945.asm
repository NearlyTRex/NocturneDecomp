; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574945(DWORD param_1,LPSTR param_2)
;
;
; Referenced Globals:
;   void* PTR_GetCurrentDirectoryA_005754f4 = 00175ca6
;   void* PTR_GetModuleFileNameA_00575524 = 00175d90
;
; *****************************************************************************

section .text

    AND EAX,0x575524                    ; 00574945 | PTR_GetModuleFileNameA_00575524
        ;   Label: crt_unknown.c_FUN_00574945
    JMP dword ptr [0x005754f4]          ; 0057494a | PTR_GetCurrentDirectoryA_005754f4

