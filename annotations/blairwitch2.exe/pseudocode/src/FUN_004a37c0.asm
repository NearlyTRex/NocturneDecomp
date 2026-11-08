; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a37c0(int param_1)
;
;
; Called Functions:
;   FUN_0040d420
;   FUN_004a3860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a37c0
        ;   Label: FUN_004a37c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a37c1
    ADD EBX,0x70                        ; 004a37c5
    PUSH EBX                            ; 004a37c8
    CALL FUN_0040d420                   ; 004a37c9
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004a37ce
    ADD EAX,0x18                        ; 004a37d1
    PUSH EAX                            ; 004a37d4
    CALL FUN_0040d420                   ; 004a37d5
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    LEA EBX,[EAX + 0xffffff78]          ; 004a37da
    MOV byte ptr [EBX + 0x4],0x0        ; 004a37e0
    MOV dword ptr [EBX + 0x84],0x0      ; 004a37e4
    ADD ESP,0x4                         ; 004a37ee
    MOV dword ptr [EBX + 0x9c],0x0      ; 004a37f1
    PUSH EBX                            ; 004a37fb
    MOV dword ptr [EBX + 0x2c0],0x0     ; 004a37fc
    CALL FUN_004a3860                   ; 004a3806
        ;   XREF to: 004a3860 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3860()
    ADD ESP,0x4                         ; 004a380b
    MOV EAX,EBX                         ; 004a380e
    POP EBX                             ; 004a3810
    RET                                 ; 004a3811

