; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_xform_cpp_transformVector3x4InPlace_FUN_0055a910(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[4]:
;   core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70 at 00423384
;   core_gabriela.cpp_FUN_00499ca0 at 00499d92
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 at 0051d95f
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760 at 0053b23e
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0055a910
        ;   Label: core_xform.cpp_transformVector3x4InPlace_FUN_0055a910
    MOV EDX,dword ptr [ESP + 0x10]      ; 0055a913
    MOV EAX,dword ptr [ESP + 0x14]      ; 0055a917
    FLD float ptr [EDX + 0x4]           ; 0055a91b
    FMUL float ptr [EAX + 0x4]          ; 0055a91e
    FLD float ptr [EDX]                 ; 0055a921
    FMUL float ptr [EAX]                ; 0055a923
    FADDP                               ; 0055a925
    FLD float ptr [EDX + 0x8]           ; 0055a927
    FMUL float ptr [EAX + 0x8]          ; 0055a92a
    FADDP                               ; 0055a92d
    FADD float ptr [EAX + 0xc]          ; 0055a92f
    FSTP float ptr [ESP]                ; 0055a932
    FLD float ptr [EDX + 0x4]           ; 0055a935
    FMUL float ptr [EAX + 0x14]         ; 0055a938
    FLD float ptr [EDX]                 ; 0055a93b
    FMUL float ptr [EAX + 0x10]         ; 0055a93d
    FADDP                               ; 0055a940
    FLD float ptr [EDX + 0x8]           ; 0055a942
    FMUL float ptr [EAX + 0x18]         ; 0055a945
    FADDP                               ; 0055a948
    FADD float ptr [EAX + 0x1c]         ; 0055a94a
    FSTP float ptr [ESP + 0x4]          ; 0055a94d
    FLD float ptr [EDX + 0x4]           ; 0055a951
    FMUL float ptr [EAX + 0x24]         ; 0055a954
    FLD float ptr [EDX]                 ; 0055a957
    FMUL float ptr [EAX + 0x20]         ; 0055a959
    FADDP                               ; 0055a95c
    FLD float ptr [EDX + 0x8]           ; 0055a95e
    FMUL float ptr [EAX + 0x28]         ; 0055a961
    FADDP                               ; 0055a964
    MOV ECX,EDX                         ; 0055a966
    FADD float ptr [EAX + 0x2c]         ; 0055a968
    MOV EAX,ESP                         ; 0055a96b
    FSTP float ptr [ESP + 0x8]          ; 0055a96d
    CMP EDX,EAX                         ; 0055a971
    JNZ 0x0055a97b                      ; 0055a973
        ;   XREF to: 0055a97b (CONDITIONAL_JUMP)  ; LAB_0055a97b
    MOV EAX,ECX                         ; 0055a975
    ADD ESP,0xc                         ; 0055a977
    RET                                 ; 0055a97a
    MOV EAX,dword ptr [ESP]             ; 0055a97b
        ;   Label: LAB_0055a97b
    MOV dword ptr [EDX],EAX             ; 0055a97e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055a980
    MOV dword ptr [EDX + 0x4],EAX       ; 0055a984
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055a987
    MOV dword ptr [EDX + 0x8],EAX       ; 0055a98b
    MOV EAX,ECX                         ; 0055a98e
    ADD ESP,0xc                         ; 0055a990
    RET                                 ; 0055a993

