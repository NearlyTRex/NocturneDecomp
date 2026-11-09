; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_litecone_cpp_CLightCone_setup_FUN_004e4060(CLightCone *this_ptr)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e4060
        ;   Label: core_litecone.cpp_CLightCone_setup_FUN_004e4060
    PUSH EDX                            ; 004e4064
    CALL core_actor.cpp_FUN_00408890    ; 004e4065
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e406a
    RET                                 ; 004e406d

