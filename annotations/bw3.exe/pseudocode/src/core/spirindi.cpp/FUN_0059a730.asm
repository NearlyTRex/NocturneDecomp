; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spirindi_cpp_FUN_0059a730(CNPC *param_1,int param_2)
;
;
; Called Functions:
;   core_npc.cpp_FUN_00509530
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059a730
        ;   Label: core_spirindi.cpp_FUN_0059a730
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059a734
    CMP dword ptr [EAX + 0x34164],0x0   ; 0059a738
    JZ 0x0059a759                       ; 0059a73f
        ;   XREF to: 0059a759 (CONDITIONAL_JUMP)  ; LAB_0059a759
    TEST EDX,EDX                        ; 0059a741
    JZ 0x0059a74f                       ; 0059a743
        ;   XREF to: 0059a74f (CONDITIONAL_JUMP)  ; LAB_0059a74f
    MOV dword ptr [EAX + 0x24fc],0x1    ; 0059a745
    PUSH EDX                            ; 0059a74f
        ;   Label: LAB_0059a74f
    PUSH EAX                            ; 0059a750
    CALL core_npc.cpp_FUN_00509530      ; 0059a751
        ;   XREF to: 00509530 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_FUN_00509530(CNPC * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0059a756
    RET                                 ; 0059a759
        ;   Label: LAB_0059a759

