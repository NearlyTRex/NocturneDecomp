; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_litecone_cpp_CLightCone_setup_FUN_00502e10(CLightCone *this_ptr)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00502e10
        ;   Label: core_litecone.cpp_CLightCone_setup_FUN_00502e10
    PUSH EDX                            ; 00502e14
    CALL core_actor.cpp_FUN_00408850    ; 00502e15
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00502e1a
    RET                                 ; 00502e1d

