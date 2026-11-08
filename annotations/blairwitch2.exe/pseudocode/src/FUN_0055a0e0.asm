; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0055a0e0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00558c40 at 00558c45
;
; Called Functions:
;   FUN_005511e0
;   FUN_005523d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a0e0
        ;   Label: FUN_0055a0e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055a0e1
    PUSH 0x3                            ; 0055a0e5
    MOV dword ptr [EBX],0x1400          ; 0055a0e7
    CALL FUN_005511e0                   ; 0055a0ed
        ;   XREF to: 005511e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005511e0()
    ADD ESP,0x4                         ; 0055a0f2
    CALL FUN_005523d0                   ; 0055a0f5
        ;   XREF to: 005523d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005523d0()
    MOV EAX,EBX                         ; 0055a0fa
    POP EBX                             ; 0055a0fc
    RET                                 ; 0055a0fd

