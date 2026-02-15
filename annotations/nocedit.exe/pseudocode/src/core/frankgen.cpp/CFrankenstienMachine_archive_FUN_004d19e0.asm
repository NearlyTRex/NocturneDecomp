; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004d19e0(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_whichPart_0062a9c2
;   TerminatedCString s_masterFrame_0062a9cc
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d19e0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_archive_FUN_004d19e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d19e1
    PUSH EBX                            ; 004d19e5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 004d19e6
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d19eb
    PUSH 0x62a9c2                       ; 004d19ee | = "whichPart"
    LEA EAX,[EBX + 0x158]               ; 004d19f3
    PUSH EAX                            ; 004d19f9
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 004d19fa
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d19ff
    PUSH 0x62a9cc                       ; 004d1a02 | = "masterFrame"
    LEA EAX,[EBX + 0x15c]               ; 004d1a07
    PUSH EAX                            ; 004d1a0d
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 004d1a0e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d1a13
    POP EBX                             ; 004d1a16
    RET                                 ; 004d1a17

