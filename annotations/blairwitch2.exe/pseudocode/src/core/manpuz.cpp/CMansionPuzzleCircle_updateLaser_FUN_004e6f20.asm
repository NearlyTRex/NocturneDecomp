; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_004e6f20(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
; float            Stack[0xc]:4   delta_time
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_004e57f0 at 004e5843
;
; Referenced Globals:
;   undefined4 DAT_005dc5ed
;   undefined4 DAT_005dc5f1
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_dirmat.cpp_FUN_00449530
;   core_fire.cpp_CFireEffect_traceLaser_FUN_0049db20
;   core_fire.cpp_SLaserInfo_ctor_FUN_0049dae0
;   core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6f20
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004e6f20
    PUSH ESI                            ; 004e6f21
    PUSH EDI                            ; 004e6f22
    PUSH EBP                            ; 004e6f23
    MOV EBP,ESP                         ; 004e6f24
    SUB ESP,0xe8                        ; 004e6f26
    AND ESP,0xfffffff8                  ; 004e6f2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e6f2f
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e6f32
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e6f35
    SUB EAX,EDX                         ; 004e6f3c
    SHL EAX,0x3                         ; 004e6f3e
    ADD EAX,EDX                         ; 004e6f41
    LEA EDI,[EBX + 0x74c]               ; 004e6f43
    SHL EAX,0x2                         ; 004e6f49
    LEA EDX,[EDI + EAX*0x1]             ; 004e6f4c
    MOV dword ptr [ESP + 0xe4],EDX      ; 004e6f4f
    MOV EDX,dword ptr [EDX]             ; 004e6f56
    XOR ESI,ESI                         ; 004e6f58
    TEST EDX,EDX                        ; 004e6f5a
    JZ 0x004e71b5                       ; 004e6f5c
        ;   XREF to: 004e71b5 (CONDITIONAL_JUMP)  ; LAB_004e71b5
    TEST ESI,ESI                        ; 004e6f62
        ;   Label: LAB_004e6f62
    JZ 0x004e71f2                       ; 004e6f64
        ;   XREF to: 004e71f2 (CONDITIONAL_JUMP)  ; LAB_004e71f2
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e6f6a
    FLD float ptr [EBX + EAX*0x4 + 0x15ec] ; 004e6f6d
    FADD float ptr [EBP + 0x1c]         ; 004e6f74
    FSTP float ptr [EBX + EAX*0x4 + 0x15ec] ; 004e6f77
        ;   Label: LAB_004e6f77
    MOV ESI,dword ptr [EBP + 0x18]      ; 004e6f7e
    SHL ESI,0x2                         ; 004e6f81
    ADD ESI,EBX                         ; 004e6f84
    FLDZ                                ; 004e6f86
    FLD float ptr [ESI + 0x15ec]        ; 004e6f88
    FSTP double ptr [ESP]               ; 004e6f8e
    FCOMP double ptr [ESP]              ; 004e6f91
    FNSTSW AX                           ; 004e6f94
    SAHF                                ; 004e6f96
    JNC 0x004e7204                      ; 004e6f97
        ;   XREF to: 004e7204 (CONDITIONAL_JUMP)  ; LAB_004e7204
    FLD1                                ; 004e6f9d
    FCOMP double ptr [ESP]              ; 004e6f9f
    FNSTSW AX                           ; 004e6fa2
    SAHF                                ; 004e6fa4
    JNC 0x004e6fb1                      ; 004e6fa5
        ;   XREF to: 004e6fb1 (CONDITIONAL_JUMP)  ; LAB_004e6fb1
    MOV dword ptr [ESI + 0x15ec],0x3f800000 ; 004e6fa7
    LEA EAX,[EBX + 0x740]               ; 004e6fb1
        ;   Label: LAB_004e6fb1
    PUSH EAX                            ; 004e6fb7
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004e6fb8
    ADD EAX,0x24                        ; 004e6fbf
    LEA ESI,[ESP + 0x60]                ; 004e6fc2
    PUSH EAX                            ; 004e6fc6
    LEA EDI,[ESP + 0x94]                ; 004e6fc7
    MOV dword ptr [ESP + 0xe8],EAX      ; 004e6fce
    CALL core_dirmat.cpp_FUN_00449530   ; 004e6fd5
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    ADD ESP,0x8                         ; 004e6fda
    LEA ESI,[ESP + 0x5c]                ; 004e6fdd
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004e6fe1
    MOVSD ES:EDI,ESI                    ; 004e6fe8
    MOVSD ES:EDI,ESI                    ; 004e6fe9
    MOVSD ES:EDI,ESI                    ; 004e6fea
    FLD float ptr [EAX + 0x10]          ; 004e6feb
    FLD float ptr [EAX + 0x14]          ; 004e6fee
    FLD float ptr [EAX + 0xc]           ; 004e6ff1
    LEA EDI,[ESP + 0xa4]                ; 004e6ff4
    LEA ESI,[ESP + 0x68]                ; 004e6ffb
    LEA EAX,[ESP + 0xa4]                ; 004e6fff
    FADD float ptr [ESP + 0x8c]         ; 004e7006
    FXCH ST2                            ; 004e700d
    FADD float ptr [ESP + 0x90]         ; 004e700f
    FXCH                                ; 004e7016
    FADD float ptr [ESP + 0x94]         ; 004e7018
    FXCH ST2                            ; 004e701f
    FSTP float ptr [ESP + 0x68]         ; 004e7021
    FSTP float ptr [ESP + 0x6c]         ; 004e7025
    FSTP float ptr [ESP + 0x70]         ; 004e7029
    PUSH EAX                            ; 004e702d
    MOVSD ES:EDI,ESI                    ; 004e702e
    MOVSD ES:EDI,ESI                    ; 004e702f
    MOVSD ES:EDI,ESI                    ; 004e7030
    PUSH EBX                            ; 004e7031
    LEA ESI,[ESP + 0x88]                ; 004e7032
    LEA EDI,[ESP + 0x7c]                ; 004e7039
    CALL core_actor.cpp_FUN_00408d70    ; 004e703d
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004e7042
    XOR EDX,EDX                         ; 004e7045
    LEA ESI,[ESP + 0x80]                ; 004e7047
    MOV dword ptr [ESP + 0x98],EDX      ; 004e704e
    MOVSD ES:EDI,ESI                    ; 004e7055
    MOVSD ES:EDI,ESI                    ; 004e7056
    MOVSD ES:EDI,ESI                    ; 004e7057
    FLD float ptr [EBX + 0x72c]         ; 004e7058
    FSUB float ptr [EBX + 0x744]        ; 004e705e
    FSTP float ptr [ESP + 0x9c]         ; 004e7064
    FLD float ptr [EBX + 0x1668]        ; 004e706b
    FMUL float ptr [0x005dc5ed]         ; 004e7071 | DAT_005dc5ed
    FLD float ptr [ESP + 0x9c]          ; 004e7077
    FXCH                                ; 004e707e
    FADD float ptr [EBX + 0x748]        ; 004e7080
    FXCH                                ; 004e7086
    FLD float ptr [0x005dc5f1]          ; 004e7088 | DAT_005dc5f1
    FXCH                                ; 004e708e
    FMUL ST1                            ; 004e7090
    FXCH ST2                            ; 004e7092
    FADD float ptr [EBX + 0x730]        ; 004e7094
    LEA EAX,[ESP + 0x98]                ; 004e709a
    FCHS                                ; 004e70a1
    FMULP                               ; 004e70a3
    PUSH EAX                            ; 004e70a5
    MOV ESI,dword ptr [ESP + 0xe4]      ; 004e70a6
    LEA EDI,[ESP + 0xb4]                ; 004e70ad
    PUSH ESI                            ; 004e70b4
    LEA ESI,[ESP + 0xd0]                ; 004e70b5
    FXCH                                ; 004e70bc
    FSTP float ptr [ESP + 0xa4]         ; 004e70be
    FSTP float ptr [ESP + 0xa8]         ; 004e70c5
    CALL core_dirmat.cpp_FUN_00449530   ; 004e70cc
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    ADD ESP,0x8                         ; 004e70d1
    LEA EAX,[ESP + 0xb0]                ; 004e70d4
    LEA ESI,[ESP + 0xc8]                ; 004e70db
    PUSH EAX                            ; 004e70e2
    MOVSD ES:EDI,ESI                    ; 004e70e3
    MOVSD ES:EDI,ESI                    ; 004e70e4
    MOVSD ES:EDI,ESI                    ; 004e70e5
    PUSH EBX                            ; 004e70e6
    LEA ESI,[ESP + 0xdc]                ; 004e70e7
    LEA EDI,[ESP + 0xc4]                ; 004e70ee
    CALL core_actor.cpp_FUN_00408cf0    ; 004e70f5
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0xdc]                ; 004e70fa
    ADD ESP,0x8                         ; 004e7101
    MOVSD ES:EDI,ESI                    ; 004e7104
    MOVSD ES:EDI,ESI                    ; 004e7105
    MOVSD ES:EDI,ESI                    ; 004e7106
    MOV EDI,dword ptr [0x0061b5a8]      ; 004e7107 | g_CDemonSetPtr
    PUSH EDI                            ; 004e710d
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004e710e
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e7113
    LEA EAX,[ESP + 0x8]                 ; 004e7116
    PUSH EAX                            ; 004e711a
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_0049dae0 ; 004e711b
        ;   XREF to: 0049dae0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_0049dae0(SLaserInfo * this_ptr)
    MOV EAX,0x2                         ; 004e7120
    ADD ESP,0x4                         ; 004e7125
    MOV dword ptr [ESP + 0x10],EAX      ; 004e7128
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e712c
    SHL EAX,0x2                         ; 004e712f
    MOV EDX,0x3da3d70a                  ; 004e7132
    ADD EBX,EAX                         ; 004e7137
    MOV dword ptr [ESP + 0xc],EDX       ; 004e7139
    MOV EAX,dword ptr [EBX + 0x155c]    ; 004e713d
    MOV dword ptr [ESP + 0x14],EAX      ; 004e7143
    MOV EAX,dword ptr [EBX + 0x158c]    ; 004e7147
    MOV dword ptr [ESP + 0x18],EAX      ; 004e714d
    MOV EAX,dword ptr [EBX + 0x15bc]    ; 004e7151
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e7157
    XOR ECX,ECX                         ; 004e715b
    MOV EAX,dword ptr [EBX + 0x15ec]    ; 004e715d
    PUSH ECX                            ; 004e7163
    MOV dword ptr [ESP + 0xc],EAX       ; 004e7164
    MOV dword ptr [ESP + 0x24],ECX      ; 004e7168
    MOV dword ptr [ESP + 0x28],ECX      ; 004e716c
    SUB ESP,0x54                        ; 004e7170
    LEA ESI,[ESP + 0x60]                ; 004e7173
    MOV EDI,ESP                         ; 004e7177
    LEA EAX,[ESP + 0x114]               ; 004e7179
    MOV ECX,0x15                        ; 004e7180
    PUSH EAX                            ; 004e7185
    LEA EAX,[ESP + 0xd0]                ; 004e7186
    MOVSD.REP ES:EDI,ESI                ; 004e718d
    PUSH EAX                            ; 004e718f
    MOV ESI,dword ptr [0x00614d30]      ; 004e7190 | DAT_00614d30
    PUSH ESI                            ; 004e7196
    CALL core_fire.cpp_CFireEffect_traceLaser_FUN_0049db20 ; 004e7197
        ;   XREF to: 0049db20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_traceLaser_FUN_0049db20(CFireEffect * this_ptr, CVector3f * origin, CVector3f * direction, SLaserInfo laser_info, ...)
    ADD ESP,0x64                        ; 004e719c
    MOV EDI,dword ptr [0x0061b5a8]      ; 004e719f | g_CDemonSetPtr
    PUSH EDI                            ; 004e71a5
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004e71a6
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e71ab
    MOV ESP,EBP                         ; 004e71ae
    POP EBP                             ; 004e71b0
    POP EDI                             ; 004e71b1
    POP ESI                             ; 004e71b2
    POP EBX                             ; 004e71b3
    RET                                 ; 004e71b4
    MOV ECX,dword ptr [EBP + 0x18]      ; 004e71b5
        ;   Label: LAB_004e71b5
    PUSH ECX                            ; 004e71b8
    PUSH EBX                            ; 004e71b9
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570 ; 004e71ba
        ;   XREF to: 004e7570 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570(CMansionPuzzleCircle * this_ptr, int panel_index)
    MOV EDX,EAX                         ; 004e71bf
    SHL EAX,0x2                         ; 004e71c1
    SUB EAX,EDX                         ; 004e71c4
    SHL EAX,0x3                         ; 004e71c6
    ADD EAX,EDX                         ; 004e71c9
    SHL EAX,0x2                         ; 004e71cb
    ADD EAX,EDI                         ; 004e71ce
    MOV ESI,0x1                         ; 004e71d0
    MOV EDI,dword ptr [EAX]             ; 004e71d5
    ADD ESP,0x8                         ; 004e71d7
    TEST EDI,EDI                        ; 004e71da
    JZ 0x004e6f62                       ; 004e71dc
        ;   XREF to: 004e6f62 (CONDITIONAL_JUMP)  ; LAB_004e6f62
    FLD float ptr [EAX + 0x8]           ; 004e71e2
    FLDZ                                ; 004e71e5
    FCOMPP                              ; 004e71e7
    FNSTSW AX                           ; 004e71e9
    SAHF                                ; 004e71eb
    JNC 0x004e6f62                      ; 004e71ec
        ;   XREF to: 004e6f62 (CONDITIONAL_JUMP)  ; LAB_004e6f62
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e71f2
        ;   Label: LAB_004e71f2
    FLD float ptr [EBX + EAX*0x4 + 0x15ec] ; 004e71f5
    FSUB float ptr [EBP + 0x1c]         ; 004e71fc
    JMP 0x004e6f77                      ; 004e71ff
        ;   XREF to: 004e6f77 (UNCONDITIONAL_JUMP)  ; LAB_004e6f77
    MOV dword ptr [ESI + 0x15ec],0x0    ; 004e7204
        ;   Label: LAB_004e7204
    MOV ESP,EBP                         ; 004e720e
    POP EBP                             ; 004e7210
    POP EDI                             ; 004e7211
    POP ESI                             ; 004e7212
    POP EBX                             ; 004e7213
    RET                                 ; 004e7214

