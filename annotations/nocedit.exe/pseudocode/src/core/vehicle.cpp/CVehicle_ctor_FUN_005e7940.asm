; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVehicle * __cdecl core_vehicle_cpp_CVehicle_ctor_FUN_005e7940(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vehicle.cpp_factoryFuncVehicle_FUN_005e7900 at 005e791a
;
; Referenced Globals:
;   TerminatedCString s_s_32ford_kfm_00656dcb
;   TerminatedCString s_s_32ltire_kfm_00656dd6
;   TerminatedCString s_s_32ltire_kfm_00656de2
;   TerminatedCString s_s_32rtire_kfm_00656dee
;   TerminatedCString s_s_32rtire_kfm_00656dfa
;   TerminatedCString s_chicpath_pth_00656e06
;   undefined4 s_hicpath.pth_00656e07
;   undefined4 s_icpath.pth_00656e08
;   undefined4 s_cpath.pth_00656e09
;   WatcomTypeInfo g_CKeyFramedModelInstanceTypeInfo
;   CDemonActor_vtable g_CVehicleVTable
;   WatcomTypeInfo g_CTireTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_course.cpp_CCourse_ctor_FUN_004424c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7940
        ;   Label: core_vehicle.cpp_CVehicle_ctor_FUN_005e7940
    PUSH ESI                            ; 005e7941
    PUSH EDI                            ; 005e7942
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e7943
    PUSH EBX                            ; 005e7947
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005e7948
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e794d
    ADD EAX,0x158                       ; 005e7950
    PUSH EAX                            ; 005e7955
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005e7956
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e795b
    PUSH 0x65b770                       ; 005e795e | g_CKeyFramedModelInstanceTypeInfo
    PUSH 0x4                            ; 005e7963
    ADD EAX,0x17c                       ; 005e7965
    PUSH EAX                            ; 005e796a
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005e796b
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005e7970
    PUSH 0x665150                       ; 005e7973 | g_CTireTypeInfo
    PUSH 0x4                            ; 005e7978
    ADD EAX,0x668                       ; 005e797a
    PUSH EAX                            ; 005e797f
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005e7980
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005e7985
    ADD EAX,0x6e4                       ; 005e7988
    PUSH EAX                            ; 005e798d
    CALL core_course.cpp_CCourse_ctor_FUN_004424c0 ; 005e798e
        ;   XREF to: 004424c0 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_004424c0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 005e7993
    LEA EBX,[EAX + 0xffffefe0]          ; 005e7996
    PUSH 0x656dcb                       ; 005e799c | = "32ford.kfm"
    LEA EAX,[EBX + 0x158]               ; 005e79a1
    PUSH EAX                            ; 005e79a7
    MOV dword ptr [EBX + 0x154],0x665064 ; 005e79a8 | g_CVehicleVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005e79b2
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005e79b7
    PUSH 0x656dd6                       ; 005e79ba | = "32ltire.kfm"
    LEA EAX,[EBX + 0x950]               ; 005e79bf
    PUSH EAX                            ; 005e79c5
    MOV dword ptr [EBX + 0x938],0x4     ; 005e79c6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005e79d0
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005e79d5
    PUSH 0x656de2                       ; 005e79d8 | = "32ltire.kfm"
    LEA EAX,[EBX + 0xcb8]               ; 005e79dd
    PUSH EAX                            ; 005e79e3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005e79e4
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005e79e9
    PUSH 0x656dee                       ; 005e79ec | = "32rtire.kfm"
    LEA EAX,[EBX + 0xb04]               ; 005e79f1
    PUSH EAX                            ; 005e79f7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005e79f8
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005e79fd
    PUSH 0x656dfa                       ; 005e7a00 | = "32rtire.kfm"
    LEA EAX,[EBX + 0xe6c]               ; 005e7a05
    PUSH EAX                            ; 005e7a0b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005e7a0c
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x93c],0xc0200000 ; 005e7a11
    MOV dword ptr [EBX + 0x940],0xc0200000 ; 005e7a1b
    MOV dword ptr [EBX + 0x944],0x40a00000 ; 005e7a25
    ADD ESP,0x8                         ; 005e7a2f
    MOV dword ptr [EBX + 0x948],0x3fa00000 ; 005e7a32
    MOV dword ptr [EBX + 0x94c],0x3e800000 ; 005e7a3c
    MOV dword ptr [EBX + 0xaf0],0x40200000 ; 005e7a46
    MOV dword ptr [EBX + 0xaf4],0xc0200000 ; 005e7a50
    MOV dword ptr [EBX + 0xaf8],0x40a00000 ; 005e7a5a
    MOV dword ptr [EBX + 0xafc],0x3fa00000 ; 005e7a64
    MOV dword ptr [EBX + 0xb00],0x3e800000 ; 005e7a6e
    MOV dword ptr [EBX + 0xca4],0xc0200000 ; 005e7a78
    MOV dword ptr [EBX + 0xca8],0xc0200000 ; 005e7a82
    MOV dword ptr [EBX + 0xcac],0xc0900000 ; 005e7a8c
    MOV dword ptr [EBX + 0xcb0],0x3fa00000 ; 005e7a96
    MOV dword ptr [EBX + 0xcb4],0x3e800000 ; 005e7aa0
    MOV dword ptr [EBX + 0xe58],0x40200000 ; 005e7aaa
    MOV dword ptr [EBX + 0xe5c],0xc0200000 ; 005e7ab4
    MOV dword ptr [EBX + 0xe60],0xc0900000 ; 005e7abe
    MOV dword ptr [EBX + 0xe64],0x3fa00000 ; 005e7ac8
    MOV dword ptr [EBX + 0xe68],0x3e800000 ; 005e7ad2
    LEA EAX,[EBX + 0x8d0]               ; 005e7adc
    MOV dword ptr [EBX + 0x918],0x44fa0000 ; 005e7ae2
    MOV dword ptr [EAX + 0x8],0x0       ; 005e7aec
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e7af3
    MOV dword ptr [EAX + 0x4],EDX       ; 005e7af6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e7af9
    MOV dword ptr [EAX],EDX             ; 005e7afc
    LEA EAX,[EBX + 0x8c4]               ; 005e7afe
    MOV dword ptr [EAX + 0x8],0x0       ; 005e7b04
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e7b0b
    MOV dword ptr [EAX + 0x4],EDX       ; 005e7b0e
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e7b11
    MOV dword ptr [EAX],EDX             ; 005e7b14
    LEA EAX,[EBX + 0x8f4]               ; 005e7b16
    MOV dword ptr [EAX + 0x8],0x0       ; 005e7b1c
    MOV ESI,0x656e06                    ; 005e7b23 | = "chicpath.pth"
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e7b28
    MOV dword ptr [EAX + 0x4],EDX       ; 005e7b2b
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e7b2e
    MOV dword ptr [EAX],EDX             ; 005e7b31
    MOV dword ptr [EBX + 0x102c],0x0    ; 005e7b33
    LEA EDI,[EBX + 0x1034]              ; 005e7b3d
    MOV dword ptr [EBX + 0x1030],0x42c80000 ; 005e7b43
    PUSH EDI                            ; 005e7b4d
    MOV AL,byte ptr [ESI]               ; 005e7b4e | = "chicpath.pth" | s_icpath.pth_00656e08
        ;   Label: LAB_005e7b4e
    MOV byte ptr [EDI],AL               ; 005e7b50
    CMP AL,0x0                          ; 005e7b52
    JZ 0x005e7b66                       ; 005e7b54
        ;   XREF to: 005e7b66 (CONDITIONAL_JUMP)  ; LAB_005e7b66
    MOV AL,byte ptr [ESI + 0x1]         ; 005e7b56 | s_hicpath.pth_00656e07 | s_cpath.pth_00656e09
    ADD ESI,0x2                         ; 005e7b59
    MOV byte ptr [EDI + 0x1],AL         ; 005e7b5c
    ADD EDI,0x2                         ; 005e7b5f
    CMP AL,0x0                          ; 005e7b62
    JNZ 0x005e7b4e                      ; 005e7b64
        ;   XREF to: 005e7b4e (CONDITIONAL_JUMP)  ; LAB_005e7b4e
    POP EDI                             ; 005e7b66
        ;   Label: LAB_005e7b66
    MOV dword ptr [EBX + 0x106c],0x0    ; 005e7b67
    MOV dword ptr [EBX + 0x1070],0x0    ; 005e7b71
    MOV EAX,EBX                         ; 005e7b7b
    MOV dword ptr [EBX + 0x1074],0x0    ; 005e7b7d
    POP EDI                             ; 005e7b87
    POP ESI                             ; 005e7b88
    POP EBX                             ; 005e7b89
    RET                                 ; 005e7b8a

