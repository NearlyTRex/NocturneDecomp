; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_glass_cpp_CGlass_getCollisionType_FUN_004accc0(CGlass *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004accc0
        ;   Label: core_glass.cpp_CGlass_getCollisionType_FUN_004accc0
    CMP dword ptr [EAX + 0x178],0x0     ; 004accc4
    JZ 0x004accd6                       ; 004acccb
        ;   XREF to: 004accd6 (CONDITIONAL_JUMP)  ; LAB_004accd6
    CMP dword ptr [EAX + 0x1e0],0x0     ; 004acccd
    JZ 0x004accdc                       ; 004accd4
        ;   XREF to: 004accdc (CONDITIONAL_JUMP)  ; LAB_004accdc
    MOV EAX,0x1                         ; 004accd6
        ;   Label: LAB_004accd6
    RET                                 ; 004accdb
    MOV dword ptr [EAX + 0x100],0x1     ; 004accdc
        ;   Label: LAB_004accdc
    XOR EAX,EAX                         ; 004acce6
    RET                                 ; 004acce8

