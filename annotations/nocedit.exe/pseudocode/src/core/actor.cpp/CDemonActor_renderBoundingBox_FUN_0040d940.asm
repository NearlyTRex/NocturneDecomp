; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; typedef uint32_t uint Stack[0x8]:4   color
;
; XREF[9]:
;   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 at 004808cc
;   core_emitter.cpp_FUN_004a8860 at 004a89fb
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a408
;   core_platfrm.cpp_FUN_0054d720 at 0054d8ca
;   core_teleport.cpp_CTeleportDest_FUN_005da7d0 at 005da837
;   core_teleport.cpp_CTeleport_FUN_005dae10 at 005dae3c
;   core_tentacle.cpp_CTentacle_FUN_005db840 at 005db864
;   core_waypoint.cpp_CWaypoint_FUN_005ebf70 at 005ebfd2
;   core_zombie.cpp_CZombie_FUN_005fbe20 at 005fbe4a
;
; Referenced Globals:
;   float FLOAT_0061445c = 0.2000000
;   float FLOAT_00614460 = 0.8000000
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ActiveRenderColor
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_actor.cpp_CVector_ctor_FUN_00410340
;   core_actor.cpp_FUN_004103d0
;   core_actor.cpp_FUN_004104d0
;   core_actor.cpp_FUN_004104e0
;   core_actor.cpp_FUN_004104f0
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d940
        ;   Label: core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
    PUSH ESI                            ; 0040d941
    PUSH EDI                            ; 0040d942
    PUSH EBP                            ; 0040d943
    SUB ESP,0x13c                       ; 0040d944
    MOV EDX,dword ptr [ESP + 0x150]     ; 0040d94a
    PUSH EDX                            ; 0040d951
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0040d952
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0040d957
    MOV EBX,ESP                         ; 0040d95a
    PUSH EBX                            ; 0040d95c
    MOV ECX,dword ptr [ESP + 0x154]     ; 0040d95d
    MOV EAX,dword ptr [ESP + 0x154]     ; 0040d964
    PUSH ECX                            ; 0040d96b
    MOV EAX,dword ptr [EAX + 0x154]     ; 0040d96c
    CALL dword ptr [EAX + 0x14]         ; 0040d972
    ADD ESP,0x8                         ; 0040d975
    MOV dword ptr [ESP + 0x138],EAX     ; 0040d978
    MOV EAX,dword ptr [ESP + 0x154]     ; 0040d97f
    XOR EBP,EBP                         ; 0040d986
    MOV [0x02d02570],EAX                ; 0040d988 | g_ActiveRenderColor
    MOV EBX,EBP                         ; 0040d98d
        ;   Label: LAB_0040d98d
    XOR BL,0x1                          ; 0040d98f
    PUSH EBX                            ; 0040d992
    LEA EBX,[ESP + 0x94]                ; 0040d993
    PUSH EBX                            ; 0040d99a
    MOV EBX,dword ptr [ESP + 0x140]     ; 0040d99b
    PUSH EBX                            ; 0040d9a2
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040d9a3
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0040d9a8
    PUSH EBP                            ; 0040d9ab
    LEA EBX,[ESP + 0x88]                ; 0040d9ac
    PUSH EBX                            ; 0040d9b3
    MOV EDI,dword ptr [ESP + 0x140]     ; 0040d9b4
    PUSH EDI                            ; 0040d9bb
    MOV ESI,EAX                         ; 0040d9bc
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040d9be
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0040d9c3
    PUSH EAX                            ; 0040d9c6
    LEA EDI,[ESP + 0x100]               ; 0040d9c7
    PUSH EDI                            ; 0040d9ce
    MOV EBX,EAX                         ; 0040d9cf
    CALL core_actor.cpp_FUN_004104f0    ; 0040d9d1
        ;   XREF to: 004104f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004104f0()
    ADD ESP,0x8                         ; 0040d9d6
    LEA EDI,[EBX + 0x4]                 ; 0040d9d9
    PUSH EDI                            ; 0040d9dc
    LEA EDI,[ESP + 0x104]               ; 0040d9dd
    PUSH EDI                            ; 0040d9e4
    CALL core_actor.cpp_FUN_004104e0    ; 0040d9e5
        ;   XREF to: 004104e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004104e0()
    ADD ESP,0x8                         ; 0040d9ea
    LEA EDI,[EBX + 0x8]                 ; 0040d9ed
    PUSH EDI                            ; 0040d9f0
    LEA EDI,[ESP + 0x108]               ; 0040d9f1
    PUSH EDI                            ; 0040d9f8
    CALL core_actor.cpp_FUN_004104d0    ; 0040d9f9
        ;   XREF to: 004104d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004104d0()
    ADD ESP,0x8                         ; 0040d9fe
    LEA EDI,[ESP + 0x120]               ; 0040da01
    PUSH EDI                            ; 0040da08
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0040da09
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    FLD float ptr [0x0061445c]          ; 0040da0e | FLOAT_0061445c
    FLD float ptr [ESI]                 ; 0040da14
    FMUL ST1                            ; 0040da16
    ADD ESP,0x4                         ; 0040da18
    FSTP float ptr [ESP + 0x120]        ; 0040da1b
    FLD float ptr [ESI + 0x4]           ; 0040da22
    FMUL ST1                            ; 0040da25
    FSTP float ptr [ESP + 0x124]        ; 0040da27
    FLD float ptr [ESI + 0x8]           ; 0040da2e
    LEA ESI,[ESP + 0x6c]                ; 0040da31
    FMULP                               ; 0040da35
    PUSH ESI                            ; 0040da37
    FSTP float ptr [ESP + 0x12c]        ; 0040da38
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0040da3f
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    FLD float ptr [0x00614460]          ; 0040da44 | FLOAT_00614460
    FLD float ptr [EBX]                 ; 0040da4a
    FMUL ST1                            ; 0040da4c
    ADD ESP,0x4                         ; 0040da4e
    FSTP float ptr [ESP + 0x6c]         ; 0040da51
    FLD float ptr [EBX + 0x4]           ; 0040da55
    FMUL ST1                            ; 0040da58
    FSTP float ptr [ESP + 0x70]         ; 0040da5a
    FMUL float ptr [EBX + 0x8]          ; 0040da5e
    FSTP float ptr [ESP + 0x74]         ; 0040da61
    LEA EBX,[ESP + 0x30]                ; 0040da65
    PUSH EBX                            ; 0040da69
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0040da6a
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    LEA EBX,[ESP + 0x10c]               ; 0040da6f
    ADD ESP,0x4                         ; 0040da76
    MOV ESI,dword ptr [0x006703e8]      ; 0040da79 | g_CDemonRendererPtr
    FLD float ptr [ESP + 0x6c]          ; 0040da7f
    FLD float ptr [ESP + 0x70]          ; 0040da83
    FLD float ptr [ESP + 0x74]          ; 0040da87
    PUSH EBX                            ; 0040da8b
    LEA EBX,[ESP + 0x100]               ; 0040da8c
    FXCH ST2                            ; 0040da93
    FADD float ptr [ESP + 0x124]        ; 0040da95
    FXCH                                ; 0040da9c
    FADD float ptr [ESP + 0x128]        ; 0040da9e
    FXCH ST2                            ; 0040daa5
    FADD float ptr [ESP + 0x12c]        ; 0040daa7
    FXCH                                ; 0040daae
    FSTP float ptr [ESP + 0x34]         ; 0040dab0
    FXCH                                ; 0040dab4
    FSTP float ptr [ESP + 0x38]         ; 0040dab6
    PUSH EBX                            ; 0040daba
    FSTP float ptr [ESP + 0x40]         ; 0040dabb
    CALL core_actor.cpp_FUN_004103d0    ; 0040dabf
        ;   XREF to: 004103d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004103d0()
    ADD ESP,0x8                         ; 0040dac4
    LEA EBX,[ESP + 0x108]               ; 0040dac7
    PUSH EBX                            ; 0040dace
    MOV EBX,dword ptr [ESI]             ; 0040dacf | g_CDemonRendererInstance
    PUSH EBX                            ; 0040dad1
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040dad2
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040dad7
    LEA EBX,[ESP + 0xf0]                ; 0040dada
    PUSH EBX                            ; 0040dae1
    LEA EBX,[ESP + 0x34]                ; 0040dae2
    PUSH EBX                            ; 0040dae6
    MOV ESI,dword ptr [0x006703e8]      ; 0040dae7 | g_CDemonRendererPtr
    CALL core_actor.cpp_FUN_004103d0    ; 0040daed
        ;   XREF to: 004103d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004103d0()
    ADD ESP,0x8                         ; 0040daf2
    LEA EBX,[ESP + 0xf0]                ; 0040daf5
    PUSH EBX                            ; 0040dafc
    MOV EBX,dword ptr [ESI]             ; 0040dafd | g_CDemonRendererInstance
    ADD EBX,0x30                        ; 0040daff
    PUSH EBX                            ; 0040db02
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040db03
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040db08
    MOV EBX,dword ptr [0x006703e8]      ; 0040db0b | g_CDemonRendererPtr
    SUB ESP,0x30                        ; 0040db11
    MOV EBX,dword ptr [EBX]             ; 0040db14 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 0040db16
    MOV EDI,ESP                         ; 0040db1b
    LEA ESI,[EBX + 0x30]                ; 0040db1d
    MOVSD.REP ES:EDI,ESI                ; 0040db20
    SUB ESP,0x30                        ; 0040db22
    MOV ECX,0xc                         ; 0040db25
    MOV EDI,ESP                         ; 0040db2a
    MOV ESI,EBX                         ; 0040db2c
    MOVSD.REP ES:EDI,ESI                ; 0040db2e
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0040db30
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)
    MOV EBX,EBP                         ; 0040db35
    ADD ESP,0x60                        ; 0040db37
    XOR BL,0x2                          ; 0040db3a
    PUSH EBX                            ; 0040db3d
    LEA EBX,[ESP + 0x64]                ; 0040db3e
    PUSH EBX                            ; 0040db42
    MOV EAX,dword ptr [ESP + 0x140]     ; 0040db43
    PUSH EAX                            ; 0040db4a
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040db4b
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0040db50
    PUSH EBP                            ; 0040db53
    LEA EBX,[ESP + 0x28]                ; 0040db54
    PUSH EBX                            ; 0040db58
    MOV EDX,dword ptr [ESP + 0x140]     ; 0040db59
    PUSH EDX                            ; 0040db60
    MOV ESI,EAX                         ; 0040db61
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040db63
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    MOV EBX,EAX                         ; 0040db68
    ADD ESP,0xc                         ; 0040db6a
    PUSH EAX                            ; 0040db6d
    LEA EDI,[ESP + 0xe8]                ; 0040db6e
    PUSH EDI                            ; 0040db75
    CALL core_actor.cpp_FUN_004104f0    ; 0040db76
        ;   XREF to: 004104f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004104f0()
    ADD ESP,0x8                         ; 0040db7b
    LEA EDI,[EBX + 0x4]                 ; 0040db7e
    PUSH EDI                            ; 0040db81
    LEA EDI,[ESP + 0xec]                ; 0040db82
    PUSH EDI                            ; 0040db89
    CALL core_actor.cpp_FUN_004104e0    ; 0040db8a
        ;   XREF to: 004104e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004104e0()
    ADD ESP,0x8                         ; 0040db8f
    LEA EDI,[EBX + 0x8]                 ; 0040db92
    PUSH EDI                            ; 0040db95
    LEA EDI,[ESP + 0xf0]                ; 0040db96
    PUSH EDI                            ; 0040db9d
    CALL core_actor.cpp_FUN_004104d0    ; 0040db9e
        ;   XREF to: 004104d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004104d0()
    ADD ESP,0x8                         ; 0040dba3
    LEA EDI,[ESP + 0xd8]                ; 0040dba6
    PUSH EDI                            ; 0040dbad
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0040dbae
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    FLD float ptr [0x0061445c]          ; 0040dbb3 | FLOAT_0061445c
    FLD float ptr [ESI]                 ; 0040dbb9
    FMUL ST1                            ; 0040dbbb
    ADD ESP,0x4                         ; 0040dbbd
    FSTP float ptr [ESP + 0xd8]         ; 0040dbc0
    FLD float ptr [ESI + 0x4]           ; 0040dbc7
    FMUL ST1                            ; 0040dbca
    FSTP float ptr [ESP + 0xdc]         ; 0040dbcc
    FLD float ptr [ESI + 0x8]           ; 0040dbd3
    LEA ESI,[ESP + 0x9c]                ; 0040dbd6
    FMULP                               ; 0040dbdd
    PUSH ESI                            ; 0040dbdf
    FSTP float ptr [ESP + 0xe4]         ; 0040dbe0
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0040dbe7
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    FLD float ptr [0x00614460]          ; 0040dbec | FLOAT_00614460
    FLD float ptr [EBX]                 ; 0040dbf2
    FMUL ST1                            ; 0040dbf4
    ADD ESP,0x4                         ; 0040dbf6
    FSTP float ptr [ESP + 0x9c]         ; 0040dbf9
    FLD float ptr [EBX + 0x4]           ; 0040dc00
    FMUL ST1                            ; 0040dc03
    FSTP float ptr [ESP + 0xa0]         ; 0040dc05
    FLD float ptr [EBX + 0x8]           ; 0040dc0c
    LEA EBX,[ESP + 0xcc]                ; 0040dc0f
    FMULP                               ; 0040dc16
    PUSH EBX                            ; 0040dc18
    FSTP float ptr [ESP + 0xa8]         ; 0040dc19
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0040dc20
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    LEA EBX,[ESP + 0x40]                ; 0040dc25
    ADD ESP,0x4                         ; 0040dc29
    MOV ESI,dword ptr [0x006703e8]      ; 0040dc2c | g_CDemonRendererPtr
    FLD float ptr [ESP + 0x9c]          ; 0040dc32
    FLD float ptr [ESP + 0xa0]          ; 0040dc39
    FLD float ptr [ESP + 0xa4]          ; 0040dc40
    PUSH EBX                            ; 0040dc47
    LEA EBX,[ESP + 0xe8]                ; 0040dc48
    FXCH ST2                            ; 0040dc4f
    FADD float ptr [ESP + 0xdc]         ; 0040dc51
    FXCH                                ; 0040dc58
    FADD float ptr [ESP + 0xe0]         ; 0040dc5a
    FXCH ST2                            ; 0040dc61
    FADD float ptr [ESP + 0xe4]         ; 0040dc63
    FXCH                                ; 0040dc6a
    FSTP float ptr [ESP + 0xd0]         ; 0040dc6c
    FXCH                                ; 0040dc73
    FSTP float ptr [ESP + 0xd4]         ; 0040dc75
    PUSH EBX                            ; 0040dc7c
    FSTP float ptr [ESP + 0xdc]         ; 0040dc7d
    CALL core_actor.cpp_FUN_004103d0    ; 0040dc84
        ;   XREF to: 004103d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004103d0()
    ADD ESP,0x8                         ; 0040dc89
    LEA EBX,[ESP + 0x3c]                ; 0040dc8c
    PUSH EBX                            ; 0040dc90
    MOV EBX,dword ptr [ESI]             ; 0040dc91 | g_CDemonRendererInstance
    PUSH EBX                            ; 0040dc93
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040dc94
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040dc99
    LEA EBX,[ESP + 0x54]                ; 0040dc9c
    PUSH EBX                            ; 0040dca0
    LEA EBX,[ESP + 0xd0]                ; 0040dca1
    PUSH EBX                            ; 0040dca8
    MOV ESI,dword ptr [0x006703e8]      ; 0040dca9 | g_CDemonRendererPtr
    CALL core_actor.cpp_FUN_004103d0    ; 0040dcaf
        ;   XREF to: 004103d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004103d0()
    ADD ESP,0x8                         ; 0040dcb4
    LEA EBX,[ESP + 0x54]                ; 0040dcb7
    PUSH EBX                            ; 0040dcbb
    MOV EBX,dword ptr [ESI]             ; 0040dcbc | g_CDemonRendererInstance
    ADD EBX,0x30                        ; 0040dcbe
    PUSH EBX                            ; 0040dcc1
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040dcc2
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040dcc7
    MOV EBX,dword ptr [0x006703e8]      ; 0040dcca | g_CDemonRendererPtr
    SUB ESP,0x30                        ; 0040dcd0
    MOV EBX,dword ptr [EBX]             ; 0040dcd3 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 0040dcd5
    MOV EDI,ESP                         ; 0040dcda
    LEA ESI,[EBX + 0x30]                ; 0040dcdc
    MOVSD.REP ES:EDI,ESI                ; 0040dcdf
    SUB ESP,0x30                        ; 0040dce1
    MOV ECX,0xc                         ; 0040dce4
    MOV EDI,ESP                         ; 0040dce9
    MOV ESI,EBX                         ; 0040dceb
    MOVSD.REP ES:EDI,ESI                ; 0040dced
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0040dcef
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)
    MOV EBX,EBP                         ; 0040dcf4
    ADD ESP,0x60                        ; 0040dcf6
    XOR BL,0x4                          ; 0040dcf9
    PUSH EBX                            ; 0040dcfc
    LEA EBX,[ESP + 0xc4]                ; 0040dcfd
    PUSH EBX                            ; 0040dd04
    MOV ECX,dword ptr [ESP + 0x140]     ; 0040dd05
    PUSH ECX                            ; 0040dd0c
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040dd0d
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0040dd12
    PUSH EBP                            ; 0040dd15
    LEA EBX,[ESP + 0xb8]                ; 0040dd16
    PUSH EBX                            ; 0040dd1d
    MOV EBX,dword ptr [ESP + 0x140]     ; 0040dd1e
    PUSH EBX                            ; 0040dd25
    MOV ESI,EAX                         ; 0040dd26
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040dd28
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    MOV EBX,EAX                         ; 0040dd2d
    ADD ESP,0xc                         ; 0040dd2f
    PUSH EAX                            ; 0040dd32
    LEA EDI,[ESP + 0x118]               ; 0040dd33
    PUSH EDI                            ; 0040dd3a
    CALL core_actor.cpp_FUN_004104f0    ; 0040dd3b
        ;   XREF to: 004104f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004104f0()
    ADD ESP,0x8                         ; 0040dd40
    LEA EDI,[EBX + 0x4]                 ; 0040dd43
    PUSH EDI                            ; 0040dd46
    LEA EDI,[ESP + 0x11c]               ; 0040dd47
    PUSH EDI                            ; 0040dd4e
    CALL core_actor.cpp_FUN_004104e0    ; 0040dd4f
        ;   XREF to: 004104e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004104e0()
    ADD ESP,0x8                         ; 0040dd54
    LEA EDI,[EBX + 0x8]                 ; 0040dd57
    PUSH EDI                            ; 0040dd5a
    LEA EDI,[ESP + 0x120]               ; 0040dd5b
    PUSH EDI                            ; 0040dd62
    CALL core_actor.cpp_FUN_004104d0    ; 0040dd63
        ;   XREF to: 004104d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004104d0()
    ADD ESP,0x8                         ; 0040dd68
    LEA EDI,[ESP + 0x48]                ; 0040dd6b
    PUSH EDI                            ; 0040dd6f
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0040dd70
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    FLD float ptr [0x0061445c]          ; 0040dd75 | FLOAT_0061445c
    FLD float ptr [ESI]                 ; 0040dd7b
    FMUL ST1                            ; 0040dd7d
    ADD ESP,0x4                         ; 0040dd7f
    FSTP float ptr [ESP + 0x48]         ; 0040dd82
    FLD float ptr [ESI + 0x4]           ; 0040dd86
    FMUL ST1                            ; 0040dd89
    FSTP float ptr [ESP + 0x4c]         ; 0040dd8b
    FLD float ptr [ESI + 0x8]           ; 0040dd8f
    LEA ESI,[ESP + 0x18]                ; 0040dd92
    FMULP                               ; 0040dd96
    PUSH ESI                            ; 0040dd98
    FSTP float ptr [ESP + 0x54]         ; 0040dd99
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0040dd9d
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    FLD float ptr [0x00614460]          ; 0040dda2 | FLOAT_00614460
    FLD float ptr [EBX]                 ; 0040dda8
    FMUL ST1                            ; 0040ddaa
    ADD ESP,0x4                         ; 0040ddac
    FSTP float ptr [ESP + 0x18]         ; 0040ddaf
    FLD float ptr [EBX + 0x4]           ; 0040ddb3
    FMUL ST1                            ; 0040ddb6
    FSTP float ptr [ESP + 0x1c]         ; 0040ddb8
    FMUL float ptr [EBX + 0x8]          ; 0040ddbc
    LEA EBX,[ESP + 0xa8]                ; 0040ddbf
    LEA ESI,[ESP + 0x78]                ; 0040ddc6
    PUSH EBX                            ; 0040ddca
    FSTP float ptr [ESP + 0x24]         ; 0040ddcb
    CALL core_actor.cpp_CVector_ctor_FUN_00410340 ; 0040ddcf
        ;   XREF to: 00410340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 0040ddd4
    MOV EBX,dword ptr [0x006703e8]      ; 0040ddd7 | g_CDemonRendererInstance | g_CDemonRendererPtr
    FLD float ptr [ESP + 0x18]          ; 0040dddd
    FLD float ptr [ESP + 0x1c]          ; 0040dde1
    FLD float ptr [ESP + 0x20]          ; 0040dde5
    PUSH ESI                            ; 0040dde9
    LEA ESI,[ESP + 0x118]               ; 0040ddea
    FXCH ST2                            ; 0040ddf1
    FADD float ptr [ESP + 0x4c]         ; 0040ddf3
    FXCH                                ; 0040ddf7
    FADD float ptr [ESP + 0x50]         ; 0040ddf9
    FXCH ST2                            ; 0040ddfd
    FADD float ptr [ESP + 0x54]         ; 0040ddff
    FXCH                                ; 0040de03
    FSTP float ptr [ESP + 0xac]         ; 0040de05
    FXCH                                ; 0040de0c
    FSTP float ptr [ESP + 0xb0]         ; 0040de0e
    PUSH ESI                            ; 0040de15
    FSTP float ptr [ESP + 0xb8]         ; 0040de16
    CALL core_actor.cpp_FUN_004103d0    ; 0040de1d
        ;   XREF to: 004103d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004103d0()
    ADD ESP,0x8                         ; 0040de22
    LEA ESI,[ESP + 0x78]                ; 0040de25
    PUSH ESI                            ; 0040de29
    MOV EBX,dword ptr [EBX]             ; 0040de2a | g_CDemonRendererInstance
    PUSH EBX                            ; 0040de2c
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040de2d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040de32
    LEA EBX,[ESP + 0x12c]               ; 0040de35
    PUSH EBX                            ; 0040de3c
    LEA EBX,[ESP + 0xac]                ; 0040de3d
    PUSH EBX                            ; 0040de44
    MOV ESI,dword ptr [0x006703e8]      ; 0040de45 | g_CDemonRendererPtr
    CALL core_actor.cpp_FUN_004103d0    ; 0040de4b
        ;   XREF to: 004103d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004103d0()
    ADD ESP,0x8                         ; 0040de50
    LEA EBX,[ESP + 0x12c]               ; 0040de53
    PUSH EBX                            ; 0040de5a
    MOV EBX,dword ptr [ESI]             ; 0040de5b | g_CDemonRendererInstance
    ADD EBX,0x30                        ; 0040de5d
    PUSH EBX                            ; 0040de60
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040de61
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040de66
    MOV EBX,dword ptr [0x006703e8]      ; 0040de69 | g_CDemonRendererPtr
    SUB ESP,0x30                        ; 0040de6f
    MOV EBX,dword ptr [EBX]             ; 0040de72 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 0040de74
    MOV EDI,ESP                         ; 0040de79
    LEA ESI,[EBX + 0x30]                ; 0040de7b
    MOVSD.REP ES:EDI,ESI                ; 0040de7e
    SUB ESP,0x30                        ; 0040de80
    MOV ECX,0xc                         ; 0040de83
    MOV EDI,ESP                         ; 0040de88
    MOV ESI,EBX                         ; 0040de8a
    INC EBP                             ; 0040de8c
    MOVSD.REP ES:EDI,ESI                ; 0040de8d
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0040de8f
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)
    ADD ESP,0x60                        ; 0040de94
    CMP EBP,0x8                         ; 0040de97
    JL 0x0040d98d                       ; 0040de9a
        ;   XREF to: 0040d98d (CONDITIONAL_JUMP)  ; LAB_0040d98d
    MOV ESI,dword ptr [ESP + 0x150]     ; 0040dea0
    PUSH ESI                            ; 0040dea7
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0040dea8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040dead
    ADD ESP,0x13c                       ; 0040deb0
    POP EBP                             ; 0040deb6
    POP EDI                             ; 0040deb7
    POP ESI                             ; 0040deb8
    POP EBX                             ; 0040deb9
    RET                                 ; 0040deba

