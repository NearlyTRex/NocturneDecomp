; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00514320(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_005152b0 at 005152b5
;   FUN_00515470 at 00515475
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00514320
        ;   Label: FUN_00514320
    MOV dword ptr [ECX],0x0             ; 00514324
    MOV EAX,ECX                         ; 0051432a
    MOV dword ptr [ECX + 0x194],0x5e3424 ; 0051432c
    LEA EDX,[ECX + 0x190]               ; 00514336
    ADD EAX,0x4                         ; 0051433c
        ;   Label: LAB_0051433c
    MOV dword ptr [EAX],0x0             ; 0051433f
    CMP EAX,EDX                         ; 00514345
    JNZ 0x0051433c                      ; 00514347
        ;   XREF to: 0051433c (CONDITIONAL_JUMP)  ; LAB_0051433c
    MOV EAX,ECX                         ; 00514349
    RET                                 ; 0051434b

