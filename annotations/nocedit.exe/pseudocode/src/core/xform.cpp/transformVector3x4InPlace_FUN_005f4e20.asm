; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20(CVector3f *input_output_vector,CMatrix3x4f *matrix)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   input_output_vector
; CMatrix3x4f *    Stack[0x8]:4   matrix
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[4]:
;   core_bugs.cpp_CBugs_FUN_004268e0 at 00426ff4
;   core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_004d7120 at 004d7212
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 at 005a00df
;   core_stranger.cpp_CStranger_FUN_005c07b0 at 005c128e
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005f4e20
        ;   Label: core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
    MOV EDX,dword ptr [ESP + 0x10]      ; 005f4e23
    MOV EAX,dword ptr [ESP + 0x14]      ; 005f4e27
    FLD float ptr [EDX + 0x4]           ; 005f4e2b
    FMUL float ptr [EAX + 0x4]          ; 005f4e2e
    FLD float ptr [EDX]                 ; 005f4e31
    FMUL float ptr [EAX]                ; 005f4e33
    FADDP                               ; 005f4e35
    FLD float ptr [EDX + 0x8]           ; 005f4e37
    FMUL float ptr [EAX + 0x8]          ; 005f4e3a
    FADDP                               ; 005f4e3d
    FADD float ptr [EAX + 0xc]          ; 005f4e3f
    FSTP float ptr [ESP]                ; 005f4e42
    FLD float ptr [EDX + 0x4]           ; 005f4e45
    FMUL float ptr [EAX + 0x14]         ; 005f4e48
    FLD float ptr [EDX]                 ; 005f4e4b
    FMUL float ptr [EAX + 0x10]         ; 005f4e4d
    FADDP                               ; 005f4e50
    FLD float ptr [EDX + 0x8]           ; 005f4e52
    FMUL float ptr [EAX + 0x18]         ; 005f4e55
    FADDP                               ; 005f4e58
    FADD float ptr [EAX + 0x1c]         ; 005f4e5a
    FSTP float ptr [ESP + 0x4]          ; 005f4e5d
    FLD float ptr [EDX + 0x4]           ; 005f4e61
    FMUL float ptr [EAX + 0x24]         ; 005f4e64
    FLD float ptr [EDX]                 ; 005f4e67
    FMUL float ptr [EAX + 0x20]         ; 005f4e69
    FADDP                               ; 005f4e6c
    FLD float ptr [EDX + 0x8]           ; 005f4e6e
    FMUL float ptr [EAX + 0x28]         ; 005f4e71
    FADDP                               ; 005f4e74
    MOV ECX,EDX                         ; 005f4e76
    FADD float ptr [EAX + 0x2c]         ; 005f4e78
    MOV EAX,ESP                         ; 005f4e7b
    FSTP float ptr [ESP + 0x8]          ; 005f4e7d
    CMP EDX,EAX                         ; 005f4e81
    JNZ 0x005f4e8b                      ; 005f4e83
        ;   XREF to: 005f4e8b (CONDITIONAL_JUMP)  ; LAB_005f4e8b
    MOV EAX,ECX                         ; 005f4e85
    ADD ESP,0xc                         ; 005f4e87
    RET                                 ; 005f4e8a
    MOV EAX,dword ptr [ESP]             ; 005f4e8b
        ;   Label: LAB_005f4e8b
    MOV dword ptr [EDX],EAX             ; 005f4e8e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005f4e90
    MOV dword ptr [EDX + 0x4],EAX       ; 005f4e94
    MOV EAX,dword ptr [ESP + 0x8]       ; 005f4e97
    MOV dword ptr [EDX + 0x8],EAX       ; 005f4e9b
    MOV EAX,ECX                         ; 005f4e9e
    ADD ESP,0xc                         ; 005f4ea0
    RET                                 ; 005f4ea3

