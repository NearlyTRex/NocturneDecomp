; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_0041ef50(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bugs.cpp_factoryFuncBugs_FUN_0041ef20 at 0041ef33
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ef50
        ;   Label: core_bugs.cpp_CBugs_ctor_FUN_0041ef50
    PUSH ESI                            ; 0041ef51
    PUSH EDI                            ; 0041ef52
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041ef53
    PUSH EBX                            ; 0041ef57
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 0041ef58
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041ef5d
    PUSH 0x5f3fa0                       ; 0041ef60
    PUSH 0x190                          ; 0041ef65
    ADD EAX,0x10b00                     ; 0041ef6a
    PUSH EAX                            ; 0041ef6f
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0041ef70
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041ef75
    PUSH 0x5f3fc0                       ; 0041ef78
    PUSH 0x4                            ; 0041ef7d
    ADD EAX,0x6404                      ; 0041ef7f
    PUSH EAX                            ; 0041ef84
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0041ef85
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041ef8a
    LEA EBX,[EAX + 0xfffe90fc]          ; 0041ef8d
    PUSH 0x6400                         ; 0041ef93
    MOV dword ptr [EBX + 0x2b0],0x5f3e44 ; 0041ef98
    PUSH 0x0                            ; 0041efa2
    LEA EAX,[EBX + 0x10b00]             ; 0041efa4
    MOV dword ptr [EBX + 0x10af8],0x0   ; 0041efaa
    PUSH EAX                            ; 0041efb4
    MOV dword ptr [EBX + 0x10afc],0x32  ; 0041efb5
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0041efbf
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0041efc4
    PUSH 0x5cc90d                       ; 0041efc7
    LEA EAX,[EBX + 0x16f04]             ; 0041efcc
    PUSH EAX                            ; 0041efd2
    MOV dword ptr [EBX + 0x16f00],0x3   ; 0041efd3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0041efdd
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041efe2
    PUSH 0x5cc917                       ; 0041efe5
    LEA EAX,[EBX + 0x17080]             ; 0041efea
    PUSH EAX                            ; 0041eff0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0041eff1
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041eff6
    PUSH 0x5cc922                       ; 0041eff9
    LEA EAX,[EBX + 0x171fc]             ; 0041effe
    PUSH EAX                            ; 0041f004
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0041f005
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041f00a
    PUSH 0x5cc92d                       ; 0041f00d
    LEA EAX,[EBX + 0x2b4]               ; 0041f012
    PUSH EAX                            ; 0041f018
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0041f019
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x17734],0x0   ; 0041f01e
    MOV ESI,0x5cc936                    ; 0041f028
    MOV dword ptr [EBX + 0x17738],0x0   ; 0041f02d
    ADD ESP,0x8                         ; 0041f037
    MOV dword ptr [EBX + 0x17770],0x0   ; 0041f03a
    LEA EDI,[EBX + 0x1e4dc]             ; 0041f044
    MOV dword ptr [EBX + 0x1e4d4],0x0   ; 0041f04a
    PUSH EDI                            ; 0041f054
    MOV AL,byte ptr [ESI]               ; 0041f055
        ;   Label: LAB_0041f055
    MOV byte ptr [EDI],AL               ; 0041f057
    CMP AL,0x0                          ; 0041f059
    JZ 0x0041f06d                       ; 0041f05b
        ;   XREF to: 0041f06d (CONDITIONAL_JUMP)  ; LAB_0041f06d
    MOV AL,byte ptr [ESI + 0x1]         ; 0041f05d
    ADD ESI,0x2                         ; 0041f060
    MOV byte ptr [EDI + 0x1],AL         ; 0041f063
    ADD EDI,0x2                         ; 0041f066
    CMP AL,0x0                          ; 0041f069
    JNZ 0x0041f055                      ; 0041f06b
        ;   XREF to: 0041f055 (CONDITIONAL_JUMP)  ; LAB_0041f055
    POP EDI                             ; 0041f06d
        ;   Label: LAB_0041f06d
    MOV ESI,0x5cc93b                    ; 0041f06e
    LEA EDI,[EBX + 0x1e540]             ; 0041f073
    MOV dword ptr [EBX + 0x1e4d8],0x0   ; 0041f079
    PUSH EDI                            ; 0041f083
    MOV AL,byte ptr [ESI]               ; 0041f084
        ;   Label: LAB_0041f084
    MOV byte ptr [EDI],AL               ; 0041f086
    CMP AL,0x0                          ; 0041f088
    JZ 0x0041f09c                       ; 0041f08a
        ;   XREF to: 0041f09c (CONDITIONAL_JUMP)  ; LAB_0041f09c
    MOV AL,byte ptr [ESI + 0x1]         ; 0041f08c
    ADD ESI,0x2                         ; 0041f08f
    MOV byte ptr [EDI + 0x1],AL         ; 0041f092
    ADD EDI,0x2                         ; 0041f095
    CMP AL,0x0                          ; 0041f098
    JNZ 0x0041f084                      ; 0041f09a
        ;   XREF to: 0041f084 (CONDITIONAL_JUMP)  ; LAB_0041f084
    POP EDI                             ; 0041f09c
        ;   Label: LAB_0041f09c
    MOV ESI,0x5cc940                    ; 0041f09d
    LEA EDI,[EBX + 0x1e5a4]             ; 0041f0a2
    PUSH EDI                            ; 0041f0a8
    MOV AL,byte ptr [ESI]               ; 0041f0a9
        ;   Label: LAB_0041f0a9
    MOV byte ptr [EDI],AL               ; 0041f0ab
    CMP AL,0x0                          ; 0041f0ad
    JZ 0x0041f0c1                       ; 0041f0af
        ;   XREF to: 0041f0c1 (CONDITIONAL_JUMP)  ; LAB_0041f0c1
    MOV AL,byte ptr [ESI + 0x1]         ; 0041f0b1
    ADD ESI,0x2                         ; 0041f0b4
    MOV byte ptr [EDI + 0x1],AL         ; 0041f0b7
    ADD EDI,0x2                         ; 0041f0ba
    CMP AL,0x0                          ; 0041f0bd
    JNZ 0x0041f0a9                      ; 0041f0bf
        ;   XREF to: 0041f0a9 (CONDITIONAL_JUMP)  ; LAB_0041f0a9
    POP EDI                             ; 0041f0c1
        ;   Label: LAB_0041f0c1
    MOV dword ptr [EBX + 0x3430],0x401f5c29 ; 0041f0c2
    MOV dword ptr [EBX + 0x3434],0x40200000 ; 0041f0cc
    MOV dword ptr [EBX + 0x3440],0x3fa66666 ; 0041f0d6
    MOV EAX,EBX                         ; 0041f0e0
    MOV dword ptr [EBX + 0x3444],0x3fc00000 ; 0041f0e2
    POP EDI                             ; 0041f0ec
    POP ESI                             ; 0041f0ed
    POP EBX                             ; 0041f0ee
    RET                                 ; 0041f0ef

