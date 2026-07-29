; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[50]:
;   core_ammo.cpp_FUN_0040ecf0 at 0040ecf6
;   core_ammobox.cpp_FUN_0040f390 at 0040f396
;   core_anvil.cpp_CAnvil_archive_FUN_0040f7d0 at 0040f7d6
;   core_backgnd.cpp_CBackgroundActor_archive_FUN_00410040 at 00410046
;   core_barrier.cpp_CBarrier_archive_FUN_00411800 at 00411806
;   core_bat.cpp_CBat_archive_FUN_00411b50 at 00411b56
;   core_battery.cpp_CBattery_archive_FUN_00414ef0 at 00414ef6
;   core_bodypart.cpp_CBodyPart_archive_FUN_00416570 at 0041657c
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041ec60 at 0041ec70
;   core_chain.cpp_CChain_archive_FUN_0042cbc0 at 0042cbc6
;   ... and 40 more
;
; Referenced Globals:
;   TerminatedCString s_location_00577f05
;   TerminatedCString s_orient_00577f0e
;   float FLOAT_00577f15 = 1.087655E-38
;   TerminatedCString s_wasCreated_00577f19
;   TerminatedCString s_createProb_00577f24
;   TerminatedCString s_createEvent_00577f2f
;   int g_INT_005acc88 = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveLocation_FUN_0040c590
;   core_actor.cpp_archiveOrientation_FUN_0040c4f0
;   core_actor.cpp_archiveString_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d2d0
        ;   Label: core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
    SUB ESP,0x4                         ; 0040d2d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040d2d4
    PUSH 0x577f05                       ; 0040d2d8 | = "location"
    LEA EAX,[EBX + 0x20]                ; 0040d2dd
    PUSH EAX                            ; 0040d2e0
    CALL core_actor.cpp_archiveLocation_FUN_0040c590 ; 0040d2e1
        ;   XREF to: 0040c590 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocation_FUN_0040c590(CLocation * location_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040d2e6
    PUSH 0x577f0e                       ; 0040d2e9 | = "orient"
    LEA EAX,[EBX + 0x30]                ; 0040d2ee
    PUSH EAX                            ; 0040d2f1
    CALL core_actor.cpp_archiveOrientation_FUN_0040c4f0 ; 0040d2f2
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveOrientation_FUN_0040c4f0(COrientation * orient_ptr, char * property_name)
    MOV EDX,dword ptr [0x005acc88]      ; 0040d2f7 | g_INT_005acc88
    ADD ESP,0x8                         ; 0040d2fd
    CMP EDX,0x7                         ; 0040d300
    JL 0x0040d313                       ; 0040d303
        ;   XREF to: 0040d313 (CONDITIONAL_JUMP)  ; LAB_0040d313
    CMP dword ptr [0x005acc88],0x6      ; 0040d305 | g_INT_005acc88
    JGE 0x0040d333                      ; 0040d30c
        ;   XREF to: 0040d333 (CONDITIONAL_JUMP)  ; LAB_0040d333
    ADD ESP,0x4                         ; 0040d30e
    POP EBX                             ; 0040d311
    RET                                 ; 0040d312
    PUSH 0x577f15                       ; 0040d313 | FLOAT_00577f15
        ;   Label: LAB_0040d313
    LEA EAX,[ESP + 0x4]                 ; 0040d318
    PUSH EAX                            ; 0040d31c
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0040d31d
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040d322
    CMP dword ptr [0x005acc88],0x6      ; 0040d325 | g_INT_005acc88
    JGE 0x0040d333                      ; 0040d32c
        ;   XREF to: 0040d333 (CONDITIONAL_JUMP)  ; LAB_0040d333
    ADD ESP,0x4                         ; 0040d32e
    POP EBX                             ; 0040d331
    RET                                 ; 0040d332
    PUSH 0x577f19                       ; 0040d333 | = "wasCreated"
        ;   Label: LAB_0040d333
    LEA EAX,[EBX + 0x70]                ; 0040d338
    PUSH EAX                            ; 0040d33b
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0040d33c
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040d341
    PUSH 0x577f24                       ; 0040d344 | = "createProb"
    LEA EAX,[EBX + 0x74]                ; 0040d349
    PUSH EAX                            ; 0040d34c
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0040d34d
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040d352
    PUSH 0x577f2f                       ; 0040d355 | = "createEvent"
    ADD EBX,0x78                        ; 0040d35a
    PUSH EBX                            ; 0040d35d
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040d35e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040d363
    ADD ESP,0x4                         ; 0040d366
    POP EBX                             ; 0040d369
    RET                                 ; 0040d36a

