; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_getReady_FUN_004fac10(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_darkwolf.cpp_CDarkwolf_setup_FUN_00598800 at 00598997
;   core_passngr.cpp_CPassenger_setup_FUN_0050a610 at 0050a6a1
;   core_pryemorp.cpp_CPryeMorph_setup_FUN_005275c0 at 0052774a
;   core_spirbear.cpp_CSpiritBear_setup_FUN_0059aba0 at 0059adb0
;   core_spireagl.cpp_CSpiritEagle_setup_FUN_005992f0 at 005994ec
;   core_spirindi.cpp_CSpiritIndian_setup_FUN_0059a060 at 0059a270
;   core_styldemo.cpp_CStylerDemon_setup_FUN_0059e130 at 0059e3b2
;   core_styler.cpp_CStyler_setup_FUN_0059d7f0 at 0059d9bb
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005c96f7
;   TerminatedCString s_CMorph_getReady_can_t_do_005c9709
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041d840
;   core_main.c_FUN_004e4330
;   core_morph.cpp_CMorphModel_findNearestPoint_FUN_004fa7f0
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fac10
        ;   Label: core_morph.cpp_CMorph_getReady_FUN_004fac10
    PUSH ESI                            ; 004fac11
    PUSH EDI                            ; 004fac12
    PUSH EBP                            ; 004fac13
    SUB ESP,0x108                       ; 004fac14
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004fac1a
    CMP dword ptr [EAX + 0x54],0x3      ; 004fac21
    JL 0x004facdf                       ; 004fac25
        ;   XREF to: 004facdf (CONDITIONAL_JUMP)  ; LAB_004facdf
    CMP dword ptr [EAX + 0x65c],0x3     ; 004fac2b
    JL 0x004facdf                       ; 004fac32
        ;   XREF to: 004facdf (CONDITIONAL_JUMP)  ; LAB_004facdf
    PUSH 0x5e2c40                       ; 004fac38 | g_CBoundingBox3DTypeInfo
        ;   Label: LAB_004fac38
    PUSH 0x2                            ; 004fac3d
    LEA EAX,[ESP + 0x8]                 ; 004fac3f
    PUSH EAX                            ; 004fac43
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004fac44
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 004fac49
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004fac4c
    XOR EDI,EDI                         ; 004fac53
    MOV dword ptr [ESP + 0xd8],EAX      ; 004fac55
    MOV EAX,ESP                         ; 004fac5c
    MOV dword ptr [ESP + 0xe0],EDI      ; 004fac5e
    MOV dword ptr [ESP + 0xf0],EAX      ; 004fac65
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004fac6c
        ;   Label: LAB_004fac6c
    MOV EAX,dword ptr [EAX + 0x58]      ; 004fac73
    ADD EAX,0x4                         ; 004fac76
    MOV EDX,dword ptr [ESP + 0xf0]      ; 004fac79
    MOV EBX,EAX                         ; 004fac80
    CMP EAX,EDX                         ; 004fac82
    JZ 0x004fac96                       ; 004fac84
        ;   XREF to: 004fac96 (CONDITIONAL_JUMP)  ; LAB_004fac96
    MOV ECX,dword ptr [EAX]             ; 004fac86
    MOV dword ptr [EDX],ECX             ; 004fac88
    MOV ECX,dword ptr [EAX + 0x4]       ; 004fac8a
    MOV dword ptr [EDX + 0x4],ECX       ; 004fac8d
    MOV ECX,dword ptr [EAX + 0x8]       ; 004fac90
    MOV dword ptr [EDX + 0x8],ECX       ; 004fac93
    LEA EAX,[EDX + 0xc]                 ; 004fac96
        ;   Label: LAB_004fac96
    CMP EAX,EBX                         ; 004fac99
    JNZ 0x004fb0c0                      ; 004fac9b
        ;   XREF to: 004fb0c0 (CONDITIONAL_JUMP)  ; LAB_004fb0c0
    MOV ESI,dword ptr [ESP + 0xf0]      ; 004faca1
        ;   Label: LAB_004faca1
    MOV EDI,dword ptr [ESP + 0xe0]      ; 004faca8
    MOV EBP,0x10                        ; 004facaf
    MOV EBX,0x1                         ; 004facb4
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004facb9
        ;   Label: LAB_004facb9
    ADD EAX,EDI                         ; 004facc0
    CMP EBX,dword ptr [EAX + 0x54]      ; 004facc2
    JGE 0x004fad07                      ; 004facc5
        ;   XREF to: 004fad07 (CONDITIONAL_JUMP)  ; LAB_004fad07
    MOV EAX,dword ptr [EAX + 0x58]      ; 004facc7
    ADD EAX,EBP                         ; 004facca
    ADD EAX,0x4                         ; 004faccc
    PUSH EAX                            ; 004faccf
    PUSH ESI                            ; 004facd0
    INC EBX                             ; 004facd1
    ADD EBP,0x10                        ; 004facd2
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041d840 ; 004facd5
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041d840(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 004facda
    JMP 0x004facb9                      ; 004facdd
        ;   XREF to: 004facb9 (UNCONDITIONAL_JUMP)  ; LAB_004facb9
    MOV EBX,0x5c96f7                    ; 004facdf | = "..\\core\\morph.cpp"
        ;   Label: LAB_004facdf
    MOV ESI,0x31f                       ; 004face4
    PUSH 0x5c9709                       ; 004face9 | = "CMorph::getReady - can't do this unle..."
    MOV dword ptr [0x01d71de0],EBX      ; 004facee | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004facf4 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004facfa
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004facff
    JMP 0x004fac38                      ; 004fad02
        ;   XREF to: 004fac38 (UNCONDITIONAL_JUMP)  ; LAB_004fac38
    MOV EBX,dword ptr [ESP + 0xe0]      ; 004fad07
        ;   Label: LAB_004fad07
    MOV ESI,dword ptr [ESP + 0xf0]      ; 004fad0e
    MOV ECX,dword ptr [ESP + 0xd8]      ; 004fad15
    ADD EBX,0x608                       ; 004fad1c
    ADD ESI,0x18                        ; 004fad22
    ADD ECX,0x608                       ; 004fad25
    MOV dword ptr [ESP + 0xe0],EBX      ; 004fad2b
    MOV dword ptr [ESP + 0xf0],ESI      ; 004fad32
    MOV dword ptr [ESP + 0xd8],ECX      ; 004fad39
    CMP EBX,0xc10                       ; 004fad40
    JNZ 0x004fac6c                      ; 004fad46
        ;   XREF to: 004fac6c (CONDITIONAL_JUMP)  ; LAB_004fac6c
    MOV EAX,ESP                         ; 004fad4c
    ADD EAX,0xc                         ; 004fad4e
    MOV dword ptr [ESP + 0xe4],EAX      ; 004fad51
    MOV EAX,ESP                         ; 004fad58
    ADD EAX,0x24                        ; 004fad5a
    MOV dword ptr [ESP + 0xe8],EAX      ; 004fad5d
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004fad64
    ADD EAX,0x608                       ; 004fad6b
    XOR EBP,EBP                         ; 004fad70
    MOV dword ptr [ESP + 0xdc],EAX      ; 004fad72
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004fad79
    MOV dword ptr [ESP + 0xec],EBP      ; 004fad80
    MOV dword ptr [ESP + 0x104],EAX     ; 004fad87
    MOV EAX,0x1                         ; 004fad8e
        ;   Label: LAB_004fad8e
    SUB EAX,dword ptr [ESP + 0xec]      ; 004fad93
    IMUL EAX,EAX,0x18                   ; 004fad9a
    MOV EDX,dword ptr [ESP + 0xdc]      ; 004fad9d
    MOV dword ptr [ESP + 0xf4],EDX      ; 004fada4
    MOV EDX,ESP                         ; 004fadab
    ADD EDX,EAX                         ; 004fadad
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004fadaf
    MOV ECX,dword ptr [ESP + 0xec]      ; 004fadb6
    FLD float ptr [EAX + 0x4]           ; 004fadbd
    FLD float ptr [EAX + 0x8]           ; 004fadc0
    FLD float ptr [EAX]                 ; 004fadc3
    IMUL EAX,ECX,0x18                   ; 004fadc5
    LEA EDI,[ESP + 0x48]                ; 004fadc8
    LEA ESI,[ESP + 0x60]                ; 004fadcc
    MOV EBX,ESP                         ; 004fadd0
    FSUB float ptr [EDX]                ; 004fadd2
    FXCH ST2                            ; 004fadd4
    FSUB float ptr [EDX + 0x4]          ; 004fadd6
    FXCH                                ; 004fadd9
    FSUB float ptr [EDX + 0x8]          ; 004faddb
    FXCH ST2                            ; 004fadde
    FSTP float ptr [ESP + 0x60]         ; 004fade0
    FSTP float ptr [ESP + 0x64]         ; 004fade4
    FSTP float ptr [ESP + 0x68]         ; 004fade8
    MOVSD ES:EDI,ESI                    ; 004fadec
    MOVSD ES:EDI,ESI                    ; 004faded
    MOVSD ES:EDI,ESI                    ; 004fadee
    ADD EBX,EAX                         ; 004fadef
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004fadf1
    LEA EDI,[ESP + 0x3c]                ; 004fadf8
    LEA ESI,[ESP + 0x30]                ; 004fadfc
    FLD float ptr [EAX]                 ; 004fae00
    FLD float ptr [EAX + 0x4]           ; 004fae02
    FLD float ptr [EAX + 0x8]           ; 004fae05
    FXCH ST2                            ; 004fae08
    FSUB float ptr [EBX]                ; 004fae0a
    FXCH                                ; 004fae0c
    FSUB float ptr [EBX + 0x4]          ; 004fae0e
    FXCH ST2                            ; 004fae11
    FSUB float ptr [EBX + 0x8]          ; 004fae13
    FXCH                                ; 004fae16
    FSTP float ptr [ESP + 0x30]         ; 004fae18
    FXCH                                ; 004fae1c
    FSTP float ptr [ESP + 0x34]         ; 004fae1e
    FSTP float ptr [ESP + 0x38]         ; 004fae22
    MOVSD ES:EDI,ESI                    ; 004fae26
    MOVSD ES:EDI,ESI                    ; 004fae27
    MOVSD ES:EDI,ESI                    ; 004fae28
    FLD float ptr [ESP + 0x48]          ; 004fae29
    FDIV float ptr [ESP + 0x3c]         ; 004fae2d
    MOV EAX,dword ptr [ESP + 0x60]      ; 004fae31
    MOV dword ptr [ESP + 0x90],EAX      ; 004fae35
    MOV EAX,dword ptr [ESP + 0x64]      ; 004fae3c
    LEA EDI,[ESP + 0x84]                ; 004fae40
    MOV dword ptr [ESP + 0x94],EAX      ; 004fae47
    MOV EAX,dword ptr [ESP + 0x68]      ; 004fae4e
    LEA ESI,[ESP + 0x90]                ; 004fae52
    MOV dword ptr [ESP + 0x98],EAX      ; 004fae59
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fae60
    MOVSD ES:EDI,ESI                    ; 004fae64
    MOVSD ES:EDI,ESI                    ; 004fae65
    MOVSD ES:EDI,ESI                    ; 004fae66
    MOV dword ptr [ESP + 0xcc],EAX      ; 004fae67
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fae6e
    LEA EDI,[ESP + 0xc0]                ; 004fae72
    MOV dword ptr [ESP + 0xd0],EAX      ; 004fae79
    MOV EAX,dword ptr [ESP + 0x38]      ; 004fae80
    LEA ESI,[ESP + 0xcc]                ; 004fae84
    MOV dword ptr [ESP + 0xd4],EAX      ; 004fae8b
    MOVSD ES:EDI,ESI                    ; 004fae92
    MOVSD ES:EDI,ESI                    ; 004fae93
    MOVSD ES:EDI,ESI                    ; 004fae94
    FLD float ptr [ESP + 0x88]          ; 004fae95
    FDIV float ptr [ESP + 0xc4]         ; 004fae9c
    MOV EAX,dword ptr [ESP + 0x60]      ; 004faea3
    MOV dword ptr [ESP + 0x9c],EAX      ; 004faea7
    MOV EAX,dword ptr [ESP + 0x64]      ; 004faeae
    LEA EDI,[ESP + 0x6c]                ; 004faeb2
    MOV dword ptr [ESP + 0xa0],EAX      ; 004faeb6
    MOV EAX,dword ptr [ESP + 0x68]      ; 004faebd
    LEA ESI,[ESP + 0x9c]                ; 004faec1
    MOV dword ptr [ESP + 0xa4],EAX      ; 004faec8
    MOV EAX,dword ptr [ESP + 0x30]      ; 004faecf
    MOVSD ES:EDI,ESI                    ; 004faed3
    MOVSD ES:EDI,ESI                    ; 004faed4
    MOVSD ES:EDI,ESI                    ; 004faed5
    MOV dword ptr [ESP + 0x78],EAX      ; 004faed6
    MOV EAX,dword ptr [ESP + 0x34]      ; 004faeda
    LEA EDI,[ESP + 0xa8]                ; 004faede
    MOV dword ptr [ESP + 0x7c],EAX      ; 004faee5
    MOV EAX,dword ptr [ESP + 0x38]      ; 004faee9
    LEA ESI,[ESP + 0x78]                ; 004faeed
    MOV dword ptr [ESP + 0x80],EAX      ; 004faef1
    MOVSD ES:EDI,ESI                    ; 004faef8
    MOVSD ES:EDI,ESI                    ; 004faef9
    MOVSD ES:EDI,ESI                    ; 004faefa
    FLD float ptr [ESP + 0x74]          ; 004faefb
    FDIV float ptr [ESP + 0xb0]         ; 004faeff
    MOV EBP,dword ptr [ESP + 0x104]     ; 004faf06
    FXCH ST2                            ; 004faf0d
    FSTP float ptr [ESP + 0x54]         ; 004faf0f
    XOR ESI,ESI                         ; 004faf13
    MOV EDI,dword ptr [EBP + 0x54]      ; 004faf15
    MOV dword ptr [ESP + 0x100],ESI     ; 004faf18
    FSTP float ptr [ESP + 0x58]         ; 004faf1f
    FSTP float ptr [ESP + 0x5c]         ; 004faf23
    TEST EDI,EDI                        ; 004faf27
    JLE 0x004fb03e                      ; 004faf29
        ;   XREF to: 004fb03e (CONDITIONAL_JUMP)  ; LAB_004fb03e
    MOV dword ptr [ESP + 0xfc],EBX      ; 004faf2f
    MOV dword ptr [ESP + 0xf8],EDX      ; 004faf36
    XOR EBX,EBX                         ; 004faf3d
    MOV ESI,dword ptr [EBP + 0x58]      ; 004faf3f
        ;   Label: LAB_004faf3f
    LEA EDI,[ESP + 0xb4]                ; 004faf42
    LEA ESI,[ESI + EBX*0x1 + 0x4]       ; 004faf49
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004faf4d
    MOVSD ES:EDI,ESI                    ; 004faf54
    MOVSD ES:EDI,ESI                    ; 004faf55
    MOVSD ES:EDI,ESI                    ; 004faf56
    CMP dword ptr [EAX + 0xc28],0x0     ; 004faf57
    JZ 0x004fb002                       ; 004faf5e
        ;   XREF to: 004fb002 (CONDITIONAL_JUMP)  ; LAB_004fb002
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004faf64
    FLD float ptr [ESP + 0xb4]          ; 004faf6b
    FSUB float ptr [EAX]                ; 004faf72
    FST float ptr [ESP + 0xb4]          ; 004faf74
    FMUL float ptr [ESP + 0x54]         ; 004faf7b
    FLD float ptr [ESP + 0xb8]          ; 004faf7f
    FSUB float ptr [EAX + 0x4]          ; 004faf86
    FLD float ptr [ESP + 0xbc]          ; 004faf89
    FXCH                                ; 004faf90
    FST float ptr [ESP + 0xb8]          ; 004faf92
    FXCH                                ; 004faf99
    FSUB float ptr [EAX + 0x8]          ; 004faf9b
    FXCH                                ; 004faf9e
    FMUL float ptr [ESP + 0x58]         ; 004fafa0
    FXCH                                ; 004fafa4
    FMUL float ptr [ESP + 0x5c]         ; 004fafa6
    FXCH ST2                            ; 004fafaa
    FSTP float ptr [ESP + 0xb4]         ; 004fafac
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004fafb3
    FLD float ptr [ESP + 0xb4]          ; 004fafba
    FXCH                                ; 004fafc1
    FSTP float ptr [ESP + 0xb8]         ; 004fafc3
    FXCH                                ; 004fafca
    FSTP float ptr [ESP + 0xbc]         ; 004fafcc
    FADD float ptr [EAX]                ; 004fafd3
    FLD float ptr [ESP + 0xb8]          ; 004fafd5
    FXCH                                ; 004fafdc
    FSTP float ptr [ESP + 0xb4]         ; 004fafde
    FADD float ptr [EAX + 0x4]          ; 004fafe5
    FLD float ptr [ESP + 0xbc]          ; 004fafe8
    FXCH                                ; 004fafef
    FSTP float ptr [ESP + 0xb8]         ; 004faff1
    FADD float ptr [EAX + 0x8]          ; 004faff8
    FSTP float ptr [ESP + 0xbc]         ; 004faffb
    LEA EAX,[ESP + 0xb4]                ; 004fb002
        ;   Label: LAB_004fb002
    PUSH EAX                            ; 004fb009
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004fb00a
    PUSH EAX                            ; 004fb011
    ADD EBX,0x10                        ; 004fb012
    CALL core_morph.cpp_CMorphModel_findNearestPoint_FUN_004fa7f0 ; 004fb015
        ;   XREF to: 004fa7f0 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findNearestPoint_FUN_004fa7f0(CMorphModel * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004fb01a
    MOV ESI,dword ptr [EBP + 0x58]      ; 004fb01d
    MOV EDX,dword ptr [ESP + 0x100]     ; 004fb020
    MOV dword ptr [ESI + EBX*0x1 + -0x10],EAX ; 004fb027
    INC EDX                             ; 004fb02b
    MOV ECX,dword ptr [EBP + 0x54]      ; 004fb02c
    MOV dword ptr [ESP + 0x100],EDX     ; 004fb02f
    CMP EDX,ECX                         ; 004fb036
    JL 0x004faf3f                       ; 004fb038
        ;   XREF to: 004faf3f (CONDITIONAL_JUMP)  ; LAB_004faf3f
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004fb03e
        ;   Label: LAB_004fb03e
    MOV EDI,dword ptr [ESP + 0xdc]      ; 004fb045
    MOV EBP,dword ptr [ESP + 0x104]     ; 004fb04c
    MOV EAX,dword ptr [ESP + 0xec]      ; 004fb053
    MOV EBX,dword ptr [ESP + 0xe4]      ; 004fb05a
    SUB ESI,0x18                        ; 004fb061
    SUB EDI,0x608                       ; 004fb064
    ADD EBP,0x608                       ; 004fb06a
    INC EAX                             ; 004fb070
    ADD EBX,0x18                        ; 004fb071
    MOV dword ptr [ESP + 0xe8],ESI      ; 004fb074
    MOV dword ptr [ESP + 0xdc],EDI      ; 004fb07b
    MOV dword ptr [ESP + 0x104],EBP     ; 004fb082
    MOV dword ptr [ESP + 0xec],EAX      ; 004fb089
    MOV dword ptr [ESP + 0xe4],EBX      ; 004fb090
    CMP EAX,0x2                         ; 004fb097
    JL 0x004fad8e                       ; 004fb09a
        ;   XREF to: 004fad8e (CONDITIONAL_JUMP)  ; LAB_004fad8e
    MOV EBX,dword ptr [ESP + 0x11c]     ; 004fb0a0
    PUSH EBX                            ; 004fb0a7
    ADD ESP,0x4                         ; 004fb0a8
    LEA EAX,[EBX + 0x608]               ; 004fb0ab
    PUSH EAX                            ; 004fb0b1
    ADD ESP,0x4                         ; 004fb0b2
    ADD ESP,0x108                       ; 004fb0b5
    POP EBP                             ; 004fb0bb
    POP EDI                             ; 004fb0bc
    POP ESI                             ; 004fb0bd
    POP EBX                             ; 004fb0be
    RET                                 ; 004fb0bf
    MOV EDX,dword ptr [EBX]             ; 004fb0c0
        ;   Label: LAB_004fb0c0
    MOV dword ptr [EAX],EDX             ; 004fb0c2
    MOV EDX,dword ptr [EBX + 0x4]       ; 004fb0c4
    MOV dword ptr [EAX + 0x4],EDX       ; 004fb0c7
    MOV EDX,dword ptr [EBX + 0x8]       ; 004fb0ca
    MOV dword ptr [EAX + 0x8],EDX       ; 004fb0cd
    JMP 0x004faca1                      ; 004fb0d0
        ;   XREF to: 004faca1 (UNCONDITIONAL_JUMP)  ; LAB_004faca1

