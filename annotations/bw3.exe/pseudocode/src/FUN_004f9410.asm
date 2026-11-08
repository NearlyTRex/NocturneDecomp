; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9410(int param_1)
;
;
; XREF[1]:
;   FUN_004e7610 at 004e7636
;
; Called Functions:
;   FUN_00460490
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f9410
        ;   Label: FUN_004f9410
    ADD EAX,0x8                         ; 004f9414
    PUSH EAX                            ; 004f9417
    CALL FUN_00460490                   ; 004f9418
        ;   XREF to: 00460490 (UNCONDITIONAL_CALL)  ; undefined FUN_00460490()
    ADD ESP,0x4                         ; 004f941d
    ADD EAX,0x398                       ; 004f9420
    PUSH EAX                            ; 004f9425
    CALL FUN_00460490                   ; 004f9426
        ;   XREF to: 00460490 (UNCONDITIONAL_CALL)  ; undefined FUN_00460490()
    ADD ESP,0x4                         ; 004f942b
    ADD EAX,0x398                       ; 004f942e
    PUSH EAX                            ; 004f9433
    CALL FUN_00460490                   ; 004f9434
        ;   XREF to: 00460490 (UNCONDITIONAL_CALL)  ; undefined FUN_00460490()
    SUB EAX,0x738                       ; 004f9439
    ADD ESP,0x4                         ; 004f943e
    MOV dword ptr [EAX],0x0             ; 004f9441
    RET                                 ; 004f9447

