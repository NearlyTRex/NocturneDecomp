; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_0041e300(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_boxactor.cpp_CLightActor_ctor_FUN_0041f310 at 0041f315
;   core_boxactor.cpp_FUN_0041e2d0 at 0041e2e3
;   core_stone.cpp_FUN_00534d00 at 00534d05
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_005797f9
;   CDemonActor_vtable g_CBoxActorVTable
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_box.cpp_CBox_ctor_FUN_0041a610
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e300
        ;   Label: core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041e301
    PUSH EBX                            ; 0041e305
    CALL core_actor.cpp_FUN_00409d30    ; 0041e306
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041e30b
    ADD EAX,0x150                       ; 0041e30e
    PUSH EAX                            ; 0041e313
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0041e314
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041e319
    ADD EAX,0x23c                       ; 0041e31c
    PUSH EAX                            ; 0041e321
    CALL core_box.cpp_CBox_ctor_FUN_0041a610 ; 0041e322
        ;   XREF to: 0041a610 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041a610(CBox * this_ptr)
    LEA EBX,[EAX + 0xfffffc74]          ; 0041e327
    MOV dword ptr [EBX + 0x14c],0x59aad4 ; 0041e32d | g_CBoxActorVTable
    MOV dword ptr [EBX + 0x388],0x0     ; 0041e337
    MOV dword ptr [EBX + 0x304],0x41a00000 ; 0041e341
    LEA EAX,[EBX + 0x2f8]               ; 0041e34b
    MOV dword ptr [EBX + 0x308],0x0     ; 0041e351
    MOV dword ptr [EAX + 0x8],0x0       ; 0041e35b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e362
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e365
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e368
    MOV dword ptr [EAX],EDX             ; 0041e36b
    MOV byte ptr [EBX + 0x2cc],0x0      ; 0041e36d
    MOV byte ptr [EBX + 0x2e0],0x0      ; 0041e374
    MOV dword ptr [EBX + 0x2f4],0x0     ; 0041e37b
    MOV dword ptr [EBX + 0x30c],0x0     ; 0041e385
    MOV dword ptr [EBX + 0x314],0x0     ; 0041e38f
    MOV dword ptr [EBX + 0x310],0x0     ; 0041e399
    ADD ESP,0x4                         ; 0041e3a3
    MOV dword ptr [EBX + 0x318],0x0     ; 0041e3a6
    PUSH 0x5797f9                       ; 0041e3b0 | = "question.kfm"
    MOV byte ptr [EBX + 0x324],0x0      ; 0041e3b5
    LEA EAX,[EBX + 0x150]               ; 0041e3bc
    MOV dword ptr [EBX + 0x31c],0x0     ; 0041e3c2
    PUSH EAX                            ; 0041e3cc
    MOV dword ptr [EBX + 0x5e8],0x0     ; 0041e3cd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0041e3d7
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x5e0],0xffffffff ; 0041e3dc
    MOV dword ptr [EBX + 0x5ec],0x1     ; 0041e3e6
    MOV dword ptr [EBX + 0x5f0],0x1     ; 0041e3f0
    MOV dword ptr [EBX + 0x5f4],0x0     ; 0041e3fa
    MOV byte ptr [EBX + 0x5f8],0x0      ; 0041e404
    ADD ESP,0x8                         ; 0041e40b
    MOV dword ptr [EBX + 0x65c],0x0     ; 0041e40e
    MOV EAX,EBX                         ; 0041e418
    MOV dword ptr [EBX + 0x660],0x0     ; 0041e41a
    POP EBX                             ; 0041e424
    RET                                 ; 0041e425

