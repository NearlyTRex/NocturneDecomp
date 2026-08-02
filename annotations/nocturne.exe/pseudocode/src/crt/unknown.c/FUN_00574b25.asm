; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574b25(LPVOID param_1,SIZE_T param_2,DWORD param_3)
;
;
; Referenced Globals:
;   void* PTR_VirtualFree_005755d8 = 001760e4
;   void* PTR_WideCharToMultiByte_005755e4 = 00176118
;
; *****************************************************************************

section .text

    AND EAX,0x5755e4                    ; 00574b25 | PTR_WideCharToMultiByte_005755e4
        ;   Label: crt_unknown.c_FUN_00574b25
    JMP dword ptr [0x005755d8]          ; 00574b2a | PTR_VirtualFree_005755d8

