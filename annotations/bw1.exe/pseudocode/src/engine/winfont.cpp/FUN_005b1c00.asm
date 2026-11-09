; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_winfont_cpp_FUN_005b1c00(CWinFont *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   engine_winfont.cpp_FUN_005b1c50
;   engine_winfont.cpp_FUN_005b1e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1c00
        ;   Label: engine_winfont.cpp_FUN_005b1c00
    PUSH EBP                            ; 005b1c01
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b1c02
    PUSH -0x1                           ; 005b1c06
    PUSH -0x1                           ; 005b1c08
    PUSH EBX                            ; 005b1c0a
    CALL engine_winfont.cpp_FUN_005b1e90 ; 005b1c0b
        ;   XREF to: 005b1e90 (UNCONDITIONAL_CALL)  ; int engine_winfont.cpp_FUN_005b1e90(CWinFont * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 005b1c10
    TEST EAX,EAX                        ; 005b1c13
    JNZ 0x005b1c1a                      ; 005b1c15
        ;   XREF to: 005b1c1a (CONDITIONAL_JUMP)  ; LAB_005b1c1a
    POP EBP                             ; 005b1c17
    POP EBX                             ; 005b1c18
    RET                                 ; 005b1c19
    PUSH EDI                            ; 005b1c1a
        ;   Label: LAB_005b1c1a
    PUSH ESI                            ; 005b1c1b
    MOV EDX,dword ptr [ESP + 0x28]      ; 005b1c1c
    PUSH EDX                            ; 005b1c20
    MOV ECX,dword ptr [ESP + 0x28]      ; 005b1c21
    PUSH ECX                            ; 005b1c25
    MOV ESI,dword ptr [ESP + 0x28]      ; 005b1c26
    PUSH ESI                            ; 005b1c2a
    MOV EDI,dword ptr [ESP + 0x28]      ; 005b1c2b
    PUSH EDI                            ; 005b1c2f
    MOV EBP,dword ptr [ESP + 0x28]      ; 005b1c30
    PUSH EBP                            ; 005b1c34
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 005b1c35
    PUSH EAX                            ; 005b1c3b
    PUSH EBX                            ; 005b1c3c
    CALL engine_winfont.cpp_FUN_005b1c50 ; 005b1c3d
        ;   XREF to: 005b1c50 (UNCONDITIONAL_CALL)  ; undefined engine_winfont.cpp_FUN_005b1c50()
    ADD ESP,0x1c                        ; 005b1c42
    XOR EAX,EAX                         ; 005b1c45
    POP ESI                             ; 005b1c47
    POP EDI                             ; 005b1c48
    POP EBP                             ; 005b1c49
    POP EBX                             ; 005b1c4a
    RET                                 ; 005b1c4b

