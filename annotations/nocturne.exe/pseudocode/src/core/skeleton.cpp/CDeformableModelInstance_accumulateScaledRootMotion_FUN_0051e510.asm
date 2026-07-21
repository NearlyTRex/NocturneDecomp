; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0051e510(int param_1,undefined4 param_2,undefined4 param_3,float param_4)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 0051e510
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0051e510
    PUSH dword ptr [ESP + 0x24]         ; 0051e513
    LEA EAX,[ESP + 0x10]                ; 0051e517
    PUSH dword ptr [ESP + 0x24]         ; 0051e51b
    PUSH EAX                            ; 0051e51f
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051e520
    PUSH EDX                            ; 0051e524
    CALL core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590 ; 0051e525
        ;   XREF to: 0051e590 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590()
    ADD ESP,0x10                        ; 0051e52a
    FLD float ptr [ESP + 0x28]          ; 0051e52d
    FLD float ptr [EAX]                 ; 0051e531
    FMUL ST1                            ; 0051e533
    FSTP float ptr [ESP]                ; 0051e535
    FLD float ptr [EAX + 0x4]           ; 0051e538
    FMUL ST1                            ; 0051e53b
    FSTP float ptr [ESP + 0x4]          ; 0051e53d
    FMUL float ptr [EAX + 0x8]          ; 0051e541
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051e544
    FSTP float ptr [ESP + 0x8]          ; 0051e548
    FLD float ptr [EAX + 0x2254]        ; 0051e54c
    FADD float ptr [ESP]                ; 0051e552
    FLD float ptr [EAX + 0x2258]        ; 0051e555
    FXCH                                ; 0051e55b
    FSTP float ptr [EAX + 0x2254]       ; 0051e55d
    FADD float ptr [ESP + 0x4]          ; 0051e563
    FLD float ptr [EAX + 0x225c]        ; 0051e567
    FXCH                                ; 0051e56d
    FSTP float ptr [EAX + 0x2258]       ; 0051e56f
    FADD float ptr [ESP + 0x8]          ; 0051e575
    FSTP float ptr [EAX + 0x225c]       ; 0051e579
    ADD ESP,0x18                        ; 0051e57f
    RET                                 ; 0051e582

