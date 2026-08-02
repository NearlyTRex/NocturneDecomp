; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_string_c_mbstring_termination_check_FUN_00570ca0(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[7]:
;   crt_string.c__mbstrnicmp_FUN_0056dcd0 at 0056dce7
;   crt_string.c_char_in_set_FUN_00572a90 at 00572ab9
;   crt_string.c_mbstrnbytes_FUN_0056dbb0 at 0056dbbe
;   crt_string.c_mbstrnlen_FUN_0056db40 at 0056db4e
;   crt_string.c_strpbrk_FUN_00570870 at 0057087b
;   crt_unknown.c_FUN_00572d90 at 00572d9c
;   crt_unknown.c_FUN_00574000 at 00574009
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00570ca0
        ;   Label: crt_string.c_mbstring_termination_check_FUN_00570ca0
    CMP byte ptr [EDX],0x0              ; 00570ca4
    JNZ 0x00570caf                      ; 00570ca7
        ;   XREF to: 00570caf (CONDITIONAL_JUMP)  ; LAB_00570caf
    MOV EAX,0x1                         ; 00570ca9
    RET                                 ; 00570cae
    CMP dword ptr [0x02de5c30],0x0      ; 00570caf | DAT_02de5c30
        ;   Label: LAB_00570caf
    JZ 0x00570cd7                       ; 00570cb6
        ;   XREF to: 00570cd7 (CONDITIONAL_JUMP)  ; LAB_00570cd7
    XOR EAX,EAX                         ; 00570cb8
    MOV AL,byte ptr [EDX]               ; 00570cba
    MOV AL,byte ptr [EAX + 0x2de5c41]   ; 00570cbc
    AND AL,0x1                          ; 00570cc2
    AND EAX,0xff                        ; 00570cc4
    JZ 0x00570cd7                       ; 00570cc9
        ;   XREF to: 00570cd7 (CONDITIONAL_JUMP)  ; LAB_00570cd7
    CMP byte ptr [EDX + 0x1],0x0        ; 00570ccb
    JNZ 0x00570cd7                      ; 00570ccf
        ;   XREF to: 00570cd7 (CONDITIONAL_JUMP)  ; LAB_00570cd7
    MOV EAX,0x2                         ; 00570cd1
    RET                                 ; 00570cd6
    XOR EAX,EAX                         ; 00570cd7
        ;   Label: LAB_00570cd7
    RET                                 ; 00570cd9

