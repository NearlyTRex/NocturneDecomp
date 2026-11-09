; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_00562090(CStairs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00562090
        ;   Label: core_stairs.cpp_CStairs_getCollisionType_FUN_00562090
    CMP dword ptr [EAX],0x0             ; 00562094
    JZ 0x0056209c                       ; 00562097
        ;   XREF to: 0056209c (CONDITIONAL_JUMP)  ; LAB_0056209c
    XOR EAX,EAX                         ; 00562099
    RET                                 ; 0056209b
    MOV EAX,0x3                         ; 0056209c
        ;   Label: LAB_0056209c
    RET                                 ; 005620a1

