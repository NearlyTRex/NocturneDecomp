; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060(CDemonCamera * this_ptr, CVector3f * output_vectors, CBoundingBox3D * bounding_box)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_vectors
; CBoundingBox3D * Stack[0xc]:4   bounding_box
; Local Variables:
; undefined1       Stack[-0xec]:1  local_ec
; undefined1       Stack[-0xe0]:1  local_e0
; undefined1       Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xc0]:4  local_c0
; undefined1       Stack[-0xbc]:1  local_bc
; undefined1       Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined1       Stack[-0x98]:1  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined1       Stack[-0x8c]:1  local_8c
; undefined1       Stack[-0x80]:1  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined1       Stack[-0x74]:1  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined1       Stack[-0x50]:1  local_50
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a7c6
;
; Referenced Globals:
;   float g_WorldToFloat = 0.00390625
;   CVector3f g_ZeroVector
;   undefined4 g_ZeroVector.y
;   undefined4 g_ZeroVector.z
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
    MOV EDX,dword ptr [0x03f8755c]      ; 0045415c | g_ZeroVector.y
    MOV dword ptr [EAX + 0x4],EDX       ; 00454162
    MOV EDX,dword ptr [0x03f87560]      ; 00454165 | g_ZeroVector.z
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
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x24]                ; 0045419f
    ADD ESP,0xc                         ; 004541a3
    MOVSD ES:EDI,ESI                    ; 004541a6
    MOVSD ES:EDI,ESI                    ; 004541a7
    MOVSD ES:EDI,ESI                    ; 004541a8
    CMP dword ptr [ESP + 0x74],0x1f400  ; 004541a9
    JLE 0x00454218                      ; 004541b1
        ;   XREF to: 00454218 (CONDITIONAL_JUMP)  ; LAB_00454218
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
    MOVSD ES:EDI,ESI                    ; 00454240
    MOVSD ES:EDI,ESI                    ; 00454241
    MOVSD ES:EDI,ESI                    ; 00454242
    FILD dword ptr [EAX]                ; 00454243
    FMUL float ptr [0x0065c644]         ; 00454245 | g_WorldToFloat
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
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x3c]                ; 00454320
    ADD ESP,0xc                         ; 00454324
    MOVSD ES:EDI,ESI                    ; 00454327
    MOVSD ES:EDI,ESI                    ; 00454328
    MOVSD ES:EDI,ESI                    ; 00454329
    CMP dword ptr [ESP + 0x2c],0x1f400  ; 0045432a
    JG 0x004541c5                       ; 00454332
        ;   XREF to: 004541c5 (CONDITIONAL_JUMP)  ; LAB_004541c5
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
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0xc]                 ; 00454373
    ADD ESP,0xc                         ; 00454377
    MOVSD ES:EDI,ESI                    ; 0045437a
    MOVSD ES:EDI,ESI                    ; 0045437b
    MOVSD ES:EDI,ESI                    ; 0045437c
    CMP dword ptr [ESP + 0x44],0x1f400  ; 0045437d
    JG 0x004541d4                       ; 00454385
        ;   XREF to: 004541d4 (CONDITIONAL_JUMP)  ; LAB_004541d4
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
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x6c]                ; 004543b8
    ADD ESP,0xc                         ; 004543bc
    MOVSD ES:EDI,ESI                    ; 004543bf
    MOVSD ES:EDI,ESI                    ; 004543c0
    MOVSD ES:EDI,ESI                    ; 004543c1
    CMP dword ptr [ESP + 0x5c],0x1f400  ; 004543c2
    JG 0x004541ed                       ; 004543ca
        ;   XREF to: 004541ed (CONDITIONAL_JUMP)  ; LAB_004541ed
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
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0xb4]                ; 0045440d
    ADD ESP,0xc                         ; 00454414
    MOVSD ES:EDI,ESI                    ; 00454417
    MOVSD ES:EDI,ESI                    ; 00454418
    MOVSD ES:EDI,ESI                    ; 00454419
    CMP dword ptr [ESP + 0x80],0x1f400  ; 0045441a
    JG 0x00454206                       ; 00454425
        ;   XREF to: 00454206 (CONDITIONAL_JUMP)  ; LAB_00454206
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

