; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00555020(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   FUN_00556550 at 00556717
;   FUN_005570a0 at 005572bb
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00555020
        ;   Label: FUN_00555020
    FLD float ptr [ESP + 0x8]           ; 00555023
    CALL FUN_005b7ff0                   ; 00555027
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 0055502c
    MOV EDX,dword ptr [ESP]             ; 0055502f
    CMP EDX,0x64                        ; 00555032
    JL 0x00555046                       ; 00555035
        ;   XREF to: 00555046 (CONDITIONAL_JUMP)  ; LAB_00555046
    CMP EDX,0x186a0                     ; 00555037
    JG 0x0055504f                       ; 0055503d
        ;   XREF to: 0055504f (CONDITIONAL_JUMP)  ; LAB_0055504f
    MOV EAX,dword ptr [ESP]             ; 0055503f
        ;   Label: LAB_0055503f
    ADD ESP,0x4                         ; 00555042
    RET                                 ; 00555045
    MOV dword ptr [ESP],0x64            ; 00555046
        ;   Label: LAB_00555046
    JMP 0x0055503f                      ; 0055504d
        ;   XREF to: 0055503f (UNCONDITIONAL_JUMP)  ; LAB_0055503f
    MOV dword ptr [ESP],0x186a0         ; 0055504f
        ;   Label: LAB_0055504f
    MOV EAX,dword ptr [ESP]             ; 00555056
    ADD ESP,0x4                         ; 00555059
    RET                                 ; 0055505c

