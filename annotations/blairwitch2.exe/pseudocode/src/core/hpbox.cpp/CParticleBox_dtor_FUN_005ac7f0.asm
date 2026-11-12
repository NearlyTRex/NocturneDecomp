; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CParticleBox * core_hpbox_cpp_CParticleBox_dtor_FUN_005ac7f0(CParticleBox *this_ptr,uint flags)
;
; Parameters:
; CParticleBox *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CDemonActor_vtable g_CParticleBoxVTable
;   WatcomTypeInfo g_CParticleBoxTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_box.cpp_CBox_dtor_FUN_005b1c70
;   core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220
;   core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac7f0
        ;   Label: core_hpbox.cpp_CParticleBox_dtor_FUN_005ac7f0
    PUSH ESI                            ; 005ac7f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ac7f2
    TEST byte ptr [ESP + 0x10],0x4      ; 005ac7f6
    JNZ 0x005ac8a5                      ; 005ac7fb
        ;   XREF to: 005ac8a5 (CONDITIONAL_JUMP)  ; LAB_005ac8a5
    PUSH 0x0                            ; 005ac801
    LEA ESI,[EBX + 0x220]               ; 005ac803
    PUSH ESI                            ; 005ac809
    MOV dword ptr [EBX + 0x2b0],0x600e34 ; 005ac80a | g_CParticleBoxVTable
    CALL core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100 ; 005ac814
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100(CSimpleParticleSystem * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005ac819
    PUSH ESI                            ; 005ac81c
    CALL core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220 ; 005ac81d
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005ac822
    PUSH 0x0                            ; 005ac825
    LEA ESI,[EBX + 0x1dc]               ; 005ac827
    PUSH ESI                            ; 005ac82d
    CALL core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100 ; 005ac82e
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100(CSimpleParticleSystem * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005ac833
    PUSH ESI                            ; 005ac836
    CALL core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220 ; 005ac837
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005ac83c
    PUSH 0x0                            ; 005ac83f
    LEA ESI,[EBX + 0x198]               ; 005ac841
    PUSH ESI                            ; 005ac847
    CALL core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100 ; 005ac848
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100(CSimpleParticleSystem * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005ac84d
    PUSH ESI                            ; 005ac850
    CALL core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220 ; 005ac851
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005ac856
    PUSH 0x0                            ; 005ac859
    LEA ESI,[EBX + 0x154]               ; 005ac85b
    PUSH ESI                            ; 005ac861
    CALL core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100 ; 005ac862
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100(CSimpleParticleSystem * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005ac867
    PUSH ESI                            ; 005ac86a
    CALL core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220 ; 005ac86b
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_release_FUN_005a8220(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005ac870
    PUSH 0x0                            ; 005ac873
    ADD EBX,0x4f0                       ; 005ac875
    PUSH EBX                            ; 005ac87b
    CALL core_box.cpp_CBox_dtor_FUN_005b1c70 ; 005ac87c
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_005b1c70(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ac881
    PUSH 0x1                            ; 005ac884
    LEA EBX,[EAX + 0xfffffb10]          ; 005ac886
    PUSH EBX                            ; 005ac88c
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005ac88d
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ac892
    MOV DL,byte ptr [ESP + 0x10]        ; 005ac895
    MOV EBX,EAX                         ; 005ac899
    TEST DL,0x2                         ; 005ac89b
    JNZ 0x005ac8c1                      ; 005ac89e
        ;   XREF to: 005ac8c1 (CONDITIONAL_JUMP)  ; LAB_005ac8c1
    MOV EAX,EBX                         ; 005ac8a0
    POP ESI                             ; 005ac8a2
    POP EBX                             ; 005ac8a3
    RET                                 ; 005ac8a4
    PUSH 0x600f20                       ; 005ac8a5 | g_CParticleBoxTypeInfo
        ;   Label: LAB_005ac8a5
    PUSH EBX                            ; 005ac8aa
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005ac8ab
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005ac8b0
    PUSH EAX                            ; 005ac8b3
    CALL crt_unknown.c_FUN_005b7fce     ; 005ac8b4
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005ac8b9
    MOV EAX,EBX                         ; 005ac8bc
    POP ESI                             ; 005ac8be
    POP EBX                             ; 005ac8bf
    RET                                 ; 005ac8c0
    PUSH EAX                            ; 005ac8c1
        ;   Label: LAB_005ac8c1
    CALL crt_unknown.c_FUN_005b7fdc     ; 005ac8c2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005ac8c7
    MOV EAX,EBX                         ; 005ac8ca
    POP ESI                             ; 005ac8cc
    POP EBX                             ; 005ac8cd
    RET                                 ; 005ac8ce

