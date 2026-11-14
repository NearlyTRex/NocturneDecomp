; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_00503b40(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_manpuz.cpp_factoryFuncMansionPuzzleCircle_FUN_00503b10 at 00503b23
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_00504cb0
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503b40
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00503b40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00503b41
    PUSH EDI                            ; 00503b45
    PUSH ESI                            ; 00503b46
    PUSH EBX                            ; 00503b47
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00503b48
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00503b4d
    ADD EAX,0x158                       ; 00503b50
    PUSH EAX                            ; 00503b55
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00503b56
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00503b5b
    ADD EAX,0x17c                       ; 00503b5e
    PUSH EAX                            ; 00503b63
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00503b64
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00503b69
    ADD EAX,0x17c                       ; 00503b6c
    PUSH EAX                            ; 00503b71
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00503b72
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00503b77
    PUSH 0x603610                       ; 00503b7a
    PUSH 0xc                            ; 00503b7f
    ADD EAX,0x1a0                       ; 00503b81
    PUSH EAX                            ; 00503b86
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00503b87
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00503b8c
    PUSH 0x603630                       ; 00503b8f
    PUSH 0xc                            ; 00503b94
    ADD EAX,0x4b0                       ; 00503b96
    PUSH EAX                            ; 00503b9b
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00503b9c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00503ba1
    PUSH 0x603650                       ; 00503ba4
    PUSH 0x2                            ; 00503ba9
    ADD EAX,0x8a0                       ; 00503bab
    PUSH EAX                            ; 00503bb0
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00503bb1
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00503bb6
    LEA EBX,[EAX + 0xffffecc0]          ; 00503bb9
    PUSH 0x5e7406                       ; 00503bbf
    LEA EAX,[EBX + 0x158]               ; 00503bc4
    PUSH EAX                            ; 00503bca
    MOV dword ptr [EBX + 0x154],0x603454 ; 00503bcb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00503bd5
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00503bda
    PUSH 0x5e7413                       ; 00503bdd
    LEA EAX,[EBX + 0x2d4]               ; 00503be2
    PUSH EAX                            ; 00503be8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00503be9
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00503bee
    PUSH 0x5e7420                       ; 00503bf1
    LEA EAX,[EBX + 0x450]               ; 00503bf6
    PUSH EAX                            ; 00503bfc
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00503bfd
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00503c02
    MOV ESI,0x5e742d                    ; 00503c05
    LEA EDI,[EBX + 0x14c8]              ; 00503c0a
    PUSH EDI                            ; 00503c10
    MOV AL,byte ptr [ESI]               ; 00503c11
        ;   Label: LAB_00503c11
    MOV byte ptr [EDI],AL               ; 00503c13
    CMP AL,0x0                          ; 00503c15
    JZ 0x00503c29                       ; 00503c17
        ;   XREF to: 00503c29 (CONDITIONAL_JUMP)  ; LAB_00503c29
    MOV AL,byte ptr [ESI + 0x1]         ; 00503c19
    ADD ESI,0x2                         ; 00503c1c
    MOV byte ptr [EDI + 0x1],AL         ; 00503c1f
    ADD EDI,0x2                         ; 00503c22
    CMP AL,0x0                          ; 00503c25
    JNZ 0x00503c11                      ; 00503c27
        ;   XREF to: 00503c11 (CONDITIONAL_JUMP)  ; LAB_00503c11
    POP EDI                             ; 00503c29
        ;   Label: LAB_00503c29
    POP ESI                             ; 00503c2a
    POP EDI                             ; 00503c2b
    LEA EAX,[EBX + 0x5cc]               ; 00503c2c
    MOV dword ptr [EAX + 0x8],0x0       ; 00503c32
    MOV EDX,dword ptr [EAX + 0x8]       ; 00503c39
    MOV dword ptr [EAX + 0x4],EDX       ; 00503c3c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00503c3f
    MOV dword ptr [EAX],EDX             ; 00503c42
    LEA EAX,[EBX + 0x5d8]               ; 00503c44
    MOV dword ptr [EAX + 0x8],0x0       ; 00503c4a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00503c51
    MOV dword ptr [EAX + 0x4],EDX       ; 00503c54
    MOV EDX,dword ptr [EAX + 0x4]       ; 00503c57
    MOV dword ptr [EAX],EDX             ; 00503c5a
    LEA EAX,[EBX + 0x5e4]               ; 00503c5c
    MOV dword ptr [EAX + 0x8],0x0       ; 00503c62
    PUSH EBX                            ; 00503c69
    MOV EDX,dword ptr [EAX + 0x8]       ; 00503c6a
    MOV dword ptr [EAX + 0x4],EDX       ; 00503c6d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00503c70
    MOV dword ptr [EAX],EDX             ; 00503c73
    CALL core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_00504cb0 ; 00503c75
        ;   XREF to: 00504cb0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_00504cb0(CMansionPuzzleCircle * this_ptr)
    ADD ESP,0x4                         ; 00503c7a
    MOV EAX,EBX                         ; 00503c7d
    POP EBX                             ; 00503c7f
    RET                                 ; 00503c80

