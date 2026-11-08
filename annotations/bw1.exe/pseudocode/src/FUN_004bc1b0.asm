; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004bc1b0(int param_1)
;
;
; Called Functions:
;   FUN_0040d0a0
;   FUN_004bc250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc1b0
        ;   Label: FUN_004bc1b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bc1b1
    ADD EBX,0x70                        ; 004bc1b5
    PUSH EBX                            ; 004bc1b8
    CALL FUN_0040d0a0                   ; 004bc1b9
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 004bc1be
    ADD EAX,0x18                        ; 004bc1c1
    PUSH EAX                            ; 004bc1c4
    CALL FUN_0040d0a0                   ; 004bc1c5
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    LEA EBX,[EAX + 0xffffff78]          ; 004bc1ca
    MOV byte ptr [EBX + 0x4],0x0        ; 004bc1d0
    MOV dword ptr [EBX + 0x84],0x0      ; 004bc1d4
    ADD ESP,0x4                         ; 004bc1de
    MOV dword ptr [EBX + 0x9c],0x0      ; 004bc1e1
    PUSH EBX                            ; 004bc1eb
    MOV dword ptr [EBX + 0x2c0],0x0     ; 004bc1ec
    CALL FUN_004bc250                   ; 004bc1f6
        ;   XREF to: 004bc250 (UNCONDITIONAL_CALL)  ; undefined FUN_004bc250()
    ADD ESP,0x4                         ; 004bc1fb
    MOV EAX,EBX                         ; 004bc1fe
    POP EBX                             ; 004bc200
    RET                                 ; 004bc201

