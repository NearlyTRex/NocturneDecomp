; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setdir_cpp_testCameraVisibility_FUN_005750a0(CDemonActor *actor,CVector3i *bbox_vertices,SMRGLHeaderPrimitive *primitives,int camera_index,C3DSCamera *camera,float radius)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
; CVector3i *      Stack[0x8]:4   bbox_vertices
; SMRGLHeaderPrimitive * Stack[0xc]:4   primitives
; int              Stack[0x10]:4   camera_index
; C3DSCamera *     Stack[0x14]:4   camera
; float            Stack[0x18]:4   radius
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   float g_VDCameraDistanceRadius = 200
;   CZThumb[1500] g_CZThumbPool
;
; Called Functions:
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
;   core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005750a0
        ;   Label: core_setdir.cpp_testCameraVisibility_FUN_005750a0
    PUSH ESI                            ; 005750a1
    PUSH EDI                            ; 005750a2
    PUSH EBP                            ; 005750a3
    SUB ESP,0x18                        ; 005750a4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005750a7
    MOV EBP,dword ptr [ESP + 0x34]      ; 005750ab
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005750af
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 005750b3
    TEST EDX,EDX                        ; 005750b9
    JZ 0x0057510f                       ; 005750bb
        ;   XREF to: 0057510f (CONDITIONAL_JUMP)  ; LAB_0057510f
    MOV EDI,EAX                         ; 005750bd
    LEA EBX,[ESI + 0x20]                ; 005750bf
    FLD float ptr [EDI + 0x100]         ; 005750c2
    FSUB float ptr [EBX]                ; 005750c8
    FMUL ST0                            ; 005750ca
    FLD float ptr [EDI + 0x104]         ; 005750cc
    FSUB float ptr [EBX + 0x4]          ; 005750d2
    FMUL ST0                            ; 005750d5
    FLD float ptr [EDI + 0x108]         ; 005750d7
    FXCH                                ; 005750dd
    FADDP ST2,ST0                       ; 005750df
    FSUB float ptr [EBX + 0x8]          ; 005750e1
    FMUL ST0                            ; 005750e4
    FLD float ptr [0x006629d4]          ; 005750e6 | g_VDCameraDistanceRadius
    FLD ST0                             ; 005750ec
    FXCH ST2                            ; 005750ee
    FADDP ST3,ST0                       ; 005750f0
    FMULP                               ; 005750f2
    FXCH                                ; 005750f4
    FCOMPP                              ; 005750f6
    FNSTSW AX                           ; 005750f8
    SAHF                                ; 005750fa
    JBE 0x00575115                      ; 005750fb
        ;   XREF to: 00575115 (CONDITIONAL_JUMP)  ; LAB_00575115
    XOR ESI,ESI                         ; 005750fd
    MOV dword ptr [ESP + 0x4],ESI       ; 005750ff
    MOV EAX,dword ptr [ESP + 0x4]       ; 00575103
        ;   Label: LAB_00575103
    ADD ESP,0x18                        ; 00575107
    POP EBP                             ; 0057510a
    POP EDI                             ; 0057510b
    POP ESI                             ; 0057510c
    POP EBX                             ; 0057510d
    RET                                 ; 0057510e
    MOV dword ptr [ESP + 0x4],EDX       ; 0057510f
        ;   Label: LAB_0057510f
    JMP 0x00575103                      ; 00575113
        ;   XREF to: 00575103 (UNCONDITIONAL_JUMP)  ; LAB_00575103
    PUSH dword ptr [ESP + 0x40]         ; 00575115
        ;   Label: LAB_00575115
    PUSH EBX                            ; 00575119
    MOV EBX,EDI                         ; 0057511a
    PUSH EBX                            ; 0057511c
    CALL core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970 ; 0057511d
        ;   XREF to: 00585970 (UNCONDITIONAL_CALL)  ; int core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970(C3DSCamera * this_ptr, CVector3f * world_position, float radius)
    ADD ESP,0xc                         ; 00575122
    TEST EAX,EAX                        ; 00575125
    JZ 0x00575187                       ; 00575127
        ;   XREF to: 00575187 (CONDITIONAL_JUMP)  ; LAB_00575187
    MOV EBX,dword ptr [ESP + 0x38]      ; 00575129
    SHL EBX,0x4                         ; 0057512d
    MOV EDI,EBX                         ; 00575130
    SHL EBX,0x4                         ; 00575132
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00575135
    SUB EBX,EDI                         ; 00575139
    MOV EDI,0x3347108                   ; 0057513b | g_CZThumbPool
    MOV EDX,dword ptr [EAX + 0x140]     ; 00575140
    ADD EDI,EBX                         ; 00575146
    TEST EDX,EDX                        ; 00575148
    JZ 0x00575197                       ; 0057514a
        ;   XREF to: 00575197 (CONDITIONAL_JUMP)  ; LAB_00575197
    XOR EBX,EBX                         ; 0057514c
    MOV dword ptr [ESP + 0x8],EBX       ; 0057514e
    MOV EBX,EDI                         ; 00575152
    ADD EDI,0xf0                        ; 00575154
    PUSH 0x0                            ; 0057515a
        ;   Label: LAB_0057515a
    PUSH EBP                            ; 0057515c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0057515d
    PUSH EAX                            ; 00575161
    PUSH ESI                            ; 00575162
    PUSH EBX                            ; 00575163
    CALL core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 ; 00575164
        ;   XREF to: 00574ba0 (UNCONDITIONAL_CALL)  ; float core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0(CZThumb * this_ptr, CDemonActor * actor, CVector3i * bounding_box_vertices, SMRGLHeaderPrimitive * primitives, ...)
    MOV dword ptr [ESP + 0x28],EAX      ; 00575169
    FLD float ptr [ESP + 0x28]          ; 0057516d
    ADD ESP,0x14                        ; 00575171
    FADD float ptr [ESP + 0x8]          ; 00575174
    ADD EBX,0x28                        ; 00575178
    FSTP float ptr [ESP + 0x8]          ; 0057517b
    CMP EBX,EDI                         ; 0057517f
    JNZ 0x0057515a                      ; 00575181
        ;   XREF to: 0057515a (CONDITIONAL_JUMP)  ; LAB_0057515a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00575183
    MOV dword ptr [ESP + 0x4],EAX       ; 00575187
        ;   Label: LAB_00575187
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057518b
    ADD ESP,0x18                        ; 0057518f
    POP EBP                             ; 00575192
    POP EDI                             ; 00575193
    POP ESI                             ; 00575194
    POP EBX                             ; 00575195
    RET                                 ; 00575196
    PUSH 0x1                            ; 00575197
        ;   Label: LAB_00575197
    PUSH EBP                            ; 00575199
    MOV ECX,dword ptr [ESP + 0x38]      ; 0057519a
    PUSH ECX                            ; 0057519e
    PUSH ESI                            ; 0057519f
    PUSH EDI                            ; 005751a0
    CALL core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 ; 005751a1
        ;   XREF to: 00574ba0 (UNCONDITIONAL_CALL)  ; float core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0(CZThumb * this_ptr, CDemonActor * actor, CVector3i * bounding_box_vertices, SMRGLHeaderPrimitive * primitives, ...)
    MOV dword ptr [ESP + 0x28],EAX      ; 005751a6
    FLD float ptr [ESP + 0x28]          ; 005751aa
    ADD ESP,0x14                        ; 005751ae
    FSTP float ptr [ESP + 0x8]          ; 005751b1
    MOV EAX,dword ptr [ESP + 0x8]       ; 005751b5
    MOV dword ptr [ESP + 0x4],EAX       ; 005751b9
    MOV EAX,dword ptr [ESP + 0x4]       ; 005751bd
    ADD ESP,0x18                        ; 005751c1
    POP EBP                             ; 005751c4
    POP EDI                             ; 005751c5
    POP ESI                             ; 005751c6
    POP EBX                             ; 005751c7
    RET                                 ; 005751c8

