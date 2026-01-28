; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGrave * __cdecl core_grave_cpp_CGrave_ctor_FUN_004ee510(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_grave.cpp_factoryFunc_FUN_004ee4d0 at 004ee4ea
;
; Referenced Globals:
;   TerminatedCString s_grave1_kfm_0062e481
;   CDemonActor_vtable g_CGraveVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee510
        ;   Label: core_grave.cpp_CGrave_ctor_FUN_004ee510
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ee511
    PUSH EBX                            ; 004ee515
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004ee516
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ee51b
    ADD EAX,0x158                       ; 004ee51e
    PUSH EAX                            ; 004ee523
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004ee524
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ee529
    LEA EBX,[EAX + 0xfffffea8]          ; 004ee52c
    PUSH 0x62e481                       ; 004ee532 | = "grave1.kfm"
    LEA EAX,[EBX + 0x158]               ; 004ee537
    PUSH EAX                            ; 004ee53d
    MOV dword ptr [EBX + 0x154],0x65f124 ; 004ee53e | g_CGraveVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004ee548
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004ee54d
    MOV dword ptr [EBX + 0x2d8],0x41f00000 ; 004ee557
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004ee561
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004ee56b
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004ee575
    ADD ESP,0x8                         ; 004ee57f
    MOV byte ptr [EBX + 0x2e8],0x0      ; 004ee582
    MOV EAX,EBX                         ; 004ee589
    MOV byte ptr [EBX + 0x34c],0x0      ; 004ee58b
    POP EBX                             ; 004ee592
    RET                                 ; 004ee593

