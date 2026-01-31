; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004f2580 (CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; SCollisionReturnInfo * Stack[0x8]:4   collision_info
; float            Stack[0xc]:4   tolerance
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 DAT_02d81c6c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2580
        ;   Label: core_hero.cpp_CHero_testCylinderCollision_FUN_004f2580
    MOV EAX,[0x0067b654]                ; 004f2584 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004f2589 | DAT_02d81c6c
    JNZ 0x004f259e                      ; 004f2590
        ;   XREF to: 004f259e (CONDITIONAL_JUMP)  ; LAB_004f259e
    TEST dword ptr [EDX + 0xbe24],0x7fffffff ; 004f2592
    JZ 0x004f25a1                       ; 004f259c
        ;   XREF to: 004f25a1 (CONDITIONAL_JUMP)  ; LAB_004f25a1
    XOR EAX,EAX                         ; 004f259e
        ;   Label: LAB_004f259e
    RET                                 ; 004f25a0
    PUSH ESI                            ; 004f25a1
        ;   Label: LAB_004f25a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f25a2
    PUSH dword ptr [ESP + 0x10]         ; 004f25a6
    PUSH ESI                            ; 004f25aa
    PUSH EDX                            ; 004f25ab
    CALL core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0 ; 004f25ac
        ;   XREF to: 004090c0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0(CDemonActor * this_ptr, SCollisionReturnInfo * collision_info, float tolerance)
    ADD ESP,0xc                         ; 004f25b1
    POP ESI                             ; 004f25b4
    RET                                 ; 004f25b5

