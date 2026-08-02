; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574a2f(HWND param_1)
;
;
; Referenced Globals:
;   void* PTR_SetFocus_00575470 = 00175a70
;   void* PTR_FreeLibrary_005754dc = 00175c4c
;
; *****************************************************************************

section .text

    AND EAX,0x5754dc                    ; 00574a2f | PTR_FreeLibrary_005754dc
        ;   Label: crt_unknown.c_FUN_00574a2f
    JMP dword ptr [0x00575470]          ; 00574a34 | PTR_SetFocus_00575470

