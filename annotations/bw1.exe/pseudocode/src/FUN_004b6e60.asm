; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b6e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_00492590 at 004925c8
;
; Referenced Globals:
;   undefined4 DAT_005df664
;
; Called Functions:
;   FUN_004b6ed0
;   FUN_005737d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6e60
        ;   Label: FUN_004b6e60
    PUSH ESI                            ; 004b6e61
    PUSH EDI                            ; 004b6e62
    PUSH EBP                            ; 004b6e63
    FLD float ptr [ESP + 0x24]          ; 004b6e64
    FCOMP double ptr [0x005df664]       ; 004b6e68 | DAT_005df664
    FNSTSW AX                           ; 004b6e6e
    SAHF                                ; 004b6e70
    JNC 0x004b6e7b                      ; 004b6e71
        ;   XREF to: 004b6e7b (CONDITIONAL_JUMP)  ; LAB_004b6e7b
    MOV dword ptr [ESP + 0x24],0x38d1b717 ; 004b6e73
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b6e7b
        ;   Label: LAB_004b6e7b
    PUSH dword ptr [ESP + 0x24]         ; 004b6e7f
    PUSH ECX                            ; 004b6e83
    MOV EBX,dword ptr [ESP + 0x24]      ; 004b6e84
    PUSH EBX                            ; 004b6e88
    MOV ESI,dword ptr [ESP + 0x24]      ; 004b6e89
    PUSH ESI                            ; 004b6e8d
    PUSH 0x0                            ; 004b6e8e
    MOV EDI,dword ptr [ESP + 0x28]      ; 004b6e90
    PUSH EDI                            ; 004b6e94
    CALL FUN_004b6ed0                   ; 004b6e95
        ;   XREF to: 004b6ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b6ed0()
    IMUL EAX,EAX,0x3e4                  ; 004b6e9a
    ADD ESP,0x18                        ; 004b6ea0
    MOV EDX,dword ptr [ESP + 0x28]      ; 004b6ea3
    MOV dword ptr [EAX + 0x1cb056c],EDX ; 004b6ea7
    MOV EDX,0x1cb018c                   ; 004b6ead
    ADD EDX,EAX                         ; 004b6eb2
    ADD EDX,0x180                       ; 004b6eb4
    PUSH EDX                            ; 004b6eba
    MOV EBP,dword ptr [EAX + 0x1cb056c] ; 004b6ebb
    PUSH EBP                            ; 004b6ec1
    CALL FUN_005737d0                   ; 004b6ec2
        ;   XREF to: 005737d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005737d0()
    ADD ESP,0x8                         ; 004b6ec7
    POP EBP                             ; 004b6eca
    POP EDI                             ; 004b6ecb
    POP ESI                             ; 004b6ecc
    POP EBX                             ; 004b6ecd
    RET                                 ; 004b6ece

