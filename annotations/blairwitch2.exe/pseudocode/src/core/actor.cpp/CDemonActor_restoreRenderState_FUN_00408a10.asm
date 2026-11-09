; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[70]:
;   core_ammo.cpp_FUN_0040e0f0 at 0040e139
;   core_ammobox.cpp_FUN_0040e780 at 0040e7c7
;   core_backgnd.cpp_FUN_0040f3f0 at 0040f45a
;   core_baron.cpp_FUN_00410670 at 0041082c
;   core_bat.cpp_FUN_004113f0 at 00411439
;   core_batman.cpp_FUN_00413c70 at 00413d6b
;   core_biggs.cpp_FUN_00415120 at 00415224
;   core_bodypart.cpp_FUN_00415e10 at 00415e82
;   core_boneguy.cpp_FUN_00419b80 at 00419c36
;   core_bugs.cpp_FUN_0041f450 at 0041f60b
;   ... and 60 more
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0060b280]      ; 00408a10 | DAT_0060b280
        ;   Label: core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
    PUSH EDX                            ; 00408a16 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00408a17
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00408a1c
    RET                                 ; 00408a1f

