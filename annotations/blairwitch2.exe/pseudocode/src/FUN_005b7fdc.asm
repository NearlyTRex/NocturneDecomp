; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7fdc(int param_1)
;
;
; XREF[183]:
;   FUN_00408930 at 0040899d
;   FUN_0040de50 at 0040de9c
;   FUN_0040e980 at 0040e9c2
;   FUN_0040ed90 at 0040edd2
;   FUN_0040f120 at 0040f1a9
;   FUN_0040f1c0 at 0040f249
;   FUN_0040f260 at 0040f2a2
;   FUN_0040f5b0 at 0040f5f2
;   FUN_00410bb0 at 00410bf2
;   FUN_00410c00 at 00410c42
;   ... and 173 more
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b7fdc
        ;   Label: FUN_005b7fdc
    TEST EDX,EDX                        ; 005b7fe0
    JNZ 0x005b7fe5                      ; 005b7fe2
        ;   XREF to: 005b7fe5 (CONDITIONAL_JUMP)  ; LAB_005b7fe5
    RET                                 ; 005b7fe4
    PUSH EDX                            ; 005b7fe5
        ;   Label: LAB_005b7fe5
    CALL FUN_005b86a0                   ; 005b7fe6
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005b7feb
    RET                                 ; 005b7fee

