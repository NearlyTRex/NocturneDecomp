; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_0052bb20(CSentinel *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0052bb20
        ;   Label: core_sentinel.cpp_CSentinel_getCollisionType_FUN_0052bb20
    PUSH EDX                            ; 0052bb24
    MOV ECX,dword ptr [ESP + 0x8]       ; 0052bb25
    PUSH ECX                            ; 0052bb29
    CALL core_charactr.cpp_FUN_00427680 ; 0052bb2a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427680()
    ADD ESP,0x8                         ; 0052bb2f
    RET                                 ; 0052bb32

