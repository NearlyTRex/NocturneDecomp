; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_00509530(CNPC *this_ptr,int layer_flag)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; XREF[3]:
;   core_asgaya.cpp_CAsgaya_renderBackground_FUN_005a1730 at 005a1751
;   core_spirbear.cpp_CSpiritBear_renderBackground_FUN_0059b2b0 at 0059b2d1
;   core_spirindi.cpp_CSpiritIndian_renderBackground_FUN_0059a730 at 0059a751
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509530
        ;   Label: core_npc.cpp_CNPC_renderBackground_FUN_00509530
    MOV EDX,dword ptr [ESP + 0x8]       ; 00509534
    CMP dword ptr [EAX + 0x206ac],0x0   ; 00509538
    JZ 0x00509559                       ; 0050953f
        ;   XREF to: 00509559 (CONDITIONAL_JUMP)  ; LAB_00509559
    TEST EDX,EDX                        ; 00509541
    JZ 0x0050954f                       ; 00509543
        ;   XREF to: 0050954f (CONDITIONAL_JUMP)  ; LAB_0050954f
    MOV dword ptr [EAX + 0x24fc],0x1    ; 00509545
    PUSH EDX                            ; 0050954f
        ;   Label: LAB_0050954f
    PUSH EAX                            ; 00509550
    CALL core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300 ; 00509551
        ;   XREF to: 0042e300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300(CCharacter * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00509556
    RET                                 ; 00509559
        ;   Label: LAB_00509559

