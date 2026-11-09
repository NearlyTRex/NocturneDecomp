; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[65]:
;   core_ammo.cpp_FUN_0040dc80 at 0040dcc9
;   core_ammobox.cpp_FUN_0040e320 at 0040e367
;   core_backgnd.cpp_FUN_0040ef70 at 0040efda
;   core_baron.cpp_FUN_004101f0 at 004103ac
;   core_bat.cpp_FUN_00410f70 at 00410fb9
;   core_batman.cpp_FUN_00413970 at 00413a6b
;   core_biggs.cpp_FUN_00414e00 at 00414f04
;   core_bodypart.cpp_FUN_00419280 at 004192f2
;   core_boneguy.cpp_FUN_0041d000 at 0041d0b6
;   core_bugs.cpp_FUN_00425480 at 0042563b
;   ... and 55 more
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00612560]      ; 004087f0 | DAT_00612560
        ;   Label: core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
    PUSH EDX                            ; 004087f6 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004087f7
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004087fc
    RET                                 ; 004087ff

