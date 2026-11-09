; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_asgaya_cpp_FUN_005ad6d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; Called Functions:
;   unkafter_asgaya.cpp_FUN_005ad69a
;   unkafter_asgaya.cpp_FUN_005afa50
;   unkafter_asgaya.cpp_FUN_005afa5c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ad6d8
        ;   Label: unkafter_asgaya.cpp_FUN_005ad6d8
    MOV EBP,ESP                         ; 005ad6d9
    PUSH EBX                            ; 005ad6db
    PUSH ESI                            ; 005ad6dc
    PUSH EDI                            ; 005ad6dd
    CALL unkafter_asgaya.cpp_FUN_005afa50 ; 005ad6de
        ;   XREF to: 005afa50 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afa50()
    PUSH EAX                            ; 005ad6e3
    PUSH 0x47                           ; 005ad6e4
    MOV EDX,dword ptr [EBP + 0x18]      ; 005ad6e6
    PUSH EDX                            ; 005ad6e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ad6ea
    PUSH EBX                            ; 005ad6ed
    MOV ECX,dword ptr [EBP + 0x10]      ; 005ad6ee
    PUSH ECX                            ; 005ad6f1
    MOV ESI,dword ptr [EBP + 0xc]       ; 005ad6f2
    PUSH ESI                            ; 005ad6f5
    MOV EDI,dword ptr [EBP + 0x8]       ; 005ad6f6
    PUSH EDI                            ; 005ad6f9
    CALL unkafter_asgaya.cpp_FUN_005afa5c ; 005ad6fa
        ;   XREF to: 005afa5c (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afa5c()
    ADD ESP,0x1c                        ; 005ad6ff
    MOV EDX,dword ptr [EBP + 0x10]      ; 005ad702
    PUSH EDX                            ; 005ad705
        ;   Label: LAB_005ad705
    PUSH EAX                            ; 005ad706
    CALL unkafter_asgaya.cpp_FUN_005ad69a ; 005ad707
        ;   XREF to: 005ad69a (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ad69a()
    ADD ESP,0x8                         ; 005ad70c
    POP EDI                             ; 005ad70f
    POP ESI                             ; 005ad710
    POP EBX                             ; 005ad711
    POP EBP                             ; 005ad712
    RET                                 ; 005ad713

