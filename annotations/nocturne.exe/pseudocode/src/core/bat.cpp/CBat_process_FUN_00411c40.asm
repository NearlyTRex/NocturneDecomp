; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bat_cpp_CBat_process_FUN_00411c40(CBat *param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_00578807 = 4
;   double DOUBLE_0057880f = 35
;   double DOUBLE_00578817 = 10
;   double DOUBLE_0057881f = 60
;   double DOUBLE_00578827 = 0.700000000000000
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_bat.cpp_CBat_updateCoursePosition_FUN_00411f20
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411c40
        ;   Label: core_bat.cpp_CBat_process_FUN_00411c40
    PUSH ESI                            ; 00411c41
    PUSH EBP                            ; 00411c42
    MOV EBP,ESP                         ; 00411c43
    SUB ESP,0x28                        ; 00411c45
    AND ESP,0xfffffff8                  ; 00411c48
    MOV EBX,dword ptr [EBP + 0x10]      ; 00411c4b
    LEA ESI,[EBX + 0x20]                ; 00411c4e
    MOV EAX,dword ptr [ESI]             ; 00411c51
    MOV dword ptr [ESP + 0x10],EAX      ; 00411c53
    LEA EAX,[ESI + 0x4]                 ; 00411c57
    MOV EAX,dword ptr [EAX]             ; 00411c5a
    MOV dword ptr [ESP + 0x14],EAX      ; 00411c5c
    LEA EAX,[ESI + 0x8]                 ; 00411c60
    MOV EAX,dword ptr [EAX]             ; 00411c63
    MOV dword ptr [ESP + 0x18],EAX      ; 00411c65
    FLD float ptr [EBX + 0x300]         ; 00411c69
    FMUL float ptr [EBP + 0x14]         ; 00411c6f
    FADD float ptr [EBX + 0x2fc]        ; 00411c72
    PUSH EBX                            ; 00411c78
    FSTP float ptr [EBX + 0x2fc]        ; 00411c79
    CALL core_bat.cpp_CBat_updateCoursePosition_FUN_00411f20 ; 00411c7f
        ;   XREF to: 00411f20 (UNCONDITIONAL_CALL)  ; void core_bat.cpp_CBat_updateCoursePosition_FUN_00411f20(CBat * this_ptr)
    ADD ESP,0x4                         ; 00411c84
    FLD float ptr [ESI]                 ; 00411c87
    FSUB float ptr [ESP + 0x10]         ; 00411c89
    FSTP float ptr [ESP + 0x4]          ; 00411c8d
    FLD float ptr [ESI + 0x4]           ; 00411c91
    FSUB float ptr [ESP + 0x14]         ; 00411c94
    FST float ptr [ESP + 0x8]           ; 00411c98
    FMUL double ptr [0x00578807]        ; 00411c9c | DOUBLE_00578807
    FDIV float ptr [EBP + 0x14]         ; 00411ca2
    FLD float ptr [ESI + 0x8]           ; 00411ca5
    FSUB float ptr [ESP + 0x18]         ; 00411ca8
    FXCH                                ; 00411cac
    FADD double ptr [0x0057880f]        ; 00411cae | DOUBLE_0057880f
    FXCH                                ; 00411cb4
    FSTP float ptr [ESP + 0xc]          ; 00411cb6
    FST float ptr [ESP]                 ; 00411cba
    FCOMP double ptr [0x00578817]       ; 00411cbd | DOUBLE_00578817
    FNSTSW AX                           ; 00411cc3
    SAHF                                ; 00411cc5
    JC 0x00411d7a                       ; 00411cc6
        ;   XREF to: 00411d7a (CONDITIONAL_JUMP)  ; LAB_00411d7a
    FLD float ptr [ESP]                 ; 00411ccc
        ;   Label: LAB_00411ccc
    FCOMP double ptr [0x0057881f]       ; 00411ccf | DOUBLE_0057881f
    FNSTSW AX                           ; 00411cd5
    SAHF                                ; 00411cd7
    JBE 0x00411ce1                      ; 00411cd8
        ;   XREF to: 00411ce1 (CONDITIONAL_JUMP)  ; LAB_00411ce1
    MOV dword ptr [ESP],0x42700000      ; 00411cda
    FLD float ptr [ESP]                 ; 00411ce1
        ;   Label: LAB_00411ce1
    FSUB float ptr [EBX + 0x308]        ; 00411ce4
    FMUL double ptr [0x00578827]        ; 00411cea | DOUBLE_00578827
    FLD float ptr [EBX + 0x308]         ; 00411cf0
    FXCH                                ; 00411cf6
    FADD ST0,ST1                        ; 00411cf8
    FLD float ptr [EBP + 0x14]          ; 00411cfa
    FXCH                                ; 00411cfd
    FSTP ST2                            ; 00411cff
    FXCH                                ; 00411d01
    FSTP float ptr [EBX + 0x308]        ; 00411d03
    FMUL float ptr [EBX + 0x308]        ; 00411d09
    FMUL float ptr [EBX + 0x304]        ; 00411d0f
    LEA EAX,[EBX + 0x180]               ; 00411d15
    FADD float ptr [EBX + 0x17c]        ; 00411d1b
    PUSH EAX                            ; 00411d21
    FSTP float ptr [EBX + 0x17c]        ; 00411d22
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00411d28
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00411d2d
    MOV ESI,dword ptr [EAX + 0x100]     ; 00411d30
    MOV dword ptr [ESP + 0x24],ESI      ; 00411d36
    FILD dword ptr [ESP + 0x24]         ; 00411d3a
    FCOMP float ptr [EBX + 0x17c]       ; 00411d3e
    FNSTSW AX                           ; 00411d44
    SAHF                                ; 00411d46
    JA 0x00411d86                       ; 00411d47
        ;   XREF to: 00411d86 (CONDITIONAL_JUMP)  ; LAB_00411d86
    MOV dword ptr [EBX + 0x17c],0x0     ; 00411d49
    CMP byte ptr [EBX + 0x30c],0x0      ; 00411d53
        ;   Label: LAB_00411d53
    JZ 0x00411d74                       ; 00411d5a
        ;   XREF to: 00411d74 (CONDITIONAL_JUMP)  ; LAB_00411d74
    FLD float ptr [EBX + 0x37c]         ; 00411d5c
    FSUB float ptr [EBP + 0x14]         ; 00411d62
    FST float ptr [EBX + 0x37c]         ; 00411d65
    FLDZ                                ; 00411d6b
    FCOMPP                              ; 00411d6d
    FNSTSW AX                           ; 00411d6f
    SAHF                                ; 00411d71
    JNC 0x00411da4                      ; 00411d72
        ;   XREF to: 00411da4 (CONDITIONAL_JUMP)  ; LAB_00411da4
    MOV ESP,EBP                         ; 00411d74
        ;   Label: LAB_00411d74
    POP EBP                             ; 00411d76
    POP ESI                             ; 00411d77
    POP EBX                             ; 00411d78
    RET                                 ; 00411d79
    MOV dword ptr [ESP],0x41200000      ; 00411d7a
        ;   Label: LAB_00411d7a
    JMP 0x00411ccc                      ; 00411d81
        ;   XREF to: 00411ccc (UNCONDITIONAL_JUMP)  ; LAB_00411ccc
    FLDZ                                ; 00411d86
        ;   Label: LAB_00411d86
    FCOMP float ptr [EBX + 0x17c]       ; 00411d88
    FNSTSW AX                           ; 00411d8e
    SAHF                                ; 00411d90
    JBE 0x00411d53                      ; 00411d91
        ;   XREF to: 00411d53 (CONDITIONAL_JUMP)  ; LAB_00411d53
    DEC ESI                             ; 00411d93
    MOV dword ptr [ESP + 0x24],ESI      ; 00411d94
    FILD dword ptr [ESP + 0x24]         ; 00411d98
    FSTP float ptr [EBX + 0x17c]        ; 00411d9c
    JMP 0x00411d53                      ; 00411da2
        ;   XREF to: 00411d53 (UNCONDITIONAL_JUMP)  ; LAB_00411d53
    MOV ESI,dword ptr [EBX + 0x378]     ; 00411da4
        ;   Label: LAB_00411da4
    PUSH ESI                            ; 00411daa
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00411dab
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00411db0
    TEST EAX,EAX                        ; 00411db3
    JNZ 0x00411dfe                      ; 00411db5
        ;   XREF to: 00411dfe (CONDITIONAL_JUMP)  ; LAB_00411dfe
    PUSH 0x40490000                     ; 00411db7
    PUSH EAX                            ; 00411dbc
    SUB ESP,0x8                         ; 00411dbd
    FLD float ptr [EBX + 0x28]          ; 00411dc0
    FSTP double ptr [ESP]               ; 00411dc3
    SUB ESP,0x8                         ; 00411dc6
    FLD float ptr [EBX + 0x24]          ; 00411dc9
    FSTP double ptr [ESP]               ; 00411dcc
    SUB ESP,0x8                         ; 00411dcf
    FLD float ptr [EBX + 0x20]          ; 00411dd2
    FSTP double ptr [ESP]               ; 00411dd5
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880 ; 00411dd8
        ;   XREF to: 00527880 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880(double pos_x, double pos_y, double pos_z, double radius)
    ADD ESP,0x20                        ; 00411ddd
    TEST EAX,EAX                        ; 00411de0
    JZ 0x00411dfe                       ; 00411de2
        ;   XREF to: 00411dfe (CONDITIONAL_JUMP)  ; LAB_00411dfe
    LEA EAX,[EBX + 0x30c]               ; 00411de4
    PUSH EAX                            ; 00411dea
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00411deb
    PUSH EBX                            ; 00411df1
    CALL dword ptr [ESI + 0x28]         ; 00411df2
    ADD ESP,0x8                         ; 00411df5
    MOV dword ptr [EBX + 0x378],EAX     ; 00411df8
    PUSH dword ptr [EBX + 0x374]        ; 00411dfe
        ;   Label: LAB_00411dfe
    PUSH dword ptr [EBX + 0x370]        ; 00411e04
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00411e0a
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00411e0f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00411e13
    MOV dword ptr [EBX + 0x37c],EAX     ; 00411e17
    ADD ESP,0x8                         ; 00411e1d
    MOV ESP,EBP                         ; 00411e20
    POP EBP                             ; 00411e22
    POP ESI                             ; 00411e23
    POP EBX                             ; 00411e24
    RET                                 ; 00411e25

