; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_CStairs_setup_FUN_005849b0(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_stairs.cpp_CStairs_buildCollision_FUN_00584cc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005849b0
        ;   Label: core_stairs.cpp_CStairs_setup_FUN_005849b0
    PUSH EDX                            ; 005849b4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 005849b5
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005849ba
    MOV ECX,dword ptr [ESP + 0x4]       ; 005849bd
    PUSH ECX                            ; 005849c1
    CALL core_stairs.cpp_CStairs_buildCollision_FUN_00584cc0 ; 005849c2
        ;   XREF to: 00584cc0 (UNCONDITIONAL_CALL)  ; void core_stairs.cpp_CStairs_buildCollision_FUN_00584cc0(CStairs * this_ptr)
    ADD ESP,0x4                         ; 005849c7
    LEA EAX,[EAX]                       ; 005849ca

