; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574a13(int param_1,int param_2,int param_3,DWORD param_4,DWORD param_5,DWORD param_6,DWORD param_7,DWORD param_8,DWORD param_9,DWORD param_10,DWORD param_11,LPCSTR param_12)
;
;
; Referenced Globals:
;   void* PTR_CreateFontA_005753a4 = 0017573c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574a13
        ;   Label: FUN_00574a13
    PUSH EDI                            ; 00574a14
    ADD BH,BH                           ; 00574a15
    AND EAX,0x5753c8                    ; 00574a17
    JMP dword ptr [0x005753a4]          ; 00574a1c | PTR_CreateFontA_005753a4

