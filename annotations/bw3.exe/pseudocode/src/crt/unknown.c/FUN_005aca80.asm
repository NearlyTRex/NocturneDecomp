; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005aca80(byte *param_1,byte *param_2)
;
;
; XREF[1]:
;   crt_file.c_makepath_FUN_005a521c at 005a5303
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aca80
        ;   Label: crt_unknown.c_FUN_005aca80
    PUSH ESI                            ; 005aca81
    PUSH EDI                            ; 005aca82
    MOV ESI,dword ptr [0x02d25930]      ; 005aca83 | DAT_02d25930
    MOV EBX,dword ptr [ESP + 0x10]      ; 005aca89
    MOV EDI,dword ptr [ESP + 0x14]      ; 005aca8d
    CMP EBX,EDI                         ; 005aca91
    JC 0x005aca99                       ; 005aca93
        ;   XREF to: 005aca99 (CONDITIONAL_JUMP)  ; LAB_005aca99
    XOR EDX,EDX                         ; 005aca95
    JMP 0x005acaf7                      ; 005aca97
        ;   XREF to: 005acaf7 (UNCONDITIONAL_JUMP)  ; LAB_005acaf7
    LEA EAX,[EDI + -0x1]                ; 005aca99
        ;   Label: LAB_005aca99
    TEST ESI,ESI                        ; 005aca9c
    JZ 0x005acac4                       ; 005aca9e
        ;   XREF to: 005acac4 (CONDITIONAL_JUMP)  ; LAB_005acac4
    XOR EDX,EDX                         ; 005acaa0
    MOV DL,byte ptr [EAX]               ; 005acaa2
    MOV DL,byte ptr [EDX + 0x2d25941]   ; 005acaa4
    AND DL,0x1                          ; 005acaaa
    AND EDX,0xff                        ; 005acaad
    JZ 0x005acac4                       ; 005acab3
        ;   XREF to: 005acac4 (CONDITIONAL_JUMP)  ; LAB_005acac4
    LEA EDX,[EAX + -0x1]                ; 005acab5
    MOV EAX,EDX                         ; 005acab8
    MOV dword ptr [0x02d25930],ESI      ; 005acaba | DAT_02d25930
    POP EDI                             ; 005acac0
    POP ESI                             ; 005acac1
    POP EBX                             ; 005acac2
    RET                                 ; 005acac3
    DEC EAX                             ; 005acac4
        ;   Label: LAB_005acac4
    CMP EBX,EAX                         ; 005acac5
    JA 0x005acae2                       ; 005acac7
        ;   XREF to: 005acae2 (CONDITIONAL_JUMP)  ; LAB_005acae2
    TEST ESI,ESI                        ; 005acac9
    JZ 0x005acae2                       ; 005acacb
        ;   XREF to: 005acae2 (CONDITIONAL_JUMP)  ; LAB_005acae2
    XOR EDX,EDX                         ; 005acacd
    MOV DL,byte ptr [EAX]               ; 005acacf
    MOV DL,byte ptr [EDX + 0x2d25941]   ; 005acad1
    AND DL,0x1                          ; 005acad7
    AND EDX,0xff                        ; 005acada
    JNZ 0x005acac4                      ; 005acae0
        ;   XREF to: 005acac4 (CONDITIONAL_JUMP)  ; LAB_005acac4
    MOV EDX,EDI                         ; 005acae2
        ;   Label: LAB_005acae2
    SUB EDX,EAX                         ; 005acae4
    MOV EBX,0x2                         ; 005acae6
    MOV EAX,EDX                         ; 005acaeb
    SAR EDX,0x1f                        ; 005acaed
    IDIV EBX                            ; 005acaf0
    DEC EDI                             ; 005acaf2
    SUB EDI,EDX                         ; 005acaf3
    MOV EDX,EDI                         ; 005acaf5
    MOV EAX,EDX                         ; 005acaf7
        ;   Label: LAB_005acaf7
    MOV dword ptr [0x02d25930],ESI      ; 005acaf9 | DAT_02d25930
    POP EDI                             ; 005acaff
    POP ESI                             ; 005acb00
    POP EBX                             ; 005acb01
    RET                                 ; 005acb02

