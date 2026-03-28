; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_ptr
; Local Variables:
; int[1017]        Stack[-0x1018]:4068  aiStackY_1018
; int              Stack[-0x30]:4  iStack_30
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10 at 0044e265
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_004518f0 at 0045193e
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0 at 00450d16
;   core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0 at 00450890
;   core_game.cpp_CGame_beginFadeIn_FUN_004e0920 at 004e0883
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CVector3i g_CameraOutOfBoundsCoord
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d7d0
        ;   Label: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
    PUSH EDI                            ; 0044d7d1
    PUSH EBP                            ; 0044d7d2
    SUB ESP,0x24                        ; 0044d7d3
    MOV EDI,dword ptr [ESP + 0x38]      ; 0044d7d6
    MOV EBP,ESI                         ; 0044d7da
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044d7dc
    MOV EDX,dword ptr [0x006703ec]      ; 0044d7e0 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0044d7e6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00 ; 0044d7e7
        ;   XREF to: 0048ce00 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)
    MOV ECX,EAX                         ; 0044d7ec
    ADD ESP,0x4                         ; 0044d7ee
    TEST EAX,EAX                        ; 0044d7f1
    JNZ 0x0044d914                      ; 0044d7f3
        ;   XREF to: 0044d914 (CONDITIONAL_JUMP)  ; LAB_0044d914
    MOV EAX,dword ptr [EDI]             ; 0044d7f9
    SUB EAX,dword ptr [ESI + 0x16c]     ; 0044d7fb
    MOV EDX,dword ptr [ESI + 0x170]     ; 0044d801
    MOV dword ptr [ESP + 0xc],EAX       ; 0044d807
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044d80b
    SUB EAX,EDX                         ; 0044d80e
    MOV ECX,dword ptr [ESI + 0x174]     ; 0044d810
    MOV dword ptr [ESP + 0x10],EAX      ; 0044d816
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044d81a
    SUB EAX,ECX                         ; 0044d81d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044d81f
    MOV dword ptr [ESP + 0x14],EAX      ; 0044d823
    MOV EAX,dword ptr [ESI + 0x180]     ; 0044d827
    IMUL EDX                            ; 0044d82d
    SHRD EAX,EDX,0x10                   ; 0044d82f
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044d833
    MOV ECX,EAX                         ; 0044d837
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0044d839
    IMUL EDX                            ; 0044d83f
    SHRD EAX,EDX,0x10                   ; 0044d841
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d845
    ADD ECX,EAX                         ; 0044d849
    MOV EAX,dword ptr [ESI + 0x198]     ; 0044d84b
    IMUL EDX                            ; 0044d851
    SHRD EAX,EDX,0x10                   ; 0044d853
    ADD ECX,EAX                         ; 0044d857
    MOV dword ptr [ESP + 0x20],ECX      ; 0044d859
    TEST ECX,ECX                        ; 0044d85d
    JG 0x0044d87b                       ; 0044d85f
        ;   XREF to: 0044d87b (CONDITIONAL_JUMP)  ; LAB_0044d87b
    MOV EDI,ESP                         ; 0044d861
        ;   Label: LAB_0044d861
    MOV ESI,0x151bf98                   ; 0044d863 | g_CameraOutOfBoundsCoord
    JMP 0x0060a229                      ; 0044d868
        ;   XREF to: 0060a229 (UNCONDITIONAL_JUMP)  ; LAB_0060a229
    MOV EDI,EBP                         ; 0044d86d
        ;   Label: LAB_0044d86d
    JMP 0x0060a246                      ; 0044d86f
        ;   XREF to: 0060a246 (UNCONDITIONAL_JUMP)  ; LAB_0060a246
    ADD ESP,0x24                        ; 0044d874
        ;   Label: LAB_0044d874
    POP EBP                             ; 0044d877
    POP EDI                             ; 0044d878
    POP EBX                             ; 0044d879
    RET                                 ; 0044d87a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044d87b
        ;   Label: LAB_0044d87b
    MOV EAX,dword ptr [ESI + 0x178]     ; 0044d87f
    IMUL EDX                            ; 0044d885
    SHRD EAX,EDX,0x10                   ; 0044d887
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044d88b
    MOV ECX,EAX                         ; 0044d88f
    MOV EAX,dword ptr [ESI + 0x184]     ; 0044d891
    IMUL EDX                            ; 0044d897
    SHRD EAX,EDX,0x10                   ; 0044d899
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d89d
    ADD ECX,EAX                         ; 0044d8a1
    MOV EAX,dword ptr [ESI + 0x190]     ; 0044d8a3
    IMUL EDX                            ; 0044d8a9
    SHRD EAX,EDX,0x10                   ; 0044d8ab
    ADD ECX,EAX                         ; 0044d8af
    MOV EDI,dword ptr [ESP + 0x20]      ; 0044d8b1
    MOV dword ptr [ESP + 0x18],ECX      ; 0044d8b5
    CMP ECX,EDI                         ; 0044d8b9
    JGE 0x0044d861                      ; 0044d8bb
        ;   XREF to: 0044d861 (CONDITIONAL_JUMP)  ; LAB_0044d861
    MOV EBX,EDI                         ; 0044d8bd
    NEG EBX                             ; 0044d8bf
    CMP EBX,ECX                         ; 0044d8c1
    JGE 0x0044d861                      ; 0044d8c3
        ;   XREF to: 0044d861 (CONDITIONAL_JUMP)  ; LAB_0044d861
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044d8c5
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0044d8c9
    IMUL EDX                            ; 0044d8cf
    SHRD EAX,EDX,0x10                   ; 0044d8d1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044d8d5
    MOV ECX,EAX                         ; 0044d8d9
    MOV EAX,dword ptr [ESI + 0x188]     ; 0044d8db
    IMUL EDX                            ; 0044d8e1
    SHRD EAX,EDX,0x10                   ; 0044d8e3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d8e7
    ADD ECX,EAX                         ; 0044d8eb
    MOV EAX,dword ptr [ESI + 0x194]     ; 0044d8ed
    IMUL EDX                            ; 0044d8f3
    SHRD EAX,EDX,0x10                   ; 0044d8f5
    ADD ECX,EAX                         ; 0044d8f9
    MOV dword ptr [ESP + 0x1c],ECX      ; 0044d8fb
    CMP ECX,EDI                         ; 0044d8ff
    JGE 0x0044d861                      ; 0044d901
        ;   XREF to: 0044d861 (CONDITIONAL_JUMP)  ; LAB_0044d861
    CMP EBX,ECX                         ; 0044d907
    JL 0x0044da32                       ; 0044d909
        ;   XREF to: 0044da32 (CONDITIONAL_JUMP)  ; LAB_0044da32
    JMP 0x0044d861                      ; 0044d90f
        ;   XREF to: 0044d861 (UNCONDITIONAL_JUMP)  ; LAB_0044d861
    SHL EAX,0x2                         ; 0044d914
        ;   Label: LAB_0044d914
    SUB EAX,ECX                         ; 0044d917
    SHL EAX,0x2                         ; 0044d919
    LEA EDX,[ESI + EAX*0x1]             ; 0044d91c
    MOV EAX,dword ptr [EDI]             ; 0044d91f
    MOV EBX,dword ptr [EDX + 0x11ec]    ; 0044d921
    SUB EAX,EBX                         ; 0044d927
    MOV dword ptr [ESP + 0xc],EAX       ; 0044d929
    MOV EBX,dword ptr [EDX + 0x11f0]    ; 0044d92d
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044d933
    SUB EAX,EBX                         ; 0044d936
    SHL ECX,0x2                         ; 0044d938
    MOV dword ptr [ESP + 0x10],EAX      ; 0044d93b
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044d93f
    MOV EDI,dword ptr [EDX + 0x11f4]    ; 0044d942
    ADD ECX,ESI                         ; 0044d948
    SUB EAX,EDI                         ; 0044d94a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044d94c
    MOV dword ptr [ESP + 0x14],EAX      ; 0044d950
    MOV EAX,dword ptr [ECX + 0x128c]    ; 0044d954
    IMUL EDX                            ; 0044d95a
    SHRD EAX,EDX,0x10                   ; 0044d95c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044d960
    MOV EDI,EAX                         ; 0044d964
    MOV EAX,dword ptr [ECX + 0x12ec]    ; 0044d966
    IMUL EDX                            ; 0044d96c
    SHRD EAX,EDX,0x10                   ; 0044d96e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d972
    ADD EDI,EAX                         ; 0044d976
    MOV EAX,dword ptr [ECX + 0x134c]    ; 0044d978
    IMUL EDX                            ; 0044d97e
    SHRD EAX,EDX,0x10                   ; 0044d980
    ADD EDI,EAX                         ; 0044d984
    MOV dword ptr [ESP + 0x20],EDI      ; 0044d986
    TEST EDI,EDI                        ; 0044d98a
    JLE 0x0044d861                      ; 0044d98c
        ;   XREF to: 0044d861 (CONDITIONAL_JUMP)  ; LAB_0044d861
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044d992
    MOV EAX,dword ptr [ECX + 0x124c]    ; 0044d996
    IMUL EDX                            ; 0044d99c
    SHRD EAX,EDX,0x10                   ; 0044d99e
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044d9a2
    MOV EDI,EAX                         ; 0044d9a6
    MOV EAX,dword ptr [ECX + 0x12ac]    ; 0044d9a8
    IMUL EDX                            ; 0044d9ae
    SHRD EAX,EDX,0x10                   ; 0044d9b0
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d9b4
    ADD EDI,EAX                         ; 0044d9b8
    MOV EAX,dword ptr [ECX + 0x130c]    ; 0044d9ba
    IMUL EDX                            ; 0044d9c0
    SHRD EAX,EDX,0x10                   ; 0044d9c2
    ADD EDI,EAX                         ; 0044d9c6
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044d9c8
    MOV dword ptr [ESP + 0x18],EDI      ; 0044d9cc
    CMP EDI,EDX                         ; 0044d9d0
    JGE 0x0044d861                      ; 0044d9d2
        ;   XREF to: 0044d861 (CONDITIONAL_JUMP)  ; LAB_0044d861
    MOV EBX,EDX                         ; 0044d9d8
    NEG EBX                             ; 0044d9da
    CMP EBX,EDI                         ; 0044d9dc
    JGE 0x0044d861                      ; 0044d9de
        ;   XREF to: 0044d861 (CONDITIONAL_JUMP)  ; LAB_0044d861
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044d9e4
    MOV EAX,dword ptr [ECX + 0x126c]    ; 0044d9e8
    IMUL EDX                            ; 0044d9ee
    SHRD EAX,EDX,0x10                   ; 0044d9f0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044d9f4
    MOV EDI,EAX                         ; 0044d9f8
    MOV EAX,dword ptr [ECX + 0x12cc]    ; 0044d9fa
    IMUL EDX                            ; 0044da00
    SHRD EAX,EDX,0x10                   ; 0044da02
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044da06
    ADD EDI,EAX                         ; 0044da0a
    MOV EAX,dword ptr [ECX + 0x132c]    ; 0044da0c
    IMUL EDX                            ; 0044da12
    SHRD EAX,EDX,0x10                   ; 0044da14
    ADD EDI,EAX                         ; 0044da18
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044da1a
    MOV dword ptr [ESP + 0x1c],EDI      ; 0044da1e
    CMP EDI,EDX                         ; 0044da22
    JGE 0x0044d861                      ; 0044da24
        ;   XREF to: 0044d861 (CONDITIONAL_JUMP)  ; LAB_0044d861
    CMP EBX,EDI                         ; 0044da2a
    JGE 0x0044d861                      ; 0044da2c
        ;   XREF to: 0044d861 (CONDITIONAL_JUMP)  ; LAB_0044d861
    MOV EBX,dword ptr [ESP + 0x20]      ; 0044da32
        ;   Label: LAB_0044da32
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044da36
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0044da3a
    IMUL EDX                            ; 0044da40
    IDIV EBX                            ; 0044da42
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0044da44
    MOV EBX,dword ptr [ESP + 0x20]      ; 0044da4a
    ADD EDX,EAX                         ; 0044da4e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044da50
    MOV dword ptr [ESP + 0x18],EDX      ; 0044da54
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0044da58
    IMUL EDX                            ; 0044da5e
    IDIV EBX                            ; 0044da60
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0044da62
    MOV EDI,ESP                         ; 0044da68
    ADD EDX,EAX                         ; 0044da6a
    LEA ESI,[ESP + 0x18]                ; 0044da6c
    MOV dword ptr [ESP + 0x1c],EDX      ; 0044da70
    JMP 0x0060a263                      ; 0044da74
        ;   XREF to: 0060a263 (UNCONDITIONAL_JUMP)  ; LAB_0060a263
    MOV EDI,EBP                         ; 0044da79
        ;   Label: LAB_0044da79
    JMP 0x0060a280                      ; 0044da7b
        ;   XREF to: 0060a280 (UNCONDITIONAL_JUMP)  ; LAB_0060a280
    ADD ESP,0x24                        ; 0044da80
        ;   Label: LAB_0044da80
    POP EBP                             ; 0044da83
    POP EDI                             ; 0044da84
    POP EBX                             ; 0044da85
    RET                                 ; 0044da86
    MOV ECX,dword ptr [ESI]             ; 0060a229
        ;   Label: LAB_0060a229
    MOV dword ptr [EDI],ECX             ; 0060a22b
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a22d
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a230
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a233
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a236
    ADD ESI,0xc                         ; 0060a239
    ADD EDI,0xc                         ; 0060a23c
        ;   Label: SUB_0060a23c
    MOV ESI,ESP                         ; 0060a23f
    JMP 0x0044d86d                      ; 0060a241
        ;   XREF to: 0044d86d (UNCONDITIONAL_JUMP)  ; LAB_0044d86d
    MOV ECX,dword ptr [ESI]             ; 0060a246
        ;   Label: LAB_0060a246
    MOV dword ptr [EDI],ECX             ; 0060a248
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a24a
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a24d
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a250
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a253
    ADD ESI,0xc                         ; 0060a256
    ADD EDI,0xc                         ; 0060a259
    MOV EAX,EBP                         ; 0060a25c
    JMP 0x0044d874                      ; 0060a25e
        ;   XREF to: 0044d874 (UNCONDITIONAL_JUMP)  ; LAB_0044d874
    MOV ECX,dword ptr [ESI]             ; 0060a263
        ;   Label: LAB_0060a263
    MOV dword ptr [EDI],ECX             ; 0060a265
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a267
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a26a
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a26d
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a270
    ADD ESI,0xc                         ; 0060a273
    ADD EDI,0xc                         ; 0060a276
    MOV ESI,ESP                         ; 0060a279
    JMP 0x0044da79                      ; 0060a27b
        ;   XREF to: 0044da79 (UNCONDITIONAL_JUMP)  ; LAB_0044da79
    MOV ECX,dword ptr [ESI]             ; 0060a280
        ;   Label: LAB_0060a280
    MOV dword ptr [EDI],ECX             ; 0060a282
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060a284
    MOV dword ptr [EDI + 0x4],ECX       ; 0060a287
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060a28a
    MOV dword ptr [EDI + 0x8],ECX       ; 0060a28d
    ADD ESI,0xc                         ; 0060a290
    ADD EDI,0xc                         ; 0060a293
    MOV EAX,EBP                         ; 0060a296
    JMP 0x0044da80                      ; 0060a298
        ;   XREF to: 0044da80 (UNCONDITIONAL_JUMP)  ; LAB_0044da80

