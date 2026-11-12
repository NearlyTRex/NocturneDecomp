; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0(CDemonCamera *this_ptr)
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
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20 at 00451e38
;
; Referenced Globals:
;   undefined4 DAT_00611230
;   undefined4 DAT_00611234
;   undefined4 DAT_00611238
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00b8199c
;   undefined4 DAT_01323d00
;   undefined4 DAT_01323d04
;   undefined4 DAT_01342218
;   undefined4 DAT_0134221c
;   undefined4 DAT_01480e20
;   undefined4 DAT_01480e24
;   undefined4 DAT_01c43530
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9e0
;   ... and 2 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00454a10
;   core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00454970
;   core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004515b0
;   core_dcamera.cpp_updateFogScrollOffset_FUN_0044ca20
;   core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_004895f3
;   core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00487eac
;   core_dstrendr.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00489f50
;   core_dstrendr.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00488dd1
;   core_dstrendr.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_0048a4b4
;   core_dstrendr.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_004892c5
;   core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00489b40
;   core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_0048838a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453ed0
        ;   Label: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0
    PUSH ESI                            ; 00453ed1
    PUSH EDI                            ; 00453ed2
    PUSH EBP                            ; 00453ed3
    SUB ESP,0x18                        ; 00453ed4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00453ed7
    MOV EAX,[0x01c43530]                ; 00453edb | DAT_01c43530
    MOV EDX,dword ptr [0x01480e24]      ; 00453ee0 | DAT_01480e24
    SHL EAX,0x2                         ; 00453ee6
    ADD EDX,EAX                         ; 00453ee9
    XOR ESI,ESI                         ; 00453eeb
    MOV dword ptr [0x01480e24],EDX      ; 00453eed | DAT_01480e24
    CMP EDX,0x10000                     ; 00453ef3
    JLE 0x00453f3a                      ; 00453ef9
        ;   XREF to: 00453f3a (CONDITIONAL_JUMP)  ; LAB_00453f3a
    MOV EBP,dword ptr [0x01480e20]      ; 00453efb | DAT_01480e20
    LEA EBX,[EDX + 0xffff0000]          ; 00453f01
    INC EBP                             ; 00453f07
    MOV dword ptr [0x01480e24],EBX      ; 00453f08 | DAT_01480e24
    MOV dword ptr [0x01480e20],EBP      ; 00453f0e | DAT_01480e20
    CMP EBP,0x10                        ; 00453f14
    JL 0x00453f1f                       ; 00453f17
        ;   XREF to: 00453f1f (CONDITIONAL_JUMP)  ; LAB_00453f1f
    MOV dword ptr [0x01480e20],ESI      ; 00453f19 | DAT_01480e20
    MOV ECX,dword ptr [0x01480e24]      ; 00453f1f | DAT_01480e24
        ;   Label: LAB_00453f1f
    PUSH ECX                            ; 00453f25
    MOV EBX,dword ptr [0x01480e20]      ; 00453f26 | DAT_01480e20
    PUSH EBX                            ; 00453f2c
    PUSH 0x1480e2c                      ; 00453f2d
    CALL core_dcamera.cpp_updateFogScrollOffset_FUN_0044ca20 ; 00453f32
        ;   XREF to: 0044ca20 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_updateFogScrollOffset_FUN_0044ca20(SFogGrid * fog_ptr, int time_major, int time_minor)
    ADD ESP,0xc                         ; 00453f37
    PUSH EDI                            ; 00453f3a
        ;   Label: LAB_00453f3a
    CALL core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004515b0 ; 00453f3b
        ;   XREF to: 004515b0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004515b0(CDemonCamera * this_ptr)
    MOV EAX,[0x00611238]                ; 00453f40 | DAT_00611238
    MOV EBX,dword ptr [EAX*0x4 + 0xb8189c] ; 00453f45 | DAT_00b8199c
    MOV EAX,[0x00611234]                ; 00453f4c | DAT_00611234
    MOV EDX,dword ptr [0x0061b4a0]      ; 00453f51 | DAT_0061b4a0
    MOV EBP,dword ptr [EAX*0x4 + 0xb8189c] ; 00453f57 | DAT_00b8199c
    MOV EAX,[0x00611230]                ; 00453f5e | DAT_00611230
    ADD ESP,0x4                         ; 00453f63
    AND EBX,0xff                        ; 00453f66
    MOV EAX,dword ptr [EAX*0x4 + 0xb8189c] ; 00453f6c | DAT_00b8199c
    AND EBP,0xff                        ; 00453f73
    AND EAX,0xff                        ; 00453f79
    CMP EDX,0x20                        ; 00453f7e
    JNZ 0x00454072                      ; 00453f81
        ;   XREF to: 00454072 (CONDITIONAL_JUMP)  ; LAB_00454072
    MOV CL,byte ptr [0x01c4e9d4]        ; 00453f87 | DAT_01c4e9d4
    SHL EAX,CL                          ; 00453f8d
    MOV CL,byte ptr [0x01c4e9e0]        ; 00453f8f | DAT_01c4e9e0
    SHL EBP,CL                          ; 00453f95
    MOV CL,byte ptr [0x01c4e9ec]        ; 00453f97 | DAT_01c4e9ec
    SHL EBX,CL                          ; 00453f9d
    OR EAX,EBP                          ; 00453f9f
    MOV ECX,EBX                         ; 00453fa1
    OR ECX,EAX                          ; 00453fa3
    MOV dword ptr [0x01c51d1c],ECX      ; 00453fa5 | DAT_01c51d1c
        ;   Label: LAB_00453fa5
    CMP dword ptr [0x0061b4a0],0x10     ; 00453fab | DAT_0061b4a0
    JNZ 0x0045412d                      ; 00453fb2
        ;   XREF to: 0045412d (CONDITIONAL_JUMP)  ; LAB_0045412d
    MOV EBP,0x1                         ; 00453fb8
    MOV EAX,dword ptr [EDI + 0x148]     ; 00453fbd
        ;   Label: LAB_00453fbd
    DEC EAX                             ; 00453fc3
    CMP EBP,EAX                         ; 00453fc4
    JGE 0x00451391                      ; 00453fc6
        ;   XREF to: 00451391 (CONDITIONAL_JUMP)  ; LAB_00451391
    MOV ECX,dword ptr [0x0134221c]      ; 00453fcc | DAT_0134221c
    MOV EBX,EBP                         ; 00453fd2
    MOV EAX,[0x01342218]                ; 00453fd4 | DAT_01342218
    SUB EBX,ECX                         ; 00453fd9
    ADD EAX,EAX                         ; 00453fdb
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 00453fdd | DAT_01c4354c
    ADD EBX,EAX                         ; 00453fe4
    MOV EAX,dword ptr [EDI + 0x144]     ; 00453fe6
    IMUL EAX,EBP                        ; 00453fec
    MOV dword ptr [ESP + 0x10],EBX      ; 00453fef
    MOV EBX,dword ptr [EDI + 0x158]     ; 00453ff3
    SHL EAX,0x2                         ; 00453ff9
    MOV CL,byte ptr [0x01323d00]        ; 00453ffc | DAT_01323d00
    ADD EBX,EAX                         ; 00454002
    MOV EAX,EBP                         ; 00454004
    SAR EAX,CL                          ; 00454006
    IMUL EAX,EAX,0x140                  ; 00454008
    MOV dword ptr [ESP + 0x8],EBX       ; 0045400e
    MOV ECX,0x1342220                   ; 00454012
    MOV EBX,0xb23458                    ; 00454017
    ADD ECX,EAX                         ; 0045401c
    ADD EBX,EAX                         ; 0045401e
    MOV dword ptr [ESP + 0x4],ECX       ; 00454020
    TEST EBP,0x1                        ; 00454024
    JNZ 0x004540a4                      ; 0045402a
        ;   XREF to: 004540a4 (CONDITIONAL_JUMP)  ; LAB_004540a4
    CMP dword ptr [EDI + 0x14c],0x1     ; 00454030
    JNZ 0x00454054                      ; 00454037
        ;   XREF to: 00454054 (CONDITIONAL_JUMP)  ; LAB_00454054
    MOV EDX,dword ptr [EDI + 0x144]     ; 00454039
    PUSH EDX                            ; 0045403f
    PUSH ECX                            ; 00454040
    PUSH EBX                            ; 00454041
    MOV EAX,dword ptr [ESP + 0x14]      ; 00454042
    PUSH EAX                            ; 00454046
    MOV EDX,dword ptr [ESP + 0x20]      ; 00454047
    PUSH EDX                            ; 0045404b
    CALL core_dstrendr.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00489f50 ; 0045404c
        ;   XREF to: 00489f50 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00489f50(uint * output_buffer, uint * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 00454051
    CMP dword ptr [EDI + 0x14c],0x2     ; 00454054
        ;   Label: LAB_00454054
    JZ 0x00454083                       ; 0045405b
        ;   XREF to: 00454083 (CONDITIONAL_JUMP)  ; LAB_00454083
    IMUL EBX,ESI,0xc                    ; 0045405d
        ;   Label: LAB_0045405d
    CMP ESI,dword ptr [0x01323d04]      ; 00454060 | DAT_01323d04
    JL 0x004540f5                       ; 00454066
        ;   XREF to: 004540f5 (CONDITIONAL_JUMP)  ; LAB_004540f5
    INC EBP                             ; 0045406c
        ;   Label: LAB_0045406c
    JMP 0x00453fbd                      ; 0045406d
        ;   XREF to: 00453fbd (UNCONDITIONAL_JUMP)  ; LAB_00453fbd
    MOV ECX,EAX                         ; 00454072
        ;   Label: LAB_00454072
    SHL EBP,0x8                         ; 00454074
    SHL ECX,0x10                        ; 00454077
    OR ECX,EBP                          ; 0045407a
    OR ECX,EBX                          ; 0045407c
    JMP 0x00453fa5                      ; 0045407e
        ;   XREF to: 00453fa5 (UNCONDITIONAL_JUMP)  ; LAB_00453fa5
    MOV EAX,dword ptr [EDI + 0x144]     ; 00454083
        ;   Label: LAB_00454083
    PUSH EAX                            ; 00454089
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045408a
    PUSH EDX                            ; 0045408e
    PUSH EBX                            ; 0045408f
    MOV ECX,dword ptr [ESP + 0x14]      ; 00454090
    PUSH ECX                            ; 00454094
    MOV EBX,dword ptr [ESP + 0x20]      ; 00454095
    PUSH EBX                            ; 00454099
    CALL core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_004895f3 ; 0045409a
        ;   XREF to: 004895f3 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_004895f3(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 0045409f
    JMP 0x0045405d                      ; 004540a2
        ;   XREF to: 0045405d (UNCONDITIONAL_JUMP)  ; LAB_0045405d
    CMP dword ptr [EDI + 0x14c],0x1     ; 004540a4
        ;   Label: LAB_004540a4
    JNZ 0x004540c8                      ; 004540ab
        ;   XREF to: 004540c8 (CONDITIONAL_JUMP)  ; LAB_004540c8
    MOV EDX,dword ptr [EDI + 0x144]     ; 004540ad
    PUSH EDX                            ; 004540b3
    PUSH ECX                            ; 004540b4
    PUSH EBX                            ; 004540b5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004540b6
    PUSH EAX                            ; 004540ba
    MOV EDX,dword ptr [ESP + 0x20]      ; 004540bb
    PUSH EDX                            ; 004540bf
    CALL core_dstrendr.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_0048a4b4 ; 004540c0
        ;   XREF to: 0048a4b4 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_0048a4b4(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 004540c5
    CMP dword ptr [EDI + 0x14c],0x2     ; 004540c8
        ;   Label: LAB_004540c8
    JNZ 0x0045405d                      ; 004540cf
        ;   XREF to: 0045405d (CONDITIONAL_JUMP)  ; LAB_0045405d
    MOV EAX,dword ptr [EDI + 0x144]     ; 004540d1
    PUSH EAX                            ; 004540d7
    MOV EDX,dword ptr [ESP + 0x8]       ; 004540d8
    PUSH EDX                            ; 004540dc
    PUSH EBX                            ; 004540dd
    MOV ECX,dword ptr [ESP + 0x14]      ; 004540de
    PUSH ECX                            ; 004540e2
    MOV EBX,dword ptr [ESP + 0x20]      ; 004540e3
    PUSH EBX                            ; 004540e7
    CALL core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00489b40 ; 004540e8
        ;   XREF to: 00489b40 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00489b40(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 004540ed
    JMP 0x0045405d                      ; 004540f0
        ;   XREF to: 0045405d (UNCONDITIONAL_JUMP)  ; LAB_0045405d
    MOV EDX,dword ptr [EBX + 0x1323d10] ; 004540f5
        ;   Label: LAB_004540f5
    CMP EBP,EDX                         ; 004540fb
    JNZ 0x0045406c                      ; 004540fd
        ;   XREF to: 0045406c (CONDITIONAL_JUMP)  ; LAB_0045406c
    MOV ECX,dword ptr [EBX + 0x1323d08] ; 00454103
    PUSH ECX                            ; 00454109
    PUSH EDX                            ; 0045410a
    MOV EDX,dword ptr [EBX + 0x1323d0c] ; 0045410b
    PUSH EDX                            ; 00454111
    PUSH EDI                            ; 00454112
    ADD EBX,0xc                         ; 00454113
    INC ESI                             ; 00454116
    CALL core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00454a10 ; 00454117
        ;   XREF to: 00454a10 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00454a10(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset)
    ADD ESP,0x10                        ; 0045411c
    CMP ESI,dword ptr [0x01323d04]      ; 0045411f | DAT_01323d04
    JL 0x004540f5                       ; 00454125
        ;   XREF to: 004540f5 (CONDITIONAL_JUMP)  ; LAB_004540f5
    INC EBP                             ; 00454127
    JMP 0x00453fbd                      ; 00454128
        ;   XREF to: 00453fbd (UNCONDITIONAL_JUMP)  ; LAB_00453fbd
    MOV EBP,0x1                         ; 0045412d
        ;   Label: LAB_0045412d
    MOV EAX,dword ptr [EDI + 0x148]     ; 00454132
        ;   Label: LAB_00454132
    DEC EAX                             ; 00454138
    CMP EBP,EAX                         ; 00454139
    JGE 0x00451391                      ; 0045413b
        ;   XREF to: 00451391 (CONDITIONAL_JUMP)  ; LAB_00451391
    MOV EBX,dword ptr [0x0134221c]      ; 00454141 | DAT_0134221c
    MOV EAX,EBP                         ; 00454147
    SUB EAX,EBX                         ; 00454149
    LEA EBX,[EAX*0x4 + 0x0]             ; 0045414b
    MOV EAX,[0x01342218]                ; 00454152 | DAT_01342218
    MOV EBX,dword ptr [EBX + 0x1c4354c] ; 00454157 | DAT_01c4354c
    SHL EAX,0x2                         ; 0045415d
    ADD EBX,EAX                         ; 00454160
    MOV EAX,dword ptr [EDI + 0x144]     ; 00454162
    IMUL EAX,EBP                        ; 00454168
    MOV dword ptr [ESP + 0xc],EBX       ; 0045416b
    MOV EBX,dword ptr [EDI + 0x158]     ; 0045416f
    SHL EAX,0x2                         ; 00454175
    MOV CL,byte ptr [0x01323d00]        ; 00454178 | DAT_01323d00
    ADD EBX,EAX                         ; 0045417e
    MOV EAX,EBP                         ; 00454180
    SAR EAX,CL                          ; 00454182
    IMUL EAX,EAX,0x140                  ; 00454184
    MOV dword ptr [ESP],EBX             ; 0045418a
    MOV ECX,0x1342220                   ; 0045418d
    MOV EBX,0xb23458                    ; 00454192
    ADD ECX,EAX                         ; 00454197
    ADD EBX,EAX                         ; 00454199
    MOV dword ptr [ESP + 0x14],ECX      ; 0045419b
    TEST EBP,0x1                        ; 0045419f
    JNZ 0x0045420a                      ; 004541a5
        ;   XREF to: 0045420a (CONDITIONAL_JUMP)  ; LAB_0045420a
    CMP dword ptr [EDI + 0x14c],0x1     ; 004541a7
    JNZ 0x004541cb                      ; 004541ae
        ;   XREF to: 004541cb (CONDITIONAL_JUMP)  ; LAB_004541cb
    MOV EDX,dword ptr [EDI + 0x144]     ; 004541b0
    PUSH EDX                            ; 004541b6
    PUSH ECX                            ; 004541b7
    PUSH EBX                            ; 004541b8
    MOV EAX,dword ptr [ESP + 0xc]       ; 004541b9
    PUSH EAX                            ; 004541bd
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004541be
    PUSH EDX                            ; 004541c2
    CALL core_dstrendr.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00488dd1 ; 004541c3
        ;   XREF to: 00488dd1 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_00488dd1(uint * output_buffer, uint * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 004541c8
    CMP dword ptr [EDI + 0x14c],0x2     ; 004541cb
        ;   Label: LAB_004541cb
    JZ 0x004541e9                       ; 004541d2
        ;   XREF to: 004541e9 (CONDITIONAL_JUMP)  ; LAB_004541e9
    IMUL EBX,ESI,0xc                    ; 004541d4
        ;   Label: LAB_004541d4
    CMP ESI,dword ptr [0x01323d04]      ; 004541d7 | DAT_01323d04
    JL 0x0045425b                       ; 004541dd
        ;   XREF to: 0045425b (CONDITIONAL_JUMP)  ; LAB_0045425b
    INC EBP                             ; 004541e3
        ;   Label: LAB_004541e3
    JMP 0x00454132                      ; 004541e4
        ;   XREF to: 00454132 (UNCONDITIONAL_JUMP)  ; LAB_00454132
    MOV EAX,dword ptr [EDI + 0x144]     ; 004541e9
        ;   Label: LAB_004541e9
    PUSH EAX                            ; 004541ef
    MOV EDX,dword ptr [ESP + 0x18]      ; 004541f0
    PUSH EDX                            ; 004541f4
    PUSH EBX                            ; 004541f5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004541f6
    PUSH ECX                            ; 004541fa
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004541fb
    PUSH EBX                            ; 004541ff
    CALL core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00487eac ; 00454200
        ;   XREF to: 00487eac (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00487eac(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 00454205
    JMP 0x004541d4                      ; 00454208
        ;   XREF to: 004541d4 (UNCONDITIONAL_JUMP)  ; LAB_004541d4
    CMP dword ptr [EDI + 0x14c],0x1     ; 0045420a
        ;   Label: LAB_0045420a
    JNZ 0x0045422e                      ; 00454211
        ;   XREF to: 0045422e (CONDITIONAL_JUMP)  ; LAB_0045422e
    MOV EDX,dword ptr [EDI + 0x144]     ; 00454213
    PUSH EDX                            ; 00454219
    PUSH ECX                            ; 0045421a
    PUSH EBX                            ; 0045421b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045421c
    PUSH EAX                            ; 00454220
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00454221
    PUSH EDX                            ; 00454225
    CALL core_dstrendr.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_004892c5 ; 00454226
        ;   XREF to: 004892c5 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_004892c5(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 0045422b
    CMP dword ptr [EDI + 0x14c],0x2     ; 0045422e
        ;   Label: LAB_0045422e
    JNZ 0x004541d4                      ; 00454235
        ;   XREF to: 004541d4 (CONDITIONAL_JUMP)  ; LAB_004541d4
    MOV EAX,dword ptr [EDI + 0x144]     ; 00454237
    PUSH EAX                            ; 0045423d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045423e
    PUSH EDX                            ; 00454242
    PUSH EBX                            ; 00454243
    MOV ECX,dword ptr [ESP + 0xc]       ; 00454244
    PUSH ECX                            ; 00454248
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00454249
    PUSH EBX                            ; 0045424d
    CALL core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_0048838a ; 0045424e
        ;   XREF to: 0048838a (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_0048838a(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, ...)
    ADD ESP,0x14                        ; 00454253
    JMP 0x004541d4                      ; 00454256
        ;   XREF to: 004541d4 (UNCONDITIONAL_JUMP)  ; LAB_004541d4
    MOV EDX,dword ptr [EBX + 0x1323d10] ; 0045425b
        ;   Label: LAB_0045425b
    CMP EBP,EDX                         ; 00454261
    JNZ 0x004541e3                      ; 00454263
        ;   XREF to: 004541e3 (CONDITIONAL_JUMP)  ; LAB_004541e3
    MOV ECX,dword ptr [EBX + 0x1323d08] ; 00454269
    PUSH ECX                            ; 0045426f
    PUSH EDX                            ; 00454270
    MOV EDX,dword ptr [EBX + 0x1323d0c] ; 00454271
    PUSH EDX                            ; 00454277
    PUSH EDI                            ; 00454278
    ADD EBX,0xc                         ; 00454279
    INC ESI                             ; 0045427c
    CALL core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00454970 ; 0045427d
        ;   XREF to: 00454970 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00454970(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset)
    ADD ESP,0x10                        ; 00454282
    CMP ESI,dword ptr [0x01323d04]      ; 00454285 | DAT_01323d04
    JL 0x0045425b                       ; 0045428b
        ;   XREF to: 0045425b (CONDITIONAL_JUMP)  ; LAB_0045425b
    INC EBP                             ; 0045428d
    JMP 0x00454132                      ; 0045428e
        ;   XREF to: 00454132 (UNCONDITIONAL_JUMP)  ; LAB_00454132

