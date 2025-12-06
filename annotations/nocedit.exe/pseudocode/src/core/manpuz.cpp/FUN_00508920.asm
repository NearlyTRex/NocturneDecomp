; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMansionPuzzleCircle * core_manpuz.cpp_FUN_00508920(CMansionPuzzleCircle * this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_manpuz.cpp_FUN_005088e0 at 005088fd
;
; Referenced Globals:
;   TerminatedCString s_doorpuzz_kfm_006356a1
;   TerminatedCString s_puzz_rec_kfm_006356ae
;   TerminatedCString s_mirrhack_kfm_006356bb
;   TerminatedCString s_headlite_raw_006356c8
;   undefined4 s_eadlite.raw_006356c9
;   undefined4 s_adlite.raw_006356ca
;   undefined4 s_dlite.raw_006356cb
;   CDemonActor_vtable PTR_core_manpuz.cpp_FUN_00660da4
;   WatcomTypeInfo g_SPanelTypeInfo
;   WatcomTypeInfo g_SGemTypeInfo
;   WatcomTypeInfo g_SReflectorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_manpuz.cpp_FUN_005098f0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508920
        ;   Label: core_manpuz.cpp_FUN_00508920
    MOV EBX,dword ptr [ESP + 0x8]       ; 00508921
    PUSH EDI                            ; 00508925
    PUSH ESI                            ; 00508926
    PUSH EBX                            ; 00508927
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00508928 | CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050892d
    ADD EAX,0x158                       ; 00508930
    PUSH EAX                            ; 00508935
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00508936 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050893b
    ADD EAX,0x17c                       ; 0050893e
    PUSH EAX                            ; 00508943
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00508944 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00508949
    ADD EAX,0x17c                       ; 0050894c
    PUSH EAX                            ; 00508951
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00508952 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00508957
    PUSH 0x660f80                       ; 0050895a | WatcomTypeInfo g_SPanelTypeInfo
    PUSH 0xc                            ; 0050895f
    ADD EAX,0x1a0                       ; 00508961
    PUSH EAX                            ; 00508966
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00508967 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050896c
    PUSH 0x660fa0                       ; 0050896f | WatcomTypeInfo g_SGemTypeInfo
    PUSH 0xc                            ; 00508974
    ADD EAX,0x4b0                       ; 00508976
    PUSH EAX                            ; 0050897b
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0050897c | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00508981
    PUSH 0x660fc0                       ; 00508984 | WatcomTypeInfo g_SReflectorTypeInfo
    PUSH 0x2                            ; 00508989
    ADD EAX,0x8a0                       ; 0050898b
    PUSH EAX                            ; 00508990
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00508991 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00508996
    LEA EBX,[EAX + 0xffffecc0]          ; 00508999
    PUSH 0x6356a1                       ; 0050899f | = "doorpuzz.kfm" | s_doorpuzz_kfm_006356a1 = doorpuzz.kfm
    LEA EAX,[EBX + 0x158]               ; 005089a4
    PUSH EAX                            ; 005089aa
    MOV dword ptr [EBX + 0x154],0x660da4 ; 005089ab | CDemonActor_vtable PTR_core_manpuz.cpp_FUN_00660da4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005089b5 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005089ba
    PUSH 0x6356ae                       ; 005089bd | = "puzz-rec.kfm" | s_puzz_rec_kfm_006356ae = puzz-rec.kfm
    LEA EAX,[EBX + 0x2d4]               ; 005089c2
    PUSH EAX                            ; 005089c8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005089c9 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005089ce
    PUSH 0x6356bb                       ; 005089d1 | = "mirrhack.kfm" | s_mirrhack_kfm_006356bb = mirrhack.kfm
    LEA EAX,[EBX + 0x450]               ; 005089d6
    PUSH EAX                            ; 005089dc
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005089dd | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005089e2
    MOV ESI,0x6356c8                    ; 005089e5 | = "headlite.raw" | s_headlite_raw_006356c8 = headlite.raw
    LEA EDI,[EBX + 0x14c8]              ; 005089ea
    PUSH EDI                            ; 005089f0
    MOV AL,byte ptr [ESI]               ; 005089f1 | = "headlite.raw" | s_headlite_raw_006356c8 = headlite.raw
        ;   Label: LAB_005089f1
    MOV byte ptr [EDI],AL               ; 005089f3
    CMP AL,0x0                          ; 005089f5
    JZ 0x00508a09                       ; 005089f7 | LAB_00508a09
        ;   XREF to: 00508a09 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005089f9 | s_eadlite.raw_006356c9
    ADD ESI,0x2                         ; 005089fc
    MOV byte ptr [EDI + 0x1],AL         ; 005089ff
    ADD EDI,0x2                         ; 00508a02
    CMP AL,0x0                          ; 00508a05
    JNZ 0x005089f1                      ; 00508a07 | LAB_005089f1
        ;   XREF to: 005089f1 (CONDITIONAL_JUMP)
    POP EDI                             ; 00508a09
        ;   Label: LAB_00508a09
    POP ESI                             ; 00508a0a
    POP EDI                             ; 00508a0b
    LEA EAX,[EBX + 0x5cc]               ; 00508a0c
    MOV dword ptr [EAX + 0x8],0x0       ; 00508a12
    MOV EDX,dword ptr [EAX + 0x8]       ; 00508a19
    MOV dword ptr [EAX + 0x4],EDX       ; 00508a1c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00508a1f
    MOV dword ptr [EAX],EDX             ; 00508a22
    LEA EAX,[EBX + 0x5d8]               ; 00508a24
    MOV dword ptr [EAX + 0x8],0x0       ; 00508a2a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00508a31
    MOV dword ptr [EAX + 0x4],EDX       ; 00508a34
    MOV EDX,dword ptr [EAX + 0x4]       ; 00508a37
    MOV dword ptr [EAX],EDX             ; 00508a3a
    LEA EAX,[EBX + 0x5e4]               ; 00508a3c
    MOV dword ptr [EAX + 0x8],0x0       ; 00508a42
    PUSH EBX                            ; 00508a49
    MOV EDX,dword ptr [EAX + 0x8]       ; 00508a4a
    MOV dword ptr [EAX + 0x4],EDX       ; 00508a4d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00508a50
    MOV dword ptr [EAX],EDX             ; 00508a53
    CALL core_manpuz.cpp_FUN_005098f0   ; 00508a55 | undefined core_manpuz.cpp_FUN_005098f0()
        ;   XREF to: 005098f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00508a5a
    MOV EAX,EBX                         ; 00508a5d
    POP EBX                             ; 00508a5f
    RET                                 ; 00508a60

