; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_setup_FUN_00419810(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419810
        ;   Label: core_bodypart.cpp_CBodyPart_setup_FUN_00419810
    PUSH EDI                            ; 00419811
    PUSH EBP                            ; 00419812
    MOV EDI,dword ptr [ESP + 0x10]      ; 00419813
    PUSH EDI                            ; 00419817
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00419818
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

