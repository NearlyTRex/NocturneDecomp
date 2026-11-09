; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_batman_cpp_FUN_00414600(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00414600
        ;   Label: core_batman.cpp_FUN_00414600
    CMP dword ptr [EAX + 0x10b94],0x0   ; 00414604
    JZ 0x00414610                       ; 0041460b
        ;   XREF to: 00414610 (CONDITIONAL_JUMP)  ; LAB_00414610
    XOR EAX,EAX                         ; 0041460d
    RET                                 ; 0041460f
    MOV ECX,dword ptr [ESP + 0x8]       ; 00414610
        ;   Label: LAB_00414610
    PUSH ECX                            ; 00414614
    PUSH EAX                            ; 00414615
    CALL core_charactr.cpp_FUN_00427680 ; 00414616
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427680()
    ADD ESP,0x8                         ; 0041461b
    RET                                 ; 0041461e

