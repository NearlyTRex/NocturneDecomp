; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_2d_cpp_FUN_005cdb10(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   unkafter_2d.cpp_FUN_005ce510 at 005ce530
;   unkafter_zombie.cpp_FUN_005cc170 at 005cc192
;
; Called Functions:
;   crt_unknown.c_FUN_005c90c0
;   crt_unknown.c_FUN_005c90f0
;   crt_unknown.c_FUN_005c9110
;   unkafter_2d.cpp_FUN_005cdf70
;   unkafter_zombie.cpp_FUN_005cc560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cdb10
        ;   Label: unkafter_2d.cpp_FUN_005cdb10
    SUB ESP,0x4                         ; 005cdb11
    MOV EBX,dword ptr [ESP + 0xc]       ; 005cdb14
    MOV EAX,ESP                         ; 005cdb18
    PUSH EAX                            ; 005cdb1a
    MOV EDX,dword ptr [ESP + 0x14]      ; 005cdb1b
    PUSH EDX                            ; 005cdb1f
    CALL crt_unknown.c_FUN_005c90f0     ; 005cdb20
        ;   XREF to: 005c90f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c90f0()
    ADD ESP,0x8                         ; 005cdb25
    MOV EAX,ESP                         ; 005cdb28
    PUSH EAX                            ; 005cdb2a
    CALL crt_unknown.c_FUN_005c9110     ; 005cdb2b
        ;   XREF to: 005c9110 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9110()
    ADD ESP,0x4                         ; 005cdb30
    XOR DL,DL                           ; 005cdb33
    MOV byte ptr [ESP + EAX*0x1],DL     ; 005cdb35
    PUSH EBX                            ; 005cdb38
        ;   Label: LAB_005cdb38
    CALL unkafter_zombie.cpp_FUN_005cc560 ; 005cdb39
        ;   XREF to: 005cc560 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc560()
    ADD ESP,0x4                         ; 005cdb3e
    TEST EAX,EAX                        ; 005cdb41
    JNZ 0x005cdb62                      ; 005cdb43
        ;   XREF to: 005cdb62 (CONDITIONAL_JUMP)  ; LAB_005cdb62
    MOV EAX,ESP                         ; 005cdb45
    PUSH EAX                            ; 005cdb47
    PUSH EBX                            ; 005cdb48
    CALL unkafter_2d.cpp_FUN_005cdf70   ; 005cdb49
        ;   XREF to: 005cdf70 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005cdf70()
    ADD ESP,0x8                         ; 005cdb4e
    TEST EAX,EAX                        ; 005cdb51
    JZ 0x005cdb62                       ; 005cdb53
        ;   XREF to: 005cdb62 (CONDITIONAL_JUMP)  ; LAB_005cdb62
    PUSH EBX                            ; 005cdb55
    CALL crt_unknown.c_FUN_005c90c0     ; 005cdb56
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c90c0()
    MOV EBX,EAX                         ; 005cdb5b
    ADD ESP,0x4                         ; 005cdb5d
    JMP 0x005cdb38                      ; 005cdb60
        ;   XREF to: 005cdb38 (UNCONDITIONAL_JUMP)  ; LAB_005cdb38
    PUSH EBX                            ; 005cdb62
        ;   Label: LAB_005cdb62
    CALL unkafter_zombie.cpp_FUN_005cc560 ; 005cdb63
        ;   XREF to: 005cc560 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc560()
    ADD ESP,0x4                         ; 005cdb68
    TEST EAX,EAX                        ; 005cdb6b
    JZ 0x005cdb78                       ; 005cdb6d
        ;   XREF to: 005cdb78 (CONDITIONAL_JUMP)  ; LAB_005cdb78
    CMP dword ptr [ESP + 0x10],0x0      ; 005cdb6f
    JZ 0x005cdb78                       ; 005cdb74
        ;   XREF to: 005cdb78 (CONDITIONAL_JUMP)  ; LAB_005cdb78
    XOR EBX,EBX                         ; 005cdb76
    MOV EAX,EBX                         ; 005cdb78
        ;   Label: LAB_005cdb78
    ADD ESP,0x4                         ; 005cdb7a
    POP EBX                             ; 005cdb7d
    RET                                 ; 005cdb7e

