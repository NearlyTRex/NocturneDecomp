; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_mobster_cpp_CMobster_getCollisionType_FUN_00500350(CMobster *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_charactr.cpp_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00500350
        ;   Label: core_mobster.cpp_CMobster_getCollisionType_FUN_00500350
    PUSH EDX                            ; 00500354
    MOV ECX,dword ptr [ESP + 0x8]       ; 00500355
    PUSH ECX                            ; 00500359
    CALL core_charactr.cpp_FUN_00427680 ; 0050035a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427680()
    ADD ESP,0x8                         ; 0050035f
    RET                                 ; 00500362

