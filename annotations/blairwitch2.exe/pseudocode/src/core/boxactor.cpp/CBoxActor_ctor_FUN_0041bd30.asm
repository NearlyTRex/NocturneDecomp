; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_boxactor.cpp_CLightActor_ctor_FUN_0041cf60 at 0041cf65
;   core_boxactor.cpp_factoryFuncBoxActor_FUN_0041bd00 at 0041bd13
;   core_doc.cpp_CDoc_ctor_FUN_004500d0 at 004500ea
;   core_necklace.cpp_CNecklace_ctor_FUN_005adab0 at 005adab5
;   core_partibox.cpp_CParticleBox_ctor_FUN_005ac7a0 at 005ac7a6
;   core_spirmine.cpp_CSpiritMine_ctor_FUN_005ad3c0 at 005ad3c6
;   core_stone.cpp_CTempleStone_ctor_FUN_00562430 at 00562435
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_box.cpp_CBox_ctor_FUN_005b1bc0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041bd30
        ;   Label: core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041bd31
    PUSH EBX                            ; 0041bd35
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 0041bd36
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041bd3b
    ADD EAX,0x2b4                       ; 0041bd3e
    PUSH EAX                            ; 0041bd43
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0041bd44
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041bd49
    ADD EAX,0x23c                       ; 0041bd4c
    PUSH EAX                            ; 0041bd51
    CALL core_box.cpp_CBox_ctor_FUN_005b1bc0 ; 0041bd52
        ;   XREF to: 005b1bc0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_005b1bc0(CBox * this_ptr)
    LEA EBX,[EAX + 0xfffffb10]          ; 0041bd57
    MOV dword ptr [EBX + 0x2b0],0x5f3a24 ; 0041bd5d
    MOV dword ptr [EBX + 0x4ec],0x0     ; 0041bd67
    MOV dword ptr [EBX + 0x468],0x41a00000 ; 0041bd71
    LEA EAX,[EBX + 0x45c]               ; 0041bd7b
    MOV dword ptr [EBX + 0x46c],0x0     ; 0041bd81
    MOV dword ptr [EAX + 0x8],0x0       ; 0041bd8b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041bd92
    MOV dword ptr [EAX + 0x4],EDX       ; 0041bd95
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041bd98
    MOV dword ptr [EAX],EDX             ; 0041bd9b
    MOV byte ptr [EBX + 0x430],0x0      ; 0041bd9d
    MOV byte ptr [EBX + 0x444],0x0      ; 0041bda4
    MOV dword ptr [EBX + 0x458],0x0     ; 0041bdab
    MOV dword ptr [EBX + 0x470],0x0     ; 0041bdb5
    MOV dword ptr [EBX + 0x478],0x0     ; 0041bdbf
    MOV dword ptr [EBX + 0x474],0x0     ; 0041bdc9
    MOV dword ptr [EBX + 0x47c],0x0     ; 0041bdd3
    MOV byte ptr [EBX + 0x488],0x0      ; 0041bddd
    MOV dword ptr [EBX + 0x480],0x0     ; 0041bde4
    LEA EAX,[EBX + 0x7c8]               ; 0041bdee
    MOV dword ptr [EBX + 0x74c],0x0     ; 0041bdf4
    ADD ESP,0x4                         ; 0041bdfe
    MOV dword ptr [EAX + 0x8],0x0       ; 0041be01
    PUSH 0x5cc505                       ; 0041be08
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041be0d
    MOV dword ptr [EAX + 0x4],EDX       ; 0041be10
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041be13
    MOV dword ptr [EAX],EDX             ; 0041be16
    LEA EAX,[EBX + 0x2b4]               ; 0041be18
    PUSH EAX                            ; 0041be1e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0041be1f
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x744],0xffffffff ; 0041be24
    MOV dword ptr [EBX + 0x750],0x1     ; 0041be2e
    MOV dword ptr [EBX + 0x754],0x1     ; 0041be38
    MOV dword ptr [EBX + 0x758],0x0     ; 0041be42
    MOV byte ptr [EBX + 0x75c],0x0      ; 0041be4c
    ADD ESP,0x8                         ; 0041be53
    MOV dword ptr [EBX + 0x7c0],0x0     ; 0041be56
    MOV EAX,EBX                         ; 0041be60
    MOV dword ptr [EBX + 0x7c4],0x0     ; 0041be62
    POP EBX                             ; 0041be6c
    RET                                 ; 0041be6d

