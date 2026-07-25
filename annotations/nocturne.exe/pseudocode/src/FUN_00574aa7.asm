; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574aa7(HANDLE param_1,LPWIN32_FIND_DATAA param_2)
;
;
; Referenced Globals:
;   void* PTR_FindClose_005754c8 = 00175bf0
;   void* PTR_FindNextFileA_005754d0 = 00175c0e
;
; *****************************************************************************

section .text

    AND EAX,0x5754c8                    ; 00574aa7 | PTR_FindClose_005754c8
        ;   Label: FUN_00574aa7
    JMP dword ptr [0x005754d0]          ; 00574aac | PTR_FindNextFileA_005754d0

