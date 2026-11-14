; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVehicle * __cdecl core_vehicle_cpp_CVehicle_ctor_FUN_005a7620(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vehicle.cpp_factoryFuncVehicle_FUN_005a75f0 at 005a7603
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_course.cpp_CCourse_ctor_FUN_00447d10
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7620
        ;   Label: core_vehicle.cpp_CVehicle_ctor_FUN_005a7620
    PUSH ESI                            ; 005a7621
    PUSH EDI                            ; 005a7622
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a7623
    PUSH EBX                            ; 005a7627
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 005a7628
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a762d
    ADD EAX,0x158                       ; 005a7630
    PUSH EAX                            ; 005a7635
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 005a7636
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a763b
    PUSH 0x5fd3b0                       ; 005a763e
    PUSH 0x4                            ; 005a7643
    ADD EAX,0x17c                       ; 005a7645
    PUSH EAX                            ; 005a764a
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005a764b
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005a7650
    PUSH 0x607a40                       ; 005a7653
    PUSH 0x4                            ; 005a7658
    ADD EAX,0x668                       ; 005a765a
    PUSH EAX                            ; 005a765f
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005a7660
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005a7665
    ADD EAX,0x6e4                       ; 005a7668
    PUSH EAX                            ; 005a766d
    CALL core_course.cpp_CCourse_ctor_FUN_00447d10 ; 005a766e
        ;   XREF to: 00447d10 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_00447d10(CCourse * this_ptr)
    ADD ESP,0x4                         ; 005a7673
    LEA EBX,[EAX + 0xffffefe0]          ; 005a7676
    PUSH 0x5f8f84                       ; 005a767c
    LEA EAX,[EBX + 0x158]               ; 005a7681
    PUSH EAX                            ; 005a7687
    MOV dword ptr [EBX + 0x154],0x607964 ; 005a7688
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 005a7692
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a7697
    PUSH 0x5f8f8f                       ; 005a769a
    LEA EAX,[EBX + 0x950]               ; 005a769f
    PUSH EAX                            ; 005a76a5
    MOV dword ptr [EBX + 0x938],0x4     ; 005a76a6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 005a76b0
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a76b5
    PUSH 0x5f8f9b                       ; 005a76b8
    LEA EAX,[EBX + 0xcb8]               ; 005a76bd
    PUSH EAX                            ; 005a76c3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 005a76c4
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a76c9
    PUSH 0x5f8fa7                       ; 005a76cc
    LEA EAX,[EBX + 0xb04]               ; 005a76d1
    PUSH EAX                            ; 005a76d7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 005a76d8
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a76dd
    PUSH 0x5f8fb3                       ; 005a76e0
    LEA EAX,[EBX + 0xe6c]               ; 005a76e5
    PUSH EAX                            ; 005a76eb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 005a76ec
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x93c],0xc0200000 ; 005a76f1
    MOV dword ptr [EBX + 0x940],0xc0200000 ; 005a76fb
    MOV dword ptr [EBX + 0x944],0x40a00000 ; 005a7705
    ADD ESP,0x8                         ; 005a770f
    MOV dword ptr [EBX + 0x948],0x3fa00000 ; 005a7712
    MOV dword ptr [EBX + 0x94c],0x3e800000 ; 005a771c
    MOV dword ptr [EBX + 0xaf0],0x40200000 ; 005a7726
    MOV dword ptr [EBX + 0xaf4],0xc0200000 ; 005a7730
    MOV dword ptr [EBX + 0xaf8],0x40a00000 ; 005a773a
    MOV dword ptr [EBX + 0xafc],0x3fa00000 ; 005a7744
    MOV dword ptr [EBX + 0xb00],0x3e800000 ; 005a774e
    MOV dword ptr [EBX + 0xca4],0xc0200000 ; 005a7758
    MOV dword ptr [EBX + 0xca8],0xc0200000 ; 005a7762
    MOV dword ptr [EBX + 0xcac],0xc0900000 ; 005a776c
    MOV dword ptr [EBX + 0xcb0],0x3fa00000 ; 005a7776
    MOV dword ptr [EBX + 0xcb4],0x3e800000 ; 005a7780
    MOV dword ptr [EBX + 0xe58],0x40200000 ; 005a778a
    MOV dword ptr [EBX + 0xe5c],0xc0200000 ; 005a7794
    MOV dword ptr [EBX + 0xe60],0xc0900000 ; 005a779e
    MOV dword ptr [EBX + 0xe64],0x3fa00000 ; 005a77a8
    MOV dword ptr [EBX + 0xe68],0x3e800000 ; 005a77b2
    LEA EAX,[EBX + 0x8d0]               ; 005a77bc
    MOV dword ptr [EBX + 0x918],0x44fa0000 ; 005a77c2
    MOV dword ptr [EAX + 0x8],0x0       ; 005a77cc
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a77d3
    MOV dword ptr [EAX + 0x4],EDX       ; 005a77d6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a77d9
    MOV dword ptr [EAX],EDX             ; 005a77dc
    LEA EAX,[EBX + 0x8c4]               ; 005a77de
    MOV dword ptr [EAX + 0x8],0x0       ; 005a77e4
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a77eb
    MOV dword ptr [EAX + 0x4],EDX       ; 005a77ee
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a77f1
    MOV dword ptr [EAX],EDX             ; 005a77f4
    LEA EAX,[EBX + 0x8f4]               ; 005a77f6
    MOV dword ptr [EAX + 0x8],0x0       ; 005a77fc
    MOV ESI,0x5f8fbf                    ; 005a7803
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a7808
    MOV dword ptr [EAX + 0x4],EDX       ; 005a780b
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a780e
    MOV dword ptr [EAX],EDX             ; 005a7811
    MOV dword ptr [EBX + 0x102c],0x0    ; 005a7813
    LEA EDI,[EBX + 0x1034]              ; 005a781d
    MOV dword ptr [EBX + 0x1030],0x42c80000 ; 005a7823
    PUSH EDI                            ; 005a782d
    MOV AL,byte ptr [ESI]               ; 005a782e
        ;   Label: LAB_005a782e
    MOV byte ptr [EDI],AL               ; 005a7830
    CMP AL,0x0                          ; 005a7832
    JZ 0x005a7846                       ; 005a7834
        ;   XREF to: 005a7846 (CONDITIONAL_JUMP)  ; LAB_005a7846
    MOV AL,byte ptr [ESI + 0x1]         ; 005a7836
    ADD ESI,0x2                         ; 005a7839
    MOV byte ptr [EDI + 0x1],AL         ; 005a783c
    ADD EDI,0x2                         ; 005a783f
    CMP AL,0x0                          ; 005a7842
    JNZ 0x005a782e                      ; 005a7844
        ;   XREF to: 005a782e (CONDITIONAL_JUMP)  ; LAB_005a782e
    POP EDI                             ; 005a7846
        ;   Label: LAB_005a7846
    MOV dword ptr [EBX + 0x106c],0x0    ; 005a7847
    MOV dword ptr [EBX + 0x1070],0x0    ; 005a7851
    MOV EAX,EBX                         ; 005a785b
    MOV dword ptr [EBX + 0x1074],0x0    ; 005a785d
    POP EDI                             ; 005a7867
    POP ESI                             ; 005a7868
    POP EBX                             ; 005a7869
    RET                                 ; 005a786a

