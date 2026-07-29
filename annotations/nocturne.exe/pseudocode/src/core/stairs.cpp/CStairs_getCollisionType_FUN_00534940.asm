; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_00534940(CStairs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00534940
        ;   Label: core_stairs.cpp_CStairs_getCollisionType_FUN_00534940
    CMP dword ptr [EAX],0x0             ; 00534944
    JZ 0x0053494c                       ; 00534947
        ;   XREF to: 0053494c (CONDITIONAL_JUMP)  ; LAB_0053494c
    XOR EAX,EAX                         ; 00534949
    RET                                 ; 0053494b
    MOV EAX,0x3                         ; 0053494c
        ;   Label: LAB_0053494c
    RET                                 ; 00534951

