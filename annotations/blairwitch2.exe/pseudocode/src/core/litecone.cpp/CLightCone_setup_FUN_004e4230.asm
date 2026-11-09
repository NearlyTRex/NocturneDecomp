; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_litecone_cpp_CLightCone_setup_FUN_004e4230(CLightCone *this_ptr)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e4230
        ;   Label: core_litecone.cpp_CLightCone_setup_FUN_004e4230
    PUSH EDX                            ; 004e4234
    CALL core_actor.cpp_FUN_00408a80    ; 004e4235
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e423a
    RET                                 ; 004e423d

