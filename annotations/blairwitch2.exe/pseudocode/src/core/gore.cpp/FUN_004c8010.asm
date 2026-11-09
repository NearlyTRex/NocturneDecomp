; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004c8010(undefined4 *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004c94c0 at 004c950f
;
; Referenced Globals:
;   undefined4 DAT_005d945a
;   undefined4 DAT_005d9462
;   undefined4 DAT_005f7ba8
;   undefined4 DAT_0060b280
;   undefined4 DAT_00616808
;   undefined4 DAT_00616868
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_00622064
;   undefined4 DAT_00622068
;   undefined4 DAT_0062206c
;   undefined4 DAT_00622094
;   undefined4 DAT_00622098
;   undefined4 DAT_0062209c
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cfc0
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
;   engine_matrix.c_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8010
        ;   Label: core_gore.cpp_FUN_004c8010
    PUSH ESI                            ; 004c8011
    PUSH EDI                            ; 004c8012
    PUSH EBP                            ; 004c8013
    SUB ESP,0x8c                        ; 004c8014
    MOV ESI,dword ptr [ESP + 0xa0]      ; 004c801a
    MOV EBX,dword ptr [ESP + 0xa4]      ; 004c8021
    FLD float ptr [ESI + 0x24]          ; 004c8028
    FMUL double ptr [0x005d945a]        ; 004c802b | DAT_005d945a
    FADD double ptr [0x005d9462]        ; 004c8031 | DAT_005d9462
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c8037
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x88]        ; 004c803c
    MOV EDX,dword ptr [ESP + 0x88]      ; 004c8043
    TEST EDX,EDX                        ; 004c804a
    JL 0x004c839a                       ; 004c804c
        ;   XREF to: 004c839a (CONDITIONAL_JUMP)  ; LAB_004c839a
    CMP EDX,0xf                         ; 004c8052
    JLE 0x004c806c                      ; 004c8055
        ;   XREF to: 004c806c (CONDITIONAL_JUMP)  ; LAB_004c806c
    MOV dword ptr [ESP + 0x88],0xf      ; 004c8057
    TEST EBX,EBX                        ; 004c8062
    JZ 0x004c806c                       ; 004c8064
        ;   XREF to: 004c806c (CONDITIONAL_JUMP)  ; LAB_004c806c
    MOV dword ptr [ESI],0x1             ; 004c8066
    LEA EAX,[ESI + 0x4]                 ; 004c806c
        ;   Label: LAB_004c806c
    PUSH EAX                            ; 004c806f
    MOV EAX,[0x0060b280]                ; 004c8070 | DAT_0060b280
    PUSH EAX                            ; 004c8075 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004c8076
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EDX,dword ptr [ESI + 0x10]      ; 004c807b
    ADD ESP,0x8                         ; 004c807e
    CMP EDX,0x1                         ; 004c8081
    JNZ 0x004c83a8                      ; 004c8084
        ;   XREF to: 004c83a8 (CONDITIONAL_JUMP)  ; LAB_004c83a8
    XOR EDX,EDX                         ; 004c808a
    MOV EBX,0xffff                      ; 004c808c
    MOV dword ptr [0x01cb8290],EDX      ; 004c8091 | DAT_01cb8290
    MOV dword ptr [0x01cb8298],EBX      ; 004c8097 | DAT_01cb8298
    MOV EBX,dword ptr [ESI + 0x28]      ; 004c809d
    MOV dword ptr [0x01cb8294],EDX      ; 004c80a0 | DAT_01cb8294
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c80a6
    MOV dword ptr [0x01cb829c],EDX      ; 004c80ad | DAT_01cb829c
    SUB EAX,EBX                         ; 004c80b3
    MOV EDX,0x616868                    ; 004c80b5 | DAT_00616868
    SHL EAX,0x7                         ; 004c80ba
    MOV EBX,dword ptr [ESP + 0x88]      ; 004c80bd
    ADD EDX,EAX                         ; 004c80c4
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c80c6
    SUB EAX,EBX                         ; 004c80cd
    SHL EAX,0x3                         ; 004c80cf
    ADD EAX,EDX                         ; 004c80d2
    PUSH EAX                            ; 004c80d4
    MOV EBP,dword ptr [0x0060b280]      ; 004c80d5 | DAT_0060b280
    PUSH EBP                            ; 004c80db | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c80dc
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c80e1
    XOR EDI,EDI                         ; 004c80e4
    PUSH EDI                            ; 004c80e6
    LEA EAX,[ESI + 0x18]                ; 004c80e7
    PUSH EAX                            ; 004c80ea
    MOV EAX,[0x0060b280]                ; 004c80eb | DAT_0060b280
    PUSH EAX                            ; 004c80f0 | DAT_01ba5c50
    XOR EBX,EBX                         ; 004c80f1
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 004c80f3
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    MOV EDX,0xbf000000                  ; 004c80f8
    ADD ESP,0xc                         ; 004c80fd
    LEA EAX,[ESP + 0x18]                ; 004c8100
    MOV dword ptr [ESP + 0x18],EDX      ; 004c8104
    MOV dword ptr [ESP + 0x1c],EDX      ; 004c8108
    MOV dword ptr [ESP + 0x20],EBX      ; 004c810c
    LEA EBX,[ESP + 0x24]                ; 004c8110
    MOV EDX,dword ptr [0x0060b280]      ; 004c8114 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004c811a
    FMUL float ptr [0x005f7ba8]         ; 004c811c | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c8122
    FLD float ptr [EAX + 0x4]           ; 004c8124
    FMUL float ptr [0x005f7ba8]         ; 004c8127 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c812d
    FLD float ptr [EAX + 0x8]           ; 004c8130
    FMUL float ptr [0x005f7ba8]         ; 004c8133 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c8139
    LEA EAX,[ESP + 0x24]                ; 004c813c
    PUSH EAX                            ; 004c8140
    MOV EAX,dword ptr [EDX]             ; 004c8141 | DAT_01ba5c50
    PUSH EAX                            ; 004c8143
    MOV EBP,0xbf000000                  ; 004c8144
    MOV EDI,0x3f000000                  ; 004c8149
    CALL engine_special.cpp_FUN_0055d723 ; 004c814e
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x50]                ; 004c8153
    MOV EDX,dword ptr [0x0060b280]      ; 004c8157 | DAT_0060b280
    ADD ESP,0x8                         ; 004c815d
    XOR EAX,EAX                         ; 004c8160
    MOV dword ptr [ESP + 0x18],EDI      ; 004c8162
    MOV dword ptr [ESP + 0x20],EAX      ; 004c8166
    LEA EAX,[ESP + 0x18]                ; 004c816a
    MOV dword ptr [ESP + 0x1c],EBP      ; 004c816e
    FLD float ptr [EAX]                 ; 004c8172
    FMUL float ptr [0x005f7ba8]         ; 004c8174 | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c817a
    FLD float ptr [EAX + 0x4]           ; 004c817c
    FMUL float ptr [0x005f7ba8]         ; 004c817f | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c8185
    FLD float ptr [EAX + 0x8]           ; 004c8188
    FMUL float ptr [0x005f7ba8]         ; 004c818b | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c8191
    LEA EAX,[ESP + 0x48]                ; 004c8194
    PUSH EAX                            ; 004c8198
    MOV EAX,dword ptr [EDX]             ; 004c8199 | DAT_01ba5c50
    ADD EAX,0x30                        ; 004c819b
    PUSH EAX                            ; 004c819e
    CALL engine_special.cpp_FUN_0055d723 ; 004c819f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EAX,[ESP + 0x20]                ; 004c81a4
    MOV EDX,dword ptr [0x0060b280]      ; 004c81a8 | DAT_0060b280
    ADD ESP,0x8                         ; 004c81ae
    XOR EBX,EBX                         ; 004c81b1
    MOV dword ptr [ESP + 0x18],EDI      ; 004c81b3
    MOV dword ptr [ESP + 0x20],EBX      ; 004c81b7
    LEA EBX,[ESP + 0x6c]                ; 004c81bb
    MOV dword ptr [ESP + 0x1c],EDI      ; 004c81bf
    FLD float ptr [EAX]                 ; 004c81c3
    FMUL float ptr [0x005f7ba8]         ; 004c81c5 | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c81cb
    FLD float ptr [EAX + 0x4]           ; 004c81cd
    FMUL float ptr [0x005f7ba8]         ; 004c81d0 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c81d6
    FLD float ptr [EAX + 0x8]           ; 004c81d9
    FMUL float ptr [0x005f7ba8]         ; 004c81dc | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c81e2
    LEA EAX,[ESP + 0x6c]                ; 004c81e5
    PUSH EAX                            ; 004c81e9
    MOV EAX,dword ptr [EDX]             ; 004c81ea | DAT_01ba5c50
    ADD EAX,0x60                        ; 004c81ec
    PUSH EAX                            ; 004c81ef
    CALL engine_special.cpp_FUN_0055d723 ; 004c81f0
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x8]                 ; 004c81f5
    MOV EDX,dword ptr [0x0060b280]      ; 004c81f9 | DAT_0060b280
    ADD ESP,0x8                         ; 004c81ff
    XOR EAX,EAX                         ; 004c8202
    MOV dword ptr [ESP + 0x18],EBP      ; 004c8204
    MOV dword ptr [ESP + 0x20],EAX      ; 004c8208
    LEA EAX,[ESP + 0x18]                ; 004c820c
    MOV dword ptr [ESP + 0x1c],EDI      ; 004c8210
    FLD float ptr [EAX]                 ; 004c8214
    FMUL float ptr [0x005f7ba8]         ; 004c8216 | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c821c
    FLD float ptr [EAX + 0x4]           ; 004c821e
    FMUL float ptr [0x005f7ba8]         ; 004c8221 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c8227
    FLD float ptr [EAX + 0x8]           ; 004c822a
    FMUL float ptr [0x005f7ba8]         ; 004c822d | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c8233
    MOV EAX,ESP                         ; 004c8236
    PUSH EAX                            ; 004c8238
        ;   Label: LAB_004c8238
    MOV EAX,dword ptr [EDX]             ; 004c8239 | DAT_01ba5c50
    ADD EAX,0x90                        ; 004c823b
    PUSH EAX                            ; 004c8240
    CALL engine_special.cpp_FUN_0055d723 ; 004c8241
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c8246
    MOV EBP,0x622034                    ; 004c8249 | DAT_00622034
    PUSH 0xc0                           ; 004c824e
    MOV EDI,0x622038                    ; 004c8253 | DAT_00622038
    MOV EDX,0x62203c                    ; 004c8258 | DAT_0062203c
    PUSH 0x40                           ; 004c825d
    MOV EBX,dword ptr [ESI + 0x14]      ; 004c825f
    MOV dword ptr [ESP + 0x80],EDX      ; 004c8262 | DAT_0062203c
    CALL core_actor.cpp_FUN_0040cfc0    ; 004c8269
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c826e
    CMP EBX,0x1                         ; 004c8271
    JNC 0x004c857f                      ; 004c8274
        ;   XREF to: 004c857f (CONDITIONAL_JUMP)  ; LAB_004c857f
    MOV dword ptr [EBP],0x2000          ; 004c827a | DAT_00622034
        ;   Label: LAB_004c827a
    MOV EAX,dword ptr [ESP + 0x78]      ; 004c8281
    MOV dword ptr [EDI],0x0             ; 004c8285 | DAT_00622038
    MOV dword ptr [EAX],0x0             ; 004c828b | DAT_0062203c
    MOV EBP,0x622064                    ; 004c8291 | DAT_00622064
        ;   Label: LAB_004c8291
    PUSH 0xc0                           ; 004c8296
    MOV ECX,0x622068                    ; 004c829b | DAT_00622068
    MOV EDI,0x62206c                    ; 004c82a0 | DAT_0062206c
    PUSH 0x40                           ; 004c82a5
    MOV EBX,dword ptr [ESI + 0x14]      ; 004c82a7
    MOV dword ptr [ESP + 0x8c],ECX      ; 004c82aa | DAT_00622068
    CALL core_actor.cpp_FUN_0040cfc0    ; 004c82b1
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c82b6
    CMP EBX,0x1                         ; 004c82b9
    JNC 0x004c85c9                      ; 004c82bc
        ;   XREF to: 004c85c9 (CONDITIONAL_JUMP)  ; LAB_004c85c9
    MOV EAX,dword ptr [ESP + 0x84]      ; 004c82c2
        ;   Label: LAB_004c82c2
    MOV dword ptr [EBP],0x2000          ; 004c82c9 | DAT_00622064
    MOV dword ptr [EAX],0x0             ; 004c82d0 | DAT_00622068
    MOV dword ptr [EDI],0x0             ; 004c82d6 | DAT_0062206c
    PUSH 0xc0                           ; 004c82dc
        ;   Label: LAB_004c82dc
    MOV EDI,0x622094                    ; 004c82e1 | DAT_00622094
    MOV EBP,0x622098                    ; 004c82e6 | DAT_00622098
    PUSH 0x40                           ; 004c82eb
    MOV EBX,dword ptr [ESI + 0x14]      ; 004c82ed
    MOV dword ptr [ESP + 0x84],EBP      ; 004c82f0 | DAT_00622098
    CALL core_actor.cpp_FUN_0040cfc0    ; 004c82f7
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    MOV EBP,0x62209c                    ; 004c82fc | DAT_0062209c
    ADD ESP,0x8                         ; 004c8301
    CMP EBX,0x1                         ; 004c8304
    JNC 0x004c8611                      ; 004c8307
        ;   XREF to: 004c8611 (CONDITIONAL_JUMP)  ; LAB_004c8611
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004c830d
        ;   Label: LAB_004c830d
    MOV dword ptr [EDI],0x2000          ; 004c8311 | DAT_00622094
    MOV dword ptr [EAX],0x0             ; 004c8317 | DAT_00622098
    MOV dword ptr [EBP],0x0             ; 004c831d | DAT_0062209c
    MOV EBP,0x6220c4                    ; 004c8324 | DAT_006220c4
        ;   Label: LAB_004c8324
    PUSH 0xc0                           ; 004c8329
    MOV EAX,0x6220c8                    ; 004c832e | DAT_006220c8
    MOV EDI,0x6220cc                    ; 004c8333 | DAT_006220cc
    PUSH 0x40                           ; 004c8338
    MOV EBX,dword ptr [ESI + 0x14]      ; 004c833a
    MOV dword ptr [ESP + 0x88],EAX      ; 004c833d | DAT_006220c8
    CALL core_actor.cpp_FUN_0040cfc0    ; 004c8344
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c8349
    CMP EBX,0x1                         ; 004c834c
    JNC 0x004c865b                      ; 004c834f
        ;   XREF to: 004c865b (CONDITIONAL_JUMP)  ; LAB_004c865b
    MOV EAX,dword ptr [ESP + 0x80]      ; 004c8355
        ;   Label: LAB_004c8355
    MOV dword ptr [EBP],0x2000          ; 004c835c | DAT_006220c4
    MOV dword ptr [EAX],0x0             ; 004c8363 | DAT_006220c8
    MOV dword ptr [EDI],0x0             ; 004c8369 | DAT_006220cc
    PUSH 0x1cb8288                      ; 004c836f
        ;   Label: LAB_004c836f
    MOV EDX,dword ptr [0x0060b280]      ; 004c8374 | DAT_0060b280
    PUSH EDX                            ; 004c837a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 004c837b
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV ECX,dword ptr [ESI + 0x10]      ; 004c8380
    ADD ESP,0x8                         ; 004c8383
    CMP ECX,0x1                         ; 004c8386
    JZ 0x004c8667                       ; 004c8389
        ;   XREF to: 004c8667 (CONDITIONAL_JUMP)  ; LAB_004c8667
    ADD ESP,0x8c                        ; 004c838f
    POP EBP                             ; 004c8395
    POP EDI                             ; 004c8396
    POP ESI                             ; 004c8397
    POP EBX                             ; 004c8398
    RET                                 ; 004c8399
    XOR EBP,EBP                         ; 004c839a
        ;   Label: LAB_004c839a
    MOV dword ptr [ESP + 0x88],EBP      ; 004c839c
    JMP 0x004c806c                      ; 004c83a3
        ;   XREF to: 004c806c (UNCONDITIONAL_JUMP)  ; LAB_004c806c
    TEST EBX,EBX                        ; 004c83a8
        ;   Label: LAB_004c83a8
    JZ 0x004c83b2                       ; 004c83aa
        ;   XREF to: 004c83b2 (CONDITIONAL_JUMP)  ; LAB_004c83b2
    MOV dword ptr [ESI],0x1             ; 004c83ac
    MOV dword ptr [0x01cb8294],0xffff   ; 004c83b2 | DAT_01cb8294
        ;   Label: LAB_004c83b2
    MOV EBX,dword ptr [ESI + 0x28]      ; 004c83bc
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c83bf
    SUB EAX,EBX                         ; 004c83c6
    XOR ECX,ECX                         ; 004c83c8
    SHL EAX,0x3                         ; 004c83ca
    XOR EDI,EDI                         ; 004c83cd
    ADD EAX,0x616808                    ; 004c83cf | DAT_00616808
    MOV dword ptr [0x01cb8290],ECX      ; 004c83d4 | DAT_01cb8290
    PUSH EAX                            ; 004c83da
    MOV EAX,[0x0060b280]                ; 004c83db | DAT_0060b280
    MOV dword ptr [0x01cb8298],ECX      ; 004c83e0 | DAT_01cb8298
    PUSH EAX                            ; 004c83e6 | DAT_01ba5c50
    MOV dword ptr [0x01cb829c],ECX      ; 004c83e7 | DAT_01cb829c
    LEA EBX,[ESP + 0x5c]                ; 004c83ed
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c83f1
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EDX,0xbf000000                  ; 004c83f6
    ADD ESP,0x8                         ; 004c83fb
    LEA EAX,[ESP + 0x3c]                ; 004c83fe
    MOV dword ptr [ESP + 0x3c],EDX      ; 004c8402
    MOV dword ptr [ESP + 0x40],EDI      ; 004c8406
    MOV dword ptr [ESP + 0x44],EDX      ; 004c840a
    MOV EDX,dword ptr [0x0060b280]      ; 004c840e | DAT_0060b280
    FLD float ptr [EAX]                 ; 004c8414
    FMUL float ptr [0x005f7ba8]         ; 004c8416 | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c841c
    FLD float ptr [EAX + 0x4]           ; 004c841e
    FMUL float ptr [0x005f7ba8]         ; 004c8421 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c8427
    FLD float ptr [EAX + 0x8]           ; 004c842a
    FMUL float ptr [0x005f7ba8]         ; 004c842d | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c8433
    LEA EAX,[ESP + 0x54]                ; 004c8436
    PUSH EAX                            ; 004c843a
    MOV EAX,dword ptr [EDX]             ; 004c843b | DAT_01ba5c50
    PUSH EAX                            ; 004c843d
    XOR EBP,EBP                         ; 004c843e
    MOV EDI,0x3f000000                  ; 004c8440
    CALL engine_special.cpp_FUN_0055d723 ; 004c8445
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0xbf000000                  ; 004c844a
    LEA EBX,[ESP + 0x68]                ; 004c844f
    ADD ESP,0x8                         ; 004c8453
    MOV EDX,dword ptr [0x0060b280]      ; 004c8456 | DAT_0060b280
    MOV dword ptr [ESP + 0x3c],EDI      ; 004c845c
    MOV dword ptr [ESP + 0x44],EAX      ; 004c8460
    LEA EAX,[ESP + 0x3c]                ; 004c8464
    MOV dword ptr [ESP + 0x40],EBP      ; 004c8468
    FLD float ptr [EAX]                 ; 004c846c
    FMUL float ptr [0x005f7ba8]         ; 004c846e | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c8474
    FLD float ptr [EAX + 0x4]           ; 004c8476
    FMUL float ptr [0x005f7ba8]         ; 004c8479 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c847f
    FLD float ptr [EAX + 0x8]           ; 004c8482
    FMUL float ptr [0x005f7ba8]         ; 004c8485 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c848b
    LEA EAX,[ESP + 0x60]                ; 004c848e
    PUSH EAX                            ; 004c8492
    MOV EAX,dword ptr [EDX]             ; 004c8493 | DAT_01ba5c50
    ADD EAX,0x30                        ; 004c8495
    PUSH EAX                            ; 004c8498
    CALL engine_special.cpp_FUN_0055d723 ; 004c8499
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x14]                ; 004c849e
    LEA EAX,[ESP + 0x44]                ; 004c84a2
    MOV EDX,dword ptr [0x0060b280]      ; 004c84a6 | DAT_0060b280
    ADD ESP,0x8                         ; 004c84ac
    XOR ECX,ECX                         ; 004c84af
    MOV dword ptr [ESP + 0x3c],EDI      ; 004c84b1
    MOV dword ptr [ESP + 0x40],ECX      ; 004c84b5
    MOV dword ptr [ESP + 0x44],EDI      ; 004c84b9
    FLD float ptr [EAX]                 ; 004c84bd
    FMUL float ptr [0x005f7ba8]         ; 004c84bf | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c84c5
    FLD float ptr [EAX + 0x4]           ; 004c84c7
    FMUL float ptr [0x005f7ba8]         ; 004c84ca | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c84d0
    FLD float ptr [EAX + 0x8]           ; 004c84d3
    FMUL float ptr [0x005f7ba8]         ; 004c84d6 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c84dc
    LEA EAX,[ESP + 0xc]                 ; 004c84df
    PUSH EAX                            ; 004c84e3
    MOV EAX,dword ptr [EDX]             ; 004c84e4 | DAT_01ba5c50
    ADD EAX,0x60                        ; 004c84e6
    PUSH EAX                            ; 004c84e9
    MOV EDI,0xbf000000                  ; 004c84ea
    CALL engine_special.cpp_FUN_0055d723 ; 004c84ef
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3f000000                  ; 004c84f4
    LEA EBX,[ESP + 0x38]                ; 004c84f9
    ADD ESP,0x8                         ; 004c84fd
    MOV EDX,dword ptr [0x0060b280]      ; 004c8500 | DAT_0060b280
    MOV dword ptr [ESP + 0x3c],EDI      ; 004c8506
    MOV dword ptr [ESP + 0x44],EAX      ; 004c850a
    LEA EAX,[ESP + 0x3c]                ; 004c850e
    MOV dword ptr [ESP + 0x40],EBP      ; 004c8512
    FLD float ptr [EAX]                 ; 004c8516
    FMUL float ptr [0x005f7ba8]         ; 004c8518 | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c851e
    FLD float ptr [EAX + 0x4]           ; 004c8520
    FMUL float ptr [0x005f7ba8]         ; 004c8523 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c8529
    FLD float ptr [EAX + 0x8]           ; 004c852c
    FMUL float ptr [0x005f7ba8]         ; 004c852f | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c8535
    LEA EAX,[ESP + 0x30]                ; 004c8538
    JMP 0x004c8238                      ; 004c853c
        ;   XREF to: 004c8238 (UNCONDITIONAL_JUMP)  ; LAB_004c8238
    MOV EAX,0x9a80                      ; 004c8541
        ;   Label: LAB_004c8541
    MOV EDX,0xb100                      ; 004c8546
    MOV EBP,0x9000                      ; 004c854b
    MOV [0x00622038],EAX                ; 004c8550 | DAT_00622038
    MOV dword ptr [0x0062203c],EDX      ; 004c8555 | DAT_0062203c
    MOV dword ptr [0x00622034],EBP      ; 004c855b | DAT_00622034
    JMP 0x004c8291                      ; 004c8561
        ;   XREF to: 004c8291 (UNCONDITIONAL_JUMP)  ; LAB_004c8291
    XOR ECX,ECX                         ; 004c8566
        ;   Label: LAB_004c8566
    MOV dword ptr [0x00622038],ECX      ; 004c8568 | DAT_00622038
    MOV dword ptr [0x0062203c],ECX      ; 004c856e | DAT_0062203c
    MOV dword ptr [0x00622034],ECX      ; 004c8574 | DAT_00622034
    JMP 0x004c8291                      ; 004c857a
        ;   XREF to: 004c8291 (UNCONDITIONAL_JUMP)  ; LAB_004c8291
    JBE 0x004c8541                      ; 004c857f
        ;   XREF to: 004c8541 (CONDITIONAL_JUMP)  ; LAB_004c8541
        ;   Label: LAB_004c857f
    CMP EBX,0x2                         ; 004c8581
    JZ 0x004c8566                       ; 004c8584
        ;   XREF to: 004c8566 (CONDITIONAL_JUMP)  ; LAB_004c8566
    JMP 0x004c827a                      ; 004c8586
        ;   XREF to: 004c827a (UNCONDITIONAL_JUMP)  ; LAB_004c827a
    MOV EDX,0x9a80                      ; 004c858b
        ;   Label: LAB_004c858b
    MOV ECX,0xb100                      ; 004c8590
    MOV EAX,0x9000                      ; 004c8595
    MOV dword ptr [0x00622068],EDX      ; 004c859a | DAT_00622068
    MOV dword ptr [0x0062206c],ECX      ; 004c85a0 | DAT_0062206c
    MOV [0x00622064],EAX                ; 004c85a6 | DAT_00622064
    JMP 0x004c82dc                      ; 004c85ab
        ;   XREF to: 004c82dc (UNCONDITIONAL_JUMP)  ; LAB_004c82dc
    XOR EBX,EBX                         ; 004c85b0
        ;   Label: LAB_004c85b0
    MOV dword ptr [0x00622068],EBX      ; 004c85b2 | DAT_00622068
    MOV dword ptr [0x0062206c],EBX      ; 004c85b8 | DAT_0062206c
    MOV dword ptr [0x00622064],EBX      ; 004c85be | DAT_00622064
    JMP 0x004c82dc                      ; 004c85c4
        ;   XREF to: 004c82dc (UNCONDITIONAL_JUMP)  ; LAB_004c82dc
    JBE 0x004c858b                      ; 004c85c9
        ;   XREF to: 004c858b (CONDITIONAL_JUMP)  ; LAB_004c858b
        ;   Label: LAB_004c85c9
    CMP EBX,0x2                         ; 004c85cb
    JZ 0x004c85b0                       ; 004c85ce
        ;   XREF to: 004c85b0 (CONDITIONAL_JUMP)  ; LAB_004c85b0
    JMP 0x004c82c2                      ; 004c85d0
        ;   XREF to: 004c82c2 (UNCONDITIONAL_JUMP)  ; LAB_004c82c2
    MOV EDI,0x9a80                      ; 004c85d5
        ;   Label: LAB_004c85d5
    MOV EBP,0xb100                      ; 004c85da
    MOV EBX,0x9000                      ; 004c85df
    MOV dword ptr [0x00622098],EDI      ; 004c85e4 | DAT_00622098
    MOV dword ptr [0x0062209c],EBP      ; 004c85ea | DAT_0062209c
    MOV dword ptr [0x00622094],EBX      ; 004c85f0 | DAT_00622094
    JMP 0x004c8324                      ; 004c85f6
        ;   XREF to: 004c8324 (UNCONDITIONAL_JUMP)  ; LAB_004c8324
    XOR EAX,EAX                         ; 004c85fb
        ;   Label: LAB_004c85fb
    MOV [0x00622098],EAX                ; 004c85fd | DAT_00622098
    MOV [0x0062209c],EAX                ; 004c8602 | DAT_0062209c
    MOV [0x00622094],EAX                ; 004c8607 | DAT_00622094
    JMP 0x004c8324                      ; 004c860c
        ;   XREF to: 004c8324 (UNCONDITIONAL_JUMP)  ; LAB_004c8324
    JBE 0x004c85d5                      ; 004c8611
        ;   XREF to: 004c85d5 (CONDITIONAL_JUMP)  ; LAB_004c85d5
        ;   Label: LAB_004c8611
    CMP EBX,0x2                         ; 004c8613
    JZ 0x004c85fb                       ; 004c8616
        ;   XREF to: 004c85fb (CONDITIONAL_JUMP)  ; LAB_004c85fb
    JMP 0x004c830d                      ; 004c8618
        ;   XREF to: 004c830d (UNCONDITIONAL_JUMP)  ; LAB_004c830d
    MOV EBP,0x9a80                      ; 004c861d
        ;   Label: LAB_004c861d
    MOV EAX,0xb100                      ; 004c8622
    MOV EDI,0x9000                      ; 004c8627
    MOV dword ptr [0x006220c8],EBP      ; 004c862c | DAT_006220c8
    MOV [0x006220cc],EAX                ; 004c8632 | DAT_006220cc
    MOV dword ptr [0x006220c4],EDI      ; 004c8637 | DAT_006220c4
    JMP 0x004c836f                      ; 004c863d
        ;   XREF to: 004c836f (UNCONDITIONAL_JUMP)  ; LAB_004c836f
    XOR EDX,EDX                         ; 004c8642
        ;   Label: LAB_004c8642
    MOV dword ptr [0x006220c8],EDX      ; 004c8644 | DAT_006220c8
    MOV dword ptr [0x006220cc],EDX      ; 004c864a | DAT_006220cc
    MOV dword ptr [0x006220c4],EDX      ; 004c8650 | DAT_006220c4
    JMP 0x004c836f                      ; 004c8656
        ;   XREF to: 004c836f (UNCONDITIONAL_JUMP)  ; LAB_004c836f
    JBE 0x004c861d                      ; 004c865b
        ;   XREF to: 004c861d (CONDITIONAL_JUMP)  ; LAB_004c861d
        ;   Label: LAB_004c865b
    CMP EBX,0x2                         ; 004c865d
    JZ 0x004c8642                       ; 004c8660
        ;   XREF to: 004c8642 (CONDITIONAL_JUMP)  ; LAB_004c8642
    JMP 0x004c8355                      ; 004c8662
        ;   XREF to: 004c8355 (UNCONDITIONAL_JUMP)  ; LAB_004c8355
    MOV EBX,dword ptr [0x0060b280]      ; 004c8667 | DAT_0060b280
        ;   Label: LAB_004c8667
    PUSH EBX                            ; 004c866d | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 004c866e
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004c8673
    ADD ESP,0x8c                        ; 004c8676
    POP EBP                             ; 004c867c
    POP EDI                             ; 004c867d
    POP ESI                             ; 004c867e
    POP EBX                             ; 004c867f
    RET                                 ; 004c8680

