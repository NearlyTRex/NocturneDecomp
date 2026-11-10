; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00424f80(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bugs.cpp_factoryFuncBugs_FUN_00424f50 at 00424f63
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424f80
        ;   Label: core_bugs.cpp_CBugs_ctor_FUN_00424f80
    PUSH ESI                            ; 00424f81
    PUSH EDI                            ; 00424f82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00424f83
    PUSH EBX                            ; 00424f87
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 00424f88
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00424f8d
    PUSH 0x5fd390                       ; 00424f90
    PUSH 0x190                          ; 00424f95
    ADD EAX,0xc270                      ; 00424f9a
    PUSH EAX                            ; 00424f9f
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00424fa0
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 00424fa5
    PUSH 0x5fd3b0                       ; 00424fa8
    PUSH 0x4                            ; 00424fad
    ADD EAX,0x6404                      ; 00424faf
    PUSH EAX                            ; 00424fb4
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00424fb5
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 00424fba
    LEA EBX,[EAX + 0xfffed98c]          ; 00424fbd
    PUSH 0x6400                         ; 00424fc3
    MOV dword ptr [EBX + 0x154],0x5fd244 ; 00424fc8
    PUSH 0x0                            ; 00424fd2
    LEA EAX,[EBX + 0xc270]              ; 00424fd4
    MOV dword ptr [EBX + 0xc268],0x0    ; 00424fda
    PUSH EAX                            ; 00424fe4
    MOV dword ptr [EBX + 0xc26c],0x32   ; 00424fe5
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00424fef
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00424ff4
    PUSH 0x5d4ffc                       ; 00424ff7
    LEA EAX,[EBX + 0x12674]             ; 00424ffc
    PUSH EAX                            ; 00425002
    MOV dword ptr [EBX + 0x12670],0x3   ; 00425003
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0042500d
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00425012
    PUSH 0x5d5006                       ; 00425015
    LEA EAX,[EBX + 0x127f0]             ; 0042501a
    PUSH EAX                            ; 00425020
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00425021
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00425026
    PUSH 0x5d5011                       ; 00425029
    LEA EAX,[EBX + 0x1296c]             ; 0042502e
    PUSH EAX                            ; 00425034
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00425035
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0042503a
    PUSH 0x5d501c                       ; 0042503d
    LEA EAX,[EBX + 0x158]               ; 00425042
    PUSH EAX                            ; 00425048
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00425049
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x12ea4],0x0   ; 0042504e
    MOV ESI,0x5d5025                    ; 00425058
    MOV dword ptr [EBX + 0x12ea8],0x0   ; 0042505d
    ADD ESP,0x8                         ; 00425067
    MOV dword ptr [EBX + 0x12ee0],0x0   ; 0042506a
    LEA EDI,[EBX + 0x19c4c]             ; 00425074
    MOV dword ptr [EBX + 0x19c44],0x0   ; 0042507a
    PUSH EDI                            ; 00425084
    MOV AL,byte ptr [ESI]               ; 00425085
        ;   Label: LAB_00425085
    MOV byte ptr [EDI],AL               ; 00425087
    CMP AL,0x0                          ; 00425089
    JZ 0x0042509d                       ; 0042508b
        ;   XREF to: 0042509d (CONDITIONAL_JUMP)  ; LAB_0042509d
    MOV AL,byte ptr [ESI + 0x1]         ; 0042508d
    ADD ESI,0x2                         ; 00425090
    MOV byte ptr [EDI + 0x1],AL         ; 00425093
    ADD EDI,0x2                         ; 00425096
    CMP AL,0x0                          ; 00425099
    JNZ 0x00425085                      ; 0042509b
        ;   XREF to: 00425085 (CONDITIONAL_JUMP)  ; LAB_00425085
    POP EDI                             ; 0042509d
        ;   Label: LAB_0042509d
    MOV ESI,0x5d502a                    ; 0042509e
    LEA EDI,[EBX + 0x19cb0]             ; 004250a3
    MOV dword ptr [EBX + 0x19c48],0x0   ; 004250a9
    PUSH EDI                            ; 004250b3
    MOV AL,byte ptr [ESI]               ; 004250b4
        ;   Label: LAB_004250b4
    MOV byte ptr [EDI],AL               ; 004250b6
    CMP AL,0x0                          ; 004250b8
    JZ 0x004250cc                       ; 004250ba
        ;   XREF to: 004250cc (CONDITIONAL_JUMP)  ; LAB_004250cc
    MOV AL,byte ptr [ESI + 0x1]         ; 004250bc
    ADD ESI,0x2                         ; 004250bf
    MOV byte ptr [EDI + 0x1],AL         ; 004250c2
    ADD EDI,0x2                         ; 004250c5
    CMP AL,0x0                          ; 004250c8
    JNZ 0x004250b4                      ; 004250ca
        ;   XREF to: 004250b4 (CONDITIONAL_JUMP)  ; LAB_004250b4
    POP EDI                             ; 004250cc
        ;   Label: LAB_004250cc
    MOV ESI,0x5d502f                    ; 004250cd
    LEA EDI,[EBX + 0x19d14]             ; 004250d2
    PUSH EDI                            ; 004250d8
    MOV AL,byte ptr [ESI]               ; 004250d9
        ;   Label: LAB_004250d9
    MOV byte ptr [EDI],AL               ; 004250db
    CMP AL,0x0                          ; 004250dd
    JZ 0x004250f1                       ; 004250df
        ;   XREF to: 004250f1 (CONDITIONAL_JUMP)  ; LAB_004250f1
    MOV AL,byte ptr [ESI + 0x1]         ; 004250e1
    ADD ESI,0x2                         ; 004250e4
    MOV byte ptr [EDI + 0x1],AL         ; 004250e7
    ADD EDI,0x2                         ; 004250ea
    CMP AL,0x0                          ; 004250ed
    JNZ 0x004250d9                      ; 004250ef
        ;   XREF to: 004250d9 (CONDITIONAL_JUMP)  ; LAB_004250d9
    POP EDI                             ; 004250f1
        ;   Label: LAB_004250f1
    MOV dword ptr [EBX + 0x2fec],0x401f5c29 ; 004250f2
    MOV dword ptr [EBX + 0x2ff0],0x40200000 ; 004250fc
    MOV dword ptr [EBX + 0x2ffc],0x3fa66666 ; 00425106
    MOV EAX,EBX                         ; 00425110
    MOV dword ptr [EBX + 0x3000],0x3fc00000 ; 00425112
    POP EDI                             ; 0042511c
    POP ESI                             ; 0042511d
    POP EBX                             ; 0042511e
    RET                                 ; 0042511f

