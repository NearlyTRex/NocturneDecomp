; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[18]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 0041558d
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416992
;   core_biggs.cpp_CBiggs_process_FUN_00418700 at 004187fa
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c416
;   core_bride.cpp_CBride_process_FUN_00423a30 at 004243ba
;   core_cow.cpp_CZombieCow_process_FUN_00444310 at 0044442d
;   core_dog.cpp_CZombieDog_process_FUN_0047f140 at 0047f274
;   core_drone.cpp_CDrone_process_FUN_0048ec70 at 0048edf1
;   core_gargoyle.cpp_CGargoyle_process_FUN_004e4a00 at 004e4b4f
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e677f
;   ... and 8 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004297e0
        ;   Label: core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
    CMP dword ptr [EDX + 0xdc],0x0      ; 004297e4
    JNZ 0x004297fb                      ; 004297eb
        ;   XREF to: 004297fb (CONDITIONAL_JUMP)  ; LAB_004297fb
    FLD float ptr [EDX + 0x24]          ; 004297ed
    FCOMP float ptr [EDX + 0x2414]      ; 004297f0
    FNSTSW AX                           ; 004297f6
    SAHF                                ; 004297f8
    JZ 0x00429801                       ; 004297f9
        ;   XREF to: 00429801 (CONDITIONAL_JUMP)  ; LAB_00429801
    MOV EAX,0x1                         ; 004297fb
        ;   Label: LAB_004297fb
    RET                                 ; 00429800
    CMP dword ptr [EDX + 0x2410],0x0    ; 00429801
        ;   Label: LAB_00429801
    JZ 0x004297fb                       ; 00429808
        ;   XREF to: 004297fb (CONDITIONAL_JUMP)  ; LAB_004297fb
    PUSH EDX                            ; 0042980a
    MOV EAX,dword ptr [EDX + 0x154]     ; 0042980b
    CALL dword ptr [EAX + 0x54]         ; 00429811
    ADD ESP,0x4                         ; 00429814
    TEST EAX,EAX                        ; 00429817
    JNZ 0x004297fb                      ; 00429819
        ;   XREF to: 004297fb (CONDITIONAL_JUMP)  ; LAB_004297fb
    RET                                 ; 0042981b

