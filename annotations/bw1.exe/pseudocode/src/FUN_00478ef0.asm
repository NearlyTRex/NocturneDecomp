; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00478ef0(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x14b]:1  local_14b
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x36]:4  local_36
; undefined4       Stack[-0x2e]:4  local_2e
;
; XREF[4]:
;   FUN_00478e90 at 00478ed1
;   FUN_005032a0 at 0050332e
;   FUN_0053b250 at 0053b2b0
;   FUN_0053c800 at 0053c837
;
; Called Functions:
;   FUN_00479720
;   thunk_FUN_005c8094
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478ef0
        ;   Label: FUN_00478ef0
    SUB ESP,0x148                       ; 00478ef1
    MOV EBX,dword ptr [ESP + 0x150]     ; 00478ef7
    TEST EBX,EBX                        ; 00478efe
    JZ 0x00478f07                       ; 00478f00
        ;   XREF to: 00478f07 (CONDITIONAL_JUMP)  ; LAB_00478f07
    CMP byte ptr [EBX],0x0              ; 00478f02
    JNZ 0x00478f11                      ; 00478f05
        ;   XREF to: 00478f11 (CONDITIONAL_JUMP)  ; LAB_00478f11
    XOR EAX,EAX                         ; 00478f07
        ;   Label: LAB_00478f07
    ADD ESP,0x148                       ; 00478f09
        ;   Label: LAB_00478f09
    POP EBX                             ; 00478f0f
    RET                                 ; 00478f10
    PUSH EBX                            ; 00478f11
        ;   Label: LAB_00478f11
    LEA EAX,[ESP + 0x4]                 ; 00478f12
    PUSH EAX                            ; 00478f16
    CALL FUN_00479720                   ; 00478f17
        ;   XREF to: 00479720 (UNCONDITIONAL_CALL)  ; undefined FUN_00479720()
    ADD ESP,0x8                         ; 00478f1c
    TEST EAX,EAX                        ; 00478f1f
    JZ 0x00478f09                       ; 00478f21
        ;   XREF to: 00478f09 (CONDITIONAL_JUMP)  ; LAB_00478f09
    LEA EAX,[ESP + 0x100]               ; 00478f23
    PUSH EAX                            ; 00478f2a
    LEA EAX,[ESP + 0x4]                 ; 00478f2b
    PUSH EAX                            ; 00478f2f
    CALL thunk_FUN_005c8094             ; 00478f30
        ;   XREF to: 005c1da8 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005c8094()
    ADD ESP,0x8                         ; 00478f35
    TEST EAX,EAX                        ; 00478f38
    JNZ 0x00478f07                      ; 00478f3a
        ;   XREF to: 00478f07 (CONDITIONAL_JUMP)  ; LAB_00478f07
    PUSH EDI                            ; 00478f3c
    PUSH ESI                            ; 00478f3d
    MOV EAX,dword ptr [ESP + 0x11e]     ; 00478f3e
    MOV dword ptr [EBX + 0x204],EAX     ; 00478f45
    MOV EAX,dword ptr [ESP + 0x126]     ; 00478f4b
    MOV dword ptr [EBX + 0x200],0x0     ; 00478f52
    LEA ESI,[ESP + 0x8]                 ; 00478f5c
    MOV dword ptr [EBX + 0x20c],EAX     ; 00478f60
    LEA EDI,[EBX + 0x100]               ; 00478f66
    MOV dword ptr [EBX + 0x210],EAX     ; 00478f6c
    PUSH EDI                            ; 00478f72
    MOV AL,byte ptr [ESI]               ; 00478f73
        ;   Label: LAB_00478f73
    MOV byte ptr [EDI],AL               ; 00478f75
    CMP AL,0x0                          ; 00478f77
    JZ 0x00478f8b                       ; 00478f79
        ;   XREF to: 00478f8b (CONDITIONAL_JUMP)  ; LAB_00478f8b
    MOV AL,byte ptr [ESI + 0x1]         ; 00478f7b
    ADD ESI,0x2                         ; 00478f7e
    MOV byte ptr [EDI + 0x1],AL         ; 00478f81
    ADD EDI,0x2                         ; 00478f84
    CMP AL,0x0                          ; 00478f87
    JNZ 0x00478f73                      ; 00478f89
        ;   XREF to: 00478f73 (CONDITIONAL_JUMP)  ; LAB_00478f73
    POP EDI                             ; 00478f8b
        ;   Label: LAB_00478f8b
    MOV EAX,0x1                         ; 00478f8c
    MOV dword ptr [EBX + 0x208],0x0     ; 00478f91
    POP ESI                             ; 00478f9b
    POP EDI                             ; 00478f9c
    ADD ESP,0x148                       ; 00478f9d
    POP EBX                             ; 00478fa3
    RET                                 ; 00478fa4

