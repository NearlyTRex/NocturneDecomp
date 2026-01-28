; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bodypart_cpp_CBodyPart_processInEditor_FUN_0041b260(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_bodypart.cpp_CBodyPart_FUN_0041b070
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041b260
        ;   Label: core_bodypart.cpp_CBodyPart_processInEditor_FUN_0041b260
    PUSH EDX                            ; 0041b264
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 0041b265
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041b26a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0041b26d
    PUSH ECX                            ; 0041b271
    CALL core_bodypart.cpp_CBodyPart_FUN_0041b070 ; 0041b272
        ;   XREF to: 0041b070 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_FUN_0041b070(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 0041b277
    RET                                 ; 0041b27a

