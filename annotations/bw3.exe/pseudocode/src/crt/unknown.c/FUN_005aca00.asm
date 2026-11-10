; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005aca00(byte *param_1)
;
;
; XREF[10]:
;   crt_file.c_makepath_FUN_005a521c at 005a52d3
;   crt_string.c_splitpath_FUN_005a5128 at 005a5181
;   crt_unknown.c_FUN_005aaed4 at 005aaf86
;   crt_unknown.c_FUN_005ac960 at 005ac9ad
;   crt_unknown.c_FUN_005acd10 at 005acd51
;   crt_unknown.c_FUN_005aede0 at 005aee14
;   crt_unknown.c_FUN_005b08a0 at 005b08e6
;   crt_unknown.c_FUN_005b0c90 at 005b0ce3
;   crt_unknown.c_FUN_005b1970 at 005b1986
;   crt_unknown.c_FUN_005b19a0 at 005b19de
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005aca00
        ;   Label: crt_unknown.c_FUN_005aca00
    CMP dword ptr [0x02d25930],0x0      ; 005aca04 | DAT_02d25930
    JZ 0x005aca2c                       ; 005aca0b
        ;   XREF to: 005aca2c (CONDITIONAL_JUMP)  ; LAB_005aca2c
    XOR EDX,EDX                         ; 005aca0d
    MOV DL,byte ptr [EAX]               ; 005aca0f
    MOV DL,byte ptr [EDX + 0x2d25941]   ; 005aca11
    AND DL,0x1                          ; 005aca17
    AND EDX,0xff                        ; 005aca1a
    JZ 0x005aca2c                       ; 005aca20
        ;   XREF to: 005aca2c (CONDITIONAL_JUMP)  ; LAB_005aca2c
    CMP byte ptr [EAX + 0x1],0x0        ; 005aca22
    JZ 0x005aca2c                       ; 005aca26
        ;   XREF to: 005aca2c (CONDITIONAL_JUMP)  ; LAB_005aca2c
    ADD EAX,0x2                         ; 005aca28
    RET                                 ; 005aca2b
    INC EAX                             ; 005aca2c
        ;   Label: LAB_005aca2c
    RET                                 ; 005aca2d

