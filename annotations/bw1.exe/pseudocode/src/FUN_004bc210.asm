; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004bc210(int param_1)
;
;
; Called Functions:
;   FUN_0040d0c0
;   FUN_004bc250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc210
        ;   Label: FUN_004bc210
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bc211
    PUSH EBX                            ; 004bc215
    CALL FUN_004bc250                   ; 004bc216
        ;   XREF to: 004bc250 (UNCONDITIONAL_CALL)  ; undefined FUN_004bc250()
    ADD ESP,0x4                         ; 004bc21b
    PUSH 0x0                            ; 004bc21e
    ADD EBX,0x88                        ; 004bc220
    PUSH EBX                            ; 004bc226
    CALL FUN_0040d0c0                   ; 004bc227
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    ADD ESP,0x8                         ; 004bc22c
    PUSH 0x0                            ; 004bc22f
    SUB EAX,0x18                        ; 004bc231
    PUSH EAX                            ; 004bc234
    CALL FUN_0040d0c0                   ; 004bc235
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    ADD ESP,0x8                         ; 004bc23a
    SUB EAX,0x70                        ; 004bc23d
    POP EBX                             ; 004bc240
    RET                                 ; 004bc241

