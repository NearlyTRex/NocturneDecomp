; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_FUN_00463d30(CDoor *param_1,EDoorState param_2)
;
;
; XREF[1]:
;   core_event.cpp_FUN_0048c2e0 at 0048fd7a
;
; Called Functions:
;   core_door.cpp_CDoor_reposition_FUN_00463d80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00463d30
        ;   Label: core_door.cpp_FUN_00463d30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00463d34
    MOV dword ptr [EAX + 0x2e0],EDX     ; 00463d38
    TEST EDX,EDX                        ; 00463d3e
    JZ 0x00463d61                       ; 00463d40
        ;   XREF to: 00463d61 (CONDITIONAL_JUMP)  ; LAB_00463d61
    CMP dword ptr [EAX + 0x2e0],0x2     ; 00463d42
        ;   Label: LAB_00463d42
    JNZ 0x00463d57                      ; 00463d49
        ;   XREF to: 00463d57 (CONDITIONAL_JUMP)  ; LAB_00463d57
    MOV EDX,dword ptr [EAX + 0x9b0]     ; 00463d4b
    MOV dword ptr [EAX + 0x9ac],EDX     ; 00463d51
    PUSH EAX                            ; 00463d57
        ;   Label: LAB_00463d57
    CALL core_door.cpp_CDoor_reposition_FUN_00463d80 ; 00463d58
        ;   XREF to: 00463d80 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_00463d80(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00463d5d
    RET                                 ; 00463d60
    MOV dword ptr [EAX + 0x9ac],EDX     ; 00463d61
        ;   Label: LAB_00463d61
    JMP 0x00463d42                      ; 00463d67
        ;   XREF to: 00463d42 (UNCONDITIONAL_JUMP)  ; LAB_00463d42

