; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00522fc0(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_004150f0 at 00415105
;   FUN_0050f1b0 at 0050f1f9
;   FUN_005203b0 at 005203cf
;   FUN_00532850 at 00532893
;   FUN_00592ce0 at 00592cf9
;   FUN_005a7420 at 005a7439
;
; Called Functions:
;   FUN_00522fe0
;   FUN_00523880
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00522fc0
        ;   Label: FUN_00522fc0
    PUSH EDX                            ; 00522fc4
    CALL FUN_00522fe0                   ; 00522fc5
        ;   XREF to: 00522fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00522fe0()
    ADD ESP,0x4                         ; 00522fca
    PUSH 0x0                            ; 00522fcd
    MOV ECX,dword ptr [ESP + 0x8]       ; 00522fcf
    PUSH ECX                            ; 00522fd3
    CALL FUN_00523880                   ; 00522fd4
        ;   XREF to: 00523880 (UNCONDITIONAL_CALL)  ; undefined FUN_00523880()
    ADD ESP,0x8                         ; 00522fd9
    RET                                 ; 00522fdc

