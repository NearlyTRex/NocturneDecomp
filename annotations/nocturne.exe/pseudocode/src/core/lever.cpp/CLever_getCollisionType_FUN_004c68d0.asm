; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004c68d0(CLever *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c68d0
        ;   Label: core_lever.cpp_CLever_getCollisionType_FUN_004c68d0
    CMP dword ptr [EAX + 0x808],0x0     ; 004c68d4
    SETNZ AL                            ; 004c68db
    AND EAX,0xff                        ; 004c68de
    RET                                 ; 004c68e3

