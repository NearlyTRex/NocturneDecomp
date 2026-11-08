; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551c70(void)
;
;
; XREF[2]:
;   FUN_00552470 at 00552498
;   FUN_0055adb0 at 0055adb5
;
; Called Functions:
;   FUN_0054d9b0
;   FUN_005510d0
;   FUN_00551440
;   FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551c70
        ;   Label: FUN_00551c70
    PUSH ESI                            ; 00551c71
    CALL FUN_005532f0                   ; 00551c72
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005532f0()
    MOV EBX,0x2641924                   ; 00551c77
    CALL FUN_005510d0                   ; 00551c7c
        ;   XREF to: 005510d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005510d0()
    LEA ESI,[EBX + 0x6b00]              ; 00551c81
    PUSH EBX                            ; 00551c87
        ;   Label: LAB_00551c87
    CALL FUN_0054d9b0                   ; 00551c88
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d9b0()
    ADD EBX,0x1ac                       ; 00551c8d
    ADD ESP,0x4                         ; 00551c93
    CMP EBX,ESI                         ; 00551c96
    JNZ 0x00551c87                      ; 00551c98
        ;   XREF to: 00551c87 (CONDITIONAL_JUMP)  ; LAB_00551c87
    CALL FUN_00551440                   ; 00551c9a
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    POP ESI                             ; 00551c9f
    POP EBX                             ; 00551ca0
    RET                                 ; 00551ca1

