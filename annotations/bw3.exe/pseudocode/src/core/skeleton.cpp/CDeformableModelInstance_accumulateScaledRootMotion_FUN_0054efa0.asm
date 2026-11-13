; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0054efa0(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   start_frame
; float            Stack[0xc]:4   end_frame
; float            Stack[0x10]:4   scale_factor
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0054f040
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0054efa0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0054efa0
    PUSH EDI                            ; 0054efa1
    SUB ESP,0x30                        ; 0054efa2
    PUSH dword ptr [ESP + 0x44]         ; 0054efa5
    MOV EDX,dword ptr [ESP + 0x40]      ; 0054efa9
    PUSH dword ptr [ESP + 0x44]         ; 0054efad
    PUSH EDX                            ; 0054efb1
    LEA ESI,[ESP + 0x18]                ; 0054efb2
    LEA EDI,[ESP + 0x24]                ; 0054efb6
    CALL core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0054f040 ; 0054efba
        ;   XREF to: 0054f040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0054f040(CDeformableModelInstance * this_ptr, float start_frame, float end_frame, CVector3f * output_buffer)
    LEA ESI,[ESP + 0x18]                ; 0054efbf
    ADD ESP,0xc                         ; 0054efc3
    MOVSD ES:EDI,ESI                    ; 0054efc6
    MOVSD ES:EDI,ESI                    ; 0054efc7
    MOVSD ES:EDI,ESI                    ; 0054efc8
    FLD float ptr [ESP + 0x48]          ; 0054efc9
    FLD float ptr [ESP + 0x18]          ; 0054efcd
    FMUL ST1                            ; 0054efd1
    FLD float ptr [ESP + 0x1c]          ; 0054efd3
    FMUL ST2                            ; 0054efd7
    FLD float ptr [ESP + 0x20]          ; 0054efd9
    FMULP ST3                           ; 0054efdd
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0054efdf
    MOV EDI,ESP                         ; 0054efe3
    LEA ESI,[ESP + 0x24]                ; 0054efe5
    FXCH                                ; 0054efe9
    FSTP float ptr [ESP + 0x24]         ; 0054efeb
    FSTP float ptr [ESP + 0x28]         ; 0054efef
    FSTP float ptr [ESP + 0x2c]         ; 0054eff3
    MOVSD ES:EDI,ESI                    ; 0054eff7
    MOVSD ES:EDI,ESI                    ; 0054eff8
    MOVSD ES:EDI,ESI                    ; 0054eff9
    FLD float ptr [EAX + 0x2344]        ; 0054effa
    FLD float ptr [EAX + 0x2348]        ; 0054f000
    FLD float ptr [EAX + 0x234c]        ; 0054f006
    FXCH ST2                            ; 0054f00c
    FADD float ptr [ESP]                ; 0054f00e
    FXCH                                ; 0054f011
    FADD float ptr [ESP + 0x4]          ; 0054f013
    FXCH ST2                            ; 0054f017
    FADD float ptr [ESP + 0x8]          ; 0054f019
    FXCH                                ; 0054f01d
    FSTP float ptr [EAX + 0x2344]       ; 0054f01f
    FXCH                                ; 0054f025
    FSTP float ptr [EAX + 0x2348]       ; 0054f027
    FSTP float ptr [EAX + 0x234c]       ; 0054f02d
    ADD ESP,0x30                        ; 0054f033
    POP EDI                             ; 0054f036
    POP ESI                             ; 0054f037
    RET                                 ; 0054f038

