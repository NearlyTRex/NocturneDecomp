; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_armour_cpp_CArmour_getCollisionType_FUN_0040f100(CArmour *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0040f100
        ;   Label: core_armour.cpp_CArmour_getCollisionType_FUN_0040f100
    PUSH EDX                            ; 0040f104
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040f105
    PUSH ECX                            ; 0040f109
    CALL core_charactr.cpp_FUN_00427680 ; 0040f10a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427680()
    ADD ESP,0x8                         ; 0040f10f
    RET                                 ; 0040f112

