; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004ff950(CLever *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ff950
        ;   Label: core_lever.cpp_CLever_getCollisionType_FUN_004ff950
    CMP dword ptr [EAX + 0x810],0x0     ; 004ff954
    SETNZ AL                            ; 004ff95b
    AND EAX,0xff                        ; 004ff95e
    RET                                 ; 004ff963

