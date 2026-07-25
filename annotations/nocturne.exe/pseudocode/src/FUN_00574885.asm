; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574885(LPCSTR param_1,LPSECURITY_ATTRIBUTES param_2)
;
;
; Referenced Globals:
;   void* PTR_CreateDirectoryA_00575490 = 00175ae2
;   void* PTR_MoveFileA_00575568 = 00175ed4
;
; *****************************************************************************

section .text

    AND EAX,0x575568                    ; 00574885 | PTR_MoveFileA_00575568
        ;   Label: FUN_00574885
    JMP dword ptr [0x00575490]          ; 0057488a | PTR_CreateDirectoryA_00575490

