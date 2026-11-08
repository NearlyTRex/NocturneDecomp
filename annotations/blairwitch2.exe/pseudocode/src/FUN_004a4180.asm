; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a4180(int param_1)
;
;
; Called Functions:
;   FUN_004a27e0
;   FUN_004a50b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4180
        ;   Label: FUN_004a4180
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a4181
    PUSH EBX                            ; 004a4185
    CALL FUN_004a50b0                   ; 004a4186
        ;   XREF to: 004a50b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a50b0()
    ADD ESP,0x4                         ; 004a418b
    PUSH 0x1caf240                      ; 004a418e
    MOV dword ptr [EBX + 0x40],0x0      ; 004a4193
    CALL FUN_004a27e0                   ; 004a419a
        ;   XREF to: 004a27e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a27e0()
    ADD ESP,0x4                         ; 004a419f
    MOV EAX,EBX                         ; 004a41a2
    POP EBX                             ; 004a41a4
    RET                                 ; 004a41a5

