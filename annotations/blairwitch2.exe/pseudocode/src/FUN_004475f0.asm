; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004475f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00447610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004475f0
        ;   Label: FUN_004475f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004475f1
    PUSH EBX                            ; 004475f5
    CALL FUN_00447610                   ; 004475f6
        ;   XREF to: 00447610 (UNCONDITIONAL_CALL)  ; undefined FUN_00447610()
    ADD ESP,0x4                         ; 004475fb
    MOV EAX,EBX                         ; 004475fe
    POP EBX                             ; 00447600
    RET                                 ; 00447601

