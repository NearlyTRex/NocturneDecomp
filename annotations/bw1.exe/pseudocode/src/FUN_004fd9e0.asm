; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fd9e0(int param_1)
;
;
; Called Functions:
;   FUN_0040cc00
;   FUN_004a0510
;   FUN_00569b20
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd9e0
        ;   Label: FUN_004fd9e0
    PUSH ESI                            ; 004fd9e1
    SUB ESP,0x4                         ; 004fd9e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fd9e5
    LEA EBX,[ESI + 0x158]               ; 004fd9e9
    PUSH EBX                            ; 004fd9ef
    CALL FUN_00569b20                   ; 004fd9f0
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 004fd9f5
    PUSH EBX                            ; 004fd9f8
    CALL FUN_00569f30                   ; 004fd9f9
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 004fd9fe
    PUSH ESI                            ; 004fda01
    MOV dword ptr [ESI + 0xc268],0x0    ; 004fda02
    CALL FUN_004a0510                   ; 004fda0c
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 004fda11
    PUSH 0x41f00000                     ; 004fda14
    PUSH 0x0                            ; 004fda19
    CALL FUN_0040cc00                   ; 004fda1b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 004fda20
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fda24
    MOV dword ptr [ESI + 0xc1e4],EAX    ; 004fda28
    ADD ESP,0x8                         ; 004fda2e
    ADD ESP,0x4                         ; 004fda31
    POP ESI                             ; 004fda34
    POP EBX                             ; 004fda35
    RET                                 ; 004fda36

