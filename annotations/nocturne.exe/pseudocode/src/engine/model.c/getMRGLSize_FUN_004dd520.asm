; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_model_c_getMRGLSize_FUN_004dd520(SMRGLHeaderExtended *header)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   header
; Local Variables:
; undefined        Stack[-0x100]:1  local_100
;
; XREF[7]:
;   engine_3d.c_FUN_00405b40 at 00405b6e
;   engine_3d.c_FUN_00408fc0 at 00409010
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004c3c90 at 004c3ff4
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0 at 004c3abd
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_004c4080 at 004c40ea
;   engine_model.c_byteswapMRGLData_FUN_004dcc90 at 004dcca0
;   engine_model.c_loadMRGLTextures_FUN_004dd690 at 004dd6ca
;
; Referenced Globals:
;   void* switchdataD_004dd40c = 004dd53f
;   TerminatedCString s_MRGLSize_Bad_type_d_0058a637
;   TerminatedCString s_engine_model_c_0058a64f
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 004dd520
        ;   Label: engine_model.c_getMRGLSize_FUN_004dd520
    MOV EAX,dword ptr [ESP + 0x104]     ; 004dd526
    MOV EDX,dword ptr [EAX]             ; 004dd52d
    CMP EDX,0x42                        ; 004dd52f
    JA 0x004dd645                       ; 004dd532
        ;   XREF to: 004dd645 (CONDITIONAL_JUMP)  ; caseD_3f
    JMP dword ptr [EDX*0x4 + 0x4dd40c]  ; 004dd538 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EAX,0x4                         ; 004dd53f
        ;   Label: caseD_0
    ADD ESP,0x100                       ; 004dd544
    RET                                 ; 004dd54a
    MOV EAX,0x10                        ; 004dd54b
        ;   Label: caseD_1
    ADD ESP,0x100                       ; 004dd550
    RET                                 ; 004dd556
    MOV EDX,dword ptr [EAX + 0x8]       ; 004dd557
        ;   Label: caseD_2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dd55a
    SUB EAX,EDX                         ; 004dd561
    SHL EAX,0x2                         ; 004dd563
    ADD EAX,0xc                         ; 004dd566
    ADD ESP,0x100                       ; 004dd569
    RET                                 ; 004dd56f
    MOV EAX,dword ptr [EAX + 0x8]       ; 004dd570
        ;   Label: caseD_4
    SHL EAX,0x3                         ; 004dd573
    ADD EAX,0xc                         ; 004dd576
    ADD ESP,0x100                       ; 004dd579
    RET                                 ; 004dd57f
    MOV EAX,dword ptr [EAX + 0x4]       ; 004dd580
        ;   Label: caseD_5
    SHL EAX,0x2                         ; 004dd583
    ADD EAX,0x18                        ; 004dd586
    ADD ESP,0x100                       ; 004dd589
    RET                                 ; 004dd58f
    MOV EAX,0x20                        ; 004dd590
        ;   Label: caseD_9
    ADD ESP,0x100                       ; 004dd595
    RET                                 ; 004dd59b
    MOV EAX,0x8                         ; 004dd59c
        ;   Label: caseD_a
    ADD ESP,0x100                       ; 004dd5a1
    RET                                 ; 004dd5a7
    MOV EAX,0x1c                        ; 004dd5a8
        ;   Label: caseD_c
    ADD ESP,0x100                       ; 004dd5ad
    RET                                 ; 004dd5b3
    MOV EAX,0x18                        ; 004dd5b4
        ;   Label: caseD_d
    ADD ESP,0x100                       ; 004dd5b9
    RET                                 ; 004dd5bf
    MOV EAX,0x48                        ; 004dd5c0
        ;   Label: caseD_40
    ADD ESP,0x100                       ; 004dd5c5
    RET                                 ; 004dd5cb
    MOV EDX,dword ptr [EAX + 0x4]       ; 004dd5cc
        ;   Label: caseD_e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dd5cf
    SUB EAX,EDX                         ; 004dd5d6
    SHL EAX,0x2                         ; 004dd5d8
    ADD EAX,0x18                        ; 004dd5db
    ADD ESP,0x100                       ; 004dd5de
    RET                                 ; 004dd5e4
    MOV EAX,0x14                        ; 004dd5e5
        ;   Label: caseD_10
    ADD ESP,0x100                       ; 004dd5ea
    RET                                 ; 004dd5f0
    MOV EAX,dword ptr [EAX + 0x4]       ; 004dd5f1
        ;   Label: caseD_16
    SHL EAX,0x2                         ; 004dd5f4
    ADD EAX,0x8                         ; 004dd5f7
    ADD ESP,0x100                       ; 004dd5fa
    RET                                 ; 004dd600
    MOV EAX,0xc                         ; 004dd601
        ;   Label: caseD_17
    ADD ESP,0x100                       ; 004dd606
    RET                                 ; 004dd60c
    MOV EAX,dword ptr [EAX + 0x8]       ; 004dd60d
        ;   Label: caseD_1d
    SHL EAX,0x5                         ; 004dd610
    ADD EAX,0x1c                        ; 004dd613
    ADD ESP,0x100                       ; 004dd616
    RET                                 ; 004dd61c
    MOV EAX,dword ptr [EAX + 0x8]       ; 004dd61d
        ;   Label: caseD_1f
    SHL EAX,0x2                         ; 004dd620
    ADD EAX,0xc                         ; 004dd623
    ADD ESP,0x100                       ; 004dd626
    RET                                 ; 004dd62c
    MOV EAX,0x158                       ; 004dd62d
        ;   Label: caseD_20
    ADD ESP,0x100                       ; 004dd632
    RET                                 ; 004dd638
    MOV EAX,0x3d60                      ; 004dd639
        ;   Label: caseD_26
    ADD ESP,0x100                       ; 004dd63e
    RET                                 ; 004dd644
    PUSH EDX                            ; 004dd645
        ;   Label: caseD_13
    PUSH 0x58a637                       ; 004dd646 | = "MRGLSize: Bad type : %d"
    LEA EAX,[ESP + 0x8]                 ; 004dd64b
    PUSH EAX                            ; 004dd64f
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004dd650
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x58a64f                    ; 004dd655 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 004dd65a
    MOV EAX,ESP                         ; 004dd65d
    MOV ECX,0x25b                       ; 004dd65f
    PUSH EAX                            ; 004dd664
    MOV dword ptr [0x01cc4800],EDX      ; 004dd665 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004dd66b | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004dd671
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    MOV EAX,0x4                         ; 004dd676
    ADD ESP,0x4                         ; 004dd67b
    ADD ESP,0x100                       ; 004dd67e
    RET                                 ; 004dd684

