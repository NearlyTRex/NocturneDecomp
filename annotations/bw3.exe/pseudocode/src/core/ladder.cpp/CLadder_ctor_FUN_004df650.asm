; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_004df650(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ladder.cpp_factoryFuncLadder_FUN_004df620 at 004df633
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df650
        ;   Label: core_ladder.cpp_CLadder_ctor_FUN_004df650
    MOV EBX,dword ptr [ESP + 0x8]       ; 004df651
    PUSH EBX                            ; 004df655
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 004df656
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004df65b
    ADD EAX,0x158                       ; 004df65e
    PUSH EAX                            ; 004df663
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 004df664
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004df669
    LEA EBX,[EAX + 0xfffffea8]          ; 004df66c
    PUSH 0x5c6845                       ; 004df672
    LEA EAX,[EBX + 0x158]               ; 004df677
    PUSH EAX                            ; 004df67d
    MOV dword ptr [EBX + 0x154],0x5e2284 ; 004df67e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004df688
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x40000000 ; 004df68d
    MOV dword ptr [EBX + 0x2d8],0x41200000 ; 004df697
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004df6a1
    LEA EAX,[EBX + 0x2e4]               ; 004df6ab
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004df6b1
    MOV dword ptr [EAX + 0x8],0x0       ; 004df6bb
    MOV EDX,dword ptr [EAX + 0x8]       ; 004df6c2
    MOV dword ptr [EAX + 0x4],EDX       ; 004df6c5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004df6c8
    MOV dword ptr [EAX],EDX             ; 004df6cb
    LEA EAX,[EBX + 0x2f0]               ; 004df6cd
    MOV dword ptr [EAX + 0x8],0x0       ; 004df6d3
    ADD ESP,0x8                         ; 004df6da
    MOV EDX,dword ptr [EAX + 0x8]       ; 004df6dd
    MOV dword ptr [EAX + 0x4],EDX       ; 004df6e0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004df6e3
    MOV dword ptr [EAX],EDX             ; 004df6e6
    MOV EAX,EBX                         ; 004df6e8
    MOV dword ptr [EBX + 0x2fc],0x0     ; 004df6ea
    POP EBX                             ; 004df6f4
    RET                                 ; 004df6f5

