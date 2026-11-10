; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_asgaya_cpp_CAsgaya_renderBackground_FUN_005a1730(CAsgaya *this_ptr,int layer_flag)
;
; Parameters:
; CAsgaya *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Called Functions:
;   core_npc.cpp_CNPC_renderBackground_FUN_00509530
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1730
        ;   Label: core_asgaya.cpp_CAsgaya_renderBackground_FUN_005a1730
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a1734
    CMP dword ptr [EAX + 0x33fa8],0x0   ; 005a1738
    JZ 0x005a1759                       ; 005a173f
        ;   XREF to: 005a1759 (CONDITIONAL_JUMP)  ; LAB_005a1759
    TEST EDX,EDX                        ; 005a1741
    JZ 0x005a174f                       ; 005a1743
        ;   XREF to: 005a174f (CONDITIONAL_JUMP)  ; LAB_005a174f
    MOV dword ptr [EAX + 0x24fc],0x1    ; 005a1745
    PUSH EDX                            ; 005a174f
        ;   Label: LAB_005a174f
    PUSH EAX                            ; 005a1750
    CALL core_npc.cpp_CNPC_renderBackground_FUN_00509530 ; 005a1751
        ;   XREF to: 00509530 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_renderBackground_FUN_00509530(CNPC * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 005a1756
    RET                                 ; 005a1759
        ;   Label: LAB_005a1759

