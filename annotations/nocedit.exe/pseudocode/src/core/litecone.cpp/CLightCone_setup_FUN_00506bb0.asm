; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_litecone_cpp_CLightCone_setup_FUN_00506bb0(CLightCone *this_ptr)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00506bb0
        ;   Label: core_litecone.cpp_CLightCone_setup_FUN_00506bb0
    PUSH EDX                            ; 00506bb4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00506bb5
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00506bba
    RET                                 ; 00506bbd

