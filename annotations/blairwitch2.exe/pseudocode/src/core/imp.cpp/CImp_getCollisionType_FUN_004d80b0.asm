; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004d80b0(CImp *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d80b0
        ;   Label: core_imp.cpp_CImp_getCollisionType_FUN_004d80b0
    PUSH EDX                            ; 004d80b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d80b5
    PUSH ECX                            ; 004d80b9
    CALL core_charactr.cpp_FUN_00427680 ; 004d80ba
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427680()
    ADD ESP,0x8                         ; 004d80bf
    RET                                 ; 004d80c2

