; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b6e60(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_00414d10 at 00414d34
;   FUN_004f0310 at 004f0333
;   FUN_00501340 at 00501364
;   FUN_00511410 at 0051142b
;   FUN_0056f2c0 at 0056f2f2
;   FUN_00581530 at 0058157c
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH 0x6013c0                       ; 005b6e60
        ;   Label: FUN_005b6e60
    PUSH 0x2                            ; 005b6e65
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b6e67
    PUSH EDX                            ; 005b6e6b
    CALL FUN_005b7f5f                   ; 005b6e6c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 005b6e71
    MOV dword ptr [EAX + 0xc28],0x1     ; 005b6e74
    RET                                 ; 005b6e7e

