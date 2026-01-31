; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_lever_cpp_CLever_hasCollision_FUN_00505060(CLever *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00505060
        ;   Label: core_lever.cpp_CLever_hasCollision_FUN_00505060
    CMP dword ptr [EAX + 0x810],0x0     ; 00505064
    SETNZ AL                            ; 0050506b
    AND EAX,0xff                        ; 0050506e
    RET                                 ; 00505073

