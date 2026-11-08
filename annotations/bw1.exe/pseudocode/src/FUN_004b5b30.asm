; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b5b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[12]:
;   FUN_0040f4d0 at 0040f765
;   FUN_00412ba0 at 00412ff4
;   FUN_00434790 at 00434a73
;   FUN_00445cb0 at 00446395
;   FUN_0047b510 at 0047bb9e
;   FUN_00485610 at 004858be
;   FUN_0049f310 at 0049f758
;   FUN_004ae300 at 004ae3ef
;   FUN_004b22d0 at 004b2351
;   FUN_004b2d40 at 004b2e36
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_01c58a9c
;
; Called Functions:
;   FUN_004abeb0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b5b30
        ;   Label: FUN_004b5b30
    PUSH EDI                            ; 004b5b31
    PUSH EBP                            ; 004b5b32
    MOV EDX,dword ptr [0x01c58a9c]      ; 004b5b33 | DAT_01c58a9c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b5b39
    SUB EAX,EDX                         ; 004b5b40
    SHL EAX,0x2                         ; 004b5b42
    SUB EAX,EDX                         ; 004b5b45
    SHL EAX,0x2                         ; 004b5b47
    INC EDX                             ; 004b5b4a
    ADD EAX,0x1c58aa0                   ; 004b5b4b
    MOV dword ptr [0x01c58a9c],EDX      ; 004b5b50 | DAT_01c58a9c
    CMP EDX,0x800                       ; 004b5b56
    JL 0x004b5b68                       ; 004b5b5c
        ;   XREF to: 004b5b68 (CONDITIONAL_JUMP)  ; LAB_004b5b68
    PUSH EBX                            ; 004b5b5e
    XOR EBX,EBX                         ; 004b5b5f
    MOV dword ptr [0x01c58a9c],EBX      ; 004b5b61 | DAT_01c58a9c
    POP EBX                             ; 004b5b67
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b5b68
        ;   Label: LAB_004b5b68
    PUSH ESI                            ; 004b5b6c
    MOV EDI,dword ptr [ESP + 0x20]      ; 004b5b6d
    PUSH EDI                            ; 004b5b71
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004b5b72
    PUSH dword ptr [ESP + 0x20]         ; 004b5b76
    PUSH EBP                            ; 004b5b7a
    PUSH EAX                            ; 004b5b7b
    CALL FUN_004abeb0                   ; 004b5b7c
        ;   XREF to: 004abeb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004abeb0()
    ADD ESP,0x14                        ; 004b5b81
    POP EBP                             ; 004b5b84
    POP EDI                             ; 004b5b85
    POP ESI                             ; 004b5b86
    RET                                 ; 004b5b87

