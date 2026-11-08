; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cdda0(int param_1)
;
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdda0
        ;   Label: FUN_004cdda0
    PUSH ESI                            ; 004cdda1
    PUSH EDI                            ; 004cdda2
    SUB ESP,0x30                        ; 004cdda3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004cdda6
    PUSH EBX                            ; 004cddaa
    CALL FUN_004089d0                   ; 004cddab
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004cddb0
    PUSH 0x0                            ; 004cddb3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cddb5
    PUSH EBX                            ; 004cddbb
    LEA ESI,[ESP + 0x8]                 ; 004cddbc
    LEA EDI,[ESP + 0x20]                ; 004cddc0
    CALL dword ptr [EAX + 0x24]         ; 004cddc4
    MOV ECX,0x6                         ; 004cddc7
    ADD ESP,0x4                         ; 004cddcc
    LEA EAX,[ESP + 0x1c]                ; 004cddcf
    LEA ESI,[ESP + 0x4]                 ; 004cddd3
    PUSH EAX                            ; 004cddd7
    MOVSD.REP ES:EDI,ESI                ; 004cddd8
    CALL FUN_0041a840                   ; 004cddda
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 004cdddf
    MOV ESI,EAX                         ; 004cdde2
    TEST EAX,EAX                        ; 004cdde4
    JNZ 0x004cddfa                      ; 004cdde6
        ;   XREF to: 004cddfa (CONDITIONAL_JUMP)  ; LAB_004cddfa
    PUSH EBX                            ; 004cdde8
    CALL FUN_00408a10                   ; 004cdde9
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004cddee
    MOV EAX,ESI                         ; 004cddf1
    ADD ESP,0x30                        ; 004cddf3
    POP EDI                             ; 004cddf6
    POP ESI                             ; 004cddf7
    POP EBX                             ; 004cddf8
    RET                                 ; 004cddf9
    PUSH -0x1                           ; 004cddfa
        ;   Label: LAB_004cddfa
    LEA EAX,[EBX + 0x2b4]               ; 004cddfc
    PUSH 0x0                            ; 004cde02
    PUSH EAX                            ; 004cde04
    CALL FUN_0044fcc0                   ; 004cde05
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 004cde0a
    PUSH EBX                            ; 004cde0d
    CALL FUN_00408a10                   ; 004cde0e
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004cde13
    MOV EAX,ESI                         ; 004cde16
    ADD ESP,0x30                        ; 004cde18
    POP EDI                             ; 004cde1b
    POP ESI                             ; 004cde1c
    POP EBX                             ; 004cde1d
    RET                                 ; 004cde1e

