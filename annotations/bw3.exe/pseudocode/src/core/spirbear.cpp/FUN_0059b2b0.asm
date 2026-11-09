; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spirbear_cpp_FUN_0059b2b0(CNPC *param_1,int param_2)
;
;
; Called Functions:
;   core_npc.cpp_FUN_00509530
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059b2b0
        ;   Label: core_spirbear.cpp_FUN_0059b2b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059b2b4
    CMP dword ptr [EAX + 0x34164],0x0   ; 0059b2b8
    JZ 0x0059b2d9                       ; 0059b2bf
        ;   XREF to: 0059b2d9 (CONDITIONAL_JUMP)  ; LAB_0059b2d9
    TEST EDX,EDX                        ; 0059b2c1
    JZ 0x0059b2cf                       ; 0059b2c3
        ;   XREF to: 0059b2cf (CONDITIONAL_JUMP)  ; LAB_0059b2cf
    MOV dword ptr [EAX + 0x24fc],0x1    ; 0059b2c5
    PUSH EDX                            ; 0059b2cf
        ;   Label: LAB_0059b2cf
    PUSH EAX                            ; 0059b2d0
    CALL core_npc.cpp_FUN_00509530      ; 0059b2d1
        ;   XREF to: 00509530 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_FUN_00509530(CNPC * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0059b2d6
    RET                                 ; 0059b2d9
        ;   Label: LAB_0059b2d9

