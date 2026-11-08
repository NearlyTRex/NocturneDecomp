; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054c090(int param_1)
;
;
; XREF[12]:
;   FUN_0043cb00 at 0043cf3f
;   FUN_0050a610 at 0050a63a
;   FUN_005275c0 at 005276cf
;   FUN_0054a3c0 at 0054a457
;   FUN_0054b5b0 at 0054b67d
;   FUN_00598800 at 00598930
;   FUN_005992f0 at 00599471
;   FUN_0059a060 at 0059a1f5
;   FUN_0059aba0 at 0059ad35
;   FUN_0059d7f0 at 0059d92e
;   ... and 2 more
;
; Called Functions:
;   FUN_0054eac0
;   FUN_00585970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c090
        ;   Label: FUN_0054c090
    PUSH ESI                            ; 0054c091
    PUSH EBP                            ; 0054c092
    MOV EDX,dword ptr [ESP + 0x10]      ; 0054c093
    PUSH EDX                            ; 0054c097
    XOR ESI,ESI                         ; 0054c098
    CALL FUN_0054eac0                   ; 0054c09a
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0054c09f
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 0054c0a2
    MOV EBP,EAX                         ; 0054c0a8
    TEST ECX,ECX                        ; 0054c0aa
    JLE 0x0054c0e4                      ; 0054c0ac
        ;   XREF to: 0054c0e4 (CONDITIONAL_JUMP)  ; LAB_0054c0e4
    PUSH EDI                            ; 0054c0ae
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054c0af
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054c0b3
    ADD EDI,0x6b0                       ; 0054c0b7
    PUSH EDI                            ; 0054c0bd
        ;   Label: LAB_0054c0bd
    ADD EBX,0x4                         ; 0054c0be
    CALL FUN_00585970                   ; 0054c0c1
        ;   XREF to: 00585970 (UNCONDITIONAL_CALL)  ; undefined FUN_00585970()
    INC ESI                             ; 0054c0c6
    FLD float ptr [EBX + 0x510]         ; 0054c0c7
    ADD ESP,0x4                         ; 0054c0cd
    FSTP float ptr [EBX + 0xcec]        ; 0054c0d0
    MOV EAX,dword ptr [EBP + 0x1de78]   ; 0054c0d6
    ADD EDI,0x10                        ; 0054c0dc
    CMP ESI,EAX                         ; 0054c0df
    JL 0x0054c0bd                       ; 0054c0e1
        ;   XREF to: 0054c0bd (CONDITIONAL_JUMP)  ; LAB_0054c0bd
    POP EDI                             ; 0054c0e3
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054c0e4
        ;   Label: LAB_0054c0e4
    MOV dword ptr [EBX + 0x6ac],0x0     ; 0054c0e8
    MOV EAX,dword ptr [EBX + 0x6ac]     ; 0054c0f2
    MOV dword ptr [EBX + 0x6a8],EAX     ; 0054c0f8
    MOV EAX,dword ptr [EBX + 0x6a8]     ; 0054c0fe
    MOV dword ptr [EBX + 0x6a4],EAX     ; 0054c104
    POP EBP                             ; 0054c10a
    POP ESI                             ; 0054c10b
    POP EBX                             ; 0054c10c
    RET                                 ; 0054c10d

