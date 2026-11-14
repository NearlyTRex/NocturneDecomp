; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60 at 0044df78
;
; Referenced Globals:
;   undefined4 DAT_005f17e4
;   undefined4 DAT_005f17e8
;   undefined4 DAT_005f17ec
;   undefined4 DAT_005fba20
;   undefined4 DAT_00b9e24c
;   undefined4 DAT_013405b0
;   undefined4 DAT_013405b4
;   undefined4 DAT_0135eac8
;   undefined4 DAT_0135eacc
;   undefined4 DAT_0149d6d0
;   undefined4 DAT_0149d6d4
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af80
;   ... and 2 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00450b60
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00450ac0
;   core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0
;   core_dcamera.cpp_updateFogScrollOffset_FUN_00448b60
;   core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00472173
;   core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00470a2c
;   core_dstrendr.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00472ad0
;   core_dstrendr.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00471951
;   core_dstrendr.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00473034
;   core_dstrendr.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00471e45
;   core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_004726c0
;   core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00470f0a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450020
        ;   Label: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020
    PUSH ESI                            ; 00450021
    PUSH EDI                            ; 00450022
    PUSH EBP                            ; 00450023
    SUB ESP,0x18                        ; 00450024
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00450027
    MOV EAX,[0x01c5fad0]                ; 0045002b | DAT_01c5fad0
    MOV EDX,dword ptr [0x0149d6d4]      ; 00450030 | DAT_0149d6d4
    SHL EAX,0x2                         ; 00450036
    ADD EDX,EAX                         ; 00450039
    XOR ESI,ESI                         ; 0045003b
    MOV dword ptr [0x0149d6d4],EDX      ; 0045003d | DAT_0149d6d4
    CMP EDX,0x10000                     ; 00450043
    JLE 0x0045008a                      ; 00450049
        ;   XREF to: 0045008a (CONDITIONAL_JUMP)  ; LAB_0045008a
    MOV EBP,dword ptr [0x0149d6d0]      ; 0045004b | DAT_0149d6d0
    LEA EBX,[EDX + 0xffff0000]          ; 00450051
    INC EBP                             ; 00450057
    MOV dword ptr [0x0149d6d4],EBX      ; 00450058 | DAT_0149d6d4
    MOV dword ptr [0x0149d6d0],EBP      ; 0045005e | DAT_0149d6d0
    CMP EBP,0x10                        ; 00450064
    JL 0x0045006f                       ; 00450067
        ;   XREF to: 0045006f (CONDITIONAL_JUMP)  ; LAB_0045006f
    MOV dword ptr [0x0149d6d0],ESI      ; 00450069 | DAT_0149d6d0
    MOV ECX,dword ptr [0x0149d6d4]      ; 0045006f | DAT_0149d6d4
        ;   Label: LAB_0045006f
    PUSH ECX                            ; 00450075
    MOV EBX,dword ptr [0x0149d6d0]      ; 00450076 | DAT_0149d6d0
    PUSH EBX                            ; 0045007c
    PUSH 0x149d6dc                      ; 0045007d
    CALL core_dcamera.cpp_updateFogScrollOffset_FUN_00448b60 ; 00450082
        ;   XREF to: 00448b60 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_updateFogScrollOffset_FUN_00448b60(SFogGrid * fog_ptr, int time_major, int time_minor)
    ADD ESP,0xc                         ; 00450087
    PUSH EDI                            ; 0045008a
        ;   Label: LAB_0045008a
    CALL core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0 ; 0045008b
        ;   XREF to: 0044d6f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_0044d6f0(CDemonCamera * this_ptr)
    MOV EAX,[0x005f17ec]                ; 00450090 | DAT_005f17ec
    MOV EBX,dword ptr [EAX*0x4 + 0xb9e14c] ; 00450095 | DAT_00b9e24c
    MOV EAX,[0x005f17e8]                ; 0045009c | DAT_005f17e8
    MOV EDX,dword ptr [0x005fba20]      ; 004500a1 | DAT_005fba20
    MOV EBP,dword ptr [EAX*0x4 + 0xb9e14c] ; 004500a7 | DAT_00b9e24c
    MOV EAX,[0x005f17e4]                ; 004500ae | DAT_005f17e4
    ADD ESP,0x4                         ; 004500b3
    AND EBX,0xff                        ; 004500b6
    MOV EAX,dword ptr [EAX*0x4 + 0xb9e14c] ; 004500bc | DAT_00b9e24c
    AND EBP,0xff                        ; 004500c3
    AND EAX,0xff                        ; 004500c9
    CMP EDX,0x20                        ; 004500ce
    JNZ 0x004501c2                      ; 004500d1
        ;   XREF to: 004501c2 (CONDITIONAL_JUMP)  ; LAB_004501c2
    MOV CL,byte ptr [0x01c6af74]        ; 004500d7 | DAT_01c6af74
    SHL EAX,CL                          ; 004500dd
    MOV CL,byte ptr [0x01c6af80]        ; 004500df | DAT_01c6af80
    SHL EBP,CL                          ; 004500e5
    MOV CL,byte ptr [0x01c6af8c]        ; 004500e7 | DAT_01c6af8c
    SHL EBX,CL                          ; 004500ed
    OR EAX,EBP                          ; 004500ef
    MOV ECX,EBX                         ; 004500f1
    OR ECX,EAX                          ; 004500f3
    MOV dword ptr [0x01c6e2bc],ECX      ; 004500f5 | DAT_01c6e2bc
        ;   Label: LAB_004500f5
    CMP dword ptr [0x005fba20],0x10     ; 004500fb | DAT_005fba20
    JNZ 0x0045027d                      ; 00450102
        ;   XREF to: 0045027d (CONDITIONAL_JUMP)  ; LAB_0045027d
    MOV EBP,0x1                         ; 00450108
    MOV EAX,dword ptr [EDI + 0x148]     ; 0045010d
        ;   Label: LAB_0045010d
    DEC EAX                             ; 00450113
    CMP EBP,EAX                         ; 00450114
    JGE 0x0044d4d1                      ; 00450116
        ;   XREF to: 0044d4d1 (CONDITIONAL_JUMP)  ; LAB_0044d4d1
    MOV ECX,dword ptr [0x0135eacc]      ; 0045011c | DAT_0135eacc
    MOV EBX,EBP                         ; 00450122
    MOV EAX,[0x0135eac8]                ; 00450124 | DAT_0135eac8
    SUB EBX,ECX                         ; 00450129
    ADD EAX,EAX                         ; 0045012b
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 0045012d | DAT_01c5faec
    ADD EBX,EAX                         ; 00450134
    MOV EAX,dword ptr [EDI + 0x144]     ; 00450136
    IMUL EAX,EBP                        ; 0045013c
    MOV dword ptr [ESP + 0x10],EBX      ; 0045013f
    MOV EBX,dword ptr [EDI + 0x158]     ; 00450143
    SHL EAX,0x2                         ; 00450149
    MOV CL,byte ptr [0x013405b0]        ; 0045014c | DAT_013405b0
    ADD EBX,EAX                         ; 00450152
    MOV EAX,EBP                         ; 00450154
    SAR EAX,CL                          ; 00450156
    IMUL EAX,EAX,0x140                  ; 00450158
    MOV dword ptr [ESP + 0x8],EBX       ; 0045015e
    MOV ECX,0x135ead0                   ; 00450162
    MOV EBX,0xb3fd08                    ; 00450167
    ADD ECX,EAX                         ; 0045016c
    ADD EBX,EAX                         ; 0045016e
    MOV dword ptr [ESP + 0x4],ECX       ; 00450170
    TEST EBP,0x1                        ; 00450174
    JNZ 0x004501f4                      ; 0045017a
        ;   XREF to: 004501f4 (CONDITIONAL_JUMP)  ; LAB_004501f4
    CMP dword ptr [EDI + 0x14c],0x1     ; 00450180
    JNZ 0x004501a4                      ; 00450187
        ;   XREF to: 004501a4 (CONDITIONAL_JUMP)  ; LAB_004501a4
    MOV EDX,dword ptr [EDI + 0x144]     ; 00450189
    PUSH EDX                            ; 0045018f
    PUSH ECX                            ; 00450190
    PUSH EBX                            ; 00450191
    MOV EAX,dword ptr [ESP + 0x14]      ; 00450192
    PUSH EAX                            ; 00450196
    MOV EDX,dword ptr [ESP + 0x20]      ; 00450197
    PUSH EDX                            ; 0045019b
    CALL core_dstrendr.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00472ad0 ; 0045019c
        ;   XREF to: 00472ad0 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00472ad0(uint * output_buffer, uint * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 004501a1
    CMP dword ptr [EDI + 0x14c],0x2     ; 004501a4
        ;   Label: LAB_004501a4
    JZ 0x004501d3                       ; 004501ab
        ;   XREF to: 004501d3 (CONDITIONAL_JUMP)  ; LAB_004501d3
    IMUL EBX,ESI,0xc                    ; 004501ad
        ;   Label: LAB_004501ad
    CMP ESI,dword ptr [0x013405b4]      ; 004501b0 | DAT_013405b4
    JL 0x00450245                       ; 004501b6
        ;   XREF to: 00450245 (CONDITIONAL_JUMP)  ; LAB_00450245
    INC EBP                             ; 004501bc
        ;   Label: LAB_004501bc
    JMP 0x0045010d                      ; 004501bd
        ;   XREF to: 0045010d (UNCONDITIONAL_JUMP)  ; LAB_0045010d
    MOV ECX,EAX                         ; 004501c2
        ;   Label: LAB_004501c2
    SHL EBP,0x8                         ; 004501c4
    SHL ECX,0x10                        ; 004501c7
    OR ECX,EBP                          ; 004501ca
    OR ECX,EBX                          ; 004501cc
    JMP 0x004500f5                      ; 004501ce
        ;   XREF to: 004500f5 (UNCONDITIONAL_JUMP)  ; LAB_004500f5
    MOV EAX,dword ptr [EDI + 0x144]     ; 004501d3
        ;   Label: LAB_004501d3
    PUSH EAX                            ; 004501d9
    MOV EDX,dword ptr [ESP + 0x8]       ; 004501da
    PUSH EDX                            ; 004501de
    PUSH EBX                            ; 004501df
    MOV ECX,dword ptr [ESP + 0x14]      ; 004501e0
    PUSH ECX                            ; 004501e4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004501e5
    PUSH EBX                            ; 004501e9
    CALL core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00472173 ; 004501ea
        ;   XREF to: 00472173 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00472173(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 004501ef
    JMP 0x004501ad                      ; 004501f2
        ;   XREF to: 004501ad (UNCONDITIONAL_JUMP)  ; LAB_004501ad
    CMP dword ptr [EDI + 0x14c],0x1     ; 004501f4
        ;   Label: LAB_004501f4
    JNZ 0x00450218                      ; 004501fb
        ;   XREF to: 00450218 (CONDITIONAL_JUMP)  ; LAB_00450218
    MOV EDX,dword ptr [EDI + 0x144]     ; 004501fd
    PUSH EDX                            ; 00450203
    PUSH ECX                            ; 00450204
    PUSH EBX                            ; 00450205
    MOV EAX,dword ptr [ESP + 0x14]      ; 00450206
    PUSH EAX                            ; 0045020a
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045020b
    PUSH EDX                            ; 0045020f
    CALL core_dstrendr.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00473034 ; 00450210
        ;   XREF to: 00473034 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00473034(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 00450215
    CMP dword ptr [EDI + 0x14c],0x2     ; 00450218
        ;   Label: LAB_00450218
    JNZ 0x004501ad                      ; 0045021f
        ;   XREF to: 004501ad (CONDITIONAL_JUMP)  ; LAB_004501ad
    MOV EAX,dword ptr [EDI + 0x144]     ; 00450221
    PUSH EAX                            ; 00450227
    MOV EDX,dword ptr [ESP + 0x8]       ; 00450228
    PUSH EDX                            ; 0045022c
    PUSH EBX                            ; 0045022d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045022e
    PUSH ECX                            ; 00450232
    MOV EBX,dword ptr [ESP + 0x20]      ; 00450233
    PUSH EBX                            ; 00450237
    CALL core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_004726c0 ; 00450238
        ;   XREF to: 004726c0 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_004726c0(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 0045023d
    JMP 0x004501ad                      ; 00450240
        ;   XREF to: 004501ad (UNCONDITIONAL_JUMP)  ; LAB_004501ad
    MOV EDX,dword ptr [EBX + 0x13405c0] ; 00450245
        ;   Label: LAB_00450245
    CMP EBP,EDX                         ; 0045024b
    JNZ 0x004501bc                      ; 0045024d
        ;   XREF to: 004501bc (CONDITIONAL_JUMP)  ; LAB_004501bc
    MOV ECX,dword ptr [EBX + 0x13405b8] ; 00450253
    PUSH ECX                            ; 00450259
    PUSH EDX                            ; 0045025a
    MOV EDX,dword ptr [EBX + 0x13405bc] ; 0045025b
    PUSH EDX                            ; 00450261
    PUSH EDI                            ; 00450262
    ADD EBX,0xc                         ; 00450263
    INC ESI                             ; 00450266
    CALL core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00450b60 ; 00450267
        ;   XREF to: 00450b60 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00450b60(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset)
    ADD ESP,0x10                        ; 0045026c
    CMP ESI,dword ptr [0x013405b4]      ; 0045026f | DAT_013405b4
    JL 0x00450245                       ; 00450275
        ;   XREF to: 00450245 (CONDITIONAL_JUMP)  ; LAB_00450245
    INC EBP                             ; 00450277
    JMP 0x0045010d                      ; 00450278
        ;   XREF to: 0045010d (UNCONDITIONAL_JUMP)  ; LAB_0045010d
    MOV EBP,0x1                         ; 0045027d
        ;   Label: LAB_0045027d
    MOV EAX,dword ptr [EDI + 0x148]     ; 00450282
        ;   Label: LAB_00450282
    DEC EAX                             ; 00450288
    CMP EBP,EAX                         ; 00450289
    JGE 0x0044d4d1                      ; 0045028b
        ;   XREF to: 0044d4d1 (CONDITIONAL_JUMP)  ; LAB_0044d4d1
    MOV EBX,dword ptr [0x0135eacc]      ; 00450291 | DAT_0135eacc
    MOV EAX,EBP                         ; 00450297
    SUB EAX,EBX                         ; 00450299
    LEA EBX,[EAX*0x4 + 0x0]             ; 0045029b
    MOV EAX,[0x0135eac8]                ; 004502a2 | DAT_0135eac8
    MOV EBX,dword ptr [EBX + 0x1c5faec] ; 004502a7 | DAT_01c5faec
    SHL EAX,0x2                         ; 004502ad
    ADD EBX,EAX                         ; 004502b0
    MOV EAX,dword ptr [EDI + 0x144]     ; 004502b2
    IMUL EAX,EBP                        ; 004502b8
    MOV dword ptr [ESP + 0xc],EBX       ; 004502bb
    MOV EBX,dword ptr [EDI + 0x158]     ; 004502bf
    SHL EAX,0x2                         ; 004502c5
    MOV CL,byte ptr [0x013405b0]        ; 004502c8 | DAT_013405b0
    ADD EBX,EAX                         ; 004502ce
    MOV EAX,EBP                         ; 004502d0
    SAR EAX,CL                          ; 004502d2
    IMUL EAX,EAX,0x140                  ; 004502d4
    MOV dword ptr [ESP],EBX             ; 004502da
    MOV ECX,0x135ead0                   ; 004502dd
    MOV EBX,0xb3fd08                    ; 004502e2
    ADD ECX,EAX                         ; 004502e7
    ADD EBX,EAX                         ; 004502e9
    MOV dword ptr [ESP + 0x14],ECX      ; 004502eb
    TEST EBP,0x1                        ; 004502ef
    JNZ 0x0045035a                      ; 004502f5
        ;   XREF to: 0045035a (CONDITIONAL_JUMP)  ; LAB_0045035a
    CMP dword ptr [EDI + 0x14c],0x1     ; 004502f7
    JNZ 0x0045031b                      ; 004502fe
        ;   XREF to: 0045031b (CONDITIONAL_JUMP)  ; LAB_0045031b
    MOV EDX,dword ptr [EDI + 0x144]     ; 00450300
    PUSH EDX                            ; 00450306
    PUSH ECX                            ; 00450307
    PUSH EBX                            ; 00450308
    MOV EAX,dword ptr [ESP + 0xc]       ; 00450309
    PUSH EAX                            ; 0045030d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045030e
    PUSH EDX                            ; 00450312
    CALL core_dstrendr.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00471951 ; 00450313
        ;   XREF to: 00471951 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00471951(uint * output_buffer, uint * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 00450318
    CMP dword ptr [EDI + 0x14c],0x2     ; 0045031b
        ;   Label: LAB_0045031b
    JZ 0x00450339                       ; 00450322
        ;   XREF to: 00450339 (CONDITIONAL_JUMP)  ; LAB_00450339
    IMUL EBX,ESI,0xc                    ; 00450324
        ;   Label: LAB_00450324
    CMP ESI,dword ptr [0x013405b4]      ; 00450327 | DAT_013405b4
    JL 0x004503ab                       ; 0045032d
        ;   XREF to: 004503ab (CONDITIONAL_JUMP)  ; LAB_004503ab
    INC EBP                             ; 00450333
        ;   Label: LAB_00450333
    JMP 0x00450282                      ; 00450334
        ;   XREF to: 00450282 (UNCONDITIONAL_JUMP)  ; LAB_00450282
    MOV EAX,dword ptr [EDI + 0x144]     ; 00450339
        ;   Label: LAB_00450339
    PUSH EAX                            ; 0045033f
    MOV EDX,dword ptr [ESP + 0x18]      ; 00450340
    PUSH EDX                            ; 00450344
    PUSH EBX                            ; 00450345
    MOV ECX,dword ptr [ESP + 0xc]       ; 00450346
    PUSH ECX                            ; 0045034a
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045034b
    PUSH EBX                            ; 0045034f
    CALL core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00470a2c ; 00450350
        ;   XREF to: 00470a2c (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00470a2c(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 00450355
    JMP 0x00450324                      ; 00450358
        ;   XREF to: 00450324 (UNCONDITIONAL_JUMP)  ; LAB_00450324
    CMP dword ptr [EDI + 0x14c],0x1     ; 0045035a
        ;   Label: LAB_0045035a
    JNZ 0x0045037e                      ; 00450361
        ;   XREF to: 0045037e (CONDITIONAL_JUMP)  ; LAB_0045037e
    MOV EDX,dword ptr [EDI + 0x144]     ; 00450363
    PUSH EDX                            ; 00450369
    PUSH ECX                            ; 0045036a
    PUSH EBX                            ; 0045036b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045036c
    PUSH EAX                            ; 00450370
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00450371
    PUSH EDX                            ; 00450375
    CALL core_dstrendr.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00471e45 ; 00450376
        ;   XREF to: 00471e45 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00471e45(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 0045037b
    CMP dword ptr [EDI + 0x14c],0x2     ; 0045037e
        ;   Label: LAB_0045037e
    JNZ 0x00450324                      ; 00450385
        ;   XREF to: 00450324 (CONDITIONAL_JUMP)  ; LAB_00450324
    MOV EAX,dword ptr [EDI + 0x144]     ; 00450387
    PUSH EAX                            ; 0045038d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045038e
    PUSH EDX                            ; 00450392
    PUSH EBX                            ; 00450393
    MOV ECX,dword ptr [ESP + 0xc]       ; 00450394
    PUSH ECX                            ; 00450398
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00450399
    PUSH EBX                            ; 0045039d
    CALL core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00470f0a ; 0045039e
        ;   XREF to: 00470f0a (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00470f0a(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 004503a3
    JMP 0x00450324                      ; 004503a6
        ;   XREF to: 00450324 (UNCONDITIONAL_JUMP)  ; LAB_00450324
    MOV EDX,dword ptr [EBX + 0x13405c0] ; 004503ab
        ;   Label: LAB_004503ab
    CMP EBP,EDX                         ; 004503b1
    JNZ 0x00450333                      ; 004503b3
        ;   XREF to: 00450333 (CONDITIONAL_JUMP)  ; LAB_00450333
    MOV ECX,dword ptr [EBX + 0x13405b8] ; 004503b9
    PUSH ECX                            ; 004503bf
    PUSH EDX                            ; 004503c0
    MOV EDX,dword ptr [EBX + 0x13405bc] ; 004503c1
    PUSH EDX                            ; 004503c7
    PUSH EDI                            ; 004503c8
    ADD EBX,0xc                         ; 004503c9
    INC ESI                             ; 004503cc
    CALL core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00450ac0 ; 004503cd
        ;   XREF to: 00450ac0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00450ac0(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset)
    ADD ESP,0x10                        ; 004503d2
    CMP ESI,dword ptr [0x013405b4]      ; 004503d5 | DAT_013405b4
    JL 0x004503ab                       ; 004503db
        ;   XREF to: 004503ab (CONDITIONAL_JUMP)  ; LAB_004503ab
    INC EBP                             ; 004503dd
    JMP 0x00450282                      ; 004503de
        ;   XREF to: 00450282 (UNCONDITIONAL_JUMP)  ; LAB_00450282

