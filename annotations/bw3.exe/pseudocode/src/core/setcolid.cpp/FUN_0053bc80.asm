; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_setcolid_cpp_FUN_0053bc80(CDemonSet *param_1,CVector3f *param_2,float param_3,undefined4 param_4,float param_5,undefined4 param_6,CBoundingBox3D *param_7)
;
; Local Variables:
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408a40 at 00408a8c
;   core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c990 at 0040ca21
;   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c8e0 at 0040c950
;   core_fire.cpp_CRing_activate_FUN_0049fce0 at 0049fd16
;   core_fire.cpp_FUN_0049d590 at 0049d5e6
;   core_gore.cpp_CBloodPool_init_FUN_004cdff0 at 004ce01b
;   core_prye.cpp_FUN_00521880 at 00521daf
;   core_trash.cpp_CTrash_process_FUN_0056d360 at 0056dabd
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005d0a2e
;   TerminatedCString s_info_keyFramedModelInsta_005d0a43
;   TerminatedCString s_core_setcolid_cpp_005d0a8f
;   TerminatedCString s_Invalid_collision_type_005d0aa4
;   undefined4 DAT_005d0abe
;   undefined4 DAT_005d0ac2
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   CDemonRaytrace g_CDemonRaytraceInstance
;   undefined4 g_CSpikeClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_FUN_00408f00
;   core_box.cpp_FUN_0041d8b0
;   core_box.cpp_FUN_0041e910
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00461ef0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00474b90
;   core_dtrace.cpp_FUN_00474940
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50
;   core_dtri.cpp_FUN_004795c0
;   core_main.c_FUN_004e4330
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_0053d770
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bc80
        ;   Label: core_setcolid.cpp_FUN_0053bc80
    PUSH ESI                            ; 0053bc81
    PUSH EDI                            ; 0053bc82
    PUSH EBP                            ; 0053bc83
    SUB ESP,0x3a8                       ; 0053bc84
    MOV EBX,dword ptr [ESP + 0x3c0]     ; 0053bc8a
    FLD float ptr [ESP + 0x3c4]         ; 0053bc91
    MOV ESI,dword ptr [ESP + 0x3bc]     ; 0053bc98
    MOV EBP,dword ptr [ESP + 0x3bc]     ; 0053bc9f
    FLDZ                                ; 0053bca6
    ADD ESI,0x14d134                    ; 0053bca8
    ADD EBP,0x14d128                    ; 0053bcae
    FCOMPP                              ; 0053bcb4
    FNSTSW AX                           ; 0053bcb6
    SAHF                                ; 0053bcb8
    JC 0x0053bf29                       ; 0053bcb9
        ;   XREF to: 0053bf29 (CONDITIONAL_JUMP)  ; LAB_0053bf29
    PUSH EBP                            ; 0053bcbf
    PUSH ESI                            ; 0053bcc0
    PUSH EBX                            ; 0053bcc1
    PUSH 0x203b37c                      ; 0053bcc2 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_FUN_00474940   ; 0053bcc7
        ;   XREF to: 00474940 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00474940()
    MOV dword ptr [ESP + 0x3b4],EAX     ; 0053bccc
    FLD float ptr [ESP + 0x3b4]         ; 0053bcd3
    ADD ESP,0x10                        ; 0053bcda
    FSTP float ptr [ESP + 0x388]        ; 0053bcdd
        ;   Label: LAB_0053bcdd
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0053bce4
    CMP dword ptr [EAX + 0x14d134],0x0  ; 0053bceb
    JNZ 0x0053bd07                      ; 0053bcf2
        ;   XREF to: 0053bd07 (CONDITIONAL_JUMP)  ; LAB_0053bd07
    MOV ESI,dword ptr [ESP + 0x3bc]     ; 0053bcf4
    MOV EAX,dword ptr [EAX + 0x15f694]  ; 0053bcfb
    MOV dword ptr [ESI + 0x14d134],EAX  ; 0053bd01
    LEA EAX,[ESP + 0x2c8]               ; 0053bd07
        ;   Label: LAB_0053bd07
    CMP EAX,EBX                         ; 0053bd0e
    JZ 0x0053bd2f                       ; 0053bd10
        ;   XREF to: 0053bd2f (CONDITIONAL_JUMP)  ; LAB_0053bd2f
    MOV EAX,dword ptr [EBX]             ; 0053bd12
    MOV dword ptr [ESP + 0x2c8],EAX     ; 0053bd14
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053bd1b
    MOV dword ptr [ESP + 0x2cc],EAX     ; 0053bd1e
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053bd25
    MOV dword ptr [ESP + 0x2d0],EAX     ; 0053bd28
    FLD float ptr [ESP + 0x2cc]         ; 0053bd2f
        ;   Label: LAB_0053bd2f
    FADD float ptr [0x005d0abe]         ; 0053bd36 | DAT_005d0abe
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0053bd3c
    FSTP float ptr [ESP + 0x2cc]        ; 0053bd43
    MOV dword ptr [EAX + 0x14d144],0x0  ; 0053bd4a
    MOV dword ptr [EAX + 0x14d148],0xffffffff ; 0053bd54
    MOV ECX,dword ptr [EAX + 0x15f6ac]  ; 0053bd5e
    MOV dword ptr [EAX + 0x14d14c],0xffffffff ; 0053bd64
    TEST ECX,ECX                        ; 0053bd6e
    JL 0x0053bf17                       ; 0053bd70
        ;   XREF to: 0053bf17 (CONDITIONAL_JUMP)  ; LAB_0053bf17
    LEA EAX,[ESP + 0x214]               ; 0053bd76
    LEA EBX,[ESP + 0x2c8]               ; 0053bd7d
    CMP EAX,EBX                         ; 0053bd84
    JZ 0x0053bdb2                       ; 0053bd86
        ;   XREF to: 0053bdb2 (CONDITIONAL_JUMP)  ; LAB_0053bdb2
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 0053bd88
    MOV dword ptr [ESP + 0x214],EAX     ; 0053bd8f
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 0053bd96
    MOV dword ptr [ESP + 0x218],EAX     ; 0053bd9d
    MOV EAX,dword ptr [ESP + 0x2d0]     ; 0053bda4
    MOV dword ptr [ESP + 0x21c],EAX     ; 0053bdab
    FLD float ptr [ESP + 0x208]         ; 0053bdb2
        ;   Label: LAB_0053bdb2
    FLD float ptr [ESP + 0x210]         ; 0053bdb9
    FLD float ptr [ESP + 0x214]         ; 0053bdc0
    FLD float ptr [ESP + 0x21c]         ; 0053bdc7
    LEA EAX,[ESP + 0x214]               ; 0053bdce
    LEA EBX,[ESP + 0x208]               ; 0053bdd5
    FXCH ST3                            ; 0053bddc
    FLD float ptr [ESP + 0x3c4]         ; 0053bdde
    FXCH                                ; 0053bde5
    FSUB ST0,ST1                        ; 0053bde7
    FXCH ST3                            ; 0053bde9
    FSUB ST0,ST1                        ; 0053bdeb
    FXCH ST2                            ; 0053bded
    FADD ST0,ST1                        ; 0053bdef
    FXCH ST4                            ; 0053bdf1
    FADDP                               ; 0053bdf3
    FXCH                                ; 0053bdf5
    FSTP float ptr [ESP + 0x210]        ; 0053bdf7
    FXCH ST2                            ; 0053bdfe
    FSTP float ptr [ESP + 0x214]        ; 0053be00
    FXCH                                ; 0053be07
    FSTP float ptr [ESP + 0x21c]        ; 0053be09
    FSTP float ptr [ESP + 0x208]        ; 0053be10
    CMP EBX,EAX                         ; 0053be17
    JZ 0x0053be45                       ; 0053be19
        ;   XREF to: 0053be45 (CONDITIONAL_JUMP)  ; LAB_0053be45
    MOV EAX,dword ptr [ESP + 0x214]     ; 0053be1b
    MOV dword ptr [ESP + 0x208],EAX     ; 0053be22
    MOV EAX,dword ptr [ESP + 0x218]     ; 0053be29
    MOV dword ptr [ESP + 0x20c],EAX     ; 0053be30
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0053be37
    MOV dword ptr [ESP + 0x210],EAX     ; 0053be3e
    FLD float ptr [ESP + 0x20c]         ; 0053be45
        ;   Label: LAB_0053be45
    LEA EAX,[ESP + 0x1b0]               ; 0053be4c
    FADD float ptr [0x005d0ac2]         ; 0053be53 | DAT_005d0ac2
    PUSH EAX                            ; 0053be59
    FSTP float ptr [ESP + 0x210]        ; 0053be5a
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80 ; 0053be61
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0053be66
    XOR EBX,EBX                         ; 0053be69
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0053be6b
    MOV dword ptr [ESP + 0x1b0],EBX     ; 0053be72
    MOV EDI,dword ptr [EAX + 0x156db8]  ; 0053be79
    MOV dword ptr [ESP + 0x394],EBX     ; 0053be7f
    TEST EDI,EDI                        ; 0053be86
    JLE 0x0053bf02                      ; 0053be88
        ;   XREF to: 0053bf02 (CONDITIONAL_JUMP)  ; LAB_0053bf02
    ADD EAX,0x14d128                    ; 0053be8a
    MOV dword ptr [ESP + 0x39c],EAX     ; 0053be8f
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0053be96
    MOV dword ptr [ESP + 0x398],EAX     ; 0053be9d
    MOV EAX,dword ptr [ESP + 0x398]     ; 0053bea4
        ;   Label: LAB_0053bea4
    MOV EAX,dword ptr [EAX + 0x156dbc]  ; 0053beab
    PUSH EAX                            ; 0053beb1
    MOV ESI,dword ptr [ESP + 0x3c0]     ; 0053beb2
    PUSH ESI                            ; 0053beb9
    MOV dword ptr [ESP + 0x3a8],EAX     ; 0053beba
    CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_0053d770 ; 0053bec1
        ;   XREF to: 0053d770 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_0053d770(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053bec6
    TEST EAX,EAX                        ; 0053bec9
    JZ 0x0053bf53                       ; 0053becb
        ;   XREF to: 0053bf53 (CONDITIONAL_JUMP)  ; LAB_0053bf53
    MOV EBP,dword ptr [ESP + 0x398]     ; 0053bed1
        ;   Label: LAB_0053bed1
    MOV EAX,dword ptr [ESP + 0x394]     ; 0053bed8
    MOV EBX,dword ptr [ESP + 0x3bc]     ; 0053bedf
    ADD EBP,0x4                         ; 0053bee6
    INC EAX                             ; 0053bee9
    MOV EDX,dword ptr [EBX + 0x156db8]  ; 0053beea
    MOV dword ptr [ESP + 0x398],EBP     ; 0053bef0
    MOV dword ptr [ESP + 0x394],EAX     ; 0053bef7
    CMP EAX,EDX                         ; 0053befe
    JL 0x0053bea4                       ; 0053bf00
        ;   XREF to: 0053bea4 (CONDITIONAL_JUMP)  ; LAB_0053bea4
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0053bf02
        ;   Label: LAB_0053bf02
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 0053bf09
    TEST ECX,ECX                        ; 0053bf0f
    JNZ 0x0053ca95                      ; 0053bf11
        ;   XREF to: 0053ca95 (CONDITIONAL_JUMP)  ; LAB_0053ca95
    MOV EAX,dword ptr [ESP + 0x388]     ; 0053bf17
        ;   Label: LAB_0053bf17
    ADD ESP,0x3a8                       ; 0053bf1e
    POP EBP                             ; 0053bf24
    POP EDI                             ; 0053bf25
    POP ESI                             ; 0053bf26
    POP EBX                             ; 0053bf27
    RET                                 ; 0053bf28
    PUSH EBP                            ; 0053bf29
        ;   Label: LAB_0053bf29
    PUSH ESI                            ; 0053bf2a
    PUSH dword ptr [ESP + 0x3cc]        ; 0053bf2b
    PUSH EBX                            ; 0053bf32
    PUSH 0x203b37c                      ; 0053bf33 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00474b90 ; 0053bf38
        ;   XREF to: 00474b90 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00474b90(CDemonRaytrace * this_ptr, CVector3f * pos, float radius, int * hit_flag, ...)
    MOV dword ptr [ESP + 0x3b8],EAX     ; 0053bf3d
    FLD float ptr [ESP + 0x3b8]         ; 0053bf44
    ADD ESP,0x14                        ; 0053bf4b
    JMP 0x0053bcdd                      ; 0053bf4e
        ;   XREF to: 0053bcdd (UNCONDITIONAL_JUMP)  ; LAB_0053bcdd
    MOV EDI,dword ptr [0x02cf616c]      ; 0053bf53 | g_CSpikeClassInfo.name_hash
        ;   Label: LAB_0053bf53
    PUSH EDI                            ; 0053bf59
    MOV EBP,dword ptr [ESP + 0x3a4]     ; 0053bf5a
    PUSH EBP                            ; 0053bf61
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0053bf62
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053bf67
    TEST EAX,EAX                        ; 0053bf6a
    JNZ 0x0053bed1                      ; 0053bf6c
        ;   XREF to: 0053bed1 (CONDITIONAL_JUMP)  ; LAB_0053bed1
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0053bf72
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0053bf79
    LEA EAX,[ESP + 0x1b0]               ; 0053bf80
    PUSH EAX                            ; 0053bf87
    MOV EBX,dword ptr [EBP + 0x154]     ; 0053bf88
    PUSH EBP                            ; 0053bf8e
    CALL dword ptr [EBX + 0x3c]         ; 0053bf8f
    ADD ESP,0x8                         ; 0053bf92
    MOV EBX,EAX                         ; 0053bf95
    TEST EAX,EAX                        ; 0053bf97
    JZ 0x0053bed1                       ; 0053bf99
        ;   XREF to: 0053bed1 (CONDITIONAL_JUMP)  ; LAB_0053bed1
    PUSH EAX                            ; 0053bf9f
    LEA EAX,[ESP + 0x1b4]               ; 0053bfa0
    PUSH EAX                            ; 0053bfa7
    PUSH EBP                            ; 0053bfa8
    LEA ESI,[ESP + 0x1fc]               ; 0053bfa9
    LEA EDI,[ESP + 0x22c]               ; 0053bfb0
    CALL core_actor.cpp_FUN_00408f00    ; 0053bfb7
        ;   XREF to: 00408f00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408f00()
    ADD ESP,0xc                         ; 0053bfbc
    LEA EAX,[ESP + 0x220]               ; 0053bfbf
    MOV ECX,0x6                         ; 0053bfc6
    PUSH EAX                            ; 0053bfcb
    LEA EAX,[ESP + 0x20c]               ; 0053bfcc
    LEA ESI,[ESP + 0x1f4]               ; 0053bfd3
    PUSH EAX                            ; 0053bfda
    MOVSD.REP ES:EDI,ESI                ; 0053bfdb
    CALL core_box.cpp_FUN_0041e910      ; 0053bfdd
        ;   XREF to: 0041e910 (UNCONDITIONAL_CALL)  ; int core_box.cpp_FUN_0041e910(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 0053bfe2
    TEST EAX,EAX                        ; 0053bfe5
    JZ 0x0053bed1                       ; 0053bfe7
        ;   XREF to: 0053bed1 (CONDITIONAL_JUMP)  ; LAB_0053bed1
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0053bfed
    CMP dword ptr [EAX + 0x15f6f4],0x0  ; 0053bff4
    JZ 0x0053c821                       ; 0053bffb
        ;   XREF to: 0053c821 (CONDITIONAL_JUMP)  ; LAB_0053c821
    CMP EBX,0x2                         ; 0053c001
        ;   Label: LAB_0053c001
    JNC 0x0053ca5e                      ; 0053c004
        ;   XREF to: 0053ca5e (CONDITIONAL_JUMP)  ; LAB_0053ca5e
    CMP EBX,0x1                         ; 0053c00a
    JNZ 0x0053ca6d                      ; 0053c00d
        ;   XREF to: 0053ca6d (CONDITIONAL_JUMP)  ; LAB_0053ca6d
    PUSH 0x5db0f0                       ; 0053c013 | g_CVectorTypeInfo
    PUSH 0x8                            ; 0053c018
    LEA EAX,[ESP + 0x8]                 ; 0053c01a
    PUSH EAX                            ; 0053c01e
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0053c01f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0053c024
    MOV EAX,dword ptr [ESP + 0x3a0]     ; 0053c027
    MOV ESI,dword ptr [ESP + 0x3a0]     ; 0053c02e
    LEA EDI,[ESP + 0x238]               ; 0053c035
    PUSH ESI                            ; 0053c03c
    MOV EAX,dword ptr [EAX + 0x154]     ; 0053c03d
    LEA ESI,[ESP + 0x1dc]               ; 0053c043
    LEA EBX,[ESP + 0x4]                 ; 0053c04a
    CALL dword ptr [EAX + 0x1c]         ; 0053c04e
    MOV ECX,0x6                         ; 0053c051
    LEA ESI,[ESP + 0x1dc]               ; 0053c056
    ADD ESP,0x4                         ; 0053c05d
    XOR EBP,EBP                         ; 0053c060
    MOVSD.REP ES:EDI,ESI                ; 0053c062
    PUSH EBP                            ; 0053c064
        ;   Label: LAB_0053c064
    LEA EAX,[ESP + 0x23c]               ; 0053c065
    PUSH EAX                            ; 0053c06c
    LEA ESI,[ESP + 0x36c]               ; 0053c06d
    LEA EDI,[ESP + 0x33c]               ; 0053c074
    CALL core_box.cpp_FUN_0041d8b0      ; 0053c07b
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041d8b0()
    LEA ESI,[ESP + 0x36c]               ; 0053c080
    ADD ESP,0x8                         ; 0053c087
    LEA EAX,[ESP + 0x334]               ; 0053c08a
    MOVSD ES:EDI,ESI                    ; 0053c091
    MOVSD ES:EDI,ESI                    ; 0053c092
    MOVSD ES:EDI,ESI                    ; 0053c093
    PUSH EAX                            ; 0053c094
    MOV EDI,dword ptr [ESP + 0x3a4]     ; 0053c095
    PUSH EDI                            ; 0053c09c
    LEA ESI,[ESP + 0x2dc]               ; 0053c09d
    CALL core_actor.cpp_FUN_00408b80    ; 0053c0a4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA EDI,[ESP + 0x2c4]               ; 0053c0a9
    LEA ESI,[ESP + 0x2dc]               ; 0053c0b0
    ADD ESP,0x8                         ; 0053c0b7
    LEA EAX,[ESP + 0x2bc]               ; 0053c0ba
    MOVSD ES:EDI,ESI                    ; 0053c0c1
    MOVSD ES:EDI,ESI                    ; 0053c0c2
    MOVSD ES:EDI,ESI                    ; 0053c0c3
    CMP EBX,EAX                         ; 0053c0c4
    JZ 0x0053c0e5                       ; 0053c0c6
        ;   XREF to: 0053c0e5 (CONDITIONAL_JUMP)  ; LAB_0053c0e5
    MOV EAX,dword ptr [ESP + 0x2bc]     ; 0053c0c8
    MOV dword ptr [EBX],EAX             ; 0053c0cf
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 0053c0d1
    MOV dword ptr [EBX + 0x4],EAX       ; 0053c0d8
    MOV EAX,dword ptr [ESP + 0x2c4]     ; 0053c0db
    MOV dword ptr [EBX + 0x8],EAX       ; 0053c0e2
    INC EBP                             ; 0053c0e5
        ;   Label: LAB_0053c0e5
    ADD EBX,0xc                         ; 0053c0e6
    CMP EBP,0x8                         ; 0053c0e9
    JL 0x0053c064                       ; 0053c0ec
        ;   XREF to: 0053c064 (CONDITIONAL_JUMP)  ; LAB_0053c064
    LEA EAX,[ESP + 0x48]                ; 0053c0f2
    PUSH EAX                            ; 0053c0f6
    LEA EAX,[ESP + 0x34]                ; 0053c0f7
    PUSH EAX                            ; 0053c0fb
    LEA EAX,[ESP + 0x8]                 ; 0053c0fc
    PUSH EAX                            ; 0053c100
    LEA EAX,[ESP + 0x6c]                ; 0053c101
    PUSH EAX                            ; 0053c105
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c106
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c10b
    LEA EAX,[ESP + 0x388]               ; 0053c10e
    PUSH EAX                            ; 0053c115
    LEA EAX,[ESP + 0x2cc]               ; 0053c116
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c11d
    PUSH EAX                            ; 0053c124
    LEA EAX,[ESP + 0x6c]                ; 0053c125
    PUSH EAX                            ; 0053c129
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c12a
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c12f
    MOV ESI,EAX                         ; 0053c132
    LEA EAX,[ESP + 0x18]                ; 0053c134
    PUSH EAX                            ; 0053c138
    LEA EAX,[ESP + 0x4c]                ; 0053c139
    PUSH EAX                            ; 0053c13d
    LEA EAX,[ESP + 0x8]                 ; 0053c13e
    PUSH EAX                            ; 0053c142
    LEA EAX,[ESP + 0x6c]                ; 0053c143
    PUSH EAX                            ; 0053c147
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c148
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c14d
    LEA EAX,[ESP + 0x388]               ; 0053c150
    PUSH EAX                            ; 0053c157
    LEA EAX,[ESP + 0x2cc]               ; 0053c158
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c15f
    PUSH EAX                            ; 0053c166
    LEA EAX,[ESP + 0x6c]                ; 0053c167
    PUSH EAX                            ; 0053c16b
    XOR EBX,EBX                         ; 0053c16c
    MOV EBP,ESI                         ; 0053c16e
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c170
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c175
    OR EBP,EAX                          ; 0053c178
    JZ 0x0053c207                       ; 0053c17a
        ;   XREF to: 0053c207 (CONDITIONAL_JUMP)  ; LAB_0053c207
    FLD float ptr [ESP + 0x84]          ; 0053c180
    FLD float ptr [ESP + 0x88]          ; 0053c187
    FLD float ptr [ESP + 0x8c]          ; 0053c18e
    LEA EDI,[ESP + 0x28c]               ; 0053c195
    LEA ESI,[ESP + 0x250]               ; 0053c19c
    FXCH ST2                            ; 0053c1a3
    FCHS                                ; 0053c1a5
    FXCH                                ; 0053c1a7
    FCHS                                ; 0053c1a9
    FXCH ST2                            ; 0053c1ab
    FCHS                                ; 0053c1ad
    FXCH ST2                            ; 0053c1af
    FSTP float ptr [ESP + 0x254]        ; 0053c1b1
    FXCH                                ; 0053c1b8
    FSTP float ptr [ESP + 0x258]        ; 0053c1ba
    FSTP float ptr [ESP + 0x250]        ; 0053c1c1
    MOVSD ES:EDI,ESI                    ; 0053c1c8
    MOVSD ES:EDI,ESI                    ; 0053c1c9
    MOVSD ES:EDI,ESI                    ; 0053c1ca
    LEA EAX,[ESP + 0x2ec]               ; 0053c1cb
    LEA ESI,[ESP + 0x28c]               ; 0053c1d2
    CMP EAX,ESI                         ; 0053c1d9
    JZ 0x0053c207                       ; 0053c1db
        ;   XREF to: 0053c207 (CONDITIONAL_JUMP)  ; LAB_0053c207
    MOV EAX,dword ptr [ESP + 0x28c]     ; 0053c1dd
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0053c1e4
    MOV EAX,dword ptr [ESP + 0x290]     ; 0053c1eb
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0053c1f2
    MOV EAX,dword ptr [ESP + 0x294]     ; 0053c1f9
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0053c200
    LEA EAX,[ESP + 0x54]                ; 0053c207
        ;   Label: LAB_0053c207
    PUSH EAX                            ; 0053c20b
    LEA EAX,[ESP + 0x28]                ; 0053c20c
    PUSH EAX                            ; 0053c210
    LEA EAX,[ESP + 0x14]                ; 0053c211
    PUSH EAX                            ; 0053c215
    LEA EAX,[ESP + 0x14c]               ; 0053c216
    PUSH EAX                            ; 0053c21d
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c21e
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c223
    LEA EAX,[ESP + 0x388]               ; 0053c226
    PUSH EAX                            ; 0053c22d
    LEA EAX,[ESP + 0x2cc]               ; 0053c22e
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c235
    PUSH EAX                            ; 0053c23c
    LEA EAX,[ESP + 0x14c]               ; 0053c23d
    PUSH EAX                            ; 0053c244
    OR EBX,EBP                          ; 0053c245
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c247
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c24c
    MOV EBP,EAX                         ; 0053c24f
    LEA EAX,[ESP + 0x3c]                ; 0053c251
    PUSH EAX                            ; 0053c255
    LEA EAX,[ESP + 0x58]                ; 0053c256
    PUSH EAX                            ; 0053c25a
    LEA EAX,[ESP + 0x14]                ; 0053c25b
    PUSH EAX                            ; 0053c25f
    LEA EAX,[ESP + 0x14c]               ; 0053c260
    PUSH EAX                            ; 0053c267
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c268
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c26d
    LEA EAX,[ESP + 0x388]               ; 0053c270
    PUSH EAX                            ; 0053c277
    LEA EAX,[ESP + 0x2cc]               ; 0053c278
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c27f
    PUSH EAX                            ; 0053c286
    LEA EAX,[ESP + 0x14c]               ; 0053c287
    PUSH EAX                            ; 0053c28e
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c28f
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c294
    OR EBP,EAX                          ; 0053c297
    JZ 0x0053c326                       ; 0053c299
        ;   XREF to: 0053c326 (CONDITIONAL_JUMP)  ; LAB_0053c326
    FLD float ptr [ESP + 0x164]         ; 0053c29f
    FLD float ptr [ESP + 0x168]         ; 0053c2a6
    FLD float ptr [ESP + 0x16c]         ; 0053c2ad
    LEA EDI,[ESP + 0x298]               ; 0053c2b4
    LEA ESI,[ESP + 0x280]               ; 0053c2bb
    FXCH ST2                            ; 0053c2c2
    FCHS                                ; 0053c2c4
    FXCH                                ; 0053c2c6
    FCHS                                ; 0053c2c8
    FXCH ST2                            ; 0053c2ca
    FCHS                                ; 0053c2cc
    FXCH ST2                            ; 0053c2ce
    FSTP float ptr [ESP + 0x284]        ; 0053c2d0
    FXCH                                ; 0053c2d7
    FSTP float ptr [ESP + 0x288]        ; 0053c2d9
    FSTP float ptr [ESP + 0x280]        ; 0053c2e0
    MOVSD ES:EDI,ESI                    ; 0053c2e7
    MOVSD ES:EDI,ESI                    ; 0053c2e8
    MOVSD ES:EDI,ESI                    ; 0053c2e9
    LEA EAX,[ESP + 0x298]               ; 0053c2ea
    LEA ESI,[ESP + 0x2ec]               ; 0053c2f1
    CMP ESI,EAX                         ; 0053c2f8
    JZ 0x0053c326                       ; 0053c2fa
        ;   XREF to: 0053c326 (CONDITIONAL_JUMP)  ; LAB_0053c326
    MOV EAX,dword ptr [ESP + 0x298]     ; 0053c2fc
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0053c303
    MOV EAX,dword ptr [ESP + 0x29c]     ; 0053c30a
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0053c311
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 0053c318
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0053c31f
    LEA EAX,[ESP + 0x3c]                ; 0053c326
        ;   Label: LAB_0053c326
    PUSH EAX                            ; 0053c32a
    LEA EAX,[ESP + 0x10]                ; 0053c32b
    PUSH EAX                            ; 0053c32f
    LEA EAX,[ESP + 0x8]                 ; 0053c330
    PUSH EAX                            ; 0053c334
    LEA EAX,[ESP + 0x184]               ; 0053c335
    PUSH EAX                            ; 0053c33c
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c33d
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c342
    LEA EAX,[ESP + 0x388]               ; 0053c345
    PUSH EAX                            ; 0053c34c
    LEA EAX,[ESP + 0x2cc]               ; 0053c34d
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c354
    PUSH EAX                            ; 0053c35b
    LEA EAX,[ESP + 0x184]               ; 0053c35c
    PUSH EAX                            ; 0053c363
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c364
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c369
    MOV ESI,EAX                         ; 0053c36c
    LEA EAX,[ESP + 0x30]                ; 0053c36e
    PUSH EAX                            ; 0053c372
    LEA EAX,[ESP + 0x40]                ; 0053c373
    PUSH EAX                            ; 0053c377
    LEA EAX,[ESP + 0x8]                 ; 0053c378
    PUSH EAX                            ; 0053c37c
    LEA EAX,[ESP + 0x184]               ; 0053c37d
    PUSH EAX                            ; 0053c384
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c385
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c38a
    LEA EAX,[ESP + 0x388]               ; 0053c38d
    PUSH EAX                            ; 0053c394
    LEA EAX,[ESP + 0x2cc]               ; 0053c395
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c39c
    PUSH EAX                            ; 0053c3a3
    LEA EAX,[ESP + 0x184]               ; 0053c3a4
    PUSH EAX                            ; 0053c3ab
    OR EBX,EBP                          ; 0053c3ac
    MOV EBP,ESI                         ; 0053c3ae
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c3b0
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c3b5
    OR EBP,EAX                          ; 0053c3b8
    JZ 0x0053c447                       ; 0053c3ba
        ;   XREF to: 0053c447 (CONDITIONAL_JUMP)  ; LAB_0053c447
    FLD float ptr [ESP + 0x19c]         ; 0053c3c0
    FLD float ptr [ESP + 0x1a0]         ; 0053c3c7
    FLD float ptr [ESP + 0x1a4]         ; 0053c3ce
    LEA EDI,[ESP + 0x310]               ; 0053c3d5
    LEA ESI,[ESP + 0x34c]               ; 0053c3dc
    FXCH ST2                            ; 0053c3e3
    FCHS                                ; 0053c3e5
    FXCH                                ; 0053c3e7
    FCHS                                ; 0053c3e9
    FXCH ST2                            ; 0053c3eb
    FCHS                                ; 0053c3ed
    FXCH ST2                            ; 0053c3ef
    FSTP float ptr [ESP + 0x350]        ; 0053c3f1
    FXCH                                ; 0053c3f8
    FSTP float ptr [ESP + 0x354]        ; 0053c3fa
    FSTP float ptr [ESP + 0x34c]        ; 0053c401
    MOVSD ES:EDI,ESI                    ; 0053c408
    MOVSD ES:EDI,ESI                    ; 0053c409
    MOVSD ES:EDI,ESI                    ; 0053c40a
    LEA EAX,[ESP + 0x310]               ; 0053c40b
    LEA ESI,[ESP + 0x2ec]               ; 0053c412
    CMP ESI,EAX                         ; 0053c419
    JZ 0x0053c447                       ; 0053c41b
        ;   XREF to: 0053c447 (CONDITIONAL_JUMP)  ; LAB_0053c447
    MOV EAX,dword ptr [ESP + 0x310]     ; 0053c41d
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0053c424
    MOV EAX,dword ptr [ESP + 0x314]     ; 0053c42b
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0053c432
    MOV EAX,dword ptr [ESP + 0x318]     ; 0053c439
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0053c440
    LEA EAX,[ESP + 0x54]                ; 0053c447
        ;   Label: LAB_0053c447
    PUSH EAX                            ; 0053c44b
    LEA EAX,[ESP + 0x4c]                ; 0053c44c
    PUSH EAX                            ; 0053c450
    LEA EAX,[ESP + 0x20]                ; 0053c451
    PUSH EAX                            ; 0053c455
    LEA EAX,[ESP + 0x114]               ; 0053c456
    PUSH EAX                            ; 0053c45d
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c45e
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c463
    LEA EAX,[ESP + 0x388]               ; 0053c466
    PUSH EAX                            ; 0053c46d
    LEA EAX,[ESP + 0x2cc]               ; 0053c46e
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c475
    PUSH EAX                            ; 0053c47c
    LEA EAX,[ESP + 0x114]               ; 0053c47d
    PUSH EAX                            ; 0053c484
    OR EBX,EBP                          ; 0053c485
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c487
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c48c
    MOV EBP,EAX                         ; 0053c48f
    LEA EAX,[ESP + 0x24]                ; 0053c491
    PUSH EAX                            ; 0053c495
    LEA EAX,[ESP + 0x58]                ; 0053c496
    PUSH EAX                            ; 0053c49a
    LEA EAX,[ESP + 0x20]                ; 0053c49b
    PUSH EAX                            ; 0053c49f
    LEA EAX,[ESP + 0x114]               ; 0053c4a0
    PUSH EAX                            ; 0053c4a7
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c4a8
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c4ad
    LEA EAX,[ESP + 0x388]               ; 0053c4b0
    PUSH EAX                            ; 0053c4b7
    LEA EAX,[ESP + 0x2cc]               ; 0053c4b8
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c4bf
    PUSH EAX                            ; 0053c4c6
    LEA EAX,[ESP + 0x114]               ; 0053c4c7
    PUSH EAX                            ; 0053c4ce
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c4cf
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c4d4
    OR EBP,EAX                          ; 0053c4d7
    JZ 0x0053c566                       ; 0053c4d9
        ;   XREF to: 0053c566 (CONDITIONAL_JUMP)  ; LAB_0053c566
    FLD float ptr [ESP + 0x12c]         ; 0053c4df
    FLD float ptr [ESP + 0x130]         ; 0053c4e6
    FLD float ptr [ESP + 0x134]         ; 0053c4ed
    LEA EDI,[ESP + 0x2b0]               ; 0053c4f4
    LEA ESI,[ESP + 0x370]               ; 0053c4fb
    FXCH ST2                            ; 0053c502
    FCHS                                ; 0053c504
    FXCH                                ; 0053c506
    FCHS                                ; 0053c508
    FXCH ST2                            ; 0053c50a
    FCHS                                ; 0053c50c
    FXCH ST2                            ; 0053c50e
    FSTP float ptr [ESP + 0x374]        ; 0053c510
    FXCH                                ; 0053c517
    FSTP float ptr [ESP + 0x378]        ; 0053c519
    FSTP float ptr [ESP + 0x370]        ; 0053c520
    MOVSD ES:EDI,ESI                    ; 0053c527
    MOVSD ES:EDI,ESI                    ; 0053c528
    MOVSD ES:EDI,ESI                    ; 0053c529
    LEA EAX,[ESP + 0x2b0]               ; 0053c52a
    LEA ESI,[ESP + 0x2ec]               ; 0053c531
    CMP ESI,EAX                         ; 0053c538
    JZ 0x0053c566                       ; 0053c53a
        ;   XREF to: 0053c566 (CONDITIONAL_JUMP)  ; LAB_0053c566
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 0053c53c
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0053c543
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 0053c54a
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0053c551
    MOV EAX,dword ptr [ESP + 0x2b8]     ; 0053c558
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0053c55f
    LEA EAX,[ESP + 0x24]                ; 0053c566
        ;   Label: LAB_0053c566
    PUSH EAX                            ; 0053c56a
    LEA EAX,[ESP + 0x1c]                ; 0053c56b
    PUSH EAX                            ; 0053c56f
    LEA EAX,[ESP + 0x8]                 ; 0053c570
    PUSH EAX                            ; 0053c574
    LEA EAX,[ESP + 0xdc]                ; 0053c575
    PUSH EAX                            ; 0053c57c
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c57d
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c582
    LEA EAX,[ESP + 0x388]               ; 0053c585
    PUSH EAX                            ; 0053c58c
    LEA EAX,[ESP + 0x2cc]               ; 0053c58d
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c594
    PUSH EAX                            ; 0053c59b
    LEA EAX,[ESP + 0xdc]                ; 0053c59c
    PUSH EAX                            ; 0053c5a3
    OR EBX,EBP                          ; 0053c5a4
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c5a6
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c5ab
    MOV EBP,EAX                         ; 0053c5ae
    LEA EAX,[ESP + 0xc]                 ; 0053c5b0
    PUSH EAX                            ; 0053c5b4
    LEA EAX,[ESP + 0x28]                ; 0053c5b5
    PUSH EAX                            ; 0053c5b9
    LEA EAX,[ESP + 0x8]                 ; 0053c5ba
    PUSH EAX                            ; 0053c5be
    LEA EAX,[ESP + 0xdc]                ; 0053c5bf
    PUSH EAX                            ; 0053c5c6
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c5c7
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c5cc
    LEA EAX,[ESP + 0x388]               ; 0053c5cf
    PUSH EAX                            ; 0053c5d6
    LEA EAX,[ESP + 0x2cc]               ; 0053c5d7
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c5de
    PUSH EAX                            ; 0053c5e5
    LEA EAX,[ESP + 0xdc]                ; 0053c5e6
    PUSH EAX                            ; 0053c5ed
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c5ee
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c5f3
    OR EBP,EAX                          ; 0053c5f6
    JZ 0x0053c685                       ; 0053c5f8
        ;   XREF to: 0053c685 (CONDITIONAL_JUMP)  ; LAB_0053c685
    FLD float ptr [ESP + 0xf4]          ; 0053c5fe
    FLD float ptr [ESP + 0xf8]          ; 0053c605
    FLD float ptr [ESP + 0xfc]          ; 0053c60c
    LEA EDI,[ESP + 0x274]               ; 0053c613
    LEA ESI,[ESP + 0x358]               ; 0053c61a
    FXCH ST2                            ; 0053c621
    FCHS                                ; 0053c623
    FXCH                                ; 0053c625
    FCHS                                ; 0053c627
    FXCH ST2                            ; 0053c629
    FCHS                                ; 0053c62b
    FXCH ST2                            ; 0053c62d
    FSTP float ptr [ESP + 0x35c]        ; 0053c62f
    FXCH                                ; 0053c636
    FSTP float ptr [ESP + 0x360]        ; 0053c638
    FSTP float ptr [ESP + 0x358]        ; 0053c63f
    MOVSD ES:EDI,ESI                    ; 0053c646
    MOVSD ES:EDI,ESI                    ; 0053c647
    MOVSD ES:EDI,ESI                    ; 0053c648
    LEA EAX,[ESP + 0x2ec]               ; 0053c649
    LEA ESI,[ESP + 0x274]               ; 0053c650
    CMP EAX,ESI                         ; 0053c657
    JZ 0x0053c685                       ; 0053c659
        ;   XREF to: 0053c685 (CONDITIONAL_JUMP)  ; LAB_0053c685
    MOV EAX,dword ptr [ESP + 0x274]     ; 0053c65b
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0053c662
    MOV EAX,dword ptr [ESP + 0x278]     ; 0053c669
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0053c670
    MOV EAX,dword ptr [ESP + 0x27c]     ; 0053c677
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0053c67e
    LEA EAX,[ESP + 0x54]                ; 0053c685
        ;   Label: LAB_0053c685
    PUSH EAX                            ; 0053c689
    LEA EAX,[ESP + 0x40]                ; 0053c68a
    PUSH EAX                            ; 0053c68e
    LEA EAX,[ESP + 0x38]                ; 0053c68f
    PUSH EAX                            ; 0053c693
    LEA EAX,[ESP + 0xa4]                ; 0053c694
    PUSH EAX                            ; 0053c69b
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c69c
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c6a1
    LEA EAX,[ESP + 0x388]               ; 0053c6a4
    PUSH EAX                            ; 0053c6ab
    LEA EAX,[ESP + 0x2cc]               ; 0053c6ac
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c6b3
    PUSH EAX                            ; 0053c6ba
    LEA EAX,[ESP + 0xa4]                ; 0053c6bb
    PUSH EAX                            ; 0053c6c2
    OR EBX,EBP                          ; 0053c6c3
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c6c5
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c6ca
    MOV EBP,EAX                         ; 0053c6cd
    LEA EAX,[ESP + 0x48]                ; 0053c6cf
    PUSH EAX                            ; 0053c6d3
    LEA EAX,[ESP + 0x58]                ; 0053c6d4
    PUSH EAX                            ; 0053c6d8
    LEA EAX,[ESP + 0x38]                ; 0053c6d9
    PUSH EAX                            ; 0053c6dd
    LEA EAX,[ESP + 0xa4]                ; 0053c6de
    PUSH EAX                            ; 0053c6e5
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0053c6e6
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0053c6eb
    LEA EAX,[ESP + 0x388]               ; 0053c6ee
    PUSH EAX                            ; 0053c6f5
    LEA EAX,[ESP + 0x2cc]               ; 0053c6f6
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c6fd
    PUSH EAX                            ; 0053c704
    LEA EAX,[ESP + 0xa4]                ; 0053c705
    PUSH EAX                            ; 0053c70c
    CALL core_dtri.cpp_FUN_004795c0     ; 0053c70d
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_004795c0(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0053c712
    OR EBP,EAX                          ; 0053c715
    JZ 0x0053c7a4                       ; 0053c717
        ;   XREF to: 0053c7a4 (CONDITIONAL_JUMP)  ; LAB_0053c7a4
    FLD float ptr [ESP + 0xbc]          ; 0053c71d
    FLD float ptr [ESP + 0xc0]          ; 0053c724
    FLD float ptr [ESP + 0xc4]          ; 0053c72b
    LEA EDI,[ESP + 0x25c]               ; 0053c732
    LEA ESI,[ESP + 0x31c]               ; 0053c739
    FXCH ST2                            ; 0053c740
    FCHS                                ; 0053c742
    FXCH                                ; 0053c744
    FCHS                                ; 0053c746
    FXCH ST2                            ; 0053c748
    FCHS                                ; 0053c74a
    FXCH ST2                            ; 0053c74c
    FSTP float ptr [ESP + 0x320]        ; 0053c74e
    FXCH                                ; 0053c755
    FSTP float ptr [ESP + 0x324]        ; 0053c757
    FSTP float ptr [ESP + 0x31c]        ; 0053c75e
    MOVSD ES:EDI,ESI                    ; 0053c765
    MOVSD ES:EDI,ESI                    ; 0053c766
    MOVSD ES:EDI,ESI                    ; 0053c767
    LEA EAX,[ESP + 0x2ec]               ; 0053c768
    LEA ESI,[ESP + 0x25c]               ; 0053c76f
    CMP EAX,ESI                         ; 0053c776
    JZ 0x0053c7a4                       ; 0053c778
        ;   XREF to: 0053c7a4 (CONDITIONAL_JUMP)  ; LAB_0053c7a4
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0053c77a
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0053c781
    MOV EAX,dword ptr [ESP + 0x260]     ; 0053c788
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0053c78f
    MOV EAX,dword ptr [ESP + 0x264]     ; 0053c796
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0053c79d
    OR EBX,EBP                          ; 0053c7a4
        ;   Label: LAB_0053c7a4
    JZ 0x0053bed1                       ; 0053c7a6
        ;   XREF to: 0053bed1 (CONDITIONAL_JUMP)  ; LAB_0053bed1
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0053c7ac
    MOV EBX,dword ptr [ESP + 0x3a0]     ; 0053c7b3
    MOV dword ptr [EAX + 0x14d144],EBX  ; 0053c7ba
    LEA EAX,[ESP + 0x2ec]               ; 0053c7c0
    PUSH EAX                            ; 0053c7c7
    PUSH EBX                            ; 0053c7c8
    LEA ESI,[ESP + 0x30c]               ; 0053c7c9
    LEA EDI,[ESP + 0x384]               ; 0053c7d0
    CALL core_actor.cpp_FUN_00408b00    ; 0053c7d7
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x30c]               ; 0053c7dc
    ADD ESP,0x8                         ; 0053c7e3
    LEA EAX,[ESP + 0x37c]               ; 0053c7e6
    MOV EDX,dword ptr [ESP + 0x39c]     ; 0053c7ed
    MOVSD ES:EDI,ESI                    ; 0053c7f4
    MOVSD ES:EDI,ESI                    ; 0053c7f5
    MOVSD ES:EDI,ESI                    ; 0053c7f6
    CMP EAX,EDX                         ; 0053c7f7
    JZ 0x0053bed1                       ; 0053c7f9
        ;   XREF to: 0053bed1 (CONDITIONAL_JUMP)  ; LAB_0053bed1
    MOV EAX,dword ptr [ESP + 0x37c]     ; 0053c7ff
    MOV dword ptr [EDX],EAX             ; 0053c806
    MOV EAX,dword ptr [ESP + 0x380]     ; 0053c808
    MOV dword ptr [EDX + 0x4],EAX       ; 0053c80f
    MOV EAX,dword ptr [ESP + 0x384]     ; 0053c812
    MOV dword ptr [EDX + 0x8],EAX       ; 0053c819
    JMP 0x0053bed1                      ; 0053c81c
        ;   XREF to: 0053bed1 (UNCONDITIONAL_JUMP)  ; LAB_0053bed1
    MOV EBP,dword ptr [ESP + 0x1d4]     ; 0053c821
        ;   Label: LAB_0053c821
    TEST EBP,EBP                        ; 0053c828
    JZ 0x0053c001                       ; 0053c82a
        ;   XREF to: 0053c001 (CONDITIONAL_JUMP)  ; LAB_0053c001
    PUSH EBP                            ; 0053c830
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0053c831
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053c836
    MOV EDX,dword ptr [EAX + 0x358]     ; 0053c839
    MOV EBX,EAX                         ; 0053c83f
    TEST EDX,EDX                        ; 0053c841
    JNZ 0x0053c869                      ; 0053c843
        ;   XREF to: 0053c869 (CONDITIONAL_JUMP)  ; LAB_0053c869
    PUSH EAX                            ; 0053c845
    MOV ECX,0x5d0a2e                    ; 0053c846 | = "..\\core\\setcolid.cpp"
    MOV ESI,0xcb                        ; 0053c84b
    PUSH 0x5d0a43                       ; 0053c850 | = "info.keyFramedModelInstancePtr != NUL..."
    MOV dword ptr [0x01d71de0],ECX      ; 0053c855 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0053c85b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053c861
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0053c866
    FLD float ptr [ESP + 0x2c8]         ; 0053c869
        ;   Label: LAB_0053c869
    FLD float ptr [ESP + 0x2cc]         ; 0053c870
    FLD float ptr [ESP + 0x2d0]         ; 0053c877
    MOV EAX,dword ptr [ESP + 0x3a0]     ; 0053c87e
    FLD float ptr [ESP + 0x388]         ; 0053c885
    ADD EAX,0x30                        ; 0053c88c
    LEA EDI,[ESP + 0x2a4]               ; 0053c88f
    LEA ESI,[ESP + 0x2f8]               ; 0053c896
    FXCH ST3                            ; 0053c89d
    FSUB float ptr [EAX + -0x10]        ; 0053c89f
    FXCH ST2                            ; 0053c8a2
    FSUB float ptr [EAX + -0xc]         ; 0053c8a4
    FXCH                                ; 0053c8a7
    FSUB float ptr [EAX + -0x8]         ; 0053c8a9
    FXCH ST2                            ; 0053c8ac
    FSTP float ptr [ESP + 0x2f8]        ; 0053c8ae
    FSTP float ptr [ESP + 0x2fc]        ; 0053c8b5
    FSTP float ptr [ESP + 0x300]        ; 0053c8bc
    MOVSD ES:EDI,ESI                    ; 0053c8c3
    MOVSD ES:EDI,ESI                    ; 0053c8c4
    MOVSD ES:EDI,ESI                    ; 0053c8c5
    PUSH EAX                            ; 0053c8c6
    FSUB float ptr [EAX + -0xc]         ; 0053c8c7
    LEA EAX,[ESP + 0x394]               ; 0053c8ca
    PUSH EAX                            ; 0053c8d1
    LEA EAX,[ESP + 0x2ac]               ; 0053c8d2
    PUSH dword ptr [ESP + 0x3cc]        ; 0053c8d9
    PUSH EAX                            ; 0053c8e0
    PUSH 0x0                            ; 0053c8e1
    PUSH EBX                            ; 0053c8e3
    FSTP float ptr [ESP + 0x3a8]        ; 0053c8e4
    CALL core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00461ef0 ; 0053c8eb
        ;   XREF to: 00461ef0 (UNCONDITIONAL_CALL)  ; int core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00461ef0(CKeyFramedModel * this_ptr, int frame_index, CVector3f * position, float search_radius, ...)
    ADD ESP,0x18                        ; 0053c8f0
    TEST EAX,EAX                        ; 0053c8f3
    JZ 0x0053bed1                       ; 0053c8f5
        ;   XREF to: 0053bed1 (CONDITIONAL_JUMP)  ; LAB_0053bed1
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0053c8fb
    MOV EBX,dword ptr [ESP + 0x3a0]     ; 0053c902
    MOV EBP,0x3f800000                  ; 0053c909
    MOV EDX,dword ptr [ESP + 0x39c]     ; 0053c90e
    MOV dword ptr [EAX + 0x14d144],EBX  ; 0053c915
    XOR EDI,EDI                         ; 0053c91b
    FLD float ptr [ESP + 0x390]         ; 0053c91d
    MOV EAX,EBX                         ; 0053c924
    FADD float ptr [EBX + 0x24]         ; 0053c926
    XOR EAX,EBX                         ; 0053c929
    FSTP float ptr [ESP + 0x388]        ; 0053c92b
    MOV dword ptr [ESP + 0x2e0],EDI     ; 0053c932
    MOV dword ptr [ESP + 0x2e8],EAX     ; 0053c939
    LEA EAX,[ESP + 0x2e0]               ; 0053c940
    MOV dword ptr [ESP + 0x2e4],EBP     ; 0053c947
    CMP EAX,EDX                         ; 0053c94e
    JZ 0x0053bed1                       ; 0053c950
        ;   XREF to: 0053bed1 (CONDITIONAL_JUMP)  ; LAB_0053bed1
    MOV dword ptr [EDX],EDI             ; 0053c956
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 0053c958
    MOV dword ptr [EDX + 0x4],EAX       ; 0053c95f
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 0053c962
    MOV dword ptr [EDX + 0x8],EAX       ; 0053c969
    JMP 0x0053bed1                      ; 0053c96c
        ;   XREF to: 0053bed1 (UNCONDITIONAL_JUMP)  ; LAB_0053bed1
    LEA EAX,[ESP + 0x2c8]               ; 0053c971
        ;   Label: LAB_0053c971
    PUSH EAX                            ; 0053c978
    MOV ECX,dword ptr [ESP + 0x3a4]     ; 0053c979
    PUSH ECX                            ; 0053c980
    LEA ESI,[ESP + 0x330]               ; 0053c981
    LEA EDI,[ESP + 0x270]               ; 0053c988
    CALL core_actor.cpp_FUN_00408bf0    ; 0053c98f
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    ADD ESP,0x8                         ; 0053c994
    LEA ESI,[ESP + 0x328]               ; 0053c997
    MOV EAX,dword ptr [ESP + 0x3a0]     ; 0053c99e
    MOVSD ES:EDI,ESI                    ; 0053c9a5
    MOVSD ES:EDI,ESI                    ; 0053c9a6
    MOVSD ES:EDI,ESI                    ; 0053c9a7
    FLD float ptr [ESP + 0x388]         ; 0053c9a8
    FSUB float ptr [EAX + 0x24]         ; 0053c9af
    FSTP float ptr [ESP + 0x38c]        ; 0053c9b2
    MOV EBX,dword ptr [EAX + 0x154]     ; 0053c9b9
    LEA EAX,[ESP + 0x38c]               ; 0053c9bf
    PUSH EAX                            ; 0053c9c6
    LEA EAX,[ESP + 0x26c]               ; 0053c9c7
    PUSH dword ptr [ESP + 0x3c8]        ; 0053c9ce
    PUSH EAX                            ; 0053c9d5
    MOV ESI,dword ptr [ESP + 0x3ac]     ; 0053c9d6
    PUSH ESI                            ; 0053c9dd
    CALL dword ptr [EBX + 0xc0]         ; 0053c9de
    ADD ESP,0x10                        ; 0053c9e4
    TEST EAX,EAX                        ; 0053c9e7
    JZ 0x0053bed1                       ; 0053c9e9
        ;   XREF to: 0053bed1 (CONDITIONAL_JUMP)  ; LAB_0053bed1
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0053c9ef
    MOV EBP,0x3f800000                  ; 0053c9f6
    MOV EDX,dword ptr [ESP + 0x39c]     ; 0053c9fb
    MOV dword ptr [EAX + 0x14d144],ESI  ; 0053ca02
    XOR EDI,EDI                         ; 0053ca08
    FLD float ptr [ESP + 0x38c]         ; 0053ca0a
    MOV EAX,ESI                         ; 0053ca11
    FADD float ptr [ESI + 0x24]         ; 0053ca13
    XOR EAX,ESI                         ; 0053ca16
    FSTP float ptr [ESP + 0x388]        ; 0053ca18
    MOV dword ptr [ESP + 0x340],EDI     ; 0053ca1f
    MOV dword ptr [ESP + 0x348],EAX     ; 0053ca26
    LEA EAX,[ESP + 0x340]               ; 0053ca2d
    MOV dword ptr [ESP + 0x344],EBP     ; 0053ca34
    CMP EAX,EDX                         ; 0053ca3b
    JZ 0x0053bed1                       ; 0053ca3d
        ;   XREF to: 0053bed1 (CONDITIONAL_JUMP)  ; LAB_0053bed1
    MOV dword ptr [EDX],EDI             ; 0053ca43
    MOV EAX,dword ptr [ESP + 0x344]     ; 0053ca45
    MOV dword ptr [EDX + 0x4],EAX       ; 0053ca4c
    MOV EAX,dword ptr [ESP + 0x348]     ; 0053ca4f
    MOV dword ptr [EDX + 0x8],EAX       ; 0053ca56
    JMP 0x0053bed1                      ; 0053ca59
        ;   XREF to: 0053bed1 (UNCONDITIONAL_JUMP)  ; LAB_0053bed1
    JBE 0x0053bed1                      ; 0053ca5e
        ;   XREF to: 0053bed1 (CONDITIONAL_JUMP)  ; LAB_0053bed1
        ;   Label: LAB_0053ca5e
    CMP EBX,0x3                         ; 0053ca64
    JZ 0x0053c971                       ; 0053ca67
        ;   XREF to: 0053c971 (CONDITIONAL_JUMP)  ; LAB_0053c971
    MOV ECX,0x5d0a8f                    ; 0053ca6d | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_0053ca6d
    MOV EBX,0x12b                       ; 0053ca72
    PUSH 0x5d0aa4                       ; 0053ca77 | = "Invalid collision type!"
    MOV dword ptr [0x01d71de0],ECX      ; 0053ca7c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0053ca82 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053ca88
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0053ca8d
    JMP 0x0053bed1                      ; 0053ca90
        ;   XREF to: 0053bed1 (UNCONDITIONAL_JUMP)  ; LAB_0053bed1
    PUSH ECX                            ; 0053ca95
        ;   Label: LAB_0053ca95
    MOV EBX,dword ptr [ECX + 0x154]     ; 0053ca96
    CALL dword ptr [EBX + 0x44]         ; 0053ca9c
    ADD ESP,0x4                         ; 0053ca9f
    MOV EBX,dword ptr [ESP + 0x3bc]     ; 0053caa2
    MOV dword ptr [EBX + 0x14d134],EAX  ; 0053caa9
    MOV EAX,dword ptr [ESP + 0x388]     ; 0053caaf
    ADD ESP,0x3a8                       ; 0053cab6
    POP EBP                             ; 0053cabc
    POP EDI                             ; 0053cabd
    POP ESI                             ; 0053cabe
    POP EBX                             ; 0053cabf
    RET                                 ; 0053cac0

