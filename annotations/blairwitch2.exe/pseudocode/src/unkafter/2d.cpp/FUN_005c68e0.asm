; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005c68e0(undefined4 param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005c6210 at 005c62ad
;
; Called Functions:
;   crt_unknown.c_FUN_005c0e00
;   unkafter_morph.cpp_FUN_005c4260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c68e0
        ;   Label: unkafter_2d.cpp_FUN_005c68e0
    PUSH ESI                            ; 005c68e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c68e2
    XOR ESI,ESI                         ; 005c68e6
    PUSH EBX                            ; 005c68e8
        ;   Label: LAB_005c68e8
    CALL unkafter_morph.cpp_FUN_005c4260 ; 005c68e9
        ;   XREF to: 005c4260 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4260()
    ADD ESP,0x4                         ; 005c68ee
    TEST EAX,EAX                        ; 005c68f1
    JNZ 0x005c6903                      ; 005c68f3
        ;   XREF to: 005c6903 (CONDITIONAL_JUMP)  ; LAB_005c6903
    PUSH EBX                            ; 005c68f5
    CALL crt_unknown.c_FUN_005c0e00     ; 005c68f6
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    INC ESI                             ; 005c68fb
    ADD ESP,0x4                         ; 005c68fc
    MOV EBX,EAX                         ; 005c68ff
    JMP 0x005c68e8                      ; 005c6901
        ;   XREF to: 005c68e8 (UNCONDITIONAL_JUMP)  ; LAB_005c68e8
    MOV EAX,ESI                         ; 005c6903
        ;   Label: LAB_005c6903
    POP ESI                             ; 005c6905
    POP EBX                             ; 005c6906
    RET                                 ; 005c6907

