; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044e6a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[6]:
;   FUN_0044fcc0 at 0044fce9
;   FUN_004966a0 at 00496739
;   FUN_004968d0 at 0049697f
;   FUN_00497350 at 0049763b
;   FUN_0049b6f0 at 0049b7cd
;   FUN_0052d0e0 at 0052d1ef
;
; Called Functions:
;   FUN_0044e720
;   FUN_0044e7d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e6a0
        ;   Label: FUN_0044e6a0
    PUSH EBP                            ; 0044e6a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044e6a2
    CMP dword ptr [EBX + 0x110],0x1     ; 0044e6a6
    JGE 0x0044e6b2                      ; 0044e6ad
        ;   XREF to: 0044e6b2 (CONDITIONAL_JUMP)  ; LAB_0044e6b2
    POP EBP                             ; 0044e6af
    POP EBX                             ; 0044e6b0
    RET                                 ; 0044e6b1
    PUSH EDI                            ; 0044e6b2
        ;   Label: LAB_0044e6b2
    PUSH ESI                            ; 0044e6b3
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0044e6b4
    PUSH ECX                            ; 0044e6b8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0044e6b9
    PUSH ESI                            ; 0044e6bd
    PUSH EBX                            ; 0044e6be
    CALL FUN_0044e720                   ; 0044e6bf
        ;   XREF to: 0044e720 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e720()
    ADD ESP,0xc                         ; 0044e6c4
    MOV EDI,dword ptr [ESP + 0x20]      ; 0044e6c7
    PUSH EDI                            ; 0044e6cb
    MOV EBP,dword ptr [ESP + 0x20]      ; 0044e6cc
    PUSH EBP                            ; 0044e6d0
    PUSH EBX                            ; 0044e6d1
    CALL FUN_0044e7d0                   ; 0044e6d2
        ;   XREF to: 0044e7d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e7d0()
    ADD ESP,0xc                         ; 0044e6d7
    POP ESI                             ; 0044e6da
    POP EDI                             ; 0044e6db
    POP EBP                             ; 0044e6dc
    POP EBX                             ; 0044e6dd
    RET                                 ; 0044e6de

