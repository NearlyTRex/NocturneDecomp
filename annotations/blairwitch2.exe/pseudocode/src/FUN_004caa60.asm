; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004caa60(int param_1)
;
;
; XREF[3]:
;   FUN_004ca9a0 at 004ca9a6
;   FUN_004ca9c0 at 004ca9c6
;   FUN_0057b840 at 0057b847
;
; Called Functions:
;   FUN_005734a0
;   FUN_005b7fdc
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004caa60
        ;   Label: FUN_004caa60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004caa61
    MOV EDX,dword ptr [EBX + 0x24]      ; 004caa65
    TEST EDX,EDX                        ; 004caa68
    JNZ 0x004caa7c                      ; 004caa6a
        ;   XREF to: 004caa7c (CONDITIONAL_JUMP)  ; LAB_004caa7c
    MOV EAX,dword ptr [EBX + 0x28]      ; 004caa6c
    TEST EAX,EAX                        ; 004caa6f
    JNZ 0x004caa9c                      ; 004caa71
        ;   XREF to: 004caa9c (CONDITIONAL_JUMP)  ; LAB_004caa9c
    MOV dword ptr [EBX + 0x28],0x0      ; 004caa73
    POP EBX                             ; 004caa7a
    RET                                 ; 004caa7b
    PUSH EDX                            ; 004caa7c
        ;   Label: LAB_004caa7c
    CALL FUN_005b86a0                   ; 004caa7d
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 004caa82
    MOV dword ptr [EBX + 0x24],0x0      ; 004caa85
    MOV EAX,dword ptr [EBX + 0x28]      ; 004caa8c
    TEST EAX,EAX                        ; 004caa8f
    JNZ 0x004caa9c                      ; 004caa91
        ;   XREF to: 004caa9c (CONDITIONAL_JUMP)  ; LAB_004caa9c
    MOV dword ptr [EBX + 0x28],0x0      ; 004caa93
    POP EBX                             ; 004caa9a
    RET                                 ; 004caa9b
    PUSH 0x0                            ; 004caa9c
        ;   Label: LAB_004caa9c
    PUSH EAX                            ; 004caa9e
    CALL FUN_005734a0                   ; 004caa9f
        ;   XREF to: 005734a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005734a0()
    ADD ESP,0x8                         ; 004caaa4
    PUSH EAX                            ; 004caaa7
    CALL FUN_005b7fdc                   ; 004caaa8
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004caaad
    MOV dword ptr [EBX + 0x28],0x0      ; 004caab0
    POP EBX                             ; 004caab7
    RET                                 ; 004caab8

