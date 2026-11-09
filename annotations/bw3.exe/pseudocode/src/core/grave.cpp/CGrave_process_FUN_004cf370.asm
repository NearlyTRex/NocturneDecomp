; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_process_FUN_004cf370(CGrave *this_ptr,float delta_time)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_grave.cpp_CGrave_startAnimation_FUN_004cf580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf370
        ;   Label: core_grave.cpp_CGrave_process_FUN_004cf370
    PUSH ESI                            ; 004cf371
    PUSH EDI                            ; 004cf372
    SUB ESP,0x8                         ; 004cf373
    MOV EBX,dword ptr [ESP + 0x18]      ; 004cf376
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004cf37a
    JNZ 0x004cf39e                      ; 004cf381
        ;   XREF to: 004cf39e (CONDITIONAL_JUMP)  ; LAB_004cf39e
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004cf383
    JZ 0x004cf3aa                       ; 004cf38a
        ;   XREF to: 004cf3aa (CONDITIONAL_JUMP)  ; LAB_004cf3aa
    MOV EDI,dword ptr [EBX + 0x2e0]     ; 004cf38c
        ;   Label: LAB_004cf38c
    CMP EDI,0x1                         ; 004cf392
    JZ 0x004cf3cf                       ; 004cf395
        ;   XREF to: 004cf3cf (CONDITIONAL_JUMP)  ; LAB_004cf3cf
    ADD ESP,0x8                         ; 004cf397
        ;   Label: LAB_004cf397
    POP EDI                             ; 004cf39a
    POP ESI                             ; 004cf39b
    POP EBX                             ; 004cf39c
    RET                                 ; 004cf39d
    MOV dword ptr [EBX + 0x104],0x1     ; 004cf39e
        ;   Label: LAB_004cf39e
    JMP 0x004cf397                      ; 004cf3a8
        ;   XREF to: 004cf397 (UNCONDITIONAL_JUMP)  ; LAB_004cf397
    LEA EAX,[EBX + 0x2e8]               ; 004cf3aa
        ;   Label: LAB_004cf3aa
    PUSH EAX                            ; 004cf3b0
    MOV ESI,dword ptr [0x005fba60]      ; 004cf3b1 | DAT_005fba60
    PUSH ESI                            ; 004cf3b7
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004cf3b8
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004cf3bd
    TEST EAX,EAX                        ; 004cf3c0
    JZ 0x004cf38c                       ; 004cf3c2
        ;   XREF to: 004cf38c (CONDITIONAL_JUMP)  ; LAB_004cf38c
    PUSH EBX                            ; 004cf3c4
    CALL core_grave.cpp_CGrave_startAnimation_FUN_004cf580 ; 004cf3c5
        ;   XREF to: 004cf580 (UNCONDITIONAL_CALL)  ; void core_grave.cpp_CGrave_startAnimation_FUN_004cf580(CGrave * this_ptr)
    ADD ESP,0x4                         ; 004cf3ca
    JMP 0x004cf38c                      ; 004cf3cd
        ;   XREF to: 004cf38c (UNCONDITIONAL_JUMP)  ; LAB_004cf38c
    LEA EAX,[EBX + 0x158]               ; 004cf3cf
        ;   Label: LAB_004cf3cf
    PUSH EAX                            ; 004cf3d5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004cf3d6
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    FLD float ptr [EBX + 0x2d8]         ; 004cf3db
    MOV EAX,dword ptr [EAX + 0x100]     ; 004cf3e1
    ADD ESP,0x4                         ; 004cf3e7
    SUB EAX,EDI                         ; 004cf3ea
    FMUL float ptr [ESP + 0x1c]         ; 004cf3ec
    MOV dword ptr [ESP + 0x4],EAX       ; 004cf3f0
    FILD dword ptr [ESP + 0x4]          ; 004cf3f4
    FXCH                                ; 004cf3f8
    FADD float ptr [EBX + 0x2d4]        ; 004cf3fa
    FXCH                                ; 004cf400
    FSTP float ptr [ESP]                ; 004cf402
    FST float ptr [EBX + 0x2d4]         ; 004cf405
    FCOMP float ptr [ESP]               ; 004cf40b
    FNSTSW AX                           ; 004cf40e
    SAHF                                ; 004cf410
    JC 0x004cf397                       ; 004cf411
        ;   XREF to: 004cf397 (CONDITIONAL_JUMP)  ; LAB_004cf397
    MOV EAX,dword ptr [ESP]             ; 004cf413
    MOV dword ptr [EBX + 0x2e0],0x2     ; 004cf416
    MOV dword ptr [EBX + 0x2d4],EAX     ; 004cf420
    ADD ESP,0x8                         ; 004cf426
    POP EDI                             ; 004cf429
    POP ESI                             ; 004cf42a
    POP EBX                             ; 004cf42b
    RET                                 ; 004cf42c

