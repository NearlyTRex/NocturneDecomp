; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b75f0(int param_1)
;
;
; Called Functions:
;   FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b75f0
        ;   Label: FUN_004b75f0
    PUSH 0x5fb430                       ; 004b75f4
    PUSH 0x3                            ; 004b75f9
    ADD EAX,0x1c                        ; 004b75fb
    PUSH EAX                            ; 004b75fe
    CALL FUN_005c0357                   ; 004b75ff
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004b7604
    SUB EAX,0x1c                        ; 004b7607
    RET                                 ; 004b760a

