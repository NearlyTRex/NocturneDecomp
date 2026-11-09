; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00512140(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2257c
;   undefined4 DAT_01d22580
;   undefined4 DAT_01d24ffc
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00512140
        ;   Label: engine_mini3d.cpp_FUN_00512140
    MOV EDX,dword ptr [0x01d22580]      ; 00512141 | DAT_01d22580
    DEC EDX                             ; 00512147
    MOV dword ptr [0x01d22580],EDX      ; 00512148 | DAT_01d22580
    TEST EDX,EDX                        ; 0051214e
    JL 0x0051217b                       ; 00512150
        ;   XREF to: 0051217b (CONDITIONAL_JUMP)  ; LAB_0051217b
    MOV EAX,[0x01d22580]                ; 00512152 | DAT_01d22580
        ;   Label: LAB_00512152
    SHL EAX,0x2                         ; 00512157
    MOV EDX,EAX                         ; 0051215a
    SHL EAX,0x4                         ; 0051215c
    SUB EAX,EDX                         ; 0051215f
    MOV EDX,0x1d22584                   ; 00512161
    MOV EDI,0x1                         ; 00512166
    ADD EDX,EAX                         ; 0051216b
    MOV dword ptr [0x01d24ffc],EDI      ; 0051216d | DAT_01d24ffc
    MOV dword ptr [0x01d2257c],EDX      ; 00512173 | DAT_01d2257c
    POP EDI                             ; 00512179
    RET                                 ; 0051217a
    PUSH ESI                            ; 0051217b
        ;   Label: LAB_0051217b
    PUSH EBX                            ; 0051217c
    MOV EBX,0x5e8c5c                    ; 0051217d
    MOV ESI,0x505                       ; 00512182
    PUSH 0x5e8c71                       ; 00512187
    MOV dword ptr [0x01d1d400],EBX      ; 0051218c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00512192 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00512198
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051219d
    POP EBX                             ; 005121a0
    POP ESI                             ; 005121a1
    JMP 0x00512152                      ; 005121a2
        ;   XREF to: 00512152 (UNCONDITIONAL_JUMP)  ; LAB_00512152

