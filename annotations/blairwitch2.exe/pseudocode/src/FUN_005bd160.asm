; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bd160(undefined4 *param_1)
;
;
; XREF[8]:
;   FUN_005bd180 at 005bd1e2
;   FUN_005bd548 at 005bd551
;   FUN_005bd584 at 005bd5e8
;   FUN_005bd67c at 005bd6e2
;   FUN_005bd894 at 005bd91d
;   FUN_005bd9a8 at 005bd9c0
;   FUN_005bdcac at 005bdcd0
;   FUN_005be148 at 005be15b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005bd160
        ;   Label: FUN_005bd160
    PUSH EAX                            ; 005bd164
    CALL dword ptr [EAX]                ; 005bd165
    ADD ESP,0x4                         ; 005bd167
    RET                                 ; 005bd16a

