; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447ee0(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_00447d30 at 00447d36
;   FUN_00447d50 at 00447d56
;   FUN_00447db0 at 00447dc0
;
; Called Functions:
;   FUN_005c0336
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447ee0
        ;   Label: FUN_00447ee0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447ee1
    MOV EDX,dword ptr [EBX + 0x4]       ; 00447ee5
    PUSH EDX                            ; 00447ee8
    CALL FUN_005c0336                   ; 00447ee9
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    MOV dword ptr [EBX + 0x4],0x0       ; 00447eee
    ADD ESP,0x4                         ; 00447ef5
    MOV dword ptr [EBX],0x0             ; 00447ef8
    POP EBX                             ; 00447efe
    RET                                 ; 00447eff

