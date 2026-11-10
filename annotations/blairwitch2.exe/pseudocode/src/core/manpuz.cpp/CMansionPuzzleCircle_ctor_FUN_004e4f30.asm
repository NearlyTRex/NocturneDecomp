; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_004e4f30(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_manpuz.cpp_factoryFuncMansionPuzzleCircle_FUN_004e4f00 at 004e4f13
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004e6010
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4f30
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004e4f30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e4f31
    PUSH EDI                            ; 004e4f35
    PUSH ESI                            ; 004e4f36
    PUSH EBX                            ; 004e4f37
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004e4f38
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e4f3d
    ADD EAX,0x2b4                       ; 004e4f40
    PUSH EAX                            ; 004e4f45
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 004e4f46
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e4f4b
    ADD EAX,0x17c                       ; 004e4f4e
    PUSH EAX                            ; 004e4f53
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 004e4f54
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e4f59
    ADD EAX,0x17c                       ; 004e4f5c
    PUSH EAX                            ; 004e4f61
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 004e4f62
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e4f67
    PUSH 0x5f9ab0                       ; 004e4f6a
    PUSH 0xc                            ; 004e4f6f
    ADD EAX,0x1a0                       ; 004e4f71
    PUSH EAX                            ; 004e4f76
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004e4f77
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 004e4f7c
    PUSH 0x5f9ad0                       ; 004e4f7f
    PUSH 0xc                            ; 004e4f84
    ADD EAX,0x4b0                       ; 004e4f86
    PUSH EAX                            ; 004e4f8b
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004e4f8c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 004e4f91
    PUSH 0x5f9af0                       ; 004e4f94
    PUSH 0x2                            ; 004e4f99
    ADD EAX,0x8a0                       ; 004e4f9b
    PUSH EAX                            ; 004e4fa0
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004e4fa1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 004e4fa6
    LEA EBX,[EAX + 0xffffeb64]          ; 004e4fa9
    PUSH 0x5dc4b6                       ; 004e4faf
    LEA EAX,[EBX + 0x2b4]               ; 004e4fb4
    PUSH EAX                            ; 004e4fba
    MOV dword ptr [EBX + 0x2b0],0x5f98d4 ; 004e4fbb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004e4fc5
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004e4fca
    PUSH 0x5dc4c3                       ; 004e4fcd
    LEA EAX,[EBX + 0x430]               ; 004e4fd2
    PUSH EAX                            ; 004e4fd8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004e4fd9
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004e4fde
    PUSH 0x5dc4d0                       ; 004e4fe1
    LEA EAX,[EBX + 0x5ac]               ; 004e4fe6
    PUSH EAX                            ; 004e4fec
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004e4fed
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004e4ff2
    MOV ESI,0x5dc4dd                    ; 004e4ff5
    LEA EDI,[EBX + 0x1624]              ; 004e4ffa
    PUSH EDI                            ; 004e5000
    MOV AL,byte ptr [ESI]               ; 004e5001
        ;   Label: LAB_004e5001
    MOV byte ptr [EDI],AL               ; 004e5003
    CMP AL,0x0                          ; 004e5005
    JZ 0x004e5019                       ; 004e5007
        ;   XREF to: 004e5019 (CONDITIONAL_JUMP)  ; LAB_004e5019
    MOV AL,byte ptr [ESI + 0x1]         ; 004e5009
    ADD ESI,0x2                         ; 004e500c
    MOV byte ptr [EDI + 0x1],AL         ; 004e500f
    ADD EDI,0x2                         ; 004e5012
    CMP AL,0x0                          ; 004e5015
    JNZ 0x004e5001                      ; 004e5017
        ;   XREF to: 004e5001 (CONDITIONAL_JUMP)  ; LAB_004e5001
    POP EDI                             ; 004e5019
        ;   Label: LAB_004e5019
    POP ESI                             ; 004e501a
    POP EDI                             ; 004e501b
    LEA EAX,[EBX + 0x728]               ; 004e501c
    MOV dword ptr [EAX + 0x8],0x0       ; 004e5022
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e5029
    MOV dword ptr [EAX + 0x4],EDX       ; 004e502c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e502f
    MOV dword ptr [EAX],EDX             ; 004e5032
    LEA EAX,[EBX + 0x734]               ; 004e5034
    MOV dword ptr [EAX + 0x8],0x0       ; 004e503a
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e5041
    MOV dword ptr [EAX + 0x4],EDX       ; 004e5044
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e5047
    MOV dword ptr [EAX],EDX             ; 004e504a
    LEA EAX,[EBX + 0x740]               ; 004e504c
    MOV dword ptr [EAX + 0x8],0x0       ; 004e5052
    PUSH EBX                            ; 004e5059
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e505a
    MOV dword ptr [EAX + 0x4],EDX       ; 004e505d
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e5060
    MOV dword ptr [EAX],EDX             ; 004e5063
    CALL core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004e6010 ; 004e5065
        ;   XREF to: 004e6010 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004e6010(CMansionPuzzleCircle * this_ptr)
    ADD ESP,0x4                         ; 004e506a
    MOV EAX,EBX                         ; 004e506d
    POP EBX                             ; 004e506f
    RET                                 ; 004e5070

