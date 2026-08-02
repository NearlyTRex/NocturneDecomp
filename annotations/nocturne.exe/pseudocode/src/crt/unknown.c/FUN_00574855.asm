; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574855(LPVOID param_1,SIZE_T param_2,DWORD param_3,DWORD param_4)
;
;
; Referenced Globals:
;   void* PTR_ReadFile_0057557c = 00175f40
;   void* PTR_VirtualAlloc_005755d4 = 001760d4
;
; *****************************************************************************

section .text

    AND EAX,0x57557c                    ; 00574855 | PTR_ReadFile_0057557c
        ;   Label: crt_unknown.c_FUN_00574855
    JMP dword ptr [0x005755d4]          ; 0057485a | PTR_VirtualAlloc_005755d4

