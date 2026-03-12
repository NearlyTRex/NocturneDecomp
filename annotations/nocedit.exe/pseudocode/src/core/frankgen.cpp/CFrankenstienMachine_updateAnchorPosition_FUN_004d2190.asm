; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; Local Variables:
; int[1012]        Stack[-0x1014]:4048  aiStackY_1014
; CVector3f        Stack[-0x38]:12  local_38
; int              Stack[-0x2c]:4  local_2c
; int[2]           Stack[-0x28]:8  local_28
; CVector3f        Stack[-0x20]:12  local_20
; int              Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_frankgen.cpp_CFrankenstienMachine_processInEditor_FUN_004d25f0 at 004d26f3
;   core_frankgen.cpp_CFrankenstienMachine_process_FUN_004d1a40 at 004d1a94
;   core_frankgen.cpp_CFrankenstienMachine_renderOpaque_FUN_004d1f70 at 004d1f9c
;   core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004d17b0 at 004d1857
;
; Referenced Globals:
;   void* switchdataD_004d2168 = 004d21b1
;   TerminatedCString s_core_frankgen_cpp_0062ab35
;   TerminatedCString s_WTF_0062ab4a
;   float FLOAT_0065e658 = 0.00390625
;   float FLOAT_0065e670 = 2300
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430
;   core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2190
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190
    PUSH ESI                            ; 004d2191
    PUSH EDI                            ; 004d2192
    PUSH EBP                            ; 004d2193
    SUB ESP,0x28                        ; 004d2194
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004d2197
    MOV EAX,dword ptr [EBP + 0x158]     ; 004d219b
    CMP EAX,0x8                         ; 004d21a1
    JA 0x004d22ec                       ; 004d21a4
        ;   XREF to: 004d22ec (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4d2168]  ; 004d21aa | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [0x0065e670]         ; 004d21b1 | FLOAT_0065e670
        ;   Label: caseD_0
    PUSH 0x0                            ; 004d21b7
    PUSH EBP                            ; 004d21b9
        ;   Label: LAB_004d21b9
    CALL core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430 ; 004d21ba
        ;   XREF to: 004d2430 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    ADD ESP,0xc                         ; 004d21bf
        ;   Label: LAB_004d21bf
    PUSH EBP                            ; 004d21c2
        ;   Label: LAB_004d21c2
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004d21c3
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    FLD float ptr [EBP + 0x180]         ; 004d21c8
    ADD ESP,0x4                         ; 004d21ce
    CALL crt_math.c_round_FUN_005fe6b0  ; 004d21d1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x24]        ; 004d21d6
    MOV EBX,dword ptr [ESP + 0x24]      ; 004d21da
    MOV EDX,dword ptr [EBP + 0x488]     ; 004d21de
    PUSH EBX                            ; 004d21e4
    LEA EAX,[EBP + 0x184]               ; 004d21e5
    LEA ESI,[EDX*0x4 + 0x0]             ; 004d21eb
    PUSH EAX                            ; 004d21f2
    SUB ESI,EDX                         ; 004d21f3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004d21f5
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d21fa
    LEA EDI,[ESP + 0x10]                ; 004d21fd
    PUSH EAX                            ; 004d2201
    SHL ESI,0x2                         ; 004d2202
    LEA EBX,[ESP + 0x20]                ; 004d2205
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890 ; 004d2209
        ;   XREF to: 00477890 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESI,EAX                         ; 004d220e
    ADD ESP,0x8                         ; 004d2210
    LEA EAX,[ESP + 0xc]                 ; 004d2213
    MOVSD ES:EDI,ESI                    ; 004d2217
    MOVSD ES:EDI,ESI                    ; 004d2218
    MOVSD ES:EDI,ESI                    ; 004d2219
    FILD dword ptr [EAX]                ; 004d221a
    FMUL float ptr [0x0065e658]         ; 004d221c | FLOAT_0065e658
    FSTP float ptr [EBX]                ; 004d2222
    FILD dword ptr [EAX + 0x4]          ; 004d2224
    FMUL float ptr [0x0065e658]         ; 004d2227 | FLOAT_0065e658
    FSTP float ptr [EBX + 0x4]          ; 004d222d
    FILD dword ptr [EAX + 0x8]          ; 004d2230
    FMUL float ptr [0x0065e658]         ; 004d2233 | FLOAT_0065e658
    FSTP float ptr [EBX + 0x8]          ; 004d2239
    LEA EAX,[ESP + 0x18]                ; 004d223c
    PUSH EAX                            ; 004d2240
    LEA EAX,[ESP + 0x4]                 ; 004d2241
    PUSH EAX                            ; 004d2245
    PUSH EBP                            ; 004d2246
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d2247
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD EBP,0x490                       ; 004d224c
    ADD ESP,0xc                         ; 004d2252
    CMP EBP,EAX                         ; 004d2255
    JNZ 0x004d2314                      ; 004d2257
        ;   XREF to: 004d2314 (CONDITIONAL_JUMP)  ; LAB_004d2314
    ADD ESP,0x28                        ; 004d225d
    POP EBP                             ; 004d2260
        ;   Label: LAB_004d2260
    POP EDI                             ; 004d2261
    POP ESI                             ; 004d2262
    POP EBX                             ; 004d2263
    RET                                 ; 004d2264
    PUSH 0x4427c000                     ; 004d2265
        ;   Label: caseD_1
    PUSH 0x43030000                     ; 004d226a
    PUSH EBP                            ; 004d226f
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0 ; 004d2270
        ;   XREF to: 004d23a0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004d21bf                      ; 004d2275
        ;   XREF to: 004d21bf (UNCONDITIONAL_JUMP)  ; LAB_004d21bf
    PUSH 0x445dc000                     ; 004d227a
        ;   Label: caseD_2
    PUSH 0x4403c000                     ; 004d227f
    PUSH EBP                            ; 004d2284
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0 ; 004d2285
        ;   XREF to: 004d23a0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004d21bf                      ; 004d228a
        ;   XREF to: 004d21bf (UNCONDITIONAL_JUMP)  ; LAB_004d21bf
    PUSH 0x44d9a000                     ; 004d228f
        ;   Label: caseD_3
    PUSH 0x44882000                     ; 004d2294
    PUSH EBP                            ; 004d2299
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0 ; 004d229a
        ;   XREF to: 004d23a0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004d21bf                      ; 004d229f
        ;   XREF to: 004d21bf (UNCONDITIONAL_JUMP)  ; LAB_004d21bf
    PUSH 0x43c80000                     ; 004d22a4
        ;   Label: caseD_4
    PUSH 0x43af0000                     ; 004d22a9
    PUSH EBP                            ; 004d22ae
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0 ; 004d22af
        ;   XREF to: 004d23a0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004d21bf                      ; 004d22b4
        ;   XREF to: 004d21bf (UNCONDITIONAL_JUMP)  ; LAB_004d21bf
    PUSH 0x44828000                     ; 004d22b9
        ;   Label: caseD_5
    PUSH 0x44580000                     ; 004d22be
    PUSH EBP                            ; 004d22c3
    CALL core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0 ; 004d22c4
        ;   XREF to: 004d23a0 (UNCONDITIONAL_CALL)  ; void core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(CFrankenstienMachine * this_ptr, float start_frame, float end_frame)
    JMP 0x004d21bf                      ; 004d22c9
        ;   XREF to: 004d21bf (UNCONDITIONAL_JUMP)  ; LAB_004d21bf
    PUSH 0x44f14000                     ; 004d22ce
        ;   Label: caseD_7
    PUSH 0x44d4a000                     ; 004d22d3
    JMP 0x004d21b9                      ; 004d22d8
        ;   XREF to: 004d21b9 (UNCONDITIONAL_JUMP)  ; LAB_004d21b9
    PUSH 0x450fc000                     ; 004d22dd
        ;   Label: caseD_8
    PUSH 0x44f3a000                     ; 004d22e2
    JMP 0x004d21b9                      ; 004d22e7
        ;   XREF to: 004d21b9 (UNCONDITIONAL_JUMP)  ; LAB_004d21b9
    MOV EDX,0x62ab35                    ; 004d22ec | = "..\\core\\frankgen.cpp"
        ;   Label: default
    MOV ECX,0x1bb                       ; 004d22f1
    PUSH 0x62ab4a                       ; 004d22f6 | = "WTF!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004d22fb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004d2301 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004d2307
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004d230c
    JMP 0x004d21c2                      ; 004d230f
        ;   XREF to: 004d21c2 (UNCONDITIONAL_JUMP)  ; LAB_004d21c2
    MOV EDX,dword ptr [EAX]             ; 004d2314
        ;   Label: LAB_004d2314
    MOV dword ptr [EBP],EDX             ; 004d2316
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d2319
    MOV dword ptr [EBP + 0x4],EDX       ; 004d231c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d231f
    MOV dword ptr [EBP + 0x8],EDX       ; 004d2322
    ADD ESP,0x28                        ; 004d2325
    POP EBP                             ; 004d2328
    POP EDI                             ; 004d2329
    POP ESI                             ; 004d232a
    POP EBX                             ; 004d232b
    RET                                 ; 004d232c

