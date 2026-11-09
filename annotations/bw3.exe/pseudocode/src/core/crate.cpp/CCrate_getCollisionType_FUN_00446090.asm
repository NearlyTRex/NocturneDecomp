; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_crate_cpp_CCrate_getCollisionType_FUN_00446090(CCrate *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00446090
        ;   Label: core_crate.cpp_CCrate_getCollisionType_FUN_00446090
    MOV EDX,dword ptr [EAX + 0x70]      ; 00446094
    CMP EDX,0x1                         ; 00446097
    JNZ 0x004460a5                      ; 0044609a
        ;   XREF to: 004460a5 (CONDITIONAL_JUMP)  ; LAB_004460a5
    CMP dword ptr [EAX + 0x2d4],0x0     ; 0044609c
    JZ 0x004460a8                       ; 004460a3
        ;   XREF to: 004460a8 (CONDITIONAL_JUMP)  ; LAB_004460a8
    XOR EAX,EAX                         ; 004460a5
        ;   Label: LAB_004460a5
    RET                                 ; 004460a7
    MOV EAX,EDX                         ; 004460a8
        ;   Label: LAB_004460a8
    RET                                 ; 004460aa

