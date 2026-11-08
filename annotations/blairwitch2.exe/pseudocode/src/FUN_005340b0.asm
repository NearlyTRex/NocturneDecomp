; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005340b0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00446440 at 004464a1
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00616494
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01ba5c68
;   undefined4 DAT_01cb6b0c
;
; Called Functions:
;   FUN_00469670
;   FUN_004fac50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005340b0
        ;   Label: FUN_005340b0
    PUSH ESI                            ; 005340b1
    PUSH EDI                            ; 005340b2
    PUSH EBP                            ; 005340b3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005340b4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005340b8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005340bc
    MOV EBX,dword ptr [0x00616494]      ; 005340c0 | DAT_00616494
    CMP dword ptr [EBX + 0x20c],0x0     ; 005340c6 | DAT_01cb6b0c
    JNZ 0x00534100                      ; 005340cd
        ;   XREF to: 00534100 (CONDITIONAL_JUMP)  ; LAB_00534100
    MOV EBX,dword ptr [0x0060b280]      ; 005340cf | DAT_0060b280
    MOV EBX,dword ptr [EBX + 0x18]      ; 005340d5 | DAT_01ba5c68
    TEST EBX,EBX                        ; 005340d8
    JZ 0x00534105                       ; 005340da
        ;   XREF to: 00534105 (CONDITIONAL_JUMP)  ; LAB_00534105
    XOR EBX,EBX                         ; 005340dc
    TEST EDI,EDI                        ; 005340de
    JLE 0x00534100                      ; 005340e0
        ;   XREF to: 00534100 (CONDITIONAL_JUMP)  ; LAB_00534100
    MOV ESI,EAX                         ; 005340e2
    PUSH ESI                            ; 005340e4
        ;   Label: LAB_005340e4
    MOV EAX,dword ptr [EBP + 0x161664]  ; 005340e5
    PUSH EAX                            ; 005340eb
    INC EBX                             ; 005340ec
    CALL FUN_004fac50                   ; 005340ed
        ;   XREF to: 004fac50 (UNCONDITIONAL_CALL)  ; undefined FUN_004fac50()
    ADD ESI,0x28                        ; 005340f2
    ADD ESP,0x8                         ; 005340f5
    CMP EBX,EDI                         ; 005340f8
    JL 0x005340e4                       ; 005340fa
        ;   XREF to: 005340e4 (CONDITIONAL_JUMP)  ; LAB_005340e4
    LEA EAX,[EAX]                       ; 005340fc
    POP EBP                             ; 00534100
        ;   Label: LAB_00534100
    POP EDI                             ; 00534101
    POP ESI                             ; 00534102
    POP EBX                             ; 00534103
    RET                                 ; 00534104
    XOR ESI,ESI                         ; 00534105
        ;   Label: LAB_00534105
    TEST EDI,EDI                        ; 00534107
    JLE 0x00534100                      ; 00534109
        ;   XREF to: 00534100 (CONDITIONAL_JUMP)  ; LAB_00534100
    MOV EBX,EAX                         ; 0053410b
    PUSH EBX                            ; 0053410d
        ;   Label: LAB_0053410d
    MOV ECX,dword ptr [0x0060b280]      ; 0053410e | DAT_0060b280
    PUSH ECX                            ; 00534114 | DAT_01ba5c50
    INC ESI                             ; 00534115
    CALL FUN_00469670                   ; 00534116
        ;   XREF to: 00469670 (UNCONDITIONAL_CALL)  ; undefined FUN_00469670()
    ADD EBX,0x28                        ; 0053411b
    ADD ESP,0x8                         ; 0053411e
    CMP ESI,EDI                         ; 00534121
    JL 0x0053410d                       ; 00534123
        ;   XREF to: 0053410d (CONDITIONAL_JUMP)  ; LAB_0053410d
    POP EBP                             ; 00534125
    POP EDI                             ; 00534126
    POP ESI                             ; 00534127
    POP EBX                             ; 00534128
    RET                                 ; 00534129

