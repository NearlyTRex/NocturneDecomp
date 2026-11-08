; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005065f0(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e768d
;
; Called Functions:
;   FUN_00409680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005065f0
        ;   Label: FUN_005065f0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005065f1
    PUSH EBX                            ; 005065f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005065f6
    PUSH EDX                            ; 005065fa
    CALL FUN_00409680                   ; 005065fb
        ;   XREF to: 00409680 (UNCONDITIONAL_CALL)  ; undefined FUN_00409680()
    FLD float ptr [EBX + 0x34]          ; 00506600
    ADD ESP,0x8                         ; 00506603
    FCOMP double ptr [0x005e768d]       ; 00506606 | DAT_005e768d
    FNSTSW AX                           ; 0050660c
    SAHF                                ; 0050660e
    JA 0x00506613                       ; 0050660f
        ;   XREF to: 00506613 (CONDITIONAL_JUMP)  ; LAB_00506613
    POP EBX                             ; 00506611
    RET                                 ; 00506612
    MOV dword ptr [EBX + 0x50],0x3f800000 ; 00506613
        ;   Label: LAB_00506613
    POP EBX                             ; 0050661a
    RET                                 ; 0050661b

