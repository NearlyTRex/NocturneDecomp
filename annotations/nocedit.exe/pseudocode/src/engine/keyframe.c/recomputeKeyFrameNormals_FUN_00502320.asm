; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_keyframe_c_00630d70
;   TerminatedCString s_recomputeKeyFrameNormals_00630d85
;   TerminatedCString s_engine_keyframe_c_00630db0
;   TerminatedCString s_recomputeKeyFrameNormals_00630dc5
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
;   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
;   engine_model.c_getMRGLSize_FUN_00528700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502320
        ;   Label: engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320
    PUSH ESI                            ; 00502321
    PUSH EDI                            ; 00502322
    PUSH EBP                            ; 00502323
    MOV EAX,dword ptr [ESP + 0x14]      ; 00502324
    MOV EBX,EAX                         ; 00502328
    MOV EDX,dword ptr [EAX]             ; 0050232a
    XOR ESI,ESI                         ; 0050232c
    XOR EDI,EDI                         ; 0050232e
    TEST EDX,EDX                        ; 00502330
    JZ 0x00502345                       ; 00502332 | LAB_00502345
        ;   XREF to: 00502345 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX],0x2             ; 00502334
        ;   Label: LAB_00502334
    JNZ 0x0050233c                      ; 00502337 | LAB_0050233c
        ;   XREF to: 0050233c (CONDITIONAL_JUMP)
    LEA ESI,[EBX + 0xc]                 ; 00502339
    MOV EAX,dword ptr [EBX]             ; 0050233c
        ;   Label: LAB_0050233c
    CMP EAX,0x18                        ; 0050233e
    JNZ 0x005023a5                      ; 00502341 | LAB_005023a5
        ;   XREF to: 005023a5 (CONDITIONAL_JUMP)
    MOV EDI,EBX                         ; 00502343
        ;   Label: LAB_00502343
    TEST ESI,ESI                        ; 00502345
        ;   Label: LAB_00502345
    JNZ 0x0050236b                      ; 00502347 | LAB_0050236b
        ;   XREF to: 0050236b (CONDITIONAL_JUMP)
    MOV EBP,0x630d70                    ; 00502349 | = "..\\engine\\keyframe.c" | s_engine_keyframe_c_00630d70 = ..\engine\keyframe.c
    MOV EAX,0x1f5                       ; 0050234e
    PUSH 0x630d85                       ; 00502353 | = "recomputeKeyFrameNormals: Cannot find..." | s_recomputeKeyFrameNormals_00630d85 = recomputeKeyFrameNormals: Cannot find vptr
    MOV dword ptr [0x02f0ca48],EBP      ; 00502358 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0050235e | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00502363 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00502368
    TEST EDI,EDI                        ; 0050236b
        ;   Label: LAB_0050236b
    JZ 0x005023cf                       ; 0050236d | LAB_005023cf
        ;   XREF to: 005023cf (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 0050236f
        ;   Label: LAB_0050236f
    CMP EAX,0x19                        ; 00502371
    JNC 0x00502400                      ; 00502374 | LAB_00502400
        ;   XREF to: 00502400 (CONDITIONAL_JUMP)
    CMP EAX,0x18                        ; 0050237a
    JNZ 0x00502389                      ; 0050237d | LAB_00502389
        ;   XREF to: 00502389 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0050237f
        ;   Label: LAB_0050237f
    PUSH ESI                            ; 00502380
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0 ; 00502381 | void engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0(CVector3i * vertex_data, SSurfaceNormal * output)
        ;   XREF to: 00501bc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00502386
        ;   Label: LAB_00502386
    PUSH EBX                            ; 00502389
        ;   Label: LAB_00502389
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 0050238a | int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)
    SHR EAX,0x2                         ; 0050238f
    SHL EAX,0x2                         ; 00502392
    ADD EBX,EAX                         ; 00502395
    MOV EBP,dword ptr [EBX]             ; 00502397
    ADD ESP,0x4                         ; 00502399
    TEST EBP,EBP                        ; 0050239c
    JNZ 0x0050236f                      ; 0050239e | LAB_0050236f
        ;   XREF to: 0050236f (CONDITIONAL_JUMP)
    POP EBP                             ; 005023a0
    POP EDI                             ; 005023a1
    POP ESI                             ; 005023a2
    POP EBX                             ; 005023a3
    RET                                 ; 005023a4
    CMP EAX,0x29                        ; 005023a5
        ;   Label: LAB_005023a5
    JZ 0x00502343                       ; 005023a8 | LAB_00502343
        ;   XREF to: 00502343 (CONDITIONAL_JUMP)
    CMP EAX,0x19                        ; 005023aa
    JZ 0x00502343                       ; 005023ad | LAB_00502343
        ;   XREF to: 00502343 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005023af
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 005023b0 | int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)
    SHR EAX,0x2                         ; 005023b5
    SHL EAX,0x2                         ; 005023b8
    ADD EBX,EAX                         ; 005023bb
    MOV ECX,dword ptr [EBX]             ; 005023bd
    ADD ESP,0x4                         ; 005023bf
    TEST ECX,ECX                        ; 005023c2
    JNZ 0x00502334                      ; 005023c4 | LAB_00502334
        ;   XREF to: 00502334 (CONDITIONAL_JUMP)
    JMP 0x00502345                      ; 005023ca | LAB_00502345
        ;   XREF to: 00502345 (UNCONDITIONAL_JUMP)
    MOV EDX,0x630db0                    ; 005023cf | = "..\\engine\\keyframe.c" | s_engine_keyframe_c_00630db0 = ..\engine\keyframe.c
        ;   Label: LAB_005023cf
    MOV ECX,0x1f6                       ; 005023d4
    PUSH 0x630dc5                       ; 005023d9 | = "recomputeKeyFrameNormals: Cannot find..." | s_recomputeKeyFrameNormals_00630dc5 = recomputeKeyFrameNormals: Cannot find fptr
    MOV dword ptr [0x02f0ca48],EDX      ; 005023de | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005023e4 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005023ea | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005023ef
    JMP 0x0050236f                      ; 005023f2 | LAB_0050236f
        ;   XREF to: 0050236f (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 005023f7
        ;   Label: LAB_005023f7
    PUSH ESI                            ; 005023f8
    CALL engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00 ; 005023f9 | void engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00(CVector3i * vertex_data, SSurfacePackedNormal * data)
        ;   XREF to: 00501a00 (UNCONDITIONAL_CALL)
    JMP 0x00502386                      ; 005023fe | LAB_00502386
        ;   XREF to: 00502386 (UNCONDITIONAL_JUMP)
    JBE 0x005023f7                      ; 00502400 | LAB_005023f7
        ;   Label: LAB_00502400
        ;   XREF to: 005023f7 (CONDITIONAL_JUMP)
    CMP EAX,0x29                        ; 00502402
    JZ 0x0050237f                       ; 00502405 | LAB_0050237f
        ;   XREF to: 0050237f (CONDITIONAL_JUMP)
    JMP 0x00502389                      ; 0050240b | LAB_00502389
        ;   XREF to: 00502389 (UNCONDITIONAL_JUMP)

