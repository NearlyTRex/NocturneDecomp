; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_0056ca10(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00563060 at 00563bed
;
; Referenced Globals:
;   TerminatedCString s_core_stranger_cpp_005ebca5
;   TerminatedCString s_CStranger_aimLeftPistol_005ebcba
;   undefined4 DAT_005ebce5
;   undefined4 DAT_005fc200
;   undefined4 DAT_005fc204
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0264be3c
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
;   core_skeleton.cpp_FUN_005469a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_math.c_acos_FUN_005b9924
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ca10
        ;   Label: core_stranger.cpp_CStranger_aimLeftPistol_FUN_0056ca10
    PUSH ESI                            ; 0056ca11
    PUSH EDI                            ; 0056ca12
    PUSH EBP                            ; 0056ca13
    MOV EBP,ESP                         ; 0056ca14
    SUB ESP,0x164                       ; 0056ca16
    AND ESP,0xfffffff8                  ; 0056ca1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056ca1f
    CMP dword ptr [EBX + 0x25698],0x0   ; 0056ca22
    JZ 0x0056cebf                       ; 0056ca29
        ;   XREF to: 0056cebf (CONDITIONAL_JUMP)  ; LAB_0056cebf
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056ca2f
        ;   Label: LAB_0056ca2f
    PUSH EAX                            ; 0056ca35
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056ca36
    LEA ESI,[ESP + 0x110]               ; 0056ca3c
    CALL dword ptr [EDX + 0xe8]         ; 0056ca43
    ADD ESP,0x4                         ; 0056ca49
    LEA EAX,[EBX + 0x25674]             ; 0056ca4c
    LEA EDI,[ESP + 0x58]                ; 0056ca52
    MOV dword ptr [ESP + 0x158],EAX     ; 0056ca56
    MOV EAX,[0x0264be3c]                ; 0056ca5d | DAT_0264be3c
    LEA ESI,[ESP + 0x10c]               ; 0056ca62
    MOV dword ptr [ESP + 0x14c],EAX     ; 0056ca69
    MOV EAX,0x3f060a92                  ; 0056ca70
    MOVSD ES:EDI,ESI                    ; 0056ca75
    MOVSD ES:EDI,ESI                    ; 0056ca76
    MOVSD ES:EDI,ESI                    ; 0056ca77
    MOV dword ptr [ESP + 0x148],EAX     ; 0056ca78
    LEA EAX,[ESP + 0x58]                ; 0056ca7f
    MOV EDI,0xbfa78d36                  ; 0056ca83
    PUSH EAX                            ; 0056ca88
    MOV EDX,dword ptr [EBX + 0x25698]   ; 0056ca89
    LEA ESI,[ESP + 0xe0]                ; 0056ca8f
    PUSH EDX                            ; 0056ca96
    MOV dword ptr [ESP + 0x14c],EDI     ; 0056ca97
    LEA EDI,[ESP + 0x90]                ; 0056ca9e
    CALL core_actor.cpp_FUN_00408d70    ; 0056caa5
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xe4]                ; 0056caaa
    LEA EAX,[ESP + 0x54]                ; 0056cab1
    ADD ESP,0x8                         ; 0056cab5
    XOR ECX,ECX                         ; 0056cab8
    MOVSD ES:EDI,ESI                    ; 0056caba
    MOVSD ES:EDI,ESI                    ; 0056cabb
    MOVSD ES:EDI,ESI                    ; 0056cabc
    MOV dword ptr [ESP + 0x4c],ECX      ; 0056cabd
    MOV EDI,0x447a0000                  ; 0056cac1
    MOV dword ptr [ESP + 0x50],ECX      ; 0056cac6
    MOV dword ptr [ESP + 0x54],EDI      ; 0056caca
    PUSH EAX                            ; 0056cace
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056cacf
    PUSH EAX                            ; 0056cad5
    LEA ESI,[ESP + 0x3c]                ; 0056cad6
    LEA EDI,[ESP + 0x12c]               ; 0056cada
    CALL core_actor.cpp_FUN_00408cf0    ; 0056cae1
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x3c]                ; 0056cae6
    ADD ESP,0x8                         ; 0056caea
    MOV EDX,dword ptr [0x0061b5a8]      ; 0056caed | g_CDemonSetPtr
    FLD float ptr [ESP + 0x88]          ; 0056caf3
    FLD float ptr [ESP + 0x8c]          ; 0056cafa
    FLD float ptr [ESP + 0x90]          ; 0056cb01
    MOVSD ES:EDI,ESI                    ; 0056cb08
    MOVSD ES:EDI,ESI                    ; 0056cb09
    MOVSD ES:EDI,ESI                    ; 0056cb0a
    PUSH 0x0                            ; 0056cb0b
    LEA EDI,[ESP + 0x11c]               ; 0056cb0d
    LEA ESI,[ESP + 0x134]               ; 0056cb14
    PUSH 0x0                            ; 0056cb1b
    FXCH ST2                            ; 0056cb1d
    FADD float ptr [ESP + 0x12c]        ; 0056cb1f
    FXCH                                ; 0056cb26
    FADD float ptr [ESP + 0x130]        ; 0056cb28
    FXCH ST2                            ; 0056cb2f
    FADD float ptr [ESP + 0x134]        ; 0056cb31
    PUSH 0xff                           ; 0056cb38
    FXCH                                ; 0056cb3d
    FSTP float ptr [ESP + 0x13c]        ; 0056cb3f
    FXCH                                ; 0056cb46
    FSTP float ptr [ESP + 0x140]        ; 0056cb48
    PUSH 0x1                            ; 0056cb4f
    FSTP float ptr [ESP + 0x148]        ; 0056cb51
    PUSH EDX                            ; 0056cb58 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 0056cb59
    MOVSD ES:EDI,ESI                    ; 0056cb5a
    MOVSD ES:EDI,ESI                    ; 0056cb5b
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0 ; 0056cb5c
        ;   XREF to: 00537ef0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 0056cb61
    MOV ECX,dword ptr [EBX + 0x25698]   ; 0056cb64
    PUSH ECX                            ; 0056cb6a
    MOV ESI,dword ptr [0x0061b5a8]      ; 0056cb6b | g_CDemonSetPtr
    PUSH ESI                            ; 0056cb71 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0056cb72
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056cb77
    PUSH EBX                            ; 0056cb7a
    MOV EDI,dword ptr [0x0061b5a8]      ; 0056cb7b | g_CDemonSetPtr
    PUSH EDI                            ; 0056cb81 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0056cb82
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0056cb87
    LEA EAX,[ESP + 0x118]               ; 0056cb8a
    PUSH EAX                            ; 0056cb91
    LEA EAX,[ESP + 0x8c]                ; 0056cb92
    PUSH EAX                            ; 0056cb99
    MOV EAX,[0x0061b5a8]                ; 0056cb9a | g_CDemonSetPtr
    PUSH EAX                            ; 0056cb9f | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 0056cba0
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0056cba5
    FLD float ptr [ESP + 0x16c]         ; 0056cbac
    ADD ESP,0xc                         ; 0056cbb3
    MOV EDX,dword ptr [0x0061b5a8]      ; 0056cbb6 | g_CDemonSetPtr
    PUSH EDX                            ; 0056cbbc | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x2c]         ; 0056cbbd
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0056cbc1
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056cbc6
    FLDZ                                ; 0056cbc9
    FLD float ptr [ESP + 0x28]          ; 0056cbcb
    FSTP double ptr [ESP + 0x20]        ; 0056cbcf
    FCOMP double ptr [ESP + 0x20]       ; 0056cbd3
    FNSTSW AX                           ; 0056cbd7
    SAHF                                ; 0056cbd9
    JBE 0x0056cee7                      ; 0056cbda
        ;   XREF to: 0056cee7 (CONDITIONAL_JUMP)  ; LAB_0056cee7
    MOV dword ptr [ESP + 0x28],0x3f800000 ; 0056cbe0
        ;   Label: LAB_0056cbe0
    FLD float ptr [ESP + 0x28]          ; 0056cbe8
        ;   Label: LAB_0056cbe8
    FLD float ptr [ESP + 0x124]         ; 0056cbec
    FMUL ST1                            ; 0056cbf3
    FLD float ptr [ESP + 0x128]         ; 0056cbf5
    FMUL ST2                            ; 0056cbfc
    FLD float ptr [ESP + 0x12c]         ; 0056cbfe
    FMULP ST3                           ; 0056cc05
    FLD float ptr [ESP + 0x88]          ; 0056cc07
    FLD float ptr [ESP + 0x8c]          ; 0056cc0e
    LEA EDI,[ESP + 0x40]                ; 0056cc15
    LEA ESI,[ESP + 0xd0]                ; 0056cc19
    FXCH ST3                            ; 0056cc20
    FSTP float ptr [ESP + 0xd0]         ; 0056cc22
    FXCH                                ; 0056cc29
    FSTP float ptr [ESP + 0xd4]         ; 0056cc2b
    FXCH ST2                            ; 0056cc32
    FSTP float ptr [ESP + 0xd8]         ; 0056cc34
    MOVSD ES:EDI,ESI                    ; 0056cc3b
    MOVSD ES:EDI,ESI                    ; 0056cc3c
    MOVSD ES:EDI,ESI                    ; 0056cc3d
    FLD float ptr [ESP + 0x90]          ; 0056cc3e
    LEA EDI,[ESP + 0x94]                ; 0056cc45
    LEA ESI,[ESP + 0x100]               ; 0056cc4c
    FXCH ST2                            ; 0056cc53
    FADD float ptr [ESP + 0x40]         ; 0056cc55
    FXCH                                ; 0056cc59
    FADD float ptr [ESP + 0x44]         ; 0056cc5b
    FXCH ST2                            ; 0056cc5f
    FADD float ptr [ESP + 0x48]         ; 0056cc61
    FXCH                                ; 0056cc65
    FSTP float ptr [ESP + 0x100]        ; 0056cc67
    FXCH                                ; 0056cc6e
    FSTP float ptr [ESP + 0x104]        ; 0056cc70
    FSTP float ptr [ESP + 0x108]        ; 0056cc77
    MOVSD ES:EDI,ESI                    ; 0056cc7e
    MOVSD ES:EDI,ESI                    ; 0056cc7f
    MOVSD ES:EDI,ESI                    ; 0056cc80
    LEA EAX,[ESP + 0x94]                ; 0056cc81
    LEA ESI,[ESP + 0x118]               ; 0056cc88
    CMP ESI,EAX                         ; 0056cc8f
    JZ 0x0056ccbd                       ; 0056cc91
        ;   XREF to: 0056ccbd (CONDITIONAL_JUMP)  ; LAB_0056ccbd
    MOV EAX,dword ptr [ESP + 0x94]      ; 0056cc93
    MOV dword ptr [ESP + 0x118],EAX     ; 0056cc9a
    MOV EAX,dword ptr [ESP + 0x98]      ; 0056cca1
    MOV dword ptr [ESP + 0x11c],EAX     ; 0056cca8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0056ccaf
    MOV dword ptr [ESP + 0x120],EAX     ; 0056ccb6
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0056ccbd
        ;   Label: LAB_0056ccbd
    PUSH ESI                            ; 0056ccc4
    LEA EAX,[EBX + 0x2b4]               ; 0056ccc5
    PUSH EAX                            ; 0056cccb
    LEA ESI,[ESP + 0xa8]                ; 0056cccc
    LEA EDI,[ESP + 0x6c]                ; 0056ccd3
    CALL core_skeleton.cpp_FUN_005469a0 ; 0056ccd7
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0056ccdc
    LEA EAX,[ESP + 0x118]               ; 0056ccdf
    LEA ESI,[ESP + 0xa0]                ; 0056cce6
    PUSH EAX                            ; 0056cced
    MOVSD ES:EDI,ESI                    ; 0056ccee
    MOVSD ES:EDI,ESI                    ; 0056ccef
    MOVSD ES:EDI,ESI                    ; 0056ccf0
    PUSH EBX                            ; 0056ccf1
    LEA ESI,[ESP + 0xc0]                ; 0056ccf2
    LEA EDI,[ESP + 0xcc]                ; 0056ccf9
    CALL core_actor.cpp_FUN_00408de0    ; 0056cd00
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xc0]                ; 0056cd05
    ADD ESP,0x8                         ; 0056cd0c
    MOVSD ES:EDI,ESI                    ; 0056cd0f
    MOVSD ES:EDI,ESI                    ; 0056cd10
    MOVSD ES:EDI,ESI                    ; 0056cd11
    LEA EAX,[ESP + 0xac]                ; 0056cd12
    FLD float ptr [ESP + 0xc4]          ; 0056cd19
    FLD float ptr [ESP + 0xc8]          ; 0056cd20
    FLD float ptr [ESP + 0xcc]          ; 0056cd27
    LEA EDI,[ESP + 0xac]                ; 0056cd2e
    LEA ESI,[ESP + 0xf4]                ; 0056cd35
    FXCH ST2                            ; 0056cd3c
    FSUB float ptr [ESP + 0x64]         ; 0056cd3e
    FXCH                                ; 0056cd42
    FSUB float ptr [ESP + 0x68]         ; 0056cd44
    FXCH ST2                            ; 0056cd48
    FSUB float ptr [ESP + 0x6c]         ; 0056cd4a
    FXCH                                ; 0056cd4e
    FSTP float ptr [ESP + 0xf4]         ; 0056cd50
    FXCH                                ; 0056cd57
    FSTP float ptr [ESP + 0xf8]         ; 0056cd59
    FSTP float ptr [ESP + 0xfc]         ; 0056cd60
    MOVSD ES:EDI,ESI                    ; 0056cd67
    MOVSD ES:EDI,ESI                    ; 0056cd68
    MOVSD ES:EDI,ESI                    ; 0056cd69
    PUSH EAX                            ; 0056cd6a
    LEA ESI,[ESP + 0x80]                ; 0056cd6b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0056cd72
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    ADD ESP,0x4                         ; 0056cd77
    FLD float ptr [ESP + 0xb0]          ; 0056cd7a
    FMUL ST0                            ; 0056cd81
    FLD float ptr [ESP + 0xac]          ; 0056cd83
    FMUL ST0                            ; 0056cd8a
    FADDP                               ; 0056cd8c
    FLD float ptr [ESP + 0xb4]          ; 0056cd8e
    FMUL ST0                            ; 0056cd95
    FADDP                               ; 0056cd97
    FSQRT                               ; 0056cd99
    LEA EDI,[ESP + 0xe8]                ; 0056cd9b
    LEA ESI,[ESP + 0x7c]                ; 0056cda2
    MOVSD ES:EDI,ESI                    ; 0056cda6
    MOVSD ES:EDI,ESI                    ; 0056cda7
    MOVSD ES:EDI,ESI                    ; 0056cda8
    FST float ptr [ESP + 0x30]          ; 0056cda9
    MOV EAX,dword ptr [ESP + 0x30]      ; 0056cdad
    FST double ptr [ESP + 0x10]         ; 0056cdb1
    MOV dword ptr [ESP + 0x2c],EAX      ; 0056cdb5
    FCOMP double ptr [0x005ebce5]       ; 0056cdb9 | DAT_005ebce5
    FNSTSW AX                           ; 0056cdbf
    SAHF                                ; 0056cdc1
    JBE 0x0056cdee                      ; 0056cdc2
        ;   XREF to: 0056cdee (CONDITIONAL_JUMP)  ; LAB_0056cdee
    FLD float ptr [ESP + 0x58]          ; 0056cdc4
    FCHS                                ; 0056cdc8
    FSTP float ptr [ESP + 0x150]        ; 0056cdca
    JNC 0x0056cefb                      ; 0056cdd1
        ;   XREF to: 0056cefb (CONDITIONAL_JUMP)  ; LAB_0056cefb
    FLD float ptr [ESP + 0x2c]          ; 0056cdd7
        ;   Label: LAB_0056cdd7
    FST double ptr [ESP + 0x8]          ; 0056cddb
    FCOMP double ptr [0x005ebce5]       ; 0056cddf | DAT_005ebce5
    FNSTSW AX                           ; 0056cde5
    SAHF                                ; 0056cde7
    JNC 0x0056cfa4                      ; 0056cde8
        ;   XREF to: 0056cfa4 (CONDITIONAL_JUMP)  ; LAB_0056cfa4
    LEA EDI,[ESP + 0x70]                ; 0056cdee
        ;   Label: LAB_0056cdee
    LEA ESI,[ESP + 0xe8]                ; 0056cdf2
    MOVSD ES:EDI,ESI                    ; 0056cdf9
    MOVSD ES:EDI,ESI                    ; 0056cdfa
    MOVSD ES:EDI,ESI                    ; 0056cdfb
    MOV EAX,dword ptr [ESP + 0x74]      ; 0056cdfc
    MOV dword ptr [ESP + 0x15c],EAX     ; 0056ce00
    MOV EAX,dword ptr [ESP + 0x70]      ; 0056ce07
    FLD float ptr [ESP + 0x70]          ; 0056ce0b
    MOV dword ptr [ESP + 0x154],EAX     ; 0056ce0f
    FCOMP float ptr [0x005fc200]        ; 0056ce16 | DAT_005fc200
    FNSTSW AX                           ; 0056ce1c
    SAHF                                ; 0056ce1e
    JNC 0x0056ce2d                      ; 0056ce1f
        ;   XREF to: 0056ce2d (CONDITIONAL_JUMP)  ; LAB_0056ce2d
    MOV EAX,[0x005fc200]                ; 0056ce21 | DAT_005fc200
    MOV dword ptr [ESP + 0x154],EAX     ; 0056ce26
    FLD float ptr [ESP + 0x154]         ; 0056ce2d
        ;   Label: LAB_0056ce2d
    FCOMP float ptr [0x005fc204]        ; 0056ce34 | DAT_005fc204
    FNSTSW AX                           ; 0056ce3a
    SAHF                                ; 0056ce3c
    JBE 0x0056ce4b                      ; 0056ce3d
        ;   XREF to: 0056ce4b (CONDITIONAL_JUMP)  ; LAB_0056ce4b
    MOV EAX,[0x005fc204]                ; 0056ce3f | DAT_005fc204
    MOV dword ptr [ESP + 0x154],EAX     ; 0056ce44
    FLD float ptr [ESP + 0x15c]         ; 0056ce4b
        ;   Label: LAB_0056ce4b
    FCOMP float ptr [ESP + 0x144]       ; 0056ce52
    FNSTSW AX                           ; 0056ce59
    SAHF                                ; 0056ce5b
    JNC 0x0056ce6c                      ; 0056ce5c
        ;   XREF to: 0056ce6c (CONDITIONAL_JUMP)  ; LAB_0056ce6c
    MOV EAX,dword ptr [ESP + 0x144]     ; 0056ce5e
    MOV dword ptr [ESP + 0x15c],EAX     ; 0056ce65
    FLD float ptr [ESP + 0x15c]         ; 0056ce6c
        ;   Label: LAB_0056ce6c
    FCOMP float ptr [ESP + 0x148]       ; 0056ce73
    FNSTSW AX                           ; 0056ce7a
    SAHF                                ; 0056ce7c
    JA 0x0056d043                       ; 0056ce7d
        ;   XREF to: 0056d043 (CONDITIONAL_JUMP)  ; LAB_0056d043
    MOV EDX,dword ptr [ESP + 0x158]     ; 0056ce83
        ;   Label: LAB_0056ce83
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0056ce8a
    MOV dword ptr [EDX + 0x14],0x3f800000 ; 0056ce91
    MOV dword ptr [EDX + 0xc],EAX       ; 0056ce98
    MOV EAX,dword ptr [ESP + 0x154]     ; 0056ce9b
    MOV dword ptr [EDX + 0x8],EAX       ; 0056cea2
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0056cea5
    MOV dword ptr [EDX + 0x4],EAX       ; 0056ceac
    MOV EAX,dword ptr [ESP + 0x154]     ; 0056ceaf
    MOV dword ptr [EDX],EAX             ; 0056ceb6
    MOV ESP,EBP                         ; 0056ceb8
    POP EBP                             ; 0056ceba
    POP EDI                             ; 0056cebb
    POP ESI                             ; 0056cebc
    POP EBX                             ; 0056cebd
    RET                                 ; 0056cebe
    MOV ECX,0x5ebca5                    ; 0056cebf | = "..\\core\\stranger.cpp"
        ;   Label: LAB_0056cebf
    MOV ESI,0x10b0                      ; 0056cec4
    PUSH 0x5ebcba                       ; 0056cec9 | = "CStranger::aimLeftPistol - no weapon?"
    MOV dword ptr [0x01d046a0],ECX      ; 0056cece | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0056ced4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0056ceda
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0056cedf
    JMP 0x0056ca2f                      ; 0056cee2
        ;   XREF to: 0056ca2f (UNCONDITIONAL_JUMP)  ; LAB_0056ca2f
    FLD1                                ; 0056cee7
        ;   Label: LAB_0056cee7
    FCOMP double ptr [ESP + 0x20]       ; 0056cee9
    FNSTSW AX                           ; 0056ceed
    SAHF                                ; 0056ceef
    JC 0x0056cbe0                       ; 0056cef0
        ;   XREF to: 0056cbe0 (CONDITIONAL_JUMP)  ; LAB_0056cbe0
    JMP 0x0056cbe8                      ; 0056cef6
        ;   XREF to: 0056cbe8 (UNCONDITIONAL_JUMP)  ; LAB_0056cbe8
    FLD float ptr [ESP + 0x30]          ; 0056cefb
        ;   Label: LAB_0056cefb
    FMUL ST0                            ; 0056ceff
    FLD float ptr [ESP + 0x150]         ; 0056cf01
    FMUL ST0                            ; 0056cf08
    FSUBP                               ; 0056cf0a
    FSQRT                               ; 0056cf0c
    FDIV double ptr [ESP + 0x10]        ; 0056cf0e
    FLD1                                ; 0056cf12
    FXCH                                ; 0056cf14
    FSTP double ptr [ESP + 0x18]        ; 0056cf16
    FCOMP double ptr [ESP + 0x18]       ; 0056cf1a
    FNSTSW AX                           ; 0056cf1e
    SAHF                                ; 0056cf20
    JBE 0x0056cdd7                      ; 0056cf21
        ;   XREF to: 0056cdd7 (CONDITIONAL_JUMP)  ; LAB_0056cdd7
    FLDZ                                ; 0056cf27
    FCOMP double ptr [ESP + 0x18]       ; 0056cf29
    FNSTSW AX                           ; 0056cf2d
    SAHF                                ; 0056cf2f
    JA 0x0056cdd7                       ; 0056cf30
        ;   XREF to: 0056cdd7 (CONDITIONAL_JUMP)  ; LAB_0056cdd7
    FLD double ptr [ESP + 0x18]         ; 0056cf36
    CALL crt_math.c_acos_FUN_005b9924   ; 0056cf3a
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FLDZ                                ; 0056cf3f
    FXCH                                ; 0056cf41
    FSTP float ptr [ESP + 0x140]        ; 0056cf43
    FCOMP float ptr [ESP + 0x150]       ; 0056cf4a
    FNSTSW AX                           ; 0056cf51
    SAHF                                ; 0056cf53
    JBE 0x0056cf94                      ; 0056cf54
        ;   XREF to: 0056cf94 (CONDITIONAL_JUMP)  ; LAB_0056cf94
    FLD float ptr [ESP + 0xec]          ; 0056cf56
    FSUB float ptr [ESP + 0x140]        ; 0056cf5d
    FSTP float ptr [ESP + 0xec]         ; 0056cf64
        ;   Label: LAB_0056cf64
    PUSH dword ptr [ESP + 0xec]         ; 0056cf6b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0056cf72
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x164],EAX     ; 0056cf77
    FLD float ptr [ESP + 0x164]         ; 0056cf7e
    ADD ESP,0x4                         ; 0056cf85
    FSTP float ptr [ESP + 0xec]         ; 0056cf88
    JMP 0x0056cdd7                      ; 0056cf8f
        ;   XREF to: 0056cdd7 (UNCONDITIONAL_JUMP)  ; LAB_0056cdd7
    FLD float ptr [ESP + 0xec]          ; 0056cf94
        ;   Label: LAB_0056cf94
    FADD float ptr [ESP + 0x140]        ; 0056cf9b
    JMP 0x0056cf64                      ; 0056cfa2
        ;   XREF to: 0056cf64 (UNCONDITIONAL_JUMP)  ; LAB_0056cf64
    FLD float ptr [ESP + 0x2c]          ; 0056cfa4
        ;   Label: LAB_0056cfa4
    FMUL ST0                            ; 0056cfa8
    FLD float ptr [ESP + 0x5c]          ; 0056cfaa
    FMUL ST0                            ; 0056cfae
    FSUBP                               ; 0056cfb0
    FSQRT                               ; 0056cfb2
    FDIV double ptr [ESP + 0x8]         ; 0056cfb4
    FLD1                                ; 0056cfb8
    FXCH                                ; 0056cfba
    FSTP double ptr [ESP]               ; 0056cfbc
    FCOMP double ptr [ESP]              ; 0056cfbf
    FNSTSW AX                           ; 0056cfc2
    SAHF                                ; 0056cfc4
    JBE 0x0056cdee                      ; 0056cfc5
        ;   XREF to: 0056cdee (CONDITIONAL_JUMP)  ; LAB_0056cdee
    FLDZ                                ; 0056cfcb
    FCOMP double ptr [ESP]              ; 0056cfcd
    FNSTSW AX                           ; 0056cfd0
    SAHF                                ; 0056cfd2
    JA 0x0056cdee                       ; 0056cfd3
        ;   XREF to: 0056cdee (CONDITIONAL_JUMP)  ; LAB_0056cdee
    FLD double ptr [ESP]                ; 0056cfd9
    CALL crt_math.c_acos_FUN_005b9924   ; 0056cfdc
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FLDZ                                ; 0056cfe1
    FXCH                                ; 0056cfe3
    FSTP float ptr [ESP + 0x13c]        ; 0056cfe5
    FCOMP float ptr [ESP + 0x5c]        ; 0056cfec
    FNSTSW AX                           ; 0056cff0
    SAHF                                ; 0056cff2
    JBE 0x0056d033                      ; 0056cff3
        ;   XREF to: 0056d033 (CONDITIONAL_JUMP)  ; LAB_0056d033
    FLD float ptr [ESP + 0xe8]          ; 0056cff5
    FSUB float ptr [ESP + 0x13c]        ; 0056cffc
    FSTP float ptr [ESP + 0xe8]         ; 0056d003
        ;   Label: LAB_0056d003
    PUSH dword ptr [ESP + 0xe8]         ; 0056d00a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0056d011
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x164],EAX     ; 0056d016
    FLD float ptr [ESP + 0x164]         ; 0056d01d
    ADD ESP,0x4                         ; 0056d024
    FSTP float ptr [ESP + 0xe8]         ; 0056d027
    JMP 0x0056cdee                      ; 0056d02e
        ;   XREF to: 0056cdee (UNCONDITIONAL_JUMP)  ; LAB_0056cdee
    FLD float ptr [ESP + 0xe8]          ; 0056d033
        ;   Label: LAB_0056d033
    FADD float ptr [ESP + 0x13c]        ; 0056d03a
    JMP 0x0056d003                      ; 0056d041
        ;   XREF to: 0056d003 (UNCONDITIONAL_JUMP)  ; LAB_0056d003
    MOV EAX,dword ptr [ESP + 0x148]     ; 0056d043
        ;   Label: LAB_0056d043
    MOV dword ptr [ESP + 0x15c],EAX     ; 0056d04a
    JMP 0x0056ce83                      ; 0056d051
        ;   XREF to: 0056ce83 (UNCONDITIONAL_JUMP)  ; LAB_0056ce83

