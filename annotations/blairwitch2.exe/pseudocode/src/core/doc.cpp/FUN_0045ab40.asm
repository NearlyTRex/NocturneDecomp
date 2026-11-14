; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_0045ab40(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d059f
;   undefined4 DAT_005f515c
;   undefined4 DAT_005f5160
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01b4d264
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_main.c_FUN_004e4500
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0
;   core_setcolid.cpp_FUN_00535ee0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_math.c_acos_FUN_005b9924
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ab40
        ;   Label: core_doc.cpp_FUN_0045ab40
    PUSH ESI                            ; 0045ab41
    PUSH EDI                            ; 0045ab42
    PUSH EBP                            ; 0045ab43
    MOV EBP,ESP                         ; 0045ab44
    SUB ESP,0x164                       ; 0045ab46
    AND ESP,0xfffffff8                  ; 0045ab4c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045ab4f
    CMP dword ptr [EBX + 0x25698],0x0   ; 0045ab52
    JZ 0x0045afef                       ; 0045ab59
        ;   XREF to: 0045afef (CONDITIONAL_JUMP)  ; LAB_0045afef
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045ab5f
        ;   Label: LAB_0045ab5f
    PUSH EAX                            ; 0045ab65
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0045ab66
    LEA ESI,[ESP + 0x110]               ; 0045ab6c
    CALL dword ptr [EDX + 0xe8]         ; 0045ab73
    ADD ESP,0x4                         ; 0045ab79
    LEA EAX,[EBX + 0x25674]             ; 0045ab7c
    LEA EDI,[ESP + 0x58]                ; 0045ab82
    MOV dword ptr [ESP + 0x158],EAX     ; 0045ab86
    MOV EAX,[0x01b4d264]                ; 0045ab8d | DAT_01b4d264
    LEA ESI,[ESP + 0x10c]               ; 0045ab92
    MOV dword ptr [ESP + 0x14c],EAX     ; 0045ab99
    MOV EAX,0x3f060a92                  ; 0045aba0
    MOVSD ES:EDI,ESI                    ; 0045aba5
    MOVSD ES:EDI,ESI                    ; 0045aba6
    MOVSD ES:EDI,ESI                    ; 0045aba7
    MOV dword ptr [ESP + 0x148],EAX     ; 0045aba8
    LEA EAX,[ESP + 0x58]                ; 0045abaf
    MOV EDI,0xbfa78d36                  ; 0045abb3
    PUSH EAX                            ; 0045abb8
    MOV EDX,dword ptr [EBX + 0x25698]   ; 0045abb9
    LEA ESI,[ESP + 0xe0]                ; 0045abbf
    PUSH EDX                            ; 0045abc6
    MOV dword ptr [ESP + 0x14c],EDI     ; 0045abc7
    LEA EDI,[ESP + 0x90]                ; 0045abce
    CALL core_actor.cpp_FUN_00408d70    ; 0045abd5
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xe4]                ; 0045abda
    LEA EAX,[ESP + 0x54]                ; 0045abe1
    ADD ESP,0x8                         ; 0045abe5
    XOR ECX,ECX                         ; 0045abe8
    MOVSD ES:EDI,ESI                    ; 0045abea
    MOVSD ES:EDI,ESI                    ; 0045abeb
    MOVSD ES:EDI,ESI                    ; 0045abec
    MOV dword ptr [ESP + 0x4c],ECX      ; 0045abed
    MOV EDI,0x447a0000                  ; 0045abf1
    MOV dword ptr [ESP + 0x50],ECX      ; 0045abf6
    MOV dword ptr [ESP + 0x54],EDI      ; 0045abfa
    PUSH EAX                            ; 0045abfe
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045abff
    PUSH EAX                            ; 0045ac05
    LEA ESI,[ESP + 0x3c]                ; 0045ac06
    LEA EDI,[ESP + 0x12c]               ; 0045ac0a
    CALL core_actor.cpp_FUN_00408cf0    ; 0045ac11
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x3c]                ; 0045ac16
    ADD ESP,0x8                         ; 0045ac1a
    MOV EDX,dword ptr [0x0061b5a8]      ; 0045ac1d | g_CDemonSetPtr
    FLD float ptr [ESP + 0x88]          ; 0045ac23
    FLD float ptr [ESP + 0x8c]          ; 0045ac2a
    FLD float ptr [ESP + 0x90]          ; 0045ac31
    MOVSD ES:EDI,ESI                    ; 0045ac38
    MOVSD ES:EDI,ESI                    ; 0045ac39
    MOVSD ES:EDI,ESI                    ; 0045ac3a
    PUSH 0x0                            ; 0045ac3b
    LEA EDI,[ESP + 0x11c]               ; 0045ac3d
    LEA ESI,[ESP + 0x134]               ; 0045ac44
    PUSH 0x0                            ; 0045ac4b
    FXCH ST2                            ; 0045ac4d
    FADD float ptr [ESP + 0x12c]        ; 0045ac4f
    FXCH                                ; 0045ac56
    FADD float ptr [ESP + 0x130]        ; 0045ac58
    FXCH ST2                            ; 0045ac5f
    FADD float ptr [ESP + 0x134]        ; 0045ac61
    PUSH 0xff                           ; 0045ac68
    FXCH                                ; 0045ac6d
    FSTP float ptr [ESP + 0x13c]        ; 0045ac6f
    FXCH                                ; 0045ac76
    FSTP float ptr [ESP + 0x140]        ; 0045ac78
    PUSH 0x1                            ; 0045ac7f
    FSTP float ptr [ESP + 0x148]        ; 0045ac81
    PUSH EDX                            ; 0045ac88
    MOVSD ES:EDI,ESI                    ; 0045ac89
    MOVSD ES:EDI,ESI                    ; 0045ac8a
    MOVSD ES:EDI,ESI                    ; 0045ac8b
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0 ; 0045ac8c
        ;   XREF to: 00537ef0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 0045ac91
    MOV ECX,dword ptr [EBX + 0x25698]   ; 0045ac94
    PUSH ECX                            ; 0045ac9a
    MOV ESI,dword ptr [0x0061b5a8]      ; 0045ac9b | g_CDemonSetPtr
    PUSH ESI                            ; 0045aca1
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0045aca2
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045aca7
    PUSH EBX                            ; 0045acaa
    MOV EDI,dword ptr [0x0061b5a8]      ; 0045acab | g_CDemonSetPtr
    PUSH EDI                            ; 0045acb1
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0045acb2
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045acb7
    LEA EAX,[ESP + 0x118]               ; 0045acba
    PUSH EAX                            ; 0045acc1
    LEA EAX,[ESP + 0x8c]                ; 0045acc2
    PUSH EAX                            ; 0045acc9
    MOV EAX,[0x0061b5a8]                ; 0045acca | g_CDemonSetPtr
    PUSH EAX                            ; 0045accf
    CALL core_setcolid.cpp_FUN_00535ee0 ; 0045acd0
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0045acd5
    FLD float ptr [ESP + 0x16c]         ; 0045acdc
    ADD ESP,0xc                         ; 0045ace3
    MOV EDX,dword ptr [0x0061b5a8]      ; 0045ace6 | g_CDemonSetPtr
    PUSH EDX                            ; 0045acec
    FSTP float ptr [ESP + 0x2c]         ; 0045aced
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0045acf1
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0045acf6
    FLDZ                                ; 0045acf9
    FLD float ptr [ESP + 0x28]          ; 0045acfb
    FSTP double ptr [ESP + 0x20]        ; 0045acff
    FCOMP double ptr [ESP + 0x20]       ; 0045ad03
    FNSTSW AX                           ; 0045ad07
    SAHF                                ; 0045ad09
    JBE 0x0045b017                      ; 0045ad0a
        ;   XREF to: 0045b017 (CONDITIONAL_JUMP)  ; LAB_0045b017
    MOV dword ptr [ESP + 0x28],0x3f800000 ; 0045ad10
        ;   Label: LAB_0045ad10
    FLD float ptr [ESP + 0x28]          ; 0045ad18
        ;   Label: LAB_0045ad18
    FLD float ptr [ESP + 0x124]         ; 0045ad1c
    FMUL ST1                            ; 0045ad23
    FLD float ptr [ESP + 0x128]         ; 0045ad25
    FMUL ST2                            ; 0045ad2c
    FLD float ptr [ESP + 0x12c]         ; 0045ad2e
    FMULP ST3                           ; 0045ad35
    FLD float ptr [ESP + 0x88]          ; 0045ad37
    FLD float ptr [ESP + 0x8c]          ; 0045ad3e
    LEA EDI,[ESP + 0x40]                ; 0045ad45
    LEA ESI,[ESP + 0xd0]                ; 0045ad49
    FXCH ST3                            ; 0045ad50
    FSTP float ptr [ESP + 0xd0]         ; 0045ad52
    FXCH                                ; 0045ad59
    FSTP float ptr [ESP + 0xd4]         ; 0045ad5b
    FXCH ST2                            ; 0045ad62
    FSTP float ptr [ESP + 0xd8]         ; 0045ad64
    MOVSD ES:EDI,ESI                    ; 0045ad6b
    MOVSD ES:EDI,ESI                    ; 0045ad6c
    MOVSD ES:EDI,ESI                    ; 0045ad6d
    FLD float ptr [ESP + 0x90]          ; 0045ad6e
    LEA EDI,[ESP + 0x94]                ; 0045ad75
    LEA ESI,[ESP + 0x100]               ; 0045ad7c
    FXCH ST2                            ; 0045ad83
    FADD float ptr [ESP + 0x40]         ; 0045ad85
    FXCH                                ; 0045ad89
    FADD float ptr [ESP + 0x44]         ; 0045ad8b
    FXCH ST2                            ; 0045ad8f
    FADD float ptr [ESP + 0x48]         ; 0045ad91
    FXCH                                ; 0045ad95
    FSTP float ptr [ESP + 0x100]        ; 0045ad97
    FXCH                                ; 0045ad9e
    FSTP float ptr [ESP + 0x104]        ; 0045ada0
    FSTP float ptr [ESP + 0x108]        ; 0045ada7
    MOVSD ES:EDI,ESI                    ; 0045adae
    MOVSD ES:EDI,ESI                    ; 0045adaf
    MOVSD ES:EDI,ESI                    ; 0045adb0
    LEA EAX,[ESP + 0x94]                ; 0045adb1
    LEA ESI,[ESP + 0x118]               ; 0045adb8
    CMP ESI,EAX                         ; 0045adbf
    JZ 0x0045aded                       ; 0045adc1
        ;   XREF to: 0045aded (CONDITIONAL_JUMP)  ; LAB_0045aded
    MOV EAX,dword ptr [ESP + 0x94]      ; 0045adc3
    MOV dword ptr [ESP + 0x118],EAX     ; 0045adca
    MOV EAX,dword ptr [ESP + 0x98]      ; 0045add1
    MOV dword ptr [ESP + 0x11c],EAX     ; 0045add8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0045addf
    MOV dword ptr [ESP + 0x120],EAX     ; 0045ade6
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0045aded
        ;   Label: LAB_0045aded
    PUSH ESI                            ; 0045adf4
    LEA EAX,[EBX + 0x2b4]               ; 0045adf5
    PUSH EAX                            ; 0045adfb
    LEA ESI,[ESP + 0xa8]                ; 0045adfc
    LEA EDI,[ESP + 0x6c]                ; 0045ae03
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0 ; 0045ae07
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 0045ae0c
    LEA EAX,[ESP + 0x118]               ; 0045ae0f
    LEA ESI,[ESP + 0xa0]                ; 0045ae16
    PUSH EAX                            ; 0045ae1d
    MOVSD ES:EDI,ESI                    ; 0045ae1e
    MOVSD ES:EDI,ESI                    ; 0045ae1f
    MOVSD ES:EDI,ESI                    ; 0045ae20
    PUSH EBX                            ; 0045ae21
    LEA ESI,[ESP + 0xc0]                ; 0045ae22
    LEA EDI,[ESP + 0xcc]                ; 0045ae29
    CALL core_actor.cpp_FUN_00408de0    ; 0045ae30
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xc0]                ; 0045ae35
    ADD ESP,0x8                         ; 0045ae3c
    MOVSD ES:EDI,ESI                    ; 0045ae3f
    MOVSD ES:EDI,ESI                    ; 0045ae40
    MOVSD ES:EDI,ESI                    ; 0045ae41
    LEA EAX,[ESP + 0xac]                ; 0045ae42
    FLD float ptr [ESP + 0xc4]          ; 0045ae49
    FLD float ptr [ESP + 0xc8]          ; 0045ae50
    FLD float ptr [ESP + 0xcc]          ; 0045ae57
    LEA EDI,[ESP + 0xac]                ; 0045ae5e
    LEA ESI,[ESP + 0xf4]                ; 0045ae65
    FXCH ST2                            ; 0045ae6c
    FSUB float ptr [ESP + 0x64]         ; 0045ae6e
    FXCH                                ; 0045ae72
    FSUB float ptr [ESP + 0x68]         ; 0045ae74
    FXCH ST2                            ; 0045ae78
    FSUB float ptr [ESP + 0x6c]         ; 0045ae7a
    FXCH                                ; 0045ae7e
    FSTP float ptr [ESP + 0xf4]         ; 0045ae80
    FXCH                                ; 0045ae87
    FSTP float ptr [ESP + 0xf8]         ; 0045ae89
    FSTP float ptr [ESP + 0xfc]         ; 0045ae90
    MOVSD ES:EDI,ESI                    ; 0045ae97
    MOVSD ES:EDI,ESI                    ; 0045ae98
    MOVSD ES:EDI,ESI                    ; 0045ae99
    PUSH EAX                            ; 0045ae9a
    LEA ESI,[ESP + 0x80]                ; 0045ae9b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0045aea2
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    ADD ESP,0x4                         ; 0045aea7
    FLD float ptr [ESP + 0xb0]          ; 0045aeaa
    FMUL ST0                            ; 0045aeb1
    FLD float ptr [ESP + 0xac]          ; 0045aeb3
    FMUL ST0                            ; 0045aeba
    FADDP                               ; 0045aebc
    FLD float ptr [ESP + 0xb4]          ; 0045aebe
    FMUL ST0                            ; 0045aec5
    FADDP                               ; 0045aec7
    FSQRT                               ; 0045aec9
    LEA EDI,[ESP + 0xe8]                ; 0045aecb
    LEA ESI,[ESP + 0x7c]                ; 0045aed2
    MOVSD ES:EDI,ESI                    ; 0045aed6
    MOVSD ES:EDI,ESI                    ; 0045aed7
    MOVSD ES:EDI,ESI                    ; 0045aed8
    FST float ptr [ESP + 0x30]          ; 0045aed9
    MOV EAX,dword ptr [ESP + 0x30]      ; 0045aedd
    FST double ptr [ESP + 0x10]         ; 0045aee1
    MOV dword ptr [ESP + 0x2c],EAX      ; 0045aee5
    FCOMP double ptr [0x005d059f]       ; 0045aee9 | DAT_005d059f
    FNSTSW AX                           ; 0045aeef
    SAHF                                ; 0045aef1
    JBE 0x0045af1e                      ; 0045aef2
        ;   XREF to: 0045af1e (CONDITIONAL_JUMP)  ; LAB_0045af1e
    FLD float ptr [ESP + 0x58]          ; 0045aef4
    FCHS                                ; 0045aef8
    FSTP float ptr [ESP + 0x150]        ; 0045aefa
    JNC 0x0045b02b                      ; 0045af01
        ;   XREF to: 0045b02b (CONDITIONAL_JUMP)  ; LAB_0045b02b
    FLD float ptr [ESP + 0x2c]          ; 0045af07
        ;   Label: LAB_0045af07
    FST double ptr [ESP + 0x8]          ; 0045af0b
    FCOMP double ptr [0x005d059f]       ; 0045af0f | DAT_005d059f
    FNSTSW AX                           ; 0045af15
    SAHF                                ; 0045af17
    JNC 0x0045b0d4                      ; 0045af18
        ;   XREF to: 0045b0d4 (CONDITIONAL_JUMP)  ; LAB_0045b0d4
    LEA EDI,[ESP + 0x70]                ; 0045af1e
        ;   Label: LAB_0045af1e
    LEA ESI,[ESP + 0xe8]                ; 0045af22
    MOVSD ES:EDI,ESI                    ; 0045af29
    MOVSD ES:EDI,ESI                    ; 0045af2a
    MOVSD ES:EDI,ESI                    ; 0045af2b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0045af2c
    MOV dword ptr [ESP + 0x15c],EAX     ; 0045af30
    MOV EAX,dword ptr [ESP + 0x70]      ; 0045af37
    FLD float ptr [ESP + 0x70]          ; 0045af3b
    MOV dword ptr [ESP + 0x154],EAX     ; 0045af3f
    FCOMP float ptr [0x005f515c]        ; 0045af46 | DAT_005f515c
    FNSTSW AX                           ; 0045af4c
    SAHF                                ; 0045af4e
    JNC 0x0045af5d                      ; 0045af4f
        ;   XREF to: 0045af5d (CONDITIONAL_JUMP)  ; LAB_0045af5d
    MOV EAX,[0x005f515c]                ; 0045af51 | DAT_005f515c
    MOV dword ptr [ESP + 0x154],EAX     ; 0045af56
    FLD float ptr [ESP + 0x154]         ; 0045af5d
        ;   Label: LAB_0045af5d
    FCOMP float ptr [0x005f5160]        ; 0045af64 | DAT_005f5160
    FNSTSW AX                           ; 0045af6a
    SAHF                                ; 0045af6c
    JBE 0x0045af7b                      ; 0045af6d
        ;   XREF to: 0045af7b (CONDITIONAL_JUMP)  ; LAB_0045af7b
    MOV EAX,[0x005f5160]                ; 0045af6f | DAT_005f5160
    MOV dword ptr [ESP + 0x154],EAX     ; 0045af74
    FLD float ptr [ESP + 0x15c]         ; 0045af7b
        ;   Label: LAB_0045af7b
    FCOMP float ptr [ESP + 0x144]       ; 0045af82
    FNSTSW AX                           ; 0045af89
    SAHF                                ; 0045af8b
    JNC 0x0045af9c                      ; 0045af8c
        ;   XREF to: 0045af9c (CONDITIONAL_JUMP)  ; LAB_0045af9c
    MOV EAX,dword ptr [ESP + 0x144]     ; 0045af8e
    MOV dword ptr [ESP + 0x15c],EAX     ; 0045af95
    FLD float ptr [ESP + 0x15c]         ; 0045af9c
        ;   Label: LAB_0045af9c
    FCOMP float ptr [ESP + 0x148]       ; 0045afa3
    FNSTSW AX                           ; 0045afaa
    SAHF                                ; 0045afac
    JA 0x0045b173                       ; 0045afad
        ;   XREF to: 0045b173 (CONDITIONAL_JUMP)  ; LAB_0045b173
    MOV EDX,dword ptr [ESP + 0x158]     ; 0045afb3
        ;   Label: LAB_0045afb3
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0045afba
    MOV dword ptr [EDX + 0x14],0x3f800000 ; 0045afc1
    MOV dword ptr [EDX + 0xc],EAX       ; 0045afc8
    MOV EAX,dword ptr [ESP + 0x154]     ; 0045afcb
    MOV dword ptr [EDX + 0x8],EAX       ; 0045afd2
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0045afd5
    MOV dword ptr [EDX + 0x4],EAX       ; 0045afdc
    MOV EAX,dword ptr [ESP + 0x154]     ; 0045afdf
    MOV dword ptr [EDX],EAX             ; 0045afe6
    MOV ESP,EBP                         ; 0045afe8
    POP EBP                             ; 0045afea
    POP EDI                             ; 0045afeb
    POP ESI                             ; 0045afec
    POP EBX                             ; 0045afed
    RET                                 ; 0045afee
    MOV ECX,0x5d0567                    ; 0045afef
        ;   Label: LAB_0045afef
    MOV ESI,0x12a4                      ; 0045aff4
    PUSH 0x5d0577                       ; 0045aff9
    MOV dword ptr [0x01d046a0],ECX      ; 0045affe | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0045b004 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0045b00a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0045b00f
    JMP 0x0045ab5f                      ; 0045b012
        ;   XREF to: 0045ab5f (UNCONDITIONAL_JUMP)  ; LAB_0045ab5f
    FLD1                                ; 0045b017
        ;   Label: LAB_0045b017
    FCOMP double ptr [ESP + 0x20]       ; 0045b019
    FNSTSW AX                           ; 0045b01d
    SAHF                                ; 0045b01f
    JC 0x0045ad10                       ; 0045b020
        ;   XREF to: 0045ad10 (CONDITIONAL_JUMP)  ; LAB_0045ad10
    JMP 0x0045ad18                      ; 0045b026
        ;   XREF to: 0045ad18 (UNCONDITIONAL_JUMP)  ; LAB_0045ad18
    FLD float ptr [ESP + 0x30]          ; 0045b02b
        ;   Label: LAB_0045b02b
    FMUL ST0                            ; 0045b02f
    FLD float ptr [ESP + 0x150]         ; 0045b031
    FMUL ST0                            ; 0045b038
    FSUBP                               ; 0045b03a
    FSQRT                               ; 0045b03c
    FDIV double ptr [ESP + 0x10]        ; 0045b03e
    FLD1                                ; 0045b042
    FXCH                                ; 0045b044
    FSTP double ptr [ESP + 0x18]        ; 0045b046
    FCOMP double ptr [ESP + 0x18]       ; 0045b04a
    FNSTSW AX                           ; 0045b04e
    SAHF                                ; 0045b050
    JBE 0x0045af07                      ; 0045b051
        ;   XREF to: 0045af07 (CONDITIONAL_JUMP)  ; LAB_0045af07
    FLDZ                                ; 0045b057
    FCOMP double ptr [ESP + 0x18]       ; 0045b059
    FNSTSW AX                           ; 0045b05d
    SAHF                                ; 0045b05f
    JA 0x0045af07                       ; 0045b060
        ;   XREF to: 0045af07 (CONDITIONAL_JUMP)  ; LAB_0045af07
    FLD double ptr [ESP + 0x18]         ; 0045b066
    CALL crt_math.c_acos_FUN_005b9924   ; 0045b06a
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FLDZ                                ; 0045b06f
    FXCH                                ; 0045b071
    FSTP float ptr [ESP + 0x140]        ; 0045b073
    FCOMP float ptr [ESP + 0x150]       ; 0045b07a
    FNSTSW AX                           ; 0045b081
    SAHF                                ; 0045b083
    JBE 0x0045b0c4                      ; 0045b084
        ;   XREF to: 0045b0c4 (CONDITIONAL_JUMP)  ; LAB_0045b0c4
    FLD float ptr [ESP + 0xec]          ; 0045b086
    FSUB float ptr [ESP + 0x140]        ; 0045b08d
    FSTP float ptr [ESP + 0xec]         ; 0045b094
        ;   Label: LAB_0045b094
    PUSH dword ptr [ESP + 0xec]         ; 0045b09b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0045b0a2
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x164],EAX     ; 0045b0a7
    FLD float ptr [ESP + 0x164]         ; 0045b0ae
    ADD ESP,0x4                         ; 0045b0b5
    FSTP float ptr [ESP + 0xec]         ; 0045b0b8
    JMP 0x0045af07                      ; 0045b0bf
        ;   XREF to: 0045af07 (UNCONDITIONAL_JUMP)  ; LAB_0045af07
    FLD float ptr [ESP + 0xec]          ; 0045b0c4
        ;   Label: LAB_0045b0c4
    FADD float ptr [ESP + 0x140]        ; 0045b0cb
    JMP 0x0045b094                      ; 0045b0d2
        ;   XREF to: 0045b094 (UNCONDITIONAL_JUMP)  ; LAB_0045b094
    FLD float ptr [ESP + 0x2c]          ; 0045b0d4
        ;   Label: LAB_0045b0d4
    FMUL ST0                            ; 0045b0d8
    FLD float ptr [ESP + 0x5c]          ; 0045b0da
    FMUL ST0                            ; 0045b0de
    FSUBP                               ; 0045b0e0
    FSQRT                               ; 0045b0e2
    FDIV double ptr [ESP + 0x8]         ; 0045b0e4
    FLD1                                ; 0045b0e8
    FXCH                                ; 0045b0ea
    FSTP double ptr [ESP]               ; 0045b0ec
    FCOMP double ptr [ESP]              ; 0045b0ef
    FNSTSW AX                           ; 0045b0f2
    SAHF                                ; 0045b0f4
    JBE 0x0045af1e                      ; 0045b0f5
        ;   XREF to: 0045af1e (CONDITIONAL_JUMP)  ; LAB_0045af1e
    FLDZ                                ; 0045b0fb
    FCOMP double ptr [ESP]              ; 0045b0fd
    FNSTSW AX                           ; 0045b100
    SAHF                                ; 0045b102
    JA 0x0045af1e                       ; 0045b103
        ;   XREF to: 0045af1e (CONDITIONAL_JUMP)  ; LAB_0045af1e
    FLD double ptr [ESP]                ; 0045b109
    CALL crt_math.c_acos_FUN_005b9924   ; 0045b10c
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FLDZ                                ; 0045b111
    FXCH                                ; 0045b113
    FSTP float ptr [ESP + 0x13c]        ; 0045b115
    FCOMP float ptr [ESP + 0x5c]        ; 0045b11c
    FNSTSW AX                           ; 0045b120
    SAHF                                ; 0045b122
    JBE 0x0045b163                      ; 0045b123
        ;   XREF to: 0045b163 (CONDITIONAL_JUMP)  ; LAB_0045b163
    FLD float ptr [ESP + 0xe8]          ; 0045b125
    FSUB float ptr [ESP + 0x13c]        ; 0045b12c
    FSTP float ptr [ESP + 0xe8]         ; 0045b133
        ;   Label: LAB_0045b133
    PUSH dword ptr [ESP + 0xe8]         ; 0045b13a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0045b141
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x164],EAX     ; 0045b146
    FLD float ptr [ESP + 0x164]         ; 0045b14d
    ADD ESP,0x4                         ; 0045b154
    FSTP float ptr [ESP + 0xe8]         ; 0045b157
    JMP 0x0045af1e                      ; 0045b15e
        ;   XREF to: 0045af1e (UNCONDITIONAL_JUMP)  ; LAB_0045af1e
    FLD float ptr [ESP + 0xe8]          ; 0045b163
        ;   Label: LAB_0045b163
    FADD float ptr [ESP + 0x13c]        ; 0045b16a
    JMP 0x0045b133                      ; 0045b171
        ;   XREF to: 0045b133 (UNCONDITIONAL_JUMP)  ; LAB_0045b133
    MOV EAX,dword ptr [ESP + 0x148]     ; 0045b173
        ;   Label: LAB_0045b173
    MOV dword ptr [ESP + 0x15c],EAX     ; 0045b17a
    JMP 0x0045afb3                      ; 0045b181
        ;   XREF to: 0045afb3 (UNCONDITIONAL_JUMP)  ; LAB_0045afb3

