; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_morph.cpp_FUN_0052b5c0()
;
;
; Called Functions:
;   core_morph.cpp_CMorphModel_FUN_0052aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b5c0
        ;   Label: core_morph.cpp_FUN_0052b5c0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052b5c1
    PUSH EDX                            ; 0052b5c5
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052b5c6
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b5ca
    SUB EAX,EDX                         ; 0052b5d1
    SHL EAX,0x6                         ; 0052b5d3
    MOV ECX,dword ptr [ESP + 0x18]      ; 0052b5d6
    ADD EAX,EDX                         ; 0052b5da
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052b5dc
    SHL EAX,0x3                         ; 0052b5e0
    PUSH ECX                            ; 0052b5e3
    ADD EAX,EBX                         ; 0052b5e4
    PUSH EAX                            ; 0052b5e6
    CALL core_morph.cpp_CMorphModel_FUN_0052aa00 ; 0052b5e7 | void core_morph.cpp_CMorphModel_FUN_0052aa00(CMorphModel * this_ptr)
        ;   XREF to: 0052aa00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052b5ec
    POP EBX                             ; 0052b5ef
    RET                                 ; 0052b5f0

