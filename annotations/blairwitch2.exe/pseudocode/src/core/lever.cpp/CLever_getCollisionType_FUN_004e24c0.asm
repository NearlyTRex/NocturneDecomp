; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_lever_cpp_CLever_getCollisionType_FUN_004e24c0(CLever *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e24c0
        ;   Label: core_lever.cpp_CLever_getCollisionType_FUN_004e24c0
    CMP dword ptr [EAX + 0x96c],0x0     ; 004e24c4
    SETNZ AL                            ; 004e24cb
    AND EAX,0xff                        ; 004e24ce
    RET                                 ; 004e24d3

