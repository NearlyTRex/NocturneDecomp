; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_grave_cpp_CGrave_process_FUN_004b0bf0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_grave.cpp_CGrave_startAnimation_FUN_004b0dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0bf0
        ;   Label: core_grave.cpp_CGrave_process_FUN_004b0bf0
    PUSH ESI                            ; 004b0bf1
    PUSH EDI                            ; 004b0bf2
    SUB ESP,0x8                         ; 004b0bf3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004b0bf6
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004b0bfa
    JNZ 0x004b0c1e                      ; 004b0c01
        ;   XREF to: 004b0c1e (CONDITIONAL_JUMP)  ; LAB_004b0c1e
    CMP dword ptr [EBX + 0x2d8],0x0     ; 004b0c03
    JZ 0x004b0c2a                       ; 004b0c0a
        ;   XREF to: 004b0c2a (CONDITIONAL_JUMP)  ; LAB_004b0c2a
    MOV EDI,dword ptr [EBX + 0x2d8]     ; 004b0c0c
        ;   Label: LAB_004b0c0c
    CMP EDI,0x1                         ; 004b0c12
    JZ 0x004b0c4f                       ; 004b0c15
        ;   XREF to: 004b0c4f (CONDITIONAL_JUMP)  ; LAB_004b0c4f
    ADD ESP,0x8                         ; 004b0c17
        ;   Label: LAB_004b0c17
    POP EDI                             ; 004b0c1a
    POP ESI                             ; 004b0c1b
    POP EBX                             ; 004b0c1c
    RET                                 ; 004b0c1d
    MOV dword ptr [EBX + 0x104],0x1     ; 004b0c1e
        ;   Label: LAB_004b0c1e
    JMP 0x004b0c17                      ; 004b0c28
        ;   XREF to: 004b0c17 (UNCONDITIONAL_JUMP)  ; LAB_004b0c17
    LEA EAX,[EBX + 0x2e0]               ; 004b0c2a
        ;   Label: LAB_004b0c2a
    PUSH EAX                            ; 004b0c30
    MOV ESI,dword ptr [0x005b7650]      ; 004b0c31 | DAT_005b7650
    PUSH ESI                            ; 004b0c37
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004b0c38
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004b0c3d
    TEST EAX,EAX                        ; 004b0c40
    JZ 0x004b0c0c                       ; 004b0c42
        ;   XREF to: 004b0c0c (CONDITIONAL_JUMP)  ; LAB_004b0c0c
    PUSH EBX                            ; 004b0c44
    CALL core_grave.cpp_CGrave_startAnimation_FUN_004b0dc0 ; 004b0c45
        ;   XREF to: 004b0dc0 (UNCONDITIONAL_CALL)  ; undefined core_grave.cpp_CGrave_startAnimation_FUN_004b0dc0()
    ADD ESP,0x4                         ; 004b0c4a
    JMP 0x004b0c0c                      ; 004b0c4d
        ;   XREF to: 004b0c0c (UNCONDITIONAL_JUMP)  ; LAB_004b0c0c
    LEA EAX,[EBX + 0x150]               ; 004b0c4f
        ;   Label: LAB_004b0c4f
    PUSH EAX                            ; 004b0c55
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004b0c56
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    FLD float ptr [EBX + 0x2d0]         ; 004b0c5b
    MOV EAX,dword ptr [EAX + 0x100]     ; 004b0c61
    ADD ESP,0x4                         ; 004b0c67
    SUB EAX,EDI                         ; 004b0c6a
    FMUL float ptr [ESP + 0x1c]         ; 004b0c6c
    MOV dword ptr [ESP + 0x4],EAX       ; 004b0c70
    FILD dword ptr [ESP + 0x4]          ; 004b0c74
    FXCH                                ; 004b0c78
    FADD float ptr [EBX + 0x2cc]        ; 004b0c7a
    FXCH                                ; 004b0c80
    FSTP float ptr [ESP]                ; 004b0c82
    FST float ptr [EBX + 0x2cc]         ; 004b0c85
    FCOMP float ptr [ESP]               ; 004b0c8b
    FNSTSW AX                           ; 004b0c8e
    SAHF                                ; 004b0c90
    JC 0x004b0c17                       ; 004b0c91
        ;   XREF to: 004b0c17 (CONDITIONAL_JUMP)  ; LAB_004b0c17
    MOV EAX,dword ptr [ESP]             ; 004b0c93
    MOV dword ptr [EBX + 0x2d8],0x2     ; 004b0c96
    MOV dword ptr [EBX + 0x2cc],EAX     ; 004b0ca0
    ADD ESP,0x8                         ; 004b0ca6
    POP EDI                             ; 004b0ca9
    POP ESI                             ; 004b0caa
    POP EBX                             ; 004b0cab
    RET                                 ; 004b0cac

