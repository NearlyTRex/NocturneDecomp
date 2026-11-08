; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00492cd0(int param_1)
;
;
; Called Functions:
;   FUN_00447100
;   FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492cd0
        ;   Label: FUN_00492cd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00492cd1
    PUSH EBX                            ; 00492cd5
    CALL FUN_00447100                   ; 00492cd6
        ;   XREF to: 00447100 (UNCONDITIONAL_CALL)  ; undefined FUN_00447100()
    ADD ESP,0x4                         ; 00492cdb
    LEA EAX,[EBX + 0x350]               ; 00492cde
    PUSH EAX                            ; 00492ce4
    CALL FUN_0044fd00                   ; 00492ce5
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    MOV dword ptr [EBX + 0xf8],0x1      ; 00492cea
    MOV dword ptr [EBX + 0x534],0x0     ; 00492cf4
    ADD ESP,0x4                         ; 00492cfe
    MOV dword ptr [EBX + 0x538],0x0     ; 00492d01
    POP EBX                             ; 00492d0b
    RET                                 ; 00492d0c

