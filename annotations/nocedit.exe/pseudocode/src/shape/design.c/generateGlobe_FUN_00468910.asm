; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_generateGlobe_FUN_00468910(void)
;
; Local Variables:
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined8       Stack[-0x90]:8  local_90
; undefined1       Stack[-0x88]:1  local_88
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
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f718
;
; Referenced Globals:
;   TerminatedCString s_Enter_in_size_in_heading_0061cdf6
;   TerminatedCString s_Enter_in_size_in_pitch_0061ce12
;   double g_FullCircleDegrees = 360
;   TerminatedCString s_Enter_in_radius_0061ce36
;   double g_HalfCircleDegrees = 180
;   double g_RightAngleDegrees_1 = 90
;   double g_RightAngleDegrees_2 = 90
;   int g_VertexCount
;   int g_PolygonCount
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005ffef0
;   crt_string.c__strtod_FUN_005ff0f3
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_addQuadPolygon_FUN_004687c0
;   shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468910
        ;   Label: shape_design.c_generateGlobe_FUN_00468910
    PUSH ESI                            ; 00468911
    PUSH EDI                            ; 00468912
    PUSH EBP                            ; 00468913
    MOV EBP,ESP                         ; 00468914
    SUB ESP,0x80                        ; 00468916
    MOV dword ptr [0x016e990c],0x0      ; 0046891c | g_PolygonCount
    MOV dword ptr [0x01626408],0x0      ; 00468926 | g_VertexCount
    MOV ECX,0x61cdf6                    ; 00468930 | = "Enter in size in heading : "
    PUSH ECX                            ; 00468935 | = "Enter in size in heading : "
    PUSH 0x0                            ; 00468936
    PUSH 0x0                            ; 00468938
    PUSH 0xa                            ; 0046893a
    LEA ECX,[EBP + -0x78]               ; 0046893c
    PUSH ECX                            ; 0046893f
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00468940
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00468945
    LEA EDI,[EBP + -0x78]               ; 00468948
    SUB ECX,ECX                         ; 0046894b
    DEC ECX                             ; 0046894d
    XOR EAX,EAX                         ; 0046894e
    SCASB.REPNE ES:EDI                  ; 00468950
    NOT ECX                             ; 00468952
    DEC ECX                             ; 00468954
    TEST ECX,ECX                        ; 00468955
    JNZ 0x0046895e                      ; 00468957
        ;   XREF to: 0046895e (CONDITIONAL_JUMP)  ; LAB_0046895e
    JMP 0x00468c35                      ; 00468959
        ;   XREF to: 00468c35 (UNCONDITIONAL_JUMP)  ; LAB_00468c35
    LEA EAX,[EBP + -0x78]               ; 0046895e
        ;   Label: LAB_0046895e
    PUSH EAX                            ; 00468961
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 00468962
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 00468967
    MOV dword ptr [EBP + -0x24],EAX     ; 0046896a
    FILD dword ptr [EBP + -0x24]        ; 0046896d
    FDIVR double ptr [0x0061ce2e]       ; 00468970 | g_FullCircleDegrees
    FSTP float ptr [EBP + -0x8]         ; 00468976
    MOV EAX,0x61ce12                    ; 00468979 | = "Enter in size in pitch : "
    PUSH EAX                            ; 0046897e | = "Enter in size in pitch : "
    PUSH 0xb                            ; 0046897f
    PUSH 0x0                            ; 00468981
    PUSH 0xa                            ; 00468983
    LEA EAX,[EBP + -0x78]               ; 00468985
    PUSH EAX                            ; 00468988
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00468989
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046898e
    LEA EDI,[EBP + -0x78]               ; 00468991
    SUB ECX,ECX                         ; 00468994
    DEC ECX                             ; 00468996
    XOR EAX,EAX                         ; 00468997
    SCASB.REPNE ES:EDI                  ; 00468999
    NOT ECX                             ; 0046899b
    DEC ECX                             ; 0046899d
    TEST ECX,ECX                        ; 0046899e
    JNZ 0x004689a7                      ; 004689a0
        ;   XREF to: 004689a7 (CONDITIONAL_JUMP)  ; LAB_004689a7
    JMP 0x00468c35                      ; 004689a2
        ;   XREF to: 00468c35 (UNCONDITIONAL_JUMP)  ; LAB_00468c35
    LEA EAX,[EBP + -0x78]               ; 004689a7
        ;   Label: LAB_004689a7
    PUSH EAX                            ; 004689aa
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 004689ab
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 004689b0
    MOV dword ptr [EBP + -0x20],EAX     ; 004689b3
    FILD dword ptr [EBP + -0x20]        ; 004689b6
    FDIVR double ptr [0x0061ce4e]       ; 004689b9 | g_HalfCircleDegrees
    FSTP float ptr [EBP + -0x4]         ; 004689bf
    MOV EAX,0x61ce36                    ; 004689c2 | = "Enter in radius : "
    PUSH EAX                            ; 004689c7 | = "Enter in radius : "
    PUSH 0x16                           ; 004689c8
    PUSH 0x0                            ; 004689ca
    PUSH 0xa                            ; 004689cc
    LEA EAX,[EBP + -0x78]               ; 004689ce
    PUSH EAX                            ; 004689d1
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 004689d2
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 004689d7
    LEA EDI,[EBP + -0x78]               ; 004689da
    SUB ECX,ECX                         ; 004689dd
    DEC ECX                             ; 004689df
    XOR EAX,EAX                         ; 004689e0
    SCASB.REPNE ES:EDI                  ; 004689e2
    NOT ECX                             ; 004689e4
    DEC ECX                             ; 004689e6
    TEST ECX,ECX                        ; 004689e7
    JNZ 0x004689f0                      ; 004689e9
        ;   XREF to: 004689f0 (CONDITIONAL_JUMP)  ; LAB_004689f0
    JMP 0x00468c35                      ; 004689eb
        ;   XREF to: 00468c35 (UNCONDITIONAL_JUMP)  ; LAB_00468c35
    LEA EAX,[EBP + -0x78]               ; 004689f0
        ;   Label: LAB_004689f0
    PUSH EAX                            ; 004689f3
    CALL crt_string.c__strtod_FUN_005ff0f3 ; 004689f4
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)  ; double crt_string.c__strtod_FUN_005ff0f3(char * str)
    MOV dword ptr [EBP + -0x80],EAX     ; 004689f9
    MOV dword ptr [EBP + -0x7c],EDX     ; 004689fc
    FLD double ptr [EBP + -0x80]        ; 004689ff
    ADD ESP,0x4                         ; 00468a02
    FSTP float ptr [EBP + -0xc]         ; 00468a05
    MOV dword ptr [EBP + -0x18],0x0     ; 00468a08
    JMP 0x00468a17                      ; 00468a0f
        ;   XREF to: 00468a17 (UNCONDITIONAL_JUMP)  ; LAB_00468a17
    MOV EAX,dword ptr [EBP + -0x18]     ; 00468a11
        ;   Label: LAB_00468a11
    INC dword ptr [EBP + -0x18]         ; 00468a14
    MOV EAX,dword ptr [EBP + -0x18]     ; 00468a17
        ;   Label: LAB_00468a17
    CMP EAX,dword ptr [EBP + -0x20]     ; 00468a1a
    JG 0x00468c35                       ; 00468a1d
        ;   XREF to: 00468c35 (CONDITIONAL_JUMP)  ; LAB_00468c35
    MOV dword ptr [EBP + -0x1c],0x0     ; 00468a23
    JMP 0x00468a32                      ; 00468a2a
        ;   XREF to: 00468a32 (UNCONDITIONAL_JUMP)  ; LAB_00468a32
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00468a2c
        ;   Label: LAB_00468a2c
    INC dword ptr [EBP + -0x1c]         ; 00468a2f
    MOV EAX,dword ptr [EBP + -0x24]     ; 00468a32
        ;   Label: LAB_00468a32
    MOV EDX,dword ptr [EBP + -0x24]     ; 00468a35
    SAR EDX,0x1f                        ; 00468a38
    SUB EAX,EDX                         ; 00468a3b
    SAR EAX,0x1                         ; 00468a3d
    CMP EAX,dword ptr [EBP + -0x1c]     ; 00468a3f
    JLE 0x00468b2a                      ; 00468a42
        ;   XREF to: 00468b2a (CONDITIONAL_JUMP)  ; LAB_00468b2a
    MOV EAX,[0x01626408]                ; 00468a48 | g_VertexCount
    MOV dword ptr [EBP + -0x28],EAX     ; 00468a4d
    FILD dword ptr [EBP + -0x1c]        ; 00468a50
    FMUL float ptr [EBP + -0x8]         ; 00468a53
    FSTP float ptr [EBP + -0x14]        ; 00468a56
    FILD dword ptr [EBP + -0x18]        ; 00468a59
    FMUL float ptr [EBP + -0x4]         ; 00468a5c
    FSTP float ptr [EBP + -0x10]        ; 00468a5f
    FLD float ptr [EBP + -0x10]         ; 00468a62
    FSUBR double ptr [0x0061ce56]       ; 00468a65 | g_RightAngleDegrees_1
    FSTP float ptr [EBP + -0x10]        ; 00468a6b
    FLD float ptr [EBP + -0xc]          ; 00468a6e
    SUB ESP,0x4                         ; 00468a71
    FSTP float ptr [ESP]                ; 00468a74
    FLD float ptr [EBP + -0x10]         ; 00468a77
    SUB ESP,0x4                         ; 00468a7a
    FSTP float ptr [ESP]                ; 00468a7d
    FLD float ptr [EBP + -0x14]         ; 00468a80
    SUB ESP,0x4                         ; 00468a83
    FSTP float ptr [ESP]                ; 00468a86
    CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0 ; 00468a89
        ;   XREF to: 004686e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_addVertexFromSphericalCoords_FUN_004686e0(float latitude_degrees, float longitude_degrees, float radius)
    ADD ESP,0xc                         ; 00468a8e
    FLD float ptr [EBP + -0xc]          ; 00468a91
    SUB ESP,0x4                         ; 00468a94
    FSTP float ptr [ESP]                ; 00468a97
    FLD float ptr [EBP + -0x10]         ; 00468a9a
    SUB ESP,0x4                         ; 00468a9d
    FSTP float ptr [ESP]                ; 00468aa0
    FLD float ptr [EBP + -0x14]         ; 00468aa3
    FADD float ptr [EBP + -0x8]         ; 00468aa6
    SUB ESP,0x4                         ; 00468aa9
    FSTP float ptr [ESP]                ; 00468aac
    CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0 ; 00468aaf
        ;   XREF to: 004686e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_addVertexFromSphericalCoords_FUN_004686e0(float latitude_degrees, float longitude_degrees, float radius)
    ADD ESP,0xc                         ; 00468ab4
    FLD float ptr [EBP + -0xc]          ; 00468ab7
    SUB ESP,0x4                         ; 00468aba
    FSTP float ptr [ESP]                ; 00468abd
    FLD float ptr [EBP + -0x10]         ; 00468ac0
    FADD float ptr [EBP + -0x4]         ; 00468ac3
    SUB ESP,0x4                         ; 00468ac6
    FSTP float ptr [ESP]                ; 00468ac9
    FLD float ptr [EBP + -0x14]         ; 00468acc
    FADD float ptr [EBP + -0x8]         ; 00468acf
    SUB ESP,0x4                         ; 00468ad2
    FSTP float ptr [ESP]                ; 00468ad5
    CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0 ; 00468ad8
        ;   XREF to: 004686e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_addVertexFromSphericalCoords_FUN_004686e0(float latitude_degrees, float longitude_degrees, float radius)
    ADD ESP,0xc                         ; 00468add
    FLD float ptr [EBP + -0xc]          ; 00468ae0
    SUB ESP,0x4                         ; 00468ae3
    FSTP float ptr [ESP]                ; 00468ae6
    FLD float ptr [EBP + -0x10]         ; 00468ae9
    FADD float ptr [EBP + -0x4]         ; 00468aec
    SUB ESP,0x4                         ; 00468aef
    FSTP float ptr [ESP]                ; 00468af2
    FLD float ptr [EBP + -0x14]         ; 00468af5
    SUB ESP,0x4                         ; 00468af8
    FSTP float ptr [ESP]                ; 00468afb
    CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0 ; 00468afe
        ;   XREF to: 004686e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_addVertexFromSphericalCoords_FUN_004686e0(float latitude_degrees, float longitude_degrees, float radius)
    ADD ESP,0xc                         ; 00468b03
    MOV EAX,dword ptr [EBP + -0x28]     ; 00468b06
    PUSH EAX                            ; 00468b09
    MOV EAX,dword ptr [EBP + -0x28]     ; 00468b0a
    INC EAX                             ; 00468b0d
    PUSH EAX                            ; 00468b0e
    MOV EAX,dword ptr [EBP + -0x28]     ; 00468b0f
    ADD EAX,0x2                         ; 00468b12
    PUSH EAX                            ; 00468b15
    MOV EAX,dword ptr [EBP + -0x28]     ; 00468b16
    ADD EAX,0x3                         ; 00468b19
    PUSH EAX                            ; 00468b1c
    CALL shape_design.c_addQuadPolygon_FUN_004687c0 ; 00468b1d
        ;   XREF to: 004687c0 (UNCONDITIONAL_CALL)  ; void shape_design.c_addQuadPolygon_FUN_004687c0(int vertex_index_0, int vertex_index_1, int vertex_index_2, int vertex_index_3)
    ADD ESP,0x10                        ; 00468b22
    JMP 0x00468a2c                      ; 00468b25
        ;   XREF to: 00468a2c (UNCONDITIONAL_JUMP)  ; LAB_00468a2c
    MOV EAX,dword ptr [EBP + -0x24]     ; 00468b2a
        ;   Label: LAB_00468b2a
    MOV EDX,dword ptr [EBP + -0x24]     ; 00468b2d
    SAR EDX,0x1f                        ; 00468b30
    SUB EAX,EDX                         ; 00468b33
    SAR EAX,0x1                         ; 00468b35
    MOV dword ptr [EBP + -0x1c],EAX     ; 00468b37
    JMP 0x00468b42                      ; 00468b3a
        ;   XREF to: 00468b42 (UNCONDITIONAL_JUMP)  ; LAB_00468b42
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00468b3c
        ;   Label: LAB_00468b3c
    INC dword ptr [EBP + -0x1c]         ; 00468b3f
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00468b42
        ;   Label: LAB_00468b42
    CMP EAX,dword ptr [EBP + -0x24]     ; 00468b45
    JGE 0x00468c30                      ; 00468b48
        ;   XREF to: 00468c30 (CONDITIONAL_JUMP)  ; LAB_00468c30
    MOV EAX,[0x01626408]                ; 00468b4e | g_VertexCount
    MOV dword ptr [EBP + -0x28],EAX     ; 00468b53
    FILD dword ptr [EBP + -0x1c]        ; 00468b56
    FMUL float ptr [EBP + -0x8]         ; 00468b59
    FSTP float ptr [EBP + -0x14]        ; 00468b5c
    FILD dword ptr [EBP + -0x18]        ; 00468b5f
    FMUL float ptr [EBP + -0x4]         ; 00468b62
    FSTP float ptr [EBP + -0x10]        ; 00468b65
    FLD float ptr [EBP + -0x10]         ; 00468b68
    FSUBR double ptr [0x0061ce5e]       ; 00468b6b | g_RightAngleDegrees_2
    FSTP float ptr [EBP + -0x10]        ; 00468b71
    FLD float ptr [EBP + -0xc]          ; 00468b74
    SUB ESP,0x4                         ; 00468b77
    FSTP float ptr [ESP]                ; 00468b7a
    FLD float ptr [EBP + -0x10]         ; 00468b7d
    SUB ESP,0x4                         ; 00468b80
    FSTP float ptr [ESP]                ; 00468b83
    FLD float ptr [EBP + -0x14]         ; 00468b86
    SUB ESP,0x4                         ; 00468b89
    FSTP float ptr [ESP]                ; 00468b8c
    CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0 ; 00468b8f
        ;   XREF to: 004686e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_addVertexFromSphericalCoords_FUN_004686e0(float latitude_degrees, float longitude_degrees, float radius)
    ADD ESP,0xc                         ; 00468b94
    FLD float ptr [EBP + -0xc]          ; 00468b97
    SUB ESP,0x4                         ; 00468b9a
    FSTP float ptr [ESP]                ; 00468b9d
    FLD float ptr [EBP + -0x10]         ; 00468ba0
    SUB ESP,0x4                         ; 00468ba3
    FSTP float ptr [ESP]                ; 00468ba6
    FLD float ptr [EBP + -0x14]         ; 00468ba9
    FADD float ptr [EBP + -0x8]         ; 00468bac
    SUB ESP,0x4                         ; 00468baf
    FSTP float ptr [ESP]                ; 00468bb2
    CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0 ; 00468bb5
        ;   XREF to: 004686e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_addVertexFromSphericalCoords_FUN_004686e0(float latitude_degrees, float longitude_degrees, float radius)
    ADD ESP,0xc                         ; 00468bba
    FLD float ptr [EBP + -0xc]          ; 00468bbd
    SUB ESP,0x4                         ; 00468bc0
    FSTP float ptr [ESP]                ; 00468bc3
    FLD float ptr [EBP + -0x10]         ; 00468bc6
    FADD float ptr [EBP + -0x4]         ; 00468bc9
    SUB ESP,0x4                         ; 00468bcc
    FSTP float ptr [ESP]                ; 00468bcf
    FLD float ptr [EBP + -0x14]         ; 00468bd2
    FADD float ptr [EBP + -0x8]         ; 00468bd5
    SUB ESP,0x4                         ; 00468bd8
    FSTP float ptr [ESP]                ; 00468bdb
    CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0 ; 00468bde
        ;   XREF to: 004686e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_addVertexFromSphericalCoords_FUN_004686e0(float latitude_degrees, float longitude_degrees, float radius)
    ADD ESP,0xc                         ; 00468be3
    FLD float ptr [EBP + -0xc]          ; 00468be6
    SUB ESP,0x4                         ; 00468be9
    FSTP float ptr [ESP]                ; 00468bec
    FLD float ptr [EBP + -0x10]         ; 00468bef
    FADD float ptr [EBP + -0x4]         ; 00468bf2
    SUB ESP,0x4                         ; 00468bf5
    FSTP float ptr [ESP]                ; 00468bf8
    FLD float ptr [EBP + -0x14]         ; 00468bfb
    SUB ESP,0x4                         ; 00468bfe
    FSTP float ptr [ESP]                ; 00468c01
    CALL shape_design.c_addVertexFromSphericalCoords_FUN_004686e0 ; 00468c04
        ;   XREF to: 004686e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_addVertexFromSphericalCoords_FUN_004686e0(float latitude_degrees, float longitude_degrees, float radius)
    ADD ESP,0xc                         ; 00468c09
    MOV EAX,dword ptr [EBP + -0x28]     ; 00468c0c
    PUSH EAX                            ; 00468c0f
    MOV EAX,dword ptr [EBP + -0x28]     ; 00468c10
    INC EAX                             ; 00468c13
    PUSH EAX                            ; 00468c14
    MOV EAX,dword ptr [EBP + -0x28]     ; 00468c15
    ADD EAX,0x2                         ; 00468c18
    PUSH EAX                            ; 00468c1b
    MOV EAX,dword ptr [EBP + -0x28]     ; 00468c1c
    ADD EAX,0x3                         ; 00468c1f
    PUSH EAX                            ; 00468c22
    CALL shape_design.c_addQuadPolygon_FUN_004687c0 ; 00468c23
        ;   XREF to: 004687c0 (UNCONDITIONAL_CALL)  ; void shape_design.c_addQuadPolygon_FUN_004687c0(int vertex_index_0, int vertex_index_1, int vertex_index_2, int vertex_index_3)
    ADD ESP,0x10                        ; 00468c28
    JMP 0x00468b3c                      ; 00468c2b
        ;   XREF to: 00468b3c (UNCONDITIONAL_JUMP)  ; LAB_00468b3c
    JMP 0x00468a11                      ; 00468c30
        ;   XREF to: 00468a11 (UNCONDITIONAL_JUMP)  ; LAB_00468a11
        ;   Label: LAB_00468c30
    MOV ESP,EBP                         ; 00468c35
        ;   Label: LAB_00468c35
    POP EBP                             ; 00468c37
    POP EDI                             ; 00468c38
    POP ESI                             ; 00468c39
    POP EBX                             ; 00468c3a
    RET                                 ; 00468c3b

