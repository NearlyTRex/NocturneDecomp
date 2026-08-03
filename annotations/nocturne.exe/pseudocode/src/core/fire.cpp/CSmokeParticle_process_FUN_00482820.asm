; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_00482820(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0048a390 at 0048a641
;
; Referenced Globals:
;   float FLOAT_00581074 = 30
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CGame_01c775ec.delta_time_float
;   undefined4 g_CDemonSet_01e57284.active_fog.scroll.x
;   undefined4 g_CDemonSet_01e57284.active_fog.scroll.y
;   undefined4 g_CDemonSet_01e57284.active_fog.scroll.z
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482820
        ;   Label: core_fire.cpp_CSmokeParticle_process_FUN_00482820
    SUB ESP,0x20                        ; 00482821
    MOV EBX,dword ptr [ESP + 0x28]      ; 00482824
    MOV EAX,[0x005b9354]                ; 00482828 | g_CGame_PTR_005b9354
    MOV EAX,dword ptr [EAX + 0x264]     ; 0048282d | g_CGame_01c775ec.delta_time_float
    MOV dword ptr [ESP + 0x18],EAX      ; 00482833
    FLD float ptr [ESP + 0x18]          ; 00482837
    FMUL float ptr [0x00581074]         ; 0048283b | FLOAT_00581074
    FADD float ptr [EBX + 0x18]         ; 00482841
    FSTP float ptr [EBX + 0x18]         ; 00482844
    CMP dword ptr [EBX + 0x18],0x42200000 ; 00482847
    JL 0x0048285b                       ; 0048284e
        ;   XREF to: 0048285b (CONDITIONAL_JUMP)  ; LAB_0048285b
    MOV dword ptr [EBX],0x0             ; 00482850
    ADD ESP,0x20                        ; 00482856
    POP EBX                             ; 00482859
    RET                                 ; 0048285a
    FLD float ptr [ESP + 0x18]          ; 0048285b
        ;   Label: LAB_0048285b
    FMUL float ptr [EBX + 0x10]         ; 0048285f
    FMUL float ptr [EBX + 0x14]         ; 00482862
    PUSH 0x3f800000                     ; 00482865
    FADD float ptr [EBX + 0x8]          ; 0048286a
    PUSH 0xbf800000                     ; 0048286d
    FSTP float ptr [EBX + 0x8]          ; 00482872
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00482875
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x24],EAX      ; 0048287a
    FLD float ptr [ESP + 0x24]          ; 0048287e
    ADD ESP,0x8                         ; 00482882
    FMUL float ptr [ESP + 0x18]         ; 00482885
    PUSH 0x3f800000                     ; 00482889
    FADD float ptr [EBX + 0x4]          ; 0048288e
    PUSH 0xbf800000                     ; 00482891
    FSTP float ptr [EBX + 0x4]          ; 00482896
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00482899
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x24],EAX      ; 0048289e
    FLD float ptr [ESP + 0x24]          ; 004828a2
    ADD ESP,0x8                         ; 004828a6
    FMUL float ptr [ESP + 0x18]         ; 004828a9
    FADD float ptr [EBX + 0xc]          ; 004828ad
    LEA EAX,[EBX + 0x1c]                ; 004828b0
    FSTP float ptr [EBX + 0xc]          ; 004828b3
    FLD float ptr [EAX]                 ; 004828b6
    FMUL float ptr [ESP + 0x18]         ; 004828b8
    FSTP float ptr [ESP + 0xc]          ; 004828bc
    FLD float ptr [EAX + 0x4]           ; 004828c0
    FMUL float ptr [ESP + 0x18]         ; 004828c3
    FSTP float ptr [ESP + 0x10]         ; 004828c7
    FLD float ptr [EAX + 0x8]           ; 004828cb
    FMUL float ptr [ESP + 0x18]         ; 004828ce
    LEA EAX,[EBX + 0x4]                 ; 004828d2
    FSTP float ptr [ESP + 0x14]         ; 004828d5
    FLD float ptr [EAX]                 ; 004828d9
    FADD float ptr [ESP + 0xc]          ; 004828db
    FLD float ptr [EAX + 0x4]           ; 004828df
    FXCH                                ; 004828e2
    FSTP float ptr [EAX]                ; 004828e4
    FADD float ptr [ESP + 0x10]         ; 004828e6
    FLD float ptr [EAX + 0x8]           ; 004828ea
    FXCH                                ; 004828ed
    FSTP float ptr [EAX + 0x4]          ; 004828ef
    FADD float ptr [ESP + 0x14]         ; 004828f2
    MOV EBX,dword ptr [0x005be368]      ; 004828f6 | g_CDemonSet_PTR_005be368
    FSTP float ptr [EAX + 0x8]          ; 004828fc
    FLD float ptr [EBX + 0x15a878]      ; 004828ff | g_CDemonSet_01e57284.active_fog.scroll.x
    FMUL float ptr [ESP + 0x18]         ; 00482905
    FSTP float ptr [ESP]                ; 00482909
    FLD float ptr [EBX + 0x15a87c]      ; 0048290c | g_CDemonSet_01e57284.active_fog.scroll.y
    FMUL float ptr [ESP + 0x18]         ; 00482912
    FSTP float ptr [ESP + 0x4]          ; 00482916
    FLD float ptr [EBX + 0x15a880]      ; 0048291a | g_CDemonSet_01e57284.active_fog.scroll.z
    FMUL float ptr [ESP + 0x18]         ; 00482920
    FSTP float ptr [ESP + 0x8]          ; 00482924
    FLD float ptr [EAX]                 ; 00482928
    FADD float ptr [ESP]                ; 0048292a
    FLD float ptr [EAX + 0x4]           ; 0048292d
    FXCH                                ; 00482930
    FSTP float ptr [EAX]                ; 00482932
    FADD float ptr [ESP + 0x4]          ; 00482934
    FLD float ptr [EAX + 0x8]           ; 00482938
    FXCH                                ; 0048293b
    FSTP float ptr [EAX + 0x4]          ; 0048293d
    FADD float ptr [ESP + 0x8]          ; 00482940
    FSTP float ptr [EAX + 0x8]          ; 00482944
    ADD ESP,0x20                        ; 00482947
    POP EBX                             ; 0048294a
    RET                                 ; 0048294b

