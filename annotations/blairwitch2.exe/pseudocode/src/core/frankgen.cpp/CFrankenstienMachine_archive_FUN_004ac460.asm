; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004ac460(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_whichPart_005d6b59
;   TerminatedCString s_masterFrame_005d6b63
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac460
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_archive_FUN_004ac460
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ac461
    PUSH EBX                            ; 004ac465
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 004ac466
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ac46b
    PUSH 0x5d6b59                       ; 004ac46e | = "whichPart"
    LEA EAX,[EBX + 0x2b4]               ; 004ac473
    PUSH EAX                            ; 004ac479
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004ac47a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004ac47f
    PUSH 0x5d6b63                       ; 004ac482 | = "masterFrame"
    LEA EAX,[EBX + 0x2b8]               ; 004ac487
    PUSH EAX                            ; 004ac48d
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004ac48e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004ac493
    POP EBX                             ; 004ac496
    RET                                 ; 004ac497

