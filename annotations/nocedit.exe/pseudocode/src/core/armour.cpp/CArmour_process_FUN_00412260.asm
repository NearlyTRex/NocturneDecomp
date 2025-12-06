; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_armour.cpp_CArmour_process_FUN_00412260(CArmour * this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   TerminatedCString s_armour_wav_00614dcb
;   double DOUBLE_00614dd8 = 3.14159265350000
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042b9e0
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412260
        ;   Label: core_armour.cpp_CArmour_process_FUN_00412260
    PUSH ESI                            ; 00412261
    PUSH EDI                            ; 00412262
    PUSH EBP                            ; 00412263
    MOV EBP,ESP                         ; 00412264
    SUB ESP,0x10                        ; 00412266
    AND ESP,0xfffffff8                  ; 00412269
    MOV ESI,dword ptr [EBP + 0x14]      ; 0041226c
    PUSH dword ptr [EBP + 0x18]         ; 0041226f
    PUSH ESI                            ; 00412272
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 00412273 | int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00412278
    TEST EAX,EAX                        ; 0041227b
    JZ 0x00412346                       ; 0041227d | LAB_00412346
        ;   XREF to: 00412346 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0x23ac]              ; 00412283
    MOV dword ptr [EAX + 0x8],0x0       ; 00412289
    FLD float ptr [EBP + 0x18]          ; 00412290
    MOV EDX,dword ptr [EAX + 0x8]       ; 00412293
    MOV dword ptr [EAX + 0x4],EDX       ; 00412296
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412299
    MOV dword ptr [EAX],EDX             ; 0041229c
    FMUL float ptr [ESI + 0xbe24]       ; 0041229e
    LEA EBX,[ESI + 0x158]               ; 004122a4
    FSTP float ptr [ESP]                ; 004122aa
    FLD float ptr [ESP]                 ; 004122ad
        ;   Label: LAB_004122ad
    FLDZ                                ; 004122b0
    FCOMPP                              ; 004122b2
    FNSTSW AX                           ; 004122b4
    SAHF                                ; 004122b6
    JC 0x0041234d                       ; 004122b7 | LAB_0041234d
        ;   XREF to: 0041234d (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0xbe24]        ; 004122bd
    FLD float ptr [EBP + 0x18]          ; 004122c3
    FMUL double ptr [0x00614dd8]        ; 004122c6 | double DOUBLE_00614dd8
    FMULP                               ; 004122cc
    FLD float ptr [ESI + 0x23b4]        ; 004122ce
    PUSH EBX                            ; 004122d4
    FSTP float ptr [ESI + 0x2434]       ; 004122d5
    FSTP float ptr [ESI + 0x2438]       ; 004122db
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004122e1 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004122e6
    PUSH dword ptr [EBP + 0x18]         ; 004122e9
    PUSH ESI                            ; 004122ec
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 004122ed | int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004122f2
    TEST EAX,EAX                        ; 004122f5
    JZ 0x00412311                       ; 004122f7 | LAB_00412311
        ;   XREF to: 00412311 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0x23ac]              ; 004122f9
    MOV dword ptr [EAX + 0x8],0x0       ; 004122ff
    MOV EDX,dword ptr [EAX + 0x8]       ; 00412306
    MOV dword ptr [EAX + 0x4],EDX       ; 00412309
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041230c
    MOV dword ptr [EAX],EDX             ; 0041230f
    LEA EAX,[ESI + 0x158]               ; 00412311
        ;   Label: LAB_00412311
    PUSH EAX                            ; 00412317
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00412318 | void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041231d
    PUSH dword ptr [EBP + 0x18]         ; 00412320
    PUSH ESI                            ; 00412323
    CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 ; 00412324 | void core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00412329
    LEA EAX,[ESI + 0xbebc]              ; 0041232c
    PUSH EAX                            ; 00412332
    MOV EDX,dword ptr [0x006793d0]      ; 00412333 | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
    PUSH EDX                            ; 00412339 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0041233a | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041233f
    TEST EAX,EAX                        ; 00412342
    JNZ 0x0041235e                      ; 00412344 | LAB_0041235e
        ;   XREF to: 0041235e (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00412346
        ;   Label: LAB_00412346
    POP EBP                             ; 00412348
    POP EDI                             ; 00412349
    POP ESI                             ; 0041234a
    POP EBX                             ; 0041234b
    RET                                 ; 0041234c
    MOV EAX,ESP                         ; 0041234d
        ;   Label: LAB_0041234d
    PUSH EAX                            ; 0041234f
    PUSH EBX                            ; 00412350
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00412351 | int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00412356
    JMP 0x004122ad                      ; 00412359 | LAB_004122ad
        ;   XREF to: 004122ad (UNCONDITIONAL_JUMP)
    PUSH 0x614dcb                       ; 0041235e | = "armour.wav" | s_armour_wav_00614dcb = armour.wav
        ;   Label: LAB_0041235e
    MOV EAX,dword ptr [ESI + 0x154]     ; 00412363
    PUSH ESI                            ; 00412369
    CALL dword ptr [EAX + 0x24]         ; 0041236a
    ADD ESP,0x8                         ; 0041236d
    PUSH 0x1                            ; 00412370
    LEA EAX,[ESP + 0x8]                 ; 00412372
    PUSH 0xbf800000                     ; 00412376
    XOR ECX,ECX                         ; 0041237b
    PUSH EAX                            ; 0041237d
    MOV EDI,0x40a00000                  ; 0041237e
    MOV dword ptr [ESP + 0x10],ECX      ; 00412383
    PUSH ESI                            ; 00412387
    MOV dword ptr [ESP + 0x18],ECX      ; 00412388
    MOV dword ptr [ESP + 0x1c],EDI      ; 0041238c
    CALL core_charactr.cpp_CCharacter_FUN_0042b9e0 ; 00412390 | void core_charactr.cpp_CCharacter_FUN_0042b9e0(CCharacter * this_ptr)
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00412395
    MOV ESP,EBP                         ; 00412398
    POP EBP                             ; 0041239a
    POP EDI                             ; 0041239b
    POP ESI                             ; 0041239c
    POP EBX                             ; 0041239d
    RET                                 ; 0041239e

