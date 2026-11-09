; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_FUN_0047de00(CDraculaBride *this_ptr,float delta_time)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dracbrid.cpp_FUN_0047b510 at 0047b5a7
;
; Referenced Globals:
;   undefined4 s_s_5_2f_5_2f_5_2f_005dafd4+1
;   undefined4 DAT_005dafe9
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01bc0d54
;   undefined4 DAT_01bc0da4
;   undefined4 DAT_01bc0da8
;   undefined4 DAT_01bc0dac
;   undefined4 DAT_01bc0db0
;   undefined4 DAT_01bc0db4
;   undefined4 DAT_01bc0db8
;   undefined4 DAT_01bc0dbc
;   undefined4 DAT_01bc0dc0
;   undefined4 DAT_01bc0dc4
;   undefined4 DAT_01bc0dc8
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_spline.cpp_FUN_00583d60
;   core_spline.cpp_FUN_00583f90
;   core_spline.cpp_FUN_005841d0
;   engine_console.cpp_FUN_00445430
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047de00
        ;   Label: core_dracbrid.cpp_FUN_0047de00
    PUSH ESI                            ; 0047de01
    PUSH EDI                            ; 0047de02
    PUSH EBP                            ; 0047de03
    MOV EBP,ESP                         ; 0047de04
    SUB ESP,0x90                        ; 0047de06
    AND ESP,0xfffffff8                  ; 0047de0c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047de0f
    FLD float ptr [EAX + 0xc2fc]        ; 0047de12
    FSUB float ptr [EBP + 0x18]         ; 0047de18
    FST float ptr [EAX + 0xc2fc]        ; 0047de1b
    FLDZ                                ; 0047de21
    FCOMPP                              ; 0047de23
    FNSTSW AX                           ; 0047de25
    SAHF                                ; 0047de27
    JA 0x0047de67                       ; 0047de28
        ;   XREF to: 0047de67 (CONDITIONAL_JUMP)  ; LAB_0047de67
    MOV EDX,0x1bc0d54                   ; 0047de2a
        ;   Label: LAB_0047de2a
    MOV dword ptr [ESP + 0x78],EDX      ; 0047de2f | DAT_01bc0d54
    LEA EAX,[EDX + 0x1f8]               ; 0047de33
    MOV dword ptr [ESP + 0x74],EAX      ; 0047de39
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047de3d | DAT_01bc0da8
        ;   Label: LAB_0047de3d
    MOV ECX,dword ptr [EBP + 0x14]      ; 0047de41
    MOV dword ptr [ESP + 0x7c],EAX      ; 0047de44 | DAT_01bc0d54 | DAT_01bc0da8
    CMP ECX,dword ptr [EAX + 0x50]      ; 0047de48 | DAT_01bc0da4 | DAT_01bc0df8
    JZ 0x0047de76                       ; 0047de4b
        ;   XREF to: 0047de76 (CONDITIONAL_JUMP)  ; LAB_0047de76
    MOV EDI,dword ptr [ESP + 0x78]      ; 0047de4d
        ;   Label: LAB_0047de4d
    ADD EDI,0x54                        ; 0047de51
    MOV EDX,dword ptr [ESP + 0x74]      ; 0047de54
    MOV dword ptr [ESP + 0x78],EDI      ; 0047de58 | DAT_01bc0da8
    CMP EDI,EDX                         ; 0047de5c
    JNZ 0x0047de3d                      ; 0047de5e
        ;   XREF to: 0047de3d (CONDITIONAL_JUMP)  ; LAB_0047de3d
    MOV ESP,EBP                         ; 0047de60
    POP EBP                             ; 0047de62
    POP EDI                             ; 0047de63
    POP ESI                             ; 0047de64
    POP EBX                             ; 0047de65
    RET                                 ; 0047de66
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047de67
        ;   Label: LAB_0047de67
    MOV dword ptr [EAX + 0xc2fc],0x0    ; 0047de6a
    JMP 0x0047de2a                      ; 0047de74
        ;   XREF to: 0047de2a (UNCONDITIONAL_JUMP)  ; LAB_0047de2a
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047de76
        ;   Label: LAB_0047de76
    MOV EBX,dword ptr [EAX]             ; 0047de7a | DAT_01bc0da8
    PUSH EBX                            ; 0047de7c
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0047de7d
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0047de82
    TEST EAX,EAX                        ; 0047de85
    JZ 0x0047e026                       ; 0047de87
        ;   XREF to: 0047e026 (CONDITIONAL_JUMP)  ; LAB_0047e026
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047de8d
    FLD float ptr [EAX + 0x1c]          ; 0047de91 | DAT_01bc0dc4
    ADD EAX,0x44                        ; 0047de94
    FADD float ptr [EBP + 0x18]         ; 0047de97
    MOV dword ptr [ESP + 0x88],EAX      ; 0047de9a
    FSTP float ptr [EAX + -0x28]        ; 0047dea1 | DAT_01bc0dc4
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047dea4
    ADD EAX,0x38                        ; 0047dea8
    MOV dword ptr [ESP + 0x84],EAX      ; 0047deab
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047deb2
    MOV EBX,dword ptr [ESP + 0x78]      ; 0047deb6
    ADD EAX,0x20                        ; 0047deba
    ADD EBX,0x2c                        ; 0047debd
    MOV dword ptr [ESP + 0x80],EAX      ; 0047dec0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047dec7
        ;   Label: LAB_0047dec7
    FLD float ptr [EAX + 0x1c]          ; 0047decb | DAT_01bc0dc4
    FLD1                                ; 0047dece
    FCOMPP                              ; 0047ded0
    FNSTSW AX                           ; 0047ded2
    SAHF                                ; 0047ded4
    JNC 0x0047e036                      ; 0047ded5
        ;   XREF to: 0047e036 (CONDITIONAL_JUMP)  ; LAB_0047e036
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047dedb
    FLD float ptr [EAX + 0x1c]          ; 0047dedf | DAT_01bc0dc4
    FADD float ptr [0x005dafe9]         ; 0047dee2 | DAT_005dafe9
    FSTP float ptr [EAX + 0x1c]         ; 0047dee8 | DAT_01bc0dc4
    MOV EAX,dword ptr [ESP + 0x80]      ; 0047deeb
    CMP EBX,EAX                         ; 0047def2
    JZ 0x0047df06                       ; 0047def4
        ;   XREF to: 0047df06 (CONDITIONAL_JUMP)  ; LAB_0047df06
    MOV EDX,dword ptr [EBX]             ; 0047def6 | DAT_01bc0dd4
    MOV dword ptr [EAX],EDX             ; 0047def8 | DAT_01bc0dc8
    MOV EDX,dword ptr [EBX + 0x4]       ; 0047defa | DAT_01bc0dd8
    MOV dword ptr [EAX + 0x4],EDX       ; 0047defd | DAT_01bc0dcc
    MOV EDX,dword ptr [EBX + 0x8]       ; 0047df00 | DAT_01bc0ddc
    MOV dword ptr [EAX + 0x8],EDX       ; 0047df03 | DAT_01bc0dd0
    MOV EDX,dword ptr [ESP + 0x84]      ; 0047df06
        ;   Label: LAB_0047df06
    CMP EBX,EDX                         ; 0047df0d
    JZ 0x0047df23                       ; 0047df0f
        ;   XREF to: 0047df23 (CONDITIONAL_JUMP)  ; LAB_0047df23
    MOV EAX,EDX                         ; 0047df11
    MOV EDX,dword ptr [EAX]             ; 0047df13 | DAT_01bc0de0
    MOV dword ptr [EBX],EDX             ; 0047df15 | DAT_01bc0dd4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047df17 | DAT_01bc0de4
    MOV dword ptr [EBX + 0x4],EDX       ; 0047df1a | DAT_01bc0dd8
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047df1d | DAT_01bc0de8
    MOV dword ptr [EBX + 0x8],EDX       ; 0047df20 | DAT_01bc0ddc
    MOV EAX,dword ptr [ESP + 0x84]      ; 0047df23
        ;   Label: LAB_0047df23
    MOV ECX,dword ptr [ESP + 0x88]      ; 0047df2a
    CMP EAX,ECX                         ; 0047df31
    JZ 0x0047df60                       ; 0047df33
        ;   XREF to: 0047df60 (CONDITIONAL_JUMP)  ; LAB_0047df60
    MOV EAX,ECX                         ; 0047df35
    FLD float ptr [EAX]                 ; 0047df37 | DAT_01bc0dec
    MOV EAX,dword ptr [ESP + 0x84]      ; 0047df39
    FSTP float ptr [EAX]                ; 0047df40 | DAT_01bc0de0
    MOV EAX,ECX                         ; 0047df42
    FLD float ptr [EAX + 0x4]           ; 0047df44 | DAT_01bc0df0
    MOV EAX,dword ptr [ESP + 0x84]      ; 0047df47
    FSTP float ptr [EAX + 0x4]          ; 0047df4e | DAT_01bc0de4
    MOV EAX,ECX                         ; 0047df51
    FLD float ptr [EAX + 0x8]           ; 0047df53 | DAT_01bc0df4
    MOV EAX,dword ptr [ESP + 0x84]      ; 0047df56
    FSTP float ptr [EAX + 0x8]          ; 0047df5d | DAT_01bc0de8
    PUSH 0x40a00000                     ; 0047df60
        ;   Label: LAB_0047df60
    LEA EDI,[ESP + 0x24]                ; 0047df65
    MOV ESI,0x1fe37f0                   ; 0047df69
    PUSH 0xc0a00000                     ; 0047df6e
    MOVSD ES:EDI,ESI                    ; 0047df73 | g_CDemonCameraInstance.field4_0x4
    MOVSD ES:EDI,ESI                    ; 0047df74 | g_CDemonCameraInstance.field8_0x8
    MOVSD ES:EDI,ESI                    ; 0047df75 | g_CDemonCameraInstance.field12_0xc
    CALL core_actor.cpp_FUN_0040cc00    ; 0047df76
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    LEA EDI,[ESP + 0x40]                ; 0047df7b
    MOV dword ptr [ESP + 0x94],EAX      ; 0047df7f
    LEA ESI,[ESP + 0x28]                ; 0047df86
    FLD float ptr [ESP + 0x94]          ; 0047df8a
    MOVSD ES:EDI,ESI                    ; 0047df91
    MOVSD ES:EDI,ESI                    ; 0047df92
    MOVSD ES:EDI,ESI                    ; 0047df93
    ADD ESP,0x8                         ; 0047df94
    PUSH 0x40000000                     ; 0047df97
    FADD float ptr [ESP + 0x3c]         ; 0047df9c
    PUSH 0xc0000000                     ; 0047dfa0
    FSTP float ptr [ESP + 0x40]         ; 0047dfa5
    CALL core_actor.cpp_FUN_0040cc00    ; 0047dfa9
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x94],EAX      ; 0047dfae
    FLD float ptr [ESP + 0x94]          ; 0047dfb5
    ADD ESP,0x8                         ; 0047dfbc
    PUSH 0x40a00000                     ; 0047dfbf
    FADD float ptr [ESP + 0x40]         ; 0047dfc4
    PUSH 0xc0a00000                     ; 0047dfc8
    FSTP float ptr [ESP + 0x44]         ; 0047dfcd
    CALL core_actor.cpp_FUN_0040cc00    ; 0047dfd1
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x94],EAX      ; 0047dfd6
    FLD float ptr [ESP + 0x94]          ; 0047dfdd
    ADD ESP,0x8                         ; 0047dfe4
    LEA EDI,[ESP + 0x50]                ; 0047dfe7
    FADD float ptr [ESP + 0x40]         ; 0047dfeb
    LEA ESI,[ESP + 0x38]                ; 0047dfef
    FSTP float ptr [ESP + 0x40]         ; 0047dff3
    MOVSD ES:EDI,ESI                    ; 0047dff7
    MOVSD ES:EDI,ESI                    ; 0047dff8
    MOVSD ES:EDI,ESI                    ; 0047dff9
    LEA EAX,[ESP + 0x50]                ; 0047dffa
    MOV ESI,dword ptr [ESP + 0x88]      ; 0047dffe
    CMP EAX,ESI                         ; 0047e005
    JZ 0x0047dec7                       ; 0047e007
        ;   XREF to: 0047dec7 (CONDITIONAL_JUMP)  ; LAB_0047dec7
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047e00d
    MOV dword ptr [ESI],EAX             ; 0047e011 | DAT_01bc0dec
    MOV EAX,dword ptr [ESP + 0x54]      ; 0047e013
    MOV dword ptr [ESI + 0x4],EAX       ; 0047e017 | DAT_01bc0df0
    MOV EAX,dword ptr [ESP + 0x58]      ; 0047e01a
    MOV dword ptr [ESI + 0x8],EAX       ; 0047e01e | DAT_01bc0df4
    JMP 0x0047dec7                      ; 0047e021
        ;   XREF to: 0047dec7 (UNCONDITIONAL_JUMP)  ; LAB_0047dec7
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047e026
        ;   Label: LAB_0047e026
    MOV dword ptr [EAX + 0x50],0x0      ; 0047e02a | DAT_01bc0df8
    JMP 0x0047de4d                      ; 0047e031
        ;   XREF to: 0047de4d (UNCONDITIONAL_JUMP)  ; LAB_0047de4d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047e036
        ;   Label: LAB_0047e036
    PUSH 0x0                            ; 0047e03a
    PUSH dword ptr [EAX + 0x1c]         ; 0047e03c | DAT_01bc0dc4
    LEA EAX,[ESP + 0x8]                 ; 0047e03f
    PUSH EAX                            ; 0047e043
    CALL core_spline.cpp_FUN_00583d60   ; 0047e044
        ;   XREF to: 00583d60 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_FUN_00583d60(float * out_basis, float t, float tension)
    ADD ESP,0xc                         ; 0047e049
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0047e04c
    ADD ESI,0x44                        ; 0047e050
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047e053
    PUSH ESI                            ; 0047e057 | DAT_01bc0dec
    ADD EAX,0x38                        ; 0047e058
    PUSH EAX                            ; 0047e05b | DAT_01bc0de0
    PUSH EBX                            ; 0047e05c | DAT_01bc0dd4
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0047e05d
    PUSH ESI                            ; 0047e064 | DAT_01bc0dc8
    LEA EAX,[ESP + 0x10]                ; 0047e065
    PUSH EAX                            ; 0047e069
    LEA ESI,[ESP + 0x58]                ; 0047e06a
    LEA EDI,[ESP + 0x70]                ; 0047e06e
    CALL core_spline.cpp_FUN_00583f90   ; 0047e072
        ;   XREF to: 00583f90 (UNCONDITIONAL_CALL)  ; undefined core_spline.cpp_FUN_00583f90()
    ADD ESP,0x14                        ; 0047e077
    LEA ESI,[ESP + 0x44]                ; 0047e07a
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0047e07e
    LEA EAX,[ESP + 0x5c]                ; 0047e082
    ADD EBX,0x4                         ; 0047e086
    MOVSD ES:EDI,ESI                    ; 0047e089
    MOVSD ES:EDI,ESI                    ; 0047e08a
    MOVSD ES:EDI,ESI                    ; 0047e08b
    CMP EBX,EAX                         ; 0047e08c
    JZ 0x0047e0a4                       ; 0047e08e
        ;   XREF to: 0047e0a4 (CONDITIONAL_JUMP)  ; LAB_0047e0a4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0047e090
    MOV dword ptr [EBX],EAX             ; 0047e094 | DAT_01bc0dac
    MOV EAX,dword ptr [ESP + 0x60]      ; 0047e096
    MOV dword ptr [EBX + 0x4],EAX       ; 0047e09a | DAT_01bc0db0
    MOV EAX,dword ptr [ESP + 0x64]      ; 0047e09d
    MOV dword ptr [EBX + 0x8],EAX       ; 0047e0a1 | DAT_01bc0db4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047e0a4
        ;   Label: LAB_0047e0a4
    SUB ESP,0x8                         ; 0047e0a8
    FLD float ptr [EAX + 0xc]           ; 0047e0ab | DAT_01bc0db4
    FSTP double ptr [ESP]               ; 0047e0ae
    SUB ESP,0x8                         ; 0047e0b1
    FLD float ptr [EAX + 0x8]           ; 0047e0b4 | DAT_01bc0db0
    FSTP double ptr [ESP]               ; 0047e0b7
    SUB ESP,0x8                         ; 0047e0ba
    FLD float ptr [EAX + 0x4]           ; 0047e0bd | DAT_01bc0dac
    FSTP double ptr [ESP]               ; 0047e0c0
    PUSH 0x5dafd5                       ; 0047e0c3 | s_s_5_2f_5_2f_5_2f_005dafd4+1
    MOV EDI,dword ptr [0x00611100]      ; 0047e0c8 | g_CConsolePtr
    PUSH EDI                            ; 0047e0ce | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0047e0cf
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x20                        ; 0047e0d4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047e0d7
    ADD EAX,0x44                        ; 0047e0db
    PUSH EAX                            ; 0047e0de | DAT_01bc0dec
    MOV EAX,dword ptr [ESP + 0x80]      ; 0047e0df
    ADD EAX,0x38                        ; 0047e0e6
    PUSH EAX                            ; 0047e0e9 | DAT_01bc0de0
    MOV EAX,dword ptr [ESP + 0x84]      ; 0047e0ea
    ADD EAX,0x2c                        ; 0047e0f1
    PUSH EAX                            ; 0047e0f4 | DAT_01bc0dd4
    MOV EAX,dword ptr [ESP + 0x88]      ; 0047e0f5
    ADD EAX,0x20                        ; 0047e0fc
    PUSH EAX                            ; 0047e0ff | DAT_01bc0dc8
    LEA EAX,[ESP + 0x10]                ; 0047e100
    PUSH EAX                            ; 0047e104
    LEA ESI,[ESP + 0x40]                ; 0047e105
    LEA EDI,[ESP + 0x7c]                ; 0047e109
    CALL core_spline.cpp_FUN_005841d0   ; 0047e10d
        ;   XREF to: 005841d0 (UNCONDITIONAL_CALL)  ; undefined core_spline.cpp_FUN_005841d0()
    ADD ESP,0x14                        ; 0047e112
    LEA ESI,[ESP + 0x2c]                ; 0047e115
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0047e119
    LEA EAX,[ESP + 0x68]                ; 0047e11d
    ADD EBX,0x10                        ; 0047e121
    MOVSD ES:EDI,ESI                    ; 0047e124
    MOVSD ES:EDI,ESI                    ; 0047e125
    MOVSD ES:EDI,ESI                    ; 0047e126
    CMP EBX,EAX                         ; 0047e127
    JZ 0x0047de4d                       ; 0047e129
        ;   XREF to: 0047de4d (CONDITIONAL_JUMP)  ; LAB_0047de4d
    MOV EAX,dword ptr [ESP + 0x68]      ; 0047e12f
    MOV dword ptr [EBX],EAX             ; 0047e133 | DAT_01bc0db8
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0047e135
    MOV dword ptr [EBX + 0x4],EAX       ; 0047e139 | DAT_01bc0dbc
    MOV EAX,dword ptr [ESP + 0x70]      ; 0047e13c
    MOV dword ptr [EBX + 0x8],EAX       ; 0047e140 | DAT_01bc0dc0
    JMP 0x0047de4d                      ; 0047e143
        ;   XREF to: 0047de4d (UNCONDITIONAL_JUMP)  ; LAB_0047de4d

