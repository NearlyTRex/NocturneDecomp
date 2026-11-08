; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045efc0(int param_1)
;
;
; XREF[3]:
;   FUN_00428ac0 at 00428ad2
;   FUN_004cf230 at 004cf271
;   FUN_004d03b0 at 004d0524
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   FUN_004894f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045efc0
        ;   Label: FUN_0045efc0
    ADD EAX,0x444                       ; 0045efc4
    PUSH EAX                            ; 0045efc9
    MOV EDX,dword ptr [0x006141f0]      ; 0045efca | DAT_006141f0
    PUSH EDX                            ; 0045efd0
    CALL FUN_004894f0                   ; 0045efd1
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    ADD ESP,0x8                         ; 0045efd6
    RET                                 ; 0045efd9

