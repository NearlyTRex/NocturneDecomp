; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b7690(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532130
;   FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b7690
        ;   Label: FUN_004b7690
    PUSH EAX                            ; 004b7694
    CALL FUN_00532130                   ; 004b7695
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; undefined FUN_00532130()
    ADD ESP,0x4                         ; 004b769a
    PUSH 0x5fb430                       ; 004b769d
    PUSH 0x3                            ; 004b76a2
    ADD EAX,0x80                        ; 004b76a4
    PUSH EAX                            ; 004b76a9
    CALL FUN_005c0357                   ; 004b76aa
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004b76af
    MOV dword ptr [EAX + -0x44],0x600024 ; 004b76b2
    SUB EAX,0x80                        ; 004b76b9
    RET                                 ; 004b76be

