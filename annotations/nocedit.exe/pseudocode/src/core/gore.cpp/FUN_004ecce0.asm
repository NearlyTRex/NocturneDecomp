; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gore.cpp_FUN_004ecce0()
;
; Local Variables:
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
;   core_gore.cpp_FUN_004ed830 at 004ed8ca
;
; Referenced Globals:
;   double DOUBLE_0062e38a = 8
;   undefined4 DAT_0065f024
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   SMRGLTextureBasic DAT_0067c028
;   undefined4 g_RenderVertexBuffer[0].light
;   undefined4 g_RenderVertexBuffer[0].color
;   undefined4 g_RenderVertexBuffer[0].fog
;   undefined4 g_RenderVertexBuffer[1].light
;   undefined4 g_RenderVertexBuffer[1].color
;   undefined4 g_RenderVertexBuffer[1].fog
;   undefined4 g_RenderVertexBuffer[2].light
;   undefined4 g_RenderVertexBuffer[2].color
;   undefined4 g_RenderVertexBuffer[2].fog
;   undefined4 g_RenderVertexBuffer[3].light
;   undefined4 g_RenderVertexBuffer[3].color
;   ... and 3 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecce0
        ;   Label: core_gore.cpp_FUN_004ecce0
    PUSH ESI                            ; 004ecce1
    PUSH EDI                            ; 004ecce2
    PUSH EBP                            ; 004ecce3
    SUB ESP,0x40                        ; 004ecce4
    MOV ESI,dword ptr [ESP + 0x54]      ; 004ecce7
    FLD float ptr [ESI + 0x18]          ; 004ecceb
    FMUL double ptr [0x0062e38a]        ; 004eccee | DOUBLE_0062e38a
    CALL crt_math.c_round_FUN_005fe6b0  ; 004eccf4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x3c]        ; 004eccf9
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004eccfd
    TEST EDX,EDX                        ; 004ecd01
    JL 0x004ecf9f                       ; 004ecd03
        ;   XREF to: 004ecf9f (CONDITIONAL_JUMP)  ; LAB_004ecf9f
    CMP EDX,0x1c                        ; 004ecd09
    JLE 0x004ecd25                      ; 004ecd0c
        ;   XREF to: 004ecd25 (CONDITIONAL_JUMP)  ; LAB_004ecd25
    MOV EBX,0x1c                        ; 004ecd0e
    MOV EDI,dword ptr [ESP + 0x58]      ; 004ecd13
    MOV dword ptr [ESP + 0x3c],EBX      ; 004ecd17
    TEST EDI,EDI                        ; 004ecd1b
    JZ 0x004ecd25                       ; 004ecd1d
        ;   XREF to: 004ecd25 (CONDITIONAL_JUMP)  ; LAB_004ecd25
    MOV dword ptr [ESI],0x1             ; 004ecd1f
    LEA EAX,[ESI + 0x4]                 ; 004ecd25
        ;   Label: LAB_004ecd25
    PUSH EAX                            ; 004ecd28
    MOV EAX,[0x006703ec]                ; 004ecd29 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EAX                            ; 004ecd2e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004ecd2f
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    IMUL EAX,dword ptr [ESI + 0x14],0x2b8 ; 004ecd34
    ADD ESP,0x8                         ; 004ecd3b
    MOV EBX,0x67c028                    ; 004ecd3e | DAT_0067c028
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ecd43
    ADD EBX,EAX                         ; 004ecd47
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ecd49
    SUB EAX,EDX                         ; 004ecd50
    SHL EAX,0x3                         ; 004ecd52
    ADD EAX,EBX                         ; 004ecd55
    PUSH EAX                            ; 004ecd57
    MOV ECX,dword ptr [0x006703ec]      ; 004ecd58 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH ECX                            ; 004ecd5e | g_CDemonRendererInstance
    XOR EDI,EDI                         ; 004ecd5f
    MOV EBX,0xbfaa9fbe                  ; 004ecd61
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004ecd66
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EBP,EBX                         ; 004ecd6b
    LEA EAX,[ESP + 0x20]                ; 004ecd6d
    ADD ESP,0x8                         ; 004ecd71
    MOV EDX,dword ptr [0x006703ec]      ; 004ecd74 | g_CDemonRendererInstance | g_CDemonRendererPtr
    MOV dword ptr [ESP + 0x18],EBX      ; 004ecd7a
    MOV dword ptr [ESP + 0x20],EBX      ; 004ecd7e
    LEA EBX,[ESP + 0x30]                ; 004ecd82
    MOV dword ptr [ESP + 0x1c],EDI      ; 004ecd86
    FLD float ptr [EAX]                 ; 004ecd8a
    FMUL float ptr [0x0065f024]         ; 004ecd8c | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ecd92
    FLD float ptr [EAX + 0x4]           ; 004ecd94
    FMUL float ptr [0x0065f024]         ; 004ecd97 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ecd9d
    FLD float ptr [EAX + 0x8]           ; 004ecda0
    FMUL float ptr [0x0065f024]         ; 004ecda3 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ecda9
    LEA EAX,[ESP + 0x30]                ; 004ecdac
    PUSH EAX                            ; 004ecdb0
    MOV EAX,dword ptr [EDX]             ; 004ecdb1 | g_CDemonRendererInstance
    PUSH EAX                            ; 004ecdb3
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ecdb4
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3faa9fbe                  ; 004ecdb9
    LEA EBX,[ESP + 0x14]                ; 004ecdbe
    MOV EDX,dword ptr [0x006703ec]      ; 004ecdc2 | g_CDemonRendererInstance | g_CDemonRendererPtr
    ADD ESP,0x8                         ; 004ecdc8
    MOV ECX,EBP                         ; 004ecdcb
    MOV dword ptr [ESP + 0x18],EAX      ; 004ecdcd
    MOV dword ptr [ESP + 0x1c],EDI      ; 004ecdd1
    LEA EAX,[ESP + 0x18]                ; 004ecdd5
    MOV dword ptr [ESP + 0x20],ECX      ; 004ecdd9
    FLD float ptr [EAX]                 ; 004ecddd
    FMUL float ptr [0x0065f024]         ; 004ecddf | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ecde5
    FLD float ptr [EAX + 0x4]           ; 004ecde7
    FMUL float ptr [0x0065f024]         ; 004ecdea | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ecdf0
    FLD float ptr [EAX + 0x8]           ; 004ecdf3
    FMUL float ptr [0x0065f024]         ; 004ecdf6 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ecdfc
    LEA EAX,[ESP + 0xc]                 ; 004ecdff
    PUSH EAX                            ; 004ece03
    MOV EAX,dword ptr [EDX]             ; 004ece04 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004ece06
    PUSH EAX                            ; 004ece09
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ece0a
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3faa9fbe                  ; 004ece0f
    LEA EAX,[ESP + 0x20]                ; 004ece14
    ADD ESP,0x8                         ; 004ece18
    MOV EDX,dword ptr [0x006703ec]      ; 004ece1b | g_CDemonRendererInstance | g_CDemonRendererPtr
    MOV dword ptr [ESP + 0x18],EBX      ; 004ece21
    MOV EBP,EBX                         ; 004ece25
    MOV dword ptr [ESP + 0x20],EBX      ; 004ece27
    LEA EBX,[ESP + 0x24]                ; 004ece2b
    MOV dword ptr [ESP + 0x1c],EDI      ; 004ece2f
    FLD float ptr [EAX]                 ; 004ece33
    FMUL float ptr [0x0065f024]         ; 004ece35 | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ece3b
    FLD float ptr [EAX + 0x4]           ; 004ece3d
    FMUL float ptr [0x0065f024]         ; 004ece40 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ece46
    FLD float ptr [EAX + 0x8]           ; 004ece49
    FMUL float ptr [0x0065f024]         ; 004ece4c | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ece52
    LEA EAX,[ESP + 0x24]                ; 004ece55
    PUSH EAX                            ; 004ece59
    MOV EAX,dword ptr [EDX]             ; 004ece5a | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004ece5c
    PUSH EAX                            ; 004ece5f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ece60
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0xbfaa9fbe                  ; 004ece65
    LEA EBX,[ESP + 0x8]                 ; 004ece6a
    MOV EDX,dword ptr [0x006703ec]      ; 004ece6e | g_CDemonRendererInstance | g_CDemonRendererPtr
    ADD ESP,0x8                         ; 004ece74
    MOV ECX,EBP                         ; 004ece77
    MOV dword ptr [ESP + 0x18],EAX      ; 004ece79
    MOV dword ptr [ESP + 0x1c],EDI      ; 004ece7d
    LEA EAX,[ESP + 0x18]                ; 004ece81
    MOV dword ptr [ESP + 0x20],ECX      ; 004ece85
    FLD float ptr [EAX]                 ; 004ece89
    FMUL float ptr [0x0065f024]         ; 004ece8b | DAT_0065f024
    FISTP dword ptr [EBX]               ; 004ece91
    FLD float ptr [EAX + 0x4]           ; 004ece93
    FMUL float ptr [0x0065f024]         ; 004ece96 | DAT_0065f024
    FISTP dword ptr [EBX + 0x4]         ; 004ece9c
    FLD float ptr [EAX + 0x8]           ; 004ece9f
    FMUL float ptr [0x0065f024]         ; 004ecea2 | DAT_0065f024
    FISTP dword ptr [EBX + 0x8]         ; 004ecea8
    MOV EAX,ESP                         ; 004eceab
    PUSH EAX                            ; 004ecead
    MOV EAX,dword ptr [EDX]             ; 004eceae | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004eceb0
    PUSH EAX                            ; 004eceb5
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004eceb6
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x688034                    ; 004ecebb | g_RenderVertexBuffer[0].light
    MOV ECX,0x688038                    ; 004ecec0 | g_RenderVertexBuffer[0].color
    MOV EDX,0x68803c                    ; 004ecec5 | g_RenderVertexBuffer[0].fog
    MOV EAX,dword ptr [ESI + 0x10]      ; 004ececa
    ADD ESP,0x8                         ; 004ececd
    CMP EAX,0x1                         ; 004eced0
    JNC 0x004ecfdd                      ; 004eced3
        ;   XREF to: 004ecfdd (CONDITIONAL_JUMP)  ; LAB_004ecfdd
    MOV dword ptr [EBX],0x2000          ; 004eced9 | g_RenderVertexBuffer[0].light
        ;   Label: LAB_004eced9
    MOV dword ptr [ECX],0x0             ; 004ecedf | g_RenderVertexBuffer[0].color
    MOV dword ptr [EDX],0x0             ; 004ecee5 | g_RenderVertexBuffer[0].fog
    MOV EBX,0x688064                    ; 004eceeb | g_RenderVertexBuffer[1].light
        ;   Label: LAB_004eceeb
    MOV EDX,0x688068                    ; 004ecef0 | g_RenderVertexBuffer[1].color
    MOV EAX,dword ptr [ESI + 0x10]      ; 004ecef5
    MOV ECX,0x68806c                    ; 004ecef8 | g_RenderVertexBuffer[1].fog
    CMP EAX,0x1                         ; 004ecefd
    JNC 0x004ed01e                      ; 004ecf00
        ;   XREF to: 004ed01e (CONDITIONAL_JUMP)  ; LAB_004ed01e
    MOV dword ptr [EBX],0x2000          ; 004ecf06 | g_RenderVertexBuffer[1].light
        ;   Label: LAB_004ecf06
    MOV dword ptr [EDX],0x0             ; 004ecf0c | g_RenderVertexBuffer[1].color
    MOV dword ptr [ECX],0x0             ; 004ecf12 | g_RenderVertexBuffer[1].fog
    MOV ECX,0x688094                    ; 004ecf18 | g_RenderVertexBuffer[2].light
        ;   Label: LAB_004ecf18
    MOV EBX,0x688098                    ; 004ecf1d | g_RenderVertexBuffer[2].color
    MOV EAX,dword ptr [ESI + 0x10]      ; 004ecf22
    MOV EDX,0x68809c                    ; 004ecf25 | g_RenderVertexBuffer[2].fog
    CMP EAX,0x1                         ; 004ecf2a
    JNC 0x004ed05f                      ; 004ecf2d
        ;   XREF to: 004ed05f (CONDITIONAL_JUMP)  ; LAB_004ed05f
    MOV dword ptr [ECX],0x2000          ; 004ecf33 | g_RenderVertexBuffer[2].light
        ;   Label: LAB_004ecf33
    MOV dword ptr [EBX],0x0             ; 004ecf39 | g_RenderVertexBuffer[2].color
    MOV dword ptr [EDX],0x0             ; 004ecf3f | g_RenderVertexBuffer[2].fog
    MOV EDX,0x6880c4                    ; 004ecf45 | g_RenderVertexBuffer[3].light
        ;   Label: LAB_004ecf45
    MOV ECX,0x6880c8                    ; 004ecf4a | g_RenderVertexBuffer[3].color
    MOV EAX,dword ptr [ESI + 0x10]      ; 004ecf4f
    MOV EBX,0x6880cc                    ; 004ecf52 | g_RenderVertexBuffer[3].fog
    CMP EAX,0x1                         ; 004ecf57
    JC 0x004ed06b                       ; 004ecf5a
        ;   XREF to: 004ed06b (CONDITIONAL_JUMP)  ; LAB_004ed06b
    JBE 0x004ed082                      ; 004ecf60
        ;   XREF to: 004ed082 (CONDITIONAL_JUMP)  ; LAB_004ed082
    CMP EAX,0x2                         ; 004ecf66
    JNZ 0x004ed06b                      ; 004ecf69
        ;   XREF to: 004ed06b (CONDITIONAL_JUMP)  ; LAB_004ed06b
    XOR EBX,EBX                         ; 004ecf6f
    MOV dword ptr [0x006880c8],EBX      ; 004ecf71 | g_RenderVertexBuffer[3].color
    MOV dword ptr [0x006880cc],EBX      ; 004ecf77 | g_RenderVertexBuffer[3].fog
    MOV dword ptr [0x006880c4],EBX      ; 004ecf7d | g_RenderVertexBuffer[3].light
    PUSH 0x2d83368                      ; 004ecf83 | DAT_02d83368
        ;   Label: LAB_004ecf83
    MOV ECX,dword ptr [0x006703ec]      ; 004ecf88 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH ECX                            ; 004ecf8e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004ecf8f
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 004ecf94
    ADD ESP,0x40                        ; 004ecf97
    POP EBP                             ; 004ecf9a
    POP EDI                             ; 004ecf9b
    POP ESI                             ; 004ecf9c
    POP EBX                             ; 004ecf9d
    RET                                 ; 004ecf9e
    XOR EBP,EBP                         ; 004ecf9f
        ;   Label: LAB_004ecf9f
    MOV dword ptr [ESP + 0x3c],EBP      ; 004ecfa1
    JMP 0x004ecd25                      ; 004ecfa5
        ;   XREF to: 004ecd25 (UNCONDITIONAL_JUMP)  ; LAB_004ecd25
    MOV EDX,0x7f80                      ; 004ecfaa
        ;   Label: LAB_004ecfaa
    MOV dword ptr [0x0068803c],EDI      ; 004ecfaf | g_RenderVertexBuffer[0].fog
    MOV dword ptr [0x00688034],EDI      ; 004ecfb5 | g_RenderVertexBuffer[0].light
    MOV dword ptr [0x00688038],EDX      ; 004ecfbb | g_RenderVertexBuffer[0].color
    JMP 0x004eceeb                      ; 004ecfc1
        ;   XREF to: 004eceeb (UNCONDITIONAL_JUMP)  ; LAB_004eceeb
    MOV dword ptr [0x00688038],EDI      ; 004ecfc6 | g_RenderVertexBuffer[0].color
        ;   Label: LAB_004ecfc6
    MOV dword ptr [0x0068803c],EDI      ; 004ecfcc | g_RenderVertexBuffer[0].fog
    MOV dword ptr [0x00688034],EDI      ; 004ecfd2 | g_RenderVertexBuffer[0].light
    JMP 0x004eceeb                      ; 004ecfd8
        ;   XREF to: 004eceeb (UNCONDITIONAL_JUMP)  ; LAB_004eceeb
    JBE 0x004ecfaa                      ; 004ecfdd
        ;   XREF to: 004ecfaa (CONDITIONAL_JUMP)  ; LAB_004ecfaa
        ;   Label: LAB_004ecfdd
    CMP EAX,0x2                         ; 004ecfdf
    JZ 0x004ecfc6                       ; 004ecfe2
        ;   XREF to: 004ecfc6 (CONDITIONAL_JUMP)  ; LAB_004ecfc6
    JMP 0x004eced9                      ; 004ecfe4
        ;   XREF to: 004eced9 (UNCONDITIONAL_JUMP)  ; LAB_004eced9
    MOV EDX,0x7f80                      ; 004ecfe9
        ;   Label: LAB_004ecfe9
    XOR EAX,EAX                         ; 004ecfee
    MOV dword ptr [0x00688068],EDX      ; 004ecff0 | g_RenderVertexBuffer[1].color
    MOV [0x0068806c],EAX                ; 004ecff6 | g_RenderVertexBuffer[1].fog
    MOV [0x00688064],EAX                ; 004ecffb | g_RenderVertexBuffer[1].light
    JMP 0x004ecf18                      ; 004ed000
        ;   XREF to: 004ecf18 (UNCONDITIONAL_JUMP)  ; LAB_004ecf18
    XOR EBX,EBX                         ; 004ed005
        ;   Label: LAB_004ed005
    MOV dword ptr [0x00688068],EBX      ; 004ed007 | g_RenderVertexBuffer[1].color
    MOV dword ptr [0x0068806c],EBX      ; 004ed00d | g_RenderVertexBuffer[1].fog
    MOV dword ptr [0x00688064],EBX      ; 004ed013 | g_RenderVertexBuffer[1].light
    JMP 0x004ecf18                      ; 004ed019
        ;   XREF to: 004ecf18 (UNCONDITIONAL_JUMP)  ; LAB_004ecf18
    JBE 0x004ecfe9                      ; 004ed01e
        ;   XREF to: 004ecfe9 (CONDITIONAL_JUMP)  ; LAB_004ecfe9
        ;   Label: LAB_004ed01e
    CMP EAX,0x2                         ; 004ed020
    JZ 0x004ed005                       ; 004ed023
        ;   XREF to: 004ed005 (CONDITIONAL_JUMP)  ; LAB_004ed005
    JMP 0x004ecf06                      ; 004ed025
        ;   XREF to: 004ecf06 (UNCONDITIONAL_JUMP)  ; LAB_004ecf06
    MOV EDX,0x7f80                      ; 004ed02a
        ;   Label: LAB_004ed02a
    XOR EAX,EAX                         ; 004ed02f
    MOV dword ptr [0x00688098],EDX      ; 004ed031 | g_RenderVertexBuffer[2].color
    MOV [0x0068809c],EAX                ; 004ed037 | g_RenderVertexBuffer[2].fog
    MOV [0x00688094],EAX                ; 004ed03c | g_RenderVertexBuffer[2].light
    JMP 0x004ecf45                      ; 004ed041
        ;   XREF to: 004ecf45 (UNCONDITIONAL_JUMP)  ; LAB_004ecf45
    XOR EBX,EBX                         ; 004ed046
        ;   Label: LAB_004ed046
    MOV dword ptr [0x00688098],EBX      ; 004ed048 | g_RenderVertexBuffer[2].color
    MOV dword ptr [0x0068809c],EBX      ; 004ed04e | g_RenderVertexBuffer[2].fog
    MOV dword ptr [0x00688094],EBX      ; 004ed054 | g_RenderVertexBuffer[2].light
    JMP 0x004ecf45                      ; 004ed05a
        ;   XREF to: 004ecf45 (UNCONDITIONAL_JUMP)  ; LAB_004ecf45
    JBE 0x004ed02a                      ; 004ed05f
        ;   XREF to: 004ed02a (CONDITIONAL_JUMP)  ; LAB_004ed02a
        ;   Label: LAB_004ed05f
    CMP EAX,0x2                         ; 004ed061
    JZ 0x004ed046                       ; 004ed064
        ;   XREF to: 004ed046 (CONDITIONAL_JUMP)  ; LAB_004ed046
    JMP 0x004ecf33                      ; 004ed066
        ;   XREF to: 004ecf33 (UNCONDITIONAL_JUMP)  ; LAB_004ecf33
    MOV dword ptr [EDX],0x2000          ; 004ed06b | g_RenderVertexBuffer[3].light
        ;   Label: LAB_004ed06b
    MOV dword ptr [ECX],0x0             ; 004ed071 | g_RenderVertexBuffer[3].color
    MOV dword ptr [EBX],0x0             ; 004ed077 | g_RenderVertexBuffer[3].fog
    JMP 0x004ecf83                      ; 004ed07d
        ;   XREF to: 004ecf83 (UNCONDITIONAL_JUMP)  ; LAB_004ecf83
    MOV EAX,0x7f80                      ; 004ed082
        ;   Label: LAB_004ed082
    XOR EBP,EBP                         ; 004ed087
    MOV [0x006880c8],EAX                ; 004ed089 | g_RenderVertexBuffer[3].color
    MOV dword ptr [0x006880cc],EBP      ; 004ed08e | g_RenderVertexBuffer[3].fog
    MOV dword ptr [0x006880c4],EBP      ; 004ed094 | g_RenderVertexBuffer[3].light
    JMP 0x004ecf83                      ; 004ed09a
        ;   XREF to: 004ecf83 (UNCONDITIONAL_JUMP)  ; LAB_004ecf83

