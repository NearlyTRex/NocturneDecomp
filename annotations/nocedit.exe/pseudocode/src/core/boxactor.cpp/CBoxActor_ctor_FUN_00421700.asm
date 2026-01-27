; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_00421700(CBoxActor * this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_boxactor.cpp_CLightActor_ctor_FUN_00422990 at 00422995
;   core_boxactor.cpp_factoryFunc_FUN_004216c0 at 004216da
;   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 at 0053e8fc
;   core_stone.cpp_CTempleStone_ctor_FUN_005bad10 at 005bad15
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_00616630
;   CDemonActor_vtable g_CBoxActorVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_box.cpp_CBox_ctor_FUN_0041dc50
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421700
        ;   Label: core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
    MOV EBX,dword ptr [ESP + 0x8]       ; 00421701
    PUSH EBX                            ; 00421705
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00421706
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042170b
    ADD EAX,0x158                       ; 0042170e
    PUSH EAX                            ; 00421713
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00421714
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00421719
    ADD EAX,0x23c                       ; 0042171c
    PUSH EAX                            ; 00421721
    CALL core_box.cpp_CBox_ctor_FUN_0041dc50 ; 00421722
        ;   XREF to: 0041dc50 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041dc50(CBox * this_ptr)
    LEA EBX,[EAX + 0xfffffc6c]          ; 00421727
    MOV dword ptr [EBX + 0x154],0x65b1b4 ; 0042172d | g_CBoxActorVTable
    MOV dword ptr [EBX + 0x390],0x0     ; 00421737
    MOV dword ptr [EBX + 0x30c],0x41a00000 ; 00421741
    LEA EAX,[EBX + 0x300]               ; 0042174b
    MOV dword ptr [EBX + 0x310],0x0     ; 00421751
    MOV dword ptr [EAX + 0x8],0x0       ; 0042175b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00421762
    MOV dword ptr [EAX + 0x4],EDX       ; 00421765
    MOV EDX,dword ptr [EAX + 0x4]       ; 00421768
    MOV dword ptr [EAX],EDX             ; 0042176b
    MOV byte ptr [EBX + 0x2d4],0x0      ; 0042176d
    MOV byte ptr [EBX + 0x2e8],0x0      ; 00421774
    MOV dword ptr [EBX + 0x2fc],0x0     ; 0042177b
    MOV dword ptr [EBX + 0x314],0x0     ; 00421785
    MOV dword ptr [EBX + 0x31c],0x0     ; 0042178f
    MOV dword ptr [EBX + 0x318],0x0     ; 00421799
    ADD ESP,0x4                         ; 004217a3
    MOV dword ptr [EBX + 0x320],0x0     ; 004217a6
    PUSH 0x616630                       ; 004217b0 | = "question.kfm"
    MOV byte ptr [EBX + 0x32c],0x0      ; 004217b5
    LEA EAX,[EBX + 0x158]               ; 004217bc
    MOV dword ptr [EBX + 0x324],0x0     ; 004217c2
    PUSH EAX                            ; 004217cc
    MOV dword ptr [EBX + 0x5f0],0x0     ; 004217cd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004217d7
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x5e8],0xffffffff ; 004217dc
    MOV dword ptr [EBX + 0x5f4],0x1     ; 004217e6
    MOV dword ptr [EBX + 0x5f8],0x1     ; 004217f0
    MOV dword ptr [EBX + 0x5fc],0x0     ; 004217fa
    MOV byte ptr [EBX + 0x600],0x0      ; 00421804
    ADD ESP,0x8                         ; 0042180b
    MOV dword ptr [EBX + 0x664],0x0     ; 0042180e
    MOV EAX,EBX                         ; 00421818
    MOV dword ptr [EBX + 0x668],0x0     ; 0042181a
    POP EBX                             ; 00421824
    RET                                 ; 00421825

