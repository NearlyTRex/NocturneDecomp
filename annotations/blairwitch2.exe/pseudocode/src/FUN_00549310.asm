; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00549310(int param_1)
;
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00549310
        ;   Label: FUN_00549310
    PUSH 0x5f22b0                       ; 00549314
    PUSH 0x3                            ; 00549319
    ADD EAX,0x10                        ; 0054931b
    PUSH EAX                            ; 0054931e
    CALL FUN_005b7f5f                   ; 0054931f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00549324
    SUB EAX,0x10                        ; 00549327
    RET                                 ; 0054932a

