; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534be0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;   undefined4 DAT_006167e0
;
; Called Functions:
;   FUN_0049cb50
;   FUN_004c94c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534be0
        ;   Label: FUN_00534be0
    PUSH ESI                            ; 00534be1
    MOV EDX,dword ptr [ESP + 0x10]      ; 00534be2
    PUSH EDX                            ; 00534be6
    PUSH 0x0                            ; 00534be7
    MOV ECX,dword ptr [0x006167e0]      ; 00534be9 | DAT_006167e0
    PUSH ECX                            ; 00534bef
    CALL FUN_004c94c0                   ; 00534bf0
        ;   XREF to: 004c94c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c94c0()
    ADD ESP,0xc                         ; 00534bf5
    MOV EBX,dword ptr [ESP + 0x10]      ; 00534bf8
    PUSH EBX                            ; 00534bfc
    PUSH 0x0                            ; 00534bfd
    MOV ESI,dword ptr [0x00614d30]      ; 00534bff | DAT_00614d30
    PUSH ESI                            ; 00534c05
    CALL FUN_0049cb50                   ; 00534c06
        ;   XREF to: 0049cb50 (UNCONDITIONAL_CALL)  ; undefined FUN_0049cb50()
    ADD ESP,0xc                         ; 00534c0b
    POP ESI                             ; 00534c0e
    POP EBX                             ; 00534c0f
    RET                                 ; 00534c10

