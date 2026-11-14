; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004d2720(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; SCollisionReturnInfo * Stack[0x8]:4   collision_info
; float            Stack[0xc]:4   tolerance
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.god_mode_enabled
;
; Called Functions:
;   core_actor.cpp_CDemonActor_testCylinderCollision_FUN_00408d10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d2720
        ;   Label: core_hero.cpp_CHero_testCylinderCollision_FUN_004d2720
    MOV EAX,[0x005fe9dc]                ; 004d2724 | g_CGamePtr
    CMP dword ptr [EAX + 0x1f4],0x0     ; 004d2729 | g_CGameInstance.god_mode_enabled
    JNZ 0x004d273e                      ; 004d2730
        ;   XREF to: 004d273e (CONDITIONAL_JUMP)  ; LAB_004d273e
    TEST dword ptr [EDX + 0xcdcc],0x7fffffff ; 004d2732
    JZ 0x004d2741                       ; 004d273c
        ;   XREF to: 004d2741 (CONDITIONAL_JUMP)  ; LAB_004d2741
    XOR EAX,EAX                         ; 004d273e
        ;   Label: LAB_004d273e
    RET                                 ; 004d2740
    PUSH ESI                            ; 004d2741
        ;   Label: LAB_004d2741
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d2742
    PUSH dword ptr [ESP + 0x10]         ; 004d2746
    PUSH ESI                            ; 004d274a
    PUSH EDX                            ; 004d274b
    CALL core_actor.cpp_CDemonActor_testCylinderCollision_FUN_00408d10 ; 004d274c
        ;   XREF to: 00408d10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_testCylinderCollision_FUN_00408d10(CDemonActor * this_ptr, SCollisionReturnInfo * collision_info, float tolerance)
    ADD ESP,0xc                         ; 004d2751
    POP ESI                             ; 004d2754
    RET                                 ; 004d2755

