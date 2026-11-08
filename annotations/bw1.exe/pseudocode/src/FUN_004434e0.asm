; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004434e0(int param_1)
;
;
; XREF[2]:
;   FUN_00453610 at 004537c9
;   FUN_004d6420 at 004d678e
;
; Called Functions:
;   FUN_00442470
;   FUN_00442ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004434e0
        ;   Label: FUN_004434e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004434e1
    PUSH EBX                            ; 004434e5
    ADD ESP,0x4                         ; 004434e6
    MOV EDX,dword ptr [EBX + 0x24]      ; 004434e9
    PUSH EDX                            ; 004434ec
    MOV ECX,dword ptr [EBX + 0x20]      ; 004434ed
    PUSH ECX                            ; 004434f0
    LEA EAX,[EBX + 0x4]                 ; 004434f1
    PUSH EAX                            ; 004434f4
    CALL FUN_00442ff0                   ; 004434f5
        ;   XREF to: 00442ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00442ff0()
    ADD ESP,0xc                         ; 004434fa
    LEA EAX,[EBX + 0x18]                ; 004434fd
    PUSH EAX                            ; 00443500
    CALL FUN_00442470                   ; 00443501
        ;   XREF to: 00442470 (UNCONDITIONAL_CALL)  ; undefined FUN_00442470()
    MOV dword ptr [EBX + 0x30],0xffffffff ; 00443506
    MOV dword ptr [EBX + 0x34],0xffffffff ; 0044350d
    MOV dword ptr [EBX + 0x38],0xffffffff ; 00443514
    ADD ESP,0x4                         ; 0044351b
    MOV dword ptr [EBX + 0x3c],0xffffffff ; 0044351e
    POP EBX                             ; 00443525
    RET                                 ; 00443526

