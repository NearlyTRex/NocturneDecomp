; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_process_FUN_004ca1d0(CGrave *this_ptr,float delta_time)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_grave.cpp_CGrave_startAnimation_FUN_004ca3e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca1d0
        ;   Label: core_grave.cpp_CGrave_process_FUN_004ca1d0
    PUSH ESI                            ; 004ca1d1
    PUSH EDI                            ; 004ca1d2
    SUB ESP,0x8                         ; 004ca1d3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004ca1d6
    CMP dword ptr [EBX + 0x438],0x0     ; 004ca1da
    JNZ 0x004ca1fe                      ; 004ca1e1
        ;   XREF to: 004ca1fe (CONDITIONAL_JUMP)  ; LAB_004ca1fe
    CMP dword ptr [EBX + 0x43c],0x0     ; 004ca1e3
    JZ 0x004ca20a                       ; 004ca1ea
        ;   XREF to: 004ca20a (CONDITIONAL_JUMP)  ; LAB_004ca20a
    MOV EDI,dword ptr [EBX + 0x43c]     ; 004ca1ec
        ;   Label: LAB_004ca1ec
    CMP EDI,0x1                         ; 004ca1f2
    JZ 0x004ca22f                       ; 004ca1f5
        ;   XREF to: 004ca22f (CONDITIONAL_JUMP)  ; LAB_004ca22f
    ADD ESP,0x8                         ; 004ca1f7
        ;   Label: LAB_004ca1f7
    POP EDI                             ; 004ca1fa
    POP ESI                             ; 004ca1fb
    POP EBX                             ; 004ca1fc
    RET                                 ; 004ca1fd
    MOV dword ptr [EBX + 0x104],0x1     ; 004ca1fe
        ;   Label: LAB_004ca1fe
    JMP 0x004ca1f7                      ; 004ca208
        ;   XREF to: 004ca1f7 (UNCONDITIONAL_JUMP)  ; LAB_004ca1f7
    LEA EAX,[EBX + 0x444]               ; 004ca20a
        ;   Label: LAB_004ca20a
    PUSH EAX                            ; 004ca210
    MOV ESI,dword ptr [0x006141f0]      ; 004ca211 | DAT_006141f0
    PUSH ESI                            ; 004ca217
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 004ca218
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004ca21d
    TEST EAX,EAX                        ; 004ca220
    JZ 0x004ca1ec                       ; 004ca222
        ;   XREF to: 004ca1ec (CONDITIONAL_JUMP)  ; LAB_004ca1ec
    PUSH EBX                            ; 004ca224
    CALL core_grave.cpp_CGrave_startAnimation_FUN_004ca3e0 ; 004ca225
        ;   XREF to: 004ca3e0 (UNCONDITIONAL_CALL)  ; void core_grave.cpp_CGrave_startAnimation_FUN_004ca3e0(CGrave * this_ptr)
    ADD ESP,0x4                         ; 004ca22a
    JMP 0x004ca1ec                      ; 004ca22d
        ;   XREF to: 004ca1ec (UNCONDITIONAL_JUMP)  ; LAB_004ca1ec
    LEA EAX,[EBX + 0x2b4]               ; 004ca22f
        ;   Label: LAB_004ca22f
    PUSH EAX                            ; 004ca235
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004ca236
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    FLD float ptr [EBX + 0x434]         ; 004ca23b
    MOV EAX,dword ptr [EAX + 0x100]     ; 004ca241
    ADD ESP,0x4                         ; 004ca247
    SUB EAX,EDI                         ; 004ca24a
    FMUL float ptr [ESP + 0x1c]         ; 004ca24c
    MOV dword ptr [ESP + 0x4],EAX       ; 004ca250
    FILD dword ptr [ESP + 0x4]          ; 004ca254
    FXCH                                ; 004ca258
    FADD float ptr [EBX + 0x430]        ; 004ca25a
    FXCH                                ; 004ca260
    FSTP float ptr [ESP]                ; 004ca262
    FST float ptr [EBX + 0x430]         ; 004ca265
    FCOMP float ptr [ESP]               ; 004ca26b
    FNSTSW AX                           ; 004ca26e
    SAHF                                ; 004ca270
    JC 0x004ca1f7                       ; 004ca271
        ;   XREF to: 004ca1f7 (CONDITIONAL_JUMP)  ; LAB_004ca1f7
    MOV EAX,dword ptr [ESP]             ; 004ca273
    MOV dword ptr [EBX + 0x43c],0x2     ; 004ca276
    MOV dword ptr [EBX + 0x430],EAX     ; 004ca280
    ADD ESP,0x8                         ; 004ca286
    POP EDI                             ; 004ca289
    POP ESI                             ; 004ca28a
    POP EBX                             ; 004ca28b
    RET                                 ; 004ca28c

