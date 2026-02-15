; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_CStairs_archive_FUN_005ba4f0(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_rise_0065306a
;   TerminatedCString s_run_0065306f
;   TerminatedCString s_width_00653073
;   TerminatedCString s_count_00653079
;   TerminatedCString s_groundType_0065307f
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba4f0
        ;   Label: core_stairs.cpp_CStairs_archive_FUN_005ba4f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ba4f1
    PUSH EBX                            ; 005ba4f5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 005ba4f6
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ba4fb
    PUSH 0x65306a                       ; 005ba4fe | = "rise"
    LEA EAX,[EBX + 0x158]               ; 005ba503
    PUSH EAX                            ; 005ba509
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005ba50a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ba50f
    PUSH 0x65306f                       ; 005ba512 | = "run"
    LEA EAX,[EBX + 0x15c]               ; 005ba517
    PUSH EAX                            ; 005ba51d
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005ba51e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ba523
    PUSH 0x653073                       ; 005ba526 | = "width"
    LEA EAX,[EBX + 0x160]               ; 005ba52b
    PUSH EAX                            ; 005ba531
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005ba532
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ba537
    PUSH 0x653079                       ; 005ba53a | = "count"
    LEA EAX,[EBX + 0x16c]               ; 005ba53f
    PUSH EAX                            ; 005ba545
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005ba546
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ba54b
    PUSH 0x65307f                       ; 005ba54e | = "groundType"
    ADD EBX,0xa30                       ; 005ba553
    PUSH EBX                            ; 005ba559
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005ba55a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ba55f
    POP EBX                             ; 005ba562
    RET                                 ; 005ba563

