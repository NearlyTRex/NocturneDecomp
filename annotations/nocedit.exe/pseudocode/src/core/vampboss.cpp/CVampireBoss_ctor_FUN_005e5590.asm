; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_factoryFunc_FUN_005e5550 at 005e556a
;
; Referenced Globals:
;   TerminatedCString s_nosfer_dfm_00656ac5
;   TerminatedCString s_batboss_dfm_00656ad0
;   CEnemy_full_vtable g_CVampireBossVTable
;
; Called Functions:
;   core_cloth.cpp_CCloth_ctor_FUN_00438ba0
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_morph.cpp_CMorph_ctor_FUN_0052b310
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e5590
        ;   Label: core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e5591
    PUSH EBX                            ; 005e5595
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 005e5596
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005e559b
    ADD EAX,0xbebc                      ; 005e559e
    PUSH EAX                            ; 005e55a3
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 005e55a4
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e55a9
    ADD EAX,0x22b4                      ; 005e55ac
    PUSH EAX                            ; 005e55b1
    CALL core_cloth.cpp_CCloth_ctor_FUN_00438ba0 ; 005e55b2
        ;   XREF to: 00438ba0 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_00438ba0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 005e55b7
    ADD EAX,0x3fe70                     ; 005e55ba
    PUSH EAX                            ; 005e55bf
    CALL core_cloth.cpp_CCloth_ctor_FUN_00438ba0 ; 005e55c0
        ;   XREF to: 00438ba0 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_00438ba0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 005e55c5
    ADD EAX,0x3fe70                     ; 005e55c8
    PUSH EAX                            ; 005e55cd
    CALL core_cloth.cpp_CCloth_ctor_FUN_00438ba0 ; 005e55ce
        ;   XREF to: 00438ba0 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_00438ba0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 005e55d3
    ADD EAX,0x3fe74                     ; 005e55d6
    PUSH EAX                            ; 005e55db
    CALL core_morph.cpp_CMorph_ctor_FUN_0052b310 ; 005e55dc
        ;   XREF to: 0052b310 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_0052b310(CMorph * this_ptr)
    ADD ESP,0x4                         ; 005e55e1
    LEA EBX,[EAX + 0xfff3233c]          ; 005e55e4
    PUSH 0x656ac5                       ; 005e55ea | = "nosfer.dfm"
    LEA EAX,[EBX + 0x158]               ; 005e55ef
    PUSH EAX                            ; 005e55f5
    MOV dword ptr [EBX + 0x154],0x664e94 ; 005e55f6 | g_CVampireBossVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005e5600
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005e5605
    PUSH 0x656ad0                       ; 005e5608 | = "batboss.dfm"
    LEA EAX,[EBX + 0xbebc]              ; 005e560d
    PUSH EAX                            ; 005e5613
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005e5614
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2ddc],0x40000000 ; 005e5619
    MOV dword ptr [EBX + 0x2de0],0x40400000 ; 005e5623
    MOV dword ptr [EBX + 0x2de4],0x42480000 ; 005e562d
    MOV dword ptr [EBX + 0x2de8],0x42c80000 ; 005e5637
    MOV dword ptr [EBX + 0xce8f4],0x0   ; 005e5641
    MOV dword ptr [EBX + 0xcdcc0],0x0   ; 005e564b
    MOV dword ptr [EBX + 0xce8f0],0x0   ; 005e5655
    MOV dword ptr [EBX + 0xce90c],0x0   ; 005e565f
    MOV dword ptr [EBX + 0xce910],0x0   ; 005e5669
    MOV dword ptr [EBX + 0xce914],0x0   ; 005e5673
    MOV dword ptr [EBX + 0xce918],0x0   ; 005e567d
    MOV dword ptr [EBX + 0xce908],0x0   ; 005e5687
    MOV dword ptr [EBX + 0xce91c],0x0   ; 005e5691
    MOV dword ptr [EBX + 0xce8f8],0x41200000 ; 005e569b
    ADD ESP,0x8                         ; 005e56a5
    MOV dword ptr [EBX + 0xce904],0x1   ; 005e56a8
    MOV EAX,EBX                         ; 005e56b2
    MOV dword ptr [EBX + 0x2624],0x0    ; 005e56b4
    POP EBX                             ; 005e56be
    RET                                 ; 005e56bf

