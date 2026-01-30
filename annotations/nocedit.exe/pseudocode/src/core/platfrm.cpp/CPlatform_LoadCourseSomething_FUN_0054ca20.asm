; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_platfrm_cpp_CPlatform_LoadCourseSomething_FUN_0054ca20(void)
;
;
; XREF[2]:
;   core_conveyor.cpp_FUN_00441d60 at 00441dc2
;   core_minecar.cpp_CMinecar_setup_FUN_00520e90 at 00520e95
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ca20
        ;   Label: core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20
    PUSH ESI                            ; 0054ca21
    PUSH EDI                            ; 0054ca22
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054ca23
    PUSH ESI                            ; 0054ca27
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0054ca28
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

