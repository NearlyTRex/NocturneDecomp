; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack5_esi core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation,CQuaternion4f *result_out)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; int              Stack[0xc]:4   frame_index_1
; int              Stack[0x10]:4   frame_index_2
; float            Stack[0x14]:4   interpolation
; Local Variables:
; undefined4[1520] Stack[-0x180c]:6080  auStackY_180c
; CQuaternion4f    Stack[-0x20]:16  local_20
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 at 0059f12e
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0 at 005a0b3c
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 at 0059e1c0
;
; Called Functions:
;   core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a070
        ;   Label: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
    PUSH EDI                            ; 0059a071
    PUSH EBP                            ; 0059a072
    MOV EBP,ESP                         ; 0059a073
    SUB ESP,0x28                        ; 0059a075
    AND ESP,0xfffffff8                  ; 0059a078
    MOV EDI,dword ptr [EBP + 0x14]      ; 0059a07b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0059a07e
    MOV EBX,ESI                         ; 0059a081
    MOV ESI,dword ptr [EBP + 0x10]      ; 0059a083
    FLD float ptr [EBP + 0x20]          ; 0059a086
    FLDZ                                ; 0059a089
    FXCH                                ; 0059a08b
    FSTP double ptr [ESP]               ; 0059a08d
    FCOMP double ptr [ESP]              ; 0059a090
    FNSTSW AX                           ; 0059a093
    SAHF                                ; 0059a095
    JNC 0x0059a0c9                      ; 0059a096
        ;   XREF to: 0059a0c9 (CONDITIONAL_JUMP)  ; LAB_0059a0c9
    FLD1                                ; 0059a098
    FCOMP double ptr [ESP]              ; 0059a09a
    FNSTSW AX                           ; 0059a09d
    SAHF                                ; 0059a09f
    JA 0x0059a0cf                       ; 0059a0a0
        ;   XREF to: 0059a0cf (CONDITIONAL_JUMP)  ; LAB_0059a0cf
    PUSH EDX                            ; 0059a0a2
    PUSH EDI                            ; 0059a0a3
        ;   Label: LAB_0059a0a3
    PUSH ESI                            ; 0059a0a4
    LEA EDI,[ESP + 0x14]                ; 0059a0a5
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050 ; 0059a0a9
        ;   XREF to: 0059a050 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050(CSkeleton * this_ptr, int bone_index, int frame_index)
    MOV ESI,EAX                         ; 0059a0ae
    ADD ESP,0xc                         ; 0059a0b0
        ;   Label: LAB_0059a0b0
    JMP 0x0060fb40                      ; 0059a0b3
        ;   XREF to: 0060fb40 (UNCONDITIONAL_JUMP)  ; LAB_0060fb40
    MOV ESP,EBP                         ; 0059a0c3
        ;   Label: LAB_0059a0c3
    POP EBP                             ; 0059a0c5
    POP EDI                             ; 0059a0c6
    POP EBX                             ; 0059a0c7
    RET                                 ; 0059a0c8
    MOV ECX,dword ptr [EBP + 0x18]      ; 0059a0c9
        ;   Label: LAB_0059a0c9
    PUSH ECX                            ; 0059a0cc
    JMP 0x0059a0a3                      ; 0059a0cd
        ;   XREF to: 0059a0a3 (UNCONDITIONAL_JUMP)  ; LAB_0059a0a3
    PUSH dword ptr [EBP + 0x20]         ; 0059a0cf
        ;   Label: LAB_0059a0cf
    PUSH EDX                            ; 0059a0d2
    PUSH EDI                            ; 0059a0d3
    PUSH ESI                            ; 0059a0d4
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050 ; 0059a0d5
        ;   XREF to: 0059a050 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 0059a0da
    PUSH EAX                            ; 0059a0dd
    MOV EDX,dword ptr [EBP + 0x18]      ; 0059a0de
    PUSH EDX                            ; 0059a0e1
    PUSH EDI                            ; 0059a0e2
    PUSH ESI                            ; 0059a0e3
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050 ; 0059a0e4
        ;   XREF to: 0059a050 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050(CSkeleton * this_ptr, int bone_index, int frame_index)
    ADD ESP,0xc                         ; 0059a0e9
    PUSH EAX                            ; 0059a0ec
    LEA ESI,[ESP + 0x24]                ; 0059a0ed
    LEA EDI,[ESP + 0x14]                ; 0059a0f1
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 0059a0f5
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x24]                ; 0059a0fa
    JMP 0x0059a0b0                      ; 0059a0fe
        ;   XREF to: 0059a0b0 (UNCONDITIONAL_JUMP)  ; LAB_0059a0b0
    MOV EAX,dword ptr [ESI]             ; 0060fb40
        ;   Label: LAB_0060fb40
    MOV dword ptr [EDI],EAX             ; 0060fb42
    MOV EAX,dword ptr [ESI + 0x4]       ; 0060fb44
    MOV dword ptr [EDI + 0x4],EAX       ; 0060fb47
    MOV EAX,dword ptr [ESI + 0x8]       ; 0060fb4a
    MOV dword ptr [EDI + 0x8],EAX       ; 0060fb4d
    MOV EAX,dword ptr [ESI + 0xc]       ; 0060fb50
    MOV dword ptr [EDI + 0xc],EAX       ; 0060fb53
    LEA ESI,[ESP + 0x8]                 ; 0060fb56
    MOV EDI,EBX                         ; 0060fb5a
    MOV EAX,dword ptr [ESI]             ; 0060fb5c
    MOV dword ptr [EDI],EAX             ; 0060fb5e
    MOV EAX,dword ptr [ESI + 0x4]       ; 0060fb60
    MOV dword ptr [EDI + 0x4],EAX       ; 0060fb63
    MOV EAX,dword ptr [ESI + 0x8]       ; 0060fb66
    MOV dword ptr [EDI + 0x8],EAX       ; 0060fb69
    MOV EAX,dword ptr [ESI + 0xc]       ; 0060fb6c
    MOV dword ptr [EDI + 0xc],EAX       ; 0060fb6f
    MOV EAX,EBX                         ; 0060fb72
    JMP 0x0059a0c3                      ; 0060fb74
        ;   XREF to: 0059a0c3 (UNCONDITIONAL_JUMP)  ; LAB_0059a0c3

