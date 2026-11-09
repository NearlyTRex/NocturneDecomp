; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_wateract_cpp_CWaterActor_getCollisionType_FUN_005878d0(CWaterActor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005878d0
        ;   Label: core_wateract.cpp_CWaterActor_getCollisionType_FUN_005878d0
    MOV EDX,dword ptr [EAX]             ; 005878d4
    CMP EDX,0x3                         ; 005878d6
    JNZ 0x005878de                      ; 005878d9
        ;   XREF to: 005878de (CONDITIONAL_JUMP)  ; LAB_005878de
    MOV EAX,EDX                         ; 005878db
    RET                                 ; 005878dd
    XOR EAX,EAX                         ; 005878de
        ;   Label: LAB_005878de
    RET                                 ; 005878e0

