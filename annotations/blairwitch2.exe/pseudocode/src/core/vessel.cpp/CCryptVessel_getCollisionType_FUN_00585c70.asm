; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_vessel_cpp_CCryptVessel_getCollisionType_FUN_00585c70(CCryptVessel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00585c70
        ;   Label: core_vessel.cpp_CCryptVessel_getCollisionType_FUN_00585c70
    MOV EDX,dword ptr [EAX + 0x70]      ; 00585c74
    CMP EDX,0x1                         ; 00585c77
    JNZ 0x00585c85                      ; 00585c7a
        ;   XREF to: 00585c85 (CONDITIONAL_JUMP)  ; LAB_00585c85
    CMP dword ptr [EAX + 0x430],0x0     ; 00585c7c
    JZ 0x00585c88                       ; 00585c83
        ;   XREF to: 00585c88 (CONDITIONAL_JUMP)  ; LAB_00585c88
    XOR EAX,EAX                         ; 00585c85
        ;   Label: LAB_00585c85
    RET                                 ; 00585c87
    MOV EAX,EDX                         ; 00585c88
        ;   Label: LAB_00585c88
    RET                                 ; 00585c8a

