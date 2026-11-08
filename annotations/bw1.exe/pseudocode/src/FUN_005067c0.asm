; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005067c0(int param_1)
;
;
; Called Functions:
;   FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005067c0
        ;   Label: FUN_005067c0
    PUSH 0x5ff680                       ; 005067c4
    PUSH 0x2                            ; 005067c9
    ADD EAX,0x3c                        ; 005067cb
    PUSH EAX                            ; 005067ce
    CALL FUN_005c0357                   ; 005067cf
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 005067d4
    SUB EAX,0x3c                        ; 005067d7
    RET                                 ; 005067da

