; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * unkafter_morph_cpp_FUN_005c2d60(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bce2c at 005bcfa0
;
; Called Functions:
;   crt_unknown.c_FUN_005b8580
;   unkafter_morph.cpp_FUN_005c4cc0
;   unkafter_morph.cpp_FUN_005c4cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2d60
        ;   Label: unkafter_morph.cpp_FUN_005c2d60
    PUSH ESI                            ; 005c2d61
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c2d62
    PUSH EDX                            ; 005c2d66
    CALL unkafter_morph.cpp_FUN_005c4cc0 ; 005c2d67
        ;   XREF to: 005c4cc0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4cc0()
    INC EAX                             ; 005c2d6c
    ADD ESP,0x4                         ; 005c2d6d
    LEA ESI,[EAX*0x2 + 0x0]             ; 005c2d70
    PUSH ESI                            ; 005c2d77
    CALL crt_unknown.c_FUN_005b8580     ; 005c2d78
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005c2d7d
    MOV EBX,EAX                         ; 005c2d80
    TEST EAX,EAX                        ; 005c2d82
    JZ 0x005c2d95                       ; 005c2d84
        ;   XREF to: 005c2d95 (CONDITIONAL_JUMP)  ; LAB_005c2d95
    PUSH ESI                            ; 005c2d86
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c2d87
    PUSH ECX                            ; 005c2d8b
    PUSH EAX                            ; 005c2d8c
    CALL unkafter_morph.cpp_FUN_005c4cf0 ; 005c2d8d
        ;   XREF to: 005c4cf0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4cf0()
    ADD ESP,0xc                         ; 005c2d92
    MOV EAX,EBX                         ; 005c2d95
        ;   Label: LAB_005c2d95
    POP ESI                             ; 005c2d97
    POP EBX                             ; 005c2d98
    RET                                 ; 005c2d99

