; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_anvil_cpp_CAnvil_archive_FUN_0040e860(CAnvil *this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005d328e+1
;   TerminatedCString s_dropCondition_005d3299
;   TerminatedCString s_dropHeight_005d32a7
;   TerminatedCString s_triggered_005d32b2
;   undefined4 DAT_005d32bc
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e860
        ;   Label: core_anvil.cpp_CAnvil_archive_FUN_0040e860
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e861
    PUSH EBX                            ; 0040e865
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 0040e866
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e86b
    PUSH 0x5d328f                       ; 0040e86e | s_modelName_005d328e+1
    LEA EAX,[EBX + 0x158]               ; 0040e873
    PUSH EAX                            ; 0040e879
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 0040e87a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770()
    ADD ESP,0x8                         ; 0040e87f
    PUSH 0x5d3299                       ; 0040e882 | = "dropCondition"
    LEA EAX,[EBX + 0x2d4]               ; 0040e887
    PUSH EAX                            ; 0040e88d
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0040e88e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040e893
    PUSH 0x5d32a7                       ; 0040e896 | = "dropHeight"
    LEA EAX,[EBX + 0x338]               ; 0040e89b
    PUSH EAX                            ; 0040e8a1
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0040e8a2
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0040e8a7
    PUSH 0x5d32b2                       ; 0040e8aa | = "triggered"
    LEA EAX,[EBX + 0x33c]               ; 0040e8af
    PUSH EAX                            ; 0040e8b5
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0040e8b6
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040e8bb
    PUSH 0x5d32bc                       ; 0040e8be | DAT_005d32bc
    ADD EBX,0x340                       ; 0040e8c3
    PUSH EBX                            ; 0040e8c9
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0040e8ca
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0040e8cf
    POP EBX                             ; 0040e8d2
    RET                                 ; 0040e8d3

