; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_00568550(CStairs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00568550
        ;   Label: core_stairs.cpp_CStairs_getCollisionType_FUN_00568550
    CMP dword ptr [EAX],0x0             ; 00568554
    JZ 0x0056855c                       ; 00568557
        ;   XREF to: 0056855c (CONDITIONAL_JUMP)  ; LAB_0056855c
    XOR EAX,EAX                         ; 00568559
    RET                                 ; 0056855b
    MOV EAX,0x3                         ; 0056855c
        ;   Label: LAB_0056855c
    RET                                 ; 00568561

