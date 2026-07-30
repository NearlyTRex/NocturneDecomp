; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[18]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 0041259d
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413922
;   core_biggs.cpp_CBiggs_process_FUN_004154b0 at 004155aa
;   core_boneguy.cpp_CBoneGuy_process_FUN_00418a00 at 00418e86
;   core_bride.cpp_CBride_process_FUN_0041fe40 at 004207ca
;   core_cow.cpp_CZombieCow_process_FUN_0043bdb0 at 0043becd
;   core_dog.cpp_CZombieDog_process_FUN_00454750 at 00454884
;   core_drone.cpp_CDrone_process_FUN_00462a60 at 00462be1
;   core_gargoyle.cpp_CGargoyle_process_FUN_004a7870 at 004a79bf
;   core_ghoul.cpp_CGhoul_process_FUN_004a9270 at 004a93ef
;   ... and 8 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00425960
        ;   Label: core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
    CMP dword ptr [EDX + 0xdc],0x0      ; 00425964
    JNZ 0x0042597b                      ; 0042596b
        ;   XREF to: 0042597b (CONDITIONAL_JUMP)  ; LAB_0042597b
    FLD float ptr [EDX + 0x24]          ; 0042596d
    FCOMP float ptr [EDX + 0x240c]      ; 00425970
    FNSTSW AX                           ; 00425976
    SAHF                                ; 00425978
    JZ 0x00425981                       ; 00425979
        ;   XREF to: 00425981 (CONDITIONAL_JUMP)  ; LAB_00425981
    MOV EAX,0x1                         ; 0042597b
        ;   Label: LAB_0042597b
    RET                                 ; 00425980
    CMP dword ptr [EDX + 0x2408],0x0    ; 00425981
        ;   Label: LAB_00425981
    JZ 0x0042597b                       ; 00425988
        ;   XREF to: 0042597b (CONDITIONAL_JUMP)  ; LAB_0042597b
    PUSH EDX                            ; 0042598a
    MOV EAX,dword ptr [EDX + 0x14c]     ; 0042598b
    CALL dword ptr [EAX + 0x54]         ; 00425991
    ADD ESP,0x4                         ; 00425994
    TEST EAX,EAX                        ; 00425997
    JNZ 0x0042597b                      ; 00425999
        ;   XREF to: 0042597b (CONDITIONAL_JUMP)  ; LAB_0042597b
    RET                                 ; 0042599b

