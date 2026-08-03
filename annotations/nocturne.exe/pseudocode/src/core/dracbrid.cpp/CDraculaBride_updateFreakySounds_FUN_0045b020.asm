; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_0045b020(CDraculaBride *this_ptr,float delta_time)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
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
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90 at 00458b27
;
; Referenced Globals:
;   TerminatedCString s_s_5_2f_5_2f_5_2f_0057d86e
;   float FLOAT_0057d882 = -1
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CConsole g_CConsole_0077ad0c
;   SFreaky[6] g_SFreaky_ARRAY_01b4d280
;   undefined4 g_SFreaky_ARRAY_01b4d280[0].owner
;   undefined4 g_SFreaky_ARRAY_01b4d280[1].sfx_handle
;   undefined4 g_SFreaky_ARRAY_01b4d280[1].position.x
;   undefined4 g_SFreaky_ARRAY_01b4d280[1].position.y
;   undefined4 g_SFreaky_ARRAY_01b4d280[1].position.z
;   undefined4 g_SFreaky_ARRAY_01b4d280[1].tangent.x
;   undefined4 g_SFreaky_ARRAY_01b4d280[1].tangent.y
;   undefined4 g_SFreaky_ARRAY_01b4d280[1].tangent.z
;   undefined4 g_SFreaky_ARRAY_01b4d280[1].t
;   undefined4 g_SFreaky_ARRAY_01b4d280[1].control_points[0].x
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_spline.cpp_computeSplineBasis_FUN_00533ce0
;   core_spline.cpp_evaluateSplinePoint3D_FUN_00533f10
;   core_spline.cpp_evaluateSplineTangent3D_FUN_005340d0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b020
        ;   Label: core_dracbrid.cpp_CDraculaBride_updateFreakySounds_FUN_0045b020
    PUSH ESI                            ; 0045b021
    PUSH EDI                            ; 0045b022
    PUSH EBP                            ; 0045b023
    MOV EBP,ESP                         ; 0045b024
    SUB ESP,0x74                        ; 0045b026
    AND ESP,0xfffffff8                  ; 0045b029
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b02c
    FLD float ptr [EAX + 0xbdb8]        ; 0045b02f
    FSUB float ptr [EBP + 0x18]         ; 0045b035
    FST float ptr [EAX + 0xbdb8]        ; 0045b038
    FLDZ                                ; 0045b03e
    FCOMPP                              ; 0045b040
    FNSTSW AX                           ; 0045b042
    SAHF                                ; 0045b044
    JA 0x0045b0b2                       ; 0045b045
        ;   XREF to: 0045b0b2 (CONDITIONAL_JUMP)  ; LAB_0045b0b2
    MOV EAX,0x1fb860c                   ; 0045b047
        ;   Label: LAB_0045b047
    ADD EAX,0x4                         ; 0045b04c
    MOV dword ptr [ESP + 0x64],EAX      ; 0045b04f | g_CDemonCamera_01fb8508.position.y
    MOV EAX,0x1fb860c                   ; 0045b053
    ADD EAX,0x8                         ; 0045b058
    MOV dword ptr [ESP + 0x60],EAX      ; 0045b05b | g_CDemonCamera_01fb8508.position.z
    LEA EAX,[ESP + 0x20]                ; 0045b05f
    ADD EAX,0x4                         ; 0045b063
    MOV dword ptr [ESP + 0x58],EAX      ; 0045b066
    LEA EAX,[ESP + 0x20]                ; 0045b06a
    MOV EDX,0x1b4d280                   ; 0045b06e
    ADD EAX,0x8                         ; 0045b073
    MOV dword ptr [ESP + 0x54],EDX      ; 0045b076 | g_SFreaky_ARRAY_01b4d280
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045b07a
    LEA EAX,[EDX + 0x1f8]               ; 0045b07e
    MOV dword ptr [ESP + 0x50],EAX      ; 0045b084
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045b088 | g_SFreaky_ARRAY_01b4d280[1].sfx_handle
        ;   Label: LAB_0045b088
    MOV ECX,dword ptr [EBP + 0x14]      ; 0045b08c
    MOV dword ptr [ESP + 0x68],EAX      ; 0045b08f | g_SFreaky_ARRAY_01b4d280 | g_SFreaky_ARRAY_01b4d280[1].sfx_handle
    CMP ECX,dword ptr [EAX + 0x50]      ; 0045b093 | g_SFreaky_ARRAY_01b4d280[0].owner | g_SFreaky_ARRAY_01b4d280[1].owner
    JZ 0x0045b0c1                       ; 0045b096
        ;   XREF to: 0045b0c1 (CONDITIONAL_JUMP)  ; LAB_0045b0c1
    MOV EDX,dword ptr [ESP + 0x54]      ; 0045b098
        ;   Label: LAB_0045b098
    ADD EDX,0x54                        ; 0045b09c
    MOV ECX,dword ptr [ESP + 0x50]      ; 0045b09f
    MOV dword ptr [ESP + 0x54],EDX      ; 0045b0a3 | g_SFreaky_ARRAY_01b4d280[1].sfx_handle
    CMP EDX,ECX                         ; 0045b0a7
    JNZ 0x0045b088                      ; 0045b0a9
        ;   XREF to: 0045b088 (CONDITIONAL_JUMP)  ; LAB_0045b088
    MOV ESP,EBP                         ; 0045b0ab
    POP EBP                             ; 0045b0ad
    POP EDI                             ; 0045b0ae
    POP ESI                             ; 0045b0af
    POP EBX                             ; 0045b0b0
    RET                                 ; 0045b0b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b0b2
        ;   Label: LAB_0045b0b2
    MOV dword ptr [EAX + 0xbdb8],0x0    ; 0045b0b5
    JMP 0x0045b047                      ; 0045b0bf
        ;   XREF to: 0045b047 (UNCONDITIONAL_JUMP)  ; LAB_0045b047
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045b0c1
        ;   Label: LAB_0045b0c1
    MOV EBX,dword ptr [EAX]             ; 0045b0c5 | g_SFreaky_ARRAY_01b4d280[1].sfx_handle
    PUSH EBX                            ; 0045b0c7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0045b0c8
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0045b0cd
    TEST EAX,EAX                        ; 0045b0d0
    JZ 0x0045b21d                       ; 0045b0d2
        ;   XREF to: 0045b21d (CONDITIONAL_JUMP)  ; LAB_0045b21d
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045b0d8
    LEA EDI,[EAX + 0x44]                ; 0045b0dc
    LEA ESI,[EAX + 0x38]                ; 0045b0df
    FLD float ptr [EAX + 0x1c]          ; 0045b0e2 | g_SFreaky_ARRAY_01b4d280[1].t
    LEA EBX,[EAX + 0x2c]                ; 0045b0e5
    FADD float ptr [EBP + 0x18]         ; 0045b0e8
    ADD EAX,0x20                        ; 0045b0eb
    FSTP float ptr [EAX + -0x4]         ; 0045b0ee | g_SFreaky_ARRAY_01b4d280[1].t
    MOV dword ptr [ESP + 0x6c],EAX      ; 0045b0f1
    MOV EAX,dword ptr [ESP + 0x68]      ; 0045b0f5
        ;   Label: LAB_0045b0f5
    FLD float ptr [EAX + 0x1c]          ; 0045b0f9 | g_SFreaky_ARRAY_01b4d280[1].t
    FLD1                                ; 0045b0fc
    FCOMPP                              ; 0045b0fe
    FNSTSW AX                           ; 0045b100
    SAHF                                ; 0045b102
    JNC 0x0045b22d                      ; 0045b103
        ;   XREF to: 0045b22d (CONDITIONAL_JUMP)  ; LAB_0045b22d
    MOV EAX,dword ptr [ESP + 0x68]      ; 0045b109
    FLD float ptr [EAX + 0x1c]          ; 0045b10d | g_SFreaky_ARRAY_01b4d280[1].t
    FADD float ptr [0x0057d882]         ; 0045b110 | FLOAT_0057d882
    FSTP float ptr [EAX + 0x1c]         ; 0045b116 | g_SFreaky_ARRAY_01b4d280[1].t
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0045b119
    CMP EBX,EAX                         ; 0045b11d
    JZ 0x0045b131                       ; 0045b11f
        ;   XREF to: 0045b131 (CONDITIONAL_JUMP)  ; LAB_0045b131
    MOV EDX,dword ptr [EBX]             ; 0045b121 | g_SFreaky_ARRAY_01b4d280[1].control_points[1].x
    MOV dword ptr [EAX],EDX             ; 0045b123 | g_SFreaky_ARRAY_01b4d280[1].control_points[0].x
    MOV EDX,dword ptr [EBX + 0x4]       ; 0045b125 | g_SFreaky_ARRAY_01b4d280[1].control_points[1].y
    MOV dword ptr [EAX + 0x4],EDX       ; 0045b128 | g_SFreaky_ARRAY_01b4d280[1].control_points[0].y
    MOV EDX,dword ptr [EBX + 0x8]       ; 0045b12b | g_SFreaky_ARRAY_01b4d280[1].control_points[1].z
    MOV dword ptr [EAX + 0x8],EDX       ; 0045b12e | g_SFreaky_ARRAY_01b4d280[1].control_points[0].z
    CMP EBX,ESI                         ; 0045b131
        ;   Label: LAB_0045b131
    JZ 0x0045b145                       ; 0045b133
        ;   XREF to: 0045b145 (CONDITIONAL_JUMP)  ; LAB_0045b145
    MOV EAX,dword ptr [ESI]             ; 0045b135 | g_SFreaky_ARRAY_01b4d280[1].control_points[2].x
    MOV dword ptr [EBX],EAX             ; 0045b137 | g_SFreaky_ARRAY_01b4d280[1].control_points[1].x
    MOV EAX,dword ptr [ESI + 0x4]       ; 0045b139 | g_SFreaky_ARRAY_01b4d280[1].control_points[2].y
    MOV dword ptr [EBX + 0x4],EAX       ; 0045b13c | g_SFreaky_ARRAY_01b4d280[1].control_points[1].y
    MOV EAX,dword ptr [ESI + 0x8]       ; 0045b13f | g_SFreaky_ARRAY_01b4d280[1].control_points[2].z
    MOV dword ptr [EBX + 0x8],EAX       ; 0045b142 | g_SFreaky_ARRAY_01b4d280[1].control_points[1].z
    CMP ESI,EDI                         ; 0045b145
        ;   Label: LAB_0045b145
    JZ 0x0045b159                       ; 0045b147
        ;   XREF to: 0045b159 (CONDITIONAL_JUMP)  ; LAB_0045b159
    MOV EAX,dword ptr [EDI]             ; 0045b149 | g_SFreaky_ARRAY_01b4d280[1].control_points[3].x
    MOV dword ptr [ESI],EAX             ; 0045b14b | g_SFreaky_ARRAY_01b4d280[1].control_points[2].x
    MOV EAX,dword ptr [EDI + 0x4]       ; 0045b14d | g_SFreaky_ARRAY_01b4d280[1].control_points[3].y
    MOV dword ptr [ESI + 0x4],EAX       ; 0045b150 | g_SFreaky_ARRAY_01b4d280[1].control_points[2].y
    MOV EAX,dword ptr [EDI + 0x8]       ; 0045b153 | g_SFreaky_ARRAY_01b4d280[1].control_points[3].z
    MOV dword ptr [ESI + 0x8],EAX       ; 0045b156 | g_SFreaky_ARRAY_01b4d280[1].control_points[2].z
    MOV EAX,[0x01fb860c]                ; 0045b159 | g_CDemonCamera_01fb8508.position.x
        ;   Label: LAB_0045b159
    MOV dword ptr [ESP + 0x20],EAX      ; 0045b15e
    MOV EAX,dword ptr [ESP + 0x64]      ; 0045b162
    MOV EAX,dword ptr [EAX]             ; 0045b166 | g_CDemonCamera_01fb8508.position.y
    MOV dword ptr [ESP + 0x24],EAX      ; 0045b168
    MOV EAX,dword ptr [ESP + 0x60]      ; 0045b16c
    PUSH 0x40a00000                     ; 0045b170
    MOV EAX,dword ptr [EAX]             ; 0045b175 | g_CDemonCamera_01fb8508.position.z
    PUSH 0xc0a00000                     ; 0045b177
    MOV dword ptr [ESP + 0x30],EAX      ; 0045b17c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045b180
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 0045b185
    FLD float ptr [ESP + 0x78]          ; 0045b189
    ADD ESP,0x8                         ; 0045b18d
    PUSH 0x40000000                     ; 0045b190
    FADD float ptr [ESP + 0x24]         ; 0045b195
    PUSH 0xc0000000                     ; 0045b199
    FSTP float ptr [ESP + 0x28]         ; 0045b19e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045b1a2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 0045b1a7
    FLD float ptr [ESP + 0x78]          ; 0045b1ab
    ADD ESP,0x8                         ; 0045b1af
    PUSH 0x40a00000                     ; 0045b1b2
    FADD float ptr [ESP + 0x28]         ; 0045b1b7
    PUSH 0xc0a00000                     ; 0045b1bb
    FSTP float ptr [ESP + 0x2c]         ; 0045b1c0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045b1c4
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x78],EAX      ; 0045b1c9
    FLD float ptr [ESP + 0x78]          ; 0045b1cd
    ADD ESP,0x8                         ; 0045b1d1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0045b1d4
    FADD float ptr [ESP + 0x28]         ; 0045b1d8
    MOV dword ptr [ESP + 0x44],EAX      ; 0045b1dc
    MOV EAX,dword ptr [ESP + 0x58]      ; 0045b1e0
    FSTP float ptr [ESP + 0x28]         ; 0045b1e4
    MOV EAX,dword ptr [EAX]             ; 0045b1e8
    MOV dword ptr [ESP + 0x48],EAX      ; 0045b1ea
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0045b1ee
    MOV EAX,dword ptr [EAX]             ; 0045b1f2
    MOV dword ptr [ESP + 0x4c],EAX      ; 0045b1f4
    LEA EAX,[ESP + 0x44]                ; 0045b1f8
    CMP EDI,EAX                         ; 0045b1fc
    JZ 0x0045b0f5                       ; 0045b1fe
        ;   XREF to: 0045b0f5 (CONDITIONAL_JUMP)  ; LAB_0045b0f5
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045b204
    MOV dword ptr [EDI],EAX             ; 0045b208 | g_SFreaky_ARRAY_01b4d280[1].control_points[3].x
    MOV EAX,dword ptr [ESP + 0x48]      ; 0045b20a
    MOV dword ptr [EDI + 0x4],EAX       ; 0045b20e | g_SFreaky_ARRAY_01b4d280[1].control_points[3].y
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0045b211
    MOV dword ptr [EDI + 0x8],EAX       ; 0045b215 | g_SFreaky_ARRAY_01b4d280[1].control_points[3].z
    JMP 0x0045b0f5                      ; 0045b218
        ;   XREF to: 0045b0f5 (UNCONDITIONAL_JUMP)  ; LAB_0045b0f5
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045b21d
        ;   Label: LAB_0045b21d
    MOV dword ptr [EAX + 0x50],0x0      ; 0045b221 | g_SFreaky_ARRAY_01b4d280[1].owner
    JMP 0x0045b098                      ; 0045b228
        ;   XREF to: 0045b098 (UNCONDITIONAL_JUMP)  ; LAB_0045b098
    MOV EAX,dword ptr [ESP + 0x68]      ; 0045b22d
        ;   Label: LAB_0045b22d
    PUSH 0x0                            ; 0045b231
    PUSH dword ptr [EAX + 0x1c]         ; 0045b233 | g_SFreaky_ARRAY_01b4d280[1].t
    LEA EAX,[ESP + 0x8]                 ; 0045b236
    PUSH EAX                            ; 0045b23a
    CALL core_spline.cpp_computeSplineBasis_FUN_00533ce0 ; 0045b23b
        ;   XREF to: 00533ce0 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_computeSplineBasis_FUN_00533ce0(float * out_basis, float t, float tension)
    ADD ESP,0xc                         ; 0045b240
    MOV EAX,dword ptr [ESP + 0x68]      ; 0045b243
    ADD EAX,0x44                        ; 0045b247
    PUSH EAX                            ; 0045b24a | g_SFreaky_ARRAY_01b4d280[1].control_points[3].x
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0045b24b
    ADD EAX,0x38                        ; 0045b24f
    PUSH EAX                            ; 0045b252 | g_SFreaky_ARRAY_01b4d280[1].control_points[2].x
    PUSH EBX                            ; 0045b253 | g_SFreaky_ARRAY_01b4d280[1].control_points[1].x
    MOV ESI,dword ptr [ESP + 0x78]      ; 0045b254
    PUSH ESI                            ; 0045b258 | g_SFreaky_ARRAY_01b4d280[1].control_points[0].x
    LEA EAX,[ESP + 0x48]                ; 0045b259
    PUSH EAX                            ; 0045b25d
    LEA EAX,[ESP + 0x14]                ; 0045b25e
    PUSH EAX                            ; 0045b262
    CALL core_spline.cpp_evaluateSplinePoint3D_FUN_00533f10 ; 0045b263
        ;   XREF to: 00533f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_spline.cpp_evaluateSplinePoint3D_FUN_00533f10(float * basis, CVector3f * out, CVector3f * p0, CVector3f * p1, ...)
    ADD ESP,0x18                        ; 0045b268
    MOV EBX,dword ptr [ESP + 0x68]      ; 0045b26b
    ADD EBX,0x4                         ; 0045b26f
    CMP EBX,EAX                         ; 0045b272
    JZ 0x0045b286                       ; 0045b274
        ;   XREF to: 0045b286 (CONDITIONAL_JUMP)  ; LAB_0045b286
    MOV EDX,dword ptr [EAX]             ; 0045b276
    MOV dword ptr [EBX],EDX             ; 0045b278 | g_SFreaky_ARRAY_01b4d280[1].position.x
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045b27a
    MOV dword ptr [EBX + 0x4],EDX       ; 0045b27d | g_SFreaky_ARRAY_01b4d280[1].position.y
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045b280
    MOV dword ptr [EBX + 0x8],EDX       ; 0045b283 | g_SFreaky_ARRAY_01b4d280[1].position.z
    MOV EAX,dword ptr [ESP + 0x68]      ; 0045b286
        ;   Label: LAB_0045b286
    SUB ESP,0x8                         ; 0045b28a
    FLD float ptr [EAX + 0xc]           ; 0045b28d | g_SFreaky_ARRAY_01b4d280[1].position.z
    FSTP double ptr [ESP]               ; 0045b290
    SUB ESP,0x8                         ; 0045b293
    FLD float ptr [EAX + 0x8]           ; 0045b296 | g_SFreaky_ARRAY_01b4d280[1].position.y
    FSTP double ptr [ESP]               ; 0045b299
    SUB ESP,0x8                         ; 0045b29c
    FLD float ptr [EAX + 0x4]           ; 0045b29f | g_SFreaky_ARRAY_01b4d280[1].position.x
    FSTP double ptr [ESP]               ; 0045b2a2
    PUSH 0x57d86e                       ; 0045b2a5 | = "%5.2f %5.2f %5.2f\n"
    MOV EDI,dword ptr [0x005ad350]      ; 0045b2aa | g_CConsole_PTR_005ad350
    PUSH EDI                            ; 0045b2b0 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0045b2b1
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x20                        ; 0045b2b6
    MOV EAX,dword ptr [ESP + 0x68]      ; 0045b2b9
    ADD EAX,0x44                        ; 0045b2bd
    PUSH EAX                            ; 0045b2c0 | g_SFreaky_ARRAY_01b4d280[1].control_points[3].x
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0045b2c1
    ADD EAX,0x38                        ; 0045b2c5
    PUSH EAX                            ; 0045b2c8 | g_SFreaky_ARRAY_01b4d280[1].control_points[2].x
    MOV EAX,dword ptr [ESP + 0x70]      ; 0045b2c9
    ADD EAX,0x2c                        ; 0045b2cd
    PUSH EAX                            ; 0045b2d0 | g_SFreaky_ARRAY_01b4d280[1].control_points[1].x
    MOV EAX,dword ptr [ESP + 0x74]      ; 0045b2d1
    ADD EAX,0x20                        ; 0045b2d5
    PUSH EAX                            ; 0045b2d8 | g_SFreaky_ARRAY_01b4d280[1].control_points[0].x
    LEA EAX,[ESP + 0x3c]                ; 0045b2d9
    PUSH EAX                            ; 0045b2dd
    LEA EAX,[ESP + 0x14]                ; 0045b2de
    PUSH EAX                            ; 0045b2e2
    CALL core_spline.cpp_evaluateSplineTangent3D_FUN_005340d0 ; 0045b2e3
        ;   XREF to: 005340d0 (UNCONDITIONAL_CALL)  ; CVector3f * core_spline.cpp_evaluateSplineTangent3D_FUN_005340d0(float * basis, CVector3f * out, CVector3f * p0, CVector3f * p1, ...)
    ADD ESP,0x18                        ; 0045b2e8
    MOV EBX,dword ptr [ESP + 0x68]      ; 0045b2eb
    ADD EBX,0x10                        ; 0045b2ef
    CMP EBX,EAX                         ; 0045b2f2
    JZ 0x0045b098                       ; 0045b2f4
        ;   XREF to: 0045b098 (CONDITIONAL_JUMP)  ; LAB_0045b098
    MOV EDX,dword ptr [EAX]             ; 0045b2fa
    MOV dword ptr [EBX],EDX             ; 0045b2fc | g_SFreaky_ARRAY_01b4d280[1].tangent.x
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045b2fe
    MOV dword ptr [EBX + 0x4],EDX       ; 0045b301 | g_SFreaky_ARRAY_01b4d280[1].tangent.y
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045b304
    MOV dword ptr [EBX + 0x8],EDX       ; 0045b307 | g_SFreaky_ARRAY_01b4d280[1].tangent.z
    JMP 0x0045b098                      ; 0045b30a
        ;   XREF to: 0045b098 (UNCONDITIONAL_JUMP)  ; LAB_0045b098

