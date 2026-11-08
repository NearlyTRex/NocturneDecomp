; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00516140(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005161d0
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516140
        ;   Label: FUN_00516140
    MOV EBX,dword ptr [ESP + 0x8]       ; 00516141
    PUSH EBX                            ; 00516145
    CALL FUN_005161d0                   ; 00516146
        ;   XREF to: 005161d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005161d0()
    ADD ESP,0x4                         ; 0051614b
    PUSH 0x14                           ; 0051614e
    PUSH 0x0                            ; 00516150
    PUSH EBX                            ; 00516152
    CALL FUN_005b77c0                   ; 00516153
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00516158
    MOV EAX,EBX                         ; 0051615b
    POP EBX                             ; 0051615d
    RET                                 ; 0051615e

