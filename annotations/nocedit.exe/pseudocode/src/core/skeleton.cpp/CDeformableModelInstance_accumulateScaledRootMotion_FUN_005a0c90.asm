; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90 (CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   start_frame
; float            Stack[0xc]:4   end_frame
; float            Stack[0x10]:4   scale_factor
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined1       Stack[-0xc]:1  local_c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 005a0c90
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90
    PUSH dword ptr [ESP + 0x24]         ; 005a0c93
    LEA EAX,[ESP + 0x10]                ; 005a0c97
    PUSH dword ptr [ESP + 0x24]         ; 005a0c9b
    PUSH EAX                            ; 005a0c9f
    MOV EDX,dword ptr [ESP + 0x28]      ; 005a0ca0
    PUSH EDX                            ; 005a0ca4
    CALL core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10 ; 005a0ca5
        ;   XREF to: 005a0d10 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10(CDeformableModelInstance * this_ptr, CVector3f * output_buffer, float start_frame, float end_frame)
    ADD ESP,0x10                        ; 005a0caa
    FLD float ptr [ESP + 0x28]          ; 005a0cad
    FLD float ptr [EAX]                 ; 005a0cb1
    FMUL ST1                            ; 005a0cb3
    FSTP float ptr [ESP]                ; 005a0cb5
    FLD float ptr [EAX + 0x4]           ; 005a0cb8
    FMUL ST1                            ; 005a0cbb
    FSTP float ptr [ESP + 0x4]          ; 005a0cbd
    FMUL float ptr [EAX + 0x8]          ; 005a0cc1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a0cc4
    FSTP float ptr [ESP + 0x8]          ; 005a0cc8
    FLD float ptr [EAX + 0x2254]        ; 005a0ccc
    FADD float ptr [ESP]                ; 005a0cd2
    FLD float ptr [EAX + 0x2258]        ; 005a0cd5
    FXCH                                ; 005a0cdb
    FSTP float ptr [EAX + 0x2254]       ; 005a0cdd
    FADD float ptr [ESP + 0x4]          ; 005a0ce3
    FLD float ptr [EAX + 0x225c]        ; 005a0ce7
    FXCH                                ; 005a0ced
    FSTP float ptr [EAX + 0x2258]       ; 005a0cef
    FADD float ptr [ESP + 0x8]          ; 005a0cf5
    FSTP float ptr [EAX + 0x225c]       ; 005a0cf9
    ADD ESP,0x18                        ; 005a0cff
    RET                                 ; 005a0d02

