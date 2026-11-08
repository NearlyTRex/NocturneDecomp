; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bbfc0(void)
;
;
; XREF[1]:
;   FUN_005b77c0 at 005b77d9
;
; Called Functions:
;   FUN_005bbff7
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 005bbfc0
        ;   Label: FUN_005bbfc0
    JZ 0x005bbff0                       ; 005bbfc2
        ;   XREF to: 005bbff0 (CONDITIONAL_JUMP)  ; LAB_005bbff0
    CMP byte ptr [EAX],DL               ; 005bbfc4
    TEST AL,0x3                         ; 005bbfc6
        ;   Label: LAB_005bbfc6
    JZ 0x005bbfd3                       ; 005bbfc8
        ;   XREF to: 005bbfd3 (CONDITIONAL_JUMP)  ; LAB_005bbfd3
    MOV byte ptr [EAX],DL               ; 005bbfca
    INC EAX                             ; 005bbfcc
    ROR EDX,0x8                         ; 005bbfcd
    DEC ECX                             ; 005bbfd0
    JNZ 0x005bbfc6                      ; 005bbfd1
        ;   XREF to: 005bbfc6 (CONDITIONAL_JUMP)  ; LAB_005bbfc6
    PUSH ECX                            ; 005bbfd3
        ;   Label: LAB_005bbfd3
    SHR ECX,0x2                         ; 005bbfd4
    CALL FUN_005bbff7                   ; 005bbfd7
        ;   XREF to: 005bbff7 (UNCONDITIONAL_CALL)  ; undefined FUN_005bbff7()
    POP ECX                             ; 005bbfdc
    AND ECX,0x3                         ; 005bbfdd
    JZ 0x005bbff0                       ; 005bbfe0
        ;   XREF to: 005bbff0 (CONDITIONAL_JUMP)  ; LAB_005bbff0
    MOV byte ptr [EAX],DL               ; 005bbfe2
    DEC ECX                             ; 005bbfe4
    JZ 0x005bbff0                       ; 005bbfe5
        ;   XREF to: 005bbff0 (CONDITIONAL_JUMP)  ; LAB_005bbff0
    MOV byte ptr [EAX + 0x1],DH         ; 005bbfe7
    DEC ECX                             ; 005bbfea
    JZ 0x005bbff0                       ; 005bbfeb
        ;   XREF to: 005bbff0 (CONDITIONAL_JUMP)  ; LAB_005bbff0
    MOV byte ptr [EAX + 0x2],DL         ; 005bbfed
    RET                                 ; 005bbff0
        ;   Label: LAB_005bbff0

