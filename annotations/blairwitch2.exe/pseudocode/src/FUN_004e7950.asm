; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e7950(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc73d
;
; Called Functions:
;   FUN_00409830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7950
        ;   Label: FUN_004e7950
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e7951
    PUSH EBX                            ; 004e7955
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e7956
    PUSH EDX                            ; 004e795a
    CALL FUN_00409830                   ; 004e795b
        ;   XREF to: 00409830 (UNCONDITIONAL_CALL)  ; undefined FUN_00409830()
    FLD float ptr [EBX + 0x34]          ; 004e7960
    ADD ESP,0x8                         ; 004e7963
    FCOMP double ptr [0x005dc73d]       ; 004e7966 | DAT_005dc73d
    FNSTSW AX                           ; 004e796c
    SAHF                                ; 004e796e
    JA 0x004e7973                       ; 004e796f
        ;   XREF to: 004e7973 (CONDITIONAL_JUMP)  ; LAB_004e7973
    POP EBX                             ; 004e7971
    RET                                 ; 004e7972
    MOV dword ptr [EBX + 0x50],0x3f800000 ; 004e7973
        ;   Label: LAB_004e7973
    POP EBX                             ; 004e797a
    RET                                 ; 004e797b

