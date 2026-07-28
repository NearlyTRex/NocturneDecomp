; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_string_c_mbtowc_peek_FUN_0056d9f0(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; XREF[5]:
;   FUN_00572d90 at 00572da9
;   FUN_00573db0 at 00573e1d
;   crt_file.c_makepath_FUN_0056626c at 005662fa
;   crt_string.c_splitpath_FUN_00566498 at 005664dc
;   crt_string.c_strpbrk_FUN_00570870 at 00570888
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056d9f0
        ;   Label: crt_string.c_mbtowc_peek_FUN_0056d9f0
    CMP dword ptr [0x02de5c30],0x0      ; 0056d9f4 | DAT_02de5c30
    JZ 0x0056da24                       ; 0056d9fb
        ;   XREF to: 0056da24 (CONDITIONAL_JUMP)  ; LAB_0056da24
    XOR EDX,EDX                         ; 0056d9fd
    MOV DL,byte ptr [EAX]               ; 0056d9ff
    MOV DL,byte ptr [EDX + 0x2de5c41]   ; 0056da01
    AND DL,0x1                          ; 0056da07
    AND EDX,0xff                        ; 0056da0a
    JZ 0x0056da24                       ; 0056da10
        ;   XREF to: 0056da24 (CONDITIONAL_JUMP)  ; LAB_0056da24
    XOR EDX,EDX                         ; 0056da12
    MOV DL,byte ptr [EAX]               ; 0056da14
    SHL EDX,0x8                         ; 0056da16
    MOV AL,byte ptr [EAX + 0x1]         ; 0056da19
    AND EAX,0xff                        ; 0056da1c
    OR EAX,EDX                          ; 0056da21
    RET                                 ; 0056da23
    MOV AL,byte ptr [EAX]               ; 0056da24
        ;   Label: LAB_0056da24
    AND EAX,0xff                        ; 0056da26
    RET                                 ; 0056da2b

