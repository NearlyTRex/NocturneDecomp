; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown CVector3f * core_grave_cpp_FUN_004ee8f0(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee8f0
        ;   Label: core_grave.cpp_FUN_004ee8f0
    PUSH ESI                            ; 004ee8f1
    SUB ESP,0x4                         ; 004ee8f2
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ee8f5
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ee8f9
    MOV EDX,dword ptr [0x0067d550]      ; 004ee8fd | g_CDemonMissionInstance | g_CDemonMissionPtr
    MOV ESI,dword ptr [EDX + 0x4]       ; 004ee903 | DAT_02f33744
    LEA EAX,[ECX + 0x158]               ; 004ee906
    TEST ESI,ESI                        ; 004ee90c
    JZ 0x004ee95a                       ; 004ee90e
        ;   XREF to: 004ee95a (CONDITIONAL_JUMP)  ; LAB_004ee95a
    PUSH EAX                            ; 004ee910
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004ee911
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ee916
    ADD EAX,0x5678                      ; 004ee919
    MOV EDX,EBX                         ; 004ee91e
    MOV ECX,EAX                         ; 004ee920
    CMP EBX,EAX                         ; 004ee922
    JZ 0x004ee936                       ; 004ee924
        ;   XREF to: 004ee936 (CONDITIONAL_JUMP)  ; LAB_004ee936
    MOV ESI,dword ptr [EAX]             ; 004ee926
    MOV dword ptr [EBX],ESI             ; 004ee928
    MOV ESI,dword ptr [EAX + 0x4]       ; 004ee92a
    MOV dword ptr [EBX + 0x4],ESI       ; 004ee92d
    MOV ESI,dword ptr [EAX + 0x8]       ; 004ee930
    MOV dword ptr [EBX + 0x8],ESI       ; 004ee933
    LEA EAX,[EDX + 0xc]                 ; 004ee936
        ;   Label: LAB_004ee936
    LEA EDX,[ECX + 0xc]                 ; 004ee939
    CMP EAX,EDX                         ; 004ee93c
    JNZ 0x004ee948                      ; 004ee93e
        ;   XREF to: 004ee948 (CONDITIONAL_JUMP)  ; LAB_004ee948
    MOV EAX,EBX                         ; 004ee940
        ;   Label: LAB_004ee940
    ADD ESP,0x4                         ; 004ee942
    POP ESI                             ; 004ee945
    POP EBX                             ; 004ee946
    RET                                 ; 004ee947
    MOV ECX,dword ptr [EDX]             ; 004ee948
        ;   Label: LAB_004ee948
    MOV dword ptr [EAX],ECX             ; 004ee94a
    MOV ECX,dword ptr [EDX + 0x4]       ; 004ee94c
    MOV dword ptr [EAX + 0x4],ECX       ; 004ee94f
    MOV ECX,dword ptr [EDX + 0x8]       ; 004ee952
    MOV dword ptr [EAX + 0x8],ECX       ; 004ee955
    JMP 0x004ee940                      ; 004ee958
        ;   XREF to: 004ee940 (UNCONDITIONAL_JUMP)  ; LAB_004ee940
    FLD float ptr [ECX + 0x2d4]         ; 004ee95a
        ;   Label: LAB_004ee95a
    CALL crt_math.c_round_FUN_005fe6b0  ; 004ee960
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 004ee965
    FISTP dword ptr [ESP + 0x4]         ; 004ee966
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004ee96a
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ee96f
    MOV EDX,dword ptr [ESP]             ; 004ee972
    MOV ECX,EAX                         ; 004ee975
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ee977
    SUB EAX,EDX                         ; 004ee97e
    SHL EAX,0x3                         ; 004ee980
    MOV EDX,dword ptr [ECX + 0x5690]    ; 004ee983
    ADD EAX,EDX                         ; 004ee989
    MOV EDX,EBX                         ; 004ee98b
    MOV ECX,EAX                         ; 004ee98d
    CMP EBX,EAX                         ; 004ee98f
    JZ 0x004ee9a3                       ; 004ee991
        ;   XREF to: 004ee9a3 (CONDITIONAL_JUMP)  ; LAB_004ee9a3
    MOV ESI,dword ptr [EAX]             ; 004ee993
    MOV dword ptr [EBX],ESI             ; 004ee995
    MOV ESI,dword ptr [EAX + 0x4]       ; 004ee997
    MOV dword ptr [EBX + 0x4],ESI       ; 004ee99a
    MOV ESI,dword ptr [EAX + 0x8]       ; 004ee99d
    MOV dword ptr [EBX + 0x8],ESI       ; 004ee9a0
    LEA EAX,[EDX + 0xc]                 ; 004ee9a3
        ;   Label: LAB_004ee9a3
    LEA EDX,[ECX + 0xc]                 ; 004ee9a6
    CMP EAX,EDX                         ; 004ee9a9
    JZ 0x004ee940                       ; 004ee9ab
        ;   XREF to: 004ee940 (CONDITIONAL_JUMP)  ; LAB_004ee940
    MOV ECX,dword ptr [EDX]             ; 004ee9ad
    MOV dword ptr [EAX],ECX             ; 004ee9af
    MOV ECX,dword ptr [EDX + 0x4]       ; 004ee9b1
    MOV dword ptr [EAX + 0x4],ECX       ; 004ee9b4
    MOV ECX,dword ptr [EDX + 0x8]       ; 004ee9b7
    MOV dword ptr [EAX + 0x8],ECX       ; 004ee9ba
    MOV EAX,EBX                         ; 004ee9bd
    ADD ESP,0x4                         ; 004ee9bf
    POP ESI                             ; 004ee9c2
    POP EBX                             ; 004ee9c3
    RET                                 ; 004ee9c4

