; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b610(void)
;
;
; XREF[3]:
;   FUN_00503a30 at 00503a79
;   FUN_0051bf10 at 0051bf1a
;   FUN_0056b740 at 0056b747
;
; Referenced Globals:
;   undefined4 DAT_027902bc
;
; Called Functions:
;   FUN_005637d0
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b610
        ;   Label: FUN_0056b610
    PUSH ESI                            ; 0056b611
    MOV EBX,0x26b82bc                   ; 0056b612
    LEA ESI,[EBX + 0xd8000]             ; 0056b617
    PUSH EBX                            ; 0056b61d
        ;   Label: LAB_0056b61d
    CALL FUN_005637d0                   ; 0056b61e
        ;   XREF to: 005637d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005637d0()
    ADD EBX,0x3600                      ; 0056b623
    ADD ESP,0x4                         ; 0056b629
    CMP EBX,ESI                         ; 0056b62c
    JNZ 0x0056b61d                      ; 0056b62e
        ;   XREF to: 0056b61d (CONDITIONAL_JUMP)  ; LAB_0056b61d
    PUSH 0x100                          ; 0056b630
    PUSH 0x0                            ; 0056b635
    PUSH 0x27902bc                      ; 0056b637 | DAT_027902bc
    CALL FUN_005bfb70                   ; 0056b63c
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0056b641
    POP ESI                             ; 0056b644
    POP EBX                             ; 0056b645
    RET                                 ; 0056b646

