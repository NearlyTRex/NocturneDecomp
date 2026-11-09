; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_vessel_cpp_CCryptVessel_getCollisionType_FUN_005a98a0(CCryptVessel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a98a0
        ;   Label: core_vessel.cpp_CCryptVessel_getCollisionType_FUN_005a98a0
    MOV EDX,dword ptr [EAX + 0x70]      ; 005a98a4
    CMP EDX,0x1                         ; 005a98a7
    JNZ 0x005a98b5                      ; 005a98aa
        ;   XREF to: 005a98b5 (CONDITIONAL_JUMP)  ; LAB_005a98b5
    CMP dword ptr [EAX + 0x2d4],0x0     ; 005a98ac
    JZ 0x005a98b8                       ; 005a98b3
        ;   XREF to: 005a98b8 (CONDITIONAL_JUMP)  ; LAB_005a98b8
    XOR EAX,EAX                         ; 005a98b5
        ;   Label: LAB_005a98b5
    RET                                 ; 005a98b7
    MOV EAX,EDX                         ; 005a98b8
        ;   Label: LAB_005a98b8
    RET                                 ; 005a98ba

