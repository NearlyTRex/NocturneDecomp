; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_vessel_cpp_CCryptVessel_getCollisionType_FUN_00550650(CCryptVessel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00550650
        ;   Label: core_vessel.cpp_CCryptVessel_getCollisionType_FUN_00550650
    MOV EDX,dword ptr [EAX + 0x70]      ; 00550654
    CMP EDX,0x1                         ; 00550657
    JNZ 0x00550665                      ; 0055065a
        ;   XREF to: 00550665 (CONDITIONAL_JUMP)  ; LAB_00550665
    CMP dword ptr [EAX + 0x2cc],0x0     ; 0055065c
    JZ 0x00550668                       ; 00550663
        ;   XREF to: 00550668 (CONDITIONAL_JUMP)  ; LAB_00550668
    XOR EAX,EAX                         ; 00550665
        ;   Label: LAB_00550665
    RET                                 ; 00550667
    MOV EAX,EDX                         ; 00550668
        ;   Label: LAB_00550668
    RET                                 ; 0055066a

