; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574849(HANDLE param_1,LPCVOID param_2,DWORD param_3,LPDWORD param_4,LPOVERLAPPED param_5)
;
;
; Referenced Globals:
;   void* PTR_CreateFileA_00575498 = 00175b06
;   void* PTR_WriteFile_005755ec = 0017613e
;
; *****************************************************************************

section .text

    AND EAX,0x575498                    ; 00574849 | PTR_CreateFileA_00575498
        ;   Label: FUN_00574849
    JMP dword ptr [0x005755ec]          ; 0057484e | PTR_WriteFile_005755ec

