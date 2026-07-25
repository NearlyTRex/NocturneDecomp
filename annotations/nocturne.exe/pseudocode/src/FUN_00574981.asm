; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574981(LPMSG param_1,HWND param_2,UINT param_3,UINT param_4,UINT param_5)
;
;
; Referenced Globals:
;   void* PTR_PeekMessageA_00575458 = 00175a0c
;   void* PTR_TranslateMessage_00575480 = 00175ab0
;
; *****************************************************************************

section .text

    AND EAX,0x575480                    ; 00574981 | PTR_TranslateMessage_00575480
        ;   Label: FUN_00574981
    JMP dword ptr [0x00575458]          ; 00574986 | PTR_PeekMessageA_00575458

