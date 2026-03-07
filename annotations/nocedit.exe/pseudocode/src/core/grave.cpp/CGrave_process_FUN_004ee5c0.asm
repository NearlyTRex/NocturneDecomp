; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_process_FUN_004ee5c0(CGrave *this_ptr,float delta_time)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_grave.cpp_CGrave_startAnimation_FUN_004ee790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee5c0
        ;   Label: core_grave.cpp_CGrave_process_FUN_004ee5c0
    PUSH ESI                            ; 004ee5c1
    PUSH EDI                            ; 004ee5c2
    SUB ESP,0x8                         ; 004ee5c3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004ee5c6
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004ee5ca
    JNZ 0x004ee5ee                      ; 004ee5d1
        ;   XREF to: 004ee5ee (CONDITIONAL_JUMP)  ; LAB_004ee5ee
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004ee5d3
    JZ 0x004ee5fa                       ; 004ee5da
        ;   XREF to: 004ee5fa (CONDITIONAL_JUMP)  ; LAB_004ee5fa
    MOV EDI,dword ptr [EBX + 0x2e0]     ; 004ee5dc
        ;   Label: LAB_004ee5dc
    CMP EDI,0x1                         ; 004ee5e2
    JZ 0x004ee61f                       ; 004ee5e5
        ;   XREF to: 004ee61f (CONDITIONAL_JUMP)  ; LAB_004ee61f
    ADD ESP,0x8                         ; 004ee5e7
        ;   Label: LAB_004ee5e7
    POP EDI                             ; 004ee5ea
    POP ESI                             ; 004ee5eb
    POP EBX                             ; 004ee5ec
    RET                                 ; 004ee5ed
    MOV dword ptr [EBX + 0x104],0x1     ; 004ee5ee
        ;   Label: LAB_004ee5ee
    JMP 0x004ee5e7                      ; 004ee5f8
        ;   XREF to: 004ee5e7 (UNCONDITIONAL_JUMP)  ; LAB_004ee5e7
    LEA EAX,[EBX + 0x2e8]               ; 004ee5fa
        ;   Label: LAB_004ee5fa
    PUSH EAX                            ; 004ee600
    MOV ESI,dword ptr [0x006793d0]      ; 004ee601 | g_CEventListPtr
    PUSH ESI                            ; 004ee607 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004ee608
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004ee60d
    TEST EAX,EAX                        ; 004ee610
    JZ 0x004ee5dc                       ; 004ee612
        ;   XREF to: 004ee5dc (CONDITIONAL_JUMP)  ; LAB_004ee5dc
    PUSH EBX                            ; 004ee614
    CALL core_grave.cpp_CGrave_startAnimation_FUN_004ee790 ; 004ee615
        ;   XREF to: 004ee790 (UNCONDITIONAL_CALL)  ; void core_grave.cpp_CGrave_startAnimation_FUN_004ee790(CGrave * this_ptr)
    ADD ESP,0x4                         ; 004ee61a
    JMP 0x004ee5dc                      ; 004ee61d
        ;   XREF to: 004ee5dc (UNCONDITIONAL_JUMP)  ; LAB_004ee5dc
    LEA EAX,[EBX + 0x158]               ; 004ee61f
        ;   Label: LAB_004ee61f
    PUSH EAX                            ; 004ee625
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004ee626
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    FLD float ptr [EBX + 0x2d8]         ; 004ee62b
    MOV EAX,dword ptr [EAX + 0x100]     ; 004ee631
    ADD ESP,0x4                         ; 004ee637
    SUB EAX,EDI                         ; 004ee63a
    FMUL float ptr [ESP + 0x1c]         ; 004ee63c
    MOV dword ptr [ESP + 0x4],EAX       ; 004ee640
    FILD dword ptr [ESP + 0x4]          ; 004ee644
    FXCH                                ; 004ee648
    FADD float ptr [EBX + 0x2d4]        ; 004ee64a
    FXCH                                ; 004ee650
    FSTP float ptr [ESP]                ; 004ee652
    FST float ptr [EBX + 0x2d4]         ; 004ee655
    FCOMP float ptr [ESP]               ; 004ee65b
    FNSTSW AX                           ; 004ee65e
    SAHF                                ; 004ee660
    JC 0x004ee5e7                       ; 004ee661
        ;   XREF to: 004ee5e7 (CONDITIONAL_JUMP)  ; LAB_004ee5e7
    MOV EAX,dword ptr [ESP]             ; 004ee663
    MOV dword ptr [EBX + 0x2e0],0x2     ; 004ee666
    MOV dword ptr [EBX + 0x2d4],EAX     ; 004ee670
    ADD ESP,0x8                         ; 004ee676
    POP EDI                             ; 004ee679
    POP ESI                             ; 004ee67a
    POP EBX                             ; 004ee67b
    RET                                 ; 004ee67c

