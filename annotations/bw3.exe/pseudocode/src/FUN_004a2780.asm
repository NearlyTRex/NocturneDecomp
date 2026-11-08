; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   FUN_004caeb0 at 004cafd0
;   FUN_0054afb0 at 0054b2db
;
; Referenced Globals:
;   undefined4 DAT_01cbc0ec
;
; Called Functions:
;   FUN_0049a650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2780
        ;   Label: FUN_004a2780
    PUSH ESI                            ; 004a2781
    PUSH EDI                            ; 004a2782
    PUSH EBP                            ; 004a2783
    MOV EDX,dword ptr [0x01cbc0ec]      ; 004a2784 | DAT_01cbc0ec
    IMUL EAX,EDX,0xd4                   ; 004a278a
    LEA ECX,[EDX + 0x1]                 ; 004a2790
    ADD EAX,0x1cbc0f0                   ; 004a2793
    MOV dword ptr [0x01cbc0ec],ECX      ; 004a2798 | DAT_01cbc0ec
    CMP ECX,0x3e8                       ; 004a279e
    JL 0x004a27ae                       ; 004a27a4
        ;   XREF to: 004a27ae (CONDITIONAL_JUMP)  ; LAB_004a27ae
    XOR ESI,ESI                         ; 004a27a6
    MOV dword ptr [0x01cbc0ec],ESI      ; 004a27a8 | DAT_01cbc0ec
    MOV EDI,dword ptr [ESP + 0x28]      ; 004a27ae
        ;   Label: LAB_004a27ae
    PUSH EDI                            ; 004a27b2
    MOV EBP,dword ptr [ESP + 0x28]      ; 004a27b3
    PUSH EBP                            ; 004a27b7
    MOV EDX,dword ptr [ESP + 0x28]      ; 004a27b8
    PUSH EDX                            ; 004a27bc
    MOV ECX,dword ptr [ESP + 0x28]      ; 004a27bd
    PUSH ECX                            ; 004a27c1
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a27c2
    PUSH EBX                            ; 004a27c6
    PUSH EAX                            ; 004a27c7
    CALL FUN_0049a650                   ; 004a27c8
        ;   XREF to: 0049a650 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a650()
    ADD ESP,0x18                        ; 004a27cd
    POP EBP                             ; 004a27d0
    POP EDI                             ; 004a27d1
    POP ESI                             ; 004a27d2
    POP EBX                             ; 004a27d3
    RET                                 ; 004a27d4

