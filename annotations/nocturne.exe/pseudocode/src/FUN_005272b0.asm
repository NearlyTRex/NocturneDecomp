; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005272b0(void)
;
;
; XREF[2]:
;   FUN_00527c30 at 00527c3c
;   FUN_00528080 at 00528080
;
; Referenced Globals:
;   undefined4 DAT_02dbd494
;
; Called Functions:
;   FUN_00525570
;   FUN_00528800
;   FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005272b0
        ;   Label: FUN_005272b0
    PUSH ESI                            ; 005272b1
    MOV EBX,0x2dbd374                   ; 005272b2
    CALL FUN_00528800                   ; 005272b7
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; undefined FUN_00528800()
    LEA ESI,[EBX + 0x4800]              ; 005272bc
    PUSH EBX                            ; 005272c2 | DAT_02dbd494
        ;   Label: LAB_005272c2
    CALL FUN_00525570                   ; 005272c3
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; undefined FUN_00525570()
    ADD EBX,0x120                       ; 005272c8
    ADD ESP,0x4                         ; 005272ce
    CMP EBX,ESI                         ; 005272d1
    JNZ 0x005272c2                      ; 005272d3
        ;   XREF to: 005272c2 (CONDITIONAL_JUMP)  ; LAB_005272c2
    CALL FUN_00528890                   ; 005272d5
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined FUN_00528890()
    POP ESI                             ; 005272da
    POP EBX                             ; 005272db
    RET                                 ; 005272dc

