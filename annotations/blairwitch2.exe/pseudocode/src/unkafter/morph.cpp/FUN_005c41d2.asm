; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_morph_cpp_FUN_005c41d2(int *param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0c9f at 005c0cde
;
; Called Functions:
;   crt_unknown.c_FUN_005c0b85
;   unkafter_2d.cpp_FUN_005c58e5
;   unkafter_2d.cpp_FUN_005c599c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c41d2
        ;   Label: unkafter_morph.cpp_FUN_005c41d2
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c41d3
    MOV EAX,dword ptr [EBX]             ; 005c41d7
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c41d9
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 005c41dc
    TEST EDX,EDX                        ; 005c41e0
    JNZ 0x005c423e                      ; 005c41e2
        ;   XREF to: 005c423e (CONDITIONAL_JUMP)  ; LAB_005c423e
    MOV EAX,dword ptr [EBX]             ; 005c41e4
    MOV dword ptr [EBX + 0x4],EDX       ; 005c41e6
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c41e9
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 005c41ec
    TEST EAX,EAX                        ; 005c41f0
    JNZ 0x005c4254                      ; 005c41f2
        ;   XREF to: 005c4254 (CONDITIONAL_JUMP)  ; LAB_005c4254
    CMP dword ptr [ESP + 0xc],0x0       ; 005c41f4
        ;   Label: LAB_005c41f4
    JNZ 0x005c422b                      ; 005c41f9
        ;   XREF to: 005c422b (CONDITIONAL_JUMP)  ; LAB_005c422b
    MOV EAX,dword ptr [EBX]             ; 005c41fb
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c41fd
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 005c4200
    TEST AL,0x1                         ; 005c4204
    JZ 0x005c422b                       ; 005c4206
        ;   XREF to: 005c422b (CONDITIONAL_JUMP)  ; LAB_005c422b
    PUSH EBX                            ; 005c4208
    CALL unkafter_2d.cpp_FUN_005c58e5   ; 005c4209
        ;   XREF to: 005c58e5 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c58e5()
    MOV EAX,dword ptr [EBX]             ; 005c420e
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c4210
    ADD EAX,EBX                         ; 005c4213
    MOV EDX,dword ptr [EAX + 0x10]      ; 005c4215
    ADD ESP,0x4                         ; 005c4218
    AND EDX,0x4                         ; 005c421b
    JZ 0x005c422b                       ; 005c421e
        ;   XREF to: 005c422b (CONDITIONAL_JUMP)  ; LAB_005c422b
    PUSH 0x2                            ; 005c4220
    PUSH EAX                            ; 005c4222
    CALL crt_unknown.c_FUN_005c0b85     ; 005c4223
        ;   XREF to: 005c0b85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0b85()
    ADD ESP,0x8                         ; 005c4228
    MOV EAX,dword ptr [EBX]             ; 005c422b
        ;   Label: LAB_005c422b
    ADD EBX,dword ptr [EAX + 0x4]       ; 005c422d
    CMP dword ptr [EBX + 0x10],0x0      ; 005c4230
    SETZ AL                             ; 005c4234
    AND EAX,0xff                        ; 005c4237
    POP EBX                             ; 005c423c
    RET                                 ; 005c423d
    MOV EAX,dword ptr [EBX]             ; 005c423e
        ;   Label: LAB_005c423e
    MOV ECX,dword ptr [EAX + 0x4]       ; 005c4240
    PUSH 0x2                            ; 005c4243
    ADD EBX,ECX                         ; 005c4245
    PUSH EBX                            ; 005c4247
    CALL crt_unknown.c_FUN_005c0b85     ; 005c4248
        ;   XREF to: 005c0b85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0b85()
    ADD ESP,0x8                         ; 005c424d
    XOR EAX,EAX                         ; 005c4250
    POP EBX                             ; 005c4252
    RET                                 ; 005c4253
    PUSH EAX                            ; 005c4254
        ;   Label: LAB_005c4254
    CALL unkafter_2d.cpp_FUN_005c599c   ; 005c4255
        ;   XREF to: 005c599c (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c599c()
    ADD ESP,0x4                         ; 005c425a
    JMP 0x005c41f4                      ; 005c425d
        ;   XREF to: 005c41f4 (UNCONDITIONAL_JUMP)  ; LAB_005c41f4

