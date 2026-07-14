; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_10010c20(undefined4 param_1)
;
;
; Called Functions:
;   __lock
;   FUN_10005a10
;   FUN_10010c50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10010c20
        ;   Label: FUN_10010c20
    PUSH 0xc                            ; 10010c21
    CALL __lock                         ; 10010c23
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    MOV EAX,dword ptr [ESP + 0xc]       ; 10010c28
    ADD ESP,0x4                         ; 10010c2c
    PUSH EAX                            ; 10010c2f
    CALL FUN_10010c50                   ; 10010c30
        ;   XREF to: 10010c50 (UNCONDITIONAL_CALL)  ; undefined FUN_10010c50()
    ADD ESP,0x4                         ; 10010c35
    MOV ESI,EAX                         ; 10010c38
    PUSH 0xc                            ; 10010c3a
    CALL FUN_10005a10                   ; 10010c3c
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 10010c41
    MOV EAX,ESI                         ; 10010c44
    POP ESI                             ; 10010c46
    RET                                 ; 10010c47

