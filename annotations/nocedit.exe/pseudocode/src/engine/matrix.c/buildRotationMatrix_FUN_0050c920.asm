; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_buildRotationMatrix_FUN_0050c920(int pitch, int yaw, int roll)
;
; Parameters:
; int              Stack[0x4]:4   pitch
; int              Stack[0x8]:4   yaw
; int              Stack[0xc]:4   roll
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   engine_matrix.c_setCameraRotation_FUN_0050e290 at 0050e2b0
;   shape_design.c_setupViewMatrix_FUN_0045ba60 at 0045bb54
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_ProjectionScale = 0x10000
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   undefined4 g_TransformMatrix[1][2]
;   ... and 4 more
;
; Called Functions:
;   engine_matrix.c_interpolatedCos_FUN_0050c600
;   engine_matrix.c_interpolatedSin_FUN_0050c5c0
;   engine_matrix.c_invertTransformMatrix_FUN_0050c640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c920
        ;   Label: engine_matrix.c_buildRotationMatrix_FUN_0050c920
    PUSH ESI                            ; 0050c921
    PUSH EBP                            ; 0050c922
    SUB ESP,0x8                         ; 0050c923
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050c926
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050c92a
    PUSH EDI                            ; 0050c92e
    PUSH EBX                            ; 0050c92f
    CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0 ; 0050c930
        ;   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
    ADD ESP,0x4                         ; 0050c935
    PUSH EBX                            ; 0050c938
    MOV EBP,EAX                         ; 0050c939
    CALL engine_matrix.c_interpolatedCos_FUN_0050c600 ; 0050c93b
        ;   XREF to: 0050c600 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)
    MOV dword ptr [ESP + 0xc],EAX       ; 0050c940
    ADD ESP,0x4                         ; 0050c944
    PUSH ESI                            ; 0050c947
    CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0 ; 0050c948
        ;   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
    ADD ESP,0x4                         ; 0050c94d
    PUSH ESI                            ; 0050c950
    MOV EBX,EAX                         ; 0050c951
    CALL engine_matrix.c_interpolatedCos_FUN_0050c600 ; 0050c953
        ;   XREF to: 0050c600 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)
    ADD ESP,0x4                         ; 0050c958
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050c95b
    PUSH EDX                            ; 0050c95f
    MOV ESI,EAX                         ; 0050c960
    CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0 ; 0050c962
        ;   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
    ADD ESP,0x4                         ; 0050c967
    MOV ECX,dword ptr [ESP + 0x24]      ; 0050c96a
    PUSH ECX                            ; 0050c96e
    MOV EDI,EAX                         ; 0050c96f
    CALL engine_matrix.c_interpolatedCos_FUN_0050c600 ; 0050c971
        ;   XREF to: 0050c600 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)
    MOV ECX,EAX                         ; 0050c976
    ADD ESP,0x4                         ; 0050c978
    MOV EAX,ESI                         ; 0050c97b
    MOV EDX,ECX                         ; 0050c97d
    IMUL EDX                            ; 0050c97f
    SHRD EAX,EDX,0x10                   ; 0050c981
    MOV dword ptr [ESP + 0x4],EAX       ; 0050c985
    MOV EDX,EBP                         ; 0050c989
    MOV EAX,EBX                         ; 0050c98b
    IMUL EDX                            ; 0050c98d
    SHRD EAX,EDX,0x10                   ; 0050c98f
    MOV EDX,EDI                         ; 0050c993
    IMUL EDX                            ; 0050c995
    SHRD EAX,EDX,0x10                   ; 0050c997
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050c99b
    ADD EDX,EAX                         ; 0050c99f
    MOV dword ptr [0x02d052e8],EDX      ; 0050c9a1 | g_TransformMatrix
    MOV EDX,ECX                         ; 0050c9a7
    MOV EAX,EBX                         ; 0050c9a9
    NEG EDX                             ; 0050c9ab
    IMUL EDX                            ; 0050c9ad
    SHRD EAX,EDX,0x10                   ; 0050c9af
    MOV dword ptr [ESP + 0x4],EAX       ; 0050c9b3
    MOV EDX,EBP                         ; 0050c9b7
    MOV EAX,ESI                         ; 0050c9b9
    IMUL EDX                            ; 0050c9bb
    SHRD EAX,EDX,0x10                   ; 0050c9bd
    MOV EDX,EDI                         ; 0050c9c1
    IMUL EDX                            ; 0050c9c3
    SHRD EAX,EDX,0x10                   ; 0050c9c5
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050c9c9
    ADD EDX,EAX                         ; 0050c9cd
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050c9cf
    MOV dword ptr [0x02d052ec],EDX      ; 0050c9d3 | g_TransformMatrix[0][1]
    MOV EDX,EDI                         ; 0050c9d9
    IMUL EDX                            ; 0050c9db
    SHRD EAX,EDX,0x10                   ; 0050c9dd
    MOV [0x02d052f0],EAX                ; 0050c9e1 | g_TransformMatrix[0][2]
    MOV EDX,EBX                         ; 0050c9e6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050c9e8
    IMUL EDX                            ; 0050c9ec
    SHRD EAX,EDX,0x10                   ; 0050c9ee
    MOV [0x02d052f4],EAX                ; 0050c9f2 | g_TransformMatrix[1][0]
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050c9f7
    MOV EDX,ESI                         ; 0050c9fb
    IMUL EDX                            ; 0050c9fd
    SHRD EAX,EDX,0x10                   ; 0050c9ff
    MOV [0x02d052f8],EAX                ; 0050ca03 | g_TransformMatrix[1][1]
    MOV dword ptr [0x02d052fc],EBP      ; 0050ca08 | g_TransformMatrix[1][2]
    MOV EAX,EBP                         ; 0050ca0e
    MOV EDX,EDI                         ; 0050ca10
    NEG EAX                             ; 0050ca12
    NEG EDX                             ; 0050ca14
    MOV [0x02d052fc],EAX                ; 0050ca16 | g_TransformMatrix[1][2]
    MOV EAX,ESI                         ; 0050ca1b
    IMUL EDX                            ; 0050ca1d
    SHRD EAX,EDX,0x10                   ; 0050ca1f
    MOV dword ptr [ESP + 0x4],EAX       ; 0050ca23
    MOV EDX,EBP                         ; 0050ca27
    MOV EAX,EBX                         ; 0050ca29
    IMUL EDX                            ; 0050ca2b
    SHRD EAX,EDX,0x10                   ; 0050ca2d
    MOV EDX,ECX                         ; 0050ca31
    IMUL EDX                            ; 0050ca33
    SHRD EAX,EDX,0x10                   ; 0050ca35
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050ca39
    ADD EDX,EAX                         ; 0050ca3d
    MOV dword ptr [0x02d05300],EDX      ; 0050ca3f | g_TransformMatrix[2][0]
    MOV EAX,EDI                         ; 0050ca45
    MOV EDX,EBX                         ; 0050ca47
    IMUL EDX                            ; 0050ca49
    SHRD EAX,EDX,0x10                   ; 0050ca4b
    MOV EBX,EAX                         ; 0050ca4f
    MOV EDX,EBP                         ; 0050ca51
    MOV EAX,ESI                         ; 0050ca53
    IMUL EDX                            ; 0050ca55
    SHRD EAX,EDX,0x10                   ; 0050ca57
    MOV EDX,ECX                         ; 0050ca5b
    IMUL EDX                            ; 0050ca5d
    SHRD EAX,EDX,0x10                   ; 0050ca5f
    MOV EDX,ECX                         ; 0050ca63
    ADD EBX,EAX                         ; 0050ca65
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050ca67
    MOV dword ptr [0x02d05304],EBX      ; 0050ca6b | g_TransformMatrix[2][1]
    IMUL EDX                            ; 0050ca71
    SHRD EAX,EDX,0x10                   ; 0050ca73
    MOV [0x02d05308],EAX                ; 0050ca77 | g_TransformMatrix[2][2]
    MOV EAX,[0x00679398]                ; 0050ca7c | g_WindowHeight
    CMP EAX,0xc8                        ; 0050ca81
    JC 0x0050cc26                       ; 0050ca86
        ;   XREF to: 0050cc26 (CONDITIONAL_JUMP)  ; LAB_0050cc26
    JA 0x0050cc1f                       ; 0050ca8c
        ;   XREF to: 0050cc1f (CONDITIONAL_JUMP)  ; LAB_0050cc1f
    MOV dword ptr [0x02f0d3bc],0x15555  ; 0050ca92 | g_PixelAspectCorrection
    MOV EAX,0x10000                     ; 0050ca9c
        ;   Label: LAB_0050ca9c
    MOV EBX,dword ptr [0x02d02548]      ; 0050caa1 | g_ViewportCenterXFixed
    MOV EDX,dword ptr [0x02d0254c]      ; 0050caa7 | g_ViewportCenterYFixed
    IMUL EDX                            ; 0050caad
    IDIV EBX                            ; 0050caaf
    MOV ECX,EAX                         ; 0050cab1
    MOV EDX,dword ptr [0x00679394]      ; 0050cab3 | g_WindowWidth
    NEG ECX                             ; 0050cab9
    IMUL EDX,ECX                        ; 0050cabb
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050cabe
    SUB EAX,EDX                         ; 0050cac5
    MOV ECX,dword ptr [0x00679398]      ; 0050cac7 | g_WindowHeight
    MOV EDX,EAX                         ; 0050cacd
    SHL ECX,0x2                         ; 0050cacf
    SAR EDX,0x1f                        ; 0050cad2
    IDIV ECX                            ; 0050cad5
    MOV EDX,dword ptr [0x02d052e8]      ; 0050cad7 | g_TransformMatrix
    MOV ECX,EAX                         ; 0050cadd
    IMUL EDX                            ; 0050cadf
    SHRD EAX,EDX,0x10                   ; 0050cae1
    MOV EDX,dword ptr [0x02d052f4]      ; 0050cae5 | g_TransformMatrix[1][0]
    MOV [0x02d052e8],EAX                ; 0050caeb | g_TransformMatrix
    MOV EAX,ECX                         ; 0050caf0
    IMUL EDX                            ; 0050caf2
    SHRD EAX,EDX,0x10                   ; 0050caf4
    MOV EDX,dword ptr [0x02d05300]      ; 0050caf8 | g_TransformMatrix[2][0]
    MOV [0x02d052f4],EAX                ; 0050cafe | g_TransformMatrix[1][0]
    MOV EAX,ECX                         ; 0050cb03
    IMUL EDX                            ; 0050cb05
    SHRD EAX,EDX,0x10                   ; 0050cb07
    MOV ESI,dword ptr [0x02d02558]      ; 0050cb0b | g_ClipLeft
    MOV [0x02d05300],EAX                ; 0050cb11 | g_TransformMatrix[2][0]
    MOV EAX,[0x02d02560]                ; 0050cb16 | g_ClipRight
    SUB EAX,ESI                         ; 0050cb1b
    LEA EDX,[EAX*0x4 + 0x0]             ; 0050cb1d
    ADD EDX,EAX                         ; 0050cb24
    SHL EDX,0x7                         ; 0050cb26
    MOV EDI,dword ptr [0x00679394]      ; 0050cb29 | g_WindowWidth
    MOV EAX,EDX                         ; 0050cb2f
    SAR EDX,0x1f                        ; 0050cb31
    IDIV EDI                            ; 0050cb34
    MOV ECX,dword ptr [0x02d02564]      ; 0050cb36 | g_ClipBottom
    SUB ECX,dword ptr [0x02d0255c]      ; 0050cb3c | g_ClipTop
    SHL ECX,0x5                         ; 0050cb42
    MOV EDX,ECX                         ; 0050cb45
    LEA EBX,[EAX*0x4 + 0x0]             ; 0050cb47
    SHL EDX,0x4                         ; 0050cb4e
    SUB EBX,EAX                         ; 0050cb51
    SUB EDX,ECX                         ; 0050cb53
    MOV ECX,dword ptr [0x00679398]      ; 0050cb55 | g_WindowHeight
    MOV EAX,EDX                         ; 0050cb5b
    SAR EDX,0x1f                        ; 0050cb5d
    IDIV ECX                            ; 0050cb60
    SHL EBX,0x10                        ; 0050cb62
    MOV ECX,EAX                         ; 0050cb65
    MOV EDX,EBX                         ; 0050cb67
    MOV EAX,EBX                         ; 0050cb69
    SAR EDX,0x1f                        ; 0050cb6b
    IDIV ECX                            ; 0050cb6e
    MOV EDX,EAX                         ; 0050cb70
    SAR EDX,0x1f                        ; 0050cb72
    SHL EDX,0x2                         ; 0050cb75
    SBB EAX,EDX                         ; 0050cb78
    SAR EAX,0x2                         ; 0050cb7a
    MOV EBX,dword ptr [0x006793c0]      ; 0050cb7d | g_ProjectionScale
    MOV ECX,EAX                         ; 0050cb83
    MOV EAX,[0x02d052e8]                ; 0050cb85 | g_TransformMatrix
    MOV EDX,ECX                         ; 0050cb8a
    IMUL EDX                            ; 0050cb8c
    IDIV EBX                            ; 0050cb8e
    MOV EBX,dword ptr [0x006793c0]      ; 0050cb90 | g_ProjectionScale
    MOV [0x02d052e8],EAX                ; 0050cb96 | g_TransformMatrix
    MOV EDX,ECX                         ; 0050cb9b
    MOV EAX,[0x02d052ec]                ; 0050cb9d | g_TransformMatrix[0][1]
    IMUL EDX                            ; 0050cba2
    IDIV EBX                            ; 0050cba4
    MOV EBX,dword ptr [0x006793c0]      ; 0050cba6 | g_ProjectionScale
    MOV [0x02d052ec],EAX                ; 0050cbac | g_TransformMatrix[0][1]
    MOV EDX,ECX                         ; 0050cbb1
    MOV EAX,[0x02d052f4]                ; 0050cbb3 | g_TransformMatrix[1][0]
    IMUL EDX                            ; 0050cbb8
    IDIV EBX                            ; 0050cbba
    MOV EBX,dword ptr [0x006793c0]      ; 0050cbbc | g_ProjectionScale
    MOV [0x02d052f4],EAX                ; 0050cbc2 | g_TransformMatrix[1][0]
    MOV EDX,ECX                         ; 0050cbc7
    MOV EAX,[0x02d052f8]                ; 0050cbc9 | g_TransformMatrix[1][1]
    IMUL EDX                            ; 0050cbce
    IDIV EBX                            ; 0050cbd0
    MOV [0x02d052f8],EAX                ; 0050cbd2 | g_TransformMatrix[1][1]
    POP EDI                             ; 0050cbd7
    MOV EBX,dword ptr [0x006793c0]      ; 0050cbd8 | g_ProjectionScale
    MOV EAX,[0x02d05300]                ; 0050cbde | g_TransformMatrix[2][0]
    MOV EDX,ECX                         ; 0050cbe3
    IMUL EDX                            ; 0050cbe5
    IDIV EBX                            ; 0050cbe7
    MOV EBX,dword ptr [0x006793c0]      ; 0050cbe9 | g_ProjectionScale
    MOV [0x02d05300],EAX                ; 0050cbef | g_TransformMatrix[2][0]
    MOV EDX,ECX                         ; 0050cbf4
    MOV EAX,[0x02d05304]                ; 0050cbf6 | g_TransformMatrix[2][1]
    IMUL EDX                            ; 0050cbfb
    IDIV EBX                            ; 0050cbfd
    MOV [0x02d05304],EAX                ; 0050cbff | g_TransformMatrix[2][1]
    CALL engine_matrix.c_invertTransformMatrix_FUN_0050c640 ; 0050cc04
        ;   XREF to: 0050c640 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_0050c640()
    ADD ESP,0x8                         ; 0050cc09
    POP EBP                             ; 0050cc0c
    POP ESI                             ; 0050cc0d
    POP EBX                             ; 0050cc0e
    RET                                 ; 0050cc0f
    MOV dword ptr [0x02f0d3bc],0xaaaa   ; 0050cc10 | g_PixelAspectCorrection
        ;   Label: LAB_0050cc10
    JMP 0x0050ca9c                      ; 0050cc1a
        ;   XREF to: 0050ca9c (UNCONDITIONAL_JUMP)  ; LAB_0050ca9c
    CMP EAX,0x190                       ; 0050cc1f
        ;   Label: LAB_0050cc1f
    JZ 0x0050cc10                       ; 0050cc24
        ;   XREF to: 0050cc10 (CONDITIONAL_JUMP)  ; LAB_0050cc10
    MOV dword ptr [0x02f0d3bc],0x10000  ; 0050cc26 | g_PixelAspectCorrection
        ;   Label: LAB_0050cc26
    JMP 0x0050ca9c                      ; 0050cc30
        ;   XREF to: 0050ca9c (UNCONDITIONAL_JUMP)  ; LAB_0050ca9c

