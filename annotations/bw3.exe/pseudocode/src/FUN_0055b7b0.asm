; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055b7b0(undefined4 param_1,double param_2,double param_3,double param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf49d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02cf49d0]      ; 0055b7b0 | DAT_02cf49d0
        ;   Label: FUN_0055b7b0
    TEST EDX,EDX                        ; 0055b7b6
    JNZ 0x0055b7bb                      ; 0055b7b8
        ;   XREF to: 0055b7bb (CONDITIONAL_JUMP)  ; LAB_0055b7bb
    RET                                 ; 0055b7ba
    PUSH 0x1                            ; 0055b7bb
        ;   Label: LAB_0055b7bb
    FLD double ptr [ESP + 0x1c]         ; 0055b7bd
    MOV EAX,EDX                         ; 0055b7c1
    SUB ESP,0x4                         ; 0055b7c3
    MOV EDX,dword ptr [EDX]             ; 0055b7c6
    FSTP float ptr [ESP]                ; 0055b7c8
    FLD double ptr [ESP + 0x18]         ; 0055b7cb
    SUB ESP,0x4                         ; 0055b7cf
    FSTP float ptr [ESP]                ; 0055b7d2
    FLD double ptr [ESP + 0x14]         ; 0055b7d5
    SUB ESP,0x4                         ; 0055b7d9
    FSTP float ptr [ESP]                ; 0055b7dc
    PUSH EAX                            ; 0055b7df
    CALL dword ptr [EDX + 0x38]         ; 0055b7e0
    RET                                 ; 0055b7e3

