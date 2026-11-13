; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_00547d70(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   start_frame
; float            Stack[0xc]:4   end_frame
; float            Stack[0x10]:4   scale_factor
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_00547e10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00547d70
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_00547d70
    PUSH EDI                            ; 00547d71
    SUB ESP,0x30                        ; 00547d72
    PUSH dword ptr [ESP + 0x44]         ; 00547d75
    MOV EDX,dword ptr [ESP + 0x40]      ; 00547d79
    PUSH dword ptr [ESP + 0x44]         ; 00547d7d
    PUSH EDX                            ; 00547d81
    LEA ESI,[ESP + 0x18]                ; 00547d82
    LEA EDI,[ESP + 0x24]                ; 00547d86
    CALL core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_00547e10 ; 00547d8a
        ;   XREF to: 00547e10 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_00547e10(CDeformableModelInstance * this_ptr, float start_frame, float end_frame, CVector3f * output_buffer)
    LEA ESI,[ESP + 0x18]                ; 00547d8f
    ADD ESP,0xc                         ; 00547d93
    MOVSD ES:EDI,ESI                    ; 00547d96
    MOVSD ES:EDI,ESI                    ; 00547d97
    MOVSD ES:EDI,ESI                    ; 00547d98
    FLD float ptr [ESP + 0x48]          ; 00547d99
    FLD float ptr [ESP + 0x18]          ; 00547d9d
    FMUL ST1                            ; 00547da1
    FLD float ptr [ESP + 0x1c]          ; 00547da3
    FMUL ST2                            ; 00547da7
    FLD float ptr [ESP + 0x20]          ; 00547da9
    FMULP ST3                           ; 00547dad
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00547daf
    MOV EDI,ESP                         ; 00547db3
    LEA ESI,[ESP + 0x24]                ; 00547db5
    FXCH                                ; 00547db9
    FSTP float ptr [ESP + 0x24]         ; 00547dbb
    FSTP float ptr [ESP + 0x28]         ; 00547dbf
    FSTP float ptr [ESP + 0x2c]         ; 00547dc3
    MOVSD ES:EDI,ESI                    ; 00547dc7
    MOVSD ES:EDI,ESI                    ; 00547dc8
    MOVSD ES:EDI,ESI                    ; 00547dc9
    FLD float ptr [EAX + 0x2254]        ; 00547dca
    FLD float ptr [EAX + 0x2258]        ; 00547dd0
    FLD float ptr [EAX + 0x225c]        ; 00547dd6
    FXCH ST2                            ; 00547ddc
    FADD float ptr [ESP]                ; 00547dde
    FXCH                                ; 00547de1
    FADD float ptr [ESP + 0x4]          ; 00547de3
    FXCH ST2                            ; 00547de7
    FADD float ptr [ESP + 0x8]          ; 00547de9
    FXCH                                ; 00547ded
    FSTP float ptr [EAX + 0x2254]       ; 00547def
    FXCH                                ; 00547df5
    FSTP float ptr [EAX + 0x2258]       ; 00547df7
    FSTP float ptr [EAX + 0x225c]       ; 00547dfd
    ADD ESP,0x30                        ; 00547e03
    POP EDI                             ; 00547e06
    POP ESI                             ; 00547e07
    RET                                 ; 00547e08

