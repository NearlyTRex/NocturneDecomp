; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_CStairs_setup_FUN_00534820(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_stairs.cpp_CStairs_buildCollision_FUN_00534ad0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00534820
        ;   Label: core_stairs.cpp_CStairs_setup_FUN_00534820
    PUSH EDX                            ; 00534824
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00534825
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053482a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053482d
    PUSH ECX                            ; 00534831
    CALL core_stairs.cpp_CStairs_buildCollision_FUN_00534ad0 ; 00534832
        ;   XREF to: 00534ad0 (UNCONDITIONAL_CALL)  ; void core_stairs.cpp_CStairs_buildCollision_FUN_00534ad0(CStairs * this_ptr)
    ADD ESP,0x4                         ; 00534837
    LEA EAX,[EAX]                       ; 0053483a

