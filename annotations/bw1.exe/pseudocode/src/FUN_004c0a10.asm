; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c0a10(int param_1)
;
;
; Called Functions:
;   FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c0a10
        ;   Label: FUN_004c0a10
    PUSH 0x5fb430                       ; 004c0a14
    PUSH 0x4                            ; 004c0a19
    ADD EAX,0x4                         ; 004c0a1b
    PUSH EAX                            ; 004c0a1e
    CALL FUN_005c0357                   ; 004c0a1f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004c0a24
    SUB EAX,0x4                         ; 004c0a27
    RET                                 ; 004c0a2a

