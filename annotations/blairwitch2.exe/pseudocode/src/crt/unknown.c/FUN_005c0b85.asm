; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c0b85(int param_1,uint param_2)
;
;
; XREF[8]:
;   crt_unknown.c_FUN_005b9bbc at 005b9be1
;   crt_unknown.c_FUN_005b9bf7 at 005b9c0c
;   crt_unknown.c_FUN_005b9c39 at 005b9c75
;   crt_unknown.c_FUN_005b9c98 at 005b9cdb
;   unkafter_2d.cpp_FUN_005c599c at 005c59d3
;   unkafter_2d.cpp_FUN_005c5f03 at 005c5f52
;   unkafter_2d.cpp_FUN_005c5f69 at 005c5fd6
;   unkafter_morph.cpp_FUN_005c41d2 at 005c4223
;
; Called Functions:
;   unkafter_morph.cpp_FUN_005c40d2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0b85
        ;   Label: crt_unknown.c_FUN_005c0b85
    SUB ESP,0x4                         ; 005c0b86
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c0b89
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c0b8d
    MOV ECX,dword ptr [EAX + 0x10]      ; 005c0b91
    OR ECX,EDX                          ; 005c0b94
    MOV EBX,dword ptr [EAX + 0x14]      ; 005c0b96
    MOV EDX,ECX                         ; 005c0b99
    MOV dword ptr [EAX + 0x10],ECX      ; 005c0b9b
    AND EDX,EBX                         ; 005c0b9e
    JNZ 0x005c0ba7                      ; 005c0ba0
        ;   XREF to: 005c0ba7 (CONDITIONAL_JUMP)  ; LAB_005c0ba7
    ADD ESP,0x4                         ; 005c0ba2
    POP EBX                             ; 005c0ba5
    RET                                 ; 005c0ba6
    PUSH EDX                            ; 005c0ba7
        ;   Label: LAB_005c0ba7
    LEA EAX,[ESP + 0x4]                 ; 005c0ba8
    PUSH EAX                            ; 005c0bac
    CALL unkafter_morph.cpp_FUN_005c40d2 ; 005c0bad
        ;   XREF to: 005c40d2 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c40d2()
    ADD ESP,0x8                         ; 005c0bb2
    ADD ESP,0x4                         ; 005c0bb5
    POP EBX                             ; 005c0bb8
    RET                                 ; 005c0bb9

