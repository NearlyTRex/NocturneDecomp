; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_00581530(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_factoryFuncVampireBoss_FUN_00581500 at 00581513
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_morph.cpp_CMorph_ctor_FUN_005b6e60
;   core_necklace.cpp_FUN_005adda0
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581530
        ;   Label: core_vampboss.cpp_CVampireBoss_ctor_FUN_00581530
    MOV EBX,dword ptr [ESP + 0x8]       ; 00581531
    PUSH EBX                            ; 00581535
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 00581536
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0058153b
    ADD EAX,0x10af8                     ; 0058153e
    PUSH EAX                            ; 00581543
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0 ; 00581544
        ;   XREF to: 00544cd0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00581549
    ADD EAX,0x22b4                      ; 0058154c
    PUSH EAX                            ; 00581551
    CALL core_necklace.cpp_FUN_005adda0 ; 00581552
        ;   XREF to: 005adda0 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005adda0()
    ADD ESP,0x4                         ; 00581557
    ADD EAX,0x3ab30                     ; 0058155a
    PUSH EAX                            ; 0058155f
    CALL core_necklace.cpp_FUN_005adda0 ; 00581560
        ;   XREF to: 005adda0 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005adda0()
    ADD ESP,0x4                         ; 00581565
    ADD EAX,0x3ab30                     ; 00581568
    PUSH EAX                            ; 0058156d
    CALL core_necklace.cpp_FUN_005adda0 ; 0058156e
        ;   XREF to: 005adda0 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005adda0()
    ADD ESP,0x4                         ; 00581573
    ADD EAX,0x3ab34                     ; 00581576
    PUSH EAX                            ; 0058157b
    CALL core_morph.cpp_CMorph_ctor_FUN_005b6e60 ; 0058157c
        ;   XREF to: 005b6e60 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_005b6e60(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00581581
    LEA EBX,[EAX + 0xfff3d0c0]          ; 00581584
    PUSH 0x5ed991                       ; 0058158a
    LEA EAX,[EBX + 0x2b4]               ; 0058158f
    PUSH EAX                            ; 00581595
    MOV dword ptr [EBX + 0x2b0],0x5fd844 ; 00581596
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005815a0
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005815a5
    PUSH 0x5ed99c                       ; 005815a8
    LEA EAX,[EBX + 0x10af8]             ; 005815ad
    PUSH EAX                            ; 005815b3
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005815b4
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3430],0x40000000 ; 005815b9
    MOV dword ptr [EBX + 0x3434],0x40400000 ; 005815c3
    MOV dword ptr [EBX + 0x3438],0x42480000 ; 005815cd
    MOV dword ptr [EBX + 0x343c],0x42c80000 ; 005815d7
    MOV dword ptr [EBX + 0xc3b70],0x0   ; 005815e1
    MOV dword ptr [EBX + 0xc2f3c],0x0   ; 005815eb
    MOV dword ptr [EBX + 0xc3b6c],0x0   ; 005815f5
    MOV dword ptr [EBX + 0xc3b88],0x0   ; 005815ff
    MOV dword ptr [EBX + 0xc3b8c],0x0   ; 00581609
    MOV dword ptr [EBX + 0xc3b90],0x0   ; 00581613
    MOV dword ptr [EBX + 0xc3b94],0x0   ; 0058161d
    MOV dword ptr [EBX + 0xc3b84],0x0   ; 00581627
    MOV dword ptr [EBX + 0xc3b98],0x0   ; 00581631
    MOV dword ptr [EBX + 0xc3b74],0x41200000 ; 0058163b
    ADD ESP,0x8                         ; 00581645
    MOV dword ptr [EBX + 0xc3b80],0x1   ; 00581648
    MOV EAX,EBX                         ; 00581652
    MOV dword ptr [EBX + 0x282c],0x0    ; 00581654
    POP EBX                             ; 0058165e
    RET                                 ; 0058165f

