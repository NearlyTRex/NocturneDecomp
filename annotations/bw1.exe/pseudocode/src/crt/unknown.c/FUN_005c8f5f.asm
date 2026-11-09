; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c8f5f(int *param_1,int param_2)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005c2078 at 005c2080
;   unkafter_2d.cpp_FUN_005ce203 at 005ce20c
;   unkafter_2d.cpp_FUN_005ce269 at 005ce277
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005cc4d2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c8f5f
        ;   Label: crt_unknown.c_FUN_005c8f5f
    CMP dword ptr [ESP + 0x8],0x0       ; 005c8f63
    JZ 0x005c8f89                       ; 005c8f68
        ;   XREF to: 005c8f89 (CONDITIONAL_JUMP)  ; LAB_005c8f89
    MOV EDX,dword ptr [EAX]             ; 005c8f6a
        ;   Label: LAB_005c8f6a
    MOV EDX,dword ptr [EDX + 0x4]       ; 005c8f6c
    CMP dword ptr [EDX + EAX*0x1 + 0x10],0x0 ; 005c8f6f
    JNZ 0x005c8f97                      ; 005c8f74
        ;   XREF to: 005c8f97 (CONDITIONAL_JUMP)  ; LAB_005c8f97
    MOV EDX,dword ptr [EAX]             ; 005c8f76
    MOV EDX,dword ptr [EDX + 0x4]       ; 005c8f78
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8] ; 005c8f7b
    TEST EDX,EDX                        ; 005c8f7f
    JNZ 0x005c8f97                      ; 005c8f81
        ;   XREF to: 005c8f97 (CONDITIONAL_JUMP)  ; LAB_005c8f97
    MOV EAX,0x1                         ; 005c8f83
    RET                                 ; 005c8f88
    MOV EDX,dword ptr [EAX]             ; 005c8f89
        ;   Label: LAB_005c8f89
    MOV EDX,dword ptr [EDX + 0x4]       ; 005c8f8b
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0xc] ; 005c8f8e
    TEST DL,0x1                         ; 005c8f92
    JZ 0x005c8f6a                       ; 005c8f95
        ;   XREF to: 005c8f6a (CONDITIONAL_JUMP)  ; LAB_005c8f6a
    PUSH EBX                            ; 005c8f97
        ;   Label: LAB_005c8f97
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c8f98
    PUSH EBX                            ; 005c8f9c
    PUSH EAX                            ; 005c8f9d
    CALL unkafter_zombie.cpp_FUN_005cc4d2 ; 005c8f9e
        ;   XREF to: 005cc4d2 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc4d2()
    ADD ESP,0x8                         ; 005c8fa3
    POP EBX                             ; 005c8fa6
    RET                                 ; 005c8fa7

