; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_isOnGround_FUN_00424430(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[20]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411b34
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 00413062
;   core_biggs.cpp_CBiggs_process_FUN_00414e50 at 00414f40
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418b83
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041e61c
;   core_conveyor.cpp_CConstruct_process_FUN_00436e80 at 004373ea
;   core_cow.cpp_CZombieCow_process_FUN_004392b0 at 004393c8
;   core_dog.cpp_CZombieDog_process_FUN_0045e360 at 0045e4cf
;   core_drone.cpp_CDrone_process_FUN_0046d870 at 0046d9e4
;   core_gargoyle.cpp_CGargoyle_process_FUN_004c0050 at 004c01a9
;   ... and 10 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00424430
        ;   Label: core_charactr.cpp_CCharacter_isOnGround_FUN_00424430
    CMP dword ptr [EDX + 0xdc],0x0      ; 00424434
    JNZ 0x0042444b                      ; 0042443b
        ;   XREF to: 0042444b (CONDITIONAL_JUMP)  ; LAB_0042444b
    FLD float ptr [EDX + 0x24]          ; 0042443d
    FCOMP float ptr [EDX + 0x2574]      ; 00424440
    FNSTSW AX                           ; 00424446
    SAHF                                ; 00424448
    JZ 0x00424451                       ; 00424449
        ;   XREF to: 00424451 (CONDITIONAL_JUMP)  ; LAB_00424451
    MOV EAX,0x1                         ; 0042444b
        ;   Label: LAB_0042444b
    RET                                 ; 00424450
    CMP dword ptr [EDX + 0x2570],0x0    ; 00424451
        ;   Label: LAB_00424451
    JZ 0x0042444b                       ; 00424458
        ;   XREF to: 0042444b (CONDITIONAL_JUMP)  ; LAB_0042444b
    PUSH EDX                            ; 0042445a
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 0042445b
    CALL dword ptr [EAX + 0x64]         ; 00424461
    ADD ESP,0x4                         ; 00424464
    TEST EAX,EAX                        ; 00424467
    JNZ 0x0042444b                      ; 00424469
        ;   XREF to: 0042444b (CONDITIONAL_JUMP)  ; LAB_0042444b
    RET                                 ; 0042446b

