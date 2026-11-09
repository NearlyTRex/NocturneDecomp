; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004e0a10(CLever *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e0a10
        ;   Label: core_lever.cpp_CLever_getCollisionType_FUN_004e0a10
    CMP dword ptr [EAX + 0x810],0x0     ; 004e0a14
    SETNZ AL                            ; 004e0a1b
    AND EAX,0xff                        ; 004e0a1e
    RET                                 ; 004e0a23

