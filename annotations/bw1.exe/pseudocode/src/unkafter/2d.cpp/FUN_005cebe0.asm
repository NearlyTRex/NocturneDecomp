; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005cebe0(undefined4 param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005ce510 at 005ce5ad
;
; Called Functions:
;   crt_unknown.c_FUN_005c90c0
;   unkafter_zombie.cpp_FUN_005cc560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cebe0
        ;   Label: unkafter_2d.cpp_FUN_005cebe0
    PUSH ESI                            ; 005cebe1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005cebe2
    XOR ESI,ESI                         ; 005cebe6
    PUSH EBX                            ; 005cebe8
        ;   Label: LAB_005cebe8
    CALL unkafter_zombie.cpp_FUN_005cc560 ; 005cebe9
        ;   XREF to: 005cc560 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc560()
    ADD ESP,0x4                         ; 005cebee
    TEST EAX,EAX                        ; 005cebf1
    JNZ 0x005cec03                      ; 005cebf3
        ;   XREF to: 005cec03 (CONDITIONAL_JUMP)  ; LAB_005cec03
    PUSH EBX                            ; 005cebf5
    CALL crt_unknown.c_FUN_005c90c0     ; 005cebf6
        ;   XREF to: 005c90c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c90c0()
    INC ESI                             ; 005cebfb
    ADD ESP,0x4                         ; 005cebfc
    MOV EBX,EAX                         ; 005cebff
    JMP 0x005cebe8                      ; 005cec01
        ;   XREF to: 005cebe8 (UNCONDITIONAL_JUMP)  ; LAB_005cebe8
    MOV EAX,ESI                         ; 005cec03
        ;   Label: LAB_005cec03
    POP ESI                             ; 005cec05
    POP EBX                             ; 005cec06
    RET                                 ; 005cec07

