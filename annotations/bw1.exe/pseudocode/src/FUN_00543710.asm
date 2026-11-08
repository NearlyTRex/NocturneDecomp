; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00543710(int param_1)
;
;
; Called Functions:
;   FUN_004993a0
;   FUN_00543740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543710
        ;   Label: FUN_00543710
    MOV EBX,dword ptr [ESP + 0x8]       ; 00543711
    PUSH EBX                            ; 00543715
    CALL FUN_00543740                   ; 00543716
        ;   XREF to: 00543740 (UNCONDITIONAL_CALL)  ; undefined FUN_00543740()
    ADD ESP,0x4                         ; 0054371b
    PUSH 0x0                            ; 0054371e
    ADD EBX,0x34                        ; 00543720
    PUSH EBX                            ; 00543723
    CALL FUN_004993a0                   ; 00543724
        ;   XREF to: 004993a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004993a0()
    ADD ESP,0x8                         ; 00543729
    SUB EAX,0x34                        ; 0054372c
    POP EBX                             ; 0054372f
    RET                                 ; 00543730

