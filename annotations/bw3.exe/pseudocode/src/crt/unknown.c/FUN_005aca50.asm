; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005aca50(byte *param_1)
;
;
; XREF[8]:
;   crt_file.c_makepath_FUN_005a521c at 005a52c6
;   crt_unknown.c_FUN_005ac8f0 at 005ac90f
;   crt_unknown.c_FUN_005ac960 at 005ac99f
;   crt_unknown.c_FUN_005ae560 at 005ae5be
;   crt_unknown.c_FUN_005af6a0 at 005af6bc
;   crt_unknown.c_FUN_005b08a0 at 005b08bb
;   crt_unknown.c_FUN_005b0c90 at 005b0cc9
;   crt_unknown.c_FUN_005b1720 at 005b1738
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d25930],0x0      ; 005aca50 | DAT_02d25930
        ;   Label: crt_unknown.c_FUN_005aca50
    JZ 0x005aca76                       ; 005aca57
        ;   XREF to: 005aca76 (CONDITIONAL_JUMP)  ; LAB_005aca76
    MOV EDX,dword ptr [ESP + 0x4]       ; 005aca59
    XOR EAX,EAX                         ; 005aca5d
    MOV AL,byte ptr [EDX]               ; 005aca5f
    MOV AL,byte ptr [EAX + 0x2d25941]   ; 005aca61
    AND AL,0x1                          ; 005aca67
    AND EAX,0xff                        ; 005aca69
    JZ 0x005aca76                       ; 005aca6e
        ;   XREF to: 005aca76 (CONDITIONAL_JUMP)  ; LAB_005aca76
    MOV EAX,0x2                         ; 005aca70
    RET                                 ; 005aca75
    MOV EAX,0x1                         ; 005aca76
        ;   Label: LAB_005aca76
    RET                                 ; 005aca7b

