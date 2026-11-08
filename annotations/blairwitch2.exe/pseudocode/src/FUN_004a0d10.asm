; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a0d10(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f6b4c
;
; Called Functions:
;   FUN_0044fd70
;   FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0d10
        ;   Label: FUN_004a0d10
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a0d11
    PUSH EDX                            ; 004a0d15
    CALL FUN_005899d0                   ; 004a0d16
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005899d0()
    ADD ESP,0x4                         ; 004a0d1b
    PUSH 0x5d599e                       ; 004a0d1e
    MOV EBX,EAX                         ; 004a0d23
    ADD EAX,0x2b4                       ; 004a0d25
    PUSH EAX                            ; 004a0d2a
    MOV dword ptr [EAX + -0x4],0x5f6b64 ; 004a0d2b
    CALL FUN_0044fd70                   ; 004a0d32
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x6d8],0x0     ; 004a0d37
    MOV dword ptr [EBX + 0x6d4],0x0     ; 004a0d41
    MOV dword ptr [EBX + 0x434],0x0     ; 004a0d4b
    MOV dword ptr [EBX + 0x438],0x0     ; 004a0d55
    MOV dword ptr [EBX + 0x43c],0x2     ; 004a0d5f
    MOV dword ptr [EBX + 0x440],0x0     ; 004a0d69
    MOV dword ptr [EBX + 0x444],0x41700000 ; 004a0d73
    MOV dword ptr [EBX + 0x448],0x1     ; 004a0d7d
    FLD float ptr [0x005f6b4c]          ; 004a0d87 | DAT_005f6b4c
    MOV dword ptr [EBX + 0x6e0],0x0     ; 004a0d8d
    ADD ESP,0x8                         ; 004a0d97
    MOV dword ptr [EBX + 0x6dc],0x0     ; 004a0d9a
    MOV EAX,EBX                         ; 004a0da4
    FSTP float ptr [EBX + 0x6c0]        ; 004a0da6
    POP EBX                             ; 004a0dac
    RET                                 ; 004a0dad

