; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_crate_cpp_CCrate_getCollisionType_FUN_0043a220(CCrate *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043a220
        ;   Label: core_crate.cpp_CCrate_getCollisionType_FUN_0043a220
    MOV EDX,dword ptr [EAX + 0x70]      ; 0043a224
    CMP EDX,0x1                         ; 0043a227
    JNZ 0x0043a235                      ; 0043a22a
        ;   XREF to: 0043a235 (CONDITIONAL_JUMP)  ; LAB_0043a235
    CMP dword ptr [EAX + 0x430],0x0     ; 0043a22c
    JZ 0x0043a238                       ; 0043a233
        ;   XREF to: 0043a238 (CONDITIONAL_JUMP)  ; LAB_0043a238
    XOR EAX,EAX                         ; 0043a235
        ;   Label: LAB_0043a235
    RET                                 ; 0043a237
    MOV EAX,EDX                         ; 0043a238
        ;   Label: LAB_0043a238
    RET                                 ; 0043a23a

