; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_health_cpp_CHealthItem_getCollisionType_FUN_004d2080(CHealthItem *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004d2080
        ;   Label: core_health.cpp_CHealthItem_getCollisionType_FUN_004d2080
    CMP dword ptr [EAX],0x4             ; 004d2084
    SETZ AL                             ; 004d2087
    AND EAX,0xff                        ; 004d208a
    RET                                 ; 004d208f

