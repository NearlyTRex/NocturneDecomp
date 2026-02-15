; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_FUN_004d5870(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined1       Stack[-0x80]:1  local_80
; undefined1       Stack[-0x74]:1  local_74
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d3ba1
;
; Referenced Globals:
;   TerminatedCString s_core_gabriela_cpp_0062afaf
;   TerminatedCString s_Hell_froze_invalid_pickU_0062afc4
;   double DOUBLE_0062afed = -0.800000000000000
;   double DOUBLE_0062aff5 = 2
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 03114278
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 DAT_032613d4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5870
        ;   Label: core_gabriela.cpp_CGabriella_FUN_004d5870
    PUSH ESI                            ; 004d5871
    PUSH EDI                            ; 004d5872
    PUSH EBP                            ; 004d5873
    MOV EBP,ESP                         ; 004d5874
    SUB ESP,0xb0                        ; 004d5876
    AND ESP,0xfffffff8                  ; 004d587c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004d587f
    PUSH 0x6598c0                       ; 004d5882 | g_CVectorTypeInfo
    PUSH 0x4                            ; 004d5887
    LEA EAX,[ESP + 0xc]                 ; 004d5889
    PUSH EAX                            ; 004d588d
    MOV dword ptr [ESI + 0x1fba0],0x0   ; 004d588e
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004d5898
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004d589d
    LEA EAX,[ESP + 0x64]                ; 004d58a0
    MOV EBX,0x3ff5c28f                  ; 004d58a4
    PUSH EAX                            ; 004d58a9
    LEA EAX,[ESP + 0x50]                ; 004d58aa
    MOV EDX,0xbda3d70a                  ; 004d58ae
    PUSH EAX                            ; 004d58b3
    MOV ECX,0x3ee147ae                  ; 004d58b4
    MOV dword ptr [ESP + 0x6c],EDX      ; 004d58b9
    PUSH ESI                            ; 004d58bd
    MOV dword ptr [ESP + 0x74],ECX      ; 004d58be
    MOV dword ptr [ESP + 0x78],EBX      ; 004d58c2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d58c6
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 004d58cb
    LEA EAX,[ESP + 0x1c]                ; 004d58cd
    ADD ESP,0xc                         ; 004d58d1
    CMP EAX,EDX                         ; 004d58d4
    JZ 0x004d58ec                       ; 004d58d6
        ;   XREF to: 004d58ec (CONDITIONAL_JUMP)  ; LAB_004d58ec
    MOV EAX,dword ptr [EDX]             ; 004d58d8
    MOV dword ptr [ESP + 0x10],EAX      ; 004d58da
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d58de
    MOV dword ptr [ESP + 0x14],EAX      ; 004d58e1
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d58e5
    MOV dword ptr [ESP + 0x18],EAX      ; 004d58e8
    XOR EAX,EAX                         ; 004d58ec
        ;   Label: LAB_004d58ec
    MOV dword ptr [ESP + 0x74],EAX      ; 004d58ee
    LEA EAX,[ESP + 0x70]                ; 004d58f2
    PUSH EAX                            ; 004d58f6
    LEA EAX,[ESP + 0x8c]                ; 004d58f7
    PUSH EAX                            ; 004d58fe
    MOV EDI,0xbf266666                  ; 004d58ff
    MOV EDX,0x4007ae14                  ; 004d5904
    PUSH ESI                            ; 004d5909
    MOV dword ptr [ESP + 0x7c],EDI      ; 004d590a
    MOV dword ptr [ESP + 0x84],EDX      ; 004d590e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d5915
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 004d591a
    LEA EAX,[ESP + 0x28]                ; 004d591c
    ADD ESP,0xc                         ; 004d5920
    CMP EAX,EDX                         ; 004d5923
    JZ 0x004d593b                       ; 004d5925
        ;   XREF to: 004d593b (CONDITIONAL_JUMP)  ; LAB_004d593b
    MOV EAX,dword ptr [EDX]             ; 004d5927
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d5929
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d592d
    MOV dword ptr [ESP + 0x20],EAX      ; 004d5930
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d5934
    MOV dword ptr [ESP + 0x24],EAX      ; 004d5937
    LEA EAX,[ESP + 0x34]                ; 004d593b
        ;   Label: LAB_004d593b
    PUSH EAX                            ; 004d593f
    LEA EAX,[ESP + 0x44]                ; 004d5940
    XOR ECX,ECX                         ; 004d5944
    PUSH EAX                            ; 004d5946
    MOV EDI,0x40000000                  ; 004d5947
    MOV dword ptr [ESP + 0x3c],ECX      ; 004d594c
    PUSH ESI                            ; 004d5950
    MOV dword ptr [ESP + 0x44],ECX      ; 004d5951
    MOV dword ptr [ESP + 0x48],EDI      ; 004d5955
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d5959
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 004d595e
    LEA EAX,[ESP + 0x34]                ; 004d5960
    ADD ESP,0xc                         ; 004d5964
    CMP EAX,EDX                         ; 004d5967
    JNZ 0x004d59d7                      ; 004d5969
        ;   XREF to: 004d59d7 (CONDITIONAL_JUMP)  ; LAB_004d59d7
    MOV EAX,0x40800000                  ; 004d596b
        ;   Label: LAB_004d596b
    XOR EDX,EDX                         ; 004d5970
    XOR EDI,EDI                         ; 004d5972
    MOV dword ptr [ESP + 0x9c],EAX      ; 004d5974
    LEA EAX,[ESI + 0x20]                ; 004d597b
    MOV dword ptr [ESP + 0xa8],EDX      ; 004d597e
    MOV dword ptr [ESP + 0x94],EAX      ; 004d5985
    MOV EAX,[0x006810c8]                ; 004d598c | g_CDemonSetPtr
        ;   Label: LAB_004d598c
    MOV EDX,dword ptr [ESP + 0xa8]      ; 004d5991
    CMP EDX,dword ptr [EAX + 0x14d154]  ; 004d5998 | g_CDemonSetInstance.actor_count
    JGE 0x004d5b60                      ; 004d599e
        ;   XREF to: 004d5b60 (CONDITIONAL_JUMP)  ; LAB_004d5b60
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d158] ; 004d59a4 | g_CDemonSetInstance.actors[0] | DAT_032613d4
    PUSH EBX                            ; 004d59ab
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d59ac
    CALL dword ptr [EAX + 0x8c]         ; 004d59b2
    ADD ESP,0x4                         ; 004d59b8
    TEST EAX,EAX                        ; 004d59bb
    JZ 0x004d5b24                       ; 004d59bd
        ;   XREF to: 004d5b24 (CONDITIONAL_JUMP)  ; LAB_004d5b24
    MOV ECX,dword ptr [ESP + 0xa8]      ; 004d59c3
        ;   Label: LAB_004d59c3
    INC ECX                             ; 004d59ca
    ADD EDI,0x4                         ; 004d59cb
    MOV dword ptr [ESP + 0xa8],ECX      ; 004d59ce
    JMP 0x004d598c                      ; 004d59d5
        ;   XREF to: 004d598c (UNCONDITIONAL_JUMP)  ; LAB_004d598c
    MOV EAX,dword ptr [EDX]             ; 004d59d7
        ;   Label: LAB_004d59d7
    MOV dword ptr [ESP + 0x28],EAX      ; 004d59d9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d59dd
    MOV dword ptr [ESP + 0x2c],EAX      ; 004d59e0
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d59e4
    MOV dword ptr [ESP + 0x30],EAX      ; 004d59e7
    JMP 0x004d596b                      ; 004d59eb
        ;   XREF to: 004d596b (UNCONDITIONAL_JUMP)  ; LAB_004d596b
    CMP dword ptr [ESI + 0x24b4],0x0    ; 004d59f0
        ;   Label: LAB_004d59f0
    JNZ 0x004d59c3                      ; 004d59f7
        ;   XREF to: 004d59c3 (CONDITIONAL_JUMP)  ; LAB_004d59c3
    IMUL EAX,dword ptr [ESP + 0xa0],0xc ; 004d59f9
        ;   Label: LAB_004d59f9
    LEA EDX,[ESP + 0x4]                 ; 004d5a01
    ADD EDX,EAX                         ; 004d5a05
    LEA EAX,[EBX + 0x20]                ; 004d5a07
    FLD float ptr [EAX]                 ; 004d5a0a
    FSUB float ptr [EDX]                ; 004d5a0c
    FSTP float ptr [ESP + 0x7c]         ; 004d5a0e
    FLD float ptr [EAX + 0x4]           ; 004d5a12
    FSUB float ptr [EDX + 0x4]          ; 004d5a15
    FST float ptr [ESP + 0x80]          ; 004d5a18
    FLD float ptr [EAX + 0x8]           ; 004d5a1f
    FXCH                                ; 004d5a22
    FABS                                ; 004d5a24
    FXCH                                ; 004d5a26
    FSUB float ptr [EDX + 0x8]          ; 004d5a28
    FSTP float ptr [ESP + 0x84]         ; 004d5a2b
    FCOMP double ptr [0x0062aff5]       ; 004d5a32 | DOUBLE_0062aff5
    FNSTSW AX                           ; 004d5a38
    SAHF                                ; 004d5a3a
    JA 0x004d59c3                       ; 004d5a3b
        ;   XREF to: 004d59c3 (CONDITIONAL_JUMP)  ; LAB_004d59c3
    FLD float ptr [ESP + 0x84]          ; 004d5a3d
    FMUL ST0                            ; 004d5a44
    FLD float ptr [ESP + 0x7c]          ; 004d5a46
    FMUL ST0                            ; 004d5a4a
    FADDP                               ; 004d5a4c
    FST float ptr [ESP + 0xa4]          ; 004d5a4e
    FCOMP float ptr [ESP + 0x9c]        ; 004d5a55
    FNSTSW AX                           ; 004d5a5c
    SAHF                                ; 004d5a5e
    JA 0x004d59c3                       ; 004d5a5f
        ;   XREF to: 004d59c3 (CONDITIONAL_JUMP)  ; LAB_004d59c3
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004d5a65
    MOV dword ptr [ESP + 0x9c],EAX      ; 004d5a6c
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004d5a73
    MOV dword ptr [ESI + 0x1fba0],EBX   ; 004d5a7a
    MOV dword ptr [ESP + 0x98],EAX      ; 004d5a80
    JMP 0x004d59c3                      ; 004d5a87
        ;   XREF to: 004d59c3 (UNCONDITIONAL_JUMP)  ; LAB_004d59c3
    CMP dword ptr [ESI + 0x24b4],0x0    ; 004d5a8c
        ;   Label: LAB_004d5a8c
    JNZ 0x004d59c3                      ; 004d5a93
        ;   XREF to: 004d59c3 (CONDITIONAL_JUMP)  ; LAB_004d59c3
    MOV EAX,dword ptr [ESP + 0x94]      ; 004d5a99
    PUSH EAX                            ; 004d5aa0
    LEA EAX,[ESP + 0x5c]                ; 004d5aa1
    PUSH EAX                            ; 004d5aa5
    PUSH EBX                            ; 004d5aa6
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004d5aa7
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004d5aac
    FLD float ptr [ESP + 0x5c]          ; 004d5aaf
    FMUL ST0                            ; 004d5ab3
    FLD float ptr [ESP + 0x58]          ; 004d5ab5
    FMUL ST0                            ; 004d5ab9
    FADDP                               ; 004d5abb
    FLD float ptr [ESP + 0x60]          ; 004d5abd
    FMUL ST0                            ; 004d5ac1
    FADDP                               ; 004d5ac3
    FSQRT                               ; 004d5ac5
    FST float ptr [ESP]                 ; 004d5ac7
    FLDZ                                ; 004d5aca
    FCOMPP                              ; 004d5acc
    FNSTSW AX                           ; 004d5ace
    SAHF                                ; 004d5ad0
    JNC 0x004d5b14                      ; 004d5ad1
        ;   XREF to: 004d5b14 (CONDITIONAL_JUMP)  ; LAB_004d5b14
    FLD1                                ; 004d5ad3
    FLD float ptr [ESP + 0x58]          ; 004d5ad5
    FXCH                                ; 004d5ad9
    FDIV float ptr [ESP]                ; 004d5adb
    FXCH                                ; 004d5ade
    FMUL ST1                            ; 004d5ae0
    FLD float ptr [ESP + 0x5c]          ; 004d5ae2
    FMUL ST2                            ; 004d5ae6
    FLD float ptr [ESP + 0x60]          ; 004d5ae8
    FMULP ST3                           ; 004d5aec
    FXCH                                ; 004d5aee
    FSTP float ptr [ESP + 0x58]         ; 004d5af0
    FSTP float ptr [ESP + 0x5c]         ; 004d5af4
    FSTP float ptr [ESP + 0x60]         ; 004d5af8
    FLD float ptr [ESP + 0x60]          ; 004d5afc
        ;   Label: LAB_004d5afc
    FCOMP double ptr [0x0062afed]       ; 004d5b00 | DOUBLE_0062afed
    FNSTSW AX                           ; 004d5b06
    SAHF                                ; 004d5b08
    JA 0x004d59c3                       ; 004d5b09
        ;   XREF to: 004d59c3 (CONDITIONAL_JUMP)  ; LAB_004d59c3
    JMP 0x004d59f9                      ; 004d5b0f
        ;   XREF to: 004d59f9 (UNCONDITIONAL_JUMP)  ; LAB_004d59f9
    XOR EDX,EDX                         ; 004d5b14
        ;   Label: LAB_004d5b14
    MOV dword ptr [ESP + 0x5c],EDX      ; 004d5b16
    MOV dword ptr [ESP + 0x58],EDX      ; 004d5b1a
    MOV dword ptr [ESP + 0x60],EDX      ; 004d5b1e
    JMP 0x004d5afc                      ; 004d5b22
        ;   XREF to: 004d5afc (UNCONDITIONAL_JUMP)  ; LAB_004d5afc
    PUSH ESI                            ; 004d5b24
        ;   Label: LAB_004d5b24
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d5b25
    PUSH EBX                            ; 004d5b2b
    CALL dword ptr [EAX + 0x7c]         ; 004d5b2c
    ADD ESP,0x8                         ; 004d5b2f
    MOV dword ptr [ESP + 0xa0],EAX      ; 004d5b32
    CMP EAX,0x2                         ; 004d5b39
    JNC 0x004d5b4c                      ; 004d5b3c
        ;   XREF to: 004d5b4c (CONDITIONAL_JUMP)  ; LAB_004d5b4c
    CMP EAX,0x1                         ; 004d5b3e
    JZ 0x004d5a8c                       ; 004d5b41
        ;   XREF to: 004d5a8c (CONDITIONAL_JUMP)  ; LAB_004d5a8c
    JMP 0x004d59c3                      ; 004d5b47
        ;   XREF to: 004d59c3 (UNCONDITIONAL_JUMP)  ; LAB_004d59c3
    JBE 0x004d59f0                      ; 004d5b4c
        ;   XREF to: 004d59f0 (CONDITIONAL_JUMP)  ; LAB_004d59f0
        ;   Label: LAB_004d5b4c
    CMP EAX,0x3                         ; 004d5b52
    JZ 0x004d59f0                       ; 004d5b55
        ;   XREF to: 004d59f0 (CONDITIONAL_JUMP)  ; LAB_004d59f0
    JMP 0x004d59c3                      ; 004d5b5b
        ;   XREF to: 004d59c3 (UNCONDITIONAL_JUMP)  ; LAB_004d59c3
    MOV EBX,dword ptr [ESI + 0x1fba0]   ; 004d5b60
        ;   Label: LAB_004d5b60
    TEST EBX,EBX                        ; 004d5b66
    JZ 0x004d5bc9                       ; 004d5b68
        ;   XREF to: 004d5bc9 (CONDITIONAL_JUMP)  ; LAB_004d5bc9
    MOV EDX,dword ptr [ESP + 0x98]      ; 004d5b6a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d5b71
    SUB EAX,EDX                         ; 004d5b78
    FLD float ptr [EBX + 0x20]          ; 004d5b7a
    FSUB float ptr [ESP + EAX*0x4 + 0x4] ; 004d5b7d
    FADD float ptr [ESI + 0x20]         ; 004d5b81
    MOV EDX,dword ptr [ESI + 0x1fba0]   ; 004d5b84
    FSTP float ptr [ESI + 0x20]         ; 004d5b8a
    FLD float ptr [EDX + 0x28]          ; 004d5b8d
    FSUB float ptr [ESP + EAX*0x4 + 0xc] ; 004d5b90
    FADD float ptr [ESI + 0x28]         ; 004d5b94
    LEA EAX,[ESI + 0x158]               ; 004d5b97
    FSTP float ptr [ESI + 0x28]         ; 004d5b9d
    MOV ESI,dword ptr [ESP + 0x98]      ; 004d5ba0
    CMP ESI,0x2                         ; 004d5ba7
    JNC 0x004d5c06                      ; 004d5baa
        ;   XREF to: 004d5c06 (CONDITIONAL_JUMP)  ; LAB_004d5c06
    CMP ESI,0x1                         ; 004d5bac
    JNZ 0x004d5bd9                      ; 004d5baf
        ;   XREF to: 004d5bd9 (CONDITIONAL_JUMP)  ; LAB_004d5bd9
    PUSH ESI                            ; 004d5bb1
    PUSH 0xe                            ; 004d5bb2
    PUSH EAX                            ; 004d5bb4
        ;   Label: LAB_004d5bb4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d5bb5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5bba
    MOV EAX,0x1                         ; 004d5bbd
        ;   Label: LAB_004d5bbd
    MOV ESP,EBP                         ; 004d5bc2
        ;   Label: LAB_004d5bc2
    POP EBP                             ; 004d5bc4
    POP EDI                             ; 004d5bc5
    POP ESI                             ; 004d5bc6
    POP EBX                             ; 004d5bc7
    RET                                 ; 004d5bc8
    XOR EAX,EAX                         ; 004d5bc9
        ;   Label: LAB_004d5bc9
    JMP 0x004d5bc2                      ; 004d5bcb
        ;   XREF to: 004d5bc2 (UNCONDITIONAL_JUMP)  ; LAB_004d5bc2
    PUSH 0x1                            ; 004d5bcd
        ;   Label: LAB_004d5bcd
    PUSH 0xf                            ; 004d5bcf
    JMP 0x004d5bb4                      ; 004d5bd1
        ;   XREF to: 004d5bb4 (UNCONDITIONAL_JUMP)  ; LAB_004d5bb4
    PUSH 0x1                            ; 004d5bd3
        ;   Label: LAB_004d5bd3
    PUSH 0x4                            ; 004d5bd5
    JMP 0x004d5bb4                      ; 004d5bd7
        ;   XREF to: 004d5bb4 (UNCONDITIONAL_JUMP)  ; LAB_004d5bb4
    MOV EDI,dword ptr [ESP + 0x98]      ; 004d5bd9
        ;   Label: LAB_004d5bd9
    PUSH EDI                            ; 004d5be0
    MOV EBX,0x62afaf                    ; 004d5be1 | = "..\\core\\gabriela.cpp"
    MOV ESI,0x638                       ; 004d5be6
    PUSH 0x62afc4                       ; 004d5beb | = "Hell froze - invalid pickUpType: %d"
    MOV dword ptr [0x02f0ca48],EBX      ; 004d5bf0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004d5bf6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004d5bfc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004d5c01
    JMP 0x004d5bbd                      ; 004d5c04
        ;   XREF to: 004d5bbd (UNCONDITIONAL_JUMP)  ; LAB_004d5bbd
    JBE 0x004d5bcd                      ; 004d5c06
        ;   XREF to: 004d5bcd (CONDITIONAL_JUMP)  ; LAB_004d5bcd
        ;   Label: LAB_004d5c06
    CMP ESI,0x3                         ; 004d5c08
    JZ 0x004d5bd3                       ; 004d5c0b
        ;   XREF to: 004d5bd3 (CONDITIONAL_JUMP)  ; LAB_004d5bd3
    JMP 0x004d5bd9                      ; 004d5c0d
        ;   XREF to: 004d5bd9 (UNCONDITIONAL_JUMP)  ; LAB_004d5bd9

