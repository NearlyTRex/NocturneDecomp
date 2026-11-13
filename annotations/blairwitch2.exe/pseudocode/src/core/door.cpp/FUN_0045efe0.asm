; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_FUN_0045efe0(CDoor *param_1,EDoorState param_2)
;
;
; XREF[1]:
;   core_event.cpp_FUN_00489670 at 0048cbbd
;
; Called Functions:
;   core_door.cpp_CDoor_reposition_FUN_0045f030
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045efe0
        ;   Label: core_door.cpp_FUN_0045efe0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045efe4
    MOV dword ptr [EAX + 0x43c],EDX     ; 0045efe8
    TEST EDX,EDX                        ; 0045efee
    JZ 0x0045f011                       ; 0045eff0
        ;   XREF to: 0045f011 (CONDITIONAL_JUMP)  ; LAB_0045f011
    CMP dword ptr [EAX + 0x43c],0x2     ; 0045eff2
        ;   Label: LAB_0045eff2
    JNZ 0x0045f007                      ; 0045eff9
        ;   XREF to: 0045f007 (CONDITIONAL_JUMP)  ; LAB_0045f007
    MOV EDX,dword ptr [EAX + 0xb0c]     ; 0045effb
    MOV dword ptr [EAX + 0xb08],EDX     ; 0045f001
    PUSH EAX                            ; 0045f007
        ;   Label: LAB_0045f007
    CALL core_door.cpp_CDoor_reposition_FUN_0045f030 ; 0045f008
        ;   XREF to: 0045f030 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_0045f030(CDoor * this_ptr)
    ADD ESP,0x4                         ; 0045f00d
    RET                                 ; 0045f010
    MOV dword ptr [EAX + 0xb08],EDX     ; 0045f011
        ;   Label: LAB_0045f011
    JMP 0x0045eff2                      ; 0045f017
        ;   XREF to: 0045eff2 (UNCONDITIONAL_JUMP)  ; LAB_0045eff2

