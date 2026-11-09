; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_xform_cpp_transformVector3x4InPlace_FUN_005b5100(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[5]:
;   core_bugs.cpp_FUN_00426ec0 at 00427711
;   core_doc.cpp_FUN_0046f740 at 0047049c
;   core_gabriela.cpp_FUN_004cb1e0 at 004cb2d8
;   core_skeleton.cpp_FUN_005695e0 at 0056979f
;   core_stranger.cpp_FUN_0058afe0 at 0058bd66
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005b5100
        ;   Label: core_xform.cpp_transformVector3x4InPlace_FUN_005b5100
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b5103
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b5107
    FLD float ptr [EDX + 0x4]           ; 005b510b
    FMUL float ptr [EAX + 0x4]          ; 005b510e
    FLD float ptr [EDX]                 ; 005b5111
    FMUL float ptr [EAX]                ; 005b5113
    FADDP                               ; 005b5115
    FLD float ptr [EDX + 0x8]           ; 005b5117
    FMUL float ptr [EAX + 0x8]          ; 005b511a
    FADDP                               ; 005b511d
    FADD float ptr [EAX + 0xc]          ; 005b511f
    FSTP float ptr [ESP]                ; 005b5122
    FLD float ptr [EDX + 0x4]           ; 005b5125
    FMUL float ptr [EAX + 0x14]         ; 005b5128
    FLD float ptr [EDX]                 ; 005b512b
    FMUL float ptr [EAX + 0x10]         ; 005b512d
    FADDP                               ; 005b5130
    FLD float ptr [EDX + 0x8]           ; 005b5132
    FMUL float ptr [EAX + 0x18]         ; 005b5135
    FADDP                               ; 005b5138
    FADD float ptr [EAX + 0x1c]         ; 005b513a
    FSTP float ptr [ESP + 0x4]          ; 005b513d
    FLD float ptr [EDX + 0x4]           ; 005b5141
    FMUL float ptr [EAX + 0x24]         ; 005b5144
    FLD float ptr [EDX]                 ; 005b5147
    FMUL float ptr [EAX + 0x20]         ; 005b5149
    FADDP                               ; 005b514c
    FLD float ptr [EDX + 0x8]           ; 005b514e
    FMUL float ptr [EAX + 0x28]         ; 005b5151
    FADDP                               ; 005b5154
    MOV ECX,EDX                         ; 005b5156
    FADD float ptr [EAX + 0x2c]         ; 005b5158
    MOV EAX,ESP                         ; 005b515b
    FSTP float ptr [ESP + 0x8]          ; 005b515d
    CMP EDX,EAX                         ; 005b5161
    JNZ 0x005b516b                      ; 005b5163
        ;   XREF to: 005b516b (CONDITIONAL_JUMP)  ; LAB_005b516b
    MOV EAX,ECX                         ; 005b5165
    ADD ESP,0xc                         ; 005b5167
    RET                                 ; 005b516a
    MOV EAX,dword ptr [ESP]             ; 005b516b
        ;   Label: LAB_005b516b
    MOV dword ptr [EDX],EAX             ; 005b516e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b5170
    MOV dword ptr [EDX + 0x4],EAX       ; 005b5174
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b5177
    MOV dword ptr [EDX + 0x8],EAX       ; 005b517b
    MOV EAX,ECX                         ; 005b517e
    ADD ESP,0xc                         ; 005b5180
    RET                                 ; 005b5183

