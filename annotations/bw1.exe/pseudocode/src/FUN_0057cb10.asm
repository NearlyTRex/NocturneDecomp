; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0057cb10(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0057b670 at 0057b675
;
; Called Functions:
;   FUN_00573c10
;   FUN_00574e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057cb10
        ;   Label: FUN_0057cb10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057cb11
    PUSH 0x3                            ; 0057cb15
    MOV dword ptr [EBX],0x1400          ; 0057cb17
    CALL FUN_00573c10                   ; 0057cb1d
        ;   XREF to: 00573c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c10()
    ADD ESP,0x4                         ; 0057cb22
    CALL FUN_00574e00                   ; 0057cb25
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00574e00()
    MOV EAX,EBX                         ; 0057cb2a
    POP EBX                             ; 0057cb2c
    RET                                 ; 0057cb2d

