; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_xform_cpp_transformVector3x4InPlace_FUN_005832e0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_bugs.cpp_FUN_00423050 at 004238a1
;   core_prye.cpp_FUN_0051f490 at 00520a80
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170 at 0054e32f
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005832e0
        ;   Label: core_xform.cpp_transformVector3x4InPlace_FUN_005832e0
    MOV EDX,dword ptr [ESP + 0x10]      ; 005832e3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005832e7
    FLD float ptr [EDX + 0x4]           ; 005832eb
    FMUL float ptr [EAX + 0x4]          ; 005832ee
    FLD float ptr [EDX]                 ; 005832f1
    FMUL float ptr [EAX]                ; 005832f3
    FADDP                               ; 005832f5
    FLD float ptr [EDX + 0x8]           ; 005832f7
    FMUL float ptr [EAX + 0x8]          ; 005832fa
    FADDP                               ; 005832fd
    FADD float ptr [EAX + 0xc]          ; 005832ff
    FSTP float ptr [ESP]                ; 00583302
    FLD float ptr [EDX + 0x4]           ; 00583305
    FMUL float ptr [EAX + 0x14]         ; 00583308
    FLD float ptr [EDX]                 ; 0058330b
    FMUL float ptr [EAX + 0x10]         ; 0058330d
    FADDP                               ; 00583310
    FLD float ptr [EDX + 0x8]           ; 00583312
    FMUL float ptr [EAX + 0x18]         ; 00583315
    FADDP                               ; 00583318
    FADD float ptr [EAX + 0x1c]         ; 0058331a
    FSTP float ptr [ESP + 0x4]          ; 0058331d
    FLD float ptr [EDX + 0x4]           ; 00583321
    FMUL float ptr [EAX + 0x24]         ; 00583324
    FLD float ptr [EDX]                 ; 00583327
    FMUL float ptr [EAX + 0x20]         ; 00583329
    FADDP                               ; 0058332c
    FLD float ptr [EDX + 0x8]           ; 0058332e
    FMUL float ptr [EAX + 0x28]         ; 00583331
    FADDP                               ; 00583334
    MOV ECX,EDX                         ; 00583336
    FADD float ptr [EAX + 0x2c]         ; 00583338
    MOV EAX,ESP                         ; 0058333b
    FSTP float ptr [ESP + 0x8]          ; 0058333d
    CMP EDX,EAX                         ; 00583341
    JNZ 0x0058334b                      ; 00583343
        ;   XREF to: 0058334b (CONDITIONAL_JUMP)  ; LAB_0058334b
    MOV EAX,ECX                         ; 00583345
    ADD ESP,0xc                         ; 00583347
    RET                                 ; 0058334a
    MOV EAX,dword ptr [ESP]             ; 0058334b
        ;   Label: LAB_0058334b
    MOV dword ptr [EDX],EAX             ; 0058334e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00583350
    MOV dword ptr [EDX + 0x4],EAX       ; 00583354
    MOV EAX,dword ptr [ESP + 0x8]       ; 00583357
    MOV dword ptr [EDX + 0x8],EAX       ; 0058335b
    MOV EAX,ECX                         ; 0058335e
    ADD ESP,0xc                         ; 00583360
    RET                                 ; 00583363

