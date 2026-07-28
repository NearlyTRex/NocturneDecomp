; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00428ef0(int param_1)
;
;
; Called Functions:
;   core_door.cpp_CDoor_onOpened_FUN_00455270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428ef0
        ;   Label: core_charactr.cpp_FUN_00428ef0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00428ef1
    MOV EDX,dword ptr [EBX + 0x25ac]    ; 00428ef5
    TEST EDX,EDX                        ; 00428efb
    JNZ 0x00428f01                      ; 00428efd
        ;   XREF to: 00428f01 (CONDITIONAL_JUMP)  ; LAB_00428f01
    POP EBX                             ; 00428eff
    RET                                 ; 00428f00
    PUSH EDX                            ; 00428f01
        ;   Label: LAB_00428f01
    CALL core_door.cpp_CDoor_onOpened_FUN_00455270 ; 00428f02
        ;   XREF to: 00455270 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_onOpened_FUN_00455270(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00428f07
    MOV dword ptr [EBX + 0x25ac],0x0    ; 00428f0a
    POP EBX                             ; 00428f14
    RET                                 ; 00428f15

