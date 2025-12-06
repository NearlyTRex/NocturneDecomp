; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_generateShell_FUN_00468f20(void)
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
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f722
;
; Referenced Globals:
;   TerminatedCString s_Enter_in_size_in_heading_0061ce96
;   TerminatedCString s_Enter_in_size_in_pitch_0061ceb2
;   double g_HalfCircleDegrees_1 = 180
;   TerminatedCString s_Enter_in_radius_0061ced6
;   double g_HalfCircleDegrees_2 = 180
;   double g_RightAngleDegrees = 90
;   int g_VertexCount
;   int g_PolygonCount
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005ffef0
;   crt_string.c_strtod_FUN_005ff0f3
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20
;   shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468f20
        ;   Label: shape_design.c_generateShell_FUN_00468f20
    PUSH ESI                            ; 00468f21
    PUSH EDI                            ; 00468f22
    PUSH EBP                            ; 00468f23
    MOV EBP,ESP                         ; 00468f24
    SUB ESP,0x80                        ; 00468f26
    MOV dword ptr [0x016e990c],0x0      ; 00468f2c | int g_PolygonCount
    MOV dword ptr [0x01626408],0x0      ; 00468f36 | int g_VertexCount
    MOV ECX,0x61ce96                    ; 00468f40 | = "Enter in size in heading : " | s_Enter_in_size_in_heading_0061ce96 = Enter in size in heading :
    PUSH ECX                            ; 00468f45 | = "Enter in size in heading : " | s_Enter_in_size_in_heading_0061ce96 = Enter in size in heading :
    PUSH 0x0                            ; 00468f46
    PUSH 0x0                            ; 00468f48
    PUSH 0xa                            ; 00468f4a
    LEA ECX,[EBP + -0x78]               ; 00468f4c
    PUSH ECX                            ; 00468f4f
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00468f50 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00468f55
    LEA EDI,[EBP + -0x78]               ; 00468f58
    SUB ECX,ECX                         ; 00468f5b
    DEC ECX                             ; 00468f5d
    XOR EAX,EAX                         ; 00468f5e
    SCASB.REPNE ES:EDI                  ; 00468f60
    NOT ECX                             ; 00468f62
    DEC ECX                             ; 00468f64
    TEST ECX,ECX                        ; 00468f65
    JNZ 0x00468f6e                      ; 00468f67 | LAB_00468f6e
        ;   XREF to: 00468f6e (CONDITIONAL_JUMP)
    JMP 0x00469135                      ; 00468f69 | LAB_00469135
        ;   XREF to: 00469135 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x78]               ; 00468f6e
        ;   Label: LAB_00468f6e
    PUSH EAX                            ; 00468f71
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 00468f72 | int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00468f77
    MOV dword ptr [EBP + -0x24],EAX     ; 00468f7a
    FILD dword ptr [EBP + -0x24]        ; 00468f7d
    FDIVR double ptr [0x0061cece]       ; 00468f80 | double g_HalfCircleDegrees_1
    FSTP float ptr [EBP + -0x8]         ; 00468f86
    MOV EAX,0x61ceb2                    ; 00468f89 | = "Enter in size in pitch : " | s_Enter_in_size_in_pitch_0061ceb2 = Enter in size in pitch :
    PUSH EAX                            ; 00468f8e | = "Enter in size in pitch : " | s_Enter_in_size_in_pitch_0061ceb2 = Enter in size in pitch :
    PUSH 0xb                            ; 00468f8f
    PUSH 0x0                            ; 00468f91
    PUSH 0xa                            ; 00468f93
    LEA EAX,[EBP + -0x78]               ; 00468f95
    PUSH EAX                            ; 00468f98
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00468f99 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00468f9e
    LEA EDI,[EBP + -0x78]               ; 00468fa1
    SUB ECX,ECX                         ; 00468fa4
    DEC ECX                             ; 00468fa6
    XOR EAX,EAX                         ; 00468fa7
    SCASB.REPNE ES:EDI                  ; 00468fa9
    NOT ECX                             ; 00468fab
    DEC ECX                             ; 00468fad
    TEST ECX,ECX                        ; 00468fae
    JNZ 0x00468fb7                      ; 00468fb0 | LAB_00468fb7
        ;   XREF to: 00468fb7 (CONDITIONAL_JUMP)
    JMP 0x00469135                      ; 00468fb2 | LAB_00469135
        ;   XREF to: 00469135 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x78]               ; 00468fb7
        ;   Label: LAB_00468fb7
    PUSH EAX                            ; 00468fba
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 00468fbb | int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00468fc0
    MOV dword ptr [EBP + -0x20],EAX     ; 00468fc3
    FILD dword ptr [EBP + -0x20]        ; 00468fc6
    FDIVR double ptr [0x0061ceee]       ; 00468fc9 | double g_HalfCircleDegrees_2
    FSTP float ptr [EBP + -0x4]         ; 00468fcf
    MOV EAX,0x61ced6                    ; 00468fd2 | = "Enter in radius : " | s_Enter_in_radius_0061ced6 = Enter in radius :
    PUSH EAX                            ; 00468fd7 | = "Enter in radius : " | s_Enter_in_radius_0061ced6 = Enter in radius :
    PUSH 0x16                           ; 00468fd8
    PUSH 0x0                            ; 00468fda
    PUSH 0xa                            ; 00468fdc
    LEA EAX,[EBP + -0x78]               ; 00468fde
    PUSH EAX                            ; 00468fe1
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00468fe2 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00468fe7
    LEA EDI,[EBP + -0x78]               ; 00468fea
    SUB ECX,ECX                         ; 00468fed
    DEC ECX                             ; 00468fef
    XOR EAX,EAX                         ; 00468ff0
    SCASB.REPNE ES:EDI                  ; 00468ff2
    NOT ECX                             ; 00468ff4
    DEC ECX                             ; 00468ff6
    TEST ECX,ECX                        ; 00468ff7
    JNZ 0x00469000                      ; 00468ff9 | LAB_00469000
        ;   XREF to: 00469000 (CONDITIONAL_JUMP)
    JMP 0x00469135                      ; 00468ffb | LAB_00469135
        ;   XREF to: 00469135 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x78]               ; 00469000
        ;   Label: LAB_00469000
    PUSH EAX                            ; 00469003
    CALL crt_string.c_strtod_FUN_005ff0f3 ; 00469004 | double crt_string.c_strtod_FUN_005ff0f3(char * str)
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x80],EAX     ; 00469009
    MOV dword ptr [EBP + -0x7c],EDX     ; 0046900c
    FLD double ptr [EBP + -0x80]        ; 0046900f
    ADD ESP,0x4                         ; 00469012
    FSTP float ptr [EBP + -0xc]         ; 00469015
    MOV dword ptr [EBP + -0x18],0x0     ; 00469018
    JMP 0x00469027                      ; 0046901f | LAB_00469027
        ;   XREF to: 00469027 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x18]     ; 00469021
        ;   Label: LAB_00469021
    INC dword ptr [EBP + -0x18]         ; 00469024
    MOV EAX,dword ptr [EBP + -0x18]     ; 00469027
        ;   Label: LAB_00469027
    CMP EAX,dword ptr [EBP + -0x20]     ; 0046902a
    JG 0x00469135                       ; 0046902d | LAB_00469135
        ;   XREF to: 00469135 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x1c],0x0     ; 00469033
    JMP 0x00469042                      ; 0046903a | LAB_00469042
        ;   XREF to: 00469042 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046903c
        ;   Label: LAB_0046903c
    INC dword ptr [EBP + -0x1c]         ; 0046903f
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00469042
        ;   Label: LAB_00469042
    CMP EAX,dword ptr [EBP + -0x24]     ; 00469045
    JGE 0x00469130                      ; 00469048 | LAB_00469130
        ;   XREF to: 00469130 (CONDITIONAL_JUMP)
    MOV EAX,[0x01626408]                ; 0046904e | int g_VertexCount
    MOV dword ptr [EBP + -0x28],EAX     ; 00469053
    FILD dword ptr [EBP + -0x1c]        ; 00469056
    FMUL float ptr [EBP + -0x8]         ; 00469059
    FSTP float ptr [EBP + -0x14]        ; 0046905c
    FILD dword ptr [EBP + -0x18]        ; 0046905f
    FMUL float ptr [EBP + -0x4]         ; 00469062
    FSTP float ptr [EBP + -0x10]        ; 00469065
    FLD float ptr [EBP + -0x10]         ; 00469068
    FSUBR double ptr [0x0061cef6]       ; 0046906b | double g_RightAngleDegrees
    FSTP float ptr [EBP + -0x10]        ; 00469071
    FLD float ptr [EBP + -0xc]          ; 00469074
    SUB ESP,0x4                         ; 00469077
    FSTP float ptr [ESP]                ; 0046907a
    FLD float ptr [EBP + -0x10]         ; 0046907d
    SUB ESP,0x4                         ; 00469080
    FSTP float ptr [ESP]                ; 00469083
    FLD float ptr [EBP + -0x14]         ; 00469086
    SUB ESP,0x4                         ; 00469089
    FSTP float ptr [ESP]                ; 0046908c
    CALL shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40 ; 0046908f | void shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40(float latitude_degrees, float longitude_degrees, float radius)
        ;   XREF to: 00468c40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00469094
    FLD float ptr [EBP + -0xc]          ; 00469097
    SUB ESP,0x4                         ; 0046909a
    FSTP float ptr [ESP]                ; 0046909d
    FLD float ptr [EBP + -0x10]         ; 004690a0
    SUB ESP,0x4                         ; 004690a3
    FSTP float ptr [ESP]                ; 004690a6
    FLD float ptr [EBP + -0x14]         ; 004690a9
    FADD float ptr [EBP + -0x8]         ; 004690ac
    SUB ESP,0x4                         ; 004690af
    FSTP float ptr [ESP]                ; 004690b2
    CALL shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40 ; 004690b5 | void shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40(float latitude_degrees, float longitude_degrees, float radius)
        ;   XREF to: 00468c40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004690ba
    FLD float ptr [EBP + -0xc]          ; 004690bd
    SUB ESP,0x4                         ; 004690c0
    FSTP float ptr [ESP]                ; 004690c3
    FLD float ptr [EBP + -0x10]         ; 004690c6
    FADD float ptr [EBP + -0x4]         ; 004690c9
    SUB ESP,0x4                         ; 004690cc
    FSTP float ptr [ESP]                ; 004690cf
    FLD float ptr [EBP + -0x14]         ; 004690d2
    FADD float ptr [EBP + -0x8]         ; 004690d5
    SUB ESP,0x4                         ; 004690d8
    FSTP float ptr [ESP]                ; 004690db
    CALL shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40 ; 004690de | void shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40(float latitude_degrees, float longitude_degrees, float radius)
        ;   XREF to: 00468c40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004690e3
    FLD float ptr [EBP + -0xc]          ; 004690e6
    SUB ESP,0x4                         ; 004690e9
    FSTP float ptr [ESP]                ; 004690ec
    FLD float ptr [EBP + -0x10]         ; 004690ef
    FADD float ptr [EBP + -0x4]         ; 004690f2
    SUB ESP,0x4                         ; 004690f5
    FSTP float ptr [ESP]                ; 004690f8
    FLD float ptr [EBP + -0x14]         ; 004690fb
    SUB ESP,0x4                         ; 004690fe
    FSTP float ptr [ESP]                ; 00469101
    CALL shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40 ; 00469104 | void shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40(float latitude_degrees, float longitude_degrees, float radius)
        ;   XREF to: 00468c40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00469109
    MOV EAX,dword ptr [EBP + -0x28]     ; 0046910c
    PUSH EAX                            ; 0046910f
    MOV EAX,dword ptr [EBP + -0x28]     ; 00469110
    INC EAX                             ; 00469113
    PUSH EAX                            ; 00469114
    MOV EAX,dword ptr [EBP + -0x28]     ; 00469115
    ADD EAX,0x2                         ; 00469118
    PUSH EAX                            ; 0046911b
    MOV EAX,dword ptr [EBP + -0x28]     ; 0046911c
    ADD EAX,0x3                         ; 0046911f
    PUSH EAX                            ; 00469122
    CALL shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20 ; 00469123 | void shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20(int vertex_index_1, int vertex_index_2, int vertex_index_3, int vertex_index_4)
        ;   XREF to: 00468d20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00469128
    JMP 0x0046903c                      ; 0046912b | LAB_0046903c
        ;   XREF to: 0046903c (UNCONDITIONAL_JUMP)
    JMP 0x00469021                      ; 00469130 | LAB_00469021
        ;   Label: LAB_00469130
        ;   XREF to: 00469021 (UNCONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00469135
        ;   Label: LAB_00469135
    POP EBP                             ; 00469137
    POP EDI                             ; 00469138
    POP ESI                             ; 00469139
    POP EBX                             ; 0046913a
    RET                                 ; 0046913b

