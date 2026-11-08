; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049ed20(int param_1)
;
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ed20
        ;   Label: FUN_0049ed20
    PUSH 0x5f22b0                       ; 0049ed24
    PUSH 0x3                            ; 0049ed29
    ADD EAX,0x1c                        ; 0049ed2b
    PUSH EAX                            ; 0049ed2e
    CALL FUN_005b7f5f                   ; 0049ed2f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0049ed34
    SUB EAX,0x1c                        ; 0049ed37
    RET                                 ; 0049ed3a

