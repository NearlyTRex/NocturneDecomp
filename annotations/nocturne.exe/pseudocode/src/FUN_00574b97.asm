; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574b97(DWORD param_1)
;
;
; Referenced Globals:
;   void* PTR_CreateEventA_00575494 = 00175af6
;   void* PTR_GetStdHandle_00575538 = 00175dee
;
; *****************************************************************************

section .text

    AND EAX,0x575494                    ; 00574b97 | PTR_CreateEventA_00575494
        ;   Label: FUN_00574b97
    JMP dword ptr [0x00575538]          ; 00574b9c | PTR_GetStdHandle_00575538

