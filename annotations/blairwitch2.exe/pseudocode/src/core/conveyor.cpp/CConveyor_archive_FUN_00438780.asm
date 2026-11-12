; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_00438780(CConveyor *this_ptr)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005cdf96
;   TerminatedCString s_direction_005cdf9b
;   TerminatedCString s_startEvent_005cdfa5
;   TerminatedCString s_stopEvent_005cdfb0
;   TerminatedCString s_state_005cdfba
;   TerminatedCString s_actorClass_005cdfc0
;   int g_CConveyorClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_platfrm.cpp_CPlatform_archive_FUN_005193f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438780
        ;   Label: core_conveyor.cpp_CConveyor_archive_FUN_00438780
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438781
    PUSH EBX                            ; 00438785
    CALL core_platfrm.cpp_CPlatform_archive_FUN_005193f0 ; 00438786
        ;   XREF to: 005193f0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_archive_FUN_005193f0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 0043878b
    PUSH 0x5cdf96                       ; 0043878e | DAT_005cdf96
    LEA EAX,[EBX + 0x884]               ; 00438793
    PUSH EAX                            ; 00438799
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 0043879a
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b4b0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0043879f
    PUSH 0x5cdf9b                       ; 004387a2 | = "direction"
    LEA EAX,[EBX + 0x890]               ; 004387a7
    PUSH EAX                            ; 004387ad
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 004387ae
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b4b0(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 004387b3
    PUSH 0x5cdfa5                       ; 004387b6 | = "startEvent"
    LEA EAX,[EBX + 0x89c]               ; 004387bb
    PUSH EAX                            ; 004387c1
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004387c2
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004387c7
    PUSH 0x5cdfb0                       ; 004387ca | = "stopEvent"
    LEA EAX,[EBX + 0x900]               ; 004387cf
    PUSH EAX                            ; 004387d5
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004387d6
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004387db
    PUSH 0x5cdfba                       ; 004387de | = "state"
    LEA EAX,[EBX + 0x964]               ; 004387e3
    PUSH EAX                            ; 004387e9
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004387ea
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x00609f18]      ; 004387ef | g_CConveyorClassVersion
    ADD ESP,0x8                         ; 004387f5
    CMP EDX,0x2                         ; 004387f8
    JGE 0x004387ff                      ; 004387fb
        ;   XREF to: 004387ff (CONDITIONAL_JUMP)  ; LAB_004387ff
    POP EBX                             ; 004387fd
    RET                                 ; 004387fe
    PUSH 0x5cdfc0                       ; 004387ff | = "actorClass"
        ;   Label: LAB_004387ff
    ADD EBX,0x968                       ; 00438804
    PUSH EBX                            ; 0043880a
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0043880b
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00438810
    POP EBX                             ; 00438813
    RET                                 ; 00438814

