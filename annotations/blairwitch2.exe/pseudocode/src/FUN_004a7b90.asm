; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a7b90(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00448640 at 00448666
;
; Called Functions:
;   FUN_004a8850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7b90
        ;   Label: FUN_004a7b90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a7b91
    PUSH EBX                            ; 004a7b95
    CALL FUN_004a8850                   ; 004a7b96
        ;   XREF to: 004a8850 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8850()
    ADD ESP,0x4                         ; 004a7b9b
    MOV EAX,EBX                         ; 004a7b9e
    POP EBX                             ; 004a7ba0
    RET                                 ; 004a7ba1

