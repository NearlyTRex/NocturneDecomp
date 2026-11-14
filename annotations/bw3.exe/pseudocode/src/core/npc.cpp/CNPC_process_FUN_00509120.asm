; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_CNPC_process_FUN_00509120(CNPC *this_ptr,float delta_time)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 s_STAND_005cb567+1
;   TerminatedCString s_s_confused_while_walking_005cb56e
;   undefined4 DAT_005cb598
;   undefined4 DAT_005cb59c
;   TerminatedCString s_STAND_005cb5a1
;   TerminatedCString s_APPEAR_005cb5a7
;   TerminatedCString s_DISAPPEAR_005cb5ae
;   CConsole* g_CConsolePtr = 007f7ea4
;   CGore* g_CGorePtr = 01d22e44
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd70
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00434850
;   core_gore.cpp_CGore_createBloodPool_FUN_004cec40
;   core_motion.cpp_CMotionController_advance_FUN_004fbb70
;   core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320
;   core_motion.cpp_CMotionController_getMotionList_FUN_004fc310
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509120
        ;   Label: core_npc.cpp_CNPC_process_FUN_00509120
    PUSH ESI                            ; 00509121
    PUSH EDI                            ; 00509122
    PUSH EBP                            ; 00509123
    MOV EBP,ESP                         ; 00509124
    SUB ESP,0x80                        ; 00509126
    AND ESP,0xfffffff8                  ; 0050912c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050912f
    PUSH dword ptr [EBP + 0x18]         ; 00509132
    PUSH EBX                            ; 00509135
    CALL core_charactr.cpp_FUN_0042cd70 ; 00509136
        ;   XREF to: 0042cd70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042cd70()
    ADD ESP,0x8                         ; 0050913b
    TEST EAX,EAX                        ; 0050913e
    JZ 0x00509418                       ; 00509140
        ;   XREF to: 00509418 (CONDITIONAL_JUMP)  ; LAB_00509418
    MOV EDX,dword ptr [EBX + 0x206b8]   ; 00509146
    TEST EDX,EDX                        ; 0050914c
    JGE 0x005091a5                      ; 0050914e
        ;   XREF to: 005091a5 (CONDITIONAL_JUMP)  ; LAB_005091a5
    CMP EDX,-0x1                        ; 00509150
    JZ 0x005091a5                       ; 00509153
        ;   XREF to: 005091a5 (CONDITIONAL_JUMP)  ; LAB_005091a5
    LEA EAX,[EBX + 0x249c]              ; 00509155
        ;   Label: LAB_00509155
    XOR ESI,ESI                         ; 0050915b
    MOV dword ptr [EAX + 0x8],ESI       ; 0050915d
    FLD float ptr [EBP + 0x18]          ; 00509160
    MOV EDX,dword ptr [EAX + 0x8]       ; 00509163
    MOV dword ptr [EAX + 0x4],EDX       ; 00509166
    MOV EDX,dword ptr [EAX + 0x4]       ; 00509169
    MOV dword ptr [EAX],EDX             ; 0050916c
    FMUL float ptr [EBX + 0x206b0]      ; 0050916e
    MOV dword ptr [ESP + 0x7c],ESI      ; 00509174
    LEA ESI,[EBX + 0x158]               ; 00509178
    FSTP float ptr [ESP]                ; 0050917e
    FLD float ptr [ESP]                 ; 00509181
        ;   Label: LAB_00509181
    FLDZ                                ; 00509184
    FCOMPP                              ; 00509186
    FNSTSW AX                           ; 00509188
    SAHF                                ; 0050918a
    JNC 0x005091b3                      ; 0050918b
        ;   XREF to: 005091b3 (CONDITIONAL_JUMP)  ; LAB_005091b3
    MOV EAX,ESP                         ; 0050918d
    PUSH EAX                            ; 0050918f
    PUSH ESI                            ; 00509190
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00509191
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00509196
    PUSH EAX                            ; 00509199
    PUSH EBX                            ; 0050919a
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0050919b
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005091a0
    JMP 0x00509181                      ; 005091a3
        ;   XREF to: 00509181 (UNCONDITIONAL_JUMP)  ; LAB_00509181
    PUSH dword ptr [EBP + 0x18]         ; 005091a5
        ;   Label: LAB_005091a5
    PUSH EBX                            ; 005091a8
    CALL core_charactr.cpp_FUN_00433c60 ; 005091a9
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    ADD ESP,0x8                         ; 005091ae
    JMP 0x00509155                      ; 005091b1
        ;   XREF to: 00509155 (UNCONDITIONAL_JUMP)  ; LAB_00509155
    PUSH EBX                            ; 005091b3
        ;   Label: LAB_005091b3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005091b4
    CALL dword ptr [EAX + 0x10c]        ; 005091ba
    ADD ESP,0x4                         ; 005091c0
    CMP EAX,0x1                         ; 005091c3
    JLE 0x00509244                      ; 005091c6
        ;   XREF to: 00509244 (CONDITIONAL_JUMP)  ; LAB_00509244
    CMP dword ptr [EBX + 0x70],0x1      ; 005091cc
    JNZ 0x00509244                      ; 005091d0
        ;   XREF to: 00509244 (CONDITIONAL_JUMP)  ; LAB_00509244
    MOV EAX,dword ptr [EBX + 0x206ac]   ; 005091d2
    TEST EAX,EAX                        ; 005091d8
    JNZ 0x00509244                      ; 005091da
        ;   XREF to: 00509244 (CONDITIONAL_JUMP)  ; LAB_00509244
    CMP dword ptr [EBX + 0xdc],0x0      ; 005091dc
    JNZ 0x00509244                      ; 005091e3
        ;   XREF to: 00509244 (CONDITIONAL_JUMP)  ; LAB_00509244
    PUSH EAX                            ; 005091e5
    PUSH ESI                            ; 005091e6
    LEA ESI,[ESP + 0x48]                ; 005091e7
    LEA EDI,[ESP + 0x3c]                ; 005091eb
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0 ; 005091ef
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 005091f4
    LEA EAX,[ESP + 0x34]                ; 005091f7
    LEA ESI,[ESP + 0x40]                ; 005091fb
    PUSH EAX                            ; 005091ff
    MOVSD ES:EDI,ESI                    ; 00509200
    MOVSD ES:EDI,ESI                    ; 00509201
    MOVSD ES:EDI,ESI                    ; 00509202
    PUSH EBX                            ; 00509203
    LEA ESI,[ESP + 0x54]                ; 00509204
    CALL core_actor.cpp_FUN_00408b80    ; 00509208
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0050920d
    LEA EDI,[ESP + 0x10]                ; 00509210
    LEA ESI,[ESP + 0x4c]                ; 00509214
    PUSH 0x0                            ; 00509218
    LEA EAX,[ESP + 0x14]                ; 0050921a
    MOV ECX,dword ptr [0x005fed24]      ; 0050921e | g_CGorePtr
    PUSH EAX                            ; 00509224
    MOVSD ES:EDI,ESI                    ; 00509225
    MOVSD ES:EDI,ESI                    ; 00509226
    MOVSD ES:EDI,ESI                    ; 00509227
    PUSH ECX                            ; 00509228
    MOV ESI,0x1                         ; 00509229
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 0050922e
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00509233
    MOV dword ptr [EBX + 0x206ac],0x1   ; 00509236
    MOV dword ptr [ESP + 0x7c],ESI      ; 00509240
    FLD float ptr [EBP + 0x18]          ; 00509244
        ;   Label: LAB_00509244
    FMUL float ptr [EBX + 0x206b0]      ; 00509247
    FLD float ptr [EBX + 0x24a4]        ; 0050924d
    SUB ESP,0x4                         ; 00509253
    FSTP float ptr [EBX + 0x2524]       ; 00509256
    FSTP float ptr [ESP]                ; 0050925c
    PUSH EBX                            ; 0050925f
    CALL core_charactr.cpp_FUN_00434850 ; 00509260
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 00509265
    PUSH dword ptr [EBP + 0x18]         ; 00509268
    PUSH EBX                            ; 0050926b
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 0050926c
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00509271
    LEA ESI,[EBX + 0x158]               ; 00509274
    TEST EAX,EAX                        ; 0050927a
    JZ 0x00509488                       ; 0050927c
        ;   XREF to: 00509488 (CONDITIONAL_JUMP)  ; LAB_00509488
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00509282
    CMP EAX,0x2                         ; 00509288
    JNC 0x00509475                      ; 0050928b
        ;   XREF to: 00509475 (CONDITIONAL_JUMP)  ; LAB_00509475
    CMP EAX,0x1                         ; 00509291
    JNZ 0x0050947c                      ; 00509294
        ;   XREF to: 0050947c (CONDITIONAL_JUMP)  ; LAB_0050947c
    PUSH 0x1                            ; 0050929a
        ;   Label: LAB_0050929a
    PUSH 0x5cb59c                       ; 0050929c | DAT_005cb59c
    LEA EAX,[EBX + 0x158]               ; 005092a1
        ;   Label: LAB_005092a1
    PUSH EAX                            ; 005092a7
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 005092a8
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 005092ad
        ;   Label: LAB_005092ad
    LEA EAX,[EBX + 0x249c]              ; 005092b0
    MOV dword ptr [EAX + 0x8],0x0       ; 005092b6
    MOV EDX,dword ptr [EAX + 0x8]       ; 005092bd
    MOV dword ptr [EAX + 0x4],EDX       ; 005092c0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005092c3
    MOV dword ptr [EAX],EDX             ; 005092c6
    FLD float ptr [EBX + 0x206c0]       ; 005092c8
        ;   Label: LAB_005092c8
    FLDZ                                ; 005092ce
    FCOMPP                              ; 005092d0
    FNSTSW AX                           ; 005092d2
    SAHF                                ; 005092d4
    JNC 0x005092e6                      ; 005092d5
        ;   XREF to: 005092e6 (CONDITIONAL_JUMP)  ; LAB_005092e6
    FLD float ptr [EBX + 0x206c0]       ; 005092d7
    FSUB float ptr [EBP + 0x18]         ; 005092dd
    FSTP float ptr [EBX + 0x206c0]      ; 005092e0
    FLD float ptr [EBX + 0x206c0]       ; 005092e6
        ;   Label: LAB_005092e6
    FLDZ                                ; 005092ec
    FCOMPP                              ; 005092ee
    FNSTSW AX                           ; 005092f0
    SAHF                                ; 005092f2
    JBE 0x005092ff                      ; 005092f3
        ;   XREF to: 005092ff (CONDITIONAL_JUMP)  ; LAB_005092ff
    MOV dword ptr [EBX + 0x206c0],0x0   ; 005092f5
    PUSH dword ptr [EBP + 0x18]         ; 005092ff
        ;   Label: LAB_005092ff
    PUSH EBX                            ; 00509302
    LEA ESI,[EBX + 0x2518]              ; 00509303
    CALL core_charactr.cpp_FUN_0042c1e0 ; 00509309
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    ADD ESP,0x8                         ; 0050930e
    FLD float ptr [ESI]                 ; 00509311
    FMUL float ptr [EBP + 0x18]         ; 00509313
    FLD float ptr [ESI + 0x4]           ; 00509316
    FMUL float ptr [EBP + 0x18]         ; 00509319
    FLD float ptr [ESI + 0x8]           ; 0050931c
    FMUL float ptr [EBP + 0x18]         ; 0050931f
    LEA EDI,[ESP + 0x70]                ; 00509322
    LEA ESI,[ESP + 0x28]                ; 00509326
    FXCH ST2                            ; 0050932a
    FSTP float ptr [ESP + 0x28]         ; 0050932c
    FSTP float ptr [ESP + 0x2c]         ; 00509330
    FSTP float ptr [ESP + 0x30]         ; 00509334
    MOVSD ES:EDI,ESI                    ; 00509338
    MOVSD ES:EDI,ESI                    ; 00509339
    MOVSD ES:EDI,ESI                    ; 0050933a
    LEA EDX,[EBX + 0x250c]              ; 0050933b
    FLD float ptr [ESP + 0x70]          ; 00509341
    FLD float ptr [ESP + 0x74]          ; 00509345
    FLD float ptr [ESP + 0x78]          ; 00509349
    LEA EDI,[ESP + 0x4]                 ; 0050934d
    LEA ESI,[ESP + 0x64]                ; 00509351
    FXCH ST2                            ; 00509355
    FADD float ptr [EDX]                ; 00509357
    FXCH                                ; 00509359
    FADD float ptr [EDX + 0x4]          ; 0050935b
    FXCH ST2                            ; 0050935e
    FADD float ptr [EDX + 0x8]          ; 00509360
    FXCH                                ; 00509363
    FSTP float ptr [ESP + 0x64]         ; 00509365
    FXCH                                ; 00509369
    FSTP float ptr [ESP + 0x68]         ; 0050936b
    FSTP float ptr [ESP + 0x6c]         ; 0050936f
    MOVSD ES:EDI,ESI                    ; 00509373
    MOVSD ES:EDI,ESI                    ; 00509374
    MOVSD ES:EDI,ESI                    ; 00509375
    LEA EAX,[EBX + 0x249c]              ; 00509376
    FLD float ptr [ESP + 0x4]           ; 0050937c
    FLD float ptr [ESP + 0x8]           ; 00509380
    FLD float ptr [ESP + 0xc]           ; 00509384
    LEA EDI,[ESP + 0x1c]                ; 00509388
    LEA ESI,[ESP + 0x58]                ; 0050938c
    FXCH ST2                            ; 00509390
    FADD float ptr [EAX]                ; 00509392
    FXCH                                ; 00509394
    FADD float ptr [EAX + 0x4]          ; 00509396
    FXCH ST2                            ; 00509399
    FADD float ptr [EAX + 0x8]          ; 0050939b
    FXCH                                ; 0050939e
    FSTP float ptr [ESP + 0x58]         ; 005093a0
    FXCH                                ; 005093a4
    FSTP float ptr [ESP + 0x5c]         ; 005093a6
    FSTP float ptr [ESP + 0x60]         ; 005093aa
    MOVSD ES:EDI,ESI                    ; 005093ae
    MOVSD ES:EDI,ESI                    ; 005093af
    MOVSD ES:EDI,ESI                    ; 005093b0
    MOV dword ptr [EDX + 0x8],0x0       ; 005093b1
    MOV ECX,dword ptr [EDX + 0x8]       ; 005093b8
    MOV dword ptr [EDX + 0x4],ECX       ; 005093bb
    MOV ECX,dword ptr [EDX + 0x4]       ; 005093be
    MOV dword ptr [EDX],ECX             ; 005093c1
    MOV dword ptr [EAX + 0x8],0x0       ; 005093c3
    MOV EDX,dword ptr [EAX + 0x8]       ; 005093ca
    MOV dword ptr [EAX + 0x4],EDX       ; 005093cd
    MOV EDX,dword ptr [EAX + 0x4]       ; 005093d0
    MOV dword ptr [EAX],EDX             ; 005093d3
    LEA EAX,[ESP + 0x1c]                ; 005093d5
    PUSH EAX                            ; 005093d9
    PUSH EBX                            ; 005093da
    CALL core_charactr.cpp_FUN_0042c230 ; 005093db
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005093e0
    PUSH EBX                            ; 005093e3
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 005093e4
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005093e9
    LEA EAX,[EBX + 0x158]               ; 005093ec
    PUSH EAX                            ; 005093f2
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 005093f3
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005093f8
    MOV ECX,dword ptr [ESP + 0x7c]      ; 005093fb
    PUSH ECX                            ; 005093ff
    PUSH dword ptr [EBP + 0x18]         ; 00509400
    PUSH EBX                            ; 00509403
    CALL core_charactr.cpp_FUN_00432330 ; 00509404
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    ADD ESP,0xc                         ; 00509409
    PUSH dword ptr [EBP + 0x18]         ; 0050940c
    PUSH EBX                            ; 0050940f
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 00509410
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00509415
    MOV ESP,EBP                         ; 00509418
        ;   Label: LAB_00509418
    POP EBP                             ; 0050941a
    POP EDI                             ; 0050941b
    POP ESI                             ; 0050941c
    POP EBX                             ; 0050941d
    RET                                 ; 0050941e
    PUSH 0x1                            ; 0050941f
        ;   Label: LAB_0050941f
    PUSH 0x5cb568                       ; 00509421 | s_STAND_005cb567+1
    PUSH ESI                            ; 00509426
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160 ; 00509427
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 0050942c
    PUSH EBX                            ; 0050942f
    PUSH 0x5cb56e                       ; 00509430 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005f1690]      ; 00509435 | g_CConsolePtr
    PUSH EDX                            ; 0050943b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0050943c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    JMP 0x005092ad                      ; 00509441
        ;   XREF to: 005092ad (UNCONDITIONAL_JUMP)  ; LAB_005092ad
    PUSH 0x0                            ; 00509446
        ;   Label: LAB_00509446
    PUSH 0x5cb598                       ; 00509448 | DAT_005cb598
    PUSH ESI                            ; 0050944d
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0050944e
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00509453
    PUSH EAX                            ; 00509456
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50 ; 00509457
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0050945c
    TEST EAX,EAX                        ; 0050945f
    JL 0x0050929a                       ; 00509461
        ;   XREF to: 0050929a (CONDITIONAL_JUMP)  ; LAB_0050929a
    PUSH 0x1                            ; 00509467
    PUSH EAX                            ; 00509469
    PUSH ESI                            ; 0050946a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0050946b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    JMP 0x005092ad                      ; 00509470
        ;   XREF to: 005092ad (UNCONDITIONAL_JUMP)  ; LAB_005092ad
    JBE 0x00509446                      ; 00509475
        ;   XREF to: 00509446 (CONDITIONAL_JUMP)  ; LAB_00509446
        ;   Label: LAB_00509475
    CMP EAX,0x3                         ; 00509477
    JZ 0x0050941f                       ; 0050947a
        ;   XREF to: 0050941f (CONDITIONAL_JUMP)  ; LAB_0050941f
    PUSH 0x1                            ; 0050947c
        ;   Label: LAB_0050947c
    PUSH 0x5cb5a1                       ; 0050947e | = "STAND"
    JMP 0x005092a1                      ; 00509483
        ;   XREF to: 005092a1 (UNCONDITIONAL_JUMP)  ; LAB_005092a1
    PUSH ESI                            ; 00509488
        ;   Label: LAB_00509488
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320 ; 00509489
        ;   XREF to: 004fc320 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0050948e
    PUSH 0x5cb5a7                       ; 00509491 | = "APPEAR"
    PUSH EAX                            ; 00509496
    MOV ESI,EAX                         ; 00509497
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00509499
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050949e
    TEST EAX,EAX                        ; 005094a1
    JNZ 0x005094d4                      ; 005094a3
        ;   XREF to: 005094d4 (CONDITIONAL_JUMP)  ; LAB_005094d4
    CMP dword ptr [EBX + 0x206b8],0x0   ; 005094a5
    JG 0x005094d4                       ; 005094ac
        ;   XREF to: 005094d4 (CONDITIONAL_JUMP)  ; LAB_005094d4
    MOV dword ptr [EBX + 0x206b8],0x1   ; 005094ae
    MOV dword ptr [EBX + 0xfc],0x1      ; 005094b8
    MOV EDX,dword ptr [EBX + 0x206c4]   ; 005094c2
    MOV dword ptr [EBX + 0x206c0],EDX   ; 005094c8
    MOV dword ptr [EBX + 0xf8],EAX      ; 005094ce
    PUSH 0x5cb5ae                       ; 005094d4 | = "DISAPPEAR"
        ;   Label: LAB_005094d4
    PUSH ESI                            ; 005094d9
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 005094da
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 005094df
    TEST EAX,EAX                        ; 005094e2
    JNZ 0x005092c8                      ; 005094e4
        ;   XREF to: 005092c8 (CONDITIONAL_JUMP)  ; LAB_005092c8
    CMP dword ptr [EBX + 0x206b8],0x0   ; 005094ea
    JZ 0x005092c8                       ; 005094f1
        ;   XREF to: 005092c8 (CONDITIONAL_JUMP)  ; LAB_005092c8
    MOV dword ptr [EBX + 0x206b8],0x0   ; 005094f7
    MOV dword ptr [EBX + 0xfc],0x1      ; 00509501
    MOV dword ptr [EBX + 0xf8],0x0      ; 0050950b
    MOV EAX,dword ptr [EBX + 0x206c4]   ; 00509515
    MOV dword ptr [EBX + 0x206c0],EAX   ; 0050951b
    JMP 0x005092c8                      ; 00509521
        ;   XREF to: 005092c8 (UNCONDITIONAL_JUMP)  ; LAB_005092c8

