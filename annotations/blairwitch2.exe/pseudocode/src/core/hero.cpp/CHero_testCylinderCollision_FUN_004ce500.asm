; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_testCylinderCollision_FUN_004ce500(CHero *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; SCollisionReturnInfo * Stack[0x8]:4   collision_info
; float            Stack[0xc]:4   tolerance
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.field444_0x1ec
;
; Called Functions:
;   core_actor.cpp_CDemonActor_testCylinderCollision_FUN_00408f00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ce500
        ;   Label: core_hero.cpp_CHero_testCylinderCollision_FUN_004ce500
    MOV EAX,[0x00616494]                ; 004ce504 | g_CGamePtr
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004ce509 | g_CGameInstance.field444_0x1ec
    JNZ 0x004ce51e                      ; 004ce510
        ;   XREF to: 004ce51e (CONDITIONAL_JUMP)  ; LAB_004ce51e
    TEST dword ptr [EDX + 0x10a60],0x7fffffff ; 004ce512
    JZ 0x004ce521                       ; 004ce51c
        ;   XREF to: 004ce521 (CONDITIONAL_JUMP)  ; LAB_004ce521
    XOR EAX,EAX                         ; 004ce51e
        ;   Label: LAB_004ce51e
    RET                                 ; 004ce520
    PUSH ESI                            ; 004ce521
        ;   Label: LAB_004ce521
    MOV ESI,dword ptr [ESP + 0xc]       ; 004ce522
    PUSH dword ptr [ESP + 0x10]         ; 004ce526
    PUSH ESI                            ; 004ce52a
    PUSH EDX                            ; 004ce52b
    CALL core_actor.cpp_CDemonActor_testCylinderCollision_FUN_00408f00 ; 004ce52c
        ;   XREF to: 00408f00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_testCylinderCollision_FUN_00408f00(CDemonActor * this_ptr, SCollisionReturnInfo * collision_info, float tolerance)
    ADD ESP,0xc                         ; 004ce531
    POP ESI                             ; 004ce534
    RET                                 ; 004ce535

