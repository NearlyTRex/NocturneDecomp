; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_glass_cpp_CGlass_getCollisionType_FUN_004ea190(CGlass *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ea190
        ;   Label: core_glass.cpp_CGlass_getCollisionType_FUN_004ea190
    CMP dword ptr [EAX + 0x180],0x0     ; 004ea194
    JZ 0x004ea1a6                       ; 004ea19b
        ;   XREF to: 004ea1a6 (CONDITIONAL_JUMP)  ; LAB_004ea1a6
    CMP dword ptr [EAX + 0x1e8],0x0     ; 004ea19d
    JZ 0x004ea1ac                       ; 004ea1a4
        ;   XREF to: 004ea1ac (CONDITIONAL_JUMP)  ; LAB_004ea1ac
    MOV EAX,0x1                         ; 004ea1a6
        ;   Label: LAB_004ea1a6
    RET                                 ; 004ea1ab
    MOV dword ptr [EAX + 0x100],0x1     ; 004ea1ac
        ;   Label: LAB_004ea1ac
    XOR EAX,EAX                         ; 004ea1b6
    RET                                 ; 004ea1b8

