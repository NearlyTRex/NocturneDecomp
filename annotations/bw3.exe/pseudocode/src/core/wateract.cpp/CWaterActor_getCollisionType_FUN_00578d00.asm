; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_wateract_cpp_CWaterActor_getCollisionType_FUN_00578d00(CWaterActor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00578d00
        ;   Label: core_wateract.cpp_CWaterActor_getCollisionType_FUN_00578d00
    MOV EDX,dword ptr [EAX]             ; 00578d04
    CMP EDX,0x3                         ; 00578d06
    JNZ 0x00578d0e                      ; 00578d09
        ;   XREF to: 00578d0e (CONDITIONAL_JUMP)  ; LAB_00578d0e
    MOV EAX,EDX                         ; 00578d0b
    RET                                 ; 00578d0d
    XOR EAX,EAX                         ; 00578d0e
        ;   Label: LAB_00578d0e
    RET                                 ; 00578d10

