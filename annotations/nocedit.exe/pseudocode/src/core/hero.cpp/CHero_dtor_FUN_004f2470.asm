; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
; uint             Stack[0x14]:4   d4
; uint             Stack[0x18]:4   d5
; uint             Stack[0x1c]:4   d6
; uint             Stack[0x20]:4   d7
; uint             Stack[0x24]:4   d8
;
; XREF[9]:
;   core_baron.cpp_CBaron_dtor_FUN_00414100 at 0041410f
;   core_colonel.cpp_CColonel_dtor_FUN_00440670 at 0044067f
;   core_gabriela.cpp_freeMaybe_FUN_004d7660 at 004d7686
;   core_haystack.cpp_FUN_004f1d10 at 004f1d1f
;   core_icepick.cpp_CIcePick_dtor_FUN_004f97e0 at 004f97ef
;   core_moloch.cpp_CMoloch_dtor_FUN_00528bf0 at 00528c30
;   core_scat.cpp_CScat_dtor_FUN_00559160 at 0055916f
;   core_stranger.cpp_CStranger_dtor_FUN_005c69c0 at 005c69cf
;   core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50 at 005d9f86
;
; Referenced Globals:
;   CDemonActor_vtable g_CHeroVTable
;   CHero*[4] g_HeroActors
;   undefined4 DAT_02db87c4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_backgnd.cpp_cleanupVector_FUN_004126e0
;   core_backgnd.cpp_freeFires_FUN_00412700
;   core_backgnd.cpp_freeFlames_FUN_00412720
;   core_cloth.cpp_FUN_0043bf80
;   core_inv.cpp_CInventory_dtor_FUN_004fd0c0
;   core_path.cpp_CPathMap_dtor_FUN_005464d0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2470
        ;   Label: core_hero.cpp_CHero_dtor_FUN_004f2470
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f2471
    MOV dword ptr [EDX + 0x154],0x65f6d4 ; 004f2475 | g_CHeroVTable
    XOR EAX,EAX                         ; 004f247f
    CMP EDX,dword ptr [EAX + 0x2db87c0] ; 004f2481 | g_HeroActors | DAT_02db87c4
        ;   Label: LAB_004f2481
    JZ 0x004f2529                       ; 004f2487
        ;   XREF to: 004f2529 (CONDITIONAL_JUMP)  ; LAB_004f2529
    ADD EAX,0x4                         ; 004f248d
        ;   Label: LAB_004f248d
    CMP EAX,0x10                        ; 004f2490
    JNZ 0x004f2481                      ; 004f2493
        ;   XREF to: 004f2481 (CONDITIONAL_JUMP)  ; LAB_004f2481
    PUSH 0x0                            ; 004f2495
    ADD EDX,0x1f738                     ; 004f2497
    PUSH EDX                            ; 004f249d
    CALL core_inv.cpp_CInventory_dtor_FUN_004fd0c0 ; 004f249e
        ;   XREF to: 004fd0c0 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_dtor_FUN_004fd0c0(CInventory * this_ptr)
    ADD ESP,0x8                         ; 004f24a3
    PUSH 0x0                            ; 004f24a6
    SUB EAX,0x138e0                     ; 004f24a8
    PUSH EAX                            ; 004f24ad
    CALL core_path.cpp_CPathMap_dtor_FUN_005464d0 ; 004f24ae
        ;   XREF to: 005464d0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_005464d0(CPathMap * this_ptr)
    ADD ESP,0x8                         ; 004f24b3
    PUSH 0x0                            ; 004f24b6
    SUB EAX,0x8a8c                      ; 004f24b8
    PUSH EAX                            ; 004f24bd
    CALL core_backgnd.cpp_freeFlames_FUN_00412720 ; 004f24be
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFlames_FUN_00412720(CFlame * * array)
    ADD ESP,0x8                         ; 004f24c3
    PUSH 0x0                            ; 004f24c6
    SUB EAX,0x4b0                       ; 004f24c8
    PUSH EAX                            ; 004f24cd
    CALL core_backgnd.cpp_freeFires_FUN_00412700 ; 004f24ce
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_freeFires_FUN_00412700(SFire * * objs)
    ADD ESP,0x8                         ; 004f24d3
    PUSH 0x0                            ; 004f24d6
    SUB EAX,0x20c                       ; 004f24d8
    PUSH EAX                            ; 004f24dd
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004f24de
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004f24e3
    PUSH 0x0                            ; 004f24e6
    SUB EAX,0xb4                        ; 004f24e8
    PUSH EAX                            ; 004f24ed
    CALL core_backgnd.cpp_cleanupVector_FUN_004126e0 ; 004f24ee
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; int core_backgnd.cpp_cleanupVector_FUN_004126e0(CVector3f * * objs)
    ADD ESP,0x8                         ; 004f24f3
    PUSH 0x0                            ; 004f24f6
    SUB EAX,0x1c8                       ; 004f24f8
    PUSH EAX                            ; 004f24fd
    CALL core_cloth.cpp_FUN_0043bf80    ; 004f24fe
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043bf80()
    ADD ESP,0x8                         ; 004f2503
    PUSH 0x0                            ; 004f2506
    SUB EAX,0x293c                      ; 004f2508
    PUSH EAX                            ; 004f250d
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 004f250e
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 004f2513
    PUSH 0x1                            ; 004f2516
    LEA EDX,[EAX + 0xfffffea8]          ; 004f2518
    PUSH EDX                            ; 004f251e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 004f251f
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004f2524
    POP EBX                             ; 004f2527
    RET                                 ; 004f2528
    XOR EBX,EBX                         ; 004f2529
        ;   Label: LAB_004f2529
    MOV dword ptr [EAX + 0x2db87c0],EBX ; 004f252b | DAT_02db87c4
    JMP 0x004f248d                      ; 004f2531
        ;   XREF to: 004f248d (UNCONDITIONAL_JUMP)  ; LAB_004f248d

