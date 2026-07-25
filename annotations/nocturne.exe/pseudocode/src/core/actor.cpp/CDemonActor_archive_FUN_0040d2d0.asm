; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[50]:
;   FUN_0040f390 at 0040f396
;   FUN_0040f7d0 at 0040f7d6
;   FUN_0043cc50 at 0043cc56
;   FUN_00481e20 at 00481e26
;   FUN_0048e830 at 0048e836
;   FUN_004948f0 at 004948f6
;   FUN_004a8b30 at 004a8b35
;   FUN_004b49a0 at 004b49c1
;   FUN_004b61f0 at 004b61f5
;   FUN_004cc870 at 004cc876
;   ... and 40 more
;
; Referenced Globals:
;   TerminatedCString s_location_00577f05
;   TerminatedCString s_orient_00577f0e
;   float FLOAT_00577f15 = 1.087655E-38
;   TerminatedCString s_wasCreated_00577f19
;   TerminatedCString s_createProb_00577f24
;   TerminatedCString s_createEvent_00577f2f
;   int INT_005acc88 = 0x7
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
        ;   XREF to: 0040c590 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveLocation_FUN_0040c590()
    ADD ESP,0x8                         ; 0040d2e6
    PUSH 0x577f0e                       ; 0040d2e9 | = "orient"
    LEA EAX,[EBX + 0x30]                ; 0040d2ee
    PUSH EAX                            ; 0040d2f1
    CALL core_actor.cpp_archiveOrientation_FUN_0040c4f0 ; 0040d2f2
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040c4f0()
    MOV EDX,dword ptr [0x005acc88]      ; 0040d2f7 | INT_005acc88
    ADD ESP,0x8                         ; 0040d2fd
    CMP EDX,0x7                         ; 0040d300
    JL 0x0040d313                       ; 0040d303
        ;   XREF to: 0040d313 (CONDITIONAL_JUMP)  ; LAB_0040d313
    CMP dword ptr [0x005acc88],0x6      ; 0040d305 | INT_005acc88
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
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0040d322
    CMP dword ptr [0x005acc88],0x6      ; 0040d325 | INT_005acc88
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
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0040d341
    PUSH 0x577f24                       ; 0040d344 | = "createProb"
    LEA EAX,[EBX + 0x74]                ; 0040d349
    PUSH EAX                            ; 0040d34c
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0040d34d
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0040d352
    PUSH 0x577f2f                       ; 0040d355 | = "createEvent"
    ADD EBX,0x78                        ; 0040d35a
    PUSH EBX                            ; 0040d35d
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0040d35e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0040d363
    ADD ESP,0x4                         ; 0040d366
    POP EBX                             ; 0040d369
    RET                                 ; 0040d36a

