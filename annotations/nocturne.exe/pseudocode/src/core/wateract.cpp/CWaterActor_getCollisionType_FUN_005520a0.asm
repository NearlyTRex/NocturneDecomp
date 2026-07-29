; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_wateract_cpp_CWaterActor_getCollisionType_FUN_005520a0(CWaterActor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005520a0
        ;   Label: core_wateract.cpp_CWaterActor_getCollisionType_FUN_005520a0
    MOV EDX,dword ptr [EAX]             ; 005520a4
    CMP EDX,0x3                         ; 005520a6
    JNZ 0x005520ae                      ; 005520a9
        ;   XREF to: 005520ae (CONDITIONAL_JUMP)  ; LAB_005520ae
    MOV EAX,EDX                         ; 005520ab
    RET                                 ; 005520ad
    XOR EAX,EAX                         ; 005520ae
        ;   Label: LAB_005520ae
    RET                                 ; 005520b0

