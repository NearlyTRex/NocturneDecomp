; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00537490(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00537520
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537490
        ;   Label: FUN_00537490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00537491
    PUSH EBX                            ; 00537495
    CALL FUN_00537520                   ; 00537496
        ;   XREF to: 00537520 (UNCONDITIONAL_CALL)  ; undefined FUN_00537520()
    ADD ESP,0x4                         ; 0053749b
    PUSH 0x14                           ; 0053749e
    PUSH 0x0                            ; 005374a0
    PUSH EBX                            ; 005374a2
    CALL FUN_005bfb70                   ; 005374a3
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 005374a8
    MOV EAX,EBX                         ; 005374ab
    POP EBX                             ; 005374ad
    RET                                 ; 005374ae

