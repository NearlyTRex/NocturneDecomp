; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_004d1f70(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
;
; Referenced Globals:
;   float FLOAT_0062ab09 = -2000
;   double DOUBLE_0062ab0d = 3
;   float FLOAT_0062ab15 = 0.005000000
;   double DOUBLE_0062ab1d = 200
;   float FLOAT_0062ab25 = 100
;   float FLOAT_0062ab29 = 200
;   float FLOAT_0062ab2d = 99
;   float FLOAT_0062ab31 = -1800
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190
;   core_frankgen.cpp_findLeader_FUN_004d2330
;   crt_math.c_floor_FUN_005feb90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1f70
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_renderOpaque_FUN_004d1f70
    PUSH ESI                            ; 004d1f71
    PUSH EDI                            ; 004d1f72
    PUSH EBP                            ; 004d1f73
    MOV EBP,ESP                         ; 004d1f74
    SUB ESP,0x24                        ; 004d1f76
    AND ESP,0xfffffff8                  ; 004d1f79
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d1f7c
    MOV EAX,[0x0067d550]                ; 004d1f7f | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 004d1f84 | DAT_02f33744
    JZ 0x004d1fa4                       ; 004d1f88
        ;   XREF to: 004d1fa4 (CONDITIONAL_JUMP)  ; LAB_004d1fa4
    CALL core_frankgen.cpp_findLeader_FUN_004d2330 ; 004d1f8a
        ;   XREF to: 004d2330 (UNCONDITIONAL_CALL)  ; CDemonActor * core_frankgen.cpp_findLeader_FUN_004d2330()
    FLD float ptr [EAX + 0x15c]         ; 004d1f8f
    PUSH EBX                            ; 004d1f95
    FSTP float ptr [EBX + 0x15c]        ; 004d1f96
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190 ; 004d1f9c
        ;   XREF to: 004d2190 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004d1fa1
    PUSH EBX                            ; 004d1fa4
        ;   Label: LAB_004d1fa4
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004d1fa5
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004d1faa
    LEA ESI,[ESP + 0x4]                 ; 004d1fad
    PUSH ESI                            ; 004d1fb1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d1fb2
    PUSH EBX                            ; 004d1fb8
    CALL dword ptr [EAX + 0x14]         ; 004d1fb9
    ADD ESP,0x8                         ; 004d1fbc
    PUSH EAX                            ; 004d1fbf
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004d1fc0
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004d1fc5
    MOV ESI,EAX                         ; 004d1fc8
    TEST EAX,EAX                        ; 004d1fca
    JNZ 0x004d1fe0                      ; 004d1fcc
        ;   XREF to: 004d1fe0 (CONDITIONAL_JUMP)  ; LAB_004d1fe0
    PUSH EBX                            ; 004d1fce
        ;   Label: LAB_004d1fce
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004d1fcf
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d1fd4
    MOV EAX,ESI                         ; 004d1fd7
    MOV ESP,EBP                         ; 004d1fd9
    POP EBP                             ; 004d1fdb
    POP EDI                             ; 004d1fdc
    POP ESI                             ; 004d1fdd
    POP EBX                             ; 004d1fde
    RET                                 ; 004d1fdf
    PUSH -0x1                           ; 004d1fe0
        ;   Label: LAB_004d1fe0
    LEA EAX,[EBX + 0x184]               ; 004d1fe2
    PUSH dword ptr [EBX + 0x180]        ; 004d1fe8
    PUSH EAX                            ; 004d1fee
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004d1fef
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    LEA EAX,[EBX + 0x384]               ; 004d1ff4
    MOV DL,byte ptr [EAX]               ; 004d1ffa
    ADD ESP,0xc                         ; 004d1ffc
    TEST DL,DL                          ; 004d1fff
    JZ 0x004d1fce                       ; 004d2001
        ;   XREF to: 004d1fce (CONDITIONAL_JUMP)  ; LAB_004d1fce
    MOV ECX,dword ptr [EBX + 0x15c]     ; 004d2003
    CMP ECX,0x4400c000                  ; 004d2009
    JL 0x004d2045                       ; 004d200f
        ;   XREF to: 004d2045 (CONDITIONAL_JUMP)  ; LAB_004d2045
    CMP ECX,0x44e10000                  ; 004d2011
    JGE 0x004d204e                      ; 004d2017
        ;   XREF to: 004d204e (CONDITIONAL_JUMP)  ; LAB_004d204e
    XOR EDI,EDI                         ; 004d2019
    MOV dword ptr [ESP],EDI             ; 004d201b
    PUSH -0x1                           ; 004d201e
        ;   Label: LAB_004d201e
    LEA EAX,[EBX + 0x30c]               ; 004d2020
    PUSH dword ptr [ESP + 0x4]          ; 004d2026
    PUSH EAX                            ; 004d202a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004d202b
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004d2030
    PUSH EBX                            ; 004d2033
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004d2034
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d2039
    MOV EAX,ESI                         ; 004d203c
    MOV ESP,EBP                         ; 004d203e
    POP EBP                             ; 004d2040
    POP EDI                             ; 004d2041
    POP ESI                             ; 004d2042
    POP EBX                             ; 004d2043
    RET                                 ; 004d2044
    MOV dword ptr [ESP],0x43490000      ; 004d2045
        ;   Label: LAB_004d2045
    JMP 0x004d201e                      ; 004d204c
        ;   XREF to: 004d201e (UNCONDITIONAL_JUMP)  ; LAB_004d201e
    CMP ECX,0x44ed8000                  ; 004d204e
        ;   Label: LAB_004d204e
    JGE 0x004d2067                      ; 004d2054
        ;   XREF to: 004d2067 (CONDITIONAL_JUMP)  ; LAB_004d2067
    FLD float ptr [EBX + 0x15c]         ; 004d2056
    FADD float ptr [0x0062ab31]         ; 004d205c | FLOAT_0062ab31
    FSTP float ptr [ESP]                ; 004d2062
    JMP 0x004d201e                      ; 004d2065
        ;   XREF to: 004d201e (UNCONDITIONAL_JUMP)  ; LAB_004d201e
    CMP ECX,0x44fa0000                  ; 004d2067
        ;   Label: LAB_004d2067
    JGE 0x004d2078                      ; 004d206d
        ;   XREF to: 004d2078 (CONDITIONAL_JUMP)  ; LAB_004d2078
    MOV dword ptr [ESP],0x42c80000      ; 004d206f
    JMP 0x004d201e                      ; 004d2076
        ;   XREF to: 004d201e (UNCONDITIONAL_JUMP)  ; LAB_004d201e
    FLD float ptr [EBX + 0x15c]         ; 004d2078
        ;   Label: LAB_004d2078
    FADD float ptr [0x0062ab09]         ; 004d207e | FLOAT_0062ab09
    FLD ST0                             ; 004d2084
    FMUL double ptr [0x0062ab0d]        ; 004d2086 | DOUBLE_0062ab0d
    FSTP ST1                            ; 004d208c
    FST float ptr [ESP]                 ; 004d208e
    FMUL float ptr [0x0062ab15]         ; 004d2091 | FLOAT_0062ab15
    SUB ESP,0x8                         ; 004d2097
    FSTP double ptr [ESP]               ; 004d209a
    CALL crt_math.c_floor_FUN_005feb90  ; 004d209d
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x24],EAX      ; 004d20a2
    MOV dword ptr [ESP + 0x28],EDX      ; 004d20a6
    FLD double ptr [ESP + 0x24]         ; 004d20aa
    FMUL double ptr [0x0062ab1d]        ; 004d20ae | DOUBLE_0062ab1d
    ADD ESP,0x8                         ; 004d20b4
    FSUBR float ptr [ESP]               ; 004d20b7
    FST float ptr [ESP]                 ; 004d20ba
    FCOMP float ptr [0x0062ab25]        ; 004d20bd | FLOAT_0062ab25
    FNSTSW AX                           ; 004d20c3
    SAHF                                ; 004d20c5
    JBE 0x004d20d4                      ; 004d20c6
        ;   XREF to: 004d20d4 (CONDITIONAL_JUMP)  ; LAB_004d20d4
    FLD float ptr [0x0062ab29]          ; 004d20c8 | FLOAT_0062ab29
    FSUB float ptr [ESP]                ; 004d20ce
    FSTP float ptr [ESP]                ; 004d20d1
    FLD float ptr [ESP]                 ; 004d20d4
        ;   Label: LAB_004d20d4
    FADD float ptr [0x0062ab2d]         ; 004d20d7 | FLOAT_0062ab2d
    FSTP float ptr [ESP]                ; 004d20dd
    JMP 0x004d201e                      ; 004d20e0
        ;   XREF to: 004d201e (UNCONDITIONAL_JUMP)  ; LAB_004d201e

