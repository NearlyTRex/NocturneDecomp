; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574b63(void)
;
;
; Referenced Globals:
;   void* PTR_SetLastError_005755a8 = 00176014
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00574b63
        ;   Label: crt_unknown.c_FUN_00574b63
    PUSH EDI                            ; 00574b64
    ADD BH,BH                           ; 00574b65
    AND EAX,0x5755c0                    ; 00574b67
    JMP dword ptr [0x005755a8]          ; 00574b6c | PTR_SetLastError_005755a8

