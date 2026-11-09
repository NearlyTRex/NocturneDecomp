; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBugs * core_bugs_cpp_CBugs_ctor_FUN_00420ea0(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bugs.cpp_factoryFuncBugs_FUN_00420e70 at 00420e83
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_FUN_0054eae0
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420ea0
        ;   Label: core_bugs.cpp_CBugs_ctor_FUN_00420ea0
    PUSH ESI                            ; 00420ea1
    PUSH EDI                            ; 00420ea2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00420ea3
    PUSH EBX                            ; 00420ea7
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 00420ea8
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00420ead
    PUSH 0x5dcd30                       ; 00420eb0
    PUSH 0x190                          ; 00420eb5
    ADD EAX,0xd05c                      ; 00420eba
    PUSH EAX                            ; 00420ebf
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00420ec0
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 00420ec5
    PUSH 0x5dcd50                       ; 00420ec8
    PUSH 0x1                            ; 00420ecd
    ADD EAX,0x6404                      ; 00420ecf
    PUSH EAX                            ; 00420ed4
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00420ed5
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 00420eda
    LEA EBX,[EAX + 0xfffecba0]          ; 00420edd
    PUSH 0x2d                           ; 00420ee3
    MOV dword ptr [EBX + 0x154],0x5dcbe4 ; 00420ee5
    PUSH 0x1e                           ; 00420eef
    MOV dword ptr [EBX + 0xd054],0x0    ; 00420ef1
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00420efb
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00420f00
    PUSH 0x6400                         ; 00420f03
    PUSH 0x0                            ; 00420f08
    MOV dword ptr [EBX + 0xd058],EAX    ; 00420f0a
    LEA EAX,[EBX + 0xd05c]              ; 00420f10
    PUSH EAX                            ; 00420f16
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00420f17
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00420f1c
    PUSH 0x5b7705                       ; 00420f1f
    LEA EAX,[EBX + 0x13460]             ; 00420f24
    PUSH EAX                            ; 00420f2a
    MOV dword ptr [EBX + 0x1345c],0x0   ; 00420f2b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 00420f35
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00420f3a
    PUSH 0x5b7710                       ; 00420f3d
    LEA EAX,[EBX + 0x158]               ; 00420f42
    PUSH EAX                            ; 00420f48
    CALL core_skeleton.cpp_FUN_0054eae0 ; 00420f49
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    MOV dword ptr [EBX + 0x1381c],0x0   ; 00420f4e
    MOV ESI,0x5b7719                    ; 00420f58
    MOV dword ptr [EBX + 0x13820],0x0   ; 00420f5d
    ADD ESP,0x8                         ; 00420f67
    MOV dword ptr [EBX + 0x13858],0x0   ; 00420f6a
    LEA EDI,[EBX + 0x1bd3c]             ; 00420f74
    MOV dword ptr [EBX + 0x1bd2c],0x0   ; 00420f7a
    PUSH EDI                            ; 00420f84
    MOV AL,byte ptr [ESI]               ; 00420f85
        ;   Label: LAB_00420f85
    MOV byte ptr [EDI],AL               ; 00420f87
    CMP AL,0x0                          ; 00420f89
    JZ 0x00420f9d                       ; 00420f8b
        ;   XREF to: 00420f9d (CONDITIONAL_JUMP)  ; LAB_00420f9d
    MOV AL,byte ptr [ESI + 0x1]         ; 00420f8d
    ADD ESI,0x2                         ; 00420f90
    MOV byte ptr [EDI + 0x1],AL         ; 00420f93
    ADD EDI,0x2                         ; 00420f96
    CMP AL,0x0                          ; 00420f99
    JNZ 0x00420f85                      ; 00420f9b
        ;   XREF to: 00420f85 (CONDITIONAL_JUMP)  ; LAB_00420f85
    POP EDI                             ; 00420f9d
        ;   Label: LAB_00420f9d
    MOV ESI,0x5b771e                    ; 00420f9e
    LEA EDI,[EBX + 0x1bda0]             ; 00420fa3
    MOV dword ptr [EBX + 0x1bd30],0x0   ; 00420fa9
    PUSH EDI                            ; 00420fb3
    MOV AL,byte ptr [ESI]               ; 00420fb4
        ;   Label: LAB_00420fb4
    MOV byte ptr [EDI],AL               ; 00420fb6
    CMP AL,0x0                          ; 00420fb8
    JZ 0x00420fcc                       ; 00420fba
        ;   XREF to: 00420fcc (CONDITIONAL_JUMP)  ; LAB_00420fcc
    MOV AL,byte ptr [ESI + 0x1]         ; 00420fbc
    ADD ESI,0x2                         ; 00420fbf
    MOV byte ptr [EDI + 0x1],AL         ; 00420fc2
    ADD EDI,0x2                         ; 00420fc5
    CMP AL,0x0                          ; 00420fc8
    JNZ 0x00420fb4                      ; 00420fca
        ;   XREF to: 00420fb4 (CONDITIONAL_JUMP)  ; LAB_00420fb4
    POP EDI                             ; 00420fcc
        ;   Label: LAB_00420fcc
    MOV ESI,0x5b7723                    ; 00420fcd
    LEA EDI,[EBX + 0x1be04]             ; 00420fd2
    PUSH EDI                            ; 00420fd8
    MOV AL,byte ptr [ESI]               ; 00420fd9
        ;   Label: LAB_00420fd9
    MOV byte ptr [EDI],AL               ; 00420fdb
    CMP AL,0x0                          ; 00420fdd
    JZ 0x00420ff1                       ; 00420fdf
        ;   XREF to: 00420ff1 (CONDITIONAL_JUMP)  ; LAB_00420ff1
    MOV AL,byte ptr [ESI + 0x1]         ; 00420fe1
    ADD ESI,0x2                         ; 00420fe4
    MOV byte ptr [EDI + 0x1],AL         ; 00420fe7
    ADD EDI,0x2                         ; 00420fea
    CMP AL,0x0                          ; 00420fed
    JNZ 0x00420fd9                      ; 00420fef
        ;   XREF to: 00420fd9 (CONDITIONAL_JUMP)  ; LAB_00420fd9
    POP EDI                             ; 00420ff1
        ;   Label: LAB_00420ff1
    MOV dword ptr [EBX + 0x326c],0x401f5c29 ; 00420ff2
    MOV dword ptr [EBX + 0x3270],0x40200000 ; 00420ffc
    MOV dword ptr [EBX + 0x327c],0x3fa66666 ; 00421006
    MOV dword ptr [EBX + 0x3280],0x3fc00000 ; 00421010
    MOV dword ptr [EBX + 0x1be94],0x0   ; 0042101a
    MOV dword ptr [EBX + 0x1bd34],0x0   ; 00421024
    MOV dword ptr [EBX + 0x1bd38],0x41f00000 ; 0042102e
    MOV dword ptr [EBX + 0x1be9c],0x0   ; 00421038
    MOV EAX,EBX                         ; 00421042
    MOV dword ptr [EBX + 0x1bea0],0x0   ; 00421044
    POP EDI                             ; 0042104e
    POP ESI                             ; 0042104f
    POP EBX                             ; 00421050
    RET                                 ; 00421051

