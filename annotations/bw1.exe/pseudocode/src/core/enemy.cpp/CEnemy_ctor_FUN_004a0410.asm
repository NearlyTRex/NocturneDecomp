; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a0410(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[35]:
;   core_armour.cpp_CArmour_ctor_FUN_0040e9e0 at 0040e9e8
;   core_batcreat.cpp_CBatCreature_ctor_FUN_00411210 at 00411216
;   core_batman.cpp_CBatman_ctor_FUN_00412780 at 00412788
;   core_beast.cpp_CBeast_ctor_FUN_004146f0 at 004146f6
;   core_biggs.cpp_CBiggs_ctor_FUN_004149f0 at 004149f8
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041b750 at 0041b75b
;   core_bride.cpp_CBride_ctor_FUN_004238c0 at 004238c6
;   core_bugs.cpp_CBugs_ctor_FUN_00424f80 at 00424f88
;   core_carved.cpp_CCarved_ctor_FUN_004286d0 at 004286d9
;   core_construc.cpp_CConstruct_ctor_FUN_00445820 at 00445828
;   ... and 25 more
;
; Referenced Globals:
;   undefined1 DAT_005dcac1
;   undefined1 DAT_005dcac2
;   undefined1 DAT_005dcac3
;   undefined1 DAT_005dcac4
;   CEnemy_full_vtable g_CEnemyVTable
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_ctor_FUN_0042c080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0410
        ;   Label: core_enemy.cpp_CEnemy_ctor_FUN_004a0410
    PUSH ESI                            ; 004a0411
    PUSH EDI                            ; 004a0412
    SUB ESP,0x4                         ; 004a0413
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a0416
    PUSH EDX                            ; 004a041a
    CALL core_charactr.cpp_CCharacter_ctor_FUN_0042c080 ; 004a041b
        ;   XREF to: 0042c080 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_0042c080(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004a0420
    PUSH 0x3f8ccccd                     ; 004a0423
    MOV EBX,EAX                         ; 004a0428
    PUSH 0x3f666666                     ; 004a042a
    MOV dword ptr [EAX + 0x154],0x5ffb54 ; 004a042f | g_CEnemyVTable
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004a0439
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBX + 0xc1d4],0x0    ; 004a043e
    MOV dword ptr [EBX + 0xc258],0x0    ; 004a0448
    MOV dword ptr [EBX + 0xc1e8],0x0    ; 004a0452
    MOV dword ptr [EBX + 0xc1ec],0x0    ; 004a045c
    MOV dword ptr [EBX + 0xc1f0],0x42480000 ; 004a0466
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 004a0470
    MOV dword ptr [EBX + 0xc260],0x0    ; 004a047a
    MOV dword ptr [EBX + 0xc1dc],0x0    ; 004a0484
    MOV byte ptr [EBX + 0xc1f4],0x0     ; 004a048e
    MOV dword ptr [EBX + 0xc1e0],0x42c80000 ; 004a0495
    MOV ESI,0x5dcac1                    ; 004a049f | DAT_005dcac1
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 004a04a4
    LEA EDI,[EBX + 0x120]               ; 004a04ae
    MOV dword ptr [EBX + 0xc25c],0x40c00000 ; 004a04b4
    MOV dword ptr [ESP + 0x8],EAX       ; 004a04be
    MOV dword ptr [EBX + 0xc264],0x1    ; 004a04c2
    FLD float ptr [ESP + 0x8]           ; 004a04cc
    ADD ESP,0x8                         ; 004a04d0
    FSTP float ptr [EBX + 0xc1d0]       ; 004a04d3
    PUSH EDI                            ; 004a04d9
    MOV AL,byte ptr [ESI]               ; 004a04da | DAT_005dcac1 | DAT_005dcac3
        ;   Label: LAB_004a04da
    MOV byte ptr [EDI],AL               ; 004a04dc
    CMP AL,0x0                          ; 004a04de
    JZ 0x004a04f2                       ; 004a04e0
        ;   XREF to: 004a04f2 (CONDITIONAL_JUMP)  ; LAB_004a04f2
    MOV AL,byte ptr [ESI + 0x1]         ; 004a04e2 | DAT_005dcac2 | DAT_005dcac4
    ADD ESI,0x2                         ; 004a04e5
    MOV byte ptr [EDI + 0x1],AL         ; 004a04e8
    ADD EDI,0x2                         ; 004a04eb
    CMP AL,0x0                          ; 004a04ee
    JNZ 0x004a04da                      ; 004a04f0
        ;   XREF to: 004a04da (CONDITIONAL_JUMP)  ; LAB_004a04da
    POP EDI                             ; 004a04f2
        ;   Label: LAB_004a04f2
    MOV EAX,EBX                         ; 004a04f3
    MOV dword ptr [EBX + 0x252c],0x3fc90fdb ; 004a04f5
    ADD ESP,0x4                         ; 004a04ff
    POP EDI                             ; 004a0502
    POP ESI                             ; 004a0503
    POP EBX                             ; 004a0504
    RET                                 ; 004a0505

