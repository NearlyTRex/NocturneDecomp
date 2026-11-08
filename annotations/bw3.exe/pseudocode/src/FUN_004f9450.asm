; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f9450(int param_1)
;
;
; Called Functions:
;   FUN_00460530
;   FUN_004f9580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9450
        ;   Label: FUN_004f9450
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f9451
    PUSH EBX                            ; 004f9455
    CALL FUN_004f9580                   ; 004f9456
        ;   XREF to: 004f9580 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9580()
    ADD ESP,0x4                         ; 004f945b
    PUSH 0x0                            ; 004f945e
    ADD EBX,0x738                       ; 004f9460
    PUSH EBX                            ; 004f9466
    CALL FUN_00460530                   ; 004f9467
        ;   XREF to: 00460530 (UNCONDITIONAL_CALL)  ; undefined FUN_00460530()
    ADD ESP,0x8                         ; 004f946c
    PUSH 0x0                            ; 004f946f
    SUB EAX,0x398                       ; 004f9471
    PUSH EAX                            ; 004f9476
    CALL FUN_00460530                   ; 004f9477
        ;   XREF to: 00460530 (UNCONDITIONAL_CALL)  ; undefined FUN_00460530()
    ADD ESP,0x8                         ; 004f947c
    PUSH 0x0                            ; 004f947f
    SUB EAX,0x398                       ; 004f9481
    PUSH EAX                            ; 004f9486
    CALL FUN_00460530                   ; 004f9487
        ;   XREF to: 00460530 (UNCONDITIONAL_CALL)  ; undefined FUN_00460530()
    ADD ESP,0x8                         ; 004f948c
    SUB EAX,0x8                         ; 004f948f
    POP EBX                             ; 004f9492
    RET                                 ; 004f9493

