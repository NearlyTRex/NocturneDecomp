; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_00584ae0(CStairs *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00584ae0
        ;   Label: core_stairs.cpp_CStairs_getCollisionType_FUN_00584ae0
    CMP dword ptr [EAX],0x0             ; 00584ae4
    JZ 0x00584aec                       ; 00584ae7
        ;   XREF to: 00584aec (CONDITIONAL_JUMP)  ; LAB_00584aec
    XOR EAX,EAX                         ; 00584ae9
    RET                                 ; 00584aeb
    MOV EAX,0x3                         ; 00584aec
        ;   Label: LAB_00584aec
    RET                                 ; 00584af1

