; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa230(int param_1)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005aa230
        ;   Label: FUN_005aa230
    PUSH 0x1                            ; 005aa234
    PUSH 0x0                            ; 005aa236
    ADD EAX,0x2b4                       ; 005aa238
    PUSH EAX                            ; 005aa23d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005aa23e
    CALL FUN_00503620                   ; 005aa248
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005aa24d
    RET                                 ; 005aa250

