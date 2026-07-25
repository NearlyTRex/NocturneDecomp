; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574939(LPCSTR param_1)
;
;
; Referenced Globals:
;   void* PTR_LoadIconA_00575448 = 001759d4
;   void* PTR_SetCurrentDirectoryA_0057558c = 00175f86
;
; *****************************************************************************

section .text

    AND EAX,0x575448                    ; 00574939 | PTR_LoadIconA_00575448
        ;   Label: FUN_00574939
    JMP dword ptr [0x0057558c]          ; 0057493e | PTR_SetCurrentDirectoryA_0057558c

