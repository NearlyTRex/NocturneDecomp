; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00518290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[3]:
;   FUN_004962b0 at 00496467
;   FUN_00496ee0 at 0049702c
;   FUN_0049caa0 at 0049cb4c
;
; Called Functions:
;   FUN_005182e0
;   FUN_00518300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518290
        ;   Label: FUN_00518290
    PUSH ESI                            ; 00518291
    PUSH EDI                            ; 00518292
    PUSH EBP                            ; 00518293
    MOV EBX,dword ptr [ESP + 0x14]      ; 00518294
    MOV ESI,dword ptr [ESP + 0x18]      ; 00518298
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0051829c
    MOV EDI,dword ptr [ESP + 0x20]      ; 005182a0
    PUSH EBP                            ; 005182a4
    PUSH ESI                            ; 005182a5
    PUSH EBX                            ; 005182a6
    CALL FUN_005182e0                   ; 005182a7
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005182e0()
    ADD ESP,0xc                         ; 005182ac
    PUSH EBP                            ; 005182af
    PUSH EDI                            ; 005182b0
    PUSH EBX                            ; 005182b1
    CALL FUN_005182e0                   ; 005182b2
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005182e0()
    ADD ESP,0xc                         ; 005182b7
    PUSH EDI                            ; 005182ba
    PUSH ESI                            ; 005182bb
    PUSH EBX                            ; 005182bc
    CALL FUN_00518300                   ; 005182bd
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; undefined FUN_00518300()
    ADD ESP,0xc                         ; 005182c2
    PUSH EDI                            ; 005182c5
    PUSH ESI                            ; 005182c6
    PUSH EBP                            ; 005182c7
    CALL FUN_00518300                   ; 005182c8
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; undefined FUN_00518300()
    ADD ESP,0xc                         ; 005182cd
    POP EBP                             ; 005182d0
    POP EDI                             ; 005182d1
    POP ESI                             ; 005182d2
    POP EBX                             ; 005182d3
    RET                                 ; 005182d4

