; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00447840(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00447610 at 00447642
;
; Called Functions:
;   FUN_004478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447840
        ;   Label: FUN_00447840
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447841
    PUSH EBX                            ; 00447845
    CALL FUN_004478b0                   ; 00447846
        ;   XREF to: 004478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004478b0()
    ADD ESP,0x4                         ; 0044784b
    MOV EAX,EBX                         ; 0044784e
    POP EBX                             ; 00447850
    RET                                 ; 00447851

