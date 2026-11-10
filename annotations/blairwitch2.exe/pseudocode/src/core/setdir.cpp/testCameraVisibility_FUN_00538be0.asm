; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setdir_cpp_testCameraVisibility_FUN_00538be0(CDemonActor *param_1,CVector3i *param_2,SMRGLHeaderPrimitive *param_3,int param_4,int param_5,undefined4 param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_005fb354
;
; Called Functions:
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0
;   core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_0053ae20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538be0
        ;   Label: core_setdir.cpp_testCameraVisibility_FUN_00538be0
    PUSH ESI                            ; 00538be1
    PUSH EDI                            ; 00538be2
    PUSH EBP                            ; 00538be3
    SUB ESP,0x18                        ; 00538be4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00538be7
    MOV EBP,dword ptr [ESP + 0x34]      ; 00538beb
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00538bef
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 00538bf3
    TEST EDX,EDX                        ; 00538bf9
    JZ 0x00538c4f                       ; 00538bfb
        ;   XREF to: 00538c4f (CONDITIONAL_JUMP)  ; LAB_00538c4f
    MOV EDI,EAX                         ; 00538bfd
    LEA EBX,[ESI + 0x20]                ; 00538bff
    FLD float ptr [EDI + 0x100]         ; 00538c02
    FSUB float ptr [EBX]                ; 00538c08
    FMUL ST0                            ; 00538c0a
    FLD float ptr [EDI + 0x104]         ; 00538c0c
    FSUB float ptr [EBX + 0x4]          ; 00538c12
    FMUL ST0                            ; 00538c15
    FLD float ptr [EDI + 0x108]         ; 00538c17
    FXCH                                ; 00538c1d
    FADDP ST2,ST0                       ; 00538c1f
    FSUB float ptr [EBX + 0x8]          ; 00538c21
    FMUL ST0                            ; 00538c24
    FLD float ptr [0x005fb354]          ; 00538c26 | DAT_005fb354
    FLD ST0                             ; 00538c2c
    FXCH ST2                            ; 00538c2e
    FADDP ST3,ST0                       ; 00538c30
    FMULP                               ; 00538c32
    FXCH                                ; 00538c34
    FCOMPP                              ; 00538c36
    FNSTSW AX                           ; 00538c38
    SAHF                                ; 00538c3a
    JBE 0x00538c55                      ; 00538c3b
        ;   XREF to: 00538c55 (CONDITIONAL_JUMP)  ; LAB_00538c55
    XOR ESI,ESI                         ; 00538c3d
    MOV dword ptr [ESP + 0x4],ESI       ; 00538c3f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00538c43
        ;   Label: LAB_00538c43
    ADD ESP,0x18                        ; 00538c47
    POP EBP                             ; 00538c4a
    POP EDI                             ; 00538c4b
    POP ESI                             ; 00538c4c
    POP EBX                             ; 00538c4d
    RET                                 ; 00538c4e
    MOV dword ptr [ESP + 0x4],EDX       ; 00538c4f
        ;   Label: LAB_00538c4f
    JMP 0x00538c43                      ; 00538c53
        ;   XREF to: 00538c43 (UNCONDITIONAL_JUMP)  ; LAB_00538c43
    PUSH dword ptr [ESP + 0x40]         ; 00538c55
        ;   Label: LAB_00538c55
    PUSH EBX                            ; 00538c59
    MOV EBX,EDI                         ; 00538c5a
    PUSH EBX                            ; 00538c5c
    CALL core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_0053ae20 ; 00538c5d
        ;   XREF to: 0053ae20 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_0053ae20()
    ADD ESP,0xc                         ; 00538c62
    TEST EAX,EAX                        ; 00538c65
    JZ 0x00538cc7                       ; 00538c67
        ;   XREF to: 00538cc7 (CONDITIONAL_JUMP)  ; LAB_00538cc7
    MOV EBX,dword ptr [ESP + 0x38]      ; 00538c69
    SHL EBX,0x4                         ; 00538c6d
    MOV EDI,EBX                         ; 00538c70
    SHL EBX,0x4                         ; 00538c72
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00538c75
    SUB EBX,EDI                         ; 00538c79
    MOV EDI,0x2093d34                   ; 00538c7b
    MOV EDX,dword ptr [EAX + 0x140]     ; 00538c80
    ADD EDI,EBX                         ; 00538c86
    TEST EDX,EDX                        ; 00538c88
    JZ 0x00538cd7                       ; 00538c8a
        ;   XREF to: 00538cd7 (CONDITIONAL_JUMP)  ; LAB_00538cd7
    XOR EBX,EBX                         ; 00538c8c
    MOV dword ptr [ESP + 0x8],EBX       ; 00538c8e
    MOV EBX,EDI                         ; 00538c92
    ADD EDI,0xf0                        ; 00538c94
    PUSH 0x0                            ; 00538c9a
        ;   Label: LAB_00538c9a
    PUSH EBP                            ; 00538c9c
    MOV EAX,dword ptr [ESP + 0x38]      ; 00538c9d
    PUSH EAX                            ; 00538ca1
    PUSH ESI                            ; 00538ca2
    PUSH EBX                            ; 00538ca3
    CALL core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0 ; 00538ca4
        ;   XREF to: 005386e0 (UNCONDITIONAL_CALL)  ; float core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0(CZThumb * this_ptr, CDemonActor * actor, CVector3i * bounding_box_vertices, SMRGLHeaderPrimitive * primitives, ...)
    MOV dword ptr [ESP + 0x28],EAX      ; 00538ca9
    FLD float ptr [ESP + 0x28]          ; 00538cad
    ADD ESP,0x14                        ; 00538cb1
    FADD float ptr [ESP + 0x8]          ; 00538cb4
    ADD EBX,0x28                        ; 00538cb8
    FSTP float ptr [ESP + 0x8]          ; 00538cbb
    CMP EBX,EDI                         ; 00538cbf
    JNZ 0x00538c9a                      ; 00538cc1
        ;   XREF to: 00538c9a (CONDITIONAL_JUMP)  ; LAB_00538c9a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00538cc3
    MOV dword ptr [ESP + 0x4],EAX       ; 00538cc7
        ;   Label: LAB_00538cc7
    MOV EAX,dword ptr [ESP + 0x4]       ; 00538ccb
    ADD ESP,0x18                        ; 00538ccf
    POP EBP                             ; 00538cd2
    POP EDI                             ; 00538cd3
    POP ESI                             ; 00538cd4
    POP EBX                             ; 00538cd5
    RET                                 ; 00538cd6
    PUSH 0x1                            ; 00538cd7
        ;   Label: LAB_00538cd7
    PUSH EBP                            ; 00538cd9
    MOV ECX,dword ptr [ESP + 0x38]      ; 00538cda
    PUSH ECX                            ; 00538cde
    PUSH ESI                            ; 00538cdf
    PUSH EDI                            ; 00538ce0
    CALL core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0 ; 00538ce1
        ;   XREF to: 005386e0 (UNCONDITIONAL_CALL)  ; float core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0(CZThumb * this_ptr, CDemonActor * actor, CVector3i * bounding_box_vertices, SMRGLHeaderPrimitive * primitives, ...)
    MOV dword ptr [ESP + 0x28],EAX      ; 00538ce6
    FLD float ptr [ESP + 0x28]          ; 00538cea
    ADD ESP,0x14                        ; 00538cee
    FSTP float ptr [ESP + 0x8]          ; 00538cf1
    MOV EAX,dword ptr [ESP + 0x8]       ; 00538cf5
    MOV dword ptr [ESP + 0x4],EAX       ; 00538cf9
    MOV EAX,dword ptr [ESP + 0x4]       ; 00538cfd
    ADD ESP,0x18                        ; 00538d01
    POP EBP                             ; 00538d04
    POP EDI                             ; 00538d05
    POP ESI                             ; 00538d06
    POP EBX                             ; 00538d07
    RET                                 ; 00538d08

