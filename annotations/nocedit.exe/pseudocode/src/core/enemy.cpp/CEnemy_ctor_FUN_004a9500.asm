; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a9500(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; XREF[27]:
;   core_armour.cpp_CArmour_ctor_FUN_004121a0 at 004121a8
;   core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0 at 004150f6
;   core_batman.cpp_CBatman_ctor_FUN_00416450 at 00416458
;   core_beast.cpp_CBeast_ctor_FUN_00418220 at 00418226
;   core_biggs.cpp_CBiggs_ctor_FUN_004185c0 at 004185c8
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 at 0041bbcb
;   core_bride.cpp_CBride_ctor_FUN_004237a0 at 004237a6
;   core_bugs.cpp_CBugs_ctor_FUN_00424cb0 at 00424cb8
;   core_cow.cpp_CZombieCow_ctor_FUN_00444140 at 00444146
;   core_dog.cpp_CZombieDog_ctor_FUN_0047f050 at 0047f056
;   ... and 17 more
;
; Referenced Globals:
;   TerminatedCString s_ene_00624309
;   undefined4 s_ne_00624309+1
;   undefined4 s_e_00624309+2
;   undefined4 s__00624309+3
;   CDemonActor_vtable g_CEnemyVTable
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_charactr.cpp_CCharacter_ctor_FUN_00427e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9500
        ;   Label: core_enemy.cpp_CEnemy_ctor_FUN_004a9500
    PUSH ESI                            ; 004a9501
    PUSH EDI                            ; 004a9502
    SUB ESP,0x4                         ; 004a9503
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a9506
    PUSH EDX                            ; 004a950a
    CALL core_charactr.cpp_CCharacter_ctor_FUN_00427e20 ; 004a950b
        ;   XREF to: 00427e20 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00427e20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004a9510
    PUSH 0x3f8ccccd                     ; 004a9513
    MOV EBX,EAX                         ; 004a9518
    PUSH 0x3f666666                     ; 004a951a
    MOV dword ptr [EAX + 0x154],0x65d7d4 ; 004a951f | g_CEnemyVTable
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004a9529
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBX + 0xbe28],0x0    ; 004a952e
    MOV dword ptr [EBX + 0xbeac],0x0    ; 004a9538
    MOV dword ptr [EBX + 0xbe3c],0x0    ; 004a9542
    MOV dword ptr [EBX + 0xbe40],0x0    ; 004a954c
    MOV dword ptr [EBX + 0xbe44],0x42480000 ; 004a9556
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 004a9560
    MOV dword ptr [EBX + 0xbeb4],0x0    ; 004a956a
    MOV dword ptr [EBX + 0xbe30],0x0    ; 004a9574
    MOV byte ptr [EBX + 0xbe48],0x0     ; 004a957e
    MOV dword ptr [EBX + 0xbe34],0x42c80000 ; 004a9585
    MOV dword ptr [ESP + 0x8],EAX       ; 004a958f
    MOV dword ptr [EBX + 0xbe38],0x0    ; 004a9593
    FLD float ptr [ESP + 0x8]           ; 004a959d
    ADD ESP,0x8                         ; 004a95a1
    MOV dword ptr [EBX + 0xbeb0],0x40c00000 ; 004a95a4
    PUSH 0x1fff                         ; 004a95ae
    MOV dword ptr [EBX + 0xbeb8],0x1    ; 004a95b3
    PUSH 0xffffe001                     ; 004a95bd
    FSTP float ptr [EBX + 0xbe24]       ; 004a95c2
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004a95c8
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004a95cd
    PUSH 0x1fff                         ; 004a95d0
    ADD EAX,0x10000                     ; 004a95d5
    PUSH 0xffffe001                     ; 004a95da
    MOV dword ptr [EBX + 0x108],EAX     ; 004a95df
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004a95e5
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004a95ea
    PUSH 0x1fff                         ; 004a95ed
    ADD EAX,0x10000                     ; 004a95f2
    PUSH 0xffffe001                     ; 004a95f7
    MOV ESI,0x624309                    ; 004a95fc | = "ene"
    MOV dword ptr [EBX + 0x10c],EAX     ; 004a9601
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004a9607
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004a960c
    ADD EAX,0x10000                     ; 004a960f
    LEA EDI,[EBX + 0x11c]               ; 004a9614
    MOV dword ptr [EBX + 0x110],EAX     ; 004a961a
    PUSH EDI                            ; 004a9620
    MOV AL,byte ptr [ESI]               ; 004a9621 | = "ene" | s_e_00624309+2
        ;   Label: LAB_004a9621
    MOV byte ptr [EDI],AL               ; 004a9623
    CMP AL,0x0                          ; 004a9625
    JZ 0x004a9639                       ; 004a9627
        ;   XREF to: 004a9639 (CONDITIONAL_JUMP)  ; LAB_004a9639
    MOV AL,byte ptr [ESI + 0x1]         ; 004a9629 | s_ne_00624309+1 | s__00624309+3
    ADD ESI,0x2                         ; 004a962c
    MOV byte ptr [EDI + 0x1],AL         ; 004a962f
    ADD EDI,0x2                         ; 004a9632
    CMP AL,0x0                          ; 004a9635
    JNZ 0x004a9621                      ; 004a9637
        ;   XREF to: 004a9621 (CONDITIONAL_JUMP)  ; LAB_004a9621
    POP EDI                             ; 004a9639
        ;   Label: LAB_004a9639
    MOV EAX,EBX                         ; 004a963a
    ADD ESP,0x4                         ; 004a963c
    POP EDI                             ; 004a963f
    POP ESI                             ; 004a9640
    POP EBX                             ; 004a9641
    RET                                 ; 004a9642

