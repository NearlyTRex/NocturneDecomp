; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLadder * core_ladder.cpp_CLadder_ctor_FUN_00502540(CLadder * this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ladder.cpp_factoryFunc_FUN_00502500 at 0050251a
;
; Referenced Globals:
;   TerminatedCString s_null_kfm_00630e0b
;   CDemonActor_vtable g_CLadderVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502540
        ;   Label: core_ladder.cpp_CLadder_ctor_FUN_00502540
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502541
    PUSH EBX                            ; 00502545
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00502546
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050254b
    ADD EAX,0x158                       ; 0050254e
    PUSH EAX                            ; 00502553
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00502554
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00502559
    LEA EBX,[EAX + 0xfffffea8]          ; 0050255c
    PUSH 0x630e0b                       ; 00502562 | = "null.kfm"
    LEA EAX,[EBX + 0x158]               ; 00502567
    PUSH EAX                            ; 0050256d
    MOV dword ptr [EBX + 0x154],0x6605f4 ; 0050256e | g_CLadderVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00502578
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x40000000 ; 0050257d
    MOV dword ptr [EBX + 0x2d8],0x41200000 ; 00502587
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00502591
    LEA EAX,[EBX + 0x2e4]               ; 0050259b
    MOV dword ptr [EBX + 0x2e0],0x0     ; 005025a1
    MOV dword ptr [EAX + 0x8],0x0       ; 005025ab
    MOV EDX,dword ptr [EAX + 0x8]       ; 005025b2
    MOV dword ptr [EAX + 0x4],EDX       ; 005025b5
    MOV EDX,dword ptr [EAX + 0x4]       ; 005025b8
    MOV dword ptr [EAX],EDX             ; 005025bb
    LEA EAX,[EBX + 0x2f0]               ; 005025bd
    MOV dword ptr [EAX + 0x8],0x0       ; 005025c3
    ADD ESP,0x8                         ; 005025ca
    MOV EDX,dword ptr [EAX + 0x8]       ; 005025cd
    MOV dword ptr [EAX + 0x4],EDX       ; 005025d0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005025d3
    MOV dword ptr [EAX],EDX             ; 005025d6
    MOV EAX,EBX                         ; 005025d8
    MOV dword ptr [EBX + 0x2fc],0x0     ; 005025da
    POP EBX                             ; 005025e4
    RET                                 ; 005025e5

