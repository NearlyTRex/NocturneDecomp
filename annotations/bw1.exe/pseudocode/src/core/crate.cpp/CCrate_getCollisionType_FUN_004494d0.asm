; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_crate_cpp_CCrate_getCollisionType_FUN_004494d0(CCrate *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004494d0
        ;   Label: core_crate.cpp_CCrate_getCollisionType_FUN_004494d0
    MOV EDX,dword ptr [EAX + 0x70]      ; 004494d4
    CMP EDX,0x1                         ; 004494d7
    JNZ 0x004494e5                      ; 004494da
        ;   XREF to: 004494e5 (CONDITIONAL_JUMP)  ; LAB_004494e5
    CMP dword ptr [EAX + 0x2d4],0x0     ; 004494dc
    JZ 0x004494e8                       ; 004494e3
        ;   XREF to: 004494e8 (CONDITIONAL_JUMP)  ; LAB_004494e8
    XOR EAX,EAX                         ; 004494e5
        ;   Label: LAB_004494e5
    RET                                 ; 004494e7
    MOV EAX,EDX                         ; 004494e8
        ;   Label: LAB_004494e8
    RET                                 ; 004494ea

