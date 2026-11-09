; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dracbrid_cpp_FUN_00464aa0(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00464aa0
        ;   Label: core_dracbrid.cpp_FUN_00464aa0
    CMP dword ptr [EAX + 0x10b84],0x0   ; 00464aa4
    JZ 0x00464ab0                       ; 00464aab
        ;   XREF to: 00464ab0 (CONDITIONAL_JUMP)  ; LAB_00464ab0
    XOR EAX,EAX                         ; 00464aad
        ;   Label: caseD_8
    RET                                 ; 00464aaf
    MOV ECX,dword ptr [ESP + 0x8]       ; 00464ab0
        ;   Label: LAB_00464ab0
    PUSH ECX                            ; 00464ab4
    PUSH EAX                            ; 00464ab5
    CALL core_charactr.cpp_FUN_00427680 ; 00464ab6
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427680()
    ADD ESP,0x8                         ; 00464abb
    RET                                 ; 00464abe

