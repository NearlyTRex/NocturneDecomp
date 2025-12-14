; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_moon.cpp_CMoon_update_FUN_00529d60(CMoon * this_ptr, float delta_time)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_menu.cpp_configureCustomKeys_FUN_00511890 at 005118f2
;   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 at 00510d58
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00511eb7
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 00513035
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512d93
;
; Referenced Globals:
;   double DOUBLE_00639f61 = 0.0125000000000000
;   double DOUBLE_00639f69 = 0.580000000000000
;   double DOUBLE_00639f71 = 12
;   double DOUBLE_00639f79 = 60
;   float FLOAT_00639f81 = -60
;   double DOUBLE_00639f89 = 20
;   double DOUBLE_00639f91 = 30
;   int g_MoonBatsEnabled = 0x1
;   int g_GlobalDeltaTimeInt
;   int g_MoonCloudScrollX
;   int g_MoonCloudScrollY
;   float g_MoonAnimationTimer
;   CCourse[3] g_MoonBatCourses
;   SBat[30] g_MoonBats
;   undefined4 DAT_02f38210
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529d60
        ;   Label: core_moon.cpp_CMoon_update_FUN_00529d60
    PUSH ESI                            ; 00529d61
    PUSH EBP                            ; 00529d62
    MOV EBP,ESP                         ; 00529d63
    SUB ESP,0x18                        ; 00529d65
    AND ESP,0xfffffff8                  ; 00529d68
    MOV EAX,dword ptr [EBP + 0x14]      ; 00529d6b
    MOV EDX,dword ptr [EBP + 0x10]      ; 00529d6e
    MOV dword ptr [ESP],EAX             ; 00529d71
    FLD float ptr [ESP]                 ; 00529d74
    FMUL double ptr [0x00639f61]        ; 00529d77 | DOUBLE_00639f61
    FADD float ptr [EDX + 0x4]          ; 00529d7d
    FST float ptr [EDX + 0x4]           ; 00529d80
    FCOMP double ptr [0x00639f69]       ; 00529d83 | DOUBLE_00639f69
    FNSTSW AX                           ; 00529d89
    SAHF                                ; 00529d8b
    JA 0x00529e9c                       ; 00529d8c
        ;   XREF to: 00529e9c (CONDITIONAL_JUMP)  ; LAB_00529e9c
    FLD float ptr [ESP]                 ; 00529d92
        ;   Label: LAB_00529d92
    FMUL double ptr [0x00639f71]        ; 00529d95 | DOUBLE_00639f71
    FADD float ptr [0x02f381e4]         ; 00529d9b | g_MoonAnimationTimer
    FST float ptr [0x02f381e4]          ; 00529da1 | g_MoonAnimationTimer
    FCOMP double ptr [0x00639f79]       ; 00529da7 | DOUBLE_00639f79
    FNSTSW AX                           ; 00529dad
    SAHF                                ; 00529daf
    JC 0x00529dc4                       ; 00529db0
        ;   XREF to: 00529dc4 (CONDITIONAL_JUMP)  ; LAB_00529dc4
    FLD float ptr [0x02f381e4]          ; 00529db2 | g_MoonAnimationTimer
    FADD float ptr [0x00639f81]         ; 00529db8 | FLOAT_00639f81
    FSTP float ptr [0x02f381e4]         ; 00529dbe | g_MoonAnimationTimer
    MOV EAX,[0x02cf6a80]                ; 00529dc4 | g_GlobalDeltaTimeInt
        ;   Label: LAB_00529dc4
    MOV ECX,dword ptr [0x02f381dc]      ; 00529dc9 | g_MoonCloudScrollX
    SHL EAX,0x5                         ; 00529dcf
    ADD ECX,EAX                         ; 00529dd2
    MOV EAX,[0x02cf6a80]                ; 00529dd4 | g_GlobalDeltaTimeInt
    MOV EBX,dword ptr [0x02f381e0]      ; 00529dd9 | g_MoonCloudScrollY
    SHL EAX,0x4                         ; 00529ddf
    MOV ESI,dword ptr [0x0067d7d0]      ; 00529de2 | g_MoonBatsEnabled
    ADD EBX,EAX                         ; 00529de8
    MOV dword ptr [0x02f381dc],ECX      ; 00529dea | g_MoonCloudScrollX
    MOV dword ptr [0x02f381e0],EBX      ; 00529df0 | g_MoonCloudScrollY
    TEST ESI,ESI                        ; 00529df6
    JZ 0x00529e96                       ; 00529df8
        ;   XREF to: 00529e96 (CONDITIONAL_JUMP)  ; LAB_00529e96
    XOR EDX,EDX                         ; 00529dfe
    MOV EAX,dword ptr [EDX + 0x2f3820c] ; 00529e00 | g_MoonBats | DAT_02f38224
        ;   Label: LAB_00529e00
    IMUL EAX,EAX,0xc                    ; 00529e06
    FLD float ptr [ESP]                 ; 00529e09
    FMUL double ptr [0x00639f89]        ; 00529e0c | DOUBLE_00639f89
    FADD float ptr [EDX + 0x2f38210]    ; 00529e12 | DAT_02f38210 | DAT_02f38228
    ADD EAX,0x2f381e8                   ; 00529e18 | g_MoonBatCourses
    FSTP float ptr [EDX + 0x2f38210]    ; 00529e1d | DAT_02f38210 | DAT_02f38228
    MOV EAX,dword ptr [EAX]             ; 00529e23 | g_MoonBatCourses
    MOV dword ptr [ESP + 0x14],EAX      ; 00529e25
    FLD float ptr [EDX + 0x2f38210]     ; 00529e29 | DAT_02f38210 | DAT_02f38228
    FILD dword ptr [ESP + 0x14]         ; 00529e2f
    FSTP float ptr [ESP + 0x10]         ; 00529e33
    FCOMP float ptr [ESP + 0x10]        ; 00529e37
    FNSTSW AX                           ; 00529e3b
    SAHF                                ; 00529e3d
    JNC 0x00529eb2                      ; 00529e3e
        ;   XREF to: 00529eb2 (CONDITIONAL_JUMP)  ; LAB_00529eb2
    MOV EAX,[0x02f385dc]                ; 00529e40 | g_MoonBatModel.frame_count
        ;   Label: LAB_00529e40
    FLD float ptr [ESP]                 ; 00529e45
    MOV dword ptr [ESP + 0x14],EAX      ; 00529e48
    FMUL double ptr [0x00639f91]        ; 00529e4c | DOUBLE_00639f91
    FILD dword ptr [ESP + 0x14]         ; 00529e52
    FLD float ptr [EDX + 0x2f38214]     ; 00529e56 | DAT_02f38214 | DAT_02f3822c
    FXCH ST2                            ; 00529e5c
    FADD ST0,ST2                        ; 00529e5e
    FXCH                                ; 00529e60
    FSTP float ptr [ESP + 0xc]          ; 00529e62
    FSTP ST1                            ; 00529e66
    FST float ptr [EDX + 0x2f38214]     ; 00529e68 | DAT_02f38214 | DAT_02f3822c
    FCOMP float ptr [ESP + 0xc]         ; 00529e6e
    FNSTSW AX                           ; 00529e72
    SAHF                                ; 00529e74
    JC 0x00529e87                       ; 00529e75
        ;   XREF to: 00529e87 (CONDITIONAL_JUMP)  ; LAB_00529e87
    MOV EAX,EDX                         ; 00529e77
    LEA EAX,[EAX + 0x2f38214]           ; 00529e79 | DAT_02f38214
    FLD float ptr [EAX]                 ; 00529e7f | DAT_02f38214
    FSUB float ptr [ESP + 0xc]          ; 00529e81
    FSTP float ptr [EAX]                ; 00529e85 | DAT_02f38214
    ADD EDX,0x18                        ; 00529e87
        ;   Label: LAB_00529e87
    CMP EDX,0x2d0                       ; 00529e8a
    JNZ 0x00529e00                      ; 00529e90
        ;   XREF to: 00529e00 (CONDITIONAL_JUMP)  ; LAB_00529e00
    MOV ESP,EBP                         ; 00529e96
        ;   Label: LAB_00529e96
    POP EBP                             ; 00529e98
    POP ESI                             ; 00529e99
    POP EBX                             ; 00529e9a
    RET                                 ; 00529e9b
    MOV dword ptr [EDX + 0x4],0x3f147ae1 ; 00529e9c
        ;   Label: LAB_00529e9c
    MOV dword ptr [0x0067d7d0],0x1      ; 00529ea3 | g_MoonBatsEnabled
    JMP 0x00529d92                      ; 00529ead
        ;   XREF to: 00529d92 (UNCONDITIONAL_JUMP)  ; LAB_00529d92
    MOV EAX,EDX                         ; 00529eb2
        ;   Label: LAB_00529eb2
    LEA EAX,[EAX + 0x2f38210]           ; 00529eb4 | DAT_02f38228
    FLD float ptr [EAX]                 ; 00529eba | DAT_02f38228
    FSUB float ptr [ESP + 0x10]         ; 00529ebc
    FSTP float ptr [EAX]                ; 00529ec0 | DAT_02f38228
    JMP 0x00529e40                      ; 00529ec2
        ;   XREF to: 00529e40 (UNCONDITIONAL_JUMP)  ; LAB_00529e40

