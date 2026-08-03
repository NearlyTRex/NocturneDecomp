; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_0048df20(CFlame *this_ptr,int layer_flag)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; Referenced Globals:
;   double DOUBLE_00581597 = 5
;   undefined4 DAT_005ae704
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   undefined4 g_CFlameActorType_01c70618.name_hash
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048df20
        ;   Label: core_flame.cpp_CFlame_renderBackground_FUN_0048df20
    PUSH ESI                            ; 0048df21
    PUSH EDI                            ; 0048df22
    PUSH EBP                            ; 0048df23
    MOV EBP,ESP                         ; 0048df24
    SUB ESP,0x28                        ; 0048df26
    AND ESP,0xfffffff8                  ; 0048df29
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048df2c
    MOV EDX,dword ptr [0x005ae704]      ; 0048df2f | DAT_005ae704
    MOV dword ptr [EAX + 0x298],0x0     ; 0048df35
    PUSH EDX                            ; 0048df3f | DAT_01b4d738
    MOV dword ptr [EAX + 0x290],0x0     ; 0048df40
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0048df4a
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0048df4f
    TEST EAX,EAX                        ; 0048df52
    JNZ 0x0048df5c                      ; 0048df54
        ;   XREF to: 0048df5c (CONDITIONAL_JUMP)  ; LAB_0048df5c
    CMP dword ptr [EBP + 0x18],0x0      ; 0048df56
    JNZ 0x0048df63                      ; 0048df5a
        ;   XREF to: 0048df63 (CONDITIONAL_JUMP)  ; LAB_0048df63
    MOV ESP,EBP                         ; 0048df5c
        ;   Label: LAB_0048df5c
    POP EBP                             ; 0048df5e
    POP EDI                             ; 0048df5f
    POP ESI                             ; 0048df60
    POP EBX                             ; 0048df61
    RET                                 ; 0048df62
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048df63
        ;   Label: LAB_0048df63
    PUSH EBX                            ; 0048df66
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0048df67
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 0048df6c
    PUSH 0x0                            ; 0048df6f
    LEA EDX,[ESP + 0x4]                 ; 0048df71
    PUSH EDX                            ; 0048df75
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0048df76
    PUSH EBX                            ; 0048df7c
    CALL dword ptr [EAX + 0x14]         ; 0048df7d
    ADD ESP,0x8                         ; 0048df80
    PUSH EAX                            ; 0048df83
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0048df84
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0048df89
    PUSH EBX                            ; 0048df8c
    MOV dword ptr [EBX + 0x288],EAX     ; 0048df8d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0048df93
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBX + 0x288]     ; 0048df98
    ADD ESP,0x4                         ; 0048df9e
    TEST EDX,EDX                        ; 0048dfa1
    JZ 0x0048df5c                       ; 0048dfa3
        ;   XREF to: 0048df5c (CONDITIONAL_JUMP)  ; LAB_0048df5c
    FLD float ptr [EBX + 0x154]         ; 0048dfa5
    FMUL ST0                            ; 0048dfab
    FLD float ptr [EBX + 0x150]         ; 0048dfad
    FMUL ST0                            ; 0048dfb3
    FADDP                               ; 0048dfb5
    FLD float ptr [EBX + 0x158]         ; 0048dfb7
    FMUL ST0                            ; 0048dfbd
    FADDP                               ; 0048dfbf
    FSQRT                               ; 0048dfc1
    FLD1                                ; 0048dfc3
    FCOMPP                              ; 0048dfc5
    FNSTSW AX                           ; 0048dfc7
    SAHF                                ; 0048dfc9
    JNC 0x0048df5c                      ; 0048dfca
        ;   XREF to: 0048df5c (CONDITIONAL_JUMP)  ; LAB_0048df5c
    FLD float ptr [EBX + 0x1a4]         ; 0048dfcc
    FLDZ                                ; 0048dfd2
    FCOMPP                              ; 0048dfd4
    FNSTSW AX                           ; 0048dfd6
    SAHF                                ; 0048dfd8
    JNC 0x0048df5c                      ; 0048dfd9
        ;   XREF to: 0048df5c (CONDITIONAL_JUMP)  ; LAB_0048df5c
    MOV ECX,dword ptr [EBX + 0x1a0]     ; 0048dfdb
    TEST ECX,ECX                        ; 0048dfe1
    JNZ 0x0048df5c                      ; 0048dfe3
        ;   XREF to: 0048df5c (CONDITIONAL_JUMP)  ; LAB_0048df5c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048dfe9
    MOV dword ptr [ESP + 0x24],ECX      ; 0048dfec
    XOR EBX,EBX                         ; 0048dff0
    XOR EDI,EDI                         ; 0048dff2
    ADD ESI,0x20                        ; 0048dff4
    MOV EAX,[0x005be368]                ; 0048dff7 | g_CDemonSet_PTR_005be368 | g_CDemonSet_01e57284
        ;   Label: LAB_0048dff7
    CMP EDI,dword ptr [EAX + 0x14cd6c]  ; 0048dffc | g_CDemonSet_01e57284.actor_count
    JL 0x0048e029                       ; 0048e002
        ;   XREF to: 0048e029 (CONDITIONAL_JUMP)  ; LAB_0048e029
    CMP dword ptr [ESP + 0x24],0x0      ; 0048e004
    JNZ 0x0048df5c                      ; 0048e009
        ;   XREF to: 0048df5c (CONDITIONAL_JUMP)  ; LAB_0048df5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048e00f
    MOV dword ptr [EAX + 0x298],0x1     ; 0048e012
    MOV ESP,EBP                         ; 0048e01c
    POP EBP                             ; 0048e01e
    POP EDI                             ; 0048e01f
    POP ESI                             ; 0048e020
    POP EBX                             ; 0048e021
    RET                                 ; 0048e022
    INC EDI                             ; 0048e023
        ;   Label: LAB_0048e023
    ADD EBX,0x4                         ; 0048e024
    JMP 0x0048dff7                      ; 0048e027
        ;   XREF to: 0048dff7 (UNCONDITIONAL_JUMP)  ; LAB_0048dff7
    MOV EDX,dword ptr [0x01c70650]      ; 0048e029 | g_CFlameActorType_01c70618.name_hash
        ;   Label: LAB_0048e029
    PUSH EDX                            ; 0048e02f
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x14cd70] ; 0048e030 | g_CDemonSet_01e57284.actors[0]
    PUSH ECX                            ; 0048e037
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0048e038
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EAX                         ; 0048e03d
    ADD ESP,0x8                         ; 0048e03f
    TEST EAX,EAX                        ; 0048e042
    JZ 0x0048e023                       ; 0048e044
        ;   XREF to: 0048e023 (CONDITIONAL_JUMP)  ; LAB_0048e023
    FLD float ptr [ESI]                 ; 0048e046
    FSUB float ptr [EAX + 0x20]         ; 0048e048
    FSTP float ptr [ESP + 0x18]         ; 0048e04b
    FLD float ptr [ESI + 0x4]           ; 0048e04f
    FSUB float ptr [EAX + 0x24]         ; 0048e052
    FST float ptr [ESP + 0x1c]          ; 0048e055
    FMUL float ptr [ESP + 0x1c]         ; 0048e059
    FLD float ptr [ESP + 0x18]          ; 0048e05d
    FMUL ST0                            ; 0048e061
    FLD float ptr [ESI + 0x8]           ; 0048e063
    FSUB float ptr [EAX + 0x28]         ; 0048e066
    FXCH                                ; 0048e069
    FADDP ST2,ST0                       ; 0048e06b
    FST float ptr [ESP + 0x20]          ; 0048e06d
    FMUL float ptr [ESP + 0x20]         ; 0048e071
    FADDP                               ; 0048e075
    ADD EAX,0x20                        ; 0048e077
    FSQRT                               ; 0048e07a
    FCOMP double ptr [0x00581597]       ; 0048e07c | DOUBLE_00581597
    FNSTSW AX                           ; 0048e082
    SAHF                                ; 0048e084
    JNC 0x0048e023                      ; 0048e085
        ;   XREF to: 0048e023 (CONDITIONAL_JUMP)  ; LAB_0048e023
    CMP dword ptr [EDX + 0x298],0x1     ; 0048e087
    JNZ 0x0048e023                      ; 0048e08e
        ;   XREF to: 0048e023 (CONDITIONAL_JUMP)  ; LAB_0048e023
    MOV ESP,EBP                         ; 0048e090
    POP EBP                             ; 0048e092
    POP EDI                             ; 0048e093
    POP ESI                             ; 0048e094
    POP EBX                             ; 0048e095
    RET                                 ; 0048e096

