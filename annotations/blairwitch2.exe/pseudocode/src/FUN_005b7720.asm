; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7720(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005b6e80 at 005b6e94
;
; Referenced Globals:
;   undefined4 DAT_006013c0
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x6013c0                       ; 005b7720 | DAT_006013c0
        ;   Label: FUN_005b7720
    PUSH 0x2                            ; 005b7725
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b7727
    PUSH EDX                            ; 005b772b
    CALL FUN_005b854f                   ; 005b772c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 005b7731
    RET                                 ; 005b7734

