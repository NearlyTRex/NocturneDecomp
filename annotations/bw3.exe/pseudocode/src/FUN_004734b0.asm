; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004734b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00473530
;   FUN_00473630
;   FUN_00473860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004734b0
        ;   Label: FUN_004734b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004734b1
    PUSH EBX                            ; 004734b5
    CALL FUN_00473530                   ; 004734b6
        ;   XREF to: 00473530 (UNCONDITIONAL_CALL)  ; undefined FUN_00473530()
    ADD ESP,0x4                         ; 004734bb
    PUSH EBX                            ; 004734be
    CALL FUN_00473860                   ; 004734bf
        ;   XREF to: 00473860 (UNCONDITIONAL_CALL)  ; undefined FUN_00473860()
    ADD ESP,0x4                         ; 004734c4
    PUSH EBX                            ; 004734c7
    CALL FUN_00473630                   ; 004734c8
        ;   XREF to: 00473630 (UNCONDITIONAL_CALL)  ; undefined FUN_00473630()
    ADD ESP,0x4                         ; 004734cd
    MOV EAX,EBX                         ; 004734d0
    POP EBX                             ; 004734d2
    RET                                 ; 004734d3

