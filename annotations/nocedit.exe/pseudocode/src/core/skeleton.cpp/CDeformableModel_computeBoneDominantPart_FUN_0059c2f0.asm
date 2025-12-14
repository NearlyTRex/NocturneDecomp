; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0(CDeformableModel * model_ptr, int bone_index, CVector3f * reference_position)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   model_ptr
; int              Stack[0x8]:4   bone_index
; CVector3f *      Stack[0xc]:4   reference_position
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 at 0059d90d
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064eab7
;   TerminatedCString s_core_skeleton_cpp_0064eacc
;   TerminatedCString s_Out_of_memory_0064eae1
;   TerminatedCString s_core_skeleton_cpp_0064eaef
;   float FLOAT_00662ea0 = 0.00390625
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c2f0
        ;   Label: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
    PUSH EDI                            ; 0059c2f1
    PUSH EBP                            ; 0059c2f2
    SUB ESP,0x60                        ; 0059c2f3
    MOV EDI,dword ptr [ESP + 0x74]      ; 0059c2f6
    MOV EBX,0x7149f2ca                  ; 0059c2fa
    XOR EDX,EDX                         ; 0059c2ff
    MOV EAX,dword ptr [ESP + 0x70]      ; 0059c301
    MOV dword ptr [ESP + 0x2c],EDX      ; 0059c305
    MOV dword ptr [ESP + 0x24],EBX      ; 0059c309
    MOV dword ptr [ESP + 0x3c],EDX      ; 0059c30d
    MOV EBP,dword ptr [EAX + 0x7140]    ; 0059c311
    MOV dword ptr [ESP + 0x28],EDX      ; 0059c317
    CMP EBP,0x2                         ; 0059c31b
    JGE 0x0059c329                      ; 0059c31e
        ;   XREF to: 0059c329 (CONDITIONAL_JUMP)  ; LAB_0059c329
    XOR EAX,EAX                         ; 0059c320
    ADD ESP,0x60                        ; 0059c322
    POP EBP                             ; 0059c325
    POP EDI                             ; 0059c326
    POP EBX                             ; 0059c327
    RET                                 ; 0059c328
    PUSH 0x5ef                          ; 0059c329
        ;   Label: LAB_0059c329
    PUSH 0x64eab7                       ; 0059c32e | = "..\\core\\skeleton.cpp"
    PUSH 0x22b4                         ; 0059c333
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0059c338
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0059c33d
    TEST EAX,EAX                        ; 0059c340
    JZ 0x0059c34d                       ; 0059c342
        ;   XREF to: 0059c34d (CONDITIONAL_JUMP)  ; LAB_0059c34d
    PUSH EAX                            ; 0059c344
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 0059c345
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059c34a
    MOV dword ptr [ESP + 0x48],EAX      ; 0059c34d
        ;   Label: LAB_0059c34d
    TEST EAX,EAX                        ; 0059c351
    JNZ 0x0059c377                      ; 0059c353
        ;   XREF to: 0059c377 (CONDITIONAL_JUMP)  ; LAB_0059c377
    MOV EAX,0x64eacc                    ; 0059c355 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x5f0                       ; 0059c35a
    PUSH 0x64eae1                       ; 0059c35f | = "Out of memory"
    MOV [0x02f0ca48],EAX                ; 0059c364 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0059c369 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059c36f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059c374
    PUSH ESI                            ; 0059c377
        ;   Label: LAB_0059c377
    MOV ECX,dword ptr [ESP + 0x74]      ; 0059c378
    PUSH ECX                            ; 0059c37c
    MOV EBX,dword ptr [ESP + 0x50]      ; 0059c37d
    PUSH EBX                            ; 0059c381
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 ; 0059c382
        ;   XREF to: 005a0480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 0059c387
    PUSH EBX                            ; 0059c38a
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 0059c38b
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059c390
    PUSH EBX                            ; 0059c393
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0059c394
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059c399
    PUSH 0x0                            ; 0059c39c
    PUSH EBX                            ; 0059c39e
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 0059c39f
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0059c3a4
    PUSH EDI                            ; 0059c3a7
    LEA EAX,[ESP + 0x8]                 ; 0059c3a8
    PUSH EAX                            ; 0059c3ac
    PUSH EBX                            ; 0059c3ad
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0059c3ae
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0059c3b3
    MOV EAX,dword ptr [ESP + 0x74]      ; 0059c3b6
    XOR ECX,ECX                         ; 0059c3ba
    MOV EBX,dword ptr [EAX + 0x7140]    ; 0059c3bc
    MOV dword ptr [ESP + 0x38],ECX      ; 0059c3c2
    TEST EBX,EBX                        ; 0059c3c6
    JLE 0x0059c59d                      ; 0059c3c8
        ;   XREF to: 0059c59d (CONDITIONAL_JUMP)  ; LAB_0059c59d
    MOV dword ptr [ESP + 0x34],EAX      ; 0059c3ce
    XOR EAX,EAX                         ; 0059c3d2
        ;   Label: LAB_0059c3d2
    MOV dword ptr [ESP + 0x58],EAX      ; 0059c3d4
    MOV dword ptr [ESP + 0x54],EAX      ; 0059c3d8
    MOV dword ptr [ESP + 0x48],EAX      ; 0059c3dc
    MOV dword ptr [ESP + 0x5c],EAX      ; 0059c3e0
    MOV EAX,dword ptr [ESP + 0x34]      ; 0059c3e4
    MOV ESI,dword ptr [ESP + 0x40]      ; 0059c3e8
    MOV dword ptr [ESP + 0x3c],EAX      ; 0059c3ec
    IMUL EAX,ESI,0x12                   ; 0059c3f0
    MOV dword ptr [ESP + 0x44],EAX      ; 0059c3f3
    MOV EAX,dword ptr [ESP + 0x34]      ; 0059c3f7
    CMP dword ptr [EAX + 0x7164],0x0    ; 0059c3fb
    JLE 0x0059c481                      ; 0059c402
        ;   XREF to: 0059c481 (CONDITIONAL_JUMP)  ; LAB_0059c481
    MOV EAX,dword ptr [ESP + 0x74]      ; 0059c408
        ;   Label: LAB_0059c408
    MOV EBP,dword ptr [ESP + 0x44]      ; 0059c40c
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0059c410
    ADD EAX,EBP                         ; 0059c413
    MOV EBP,EAX                         ; 0059c415
    ADD EAX,0x6                         ; 0059c417
    MOV dword ptr [ESP + 0x50],EAX      ; 0059c41a
    XOR EAX,EAX                         ; 0059c41e
        ;   Label: LAB_0059c41e
    MOV AX,word ptr [EBP]               ; 0059c420
    IMUL EAX,EAX,0x34                   ; 0059c424
    MOV ESI,dword ptr [ESP + 0x74]      ; 0059c427
    MOV ESI,dword ptr [ESI + 0x40]      ; 0059c42b
    ADD ESI,EAX                         ; 0059c42e
    MOV EBX,ESI                         ; 0059c430
    MOV EDX,ESI                         ; 0059c432
    XOR EAX,EAX                         ; 0059c434
    XOR ECX,ECX                         ; 0059c436
        ;   Label: LAB_0059c436
    MOV CL,byte ptr [ESI]               ; 0059c438
    CMP EAX,ECX                         ; 0059c43a
    JGE 0x0059c4a7                      ; 0059c43c
        ;   XREF to: 0059c4a7 (CONDITIONAL_JUMP)  ; LAB_0059c4a7
    XOR ECX,ECX                         ; 0059c442
    MOV CL,byte ptr [EBX + 0x1]         ; 0059c444
    CMP ECX,EDI                         ; 0059c447
    JZ 0x0059c52b                       ; 0059c449
        ;   XREF to: 0059c52b (CONDITIONAL_JUMP)  ; LAB_0059c52b
    ADD EDX,0x4                         ; 0059c44f
    INC EAX                             ; 0059c452
    INC EBX                             ; 0059c453
    JMP 0x0059c436                      ; 0059c454
        ;   XREF to: 0059c436 (UNCONDITIONAL_JUMP)  ; LAB_0059c436
    MOV EAX,dword ptr [ESP + 0x44]      ; 0059c456
        ;   Label: LAB_0059c456
    MOV EDX,dword ptr [ESP + 0x40]      ; 0059c45a
    MOV ECX,dword ptr [ESP + 0x48]      ; 0059c45e
    INC EDX                             ; 0059c462
    ADD EAX,0x12                        ; 0059c463
    MOV dword ptr [ESP + 0x40],EDX      ; 0059c466
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0059c46a
    INC ECX                             ; 0059c46e
    MOV dword ptr [ESP + 0x44],EAX      ; 0059c46f
    MOV EBX,dword ptr [EDX + 0x7164]    ; 0059c473
    MOV dword ptr [ESP + 0x48],ECX      ; 0059c479
    CMP ECX,EBX                         ; 0059c47d
    JL 0x0059c408                       ; 0059c47f
        ;   XREF to: 0059c408 (CONDITIONAL_JUMP)  ; LAB_0059c408
    FLD float ptr [ESP + 0x5c]          ; 0059c481
        ;   Label: LAB_0059c481
    FCOMP float ptr [ESP + 0x30]        ; 0059c485
    FNSTSW AX                           ; 0059c489
    SAHF                                ; 0059c48b
    JBE 0x0059c540                      ; 0059c48c
        ;   XREF to: 0059c540 (CONDITIONAL_JUMP)  ; LAB_0059c540
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059c492
    MOV dword ptr [ESP + 0x30],EAX      ; 0059c496
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059c49a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0059c49e
    JMP 0x0059c577                      ; 0059c4a2
        ;   XREF to: 0059c577 (UNCONDITIONAL_JUMP)  ; LAB_0059c577
    XOR EDX,EDX                         ; 0059c4a7
        ;   Label: LAB_0059c4a7
    MOV DX,word ptr [EBP]               ; 0059c4a9
    IMUL EDX,EDX,0xc                    ; 0059c4ad
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0059c4b0
    MOV EAX,dword ptr [EAX + 0x2234]    ; 0059c4b4
    LEA EBX,[ESP + 0x10]                ; 0059c4ba
    ADD EAX,EDX                         ; 0059c4be
    FILD dword ptr [EAX]                ; 0059c4c0
    FMUL float ptr [0x00662ea0]         ; 0059c4c2 | FLOAT_00662ea0
    FSTP float ptr [EBX]                ; 0059c4c8
    FILD dword ptr [EAX + 0x4]          ; 0059c4ca
    FMUL float ptr [0x00662ea0]         ; 0059c4cd | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x4]          ; 0059c4d3
    FILD dword ptr [EAX + 0x8]          ; 0059c4d6
    FMUL float ptr [0x00662ea0]         ; 0059c4d9 | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x8]          ; 0059c4df
    FLD float ptr [ESP + 0x10]          ; 0059c4e2
    FSUB float ptr [ESP + 0x4]          ; 0059c4e6
    FMUL ST0                            ; 0059c4ea
    FLD float ptr [ESP + 0x14]          ; 0059c4ec
    FSUB float ptr [ESP + 0x8]          ; 0059c4f0
    FMUL ST0                            ; 0059c4f4
    FLD float ptr [ESP + 0x18]          ; 0059c4f6
    FXCH                                ; 0059c4fa
    FADDP ST2,ST0                       ; 0059c4fc
    FSUB float ptr [ESP + 0xc]          ; 0059c4fe
    FMUL ST0                            ; 0059c502
    ADD EBP,0x2                         ; 0059c504
    MOV EAX,dword ptr [ESP + 0x54]      ; 0059c507
    MOV EDX,dword ptr [ESP + 0x50]      ; 0059c50b
    FADDP                               ; 0059c50f
    INC EAX                             ; 0059c511
    FADD float ptr [ESP + 0x58]         ; 0059c512
    MOV dword ptr [ESP + 0x54],EAX      ; 0059c516
    FSTP float ptr [ESP + 0x58]         ; 0059c51a
    CMP EBP,EDX                         ; 0059c51e
    JZ 0x0059c456                       ; 0059c520
        ;   XREF to: 0059c456 (CONDITIONAL_JUMP)  ; LAB_0059c456
    JMP 0x0059c41e                      ; 0059c526
        ;   XREF to: 0059c41e (UNCONDITIONAL_JUMP)  ; LAB_0059c41e
    FLD float ptr [ESP + 0x5c]          ; 0059c52b
        ;   Label: LAB_0059c52b
    FADD float ptr [EDX + 0x4]          ; 0059c52f
    FSTP float ptr [ESP + 0x5c]         ; 0059c532
    ADD EDX,0x4                         ; 0059c536
    INC EAX                             ; 0059c539
    INC EBX                             ; 0059c53a
    JMP 0x0059c436                      ; 0059c53b
        ;   XREF to: 0059c436 (UNCONDITIONAL_JUMP)  ; LAB_0059c436
    TEST dword ptr [ESP + 0x30],0x7fffffff ; 0059c540
        ;   Label: LAB_0059c540
    JNZ 0x0059c577                      ; 0059c548
        ;   XREF to: 0059c577 (CONDITIONAL_JUMP)  ; LAB_0059c577
    MOV EAX,dword ptr [ESP + 0x54]      ; 0059c54a
    MOV dword ptr [ESP + 0x60],EAX      ; 0059c54e
    FILD dword ptr [ESP + 0x60]         ; 0059c552
    FDIVR float ptr [ESP + 0x58]        ; 0059c556
    FST float ptr [ESP + 0x58]          ; 0059c55a
    FCOMP float ptr [ESP + 0x28]        ; 0059c55e
    FNSTSW AX                           ; 0059c562
    SAHF                                ; 0059c564
    JNC 0x0059c577                      ; 0059c565
        ;   XREF to: 0059c577 (CONDITIONAL_JUMP)  ; LAB_0059c577
    MOV EAX,dword ptr [ESP + 0x58]      ; 0059c567
    MOV dword ptr [ESP + 0x28],EAX      ; 0059c56b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059c56f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0059c573
    MOV ESI,dword ptr [ESP + 0x34]      ; 0059c577
        ;   Label: LAB_0059c577
    MOV EBP,dword ptr [ESP + 0x38]      ; 0059c57b
    MOV EDX,dword ptr [ESP + 0x74]      ; 0059c57f
    ADD ESI,0x60                        ; 0059c583
    INC EBP                             ; 0059c586
    MOV ECX,dword ptr [EDX + 0x7140]    ; 0059c587
    MOV dword ptr [ESP + 0x34],ESI      ; 0059c58d
    MOV dword ptr [ESP + 0x38],EBP      ; 0059c591
    CMP EBP,ECX                         ; 0059c595
    JL 0x0059c3d2                       ; 0059c597
        ;   XREF to: 0059c3d2 (CONDITIONAL_JUMP)  ; LAB_0059c3d2
    MOV ESI,0x628                       ; 0059c59d
        ;   Label: LAB_0059c59d
    MOV EBX,0x64eaef                    ; 0059c5a2 | = "..\\core\\skeleton.cpp"
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0059c5a7
    MOV dword ptr [0x02f0d944],ESI      ; 0059c5ab | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EBX      ; 0059c5b1 | g_CurrentDebugFilename
    TEST EDI,EDI                        ; 0059c5b7
    JZ 0x0059c5c6                       ; 0059c5b9
        ;   XREF to: 0059c5c6 (CONDITIONAL_JUMP)  ; LAB_0059c5c6
    PUSH 0x2                            ; 0059c5bb
    MOV EAX,dword ptr [EDI + 0x50]      ; 0059c5bd
    PUSH EDI                            ; 0059c5c0
    CALL dword ptr [EAX]                ; 0059c5c1
    ADD ESP,0x8                         ; 0059c5c3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0059c5c6
        ;   Label: LAB_0059c5c6
    POP ESI                             ; 0059c5ca
    ADD ESP,0x60                        ; 0059c5cb
    POP EBP                             ; 0059c5ce
    POP EDI                             ; 0059c5cf
    POP EBX                             ; 0059c5d0
    RET                                 ; 0059c5d1

