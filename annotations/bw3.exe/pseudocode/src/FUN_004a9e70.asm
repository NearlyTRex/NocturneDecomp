; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a9e70(int param_1)
;
;
; Called Functions:
;   FUN_0040d300
;   FUN_004a9eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9e70
        ;   Label: FUN_004a9e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a9e71
    PUSH EBX                            ; 004a9e75
    CALL FUN_004a9eb0                   ; 004a9e76
        ;   XREF to: 004a9eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9eb0()
    ADD ESP,0x4                         ; 004a9e7b
    PUSH 0x0                            ; 004a9e7e
    ADD EBX,0x88                        ; 004a9e80
    PUSH EBX                            ; 004a9e86
    CALL FUN_0040d300                   ; 004a9e87
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d300()
    ADD ESP,0x8                         ; 004a9e8c
    PUSH 0x0                            ; 004a9e8f
    SUB EAX,0x18                        ; 004a9e91
    PUSH EAX                            ; 004a9e94
    CALL FUN_0040d300                   ; 004a9e95
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d300()
    ADD ESP,0x8                         ; 004a9e9a
    SUB EAX,0x70                        ; 004a9e9d
    POP EBX                             ; 004a9ea0
    RET                                 ; 004a9ea1

