; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_004869a0(CDraculaBride *this_ptr,float delta_time)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00484410 at 004844a7
;
; Referenced Globals:
;   TerminatedCString s_s_5_2f_5_2f_5_2f_00621c2e
;   float FLOAT_00621c42 = -1
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_CConsoleInstance
;   SFreaky[6] SFreaky_ARRAY_02c6d0c0
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].owner
;   undefined4 SFreaky_ARRAY_02c6d0c0[1].sfx_handle
;   undefined4 SFreaky_ARRAY_02c6d0c0[1].position.x
;   undefined4 SFreaky_ARRAY_02c6d0c0[1].position.y
;   undefined4 SFreaky_ARRAY_02c6d0c0[1].position.z
;   undefined4 SFreaky_ARRAY_02c6d0c0[1].tangent.x
;   undefined4 SFreaky_ARRAY_02c6d0c0[1].tangent.y
;   undefined4 SFreaky_ARRAY_02c6d0c0[1].tangent.z
;   undefined4 SFreaky_ARRAY_02c6d0c0[1].t
;   undefined4 SFreaky_ARRAY_02c6d0c0[1].control_points[0].x
;   ... and 17 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_spline.cpp_computeSplineBasis_FUN_005b90a0
;   core_spline.cpp_evaluateSplinePoint3D_FUN_005b92d0
;   core_spline.cpp_evaluateSplineTangent3D_FUN_005b9490
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004869a0
        ;   Label: core_dracbrid.cpp_CDraculaBride_updateFreakySounds_FUN_004869a0
    PUSH ESI                            ; 004869a1
    PUSH EDI                            ; 004869a2
    PUSH EBP                            ; 004869a3
    MOV EBP,ESP                         ; 004869a4
    SUB ESP,0x74                        ; 004869a6
    AND ESP,0xfffffff8                  ; 004869a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004869ac
    FLD float ptr [EAX + 0xbf50]        ; 004869af
    FSUB float ptr [EBP + 0x18]         ; 004869b5
    FST float ptr [EAX + 0xbf50]        ; 004869b8
    FLDZ                                ; 004869be
    FCOMPP                              ; 004869c0
    FNSTSW AX                           ; 004869c2
    SAHF                                ; 004869c4
    JA 0x00486a32                       ; 004869c5
        ;   XREF to: 00486a32 (CONDITIONAL_JUMP)  ; LAB_00486a32
    MOV EAX,0x32758e8                   ; 004869c7 | g_CDemonCameraInstance.base.position
        ;   Label: LAB_004869c7
    ADD EAX,0x4                         ; 004869cc
    MOV dword ptr [ESP + 0x64],EAX      ; 004869cf | g_CDemonCameraInstance.base.position+4
    MOV EAX,0x32758e8                   ; 004869d3 | g_CDemonCameraInstance.base.position
    ADD EAX,0x8                         ; 004869d8
    MOV dword ptr [ESP + 0x60],EAX      ; 004869db | g_CDemonCameraInstance.base.position+8
    LEA EAX,[ESP + 0x20]                ; 004869df
    ADD EAX,0x4                         ; 004869e3
    MOV dword ptr [ESP + 0x58],EAX      ; 004869e6
    LEA EAX,[ESP + 0x20]                ; 004869ea
    MOV EDX,0x2c6d0c0                   ; 004869ee | SFreaky_ARRAY_02c6d0c0
    ADD EAX,0x8                         ; 004869f3
    MOV dword ptr [ESP + 0x54],EDX      ; 004869f6 | SFreaky_ARRAY_02c6d0c0
    MOV dword ptr [ESP + 0x5c],EAX      ; 004869fa
    LEA EAX,[EDX + 0x1f8]               ; 004869fe | g_DashAnimationAccumulator
    MOV dword ptr [ESP + 0x50],EAX      ; 00486a04 | g_DashAnimationAccumulator
    MOV EAX,dword ptr [ESP + 0x54]      ; 00486a08 | SFreaky_ARRAY_02c6d0c0[1].sfx_handle
        ;   Label: LAB_00486a08
    MOV ECX,dword ptr [EBP + 0x14]      ; 00486a0c
    MOV dword ptr [ESP + 0x68],EAX      ; 00486a0f | SFreaky_ARRAY_02c6d0c0 | SFreaky_ARRAY_02c6d0c0[1].sfx_handle
    CMP ECX,dword ptr [EAX + 0x50]      ; 00486a13 | SFreaky_ARRAY_02c6d0c0[0].owner | SFreaky_ARRAY_02c6d0c0[1].owner
    JZ 0x00486a41                       ; 00486a16
        ;   XREF to: 00486a41 (CONDITIONAL_JUMP)  ; LAB_00486a41
    MOV EDX,dword ptr [ESP + 0x54]      ; 00486a18
        ;   Label: LAB_00486a18
    ADD EDX,0x54                        ; 00486a1c | SFreaky_ARRAY_02c6d0c0[1].sfx_handle
    MOV ECX,dword ptr [ESP + 0x50]      ; 00486a1f
    MOV dword ptr [ESP + 0x54],EDX      ; 00486a23 | SFreaky_ARRAY_02c6d0c0[1].sfx_handle | SFreaky_ARRAY_02c6d0c0[2].sfx_handle
    CMP EDX,ECX                         ; 00486a27
    JNZ 0x00486a08                      ; 00486a29
        ;   XREF to: 00486a08 (CONDITIONAL_JUMP)  ; LAB_00486a08
    MOV ESP,EBP                         ; 00486a2b
    POP EBP                             ; 00486a2d
    POP EDI                             ; 00486a2e
    POP ESI                             ; 00486a2f
    POP EBX                             ; 00486a30
    RET                                 ; 00486a31
    MOV EAX,dword ptr [EBP + 0x14]      ; 00486a32
        ;   Label: LAB_00486a32
    MOV dword ptr [EAX + 0xbf50],0x0    ; 00486a35
    JMP 0x004869c7                      ; 00486a3f
        ;   XREF to: 004869c7 (UNCONDITIONAL_JUMP)  ; LAB_004869c7
    MOV EAX,dword ptr [ESP + 0x54]      ; 00486a41 | SFreaky_ARRAY_02c6d0c0[1].sfx_handle
        ;   Label: LAB_00486a41
    MOV EBX,dword ptr [EAX]             ; 00486a45 | SFreaky_ARRAY_02c6d0c0[1].sfx_handle
    PUSH EBX                            ; 00486a47
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00486a48
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00486a4d
    TEST EAX,EAX                        ; 00486a50
    JZ 0x00486b9d                       ; 00486a52
        ;   XREF to: 00486b9d (CONDITIONAL_JUMP)  ; LAB_00486b9d
    MOV EAX,dword ptr [ESP + 0x54]      ; 00486a58
    LEA EDI,[EAX + 0x44]                ; 00486a5c | SFreaky_ARRAY_02c6d0c0[1].control_points[3].x
    LEA ESI,[EAX + 0x38]                ; 00486a5f | SFreaky_ARRAY_02c6d0c0[1].control_points[2].x
    FLD float ptr [EAX + 0x1c]          ; 00486a62 | SFreaky_ARRAY_02c6d0c0[1].t
    LEA EBX,[EAX + 0x2c]                ; 00486a65 | SFreaky_ARRAY_02c6d0c0[1].control_points[1].x
    FADD float ptr [EBP + 0x18]         ; 00486a68
    ADD EAX,0x20                        ; 00486a6b
    FSTP float ptr [EAX + -0x4]         ; 00486a6e | SFreaky_ARRAY_02c6d0c0[1].t
    MOV dword ptr [ESP + 0x6c],EAX      ; 00486a71 | SFreaky_ARRAY_02c6d0c0[1].control_points[0].x
    MOV EAX,dword ptr [ESP + 0x68]      ; 00486a75
        ;   Label: LAB_00486a75
    FLD float ptr [EAX + 0x1c]          ; 00486a79 | SFreaky_ARRAY_02c6d0c0[1].t
    FLD1                                ; 00486a7c
    FCOMPP                              ; 00486a7e
    FNSTSW AX                           ; 00486a80
    SAHF                                ; 00486a82
    JNC 0x00486bad                      ; 00486a83
        ;   XREF to: 00486bad (CONDITIONAL_JUMP)  ; LAB_00486bad
    MOV EAX,dword ptr [ESP + 0x68]      ; 00486a89
    FLD float ptr [EAX + 0x1c]          ; 00486a8d | SFreaky_ARRAY_02c6d0c0[1].t
    FADD float ptr [0x00621c42]         ; 00486a90 | FLOAT_00621c42
    FSTP float ptr [EAX + 0x1c]         ; 00486a96 | SFreaky_ARRAY_02c6d0c0[1].t
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00486a99
    CMP EBX,EAX                         ; 00486a9d
    JZ 0x00486ab1                       ; 00486a9f
        ;   XREF to: 00486ab1 (CONDITIONAL_JUMP)  ; LAB_00486ab1
    MOV EDX,dword ptr [EBX]             ; 00486aa1 | SFreaky_ARRAY_02c6d0c0[1].control_points[1].x
    MOV dword ptr [EAX],EDX             ; 00486aa3 | SFreaky_ARRAY_02c6d0c0[1].control_points[0].x
    MOV EDX,dword ptr [EBX + 0x4]       ; 00486aa5 | SFreaky_ARRAY_02c6d0c0[1].control_points[1].y
    MOV dword ptr [EAX + 0x4],EDX       ; 00486aa8 | SFreaky_ARRAY_02c6d0c0[1].control_points[0].y
    MOV EDX,dword ptr [EBX + 0x8]       ; 00486aab | SFreaky_ARRAY_02c6d0c0[1].control_points[1].z
    MOV dword ptr [EAX + 0x8],EDX       ; 00486aae | SFreaky_ARRAY_02c6d0c0[1].control_points[0].z
    CMP EBX,ESI                         ; 00486ab1
        ;   Label: LAB_00486ab1
    JZ 0x00486ac5                       ; 00486ab3
        ;   XREF to: 00486ac5 (CONDITIONAL_JUMP)  ; LAB_00486ac5
    MOV EAX,dword ptr [ESI]             ; 00486ab5 | SFreaky_ARRAY_02c6d0c0[1].control_points[2].x
    MOV dword ptr [EBX],EAX             ; 00486ab7 | SFreaky_ARRAY_02c6d0c0[1].control_points[1].x
    MOV EAX,dword ptr [ESI + 0x4]       ; 00486ab9 | SFreaky_ARRAY_02c6d0c0[1].control_points[2].y
    MOV dword ptr [EBX + 0x4],EAX       ; 00486abc | SFreaky_ARRAY_02c6d0c0[1].control_points[1].y
    MOV EAX,dword ptr [ESI + 0x8]       ; 00486abf | SFreaky_ARRAY_02c6d0c0[1].control_points[2].z
    MOV dword ptr [EBX + 0x8],EAX       ; 00486ac2 | SFreaky_ARRAY_02c6d0c0[1].control_points[1].z
    CMP ESI,EDI                         ; 00486ac5
        ;   Label: LAB_00486ac5
    JZ 0x00486ad9                       ; 00486ac7
        ;   XREF to: 00486ad9 (CONDITIONAL_JUMP)  ; LAB_00486ad9
    MOV EAX,dword ptr [EDI]             ; 00486ac9 | SFreaky_ARRAY_02c6d0c0[1].control_points[3].x
    MOV dword ptr [ESI],EAX             ; 00486acb | SFreaky_ARRAY_02c6d0c0[1].control_points[2].x
    MOV EAX,dword ptr [EDI + 0x4]       ; 00486acd | SFreaky_ARRAY_02c6d0c0[1].control_points[3].y
    MOV dword ptr [ESI + 0x4],EAX       ; 00486ad0 | SFreaky_ARRAY_02c6d0c0[1].control_points[2].y
    MOV EAX,dword ptr [EDI + 0x8]       ; 00486ad3 | SFreaky_ARRAY_02c6d0c0[1].control_points[3].z
    MOV dword ptr [ESI + 0x8],EAX       ; 00486ad6 | SFreaky_ARRAY_02c6d0c0[1].control_points[2].z
    MOV EAX,[0x032758e8]                ; 00486ad9 | g_CDemonCameraInstance.base.position
        ;   Label: LAB_00486ad9
    MOV dword ptr [ESP + 0x20],EAX      ; 00486ade
    MOV EAX,dword ptr [ESP + 0x64]      ; 00486ae2
    MOV EAX,dword ptr [EAX]             ; 00486ae6 | g_CDemonCameraInstance.base.position+4
    MOV dword ptr [ESP + 0x24],EAX      ; 00486ae8
    MOV EAX,dword ptr [ESP + 0x60]      ; 00486aec
    PUSH 0x40a00000                     ; 00486af0
    MOV EAX,dword ptr [EAX]             ; 00486af5 | g_CDemonCameraInstance.base.position+8
    PUSH 0xc0a00000                     ; 00486af7
    MOV dword ptr [ESP + 0x30],EAX      ; 00486afc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00486b00
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,dword ptr [ESP + 0x54]      ; 00486b9d
        ;   Label: LAB_00486b9d
    MOV dword ptr [EAX + 0x50],0x0      ; 00486ba1 | SFreaky_ARRAY_02c6d0c0[1].owner
    JMP 0x00486a18                      ; 00486ba8
        ;   XREF to: 00486a18 (UNCONDITIONAL_JUMP)  ; LAB_00486a18
    MOV EAX,dword ptr [ESP + 0x68]      ; 00486bad
        ;   Label: LAB_00486bad
    PUSH 0x0                            ; 00486bb1
    PUSH dword ptr [EAX + 0x1c]         ; 00486bb3 | SFreaky_ARRAY_02c6d0c0[1].t
    LEA EAX,[ESP + 0x8]                 ; 00486bb6
    PUSH EAX                            ; 00486bba
    CALL core_spline.cpp_computeSplineBasis_FUN_005b90a0 ; 00486bbb
        ;   XREF to: 005b90a0 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_computeSplineBasis_FUN_005b90a0(float * out_basis, float t, float tension)
    ADD ESP,0xc                         ; 00486bc0
    MOV EAX,dword ptr [ESP + 0x68]      ; 00486bc3
    ADD EAX,0x44                        ; 00486bc7
    PUSH EAX                            ; 00486bca | SFreaky_ARRAY_02c6d0c0[1].control_points[3].x
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00486bcb
    ADD EAX,0x38                        ; 00486bcf
    PUSH EAX                            ; 00486bd2 | SFreaky_ARRAY_02c6d0c0[1].control_points[2].x
    PUSH EBX                            ; 00486bd3 | SFreaky_ARRAY_02c6d0c0[1].control_points[1].x
    MOV ESI,dword ptr [ESP + 0x78]      ; 00486bd4
    PUSH ESI                            ; 00486bd8 | SFreaky_ARRAY_02c6d0c0[1].control_points[0].x
    LEA EAX,[ESP + 0x48]                ; 00486bd9
    PUSH EAX                            ; 00486bdd
    LEA EAX,[ESP + 0x14]                ; 00486bde
    PUSH EAX                            ; 00486be2
    CALL core_spline.cpp_evaluateSplinePoint3D_FUN_005b92d0 ; 00486be3
        ;   XREF to: 005b92d0 (UNCONDITIONAL_CALL)  ; CVector3f * core_spline.cpp_evaluateSplinePoint3D_FUN_005b92d0(float * basis, CVector3f * out, CVector3f * p0, CVector3f * p1, ...)
    ADD ESP,0x18                        ; 00486be8
    MOV EBX,dword ptr [ESP + 0x68]      ; 00486beb
    ADD EBX,0x4                         ; 00486bef | SFreaky_ARRAY_02c6d0c0[1].position.x
    CMP EBX,EAX                         ; 00486bf2
    JZ 0x00486c06                       ; 00486bf4
        ;   XREF to: 00486c06 (CONDITIONAL_JUMP)  ; LAB_00486c06
    MOV EDX,dword ptr [EAX]             ; 00486bf6
    MOV dword ptr [EBX],EDX             ; 00486bf8 | SFreaky_ARRAY_02c6d0c0[1].position.x
    MOV EDX,dword ptr [EAX + 0x4]       ; 00486bfa
    MOV dword ptr [EBX + 0x4],EDX       ; 00486bfd | SFreaky_ARRAY_02c6d0c0[1].position.y
    MOV EDX,dword ptr [EAX + 0x8]       ; 00486c00
    MOV dword ptr [EBX + 0x8],EDX       ; 00486c03 | SFreaky_ARRAY_02c6d0c0[1].position.z
    MOV EAX,dword ptr [ESP + 0x68]      ; 00486c06
        ;   Label: LAB_00486c06
    SUB ESP,0x8                         ; 00486c0a
    FLD float ptr [EAX + 0xc]           ; 00486c0d | SFreaky_ARRAY_02c6d0c0[1].position.z
    FSTP double ptr [ESP]               ; 00486c10
    SUB ESP,0x8                         ; 00486c13
    FLD float ptr [EAX + 0x8]           ; 00486c16 | SFreaky_ARRAY_02c6d0c0[1].position.y
    FSTP double ptr [ESP]               ; 00486c19
    SUB ESP,0x8                         ; 00486c1c
    FLD float ptr [EAX + 0x4]           ; 00486c1f | SFreaky_ARRAY_02c6d0c0[1].position.x
    FSTP double ptr [ESP]               ; 00486c22
    PUSH 0x621c2e                       ; 00486c25 | = "%5.2f %5.2f %5.2f\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 00486c2a | g_CConsolePtr
    PUSH EDI                            ; 00486c30 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00486c31
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x20                        ; 00486c36
    MOV EAX,dword ptr [ESP + 0x68]      ; 00486c39
    ADD EAX,0x44                        ; 00486c3d
    PUSH EAX                            ; 00486c40 | SFreaky_ARRAY_02c6d0c0[1].control_points[3].x
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00486c41
    ADD EAX,0x38                        ; 00486c45
    PUSH EAX                            ; 00486c48 | SFreaky_ARRAY_02c6d0c0[1].control_points[2].x
    MOV EAX,dword ptr [ESP + 0x70]      ; 00486c49
    ADD EAX,0x2c                        ; 00486c4d
    PUSH EAX                            ; 00486c50 | SFreaky_ARRAY_02c6d0c0[1].control_points[1].x
    MOV EAX,dword ptr [ESP + 0x74]      ; 00486c51
    ADD EAX,0x20                        ; 00486c55
    PUSH EAX                            ; 00486c58 | SFreaky_ARRAY_02c6d0c0[1].control_points[0].x
    LEA EAX,[ESP + 0x3c]                ; 00486c59
    PUSH EAX                            ; 00486c5d
    LEA EAX,[ESP + 0x14]                ; 00486c5e
    PUSH EAX                            ; 00486c62
    CALL core_spline.cpp_evaluateSplineTangent3D_FUN_005b9490 ; 00486c63
        ;   XREF to: 005b9490 (UNCONDITIONAL_CALL)  ; CVector3f * core_spline.cpp_evaluateSplineTangent3D_FUN_005b9490(float * basis, CVector3f * out, CVector3f * p0, CVector3f * p1, ...)
    ADD ESP,0x18                        ; 00486c68
    MOV EBX,dword ptr [ESP + 0x68]      ; 00486c6b
    ADD EBX,0x10                        ; 00486c6f
    CMP EBX,EAX                         ; 00486c72
    JZ 0x00486a18                       ; 00486c74
        ;   XREF to: 00486a18 (CONDITIONAL_JUMP)  ; LAB_00486a18
    MOV EDX,dword ptr [EAX]             ; 00486c7a
    MOV dword ptr [EBX],EDX             ; 00486c7c | SFreaky_ARRAY_02c6d0c0[1].tangent.x
    MOV EDX,dword ptr [EAX + 0x4]       ; 00486c7e
    MOV dword ptr [EBX + 0x4],EDX       ; 00486c81 | SFreaky_ARRAY_02c6d0c0[1].tangent.y
    MOV EDX,dword ptr [EAX + 0x8]       ; 00486c84
    MOV dword ptr [EBX + 0x8],EDX       ; 00486c87 | SFreaky_ARRAY_02c6d0c0[1].tangent.z
    JMP 0x00486a18                      ; 00486c8a
        ;   XREF to: 00486a18 (UNCONDITIONAL_JUMP)  ; LAB_00486a18

