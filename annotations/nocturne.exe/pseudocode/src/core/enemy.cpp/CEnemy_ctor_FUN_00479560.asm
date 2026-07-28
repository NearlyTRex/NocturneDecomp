; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00479560(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[27]:
;   core_armour.cpp_FUN_0040f960 at 0040f968
;   core_batcreat.cpp_FUN_00412100 at 00412106
;   core_batman.cpp_CBatman_ctor_FUN_004133e0 at 004133e8
;   core_beast.cpp_FUN_00415050 at 00415056
;   core_biggs.cpp_CBiggs_ctor_FUN_00415370 at 00415378
;   core_boneguy.cpp_FUN_00418630 at 0041863b
;   core_bride.cpp_FUN_0041fbb0 at 0041fbb6
;   core_bugs.cpp_CBugs_ctor_FUN_00421040 at 00421048
;   core_cow.cpp_FUN_0043bbe0 at 0043bbe6
;   core_dog.cpp_FUN_00454660 at 00454666
;   ... and 17 more
;
; Referenced Globals:
;   TerminatedCString s_ene_0057f2be
;   undefined4 s_ne_0057f2be+1
;   undefined4 s_e_0057f2be+2
;   undefined4 s__0057f2be+3
;   void* PTR_core_enemy.cpp_CEnemy_setup_FUN_004796b0_0059cdb4 = 004796b0
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_charactr.cpp_CCharacter_ctor_FUN_00423f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479560
        ;   Label: core_enemy.cpp_CEnemy_ctor_FUN_00479560
    PUSH ESI                            ; 00479561
    PUSH EDI                            ; 00479562
    SUB ESP,0x4                         ; 00479563
    MOV EDX,dword ptr [ESP + 0x14]      ; 00479566
    PUSH EDX                            ; 0047956a
    CALL core_charactr.cpp_CCharacter_ctor_FUN_00423f40 ; 0047956b
        ;   XREF to: 00423f40 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00423f40(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00479570
    PUSH 0x3f8ccccd                     ; 00479573
    MOV EBX,EAX                         ; 00479578
    PUSH 0x3f666666                     ; 0047957a
    MOV dword ptr [EAX + 0x14c],0x59cdb4 ; 0047957f | PTR_core_enemy.cpp_CEnemy_setup_FUN_004796b0_0059cdb4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00479589
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBX + 0xbc90],0x0    ; 0047958e
    MOV dword ptr [EBX + 0xbd14],0x0    ; 00479598
    MOV dword ptr [EBX + 0xbca4],0x0    ; 004795a2
    MOV dword ptr [EBX + 0xbca8],0x0    ; 004795ac
    MOV dword ptr [EBX + 0xbcac],0x42480000 ; 004795b6
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004795c0
    MOV dword ptr [EBX + 0xbd1c],0x0    ; 004795ca
    MOV dword ptr [EBX + 0xbc98],0x0    ; 004795d4
    MOV byte ptr [EBX + 0xbcb0],0x0     ; 004795de
    MOV dword ptr [EBX + 0xbc9c],0x42c80000 ; 004795e5
    MOV dword ptr [ESP + 0x8],EAX       ; 004795ef
    MOV dword ptr [EBX + 0xbca0],0x0    ; 004795f3
    FLD float ptr [ESP + 0x8]           ; 004795fd
    ADD ESP,0x8                         ; 00479601
    MOV dword ptr [EBX + 0xbd18],0x40c00000 ; 00479604
    PUSH 0x1fff                         ; 0047960e
    MOV dword ptr [EBX + 0xbd20],0x1    ; 00479613
    PUSH 0xffffe001                     ; 0047961d
    FSTP float ptr [EBX + 0xbc8c]       ; 00479622
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00479628
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 0047962d
    PUSH 0x1fff                         ; 00479630
    ADD EAX,0x10000                     ; 00479635
    PUSH 0xffffe001                     ; 0047963a
    MOV dword ptr [EBX + 0x108],EAX     ; 0047963f
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00479645
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 0047964a
    PUSH 0x1fff                         ; 0047964d
    ADD EAX,0x10000                     ; 00479652
    PUSH 0xffffe001                     ; 00479657
    MOV ESI,0x57f2be                    ; 0047965c | = "ene"
    MOV dword ptr [EBX + 0x10c],EAX     ; 00479661
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00479667
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 0047966c
    ADD EAX,0x10000                     ; 0047966f
    LEA EDI,[EBX + 0x11c]               ; 00479674
    MOV dword ptr [EBX + 0x110],EAX     ; 0047967a
    PUSH EDI                            ; 00479680
    MOV AL,byte ptr [ESI]               ; 00479681 | = "ene" | s_e_0057f2be+2
        ;   Label: LAB_00479681
    MOV byte ptr [EDI],AL               ; 00479683
    CMP AL,0x0                          ; 00479685
    JZ 0x00479699                       ; 00479687
        ;   XREF to: 00479699 (CONDITIONAL_JUMP)  ; LAB_00479699
    MOV AL,byte ptr [ESI + 0x1]         ; 00479689 | s_ne_0057f2be+1 | s__0057f2be+3
    ADD ESI,0x2                         ; 0047968c
    MOV byte ptr [EDI + 0x1],AL         ; 0047968f
    ADD EDI,0x2                         ; 00479692
    CMP AL,0x0                          ; 00479695
    JNZ 0x00479681                      ; 00479697
        ;   XREF to: 00479681 (CONDITIONAL_JUMP)  ; LAB_00479681
    POP EDI                             ; 00479699
        ;   Label: LAB_00479699
    MOV EAX,EBX                         ; 0047969a
    ADD ESP,0x4                         ; 0047969c
    POP EDI                             ; 0047969f
    POP ESI                             ; 004796a0
    POP EBX                             ; 004796a1
    RET                                 ; 004796a2

