; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00578640(undefined4 param_1,double param_2,double param_3,double param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_02c81da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c81da0]      ; 00578640 | DAT_02c81da0
        ;   Label: FUN_00578640
    TEST EDX,EDX                        ; 00578646
    JNZ 0x0057864b                      ; 00578648
        ;   XREF to: 0057864b (CONDITIONAL_JUMP)  ; LAB_0057864b
    RET                                 ; 0057864a
    PUSH 0x1                            ; 0057864b
        ;   Label: LAB_0057864b
    FLD double ptr [ESP + 0x1c]         ; 0057864d
    MOV EAX,EDX                         ; 00578651
    SUB ESP,0x4                         ; 00578653
    MOV EDX,dword ptr [EDX]             ; 00578656
    FSTP float ptr [ESP]                ; 00578658
    FLD double ptr [ESP + 0x18]         ; 0057865b
    SUB ESP,0x4                         ; 0057865f
    FSTP float ptr [ESP]                ; 00578662
    FLD double ptr [ESP + 0x14]         ; 00578665
    SUB ESP,0x4                         ; 00578669
    FSTP float ptr [ESP]                ; 0057866c
    PUSH EAX                            ; 0057866f
    CALL dword ptr [EDX + 0x38]         ; 00578670
    RET                                 ; 00578673

