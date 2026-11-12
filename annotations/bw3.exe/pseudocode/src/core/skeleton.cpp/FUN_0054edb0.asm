; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_0054edb0(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   animation_time
; SPose *          Stack[0x10]:4   output_bone_data
;
; XREF[1]:
;   core_skeleton.cpp_FUN_0054eb40 at 0054ebb2
;
; Called Functions:
;   core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004fcb50
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054edb0
        ;   Label: core_skeleton.cpp_FUN_0054edb0
    PUSH ESI                            ; 0054edb1
    PUSH EDI                            ; 0054edb2
    PUSH EBP                            ; 0054edb3
    MOV EBP,ESP                         ; 0054edb4
    SUB ESP,0x74                        ; 0054edb6
    AND ESP,0xfffffff8                  ; 0054edb9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054edbc
    PUSH EDX                            ; 0054edbf
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054edc0
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054edc5
    MOV ESI,EAX                         ; 0054edc8
    MOV dword ptr [ESP + 0x68],EAX      ; 0054edca
    MOV EAX,ESP                         ; 0054edce
    PUSH EAX                            ; 0054edd0
    LEA EAX,[ESP + 0x64]                ; 0054edd1
    PUSH EAX                            ; 0054edd5
    LEA EAX,[ESP + 0x64]                ; 0054edd6
    PUSH EAX                            ; 0054edda
    MOV ECX,dword ptr [EBP + 0x18]      ; 0054eddb
    PUSH dword ptr [EBP + 0x1c]         ; 0054edde
    PUSH ECX                            ; 0054ede1
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054ede2
    PUSH EBX                            ; 0054ede5
    CALL core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004fcb50 ; 0054ede6
        ;   XREF to: 004fcb50 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004fcb50(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, ...)
    ADD ESP,0x18                        ; 0054edeb
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0054edee
    XOR EBX,EBX                         ; 0054edf4
    TEST EDI,EDI                        ; 0054edf6
    JLE 0x0054ee70                      ; 0054edf8
        ;   XREF to: 0054ee70 (CONDITIONAL_JUMP)  ; LAB_0054ee70
    MOV EAX,dword ptr [EBP + 0x20]      ; 0054edfa
    MOV dword ptr [ESP + 0x70],EAX      ; 0054edfd
    MOV dword ptr [ESP + 0x6c],EAX      ; 0054ee01
    MOV EAX,dword ptr [ESP + 0x60]      ; 0054ee05
        ;   Label: LAB_0054ee05
    PUSH dword ptr [ESP]                ; 0054ee09
    PUSH EAX                            ; 0054ee0c
    MOV EDX,dword ptr [ESP + 0x64]      ; 0054ee0d
    PUSH EDX                            ; 0054ee11
    PUSH EBX                            ; 0054ee12
    MOV ECX,dword ptr [ESP + 0x78]      ; 0054ee13
    PUSH ECX                            ; 0054ee17
    LEA ESI,[ESP + 0x18]                ; 0054ee18
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140 ; 0054ee1c
        ;   XREF to: 00548140 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    ADD ESP,0x14                        ; 0054ee21
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0054ee24
    LEA ESI,[ESP + 0x4]                 ; 0054ee28
    LEA EDI,[EDI + 0xc]                 ; 0054ee2c
    INC EBX                             ; 0054ee2f
    MOVSD ES:EDI,ESI                    ; 0054ee30
    MOVSD ES:EDI,ESI                    ; 0054ee31
    MOVSD ES:EDI,ESI                    ; 0054ee32
    MOVSD ES:EDI,ESI                    ; 0054ee33
    MOV EAX,dword ptr [ESP + 0x70]      ; 0054ee34
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0054ee38
    LEA ESI,[EAX + 0x4]                 ; 0054ee3c
    MOV dword ptr [EAX + 0x64c],0x3f800000 ; 0054ee3f
    MOV EAX,dword ptr [ESP + 0x68]      ; 0054ee49
    MOV dword ptr [ESP + 0x70],ESI      ; 0054ee4d
    ADD EDI,0x10                        ; 0054ee51
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0054ee54
    MOV dword ptr [ESP + 0x6c],EDI      ; 0054ee5a
    CMP EBX,EDX                         ; 0054ee5e
    JL 0x0054ee05                       ; 0054ee60
        ;   XREF to: 0054ee05 (CONDITIONAL_JUMP)  ; LAB_0054ee05
    LEA EAX,[EAX]                       ; 0054ee62
    LEA EDX,[EDX]                       ; 0054ee68
    MOV EAX,EAX                         ; 0054ee6e
    MOV EBX,dword ptr [ESP + 0x60]      ; 0054ee70
        ;   Label: LAB_0054ee70
    LEA EAX,[EBX*0x4 + 0x0]             ; 0054ee74
    SUB EAX,EBX                         ; 0054ee7b
    MOV EBX,dword ptr [ESP + 0x68]      ; 0054ee7d
    MOV EBX,dword ptr [EBX + 0x1ec94]   ; 0054ee81
    FLD float ptr [EBX + EAX*0x4]       ; 0054ee87
    FMUL float ptr [ESP]                ; 0054ee8a
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 0054ee8d
    FMUL float ptr [ESP]                ; 0054ee91
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 0054ee94
    FMUL float ptr [ESP]                ; 0054ee98
    LEA EDI,[ESP + 0x2c]                ; 0054ee9b
    LEA ESI,[ESP + 0x14]                ; 0054ee9f
    FXCH ST2                            ; 0054eea3
    FSTP float ptr [ESP + 0x14]         ; 0054eea5
    FSTP float ptr [ESP + 0x18]         ; 0054eea9
    FSTP float ptr [ESP + 0x1c]         ; 0054eead
    MOVSD ES:EDI,ESI                    ; 0054eeb1
    MOVSD ES:EDI,ESI                    ; 0054eeb2
    MOVSD ES:EDI,ESI                    ; 0054eeb3
    FLD float ptr [ESP]                 ; 0054eeb4
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0054eeb7
    FLD1                                ; 0054eebb
    LEA EAX,[ESI*0x4 + 0x0]             ; 0054eebd
    FSUBRP                              ; 0054eec4
    SUB EAX,ESI                         ; 0054eec6
    FSTP float ptr [ESP + 0x64]         ; 0054eec8
    FLD float ptr [EBX + EAX*0x4]       ; 0054eecc
    FMUL float ptr [ESP + 0x64]         ; 0054eecf
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 0054eed3
    FMUL float ptr [ESP + 0x64]         ; 0054eed7
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 0054eedb
    FMUL float ptr [ESP + 0x64]         ; 0054eedf
    MOV ECX,dword ptr [EBP + 0x20]      ; 0054eee3
    LEA EDI,[ESP + 0x44]                ; 0054eee6
    LEA ESI,[ESP + 0x50]                ; 0054eeea
    FXCH ST2                            ; 0054eeee
    FSTP float ptr [ESP + 0x50]         ; 0054eef0
    FSTP float ptr [ESP + 0x54]         ; 0054eef4
    FSTP float ptr [ESP + 0x58]         ; 0054eef8
    MOVSD ES:EDI,ESI                    ; 0054eefc
    MOVSD ES:EDI,ESI                    ; 0054eefd
    MOVSD ES:EDI,ESI                    ; 0054eefe
    LEA EAX,[ESP + 0x20]                ; 0054eeff
    FLD float ptr [ESP + 0x44]          ; 0054ef03
    FLD float ptr [ESP + 0x48]          ; 0054ef07
    FLD float ptr [ESP + 0x4c]          ; 0054ef0b
    LEA EDI,[ESP + 0x20]                ; 0054ef0f
    LEA ESI,[ESP + 0x38]                ; 0054ef13
    FXCH ST2                            ; 0054ef17
    FADD float ptr [ESP + 0x2c]         ; 0054ef19
    FXCH                                ; 0054ef1d
    FADD float ptr [ESP + 0x30]         ; 0054ef1f
    FXCH ST2                            ; 0054ef23
    FADD float ptr [ESP + 0x34]         ; 0054ef25
    FXCH                                ; 0054ef29
    FSTP float ptr [ESP + 0x38]         ; 0054ef2b
    FXCH                                ; 0054ef2f
    FSTP float ptr [ESP + 0x3c]         ; 0054ef31
    FSTP float ptr [ESP + 0x40]         ; 0054ef35
    MOVSD ES:EDI,ESI                    ; 0054ef39
    MOVSD ES:EDI,ESI                    ; 0054ef3a
    MOVSD ES:EDI,ESI                    ; 0054ef3b
    CMP EAX,ECX                         ; 0054ef3c
    JNZ 0x0054ef7b                      ; 0054ef3e
        ;   XREF to: 0054ef7b (CONDITIONAL_JUMP)  ; LAB_0054ef7b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054ef40
        ;   Label: LAB_0054ef40
    FLD float ptr [EAX + 0x508]         ; 0054ef43
    MOV EAX,dword ptr [EBP + 0x20]      ; 0054ef49
    FMUL float ptr [EAX]                ; 0054ef4c
    FSTP float ptr [EAX]                ; 0054ef4e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054ef50
    FLD float ptr [EAX + 0x50c]         ; 0054ef53
    MOV EAX,dword ptr [EBP + 0x20]      ; 0054ef59
    FMUL float ptr [EAX + 0x4]          ; 0054ef5c
    FSTP float ptr [EAX + 0x4]          ; 0054ef5f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054ef62
    FLD float ptr [EAX + 0x510]         ; 0054ef65
    MOV EAX,dword ptr [EBP + 0x20]      ; 0054ef6b
    FMUL float ptr [EAX + 0x8]          ; 0054ef6e
    FSTP float ptr [EAX + 0x8]          ; 0054ef71
    MOV ESP,EBP                         ; 0054ef74
    POP EBP                             ; 0054ef76
    POP EDI                             ; 0054ef77
    POP ESI                             ; 0054ef78
    POP EBX                             ; 0054ef79
    RET                                 ; 0054ef7a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054ef7b
        ;   Label: LAB_0054ef7b
    MOV dword ptr [ECX],EAX             ; 0054ef7f
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054ef81
    MOV dword ptr [ECX + 0x4],EAX       ; 0054ef85
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054ef88
    MOV dword ptr [ECX + 0x8],EAX       ; 0054ef8c
    JMP 0x0054ef40                      ; 0054ef8f
        ;   XREF to: 0054ef40 (UNCONDITIONAL_JUMP)  ; LAB_0054ef40

