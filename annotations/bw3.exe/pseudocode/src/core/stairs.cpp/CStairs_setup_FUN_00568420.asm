; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_CStairs_setup_FUN_00568420(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_stairs.cpp_CStairs_buildCollision_FUN_00568730
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00568420
        ;   Label: core_stairs.cpp_CStairs_setup_FUN_00568420
    PUSH EDX                            ; 00568424
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 00568425
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056842a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056842d
    PUSH ECX                            ; 00568431
    CALL core_stairs.cpp_CStairs_buildCollision_FUN_00568730 ; 00568432
        ;   XREF to: 00568730 (UNCONDITIONAL_CALL)  ; void core_stairs.cpp_CStairs_buildCollision_FUN_00568730(CStairs * this_ptr)
    ADD ESP,0x4                         ; 00568437
    LEA EAX,[EAX]                       ; 0056843a

