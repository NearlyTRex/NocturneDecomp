; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00509f30(undefined1 *param_1)
;
;
; XREF[4]:
;   FUN_00509cb0 at 00509cb6
;   FUN_00509db0 at 00509dbc
;   FUN_0054c1c0 at 0054c43b
;   FUN_005519e0 at 00551c06
;
; Called Functions:
;   FUN_005b86a0
;   FUN_005b89c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509f30
        ;   Label: FUN_00509f30
    PUSH ESI                            ; 00509f31
    PUSH EDI                            ; 00509f32
    MOV EDI,dword ptr [ESP + 0x10]      ; 00509f33
    MOV dword ptr [EDI + 0x10c],0x0     ; 00509f37
    LEA EBX,[EDI + 0x5320]              ; 00509f41
    MOV dword ptr [EDI + 0x108],0x0     ; 00509f47
    MOV EDX,dword ptr [EBX]             ; 00509f51
    MOV ESI,EBX                         ; 00509f53
    TEST EDX,EDX                        ; 00509f55
    JNZ 0x00509f67                      ; 00509f57
        ;   XREF to: 00509f67 (CONDITIONAL_JUMP)  ; LAB_00509f67
    MOV EBX,dword ptr [ESI + 0x4]       ; 00509f59
    TEST EBX,EBX                        ; 00509f5c
    JNZ 0x00509f84                      ; 00509f5e
        ;   XREF to: 00509f84 (CONDITIONAL_JUMP)  ; LAB_00509f84
    MOV byte ptr [EDI],0x0              ; 00509f60
    POP EDI                             ; 00509f63
    POP ESI                             ; 00509f64
    POP EBX                             ; 00509f65
    RET                                 ; 00509f66
    PUSH EDX                            ; 00509f67
        ;   Label: LAB_00509f67
    CALL FUN_005b89c0                   ; 00509f68
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 00509f6d
    MOV dword ptr [EBX],0x0             ; 00509f70
    MOV EBX,dword ptr [ESI + 0x4]       ; 00509f76
    TEST EBX,EBX                        ; 00509f79
    JNZ 0x00509f84                      ; 00509f7b
        ;   XREF to: 00509f84 (CONDITIONAL_JUMP)  ; LAB_00509f84
    MOV byte ptr [EDI],0x0              ; 00509f7d
    POP EDI                             ; 00509f80
    POP ESI                             ; 00509f81
    POP EBX                             ; 00509f82
    RET                                 ; 00509f83
    PUSH EBX                            ; 00509f84
        ;   Label: LAB_00509f84
    CALL FUN_005b86a0                   ; 00509f85
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00509f8a
    MOV dword ptr [ESI + 0x4],0x0       ; 00509f8d
    MOV byte ptr [EDI],0x0              ; 00509f94
    POP EDI                             ; 00509f97
    POP ESI                             ; 00509f98
    POP EBX                             ; 00509f99
    RET                                 ; 00509f9a

