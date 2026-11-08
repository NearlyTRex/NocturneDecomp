; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b6560(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_005b7190 at 005b71bd
;
; Called Functions:
;   FUN_0044e6e0
;   FUN_005b6400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6560
        ;   Label: FUN_005b6560
    PUSH ESI                            ; 005b6561
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b6562
    MOV EAX,dword ptr [EDX + 0x104]     ; 005b6566
    PUSH EAX                            ; 005b656c
    PUSH 0x0                            ; 005b656d
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b656f
    PUSH ECX                            ; 005b6573
    PUSH EDX                            ; 005b6574
    CALL FUN_0044e6e0                   ; 005b6575
        ;   XREF to: 0044e6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e6e0()
    ADD ESP,0x8                         ; 005b657a
    PUSH EAX                            ; 005b657d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005b657e
    PUSH EBX                            ; 005b6582
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005b6583
    PUSH ESI                            ; 005b6587
    CALL FUN_005b6400                   ; 005b6588
        ;   XREF to: 005b6400 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6400()
    ADD ESP,0x14                        ; 005b658d
    POP ESI                             ; 005b6590
    POP EBX                             ; 005b6591
    RET                                 ; 005b6592

