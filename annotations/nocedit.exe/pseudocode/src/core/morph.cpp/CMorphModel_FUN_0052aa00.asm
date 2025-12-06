; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_morph.cpp_CMorphModel_FUN_0052aa00(CMorphModel * this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_morph.cpp_FUN_0052b5c0 at 0052b5e7
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animate_FUN_0052a920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052aa00
        ;   Label: core_morph.cpp_CMorphModel_FUN_0052aa00
    PUSH ESI                            ; 0052aa01
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052aa02
    MOV ECX,dword ptr [ESP + 0x10]      ; 0052aa06
    MOV EAX,ECX                         ; 0052aa0a
    SHL EAX,0x4                         ; 0052aa0c
    MOV EBX,dword ptr [EDX + EAX*0x1 + 0x4] ; 0052aa0f
    PUSH EBX                            ; 0052aa13
    PUSH 0x0                            ; 0052aa14
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052aa16
    PUSH ESI                            ; 0052aa1a
    PUSH ECX                            ; 0052aa1b
    PUSH EDX                            ; 0052aa1c
    CALL core_morph.cpp_CMorphModel_animate_FUN_0052a920 ; 0052aa1d | void core_morph.cpp_CMorphModel_animate_FUN_0052a920(CMorphModel * this_ptr)
        ;   XREF to: 0052a920 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0052aa22
    POP ESI                             ; 0052aa25
    POP EBX                             ; 0052aa26
    RET                                 ; 0052aa27

