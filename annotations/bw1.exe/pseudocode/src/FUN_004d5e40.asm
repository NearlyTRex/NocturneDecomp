; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d5e40(void)
;
;
; XREF[1]:
;   FUN_004cf5e0 at 004cf939
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;   undefined4 DAT_0061dca4
;   undefined4 DAT_00622c18
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_004b5ac0
;   FUN_004e6310
;   FUN_004f70e0
;   FUN_00554550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5e40
        ;   Label: FUN_004d5e40
    MOV EDX,dword ptr [0x00622c18]      ; 004d5e41 | DAT_00622c18
    PUSH EDX                            ; 004d5e47 | DAT_01e82168
    CALL FUN_00554550                   ; 004d5e48
        ;   XREF to: 00554550 (UNCONDITIONAL_CALL)  ; undefined FUN_00554550()
    ADD ESP,0x4                         ; 004d5e4d
    MOV ECX,dword ptr [0x0061c010]      ; 004d5e50 | DAT_0061c010
    PUSH ECX                            ; 004d5e56
    CALL FUN_004b5ac0                   ; 004d5e57
        ;   XREF to: 004b5ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5ac0()
    ADD ESP,0x4                         ; 004d5e5c
    MOV EBX,dword ptr [0x0061dca4]      ; 004d5e5f | DAT_0061dca4
    PUSH EBX                            ; 004d5e65
    CALL FUN_004e6310                   ; 004d5e66
        ;   XREF to: 004e6310 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6310()
    ADD ESP,0x4                         ; 004d5e6b
    CALL FUN_004f70e0                   ; 004d5e6e
        ;   XREF to: 004f70e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f70e0()
    POP EBX                             ; 004d5e73
    RET                                 ; 004d5e74

