; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060(CDemonCamera *this_ptr,CVector3f *output_bounds)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_bounds
; Local Variables:
; int[1015]        Stack[-0x10d4]:4060  aiStackY_10d4
; CVector3i        Stack[-0xec]:12  local_ec
; CVector3i        Stack[-0xe0]:12  local_e0
; CVector3i        Stack[-0xd4]:12  local_d4
; int              Stack[-0xc8]:4  local_c8
; int[2]           Stack[-0xc4]:8  aiStack_c4
; CVector3i        Stack[-0xbc]:12  local_bc
; int              Stack[-0xb0]:4  local_b0
; int[2]           Stack[-0xac]:8  aiStack_ac
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; int              Stack[-0x98]:4  local_98
; int[2]           Stack[-0x94]:8  aiStack_94
; CVector3i        Stack[-0x8c]:12  local_8c
; CVector3i        Stack[-0x80]:12  local_80
; int              Stack[-0x74]:4  local_74
; int[4]           Stack[-0x70]:16  aiStack_70
; int              Stack[-0x60]:4  local_60
; CVector3f        Stack[-0x5c]:12  local_5c
; CVector3f        Stack[-0x50]:12  local_50
; CVector3i        Stack[-0x44]:12  local_44
; int              Stack[-0x38]:4  local_38
; CMatrix3x3f *    Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; UVector3 *       Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a7c6
;
; Referenced Globals:
;   float g_WorldToFloat = 0.00390625
;   UVector3 g_ZeroVector
;   undefined4 g_ZeroVector+4
;   undefined4 g_ZeroVector+8
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454060
        ;   Label: core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
    PUSH ESI                            ; 00454061
    PUSH EDI                            ; 00454062
    PUSH EBP                            ; 00454063
    SUB ESP,0xdc                        ; 00454064
    MOV EBP,dword ptr [ESP + 0xf0]      ; 0045406a
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00454071
    ADD EAX,0xc                         ; 00454078
    MOV EBX,EAX                         ; 0045407b
    CMP EAX,0x3f87558                   ; 0045407d | g_ZeroVector
    JNZ 0x00454154                      ; 00454082
        ;   XREF to: 00454154 (CONDITIONAL_JUMP)  ; LAB_00454154
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00454088
        ;   Label: LAB_00454088
    CMP EBX,EDX                         ; 0045408f
    JNZ 0x00454173                      ; 00454091
        ;   XREF to: 00454173 (CONDITIONAL_JUMP)  ; LAB_00454173
    MOV ECX,0x1                         ; 00454097
        ;   Label: LAB_00454097
    LEA EAX,[EBP + 0x4]                 ; 0045409c
    XOR EBX,EBX                         ; 0045409f
    MOV dword ptr [ESP + 0xcc],EAX      ; 004540a1
    MOV dword ptr [ESP + 0xb4],EBX      ; 004540a8
    LEA EAX,[EBP + 0x10]                ; 004540af
    MOV dword ptr [ESP + 0xd4],ECX      ; 004540b2
    MOV dword ptr [ESP + 0xb8],EAX      ; 004540b9
    MOV EAX,dword ptr [EBP + 0x148]     ; 004540c0
        ;   Label: LAB_004540c0
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004540c6
    DEC EAX                             ; 004540cd
    CMP EAX,ESI                         ; 004540ce
    JLE 0x00454430                      ; 004540d0
        ;   XREF to: 00454430 (CONDITIONAL_JUMP)  ; LAB_00454430
    MOV EDI,0x1                         ; 004540d6
    LEA EAX,[ESI + EDI*0x1]             ; 004540db
    MOV dword ptr [ESP + 0xc8],EAX      ; 004540de
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004540e5
    MOV dword ptr [ESP + 0xc4],EAX      ; 004540ec
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004540f3
    MOV dword ptr [ESP + 0xc0],EAX      ; 004540fa
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00454101
    MOV dword ptr [ESP + 0xbc],EAX      ; 00454108
    XOR EAX,EAX                         ; 0045410f
    MOV dword ptr [ESP + 0xd8],EDI      ; 00454111
    MOV dword ptr [ESP + 0xd0],EAX      ; 00454118
    MOV EAX,dword ptr [EBP + 0x144]     ; 0045411f
        ;   Label: LAB_0045411f
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00454125
    DEC EAX                             ; 0045412c
    CMP EAX,EDX                         ; 0045412d
    JG 0x00454188                       ; 0045412f
        ;   XREF to: 00454188 (CONDITIONAL_JUMP)  ; LAB_00454188
    MOV EBX,dword ptr [ESP + 0xd4]      ; 00454131
    MOV ECX,dword ptr [ESP + 0xb4]      ; 00454138
    INC EBX                             ; 0045413f
    INC ECX                             ; 00454140
    MOV dword ptr [ESP + 0xd4],EBX      ; 00454141
    MOV dword ptr [ESP + 0xb4],ECX      ; 00454148
    JMP 0x004540c0                      ; 0045414f
        ;   XREF to: 004540c0 (UNCONDITIONAL_JUMP)  ; LAB_004540c0
    MOV EDX,dword ptr [0x03f87558]      ; 00454154 | g_ZeroVector
        ;   Label: LAB_00454154
    MOV dword ptr [EAX],EDX             ; 0045415a
    MOV EDX,dword ptr [0x03f8755c]      ; 0045415c | g_ZeroVector+4
    MOV dword ptr [EAX + 0x4],EDX       ; 00454162
    MOV EDX,dword ptr [0x03f87560]      ; 00454165 | g_ZeroVector+8
    MOV dword ptr [EAX + 0x8],EDX       ; 0045416b
    JMP 0x00454088                      ; 0045416e
        ;   XREF to: 00454088 (UNCONDITIONAL_JUMP)  ; LAB_00454088
    MOV EAX,dword ptr [EBX]             ; 00454173
        ;   Label: LAB_00454173
    MOV dword ptr [EDX],EAX             ; 00454175
    MOV EAX,dword ptr [EBX + 0x4]       ; 00454177
    MOV dword ptr [EDX + 0x4],EAX       ; 0045417a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0045417d
    MOV dword ptr [EDX + 0x8],EAX       ; 00454180
    JMP 0x00454097                      ; 00454183
        ;   XREF to: 00454097 (UNCONDITIONAL_JUMP)  ; LAB_00454097
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00454188
        ;   Label: LAB_00454188
    PUSH ESI                            ; 0045418f
    PUSH EDX                            ; 00454190
    PUSH EBP                            ; 00454191
    LEA ESI,[ESP + 0x24]                ; 00454192
    LEA EDI,[ESP + 0x78]                ; 00454196
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 0045419a
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x24]                ; 0045419f
    ADD ESP,0xc                         ; 004541a3
    JMP 0x00609f20                      ; 004541a6
        ;   XREF to: 00609f20 (UNCONDITIONAL_JUMP)  ; CAVE_cave_00609f20
    JLE 0x00454218                      ; 004541b1
        ;   XREF to: 00454218 (CONDITIONAL_JUMP)  ; LAB_00454218
        ;   Label: LAB_004541b1
    MOV EDX,dword ptr [ESP + 0xd8]      ; 004541b3
    XOR EBX,EBX                         ; 004541ba
    CMP EDX,0x1                         ; 004541bc
    JG 0x004542f4                       ; 004541bf
        ;   XREF to: 004542f4 (CONDITIONAL_JUMP)  ; LAB_004542f4
    INC EBX                             ; 004541c5
        ;   Label: LAB_004541c5
    CMP dword ptr [ESP + 0xd8],0x1      ; 004541c6
        ;   Label: LAB_004541c6
    JG 0x0045433d                       ; 004541ce
        ;   XREF to: 0045433d (CONDITIONAL_JUMP)  ; LAB_0045433d
    INC EBX                             ; 004541d4
        ;   Label: LAB_004541d4
    MOV EAX,dword ptr [EBP + 0x144]     ; 004541d5
        ;   Label: LAB_004541d5
    MOV EDX,dword ptr [ESP + 0xd8]      ; 004541db
    SUB EAX,0x2                         ; 004541e2
    CMP EAX,EDX                         ; 004541e5
    JG 0x00454390                       ; 004541e7
        ;   XREF to: 00454390 (CONDITIONAL_JUMP)  ; LAB_00454390
    INC EBX                             ; 004541ed
        ;   Label: LAB_004541ed
    MOV EAX,dword ptr [EBP + 0x144]     ; 004541ee
        ;   Label: LAB_004541ee
    MOV EDX,dword ptr [ESP + 0xd8]      ; 004541f4
    SUB EAX,0x2                         ; 004541fb
    CMP EAX,EDX                         ; 004541fe
    JG 0x004543d5                       ; 00454200
        ;   XREF to: 004543d5 (CONDITIONAL_JUMP)  ; LAB_004543d5
    INC EBX                             ; 00454206
        ;   Label: LAB_00454206
    CMP EBX,0x4                         ; 00454207
        ;   Label: LAB_00454207
    JL 0x004542d1                       ; 0045420a
        ;   XREF to: 004542d1 (CONDITIONAL_JUMP)  ; LAB_004542d1
    MOV dword ptr [ESP + 0x74],0x1f400  ; 00454210
    LEA EAX,[ESP + 0x6c]                ; 00454218
        ;   Label: LAB_00454218
    PUSH EAX                            ; 0045421c
    LEA ESI,[ESP + 0x10]                ; 0045421d
    PUSH EBP                            ; 00454221
    LEA EDI,[ESP + 0x8c]                ; 00454222
    LEA EBX,[ESP + 0x50]                ; 00454229
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 ; 0045422d
        ;   XREF to: 0044d370 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x14]                ; 00454232
    ADD ESP,0x8                         ; 00454236
    LEA EAX,[ESP + 0x84]                ; 00454239
    JMP 0x00609f43                      ; 00454240
        ;   XREF to: 00609f43 (UNCONDITIONAL_JUMP)  ; LAB_00609f43
    FMUL float ptr [0x0065c644]         ; 00454245 | g_WorldToFloat
        ;   Label: LAB_00454245
    FSTP float ptr [EBX]                ; 0045424b
    FILD dword ptr [EAX + 0x4]          ; 0045424d
    FMUL float ptr [0x0065c644]         ; 00454250 | g_WorldToFloat
    FSTP float ptr [EBX + 0x4]          ; 00454256
    FILD dword ptr [EAX + 0x8]          ; 00454259
    FMUL float ptr [0x0065c644]         ; 0045425c | g_WorldToFloat
    FSTP float ptr [EBX + 0x8]          ; 00454262
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00454265
    FLD float ptr [ESP + 0x48]          ; 0045426c
    FSUB float ptr [EAX]                ; 00454270
    FLD float ptr [ESP + 0x4c]          ; 00454272
    FXCH                                ; 00454276
    FSTP float ptr [ESP + 0x90]         ; 00454278
    FSUB float ptr [EAX + 0x4]          ; 0045427f
    FLD float ptr [ESP + 0x50]          ; 00454282
    FXCH                                ; 00454286
    FSTP float ptr [ESP + 0x94]         ; 00454288
    FSUB float ptr [EAX + 0x8]          ; 0045428f
    LEA EAX,[ESP + 0x90]                ; 00454292
    PUSH EAX                            ; 00454299
    LEA EAX,[ESP + 0xa0]                ; 0045429a
    PUSH EAX                            ; 004542a1
    MOV EDX,dword ptr [ESP + 0xc0]      ; 004542a2
    PUSH EDX                            ; 004542a9
    FSTP float ptr [ESP + 0xa4]         ; 004542aa
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 004542b1
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004542b6
    LEA EAX,[ESP + 0x9c]                ; 004542b9
    PUSH EAX                            ; 004542c0
    MOV ECX,dword ptr [ESP + 0xf8]      ; 004542c1
    PUSH ECX                            ; 004542c8
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 004542c9
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 004542ce
    MOV ESI,dword ptr [ESP + 0xd8]      ; 004542d1
        ;   Label: LAB_004542d1
    MOV EBX,dword ptr [ESP + 0xd0]      ; 004542d8
    INC ESI                             ; 004542df
    INC EBX                             ; 004542e0
    MOV dword ptr [ESP + 0xd8],ESI      ; 004542e1
    MOV dword ptr [ESP + 0xd0],EBX      ; 004542e8
    JMP 0x0045411f                      ; 004542ef
        ;   XREF to: 0045411f (UNCONDITIONAL_JUMP)  ; LAB_0045411f
    CMP dword ptr [ESP + 0xd4],0x1      ; 004542f4
        ;   Label: LAB_004542f4
    JLE 0x004541c5                      ; 004542fc
        ;   XREF to: 004541c5 (CONDITIONAL_JUMP)  ; LAB_004541c5
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00454302
    PUSH ESI                            ; 00454309
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0045430a
    PUSH EDI                            ; 00454311
    PUSH EBP                            ; 00454312
    LEA ESI,[ESP + 0x3c]                ; 00454313
    LEA EDI,[ESP + 0x30]                ; 00454317
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 0045431b
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x3c]                ; 00454320
    ADD ESP,0xc                         ; 00454324
    JMP 0x00609f60                      ; 00454327
        ;   XREF to: 00609f60 (UNCONDITIONAL_JUMP)  ; LAB_00609f60
    JG 0x004541c5                       ; 00454332
        ;   XREF to: 004541c5 (CONDITIONAL_JUMP)  ; LAB_004541c5
        ;   Label: LAB_00454332
    JMP 0x004541c6                      ; 00454338
        ;   XREF to: 004541c6 (UNCONDITIONAL_JUMP)  ; LAB_004541c6
    MOV EAX,dword ptr [EBP + 0x148]     ; 0045433d
        ;   Label: LAB_0045433d
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00454343
    SUB EAX,0x2                         ; 0045434a
    CMP EAX,ECX                         ; 0045434d
    JLE 0x004541d4                      ; 0045434f
        ;   XREF to: 004541d4 (CONDITIONAL_JUMP)  ; LAB_004541d4
    MOV ESI,dword ptr [ESP + 0xc0]      ; 00454355
    PUSH ESI                            ; 0045435c
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0045435d
    PUSH EDI                            ; 00454364
    PUSH EBP                            ; 00454365
    LEA ESI,[ESP + 0xc]                 ; 00454366
    LEA EDI,[ESP + 0x48]                ; 0045436a
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 0045436e
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0xc]                 ; 00454373
    ADD ESP,0xc                         ; 00454377
    JMP 0x00609f83                      ; 0045437a
        ;   XREF to: 00609f83 (UNCONDITIONAL_JUMP)  ; LAB_00609f83
    JG 0x004541d4                       ; 00454385
        ;   XREF to: 004541d4 (CONDITIONAL_JUMP)  ; LAB_004541d4
        ;   Label: LAB_00454385
    JMP 0x004541d5                      ; 0045438b
        ;   XREF to: 004541d5 (UNCONDITIONAL_JUMP)  ; LAB_004541d5
    CMP dword ptr [ESP + 0xd4],0x1      ; 00454390
        ;   Label: LAB_00454390
    JLE 0x004541ed                      ; 00454398
        ;   XREF to: 004541ed (CONDITIONAL_JUMP)  ; LAB_004541ed
    MOV ESI,dword ptr [ESP + 0xc4]      ; 0045439e
    PUSH ESI                            ; 004543a5
    LEA EAX,[EDX + 0x1]                 ; 004543a6
    PUSH EAX                            ; 004543a9
    PUSH EBP                            ; 004543aa
    LEA ESI,[ESP + 0x6c]                ; 004543ab
    LEA EDI,[ESP + 0x60]                ; 004543af
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 004543b3
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x6c]                ; 004543b8
    ADD ESP,0xc                         ; 004543bc
    JMP 0x00609fa6                      ; 004543bf
        ;   XREF to: 00609fa6 (UNCONDITIONAL_JUMP)  ; LAB_00609fa6
    JG 0x004541ed                       ; 004543ca
        ;   XREF to: 004541ed (CONDITIONAL_JUMP)  ; LAB_004541ed
        ;   Label: LAB_004543ca
    JMP 0x004541ee                      ; 004543d0
        ;   XREF to: 004541ee (UNCONDITIONAL_JUMP)  ; LAB_004541ee
    MOV EAX,dword ptr [EBP + 0x148]     ; 004543d5
        ;   Label: LAB_004543d5
    MOV ECX,dword ptr [ESP + 0xd4]      ; 004543db
    SUB EAX,0x2                         ; 004543e2
    CMP EAX,ECX                         ; 004543e5
    JLE 0x00454206                      ; 004543e7
        ;   XREF to: 00454206 (CONDITIONAL_JUMP)  ; LAB_00454206
    MOV ESI,dword ptr [ESP + 0xc8]      ; 004543ed
    PUSH ESI                            ; 004543f4
    LEA EAX,[EDX + 0x1]                 ; 004543f5
    PUSH EAX                            ; 004543f8
    PUSH EBP                            ; 004543f9
    LEA ESI,[ESP + 0xb4]                ; 004543fa
    LEA EDI,[ESP + 0x84]                ; 00454401
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 00454408
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0xb4]                ; 0045440d
    ADD ESP,0xc                         ; 00454414
    JMP 0x00609fc9                      ; 00454417
        ;   XREF to: 00609fc9 (UNCONDITIONAL_JUMP)  ; LAB_00609fc9
    JG 0x00454206                       ; 00454425
        ;   XREF to: 00454206 (CONDITIONAL_JUMP)  ; LAB_00454206
        ;   Label: LAB_00454425
    JMP 0x00454207                      ; 0045442b
        ;   XREF to: 00454207 (UNCONDITIONAL_JUMP)  ; LAB_00454207
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00454430
        ;   Label: LAB_00454430
    ADD ESP,0xdc                        ; 00454437
    POP EBP                             ; 0045443d
    POP EDI                             ; 0045443e
    POP ESI                             ; 0045443f
    POP EBX                             ; 00454440
    RET                                 ; 00454441
    MOV ECX,dword ptr [ESI]             ; 00609f20
        ;   Label: CAVE_cave_00609f20
    MOV dword ptr [EDI],ECX             ; 00609f22
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609f24
    MOV dword ptr [EDI + 0x4],ECX       ; 00609f27
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609f2a
    MOV dword ptr [EDI + 0x8],ECX       ; 00609f2d
    ADD ESI,0xc                         ; 00609f30
    ADD EDI,0xc                         ; 00609f33
    CMP dword ptr [ESP + 0x74],0x1f400  ; 00609f36
    JMP 0x004541b1                      ; 00609f3e
        ;   XREF to: 004541b1 (UNCONDITIONAL_JUMP)  ; LAB_004541b1
    MOV ECX,dword ptr [ESI]             ; 00609f43
        ;   Label: LAB_00609f43
    MOV dword ptr [EDI],ECX             ; 00609f45
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609f47
    MOV dword ptr [EDI + 0x4],ECX       ; 00609f4a
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609f4d
    MOV dword ptr [EDI + 0x8],ECX       ; 00609f50
    ADD ESI,0xc                         ; 00609f53
    ADD EDI,0xc                         ; 00609f56
    FILD dword ptr [EAX]                ; 00609f59
    JMP 0x00454245                      ; 00609f5b
        ;   XREF to: 00454245 (UNCONDITIONAL_JUMP)  ; LAB_00454245
    MOV ECX,dword ptr [ESI]             ; 00609f60
        ;   Label: LAB_00609f60
    MOV dword ptr [EDI],ECX             ; 00609f62
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609f64
    MOV dword ptr [EDI + 0x4],ECX       ; 00609f67
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609f6a
    MOV dword ptr [EDI + 0x8],ECX       ; 00609f6d
    ADD ESI,0xc                         ; 00609f70
    ADD EDI,0xc                         ; 00609f73
    CMP dword ptr [ESP + 0x2c],0x1f400  ; 00609f76
    JMP 0x00454332                      ; 00609f7e
        ;   XREF to: 00454332 (UNCONDITIONAL_JUMP)  ; LAB_00454332
    MOV ECX,dword ptr [ESI]             ; 00609f83
        ;   Label: LAB_00609f83
    MOV dword ptr [EDI],ECX             ; 00609f85
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609f87
    MOV dword ptr [EDI + 0x4],ECX       ; 00609f8a
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609f8d
    MOV dword ptr [EDI + 0x8],ECX       ; 00609f90
    ADD ESI,0xc                         ; 00609f93
    ADD EDI,0xc                         ; 00609f96
    CMP dword ptr [ESP + 0x44],0x1f400  ; 00609f99
    JMP 0x00454385                      ; 00609fa1
        ;   XREF to: 00454385 (UNCONDITIONAL_JUMP)  ; LAB_00454385
    MOV ECX,dword ptr [ESI]             ; 00609fa6
        ;   Label: LAB_00609fa6
    MOV dword ptr [EDI],ECX             ; 00609fa8
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609faa
    MOV dword ptr [EDI + 0x4],ECX       ; 00609fad
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609fb0
    MOV dword ptr [EDI + 0x8],ECX       ; 00609fb3
    ADD ESI,0xc                         ; 00609fb6
    ADD EDI,0xc                         ; 00609fb9
    CMP dword ptr [ESP + 0x5c],0x1f400  ; 00609fbc
    JMP 0x004543ca                      ; 00609fc4
        ;   XREF to: 004543ca (UNCONDITIONAL_JUMP)  ; LAB_004543ca
    MOV ECX,dword ptr [ESI]             ; 00609fc9
        ;   Label: LAB_00609fc9
    MOV dword ptr [EDI],ECX             ; 00609fcb
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609fcd
    MOV dword ptr [EDI + 0x4],ECX       ; 00609fd0
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609fd3
    MOV dword ptr [EDI + 0x8],ECX       ; 00609fd6
    ADD ESI,0xc                         ; 00609fd9
    ADD EDI,0xc                         ; 00609fdc
    CMP dword ptr [ESP + 0x80],0x1f400  ; 00609fdf
    JMP 0x00454425                      ; 00609fea
        ;   XREF to: 00454425 (UNCONDITIONAL_JUMP)  ; LAB_00454425

