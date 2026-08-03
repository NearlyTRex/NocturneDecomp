; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_litecone_cpp_CLightCone_setup_FUN_004c8190(CLightCone *this_ptr)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c8190
        ;   Label: core_litecone.cpp_CLightCone_setup_FUN_004c8190
    PUSH EDX                            ; 004c8194
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004c8195
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c819a
    RET                                 ; 004c819d

