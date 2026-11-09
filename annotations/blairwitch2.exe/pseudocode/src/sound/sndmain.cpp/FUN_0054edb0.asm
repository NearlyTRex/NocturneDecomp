; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_0054edb0(CSfxSlot *param_1)
;
; Local Variables:
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined8       Stack[-0xd0]:8  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined8       Stack[-0x74]:8  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
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
;
; XREF[2]:
;   sound_sndmain.cpp_FUN_0054d060 at 0054d1b0
;   sound_sndmain.cpp_FUN_005541f0 at 005543e2
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e872e
;   TerminatedCString s_SfxSlot_mix_must_be_lock_005e8743
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02648ea8
;   undefined4 DAT_0264901c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;   crt_memory.c_memset_FUN_005b77c0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
;   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0
;   sound_sndmain.cpp_mixResampleMonoToStereo_FUN_0054d520
;   sound_sndmain.cpp_mixResampleStereoToStereo_FUN_0054d660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054edb0
        ;   Label: sound_sndmain.cpp_FUN_0054edb0
    PUSH ESI                            ; 0054edb1
    PUSH EDI                            ; 0054edb2
    PUSH EBP                            ; 0054edb3
    MOV EBP,ESP                         ; 0054edb4
    SUB ESP,0xcc                        ; 0054edb6
    AND ESP,0xfffffff8                  ; 0054edbc
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054edbf
    CMP dword ptr [0x0264901c],0x0      ; 0054edc2 | DAT_0264901c
    JLE 0x0054ef54                      ; 0054edc9
        ;   XREF to: 0054ef54 (CONDITIONAL_JUMP)  ; LAB_0054ef54
    CMP dword ptr [EDI + 0x64],0x0      ; 0054edcf
        ;   Label: LAB_0054edcf
    JZ 0x0054ef4d                       ; 0054edd3
        ;   XREF to: 0054ef4d (CONDITIONAL_JUMP)  ; LAB_0054ef4d
    MOV EAX,dword ptr [EBP + 0x38]      ; 0054edd9
    MOV dword ptr [ESP + 0x7c],EAX      ; 0054eddc
    MOV EAX,0x1                         ; 0054ede0
    MOV EDX,dword ptr [EDI + 0x68]      ; 0054ede5
    MOV dword ptr [ESP + 0x78],EAX      ; 0054ede8
    TEST EDX,EDX                        ; 0054edec
    JZ 0x0054ee14                       ; 0054edee
        ;   XREF to: 0054ee14 (CONDITIONAL_JUMP)  ; LAB_0054ee14
    MOV EBX,dword ptr [EBP + 0x3c]      ; 0054edf0
    XOR ECX,ECX                         ; 0054edf3
    TEST EBX,EBX                        ; 0054edf5
    JLE 0x0054ee14                      ; 0054edf7
        ;   XREF to: 0054ee14 (CONDITIONAL_JUMP)  ; LAB_0054ee14
    MOV ESI,dword ptr [EBP + 0x3c]      ; 0054edf9
    MOV EDX,EDI                         ; 0054edfc
    CMP dword ptr [EDX + 0x90],0x3c000000 ; 0054edfe
        ;   Label: LAB_0054edfe
    JLE 0x0054ef7c                      ; 0054ee08
        ;   XREF to: 0054ef7c (CONDITIONAL_JUMP)  ; LAB_0054ef7c
    XOR ESI,ESI                         ; 0054ee0e
    MOV dword ptr [ESP + 0x78],ESI      ; 0054ee10
    MOV EAX,dword ptr [EBP + 0x3c]      ; 0054ee14
        ;   Label: LAB_0054ee14
    XOR ESI,ESI                         ; 0054ee17
    TEST EAX,EAX                        ; 0054ee19
    JLE 0x0054ee9b                      ; 0054ee1b
        ;   XREF to: 0054ee9b (CONDITIONAL_JUMP)  ; LAB_0054ee9b
    MOV EBX,EDI                         ; 0054ee21
    CMP dword ptr [ESP + 0x78],0x0      ; 0054ee23
        ;   Label: LAB_0054ee23
    JZ 0x0054ef8d                       ; 0054ee28
        ;   XREF to: 0054ef8d (CONDITIONAL_JUMP)  ; LAB_0054ef8d
    MOV EAX,dword ptr [EBX + 0xb0]      ; 0054ee2e
        ;   Label: LAB_0054ee2e
    MOV dword ptr [EBX + 0xd0],EAX      ; 0054ee34
    MOV EAX,dword ptr [EBX + 0xd0]      ; 0054ee3a
        ;   Label: LAB_0054ee3a
    LEA ECX,[ESI*0x4 + 0x0]             ; 0054ee40
    SHL EAX,0x2                         ; 0054ee47
    ADD dword ptr [ECX + EBP*0x1 + 0x18],EAX ; 0054ee4a
    MOV EAX,dword ptr [EBX + 0xd0]      ; 0054ee4e
    SUB EAX,dword ptr [EBX + 0xb0]      ; 0054ee54
    CDQ                                 ; 0054ee5a
    XOR EAX,EDX                         ; 0054ee5b
    SUB EAX,EDX                         ; 0054ee5d
    CMP EAX,0x1                         ; 0054ee5f
    JLE 0x0054ef9f                      ; 0054ee62
        ;   XREF to: 0054ef9f (CONDITIONAL_JUMP)  ; LAB_0054ef9f
    MOV EAX,dword ptr [ECX + EBP*0x1 + 0x18] ; 0054ee68
    MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX ; 0054ee6c
    MOV EAX,dword ptr [ECX + 0x2648ea4] ; 0054ee70 | DAT_02648ea8
    MOV dword ptr [ECX + EBP*0x1 + 0x18],EAX ; 0054ee76
    MOV EAX,dword ptr [EBP + 0x38]      ; 0054ee7a
    SHL EAX,0x2                         ; 0054ee7d
    PUSH EAX                            ; 0054ee80
    PUSH 0x0                            ; 0054ee81
    MOV EDX,dword ptr [ECX + EBP*0x1 + 0x18] ; 0054ee83
    PUSH EDX                            ; 0054ee87
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0054ee88
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0054ee8d
    MOV EDX,dword ptr [EBP + 0x3c]      ; 0054ee90
        ;   Label: LAB_0054ee90
    INC ESI                             ; 0054ee93
    ADD EBX,0x4                         ; 0054ee94
    CMP ESI,EDX                         ; 0054ee97
    JL 0x0054ee23                       ; 0054ee99
        ;   XREF to: 0054ee23 (CONDITIONAL_JUMP)  ; LAB_0054ee23
    MOV ECX,dword ptr [EDI + 0x68]      ; 0054ee9b
        ;   Label: LAB_0054ee9b
    MOV ECX,dword ptr [ECX + 0x104]     ; 0054ee9e
    MOV EAX,0x1                         ; 0054eea4
    DEC ECX                             ; 0054eea9
    SHL EAX,CL                          ; 0054eeaa
    MOV dword ptr [ESP + 0xc8],EAX      ; 0054eeac
    FILD dword ptr [ESP + 0xc8]         ; 0054eeb3
    FLD1                                ; 0054eeba
    FDIVRP                              ; 0054eebc
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0054eebe
    XOR EAX,EAX                         ; 0054eec1
    FSTP float ptr [ESP + 0x74]         ; 0054eec3
    TEST ECX,ECX                        ; 0054eec7
    JLE 0x0054eeea                      ; 0054eec9
        ;   XREF to: 0054eeea (CONDITIONAL_JUMP)  ; LAB_0054eeea
    FLD float ptr [ESP + 0x74]          ; 0054eecb
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0054eecf
    MOV EDX,EDI                         ; 0054eed2
    FLD float ptr [EDX + 0x90]          ; 0054eed4
        ;   Label: LAB_0054eed4
    FMUL ST1                            ; 0054eeda
    INC EAX                             ; 0054eedc
    ADD EDX,0x4                         ; 0054eedd
    FSTP float ptr [ESP + EAX*0x4 + 0x38] ; 0054eee0
    CMP EAX,ECX                         ; 0054eee4
    JL 0x0054eed4                       ; 0054eee6
        ;   XREF to: 0054eed4 (CONDITIONAL_JUMP)  ; LAB_0054eed4
    FSTP ST0                            ; 0054eee8
    CMP dword ptr [EDI + 0x64],0x0      ; 0054eeea
        ;   Label: LAB_0054eeea
    JNZ 0x0054efaa                      ; 0054eeee
        ;   XREF to: 0054efaa (CONDITIONAL_JUMP)  ; LAB_0054efaa
    PUSH EDI                            ; 0054eef4
        ;   Label: LAB_0054eef4
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 0054eef5
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0054eefa
    XOR EAX,EAX                         ; 0054eefd
        ;   Label: LAB_0054eefd
    MOV EDX,dword ptr [EBP + 0x3c]      ; 0054eeff
    MOV dword ptr [ESP + 0x80],EAX      ; 0054ef02
    TEST EDX,EDX                        ; 0054ef09
    JLE 0x0054ef4d                      ; 0054ef0b
        ;   XREF to: 0054ef4d (CONDITIONAL_JUMP)  ; LAB_0054ef4d
    MOV dword ptr [ESP + 0x90],EAX      ; 0054ef0d
    MOV EAX,dword ptr [ESP + 0x90]      ; 0054ef14
        ;   Label: LAB_0054ef14
    CMP dword ptr [ESP + EAX*0x1 + 0x1c],0x0 ; 0054ef1b
    JNZ 0x0054f638                      ; 0054ef20
        ;   XREF to: 0054f638 (CONDITIONAL_JUMP)  ; LAB_0054f638
    MOV EAX,dword ptr [ESP + 0x90]      ; 0054ef26
        ;   Label: LAB_0054ef26
    MOV EDX,dword ptr [ESP + 0x80]      ; 0054ef2d
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0054ef34
    ADD EAX,0x4                         ; 0054ef37
    INC EDX                             ; 0054ef3a
    MOV dword ptr [ESP + 0x90],EAX      ; 0054ef3b
    MOV dword ptr [ESP + 0x80],EDX      ; 0054ef42
    CMP EDX,ECX                         ; 0054ef49
    JL 0x0054ef14                       ; 0054ef4b
        ;   XREF to: 0054ef14 (CONDITIONAL_JUMP)  ; LAB_0054ef14
    MOV ESP,EBP                         ; 0054ef4d
        ;   Label: LAB_0054ef4d
    POP EBP                             ; 0054ef4f
    POP EDI                             ; 0054ef50
    POP ESI                             ; 0054ef51
    POP EBX                             ; 0054ef52
    RET                                 ; 0054ef53
    MOV ECX,0x5e872e                    ; 0054ef54 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054ef54
    MOV EBX,0xb9d                       ; 0054ef59
    PUSH 0x5e8743                       ; 0054ef5e | = "SfxSlot::mix - must be locked!"
    MOV dword ptr [0x01d046a0],ECX      ; 0054ef63 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0054ef69 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054ef6f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054ef74
    JMP 0x0054edcf                      ; 0054ef77
        ;   XREF to: 0054edcf (UNCONDITIONAL_JUMP)  ; LAB_0054edcf
    INC ECX                             ; 0054ef7c
        ;   Label: LAB_0054ef7c
    ADD EDX,0x4                         ; 0054ef7d
    CMP ECX,ESI                         ; 0054ef80
    JL 0x0054edfe                       ; 0054ef82
        ;   XREF to: 0054edfe (CONDITIONAL_JUMP)  ; LAB_0054edfe
    JMP 0x0054ee14                      ; 0054ef88
        ;   XREF to: 0054ee14 (UNCONDITIONAL_JUMP)  ; LAB_0054ee14
    CMP dword ptr [EBX + 0xd0],0x0      ; 0054ef8d
        ;   Label: LAB_0054ef8d
    JL 0x0054ee2e                       ; 0054ef94
        ;   XREF to: 0054ee2e (CONDITIONAL_JUMP)  ; LAB_0054ee2e
    JMP 0x0054ee3a                      ; 0054ef9a
        ;   XREF to: 0054ee3a (UNCONDITIONAL_JUMP)  ; LAB_0054ee3a
    XOR EAX,EAX                         ; 0054ef9f
        ;   Label: LAB_0054ef9f
    MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX ; 0054efa1
    JMP 0x0054ee90                      ; 0054efa5
        ;   XREF to: 0054ee90 (UNCONDITIONAL_JUMP)  ; LAB_0054ee90
    MOV ESI,dword ptr [EDI + 0x68]      ; 0054efaa
        ;   Label: LAB_0054efaa
    TEST ESI,ESI                        ; 0054efad
    JZ 0x0054eef4                       ; 0054efaf
        ;   XREF to: 0054eef4 (CONDITIONAL_JUMP)  ; LAB_0054eef4
    FLDZ                                ; 0054efb5
    FCOMP double ptr [EDI + 0x50]       ; 0054efb7
    FNSTSW AX                           ; 0054efba
    SAHF                                ; 0054efbc
    JA 0x0054eef4                       ; 0054efbd
        ;   XREF to: 0054eef4 (CONDITIONAL_JUMP)  ; LAB_0054eef4
    CMP dword ptr [EBP + 0x38],0x1      ; 0054efc3
    JL 0x0054eefd                       ; 0054efc7
        ;   XREF to: 0054eefd (CONDITIONAL_JUMP)  ; LAB_0054eefd
    MOV EDX,ESI                         ; 0054efcd
    FILD dword ptr [EDX + 0x10c]        ; 0054efcf
    FILD dword ptr [EBP + 0x40]         ; 0054efd5
    FDIVP                               ; 0054efd8
    FMUL float ptr [EDI + 0x6c]         ; 0054efda
    FLDZ                                ; 0054efdd
    FXCH                                ; 0054efdf
    FSTP double ptr [ESP + 0x8]         ; 0054efe1
    FCOMP double ptr [ESP + 0x8]        ; 0054efe5
    FNSTSW AX                           ; 0054efe9
    SAHF                                ; 0054efeb
    JNC 0x0054eefd                      ; 0054efec
        ;   XREF to: 0054eefd (CONDITIONAL_JUMP)  ; LAB_0054eefd
    FILD dword ptr [EDX + 0x164]        ; 0054eff2
    MOV EAX,dword ptr [EBP + 0x38]      ; 0054eff8
    FSTP double ptr [ESP]               ; 0054effb
    XOR ECX,ECX                         ; 0054effe
    MOV EBX,dword ptr [ESI + 0x110]     ; 0054f000
    MOV dword ptr [ESP + 0x84],ECX      ; 0054f006
    MOV dword ptr [ESP + 0x18],EAX      ; 0054f00d
    TEST EBX,EBX                        ; 0054f011
    JLE 0x0054f07c                      ; 0054f013
        ;   XREF to: 0054f07c (CONDITIONAL_JUMP)  ; LAB_0054f07c
    MOV EAX,dword ptr [EDI + 0x114]     ; 0054f015
    FILD dword ptr [EDX + EAX*0x4 + 0x128] ; 0054f01b
    FSUB double ptr [EDI + 0x50]        ; 0054f022
    FDIV double ptr [ESP + 0x8]         ; 0054f025
    SUB ESP,0x8                         ; 0054f029
    FSTP double ptr [ESP]               ; 0054f02c
    CALL crt_math.c_floor_FUN_005b84d0  ; 0054f02f
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 0054f034
    MOV dword ptr [ESP + 0x78],EDX      ; 0054f038
    FLD double ptr [ESP + 0x74]         ; 0054f03c
    ADD ESP,0x8                         ; 0054f040
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054f043
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8c]        ; 0054f048
    CMP dword ptr [ESP + 0x8c],0x0      ; 0054f04f
    JL 0x0054f246                       ; 0054f057
        ;   XREF to: 0054f246 (CONDITIONAL_JUMP)  ; LAB_0054f246
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054f05d
        ;   Label: LAB_0054f05d
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0054f061
    CMP EAX,EDX                         ; 0054f068
    JLE 0x0054f07c                      ; 0054f06a
        ;   XREF to: 0054f07c (CONDITIONAL_JUMP)  ; LAB_0054f07c
    MOV ECX,0x1                         ; 0054f06c
    MOV dword ptr [ESP + 0x18],EDX      ; 0054f071
    MOV dword ptr [ESP + 0x84],ECX      ; 0054f075
    CMP dword ptr [ESP + 0x18],0x0      ; 0054f07c
        ;   Label: LAB_0054f07c
    JL 0x0054f254                       ; 0054f081
        ;   XREF to: 0054f254 (CONDITIONAL_JUMP)  ; LAB_0054f254
    MOV EAX,dword ptr [EDI + 0x10c]     ; 0054f087
        ;   Label: LAB_0054f087
    MOV dword ptr [ESP + 0x10],EAX      ; 0054f08d
    MOV EAX,dword ptr [EDI + 0x110]     ; 0054f091
    MOV dword ptr [ESP + 0x14],EAX      ; 0054f097
    FLD double ptr [ESP]                ; 0054f09b
    FSUB double ptr [ESP + 0x10]        ; 0054f09e
    FDIV double ptr [ESP + 0x8]         ; 0054f0a2
    XOR EAX,EAX                         ; 0054f0a6
    MOV dword ptr [ESP + 0x88],EAX      ; 0054f0a8
    SUB ESP,0x8                         ; 0054f0af
    FSTP double ptr [ESP]               ; 0054f0b2
    CALL crt_math.c_floor_FUN_005b84d0  ; 0054f0b5
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 0054f0ba
    MOV dword ptr [ESP + 0x78],EDX      ; 0054f0be
    FLD double ptr [ESP + 0x74]         ; 0054f0c2
    ADD ESP,0x8                         ; 0054f0c6
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054f0c9
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 0054f0ce
    CMP dword ptr [ESP + 0x94],0x1      ; 0054f0d5
    JGE 0x0054f132                      ; 0054f0dd
        ;   XREF to: 0054f132 (CONDITIONAL_JUMP)  ; LAB_0054f132
    FLD double ptr [ESP + 0x10]         ; 0054f0df
    FSUB double ptr [ESP]               ; 0054f0e3
    FLDZ                                ; 0054f0e6
    FXCH                                ; 0054f0e8
    FSTP double ptr [ESP + 0x10]        ; 0054f0ea
    FCOMP double ptr [ESP + 0x10]       ; 0054f0ee
    FNSTSW AX                           ; 0054f0f2
    SAHF                                ; 0054f0f4
    JBE 0x0054f101                      ; 0054f0f5
        ;   XREF to: 0054f101 (CONDITIONAL_JUMP)  ; LAB_0054f101
    XOR ECX,ECX                         ; 0054f0f7
    MOV dword ptr [ESP + 0x10],ECX      ; 0054f0f9
    MOV dword ptr [ESP + 0x14],ECX      ; 0054f0fd
    FLD double ptr [ESP]                ; 0054f101
        ;   Label: LAB_0054f101
    FSUB double ptr [ESP + 0x10]        ; 0054f104
    FDIV double ptr [ESP + 0x8]         ; 0054f108
    SUB ESP,0x8                         ; 0054f10c
    FSTP double ptr [ESP]               ; 0054f10f
    CALL crt_math.c_floor_FUN_005b84d0  ; 0054f112
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 0054f117
    MOV dword ptr [ESP + 0x78],EDX      ; 0054f11b
    FLD double ptr [ESP + 0x74]         ; 0054f11f
    ADD ESP,0x8                         ; 0054f123
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054f126
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 0054f12b
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054f132
        ;   Label: LAB_0054f132
    MOV ESI,dword ptr [ESP + 0x18]      ; 0054f139
    CMP EAX,ESI                         ; 0054f13d
    JGE 0x0054f25f                      ; 0054f13f
        ;   XREF to: 0054f25f (CONDITIONAL_JUMP)  ; LAB_0054f25f
    MOV ESI,0x1                         ; 0054f145
    XOR EBX,EBX                         ; 0054f14a
    MOV dword ptr [ESP + 0x18],EAX      ; 0054f14c
    MOV dword ptr [ESP + 0x84],EBX      ; 0054f150
    MOV dword ptr [ESP + 0x88],ESI      ; 0054f157
    CMP dword ptr [ESP + 0x18],0x0      ; 0054f15e
        ;   Label: LAB_0054f15e
    JL 0x0054f275                       ; 0054f163
        ;   XREF to: 0054f275 (CONDITIONAL_JUMP)  ; LAB_0054f275
    CMP dword ptr [ESP + 0x78],0x0      ; 0054f169
        ;   Label: LAB_0054f169
    JZ 0x0054f280                       ; 0054f16e
        ;   XREF to: 0054f280 (CONDITIONAL_JUMP)  ; LAB_0054f280
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054f174
    MOV dword ptr [ESP + 0xc8],EAX      ; 0054f178
    FILD dword ptr [ESP + 0xc8]         ; 0054f17f
    FMUL double ptr [ESP + 0x8]         ; 0054f186
    FADD double ptr [ESP + 0x10]        ; 0054f18a
    FSTP double ptr [ESP + 0x10]        ; 0054f18e
        ;   Label: LAB_0054f18e
    CMP dword ptr [ESP + 0x88],0x0      ; 0054f192
        ;   Label: LAB_0054f192
    JZ 0x0054f1a6                       ; 0054f19a
        ;   XREF to: 0054f1a6 (CONDITIONAL_JUMP)  ; LAB_0054f1a6
    XOR ESI,ESI                         ; 0054f19c
    MOV dword ptr [ESP + 0x10],ESI      ; 0054f19e
    MOV dword ptr [ESP + 0x14],ESI      ; 0054f1a2
    FLD double ptr [ESP + 0x10]         ; 0054f1a6
        ;   Label: LAB_0054f1a6
    FCOMP double ptr [ESP]              ; 0054f1aa
    FNSTSW AX                           ; 0054f1ad
    SAHF                                ; 0054f1af
    JC 0x0054f1bd                       ; 0054f1b0
        ;   XREF to: 0054f1bd (CONDITIONAL_JUMP)  ; LAB_0054f1bd
    FLD double ptr [ESP + 0x10]         ; 0054f1b2
    FSUB double ptr [ESP]               ; 0054f1b6
    FSTP double ptr [ESP + 0x10]        ; 0054f1b9
    MOV EDX,dword ptr [ESP + 0x14]      ; 0054f1bd
        ;   Label: LAB_0054f1bd
    PUSH EDX                            ; 0054f1c1
    MOV ECX,dword ptr [ESP + 0x14]      ; 0054f1c2
    PUSH ECX                            ; 0054f1c6
    PUSH EDI                            ; 0054f1c7
    CALL sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0 ; 0054f1c8
        ;   XREF to: 0054f9c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_0054f9c0(CSfxSlot * this_ptr, double hardware_playback_pos)
    ADD ESP,0xc                         ; 0054f1cd
    CMP dword ptr [ESP + 0x84],0x0      ; 0054f1d0
    JZ 0x0054f20f                       ; 0054f1d8
        ;   XREF to: 0054f20f (CONDITIONAL_JUMP)  ; LAB_0054f20f
    MOV EAX,dword ptr [EDI + 0x68]      ; 0054f1da
    MOV ESI,dword ptr [EDI + 0x114]     ; 0054f1dd
    MOV EDX,dword ptr [EDI + 0x114]     ; 0054f1e3
    INC ESI                             ; 0054f1e9
    FILD dword ptr [EAX + EDX*0x4 + 0x13c] ; 0054f1ea
    MOV dword ptr [EDI + 0x114],ESI     ; 0054f1f1
    MOV EDX,dword ptr [EDI + 0x68]      ; 0054f1f7
    FSTP double ptr [EDI + 0x50]        ; 0054f1fa
    CMP ESI,dword ptr [EDX + 0x124]     ; 0054f1fd
    JL 0x0054f20f                       ; 0054f203
        ;   XREF to: 0054f20f (CONDITIONAL_JUMP)  ; LAB_0054f20f
    MOV dword ptr [EDI + 0x114],0x0     ; 0054f205
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054f20f
        ;   Label: LAB_0054f20f
    MOV EBX,dword ptr [EBP + 0x38]      ; 0054f213
    MOV ESI,dword ptr [EBP + 0x3c]      ; 0054f216
    SUB EBX,EAX                         ; 0054f219
    XOR EDX,EDX                         ; 0054f21b
    MOV dword ptr [EBP + 0x38],EBX      ; 0054f21d
    TEST ESI,ESI                        ; 0054f220
    JLE 0x0054eeea                      ; 0054f222
        ;   XREF to: 0054eeea (CONDITIONAL_JUMP)  ; LAB_0054eeea
    LEA ECX,[EAX*0x4 + 0x0]             ; 0054f228
    XOR EAX,EAX                         ; 0054f22f
    ADD dword ptr [EAX + EBP*0x1 + 0x18],ECX ; 0054f231
        ;   Label: LAB_0054f231
    INC EDX                             ; 0054f235
    MOV ESI,dword ptr [EBP + 0x3c]      ; 0054f236
    ADD EAX,0x4                         ; 0054f239
    CMP EDX,ESI                         ; 0054f23c
    JGE 0x0054eeea                      ; 0054f23e
        ;   XREF to: 0054eeea (CONDITIONAL_JUMP)  ; LAB_0054eeea
    JMP 0x0054f231                      ; 0054f244
        ;   XREF to: 0054f231 (UNCONDITIONAL_JUMP)  ; LAB_0054f231
    XOR EAX,EAX                         ; 0054f246
        ;   Label: LAB_0054f246
    MOV dword ptr [ESP + 0x8c],EAX      ; 0054f248
    JMP 0x0054f05d                      ; 0054f24f
        ;   XREF to: 0054f05d (UNCONDITIONAL_JUMP)  ; LAB_0054f05d
    XOR ESI,ESI                         ; 0054f254
        ;   Label: LAB_0054f254
    MOV dword ptr [ESP + 0x18],ESI      ; 0054f256
    JMP 0x0054f087                      ; 0054f25a
        ;   XREF to: 0054f087 (UNCONDITIONAL_JUMP)  ; LAB_0054f087
    JNZ 0x0054f15e                      ; 0054f25f
        ;   XREF to: 0054f15e (CONDITIONAL_JUMP)  ; LAB_0054f15e
        ;   Label: LAB_0054f25f
    MOV dword ptr [ESP + 0x88],0x1      ; 0054f265
    JMP 0x0054f15e                      ; 0054f270
        ;   XREF to: 0054f15e (UNCONDITIONAL_JUMP)  ; LAB_0054f15e
    XOR EDX,EDX                         ; 0054f275
        ;   Label: LAB_0054f275
    MOV dword ptr [ESP + 0x18],EDX      ; 0054f277
    JMP 0x0054f169                      ; 0054f27b
        ;   XREF to: 0054f169 (UNCONDITIONAL_JUMP)  ; LAB_0054f169
    MOV EAX,dword ptr [EDI + 0x68]      ; 0054f280
        ;   Label: LAB_0054f280
    MOV EDX,dword ptr [ESP + 0x18]      ; 0054f283
    MOV EBX,dword ptr [EAX + 0x104]     ; 0054f287
    SHL EDX,0x2                         ; 0054f28d
    CMP EBX,0x8                         ; 0054f290
    JNZ 0x0054f439                      ; 0054f293
        ;   XREF to: 0054f439 (CONDITIONAL_JUMP)  ; LAB_0054f439
    CMP dword ptr [EAX + 0x108],0x2     ; 0054f299
    JNZ 0x0054f390                      ; 0054f2a0
        ;   XREF to: 0054f390 (CONDITIONAL_JUMP)  ; LAB_0054f390
    CMP dword ptr [ESP + 0x18],0x0      ; 0054f2a6
    JLE 0x0054f192                      ; 0054f2ab
        ;   XREF to: 0054f192 (CONDITIONAL_JUMP)  ; LAB_0054f192
    XOR EAX,EAX                         ; 0054f2b1
    MOV dword ptr [ESP + 0xa0],EDX      ; 0054f2b3
    MOV dword ptr [ESP + 0xb8],EAX      ; 0054f2ba
    FLD double ptr [ESP + 0x10]         ; 0054f2c1
        ;   Label: LAB_0054f2c1
    MOV EDX,dword ptr [EDI + 0x68]      ; 0054f2c5
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054f2c8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EDX,dword ptr [EDX + 0x120]     ; 0054f2cd
    FISTP dword ptr [ESP + 0xc8]        ; 0054f2d3
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0054f2da
    MOV DL,byte ptr [EDX + EAX*0x2]     ; 0054f2e1
    AND EDX,0xff                        ; 0054f2e4
    SUB EDX,0x80                        ; 0054f2ea
    MOV dword ptr [ESP + 0xc8],EDX      ; 0054f2f0
    FILD dword ptr [ESP + 0xc8]         ; 0054f2f7
    FSTP float ptr [ESP + 0x5c]         ; 0054f2fe
    MOV EDX,dword ptr [EDI + 0x68]      ; 0054f302
    MOV EDX,dword ptr [EDX + 0x120]     ; 0054f305
    MOV AL,byte ptr [EDX + EAX*0x2 + 0x1] ; 0054f30b
    AND EAX,0xff                        ; 0054f30f
    SUB EAX,0x80                        ; 0054f314
    MOV dword ptr [ESP + 0xc8],EAX      ; 0054f319
    MOV EDX,dword ptr [EBP + 0x3c]      ; 0054f320
    FILD dword ptr [ESP + 0xc8]         ; 0054f323
    FSTP float ptr [ESP + 0x60]         ; 0054f32a
    XOR EAX,EAX                         ; 0054f32e
    TEST EDX,EDX                        ; 0054f330
    JLE 0x0054f35f                      ; 0054f332
        ;   XREF to: 0054f35f (CONDITIONAL_JUMP)  ; LAB_0054f35f
    MOV ESI,dword ptr [ESP + 0xb8]      ; 0054f334
    XOR EDX,EDX                         ; 0054f33b
    MOV EBX,EAX                         ; 0054f33d
        ;   Label: LAB_0054f33d
    AND EBX,0x1                         ; 0054f33f
    FLD float ptr [ESP + EBX*0x4 + 0x5c] ; 0054f342
    FMUL float ptr [ESP + EDX*0x1 + 0x3c] ; 0054f346
    MOV ECX,dword ptr [EDX + EBP*0x1 + 0x18] ; 0054f34a
    FADD float ptr [ECX + ESI*0x1]      ; 0054f34e
    INC EAX                             ; 0054f351
    FSTP float ptr [ECX + ESI*0x1]      ; 0054f352
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0054f355
    ADD EDX,0x4                         ; 0054f358
    CMP EAX,ECX                         ; 0054f35b
    JL 0x0054f33d                       ; 0054f35d
        ;   XREF to: 0054f33d (CONDITIONAL_JUMP)  ; LAB_0054f33d
    FLD double ptr [ESP + 0x10]         ; 0054f35f
        ;   Label: LAB_0054f35f
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0054f363
    MOV ESI,dword ptr [ESP + 0xa0]      ; 0054f36a
    FADD double ptr [ESP + 0x8]         ; 0054f371
    ADD EBX,0x4                         ; 0054f375
    FSTP double ptr [ESP + 0x10]        ; 0054f378
    MOV dword ptr [ESP + 0xb8],EBX      ; 0054f37c
    CMP EBX,ESI                         ; 0054f383
    JGE 0x0054f192                      ; 0054f385
        ;   XREF to: 0054f192 (CONDITIONAL_JUMP)  ; LAB_0054f192
    JMP 0x0054f2c1                      ; 0054f38b
        ;   XREF to: 0054f2c1 (UNCONDITIONAL_JUMP)  ; LAB_0054f2c1
    CMP dword ptr [ESP + 0x18],0x0      ; 0054f390
        ;   Label: LAB_0054f390
    JLE 0x0054f192                      ; 0054f395
        ;   XREF to: 0054f192 (CONDITIONAL_JUMP)  ; LAB_0054f192
    MOV dword ptr [ESP + 0xa4],EDX      ; 0054f39b
    XOR ESI,ESI                         ; 0054f3a2
    FLD double ptr [ESP + 0x10]         ; 0054f3a4
        ;   Label: LAB_0054f3a4
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054f3a8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EAX,dword ptr [EDI + 0x68]      ; 0054f3ad
    FISTP dword ptr [ESP + 0xc8]        ; 0054f3b0
    MOV EAX,dword ptr [EAX + 0x120]     ; 0054f3b7
    ADD EAX,dword ptr [ESP + 0xc8]      ; 0054f3bd
    MOV AL,byte ptr [EAX]               ; 0054f3c4
    AND EAX,0xff                        ; 0054f3c6
    SUB EAX,0x80                        ; 0054f3cb
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0054f3d0
    MOV dword ptr [ESP + 0xc8],EAX      ; 0054f3d3
    XOR EDX,EDX                         ; 0054f3da
    FILD dword ptr [ESP + 0xc8]         ; 0054f3dc
    FSTP float ptr [ESP + 0xc0]         ; 0054f3e3
    TEST ECX,ECX                        ; 0054f3ea
    JLE 0x0054f416                      ; 0054f3ec
        ;   XREF to: 0054f416 (CONDITIONAL_JUMP)  ; LAB_0054f416
    FLD float ptr [ESP + 0xc0]          ; 0054f3ee
    MOV EBX,ESI                         ; 0054f3f5
    XOR EAX,EAX                         ; 0054f3f7
    FLD ST0                             ; 0054f3f9
        ;   Label: LAB_0054f3f9
    FMUL float ptr [ESP + EAX*0x1 + 0x3c] ; 0054f3fb
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x18] ; 0054f3ff
    FADD float ptr [ECX + EBX*0x1]      ; 0054f403
    INC EDX                             ; 0054f406
    FSTP float ptr [ECX + EBX*0x1]      ; 0054f407
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0054f40a
    ADD EAX,0x4                         ; 0054f40d
    CMP EDX,ECX                         ; 0054f410
    JL 0x0054f3f9                       ; 0054f412
        ;   XREF to: 0054f3f9 (CONDITIONAL_JUMP)  ; LAB_0054f3f9
    FSTP ST0                            ; 0054f414
    FLD double ptr [ESP + 0x10]         ; 0054f416
        ;   Label: LAB_0054f416
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0054f41a
    FADD double ptr [ESP + 0x8]         ; 0054f421
    ADD ESI,0x4                         ; 0054f425
    FSTP double ptr [ESP + 0x10]        ; 0054f428
    CMP ESI,EAX                         ; 0054f42c
    JGE 0x0054f192                      ; 0054f42e
        ;   XREF to: 0054f192 (CONDITIONAL_JUMP)  ; LAB_0054f192
    JMP 0x0054f3a4                      ; 0054f434
        ;   XREF to: 0054f3a4 (UNCONDITIONAL_JUMP)  ; LAB_0054f3a4
    MOV ESI,dword ptr [EAX + 0x108]     ; 0054f439
        ;   Label: LAB_0054f439
    CMP ESI,0x2                         ; 0054f43f
    JNZ 0x0054f554                      ; 0054f442
        ;   XREF to: 0054f554 (CONDITIONAL_JUMP)  ; LAB_0054f554
    CMP ESI,dword ptr [EBP + 0x3c]      ; 0054f448
    JZ 0x0054f509                       ; 0054f44b
        ;   XREF to: 0054f509 (CONDITIONAL_JUMP)  ; LAB_0054f509
    CMP dword ptr [ESP + 0x18],0x0      ; 0054f451
    JLE 0x0054f192                      ; 0054f456
        ;   XREF to: 0054f192 (CONDITIONAL_JUMP)  ; LAB_0054f192
    XOR EAX,EAX                         ; 0054f45c
    MOV dword ptr [ESP + 0xa8],EDX      ; 0054f45e
    MOV dword ptr [ESP + 0xbc],EAX      ; 0054f465
    FLD double ptr [ESP + 0x10]         ; 0054f46c
        ;   Label: LAB_0054f46c
    MOV EDX,dword ptr [EDI + 0x68]      ; 0054f470
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054f473
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EDX,dword ptr [EDX + 0x120]     ; 0054f478
    FISTP dword ptr [ESP + 0xc8]        ; 0054f47e
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0054f485
    FILD word ptr [EDX + EAX*0x4]       ; 0054f48c
    FSTP float ptr [ESP + 0x64]         ; 0054f48f
    MOV EDX,dword ptr [EDI + 0x68]      ; 0054f493
    MOV EDX,dword ptr [EDX + 0x120]     ; 0054f496
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0054f49c
    FILD word ptr [EDX + EAX*0x4 + 0x2] ; 0054f49f
    FSTP float ptr [ESP + 0x68]         ; 0054f4a3
    XOR EDX,EDX                         ; 0054f4a7
    TEST ECX,ECX                        ; 0054f4a9
    JLE 0x0054f4d8                      ; 0054f4ab
        ;   XREF to: 0054f4d8 (CONDITIONAL_JUMP)  ; LAB_0054f4d8
    MOV ESI,dword ptr [ESP + 0xbc]      ; 0054f4ad
    XOR EAX,EAX                         ; 0054f4b4
    MOV EBX,EDX                         ; 0054f4b6
        ;   Label: LAB_0054f4b6
    AND EBX,0x1                         ; 0054f4b8
    FLD float ptr [ESP + EBX*0x4 + 0x64] ; 0054f4bb
    FMUL float ptr [ESP + EAX*0x1 + 0x3c] ; 0054f4bf
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x18] ; 0054f4c3
    FADD float ptr [ECX + ESI*0x1]      ; 0054f4c7
    INC EDX                             ; 0054f4ca
    FSTP float ptr [ECX + ESI*0x1]      ; 0054f4cb
    MOV EBX,dword ptr [EBP + 0x3c]      ; 0054f4ce
    ADD EAX,0x4                         ; 0054f4d1
    CMP EDX,EBX                         ; 0054f4d4
    JL 0x0054f4b6                       ; 0054f4d6
        ;   XREF to: 0054f4b6 (CONDITIONAL_JUMP)  ; LAB_0054f4b6
    FLD double ptr [ESP + 0x10]         ; 0054f4d8
        ;   Label: LAB_0054f4d8
    MOV EBX,dword ptr [ESP + 0xbc]      ; 0054f4dc
    MOV ESI,dword ptr [ESP + 0xa8]      ; 0054f4e3
    FADD double ptr [ESP + 0x8]         ; 0054f4ea
    ADD EBX,0x4                         ; 0054f4ee
    FSTP double ptr [ESP + 0x10]        ; 0054f4f1
    MOV dword ptr [ESP + 0xbc],EBX      ; 0054f4f5
    CMP EBX,ESI                         ; 0054f4fc
    JGE 0x0054f192                      ; 0054f4fe
        ;   XREF to: 0054f192 (CONDITIONAL_JUMP)  ; LAB_0054f192
    JMP 0x0054f46c                      ; 0054f504
        ;   XREF to: 0054f46c (UNCONDITIONAL_JUMP)  ; LAB_0054f46c
    MOV ESI,dword ptr [ESP + 0x18]      ; 0054f509
        ;   Label: LAB_0054f509
    PUSH ESI                            ; 0054f50d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0054f50e
    PUSH EDX                            ; 0054f512
    MOV ECX,dword ptr [ESP + 0x10]      ; 0054f513
    PUSH ECX                            ; 0054f517
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054f518
    PUSH EBX                            ; 0054f51c
    MOV ESI,dword ptr [ESP + 0x20]      ; 0054f51d
    PUSH ESI                            ; 0054f521
    LEA EDX,[ESP + 0x50]                ; 0054f522
    PUSH EDX                            ; 0054f526
    LEA EDX,[EBP + 0x18]                ; 0054f527
    PUSH EDX                            ; 0054f52a
    MOV EDX,dword ptr [EAX + 0x120]     ; 0054f52b
    PUSH EDX                            ; 0054f531
    CALL sound_sndmain.cpp_mixResampleStereoToStereo_FUN_0054d660 ; 0054f532
        ;   XREF to: 0054d660 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_mixResampleStereoToStereo_FUN_0054d660()
    MOV dword ptr [ESP + 0x8c],EAX      ; 0054f537
    MOV dword ptr [ESP + 0x90],EDX      ; 0054f53e
    FLD double ptr [ESP + 0x8c]         ; 0054f545
    ADD ESP,0x20                        ; 0054f54c
    JMP 0x0054f18e                      ; 0054f54f
        ;   XREF to: 0054f18e (UNCONDITIONAL_JUMP)  ; LAB_0054f18e
    CMP dword ptr [EBP + 0x3c],0x2      ; 0054f554
        ;   Label: LAB_0054f554
    JZ 0x0054f5ed                       ; 0054f558
        ;   XREF to: 0054f5ed (CONDITIONAL_JUMP)  ; LAB_0054f5ed
    CMP dword ptr [ESP + 0x18],0x0      ; 0054f55e
    JLE 0x0054f192                      ; 0054f563
        ;   XREF to: 0054f192 (CONDITIONAL_JUMP)  ; LAB_0054f192
    MOV dword ptr [ESP + 0x9c],EDX      ; 0054f569
    XOR ESI,ESI                         ; 0054f570
    FLD double ptr [ESP + 0x10]         ; 0054f572
        ;   Label: LAB_0054f572
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054f576
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EAX,dword ptr [EDI + 0x68]      ; 0054f57b
    FISTP dword ptr [ESP + 0xc8]        ; 0054f57e
    MOV EAX,dword ptr [EAX + 0x120]     ; 0054f585
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0054f58b
    MOV EBX,dword ptr [EBP + 0x3c]      ; 0054f592
    FILD word ptr [EAX + EDX*0x2]       ; 0054f595
    FSTP float ptr [ESP + 0xc4]         ; 0054f598
    XOR EDX,EDX                         ; 0054f59f
    TEST EBX,EBX                        ; 0054f5a1
    JLE 0x0054f5cd                      ; 0054f5a3
        ;   XREF to: 0054f5cd (CONDITIONAL_JUMP)  ; LAB_0054f5cd
    FLD float ptr [ESP + 0xc4]          ; 0054f5a5
    MOV EBX,ESI                         ; 0054f5ac
    XOR EAX,EAX                         ; 0054f5ae
    FLD ST0                             ; 0054f5b0
        ;   Label: LAB_0054f5b0
    FMUL float ptr [ESP + EAX*0x1 + 0x3c] ; 0054f5b2
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x18] ; 0054f5b6
    FADD float ptr [ECX + EBX*0x1]      ; 0054f5ba
    INC EDX                             ; 0054f5bd
    FSTP float ptr [ECX + EBX*0x1]      ; 0054f5be
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0054f5c1
    ADD EAX,0x4                         ; 0054f5c4
    CMP EDX,ECX                         ; 0054f5c7
    JL 0x0054f5b0                       ; 0054f5c9
        ;   XREF to: 0054f5b0 (CONDITIONAL_JUMP)  ; LAB_0054f5b0
    FSTP ST0                            ; 0054f5cb
    FLD double ptr [ESP + 0x10]         ; 0054f5cd
        ;   Label: LAB_0054f5cd
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0054f5d1
    FADD double ptr [ESP + 0x8]         ; 0054f5d8
    ADD ESI,0x4                         ; 0054f5dc
    FSTP double ptr [ESP + 0x10]        ; 0054f5df
    CMP ESI,ECX                         ; 0054f5e3
    JGE 0x0054f192                      ; 0054f5e5
        ;   XREF to: 0054f192 (CONDITIONAL_JUMP)  ; LAB_0054f192
    JMP 0x0054f572                      ; 0054f5eb
        ;   XREF to: 0054f572 (UNCONDITIONAL_JUMP)  ; LAB_0054f572
    MOV ESI,dword ptr [ESP + 0x18]      ; 0054f5ed
        ;   Label: LAB_0054f5ed
    PUSH ESI                            ; 0054f5f1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0054f5f2
    PUSH EDX                            ; 0054f5f6
    MOV ECX,dword ptr [ESP + 0x10]      ; 0054f5f7
    PUSH ECX                            ; 0054f5fb
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054f5fc
    PUSH EBX                            ; 0054f600
    MOV ESI,dword ptr [ESP + 0x20]      ; 0054f601
    PUSH ESI                            ; 0054f605
    LEA EDX,[ESP + 0x50]                ; 0054f606
    PUSH EDX                            ; 0054f60a
    LEA EDX,[EBP + 0x18]                ; 0054f60b
    PUSH EDX                            ; 0054f60e
    MOV EDX,dword ptr [EAX + 0x120]     ; 0054f60f
    PUSH EDX                            ; 0054f615
    CALL sound_sndmain.cpp_mixResampleMonoToStereo_FUN_0054d520 ; 0054f616
        ;   XREF to: 0054d520 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_mixResampleMonoToStereo_FUN_0054d520()
    MOV dword ptr [ESP + 0x8c],EAX      ; 0054f61b
    MOV dword ptr [ESP + 0x90],EDX      ; 0054f622
    FLD double ptr [ESP + 0x8c]         ; 0054f629
    ADD ESP,0x20                        ; 0054f630
    JMP 0x0054f18e                      ; 0054f633
        ;   XREF to: 0054f18e (UNCONDITIONAL_JUMP)  ; LAB_0054f18e
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0054f638
        ;   Label: LAB_0054f638
    MOV dword ptr [ESP + 0xb4],EAX      ; 0054f63c
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0xb0] ; 0054f643
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0xd0] ; 0054f64a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0054f651
    ADD EDX,ECX                         ; 0054f655
    MOV dword ptr [ESP + 0x98],EAX      ; 0054f657
    IMUL ECX,EAX,0x0                    ; 0054f65e
    SUB EDX,EBX                         ; 0054f661
    MOV dword ptr [ESP + 0xac],EDX      ; 0054f663
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054f66a
    XOR EBX,EBX                         ; 0054f671
    MOV dword ptr [ESP + 0xb0],EAX      ; 0054f673
    TEST EAX,EAX                        ; 0054f67a
    JLE 0x0054f6d7                      ; 0054f67c
        ;   XREF to: 0054f6d7 (CONDITIONAL_JUMP)  ; LAB_0054f6d7
    MOV EDX,ECX                         ; 0054f67e
        ;   Label: LAB_0054f67e
    MOV EAX,ECX                         ; 0054f680
    SAR EDX,0x1f                        ; 0054f682
    IDIV dword ptr [ESP + 0xac]         ; 0054f685
    SHL EAX,0x2                         ; 0054f68c
    MOV dword ptr [ESP + 0xc8],EAX      ; 0054f68f
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0054f696
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0054f69d
    MOV EAX,dword ptr [EAX + 0x2648ea4] ; 0054f6a4
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0054f6aa
    ADD EAX,EDX                         ; 0054f6b1
    MOV ESI,dword ptr [ESP + ESI*0x1 + 0x1c] ; 0054f6b3
    FLD float ptr [EAX]                 ; 0054f6b7
    FADD float ptr [ESI + EBX*0x1]      ; 0054f6b9
    ADD EBX,0x4                         ; 0054f6bc
    FSTP float ptr [ESI + EBX*0x1 + -0x4] ; 0054f6bf
    MOV ESI,dword ptr [ESP + 0x98]      ; 0054f6c3
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0054f6ca
    ADD ECX,ESI                         ; 0054f6d1
    CMP EBX,EAX                         ; 0054f6d3
    JL 0x0054f67e                       ; 0054f6d5
        ;   XREF to: 0054f67e (CONDITIONAL_JUMP)  ; LAB_0054f67e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0054f6d7
        ;   Label: LAB_0054f6d7
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0xb0] ; 0054f6de
    MOV dword ptr [EDI + EAX*0x1 + 0xd0],EDX ; 0054f6e5
    JMP 0x0054ef26                      ; 0054f6ec
        ;   XREF to: 0054ef26 (UNCONDITIONAL_JUMP)  ; LAB_0054ef26

