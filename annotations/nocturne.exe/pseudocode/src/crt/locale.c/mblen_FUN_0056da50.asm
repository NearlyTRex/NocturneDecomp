; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_locale_c_mblen_FUN_0056da50(char *mb_string)
;
; Parameters:
; char *           Stack[0x4]:4   mb_string
;
; XREF[8]:
;   crt_file.c_makepath_FUN_0056626c at 00566316
;   crt_locale.c_mbtowc_FUN_0056f040 at 0056f09e
;   crt_string.c_char_in_set_FUN_00572a90 at 00572aab
;   crt_string.c_mbstrnbytes_FUN_0056dbb0 at 0056dbef
;   crt_string.c_mbstrnlen_FUN_0056db40 at 0056db5f
;   crt_unknown.c_FUN_005710a0 at 005710bc
;   crt_unknown.c_FUN_00572d90 at 00572dc9
;   crt_unknown.c_FUN_00573db0 at 00573dc8
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02de5c30],0x0      ; 0056da50 | DAT_02de5c30
        ;   Label: crt_locale.c_mblen_FUN_0056da50
    JZ 0x0056da76                       ; 0056da57
        ;   XREF to: 0056da76 (CONDITIONAL_JUMP)  ; LAB_0056da76
    MOV EDX,dword ptr [ESP + 0x4]       ; 0056da59
    XOR EAX,EAX                         ; 0056da5d
    MOV AL,byte ptr [EDX]               ; 0056da5f
    MOV AL,byte ptr [EAX + 0x2de5c41]   ; 0056da61
    AND AL,0x1                          ; 0056da67
    AND EAX,0xff                        ; 0056da69
    JZ 0x0056da76                       ; 0056da6e
        ;   XREF to: 0056da76 (CONDITIONAL_JUMP)  ; LAB_0056da76
    MOV EAX,0x2                         ; 0056da70
    RET                                 ; 0056da75
    MOV EAX,0x1                         ; 0056da76
        ;   Label: LAB_0056da76
    RET                                 ; 0056da7b

