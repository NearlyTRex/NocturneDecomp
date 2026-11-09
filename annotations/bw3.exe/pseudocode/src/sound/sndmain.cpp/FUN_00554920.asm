; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00554920(CSfxSlot *param_1)
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
;   sound_sndmain.cpp_FUN_00552bd0 at 00552d20
;   sound_sndmain.cpp_FUN_00559d90 at 00559f82
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3212
;   TerminatedCString s_SfxSlot_mix_must_be_lock_005d3227
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf32ac
;   undefined4 DAT_02cf341c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;   crt_memory.c_memset_FUN_005a28f0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
;   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00555530
;   sound_sndmain.cpp_mixResampleMonoToStereo_FUN_00553090
;   sound_sndmain.cpp_mixResampleStereoToStereo_FUN_005531d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554920
        ;   Label: sound_sndmain.cpp_FUN_00554920
    PUSH ESI                            ; 00554921
    PUSH EDI                            ; 00554922
    PUSH EBP                            ; 00554923
    MOV EBP,ESP                         ; 00554924
    SUB ESP,0xcc                        ; 00554926
    AND ESP,0xfffffff8                  ; 0055492c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0055492f
    CMP dword ptr [0x02cf341c],0x0      ; 00554932 | DAT_02cf341c
    JLE 0x00554ac4                      ; 00554939
        ;   XREF to: 00554ac4 (CONDITIONAL_JUMP)  ; LAB_00554ac4
    CMP dword ptr [EDI + 0x64],0x0      ; 0055493f
        ;   Label: LAB_0055493f
    JZ 0x00554abd                       ; 00554943
        ;   XREF to: 00554abd (CONDITIONAL_JUMP)  ; LAB_00554abd
    MOV EAX,dword ptr [EBP + 0x38]      ; 00554949
    MOV dword ptr [ESP + 0x7c],EAX      ; 0055494c
    MOV EAX,0x1                         ; 00554950
    MOV EDX,dword ptr [EDI + 0x68]      ; 00554955
    MOV dword ptr [ESP + 0x78],EAX      ; 00554958
    TEST EDX,EDX                        ; 0055495c
    JZ 0x00554984                       ; 0055495e
        ;   XREF to: 00554984 (CONDITIONAL_JUMP)  ; LAB_00554984
    MOV EBX,dword ptr [EBP + 0x3c]      ; 00554960
    XOR ECX,ECX                         ; 00554963
    TEST EBX,EBX                        ; 00554965
    JLE 0x00554984                      ; 00554967
        ;   XREF to: 00554984 (CONDITIONAL_JUMP)  ; LAB_00554984
    MOV ESI,dword ptr [EBP + 0x3c]      ; 00554969
    MOV EDX,EDI                         ; 0055496c
    CMP dword ptr [EDX + 0x90],0x3c000000 ; 0055496e
        ;   Label: LAB_0055496e
    JLE 0x00554aec                      ; 00554978
        ;   XREF to: 00554aec (CONDITIONAL_JUMP)  ; LAB_00554aec
    XOR ESI,ESI                         ; 0055497e
    MOV dword ptr [ESP + 0x78],ESI      ; 00554980
    MOV EAX,dword ptr [EBP + 0x3c]      ; 00554984
        ;   Label: LAB_00554984
    XOR ESI,ESI                         ; 00554987
    TEST EAX,EAX                        ; 00554989
    JLE 0x00554a0b                      ; 0055498b
        ;   XREF to: 00554a0b (CONDITIONAL_JUMP)  ; LAB_00554a0b
    MOV EBX,EDI                         ; 00554991
    CMP dword ptr [ESP + 0x78],0x0      ; 00554993
        ;   Label: LAB_00554993
    JZ 0x00554afd                       ; 00554998
        ;   XREF to: 00554afd (CONDITIONAL_JUMP)  ; LAB_00554afd
    MOV EAX,dword ptr [EBX + 0xb0]      ; 0055499e
        ;   Label: LAB_0055499e
    MOV dword ptr [EBX + 0xd0],EAX      ; 005549a4
    MOV EAX,dword ptr [EBX + 0xd0]      ; 005549aa
        ;   Label: LAB_005549aa
    LEA ECX,[ESI*0x4 + 0x0]             ; 005549b0
    SHL EAX,0x2                         ; 005549b7
    ADD dword ptr [ECX + EBP*0x1 + 0x18],EAX ; 005549ba
    MOV EAX,dword ptr [EBX + 0xd0]      ; 005549be
    SUB EAX,dword ptr [EBX + 0xb0]      ; 005549c4
    CDQ                                 ; 005549ca
    XOR EAX,EDX                         ; 005549cb
    SUB EAX,EDX                         ; 005549cd
    CMP EAX,0x1                         ; 005549cf
    JLE 0x00554b0f                      ; 005549d2
        ;   XREF to: 00554b0f (CONDITIONAL_JUMP)  ; LAB_00554b0f
    MOV EAX,dword ptr [ECX + EBP*0x1 + 0x18] ; 005549d8
    MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX ; 005549dc
    MOV EAX,dword ptr [ECX + 0x2cf32a8] ; 005549e0 | DAT_02cf32ac
    MOV dword ptr [ECX + EBP*0x1 + 0x18],EAX ; 005549e6
    MOV EAX,dword ptr [EBP + 0x38]      ; 005549ea
    SHL EAX,0x2                         ; 005549ed
    PUSH EAX                            ; 005549f0
    PUSH 0x0                            ; 005549f1
    MOV EDX,dword ptr [ECX + EBP*0x1 + 0x18] ; 005549f3
    PUSH EDX                            ; 005549f7
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005549f8
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005549fd
    MOV EDX,dword ptr [EBP + 0x3c]      ; 00554a00
        ;   Label: LAB_00554a00
    INC ESI                             ; 00554a03
    ADD EBX,0x4                         ; 00554a04
    CMP ESI,EDX                         ; 00554a07
    JL 0x00554993                       ; 00554a09
        ;   XREF to: 00554993 (CONDITIONAL_JUMP)  ; LAB_00554993
    MOV ECX,dword ptr [EDI + 0x68]      ; 00554a0b
        ;   Label: LAB_00554a0b
    MOV ECX,dword ptr [ECX + 0x104]     ; 00554a0e
    MOV EAX,0x1                         ; 00554a14
    DEC ECX                             ; 00554a19
    SHL EAX,CL                          ; 00554a1a
    MOV dword ptr [ESP + 0xc8],EAX      ; 00554a1c
    FILD dword ptr [ESP + 0xc8]         ; 00554a23
    FLD1                                ; 00554a2a
    FDIVRP                              ; 00554a2c
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00554a2e
    XOR EAX,EAX                         ; 00554a31
    FSTP float ptr [ESP + 0x74]         ; 00554a33
    TEST ECX,ECX                        ; 00554a37
    JLE 0x00554a5a                      ; 00554a39
        ;   XREF to: 00554a5a (CONDITIONAL_JUMP)  ; LAB_00554a5a
    FLD float ptr [ESP + 0x74]          ; 00554a3b
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00554a3f
    MOV EDX,EDI                         ; 00554a42
    FLD float ptr [EDX + 0x90]          ; 00554a44
        ;   Label: LAB_00554a44
    FMUL ST1                            ; 00554a4a
    INC EAX                             ; 00554a4c
    ADD EDX,0x4                         ; 00554a4d
    FSTP float ptr [ESP + EAX*0x4 + 0x38] ; 00554a50
    CMP EAX,ECX                         ; 00554a54
    JL 0x00554a44                       ; 00554a56
        ;   XREF to: 00554a44 (CONDITIONAL_JUMP)  ; LAB_00554a44
    FSTP ST0                            ; 00554a58
    CMP dword ptr [EDI + 0x64],0x0      ; 00554a5a
        ;   Label: LAB_00554a5a
    JNZ 0x00554b1a                      ; 00554a5e
        ;   XREF to: 00554b1a (CONDITIONAL_JUMP)  ; LAB_00554b1a
    PUSH EDI                            ; 00554a64
        ;   Label: LAB_00554a64
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270 ; 00554a65
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00554a6a
    XOR EAX,EAX                         ; 00554a6d
        ;   Label: LAB_00554a6d
    MOV EDX,dword ptr [EBP + 0x3c]      ; 00554a6f
    MOV dword ptr [ESP + 0x80],EAX      ; 00554a72
    TEST EDX,EDX                        ; 00554a79
    JLE 0x00554abd                      ; 00554a7b
        ;   XREF to: 00554abd (CONDITIONAL_JUMP)  ; LAB_00554abd
    MOV dword ptr [ESP + 0x90],EAX      ; 00554a7d
    MOV EAX,dword ptr [ESP + 0x90]      ; 00554a84
        ;   Label: LAB_00554a84
    CMP dword ptr [ESP + EAX*0x1 + 0x1c],0x0 ; 00554a8b
    JNZ 0x005551a8                      ; 00554a90
        ;   XREF to: 005551a8 (CONDITIONAL_JUMP)  ; LAB_005551a8
    MOV EAX,dword ptr [ESP + 0x90]      ; 00554a96
        ;   Label: LAB_00554a96
    MOV EDX,dword ptr [ESP + 0x80]      ; 00554a9d
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00554aa4
    ADD EAX,0x4                         ; 00554aa7
    INC EDX                             ; 00554aaa
    MOV dword ptr [ESP + 0x90],EAX      ; 00554aab
    MOV dword ptr [ESP + 0x80],EDX      ; 00554ab2
    CMP EDX,ECX                         ; 00554ab9
    JL 0x00554a84                       ; 00554abb
        ;   XREF to: 00554a84 (CONDITIONAL_JUMP)  ; LAB_00554a84
    MOV ESP,EBP                         ; 00554abd
        ;   Label: LAB_00554abd
    POP EBP                             ; 00554abf
    POP EDI                             ; 00554ac0
    POP ESI                             ; 00554ac1
    POP EBX                             ; 00554ac2
    RET                                 ; 00554ac3
    MOV ECX,0x5d3212                    ; 00554ac4 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00554ac4
    MOV EBX,0xb9f                       ; 00554ac9
    PUSH 0x5d3227                       ; 00554ace | = "SfxSlot::mix - must be locked!"
    MOV dword ptr [0x01d71de0],ECX      ; 00554ad3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00554ad9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00554adf
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00554ae4
    JMP 0x0055493f                      ; 00554ae7
        ;   XREF to: 0055493f (UNCONDITIONAL_JUMP)  ; LAB_0055493f
    INC ECX                             ; 00554aec
        ;   Label: LAB_00554aec
    ADD EDX,0x4                         ; 00554aed
    CMP ECX,ESI                         ; 00554af0
    JL 0x0055496e                       ; 00554af2
        ;   XREF to: 0055496e (CONDITIONAL_JUMP)  ; LAB_0055496e
    JMP 0x00554984                      ; 00554af8
        ;   XREF to: 00554984 (UNCONDITIONAL_JUMP)  ; LAB_00554984
    CMP dword ptr [EBX + 0xd0],0x0      ; 00554afd
        ;   Label: LAB_00554afd
    JL 0x0055499e                       ; 00554b04
        ;   XREF to: 0055499e (CONDITIONAL_JUMP)  ; LAB_0055499e
    JMP 0x005549aa                      ; 00554b0a
        ;   XREF to: 005549aa (UNCONDITIONAL_JUMP)  ; LAB_005549aa
    XOR EAX,EAX                         ; 00554b0f
        ;   Label: LAB_00554b0f
    MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX ; 00554b11
    JMP 0x00554a00                      ; 00554b15
        ;   XREF to: 00554a00 (UNCONDITIONAL_JUMP)  ; LAB_00554a00
    MOV ESI,dword ptr [EDI + 0x68]      ; 00554b1a
        ;   Label: LAB_00554b1a
    TEST ESI,ESI                        ; 00554b1d
    JZ 0x00554a64                       ; 00554b1f
        ;   XREF to: 00554a64 (CONDITIONAL_JUMP)  ; LAB_00554a64
    FLDZ                                ; 00554b25
    FCOMP double ptr [EDI + 0x50]       ; 00554b27
    FNSTSW AX                           ; 00554b2a
    SAHF                                ; 00554b2c
    JA 0x00554a64                       ; 00554b2d
        ;   XREF to: 00554a64 (CONDITIONAL_JUMP)  ; LAB_00554a64
    CMP dword ptr [EBP + 0x38],0x1      ; 00554b33
    JL 0x00554a6d                       ; 00554b37
        ;   XREF to: 00554a6d (CONDITIONAL_JUMP)  ; LAB_00554a6d
    MOV EDX,ESI                         ; 00554b3d
    FILD dword ptr [EDX + 0x10c]        ; 00554b3f
    FILD dword ptr [EBP + 0x40]         ; 00554b45
    FDIVP                               ; 00554b48
    FMUL float ptr [EDI + 0x6c]         ; 00554b4a
    FLDZ                                ; 00554b4d
    FXCH                                ; 00554b4f
    FSTP double ptr [ESP + 0x8]         ; 00554b51
    FCOMP double ptr [ESP + 0x8]        ; 00554b55
    FNSTSW AX                           ; 00554b59
    SAHF                                ; 00554b5b
    JNC 0x00554a6d                      ; 00554b5c
        ;   XREF to: 00554a6d (CONDITIONAL_JUMP)  ; LAB_00554a6d
    FILD dword ptr [EDX + 0x164]        ; 00554b62
    MOV EAX,dword ptr [EBP + 0x38]      ; 00554b68
    FSTP double ptr [ESP]               ; 00554b6b
    XOR ECX,ECX                         ; 00554b6e
    MOV EBX,dword ptr [ESI + 0x110]     ; 00554b70
    MOV dword ptr [ESP + 0x84],ECX      ; 00554b76
    MOV dword ptr [ESP + 0x18],EAX      ; 00554b7d
    TEST EBX,EBX                        ; 00554b81
    JLE 0x00554bec                      ; 00554b83
        ;   XREF to: 00554bec (CONDITIONAL_JUMP)  ; LAB_00554bec
    MOV EAX,dword ptr [EDI + 0x114]     ; 00554b85
    FILD dword ptr [EDX + EAX*0x4 + 0x128] ; 00554b8b
    FSUB double ptr [EDI + 0x50]        ; 00554b92
    FDIV double ptr [ESP + 0x8]         ; 00554b95
    SUB ESP,0x8                         ; 00554b99
    FSTP double ptr [ESP]               ; 00554b9c
    CALL crt_math.c_floor_FUN_005a3600  ; 00554b9f
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 00554ba4
    MOV dword ptr [ESP + 0x78],EDX      ; 00554ba8
    FLD double ptr [ESP + 0x74]         ; 00554bac
    ADD ESP,0x8                         ; 00554bb0
    CALL crt_math.c_round_FUN_005a3120  ; 00554bb3
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8c]        ; 00554bb8
    CMP dword ptr [ESP + 0x8c],0x0      ; 00554bbf
    JL 0x00554db6                       ; 00554bc7
        ;   XREF to: 00554db6 (CONDITIONAL_JUMP)  ; LAB_00554db6
    MOV EAX,dword ptr [ESP + 0x18]      ; 00554bcd
        ;   Label: LAB_00554bcd
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00554bd1
    CMP EAX,EDX                         ; 00554bd8
    JLE 0x00554bec                      ; 00554bda
        ;   XREF to: 00554bec (CONDITIONAL_JUMP)  ; LAB_00554bec
    MOV ECX,0x1                         ; 00554bdc
    MOV dword ptr [ESP + 0x18],EDX      ; 00554be1
    MOV dword ptr [ESP + 0x84],ECX      ; 00554be5
    CMP dword ptr [ESP + 0x18],0x0      ; 00554bec
        ;   Label: LAB_00554bec
    JL 0x00554dc4                       ; 00554bf1
        ;   XREF to: 00554dc4 (CONDITIONAL_JUMP)  ; LAB_00554dc4
    MOV EAX,dword ptr [EDI + 0x10c]     ; 00554bf7
        ;   Label: LAB_00554bf7
    MOV dword ptr [ESP + 0x10],EAX      ; 00554bfd
    MOV EAX,dword ptr [EDI + 0x110]     ; 00554c01
    MOV dword ptr [ESP + 0x14],EAX      ; 00554c07
    FLD double ptr [ESP]                ; 00554c0b
    FSUB double ptr [ESP + 0x10]        ; 00554c0e
    FDIV double ptr [ESP + 0x8]         ; 00554c12
    XOR EAX,EAX                         ; 00554c16
    MOV dword ptr [ESP + 0x88],EAX      ; 00554c18
    SUB ESP,0x8                         ; 00554c1f
    FSTP double ptr [ESP]               ; 00554c22
    CALL crt_math.c_floor_FUN_005a3600  ; 00554c25
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 00554c2a
    MOV dword ptr [ESP + 0x78],EDX      ; 00554c2e
    FLD double ptr [ESP + 0x74]         ; 00554c32
    ADD ESP,0x8                         ; 00554c36
    CALL crt_math.c_round_FUN_005a3120  ; 00554c39
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x94]        ; 00554c3e
    CMP dword ptr [ESP + 0x94],0x1      ; 00554c45
    JGE 0x00554ca2                      ; 00554c4d
        ;   XREF to: 00554ca2 (CONDITIONAL_JUMP)  ; LAB_00554ca2
    FLD double ptr [ESP + 0x10]         ; 00554c4f
    FSUB double ptr [ESP]               ; 00554c53
    FLDZ                                ; 00554c56
    FXCH                                ; 00554c58
    FSTP double ptr [ESP + 0x10]        ; 00554c5a
    FCOMP double ptr [ESP + 0x10]       ; 00554c5e
    FNSTSW AX                           ; 00554c62
    SAHF                                ; 00554c64
    JBE 0x00554c71                      ; 00554c65
        ;   XREF to: 00554c71 (CONDITIONAL_JUMP)  ; LAB_00554c71
    XOR ECX,ECX                         ; 00554c67
    MOV dword ptr [ESP + 0x10],ECX      ; 00554c69
    MOV dword ptr [ESP + 0x14],ECX      ; 00554c6d
    FLD double ptr [ESP]                ; 00554c71
        ;   Label: LAB_00554c71
    FSUB double ptr [ESP + 0x10]        ; 00554c74
    FDIV double ptr [ESP + 0x8]         ; 00554c78
    SUB ESP,0x8                         ; 00554c7c
    FSTP double ptr [ESP]               ; 00554c7f
    CALL crt_math.c_floor_FUN_005a3600  ; 00554c82
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 00554c87
    MOV dword ptr [ESP + 0x78],EDX      ; 00554c8b
    FLD double ptr [ESP + 0x74]         ; 00554c8f
    ADD ESP,0x8                         ; 00554c93
    CALL crt_math.c_round_FUN_005a3120  ; 00554c96
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x94]        ; 00554c9b
    MOV EAX,dword ptr [ESP + 0x94]      ; 00554ca2
        ;   Label: LAB_00554ca2
    MOV ESI,dword ptr [ESP + 0x18]      ; 00554ca9
    CMP EAX,ESI                         ; 00554cad
    JGE 0x00554dcf                      ; 00554caf
        ;   XREF to: 00554dcf (CONDITIONAL_JUMP)  ; LAB_00554dcf
    MOV ESI,0x1                         ; 00554cb5
    XOR EBX,EBX                         ; 00554cba
    MOV dword ptr [ESP + 0x18],EAX      ; 00554cbc
    MOV dword ptr [ESP + 0x84],EBX      ; 00554cc0
    MOV dword ptr [ESP + 0x88],ESI      ; 00554cc7
    CMP dword ptr [ESP + 0x18],0x0      ; 00554cce
        ;   Label: LAB_00554cce
    JL 0x00554de5                       ; 00554cd3
        ;   XREF to: 00554de5 (CONDITIONAL_JUMP)  ; LAB_00554de5
    CMP dword ptr [ESP + 0x78],0x0      ; 00554cd9
        ;   Label: LAB_00554cd9
    JZ 0x00554df0                       ; 00554cde
        ;   XREF to: 00554df0 (CONDITIONAL_JUMP)  ; LAB_00554df0
    MOV EAX,dword ptr [ESP + 0x18]      ; 00554ce4
    MOV dword ptr [ESP + 0xc8],EAX      ; 00554ce8
    FILD dword ptr [ESP + 0xc8]         ; 00554cef
    FMUL double ptr [ESP + 0x8]         ; 00554cf6
    FADD double ptr [ESP + 0x10]        ; 00554cfa
    FSTP double ptr [ESP + 0x10]        ; 00554cfe
        ;   Label: LAB_00554cfe
    CMP dword ptr [ESP + 0x88],0x0      ; 00554d02
        ;   Label: LAB_00554d02
    JZ 0x00554d16                       ; 00554d0a
        ;   XREF to: 00554d16 (CONDITIONAL_JUMP)  ; LAB_00554d16
    XOR ESI,ESI                         ; 00554d0c
    MOV dword ptr [ESP + 0x10],ESI      ; 00554d0e
    MOV dword ptr [ESP + 0x14],ESI      ; 00554d12
    FLD double ptr [ESP + 0x10]         ; 00554d16
        ;   Label: LAB_00554d16
    FCOMP double ptr [ESP]              ; 00554d1a
    FNSTSW AX                           ; 00554d1d
    SAHF                                ; 00554d1f
    JC 0x00554d2d                       ; 00554d20
        ;   XREF to: 00554d2d (CONDITIONAL_JUMP)  ; LAB_00554d2d
    FLD double ptr [ESP + 0x10]         ; 00554d22
    FSUB double ptr [ESP]               ; 00554d26
    FSTP double ptr [ESP + 0x10]        ; 00554d29
    MOV EDX,dword ptr [ESP + 0x14]      ; 00554d2d
        ;   Label: LAB_00554d2d
    PUSH EDX                            ; 00554d31
    MOV ECX,dword ptr [ESP + 0x14]      ; 00554d32
    PUSH ECX                            ; 00554d36
    PUSH EDI                            ; 00554d37
    CALL sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00555530 ; 00554d38
        ;   XREF to: 00555530 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00555530(CSfxSlot * this_ptr, double hardware_playback_pos)
    ADD ESP,0xc                         ; 00554d3d
    CMP dword ptr [ESP + 0x84],0x0      ; 00554d40
    JZ 0x00554d7f                       ; 00554d48
        ;   XREF to: 00554d7f (CONDITIONAL_JUMP)  ; LAB_00554d7f
    MOV EAX,dword ptr [EDI + 0x68]      ; 00554d4a
    MOV ESI,dword ptr [EDI + 0x114]     ; 00554d4d
    MOV EDX,dword ptr [EDI + 0x114]     ; 00554d53
    INC ESI                             ; 00554d59
    FILD dword ptr [EAX + EDX*0x4 + 0x13c] ; 00554d5a
    MOV dword ptr [EDI + 0x114],ESI     ; 00554d61
    MOV EDX,dword ptr [EDI + 0x68]      ; 00554d67
    FSTP double ptr [EDI + 0x50]        ; 00554d6a
    CMP ESI,dword ptr [EDX + 0x124]     ; 00554d6d
    JL 0x00554d7f                       ; 00554d73
        ;   XREF to: 00554d7f (CONDITIONAL_JUMP)  ; LAB_00554d7f
    MOV dword ptr [EDI + 0x114],0x0     ; 00554d75
    MOV EAX,dword ptr [ESP + 0x18]      ; 00554d7f
        ;   Label: LAB_00554d7f
    MOV EBX,dword ptr [EBP + 0x38]      ; 00554d83
    MOV ESI,dword ptr [EBP + 0x3c]      ; 00554d86
    SUB EBX,EAX                         ; 00554d89
    XOR EDX,EDX                         ; 00554d8b
    MOV dword ptr [EBP + 0x38],EBX      ; 00554d8d
    TEST ESI,ESI                        ; 00554d90
    JLE 0x00554a5a                      ; 00554d92
        ;   XREF to: 00554a5a (CONDITIONAL_JUMP)  ; LAB_00554a5a
    LEA ECX,[EAX*0x4 + 0x0]             ; 00554d98
    XOR EAX,EAX                         ; 00554d9f
    ADD dword ptr [EAX + EBP*0x1 + 0x18],ECX ; 00554da1
        ;   Label: LAB_00554da1
    INC EDX                             ; 00554da5
    MOV ESI,dword ptr [EBP + 0x3c]      ; 00554da6
    ADD EAX,0x4                         ; 00554da9
    CMP EDX,ESI                         ; 00554dac
    JGE 0x00554a5a                      ; 00554dae
        ;   XREF to: 00554a5a (CONDITIONAL_JUMP)  ; LAB_00554a5a
    JMP 0x00554da1                      ; 00554db4
        ;   XREF to: 00554da1 (UNCONDITIONAL_JUMP)  ; LAB_00554da1
    XOR EAX,EAX                         ; 00554db6
        ;   Label: LAB_00554db6
    MOV dword ptr [ESP + 0x8c],EAX      ; 00554db8
    JMP 0x00554bcd                      ; 00554dbf
        ;   XREF to: 00554bcd (UNCONDITIONAL_JUMP)  ; LAB_00554bcd
    XOR ESI,ESI                         ; 00554dc4
        ;   Label: LAB_00554dc4
    MOV dword ptr [ESP + 0x18],ESI      ; 00554dc6
    JMP 0x00554bf7                      ; 00554dca
        ;   XREF to: 00554bf7 (UNCONDITIONAL_JUMP)  ; LAB_00554bf7
    JNZ 0x00554cce                      ; 00554dcf
        ;   XREF to: 00554cce (CONDITIONAL_JUMP)  ; LAB_00554cce
        ;   Label: LAB_00554dcf
    MOV dword ptr [ESP + 0x88],0x1      ; 00554dd5
    JMP 0x00554cce                      ; 00554de0
        ;   XREF to: 00554cce (UNCONDITIONAL_JUMP)  ; LAB_00554cce
    XOR EDX,EDX                         ; 00554de5
        ;   Label: LAB_00554de5
    MOV dword ptr [ESP + 0x18],EDX      ; 00554de7
    JMP 0x00554cd9                      ; 00554deb
        ;   XREF to: 00554cd9 (UNCONDITIONAL_JUMP)  ; LAB_00554cd9
    MOV EAX,dword ptr [EDI + 0x68]      ; 00554df0
        ;   Label: LAB_00554df0
    MOV EDX,dword ptr [ESP + 0x18]      ; 00554df3
    MOV EBX,dword ptr [EAX + 0x104]     ; 00554df7
    SHL EDX,0x2                         ; 00554dfd
    CMP EBX,0x8                         ; 00554e00
    JNZ 0x00554fa9                      ; 00554e03
        ;   XREF to: 00554fa9 (CONDITIONAL_JUMP)  ; LAB_00554fa9
    CMP dword ptr [EAX + 0x108],0x2     ; 00554e09
    JNZ 0x00554f00                      ; 00554e10
        ;   XREF to: 00554f00 (CONDITIONAL_JUMP)  ; LAB_00554f00
    CMP dword ptr [ESP + 0x18],0x0      ; 00554e16
    JLE 0x00554d02                      ; 00554e1b
        ;   XREF to: 00554d02 (CONDITIONAL_JUMP)  ; LAB_00554d02
    XOR EAX,EAX                         ; 00554e21
    MOV dword ptr [ESP + 0xa0],EDX      ; 00554e23
    MOV dword ptr [ESP + 0xb8],EAX      ; 00554e2a
    FLD double ptr [ESP + 0x10]         ; 00554e31
        ;   Label: LAB_00554e31
    MOV EDX,dword ptr [EDI + 0x68]      ; 00554e35
    CALL crt_math.c_round_FUN_005a3120  ; 00554e38
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    MOV EDX,dword ptr [EDX + 0x120]     ; 00554e3d
    FISTP dword ptr [ESP + 0xc8]        ; 00554e43
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00554e4a
    MOV DL,byte ptr [EDX + EAX*0x2]     ; 00554e51
    AND EDX,0xff                        ; 00554e54
    SUB EDX,0x80                        ; 00554e5a
    MOV dword ptr [ESP + 0xc8],EDX      ; 00554e60
    FILD dword ptr [ESP + 0xc8]         ; 00554e67
    FSTP float ptr [ESP + 0x5c]         ; 00554e6e
    MOV EDX,dword ptr [EDI + 0x68]      ; 00554e72
    MOV EDX,dword ptr [EDX + 0x120]     ; 00554e75
    MOV AL,byte ptr [EDX + EAX*0x2 + 0x1] ; 00554e7b
    AND EAX,0xff                        ; 00554e7f
    SUB EAX,0x80                        ; 00554e84
    MOV dword ptr [ESP + 0xc8],EAX      ; 00554e89
    MOV EDX,dword ptr [EBP + 0x3c]      ; 00554e90
    FILD dword ptr [ESP + 0xc8]         ; 00554e93
    FSTP float ptr [ESP + 0x60]         ; 00554e9a
    XOR EAX,EAX                         ; 00554e9e
    TEST EDX,EDX                        ; 00554ea0
    JLE 0x00554ecf                      ; 00554ea2
        ;   XREF to: 00554ecf (CONDITIONAL_JUMP)  ; LAB_00554ecf
    MOV ESI,dword ptr [ESP + 0xb8]      ; 00554ea4
    XOR EDX,EDX                         ; 00554eab
    MOV EBX,EAX                         ; 00554ead
        ;   Label: LAB_00554ead
    AND EBX,0x1                         ; 00554eaf
    FLD float ptr [ESP + EBX*0x4 + 0x5c] ; 00554eb2
    FMUL float ptr [ESP + EDX*0x1 + 0x3c] ; 00554eb6
    MOV ECX,dword ptr [EDX + EBP*0x1 + 0x18] ; 00554eba
    FADD float ptr [ECX + ESI*0x1]      ; 00554ebe
    INC EAX                             ; 00554ec1
    FSTP float ptr [ECX + ESI*0x1]      ; 00554ec2
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00554ec5
    ADD EDX,0x4                         ; 00554ec8
    CMP EAX,ECX                         ; 00554ecb
    JL 0x00554ead                       ; 00554ecd
        ;   XREF to: 00554ead (CONDITIONAL_JUMP)  ; LAB_00554ead
    FLD double ptr [ESP + 0x10]         ; 00554ecf
        ;   Label: LAB_00554ecf
    MOV EBX,dword ptr [ESP + 0xb8]      ; 00554ed3
    MOV ESI,dword ptr [ESP + 0xa0]      ; 00554eda
    FADD double ptr [ESP + 0x8]         ; 00554ee1
    ADD EBX,0x4                         ; 00554ee5
    FSTP double ptr [ESP + 0x10]        ; 00554ee8
    MOV dword ptr [ESP + 0xb8],EBX      ; 00554eec
    CMP EBX,ESI                         ; 00554ef3
    JGE 0x00554d02                      ; 00554ef5
        ;   XREF to: 00554d02 (CONDITIONAL_JUMP)  ; LAB_00554d02
    JMP 0x00554e31                      ; 00554efb
        ;   XREF to: 00554e31 (UNCONDITIONAL_JUMP)  ; LAB_00554e31
    CMP dword ptr [ESP + 0x18],0x0      ; 00554f00
        ;   Label: LAB_00554f00
    JLE 0x00554d02                      ; 00554f05
        ;   XREF to: 00554d02 (CONDITIONAL_JUMP)  ; LAB_00554d02
    MOV dword ptr [ESP + 0xa4],EDX      ; 00554f0b
    XOR ESI,ESI                         ; 00554f12
    FLD double ptr [ESP + 0x10]         ; 00554f14
        ;   Label: LAB_00554f14
    CALL crt_math.c_round_FUN_005a3120  ; 00554f18
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    MOV EAX,dword ptr [EDI + 0x68]      ; 00554f1d
    FISTP dword ptr [ESP + 0xc8]        ; 00554f20
    MOV EAX,dword ptr [EAX + 0x120]     ; 00554f27
    ADD EAX,dword ptr [ESP + 0xc8]      ; 00554f2d
    MOV AL,byte ptr [EAX]               ; 00554f34
    AND EAX,0xff                        ; 00554f36
    SUB EAX,0x80                        ; 00554f3b
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00554f40
    MOV dword ptr [ESP + 0xc8],EAX      ; 00554f43
    XOR EDX,EDX                         ; 00554f4a
    FILD dword ptr [ESP + 0xc8]         ; 00554f4c
    FSTP float ptr [ESP + 0xc0]         ; 00554f53
    TEST ECX,ECX                        ; 00554f5a
    JLE 0x00554f86                      ; 00554f5c
        ;   XREF to: 00554f86 (CONDITIONAL_JUMP)  ; LAB_00554f86
    FLD float ptr [ESP + 0xc0]          ; 00554f5e
    MOV EBX,ESI                         ; 00554f65
    XOR EAX,EAX                         ; 00554f67
    FLD ST0                             ; 00554f69
        ;   Label: LAB_00554f69
    FMUL float ptr [ESP + EAX*0x1 + 0x3c] ; 00554f6b
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x18] ; 00554f6f
    FADD float ptr [ECX + EBX*0x1]      ; 00554f73
    INC EDX                             ; 00554f76
    FSTP float ptr [ECX + EBX*0x1]      ; 00554f77
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00554f7a
    ADD EAX,0x4                         ; 00554f7d
    CMP EDX,ECX                         ; 00554f80
    JL 0x00554f69                       ; 00554f82
        ;   XREF to: 00554f69 (CONDITIONAL_JUMP)  ; LAB_00554f69
    FSTP ST0                            ; 00554f84
    FLD double ptr [ESP + 0x10]         ; 00554f86
        ;   Label: LAB_00554f86
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00554f8a
    FADD double ptr [ESP + 0x8]         ; 00554f91
    ADD ESI,0x4                         ; 00554f95
    FSTP double ptr [ESP + 0x10]        ; 00554f98
    CMP ESI,EAX                         ; 00554f9c
    JGE 0x00554d02                      ; 00554f9e
        ;   XREF to: 00554d02 (CONDITIONAL_JUMP)  ; LAB_00554d02
    JMP 0x00554f14                      ; 00554fa4
        ;   XREF to: 00554f14 (UNCONDITIONAL_JUMP)  ; LAB_00554f14
    MOV ESI,dword ptr [EAX + 0x108]     ; 00554fa9
        ;   Label: LAB_00554fa9
    CMP ESI,0x2                         ; 00554faf
    JNZ 0x005550c4                      ; 00554fb2
        ;   XREF to: 005550c4 (CONDITIONAL_JUMP)  ; LAB_005550c4
    CMP ESI,dword ptr [EBP + 0x3c]      ; 00554fb8
    JZ 0x00555079                       ; 00554fbb
        ;   XREF to: 00555079 (CONDITIONAL_JUMP)  ; LAB_00555079
    CMP dword ptr [ESP + 0x18],0x0      ; 00554fc1
    JLE 0x00554d02                      ; 00554fc6
        ;   XREF to: 00554d02 (CONDITIONAL_JUMP)  ; LAB_00554d02
    XOR EAX,EAX                         ; 00554fcc
    MOV dword ptr [ESP + 0xa8],EDX      ; 00554fce
    MOV dword ptr [ESP + 0xbc],EAX      ; 00554fd5
    FLD double ptr [ESP + 0x10]         ; 00554fdc
        ;   Label: LAB_00554fdc
    MOV EDX,dword ptr [EDI + 0x68]      ; 00554fe0
    CALL crt_math.c_round_FUN_005a3120  ; 00554fe3
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    MOV EDX,dword ptr [EDX + 0x120]     ; 00554fe8
    FISTP dword ptr [ESP + 0xc8]        ; 00554fee
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00554ff5
    FILD word ptr [EDX + EAX*0x4]       ; 00554ffc
    FSTP float ptr [ESP + 0x64]         ; 00554fff
    MOV EDX,dword ptr [EDI + 0x68]      ; 00555003
    MOV EDX,dword ptr [EDX + 0x120]     ; 00555006
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0055500c
    FILD word ptr [EDX + EAX*0x4 + 0x2] ; 0055500f
    FSTP float ptr [ESP + 0x68]         ; 00555013
    XOR EDX,EDX                         ; 00555017
    TEST ECX,ECX                        ; 00555019
    JLE 0x00555048                      ; 0055501b
        ;   XREF to: 00555048 (CONDITIONAL_JUMP)  ; LAB_00555048
    MOV ESI,dword ptr [ESP + 0xbc]      ; 0055501d
    XOR EAX,EAX                         ; 00555024
    MOV EBX,EDX                         ; 00555026
        ;   Label: LAB_00555026
    AND EBX,0x1                         ; 00555028
    FLD float ptr [ESP + EBX*0x4 + 0x64] ; 0055502b
    FMUL float ptr [ESP + EAX*0x1 + 0x3c] ; 0055502f
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x18] ; 00555033
    FADD float ptr [ECX + ESI*0x1]      ; 00555037
    INC EDX                             ; 0055503a
    FSTP float ptr [ECX + ESI*0x1]      ; 0055503b
    MOV EBX,dword ptr [EBP + 0x3c]      ; 0055503e
    ADD EAX,0x4                         ; 00555041
    CMP EDX,EBX                         ; 00555044
    JL 0x00555026                       ; 00555046
        ;   XREF to: 00555026 (CONDITIONAL_JUMP)  ; LAB_00555026
    FLD double ptr [ESP + 0x10]         ; 00555048
        ;   Label: LAB_00555048
    MOV EBX,dword ptr [ESP + 0xbc]      ; 0055504c
    MOV ESI,dword ptr [ESP + 0xa8]      ; 00555053
    FADD double ptr [ESP + 0x8]         ; 0055505a
    ADD EBX,0x4                         ; 0055505e
    FSTP double ptr [ESP + 0x10]        ; 00555061
    MOV dword ptr [ESP + 0xbc],EBX      ; 00555065
    CMP EBX,ESI                         ; 0055506c
    JGE 0x00554d02                      ; 0055506e
        ;   XREF to: 00554d02 (CONDITIONAL_JUMP)  ; LAB_00554d02
    JMP 0x00554fdc                      ; 00555074
        ;   XREF to: 00554fdc (UNCONDITIONAL_JUMP)  ; LAB_00554fdc
    MOV ESI,dword ptr [ESP + 0x18]      ; 00555079
        ;   Label: LAB_00555079
    PUSH ESI                            ; 0055507d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0055507e
    PUSH EDX                            ; 00555082
    MOV ECX,dword ptr [ESP + 0x10]      ; 00555083
    PUSH ECX                            ; 00555087
    MOV EBX,dword ptr [ESP + 0x20]      ; 00555088
    PUSH EBX                            ; 0055508c
    MOV ESI,dword ptr [ESP + 0x20]      ; 0055508d
    PUSH ESI                            ; 00555091
    LEA EDX,[ESP + 0x50]                ; 00555092
    PUSH EDX                            ; 00555096
    LEA EDX,[EBP + 0x18]                ; 00555097
    PUSH EDX                            ; 0055509a
    MOV EDX,dword ptr [EAX + 0x120]     ; 0055509b
    PUSH EDX                            ; 005550a1
    CALL sound_sndmain.cpp_mixResampleStereoToStereo_FUN_005531d0 ; 005550a2
        ;   XREF to: 005531d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_mixResampleStereoToStereo_FUN_005531d0()
    MOV dword ptr [ESP + 0x8c],EAX      ; 005550a7
    MOV dword ptr [ESP + 0x90],EDX      ; 005550ae
    FLD double ptr [ESP + 0x8c]         ; 005550b5
    ADD ESP,0x20                        ; 005550bc
    JMP 0x00554cfe                      ; 005550bf
        ;   XREF to: 00554cfe (UNCONDITIONAL_JUMP)  ; LAB_00554cfe
    CMP dword ptr [EBP + 0x3c],0x2      ; 005550c4
        ;   Label: LAB_005550c4
    JZ 0x0055515d                       ; 005550c8
        ;   XREF to: 0055515d (CONDITIONAL_JUMP)  ; LAB_0055515d
    CMP dword ptr [ESP + 0x18],0x0      ; 005550ce
    JLE 0x00554d02                      ; 005550d3
        ;   XREF to: 00554d02 (CONDITIONAL_JUMP)  ; LAB_00554d02
    MOV dword ptr [ESP + 0x9c],EDX      ; 005550d9
    XOR ESI,ESI                         ; 005550e0
    FLD double ptr [ESP + 0x10]         ; 005550e2
        ;   Label: LAB_005550e2
    CALL crt_math.c_round_FUN_005a3120  ; 005550e6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    MOV EAX,dword ptr [EDI + 0x68]      ; 005550eb
    FISTP dword ptr [ESP + 0xc8]        ; 005550ee
    MOV EAX,dword ptr [EAX + 0x120]     ; 005550f5
    MOV EDX,dword ptr [ESP + 0xc8]      ; 005550fb
    MOV EBX,dword ptr [EBP + 0x3c]      ; 00555102
    FILD word ptr [EAX + EDX*0x2]       ; 00555105
    FSTP float ptr [ESP + 0xc4]         ; 00555108
    XOR EDX,EDX                         ; 0055510f
    TEST EBX,EBX                        ; 00555111
    JLE 0x0055513d                      ; 00555113
        ;   XREF to: 0055513d (CONDITIONAL_JUMP)  ; LAB_0055513d
    FLD float ptr [ESP + 0xc4]          ; 00555115
    MOV EBX,ESI                         ; 0055511c
    XOR EAX,EAX                         ; 0055511e
    FLD ST0                             ; 00555120
        ;   Label: LAB_00555120
    FMUL float ptr [ESP + EAX*0x1 + 0x3c] ; 00555122
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x18] ; 00555126
    FADD float ptr [ECX + EBX*0x1]      ; 0055512a
    INC EDX                             ; 0055512d
    FSTP float ptr [ECX + EBX*0x1]      ; 0055512e
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00555131
    ADD EAX,0x4                         ; 00555134
    CMP EDX,ECX                         ; 00555137
    JL 0x00555120                       ; 00555139
        ;   XREF to: 00555120 (CONDITIONAL_JUMP)  ; LAB_00555120
    FSTP ST0                            ; 0055513b
    FLD double ptr [ESP + 0x10]         ; 0055513d
        ;   Label: LAB_0055513d
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00555141
    FADD double ptr [ESP + 0x8]         ; 00555148
    ADD ESI,0x4                         ; 0055514c
    FSTP double ptr [ESP + 0x10]        ; 0055514f
    CMP ESI,ECX                         ; 00555153
    JGE 0x00554d02                      ; 00555155
        ;   XREF to: 00554d02 (CONDITIONAL_JUMP)  ; LAB_00554d02
    JMP 0x005550e2                      ; 0055515b
        ;   XREF to: 005550e2 (UNCONDITIONAL_JUMP)  ; LAB_005550e2
    MOV ESI,dword ptr [ESP + 0x18]      ; 0055515d
        ;   Label: LAB_0055515d
    PUSH ESI                            ; 00555161
    MOV EDX,dword ptr [ESP + 0x10]      ; 00555162
    PUSH EDX                            ; 00555166
    MOV ECX,dword ptr [ESP + 0x10]      ; 00555167
    PUSH ECX                            ; 0055516b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0055516c
    PUSH EBX                            ; 00555170
    MOV ESI,dword ptr [ESP + 0x20]      ; 00555171
    PUSH ESI                            ; 00555175
    LEA EDX,[ESP + 0x50]                ; 00555176
    PUSH EDX                            ; 0055517a
    LEA EDX,[EBP + 0x18]                ; 0055517b
    PUSH EDX                            ; 0055517e
    MOV EDX,dword ptr [EAX + 0x120]     ; 0055517f
    PUSH EDX                            ; 00555185
    CALL sound_sndmain.cpp_mixResampleMonoToStereo_FUN_00553090 ; 00555186
        ;   XREF to: 00553090 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_mixResampleMonoToStereo_FUN_00553090()
    MOV dword ptr [ESP + 0x8c],EAX      ; 0055518b
    MOV dword ptr [ESP + 0x90],EDX      ; 00555192
    FLD double ptr [ESP + 0x8c]         ; 00555199
    ADD ESP,0x20                        ; 005551a0
    JMP 0x00554cfe                      ; 005551a3
        ;   XREF to: 00554cfe (UNCONDITIONAL_JUMP)  ; LAB_00554cfe
    MOV EDX,dword ptr [ESP + 0x7c]      ; 005551a8
        ;   Label: LAB_005551a8
    MOV dword ptr [ESP + 0xb4],EAX      ; 005551ac
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0xb0] ; 005551b3
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0xd0] ; 005551ba
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005551c1
    ADD EDX,ECX                         ; 005551c5
    MOV dword ptr [ESP + 0x98],EAX      ; 005551c7
    IMUL ECX,EAX,0x0                    ; 005551ce
    SUB EDX,EBX                         ; 005551d1
    MOV dword ptr [ESP + 0xac],EDX      ; 005551d3
    LEA EAX,[EDX*0x4 + 0x0]             ; 005551da
    XOR EBX,EBX                         ; 005551e1
    MOV dword ptr [ESP + 0xb0],EAX      ; 005551e3
    TEST EAX,EAX                        ; 005551ea
    JLE 0x00555247                      ; 005551ec
        ;   XREF to: 00555247 (CONDITIONAL_JUMP)  ; LAB_00555247
    MOV EDX,ECX                         ; 005551ee
        ;   Label: LAB_005551ee
    MOV EAX,ECX                         ; 005551f0
    SAR EDX,0x1f                        ; 005551f2
    IDIV dword ptr [ESP + 0xac]         ; 005551f5
    SHL EAX,0x2                         ; 005551fc
    MOV dword ptr [ESP + 0xc8],EAX      ; 005551ff
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00555206
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0055520d
    MOV EAX,dword ptr [EAX + 0x2cf32a8] ; 00555214
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0055521a
    ADD EAX,EDX                         ; 00555221
    MOV ESI,dword ptr [ESP + ESI*0x1 + 0x1c] ; 00555223
    FLD float ptr [EAX]                 ; 00555227
    FADD float ptr [ESI + EBX*0x1]      ; 00555229
    ADD EBX,0x4                         ; 0055522c
    FSTP float ptr [ESI + EBX*0x1 + -0x4] ; 0055522f
    MOV ESI,dword ptr [ESP + 0x98]      ; 00555233
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0055523a
    ADD ECX,ESI                         ; 00555241
    CMP EBX,EAX                         ; 00555243
    JL 0x005551ee                       ; 00555245
        ;   XREF to: 005551ee (CONDITIONAL_JUMP)  ; LAB_005551ee
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00555247
        ;   Label: LAB_00555247
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0xb0] ; 0055524e
    MOV dword ptr [EDI + EAX*0x1 + 0xd0],EDX ; 00555255
    JMP 0x00554a96                      ; 0055525c
        ;   XREF to: 00554a96 (UNCONDITIONAL_JUMP)  ; LAB_00554a96

