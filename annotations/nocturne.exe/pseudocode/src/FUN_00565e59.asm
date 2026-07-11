; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00565e59(int *param_1)
;
;
; XREF[2]:
;   FUN_004a3b90 at 004a3f6a
;   FUN_004a4170 at 004a4511
;
; Called Functions:
;   FUN_0056b327
;   FUN_0056cd52
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565e59
        ;   Label: FUN_00565e59
    MOV EBX,dword ptr [ESP + 0x8]       ; 00565e5a
    MOV EAX,dword ptr [EBX]             ; 00565e5e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00565e60
    ADD EAX,EBX                         ; 00565e63
    MOV EDX,dword ptr [EAX + 0x4]       ; 00565e65
    TEST EDX,EDX                        ; 00565e68
    JZ 0x00565e7b                       ; 00565e6a
        ;   XREF to: 00565e7b (CONDITIONAL_JUMP)  ; LAB_00565e7b
    PUSH EDX                            ; 00565e6c
    CALL FUN_0056cd52                   ; 00565e6d
        ;   XREF to: 0056cd52 (UNCONDITIONAL_CALL)  ; undefined FUN_0056cd52()
    ADD ESP,0x4                         ; 00565e72
    TEST EAX,EAX                        ; 00565e75
    JZ 0x00565e88                       ; 00565e77
        ;   XREF to: 00565e88 (CONDITIONAL_JUMP)  ; LAB_00565e88
    POP EBX                             ; 00565e79
    RET                                 ; 00565e7a
    PUSH 0x2                            ; 00565e7b
        ;   Label: LAB_00565e7b
    PUSH EAX                            ; 00565e7d
    CALL FUN_0056b327                   ; 00565e7e
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b327()
        ;   Label: LAB_00565e7e
    ADD ESP,0x8                         ; 00565e83
    POP EBX                             ; 00565e86
    RET                                 ; 00565e87
    MOV EAX,dword ptr [EBX]             ; 00565e88
        ;   Label: LAB_00565e88
    MOV EDX,dword ptr [EAX + 0x4]       ; 00565e8a
    PUSH 0x2                            ; 00565e8d
    ADD EBX,EDX                         ; 00565e8f
    PUSH EBX                            ; 00565e91
    JMP 0x00565e7e                      ; 00565e92
        ;   XREF to: 00565e7e (UNCONDITIONAL_JUMP)  ; LAB_00565e7e

