; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b6e80(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_00415410 at 00415425
;   FUN_004f0400 at 004f0449
;   FUN_00501400 at 0050141f
;   FUN_005114f0 at 00511533
;   FUN_00570090 at 005700a9
;   FUN_005837e0 at 005837f9
;
; Called Functions:
;   FUN_005b6ea0
;   FUN_005b7720
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b6e80
        ;   Label: FUN_005b6e80
    PUSH EDX                            ; 005b6e84
    CALL FUN_005b6ea0                   ; 005b6e85
        ;   XREF to: 005b6ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6ea0()
    ADD ESP,0x4                         ; 005b6e8a
    PUSH 0x0                            ; 005b6e8d
    MOV ECX,dword ptr [ESP + 0x8]       ; 005b6e8f
    PUSH ECX                            ; 005b6e93
    CALL FUN_005b7720                   ; 005b6e94
        ;   XREF to: 005b7720 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7720()
    ADD ESP,0x8                         ; 005b6e99
    RET                                 ; 005b6e9c

