; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_004caa80(CFlame *this_ptr,int layer_flag)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   double DOUBLE_0062a13e = 5
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 g_CFlameClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004caa80
        ;   Label: core_flame.cpp_CFlame_renderBackground_FUN_004caa80
    PUSH ESI                            ; 004caa81
    PUSH EDI                            ; 004caa82
    PUSH EBP                            ; 004caa83
    MOV EBP,ESP                         ; 004caa84
    SUB ESP,0x28                        ; 004caa86
    AND ESP,0xfffffff8                  ; 004caa89
    MOV EAX,dword ptr [EBP + 0x14]      ; 004caa8c
    MOV EDX,dword ptr [0x006703ec]      ; 004caa8f | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [EAX + 0x2a0],0x0     ; 004caa95
    PUSH EDX                            ; 004caa9f | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x298],0x0     ; 004caaa0
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004caaaa
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004caaaf
    TEST EAX,EAX                        ; 004caab2
    JNZ 0x004caabc                      ; 004caab4
        ;   XREF to: 004caabc (CONDITIONAL_JUMP)  ; LAB_004caabc
    CMP dword ptr [EBP + 0x18],0x0      ; 004caab6
    JNZ 0x004caac3                      ; 004caaba
        ;   XREF to: 004caac3 (CONDITIONAL_JUMP)  ; LAB_004caac3
    MOV ESP,EBP                         ; 004caabc
        ;   Label: LAB_004caabc
    POP EBP                             ; 004caabe
    POP EDI                             ; 004caabf
    POP ESI                             ; 004caac0
    POP EBX                             ; 004caac1
    RET                                 ; 004caac2
    MOV EBX,dword ptr [EBP + 0x14]      ; 004caac3
        ;   Label: LAB_004caac3
    PUSH EBX                            ; 004caac6
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004caac7
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004caacc
    MOV EDX,ESP                         ; 004caacf
    PUSH EDX                            ; 004caad1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004caad2
    PUSH EBX                            ; 004caad8
    CALL dword ptr [EAX + 0x14]         ; 004caad9
    ADD ESP,0x8                         ; 004caadc
    PUSH EAX                            ; 004caadf
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004caae0
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004caae5
    PUSH EBX                            ; 004caae8
    MOV dword ptr [EBX + 0x290],EAX     ; 004caae9
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004caaef
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBX + 0x290]     ; 004caaf4
    ADD ESP,0x4                         ; 004caafa
    TEST EDX,EDX                        ; 004caafd
    JZ 0x004caabc                       ; 004caaff
        ;   XREF to: 004caabc (CONDITIONAL_JUMP)  ; LAB_004caabc
    FLD float ptr [EBX + 0x15c]         ; 004cab01
    FMUL ST0                            ; 004cab07
    FLD float ptr [EBX + 0x158]         ; 004cab09
    FMUL ST0                            ; 004cab0f
    FADDP                               ; 004cab11
    FLD float ptr [EBX + 0x160]         ; 004cab13
    FMUL ST0                            ; 004cab19
    FADDP                               ; 004cab1b
    FSQRT                               ; 004cab1d
    FLD1                                ; 004cab1f
    FCOMPP                              ; 004cab21
    FNSTSW AX                           ; 004cab23
    SAHF                                ; 004cab25
    JNC 0x004caabc                      ; 004cab26
        ;   XREF to: 004caabc (CONDITIONAL_JUMP)  ; LAB_004caabc
    FLD float ptr [EBX + 0x1ac]         ; 004cab28
    FLDZ                                ; 004cab2e
    FCOMPP                              ; 004cab30
    FNSTSW AX                           ; 004cab32
    SAHF                                ; 004cab34
    JNC 0x004caabc                      ; 004cab35
        ;   XREF to: 004caabc (CONDITIONAL_JUMP)  ; LAB_004caabc
    MOV ECX,dword ptr [EBX + 0x1a8]     ; 004cab37
    TEST ECX,ECX                        ; 004cab3d
    JNZ 0x004caabc                      ; 004cab3f
        ;   XREF to: 004caabc (CONDITIONAL_JUMP)  ; LAB_004caabc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004cab45
    MOV dword ptr [ESP + 0x24],ECX      ; 004cab48
    XOR EBX,EBX                         ; 004cab4c
    XOR EDI,EDI                         ; 004cab4e
    ADD ESI,0x20                        ; 004cab50
    MOV EAX,[0x006810c8]                ; 004cab53 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004cab53
    CMP EDI,dword ptr [EAX + 0x14d154]  ; 004cab58 | g_CDemonSetInstance.actor_count
    JL 0x004cab85                       ; 004cab5e
        ;   XREF to: 004cab85 (CONDITIONAL_JUMP)  ; LAB_004cab85
    CMP dword ptr [ESP + 0x24],0x0      ; 004cab60
    JNZ 0x004caabc                      ; 004cab65
        ;   XREF to: 004caabc (CONDITIONAL_JUMP)  ; LAB_004caabc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cab6b
    MOV dword ptr [EAX + 0x2a0],0x1     ; 004cab6e
    MOV ESP,EBP                         ; 004cab78
    POP EBP                             ; 004cab7a
    POP EDI                             ; 004cab7b
    POP ESI                             ; 004cab7c
    POP EBX                             ; 004cab7d
    RET                                 ; 004cab7e
    INC EDI                             ; 004cab7f
        ;   Label: LAB_004cab7f
    ADD EBX,0x4                         ; 004cab80
    JMP 0x004cab53                      ; 004cab83
        ;   XREF to: 004cab53 (UNCONDITIONAL_JUMP)  ; LAB_004cab53
    MOV EDX,dword ptr [0x02d7a6fc]      ; 004cab85 | g_CFlameClassInfo.name_hash
        ;   Label: LAB_004cab85
    PUSH EDX                            ; 004cab8b
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x14d158] ; 004cab8c | g_CDemonSetInstance.actors[0]
    PUSH ECX                            ; 004cab93
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004cab94
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EAX                         ; 004cab99
    ADD ESP,0x8                         ; 004cab9b
    TEST EAX,EAX                        ; 004cab9e
    JZ 0x004cab7f                       ; 004caba0
        ;   XREF to: 004cab7f (CONDITIONAL_JUMP)  ; LAB_004cab7f
    FLD float ptr [ESI]                 ; 004caba2
    FSUB float ptr [EAX + 0x20]         ; 004caba4
    FSTP float ptr [ESP + 0x18]         ; 004caba7
    FLD float ptr [ESI + 0x4]           ; 004cabab
    FSUB float ptr [EAX + 0x24]         ; 004cabae
    FST float ptr [ESP + 0x1c]          ; 004cabb1
    FMUL float ptr [ESP + 0x1c]         ; 004cabb5
    FLD float ptr [ESP + 0x18]          ; 004cabb9
    FMUL ST0                            ; 004cabbd
    FLD float ptr [ESI + 0x8]           ; 004cabbf
    FSUB float ptr [EAX + 0x28]         ; 004cabc2
    FXCH                                ; 004cabc5
    FADDP ST2,ST0                       ; 004cabc7
    FST float ptr [ESP + 0x20]          ; 004cabc9
    FMUL float ptr [ESP + 0x20]         ; 004cabcd
    FADDP                               ; 004cabd1
    ADD EAX,0x20                        ; 004cabd3
    FSQRT                               ; 004cabd6
    FCOMP double ptr [0x0062a13e]       ; 004cabd8 | DOUBLE_0062a13e
    FNSTSW AX                           ; 004cabde
    SAHF                                ; 004cabe0
    JNC 0x004cab7f                      ; 004cabe1
        ;   XREF to: 004cab7f (CONDITIONAL_JUMP)  ; LAB_004cab7f
    CMP dword ptr [EDX + 0x2a0],0x1     ; 004cabe3
    JNZ 0x004cab7f                      ; 004cabea
        ;   XREF to: 004cab7f (CONDITIONAL_JUMP)  ; LAB_004cab7f
    MOV ESP,EBP                         ; 004cabec
    POP EBP                             ; 004cabee
    POP EDI                             ; 004cabef
    POP ESI                             ; 004cabf0
    POP EBX                             ; 004cabf1
    RET                                 ; 004cabf2

