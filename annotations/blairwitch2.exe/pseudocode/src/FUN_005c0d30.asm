; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c0d30(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005b9e10 at 005b9e3f
;
; Called Functions:
;   FUN_005c0d60
;   FUN_005c42a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0d30
        ;   Label: FUN_005c0d30
    PUSH ESI                            ; 005c0d31
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c0d32
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c0d36
    PUSH EDX                            ; 005c0d3a
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c0d3b
    PUSH ECX                            ; 005c0d3f
    CALL FUN_005c0d60                   ; 005c0d40
        ;   XREF to: 005c0d60 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d60()
    ADD ESP,0x8                         ; 005c0d45
    INC EAX                             ; 005c0d48
    PUSH EAX                            ; 005c0d49
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c0d4a
    PUSH ESI                            ; 005c0d4e
    PUSH EBX                            ; 005c0d4f
    CALL FUN_005c42a0                   ; 005c0d50
        ;   XREF to: 005c42a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c42a0()
    ADD ESP,0xc                         ; 005c0d55
    MOV EAX,EBX                         ; 005c0d58
    POP ESI                             ; 005c0d5a
    POP EBX                             ; 005c0d5b
    RET                                 ; 005c0d5c

