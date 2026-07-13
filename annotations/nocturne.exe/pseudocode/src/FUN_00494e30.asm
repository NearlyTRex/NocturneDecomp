; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00494e30(int param_1,float param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00494950 at 00494c24
;
; Referenced Globals:
;   undefined4 DAT_01c71340
;
; Called Functions:
;   FUN_00525fc0
;   FUN_00526340
;   FUN_005263c0
;   FUN_005265a0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00494e30
        ;   Label: FUN_00494e30
    FCOMP float ptr [0x01c71340]        ; 00494e34 | DAT_01c71340
    FNSTSW AX                           ; 00494e3a
    SAHF                                ; 00494e3c
    JC 0x00494e52                       ; 00494e3d
        ;   XREF to: 00494e52 (CONDITIONAL_JUMP)  ; LAB_00494e52
    MOV EAX,dword ptr [ESP + 0x4]       ; 00494e3f
    FLD float ptr [ESP + 0x8]           ; 00494e43
    FCOMP float ptr [EAX + 0x154]       ; 00494e47
    FNSTSW AX                           ; 00494e4d
    SAHF                                ; 00494e4f
    JC 0x00494e53                       ; 00494e50
        ;   XREF to: 00494e53 (CONDITIONAL_JUMP)  ; LAB_00494e53
    RET                                 ; 00494e52
        ;   Label: LAB_00494e52
    CALL FUN_00526340                   ; 00494e53
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
        ;   Label: LAB_00494e53
    MOV EAX,dword ptr [ESP + 0x4]       ; 00494e58
    ADD EAX,0x488                       ; 00494e5c
    PUSH EAX                            ; 00494e61
    CALL FUN_00525fc0                   ; 00494e62
        ;   XREF to: 00525fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525fc0()
    ADD ESP,0x4                         ; 00494e67
    MOV EDX,dword ptr [ESP + 0xc]       ; 00494e6a
    PUSH EDX                            ; 00494e6e
    CALL FUN_005265a0                   ; 00494e6f
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005265a0()
    ADD ESP,0x4                         ; 00494e74
    JMP 0x005263c0                      ; 00494e77
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)

