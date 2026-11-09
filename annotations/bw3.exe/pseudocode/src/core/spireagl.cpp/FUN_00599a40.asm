; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spireagl_cpp_FUN_00599a40(int param_1,int param_2)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_0042e300
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00599a40
        ;   Label: core_spireagl.cpp_FUN_00599a40
    MOV EDX,dword ptr [ESP + 0x8]       ; 00599a44
    CMP dword ptr [EAX + 0x20868],0x0   ; 00599a48
    JZ 0x00599a69                       ; 00599a4f
        ;   XREF to: 00599a69 (CONDITIONAL_JUMP)  ; LAB_00599a69
    TEST EDX,EDX                        ; 00599a51
    JZ 0x00599a5f                       ; 00599a53
        ;   XREF to: 00599a5f (CONDITIONAL_JUMP)  ; LAB_00599a5f
    MOV dword ptr [EAX + 0x24fc],0x1    ; 00599a55
    PUSH EDX                            ; 00599a5f
        ;   Label: LAB_00599a5f
    PUSH EAX                            ; 00599a60
    CALL core_charactr.cpp_FUN_0042e300 ; 00599a61
        ;   XREF to: 0042e300 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042e300()
    ADD ESP,0x8                         ; 00599a66
    RET                                 ; 00599a69
        ;   Label: LAB_00599a69

