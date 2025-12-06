; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack char crt_string.c_hexDigitToChar_FUN_00601f0c(int digit)
;
; Parameters:
; int              Stack[0x4]:4   digit
;
; XREF[1]:
;   crt_io.c_generateTempFilename_FUN_00601f1c at 00601fa9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00601f0c
        ;   Label: crt_string.c_hexDigitToChar_FUN_00601f0c
    ADD EAX,0x30                        ; 00601f10
    CMP EAX,0x39                        ; 00601f13
    JLE 0x00601f1b                      ; 00601f16 | LAB_00601f1b
        ;   XREF to: 00601f1b (CONDITIONAL_JUMP)
    ADD EAX,0x27                        ; 00601f18
    RET                                 ; 00601f1b
        ;   Label: LAB_00601f1b

