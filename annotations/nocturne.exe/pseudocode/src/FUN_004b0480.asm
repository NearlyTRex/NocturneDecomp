; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0480(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004d4f30 at 004d50f6
;   FUN_004eea20 at 004eeaf3
;
; Called Functions:
;   FUN_004af730
;   FUN_004b0430
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004b0480
        ;   Label: FUN_004b0480
    JNZ 0x004b0488                      ; 004b0485
        ;   XREF to: 004b0488 (CONDITIONAL_JUMP)  ; LAB_004b0488
    RET                                 ; 004b0487
    PUSH ESI                            ; 004b0488
        ;   Label: LAB_004b0488
    PUSH EBX                            ; 004b0489
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b048a
    PUSH ECX                            ; 004b048e
    CALL FUN_004b0430                   ; 004b048f
        ;   XREF to: 004b0430 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0430()
    ADD ESP,0x4                         ; 004b0494
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b0497
    PUSH EBX                            ; 004b049b
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b049c
    PUSH ESI                            ; 004b04a0
    PUSH EAX                            ; 004b04a1
    CALL FUN_004af730                   ; 004b04a2
        ;   XREF to: 004af730 (UNCONDITIONAL_CALL)  ; undefined FUN_004af730()
    ADD ESP,0xc                         ; 004b04a7
    POP EBX                             ; 004b04aa
    POP ESI                             ; 004b04ab
    RET                                 ; 004b04ac

