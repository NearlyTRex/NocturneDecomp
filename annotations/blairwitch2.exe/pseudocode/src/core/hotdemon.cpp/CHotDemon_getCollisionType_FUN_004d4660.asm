; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004d4660(CHotDemon *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d4660
        ;   Label: core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004d4660
    PUSH EDX                            ; 004d4664
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d4665
    PUSH ECX                            ; 004d4669
    CALL core_charactr.cpp_FUN_00427680 ; 004d466a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427680()
    ADD ESP,0x8                         ; 004d466f
    RET                                 ; 004d4672

