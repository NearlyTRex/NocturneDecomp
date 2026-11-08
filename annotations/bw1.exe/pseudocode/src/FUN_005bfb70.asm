; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005bfb70(undefined4 param_1)
;
;
; XREF[116]:
;   FUN_00402f30 at 00402f9b
;   FUN_0040d970 at 0040d987
;   FUN_0040fa70 at 0040fb68
;   FUN_00419b90 at 00419fae
;   FUN_0041ac60 at 0041ace8
;   FUN_0041b750 at 0041b82f
;   FUN_00424f80 at 00424fef
;   FUN_00425970 at 00425995
;   FUN_0042c080 at 0042c278
;   FUN_00441c60 at 00441c76
;   ... and 106 more
;
; Called Functions:
;   FUN_005c4290
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005bfb70
        ;   Label: FUN_005bfb70
    MOV EDX,dword ptr [ESP + 0x8]       ; 005bfb74
    MOV ECX,dword ptr [ESP + 0xc]       ; 005bfb78
    PUSH EAX                            ; 005bfb7c
    MOV DH,DL                           ; 005bfb7d
    SHL EDX,0x8                         ; 005bfb7f
    MOV DL,DH                           ; 005bfb82
    SHL EDX,0x8                         ; 005bfb84
    MOV DL,DH                           ; 005bfb87
    CALL FUN_005c4290                   ; 005bfb89
        ;   XREF to: 005c4290 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4290()
    POP EAX                             ; 005bfb8e
    RET                                 ; 005bfb8f

