; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_smiley_cpp_CSmiley_getCollisionType_FUN_0054ad60(CSmiley *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0054ad60
        ;   Label: core_smiley.cpp_CSmiley_getCollisionType_FUN_0054ad60
    PUSH EDX                            ; 0054ad64
    MOV ECX,dword ptr [ESP + 0x8]       ; 0054ad65
    PUSH ECX                            ; 0054ad69
    CALL core_charactr.cpp_FUN_00427680 ; 0054ad6a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427680()
    ADD ESP,0x8                         ; 0054ad6f
    RET                                 ; 0054ad72

