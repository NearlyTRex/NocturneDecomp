; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005501a0(void)
;
;
; XREF[3]:
;   FUN_004e4c70 at 004e4cb9
;   FUN_004f76f0 at 004f76fa
;   FUN_005502d0 at 005502d7
;
; Referenced Globals:
;   undefined4 DAT_02802f5c
;
; Called Functions:
;   FUN_00548370
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005501a0
        ;   Label: FUN_005501a0
    PUSH ESI                            ; 005501a1
    MOV EBX,0x272af5c                   ; 005501a2
    LEA ESI,[EBX + 0xd8000]             ; 005501a7
    PUSH EBX                            ; 005501ad
        ;   Label: LAB_005501ad
    CALL FUN_00548370                   ; 005501ae
        ;   XREF to: 00548370 (UNCONDITIONAL_CALL)  ; undefined FUN_00548370()
    ADD EBX,0x3600                      ; 005501b3
    ADD ESP,0x4                         ; 005501b9
    CMP EBX,ESI                         ; 005501bc
    JNZ 0x005501ad                      ; 005501be
        ;   XREF to: 005501ad (CONDITIONAL_JUMP)  ; LAB_005501ad
    PUSH 0x100                          ; 005501c0
    PUSH 0x0                            ; 005501c5
    PUSH 0x2802f5c                      ; 005501c7 | DAT_02802f5c
    CALL FUN_005a28f0                   ; 005501cc
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 005501d1
    POP ESI                             ; 005501d4
    POP EBX                             ; 005501d5
    RET                                 ; 005501d6

