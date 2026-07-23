; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_slew_cpp_CSlew_processInput_FUN_0051f980(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   FUN_0049cc10 at 0049cda9
;
; Referenced Globals:
;   double DOUBLE_00591ead = 10
;   double DOUBLE_00591eb5 = 0.0500000000000000
;   double DOUBLE_00591ebd = 3.14159265350000
;   double DOUBLE_00591ec5 = 8
;   double DOUBLE_00591ecd = 30
;   double DOUBLE_00591ed5 = -1.57079632675000
;   double DOUBLE_00591edd = 1.57079632675000
;   undefined4 DAT_005b9354
;   undefined4 DAT_005bac64
;   undefined4 DAT_01c77850
;   undefined4 DAT_01cc30e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f980
        ;   Label: core_slew.cpp_CSlew_processInput_FUN_0051f980
    PUSH EBP                            ; 0051f981
    MOV EBP,ESP                         ; 0051f982
    SUB ESP,0x24                        ; 0051f984
    AND ESP,0xfffffff8                  ; 0051f987
    MOV EBX,dword ptr [EBP + 0xc]       ; 0051f98a
    MOV EAX,[0x005b9354]                ; 0051f98d | DAT_005b9354
    MOV EAX,dword ptr [EAX + 0x264]     ; 0051f992 | DAT_01c77850
    PUSH 0x38                           ; 0051f998
    MOV dword ptr [ESP + 0xc],EAX       ; 0051f99a
    MOV dword ptr [ESP + 0x8],EAX       ; 0051f99e
    MOV EAX,[0x005bac64]                ; 0051f9a2 | DAT_005bac64
    PUSH EAX                            ; 0051f9a7 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051f9a8 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051f9aa
    ADD ESP,0x8                         ; 0051f9ac
    TEST EAX,EAX                        ; 0051f9af
    JZ 0x0051fc47                       ; 0051f9b1
        ;   XREF to: 0051fc47 (CONDITIONAL_JUMP)  ; LAB_0051fc47
    FLD float ptr [ESP + 0x8]           ; 0051f9b7
    FMUL double ptr [0x00591eb5]        ; 0051f9bb | DOUBLE_00591eb5
    FSTP float ptr [ESP + 0x4]          ; 0051f9c1
        ;   Label: LAB_0051f9c1
    FLD float ptr [ESP + 0x4]           ; 0051f9c5
        ;   Label: LAB_0051f9c5
    FLD ST0                             ; 0051f9c9
    FMUL double ptr [0x00591ebd]        ; 0051f9cb | DOUBLE_00591ebd
    FLD ST1                             ; 0051f9d1
    FMUL double ptr [0x00591ec5]        ; 0051f9d3 | DOUBLE_00591ec5
    PUSH 0x4f                           ; 0051f9d9
    MOV EAX,[0x005bac64]                ; 0051f9db | DAT_005bac64
    FXCH ST2                            ; 0051f9e0
    FMUL double ptr [0x00591ecd]        ; 0051f9e2 | DOUBLE_00591ecd
    PUSH EAX                            ; 0051f9e8 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051f9e9 | DAT_01cc30e4
    FXCH                                ; 0051f9eb
    FSTP float ptr [ESP + 0x24]         ; 0051f9ed
    FXCH                                ; 0051f9f1
    FSTP float ptr [ESP + 0x8]          ; 0051f9f3
    FSTP float ptr [ESP + 0x28]         ; 0051f9f7
    CALL dword ptr [EDX]                ; 0051f9fb
    ADD ESP,0x8                         ; 0051f9fd
    TEST EAX,EAX                        ; 0051fa00
    JZ 0x0051fa0e                       ; 0051fa02
        ;   XREF to: 0051fa0e (CONDITIONAL_JUMP)  ; LAB_0051fa0e
    FLD float ptr [EBX + 0x10]          ; 0051fa04
    FSUB float ptr [ESP + 0x1c]         ; 0051fa07
    FSTP float ptr [EBX + 0x10]         ; 0051fa0b
    PUSH 0x51                           ; 0051fa0e
        ;   Label: LAB_0051fa0e
    MOV EAX,[0x005bac64]                ; 0051fa10 | DAT_005bac64
    PUSH EAX                            ; 0051fa15 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fa16 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fa18
    ADD ESP,0x8                         ; 0051fa1a
    TEST EAX,EAX                        ; 0051fa1d
    JZ 0x0051fa2b                       ; 0051fa1f
        ;   XREF to: 0051fa2b (CONDITIONAL_JUMP)  ; LAB_0051fa2b
    FLD float ptr [EBX + 0x10]          ; 0051fa21
    FADD float ptr [ESP + 0x1c]         ; 0051fa24
    FSTP float ptr [EBX + 0x10]         ; 0051fa28
    PUSH 0x48                           ; 0051fa2b
        ;   Label: LAB_0051fa2b
    MOV EAX,[0x005bac64]                ; 0051fa2d | DAT_005bac64
    PUSH EAX                            ; 0051fa32 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fa33 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fa35
    ADD ESP,0x8                         ; 0051fa37
    TEST EAX,EAX                        ; 0051fa3a
    JZ 0x0051fa6a                       ; 0051fa3c
        ;   XREF to: 0051fa6a (CONDITIONAL_JUMP)  ; LAB_0051fa6a
    FLD float ptr [EBX + 0x10]          ; 0051fa3e
    FSINCOS                             ; 0051fa41
    FLD float ptr [ESP]                 ; 0051fa43
    FXCH ST2                            ; 0051fa46
    FMUL ST2                            ; 0051fa48
    FXCH                                ; 0051fa4a
    FMULP ST2                           ; 0051fa4c
    FLD float ptr [EBX]                 ; 0051fa4e
    FLD float ptr [EBX + 0x8]           ; 0051fa50
    FXCH ST2                            ; 0051fa53
    FADD ST0,ST1                        ; 0051fa55
    FXCH ST3                            ; 0051fa57
    FADD ST0,ST2                        ; 0051fa59
    FXCH ST3                            ; 0051fa5b
    FSTP ST1                            ; 0051fa5d
    FXCH ST2                            ; 0051fa5f
    FSTP ST1                            ; 0051fa61
    FXCH                                ; 0051fa63
    FSTP float ptr [EBX]                ; 0051fa65
    FSTP float ptr [EBX + 0x8]          ; 0051fa67
    PUSH 0x50                           ; 0051fa6a
        ;   Label: LAB_0051fa6a
    MOV EAX,[0x005bac64]                ; 0051fa6c | DAT_005bac64
    PUSH EAX                            ; 0051fa71 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fa72 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fa74
    ADD ESP,0x8                         ; 0051fa76
    TEST EAX,EAX                        ; 0051fa79
    JZ 0x0051faa9                       ; 0051fa7b
        ;   XREF to: 0051faa9 (CONDITIONAL_JUMP)  ; LAB_0051faa9
    FLD float ptr [EBX + 0x10]          ; 0051fa7d
    FSINCOS                             ; 0051fa80
    FLD float ptr [ESP]                 ; 0051fa82
    FXCH ST2                            ; 0051fa85
    FMUL ST2                            ; 0051fa87
    FXCH                                ; 0051fa89
    FMULP ST2                           ; 0051fa8b
    FLD float ptr [EBX]                 ; 0051fa8d
    FLD float ptr [EBX + 0x8]           ; 0051fa8f
    FXCH ST2                            ; 0051fa92
    FSUBR ST0,ST1                       ; 0051fa94
    FXCH ST3                            ; 0051fa96
    FSUBR ST0,ST2                       ; 0051fa98
    FXCH ST3                            ; 0051fa9a
    FSTP ST1                            ; 0051fa9c
    FXCH ST2                            ; 0051fa9e
    FSTP ST1                            ; 0051faa0
    FXCH                                ; 0051faa2
    FSTP float ptr [EBX]                ; 0051faa4
    FSTP float ptr [EBX + 0x8]          ; 0051faa6
    PUSH 0x4b                           ; 0051faa9
        ;   Label: LAB_0051faa9
    MOV EAX,[0x005bac64]                ; 0051faab | DAT_005bac64
    PUSH EAX                            ; 0051fab0 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fab1 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fab3
    ADD ESP,0x8                         ; 0051fab5
    TEST EAX,EAX                        ; 0051fab8
    JZ 0x0051faf9                       ; 0051faba
        ;   XREF to: 0051faf9 (CONDITIONAL_JUMP)  ; LAB_0051faf9
    FLD double ptr [0x00591ed5]         ; 0051fabc | DOUBLE_00591ed5
    FLD float ptr [EBX + 0x10]          ; 0051fac2
    FADD ST0,ST1                        ; 0051fac5
    FSIN                                ; 0051fac7
    FLD float ptr [EBX + 0x10]          ; 0051fac9
    FADDP ST2,ST0                       ; 0051facc
    FXCH                                ; 0051face
    FCOS                                ; 0051fad0
    FLD float ptr [ESP]                 ; 0051fad2
    FXCH ST2                            ; 0051fad5
    FMUL ST2                            ; 0051fad7
    FXCH                                ; 0051fad9
    FMULP ST2                           ; 0051fadb
    FLD float ptr [EBX]                 ; 0051fadd
    FLD float ptr [EBX + 0x8]           ; 0051fadf
    FXCH ST2                            ; 0051fae2
    FADD ST0,ST1                        ; 0051fae4
    FXCH ST3                            ; 0051fae6
    FADD ST0,ST2                        ; 0051fae8
    FXCH ST3                            ; 0051faea
    FSTP ST1                            ; 0051faec
    FXCH ST2                            ; 0051faee
    FSTP ST1                            ; 0051faf0
    FXCH                                ; 0051faf2
    FSTP float ptr [EBX]                ; 0051faf4
    FSTP float ptr [EBX + 0x8]          ; 0051faf6
    PUSH 0x4d                           ; 0051faf9
        ;   Label: LAB_0051faf9
    MOV EAX,[0x005bac64]                ; 0051fafb | DAT_005bac64
    PUSH EAX                            ; 0051fb00 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fb01 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fb03
    ADD ESP,0x8                         ; 0051fb05
    TEST EAX,EAX                        ; 0051fb08
    JZ 0x0051fb49                       ; 0051fb0a
        ;   XREF to: 0051fb49 (CONDITIONAL_JUMP)  ; LAB_0051fb49
    FLD double ptr [0x00591edd]         ; 0051fb0c | DOUBLE_00591edd
    FLD float ptr [EBX + 0x10]          ; 0051fb12
    FADD ST0,ST1                        ; 0051fb15
    FSIN                                ; 0051fb17
    FLD float ptr [EBX + 0x10]          ; 0051fb19
    FADDP ST2,ST0                       ; 0051fb1c
    FXCH                                ; 0051fb1e
    FCOS                                ; 0051fb20
    FLD float ptr [ESP]                 ; 0051fb22
    FXCH ST2                            ; 0051fb25
    FMUL ST2                            ; 0051fb27
    FXCH                                ; 0051fb29
    FMULP ST2                           ; 0051fb2b
    FLD float ptr [EBX]                 ; 0051fb2d
    FLD float ptr [EBX + 0x8]           ; 0051fb2f
    FXCH ST2                            ; 0051fb32
    FADD ST0,ST1                        ; 0051fb34
    FXCH ST3                            ; 0051fb36
    FADD ST0,ST2                        ; 0051fb38
    FXCH ST3                            ; 0051fb3a
    FSTP ST1                            ; 0051fb3c
    FXCH ST2                            ; 0051fb3e
    FSTP ST1                            ; 0051fb40
    FXCH                                ; 0051fb42
    FSTP float ptr [EBX]                ; 0051fb44
    FSTP float ptr [EBX + 0x8]          ; 0051fb46
    PUSH 0x10                           ; 0051fb49
        ;   Label: LAB_0051fb49
    MOV EAX,[0x005bac64]                ; 0051fb4b | DAT_005bac64
    PUSH EAX                            ; 0051fb50 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fb51 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fb53
    ADD ESP,0x8                         ; 0051fb55
    TEST EAX,EAX                        ; 0051fb58
    JZ 0x0051fb65                       ; 0051fb5a
        ;   XREF to: 0051fb65 (CONDITIONAL_JUMP)  ; LAB_0051fb65
    FLD float ptr [EBX + 0x4]           ; 0051fb5c
    FADD float ptr [ESP]                ; 0051fb5f
    FSTP float ptr [EBX + 0x4]          ; 0051fb62
    PUSH 0x1e                           ; 0051fb65
        ;   Label: LAB_0051fb65
    MOV EAX,[0x005bac64]                ; 0051fb67 | DAT_005bac64
    PUSH EAX                            ; 0051fb6c | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fb6d | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fb6f
    ADD ESP,0x8                         ; 0051fb71
    TEST EAX,EAX                        ; 0051fb74
    JZ 0x0051fb81                       ; 0051fb76
        ;   XREF to: 0051fb81 (CONDITIONAL_JUMP)  ; LAB_0051fb81
    FLD float ptr [EBX + 0x4]           ; 0051fb78
    FSUB float ptr [ESP]                ; 0051fb7b
    FSTP float ptr [EBX + 0x4]          ; 0051fb7e
    PUSH 0x3f                           ; 0051fb81
        ;   Label: LAB_0051fb81
    MOV EAX,[0x005bac64]                ; 0051fb83 | DAT_005bac64
    PUSH EAX                            ; 0051fb88 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fb89 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fb8b
    ADD ESP,0x8                         ; 0051fb8d
    TEST EAX,EAX                        ; 0051fb90
    JZ 0x0051fb9e                       ; 0051fb92
        ;   XREF to: 0051fb9e (CONDITIONAL_JUMP)  ; LAB_0051fb9e
    FLD float ptr [EBX + 0xc]           ; 0051fb94
    FSUB float ptr [ESP + 0x1c]         ; 0051fb97
    FSTP float ptr [EBX + 0xc]          ; 0051fb9b
    PUSH 0x42                           ; 0051fb9e
        ;   Label: LAB_0051fb9e
    MOV EAX,[0x005bac64]                ; 0051fba0 | DAT_005bac64
    PUSH EAX                            ; 0051fba5 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fba6 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fba8
    ADD ESP,0x8                         ; 0051fbaa
    TEST EAX,EAX                        ; 0051fbad
    JZ 0x0051fbbb                       ; 0051fbaf
        ;   XREF to: 0051fbbb (CONDITIONAL_JUMP)  ; LAB_0051fbbb
    FLD float ptr [EBX + 0xc]           ; 0051fbb1
    FADD float ptr [ESP + 0x1c]         ; 0051fbb4
    FSTP float ptr [EBX + 0xc]          ; 0051fbb8
    PUSH 0x47                           ; 0051fbbb
        ;   Label: LAB_0051fbbb
    MOV EAX,[0x005bac64]                ; 0051fbbd | DAT_005bac64
    PUSH EAX                            ; 0051fbc2 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fbc3 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fbc5
    ADD ESP,0x8                         ; 0051fbc7
    TEST EAX,EAX                        ; 0051fbca
    JZ 0x0051fbd8                       ; 0051fbcc
        ;   XREF to: 0051fbd8 (CONDITIONAL_JUMP)  ; LAB_0051fbd8
    FLD float ptr [EBX + 0x14]          ; 0051fbce
    FSUB float ptr [ESP + 0x1c]         ; 0051fbd1
    FSTP float ptr [EBX + 0x14]         ; 0051fbd5
    PUSH 0x49                           ; 0051fbd8
        ;   Label: LAB_0051fbd8
    MOV EAX,[0x005bac64]                ; 0051fbda | DAT_005bac64
    PUSH EAX                            ; 0051fbdf | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fbe0 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fbe2
    ADD ESP,0x8                         ; 0051fbe4
    TEST EAX,EAX                        ; 0051fbe7
    JZ 0x0051fbf5                       ; 0051fbe9
        ;   XREF to: 0051fbf5 (CONDITIONAL_JUMP)  ; LAB_0051fbf5
    FLD float ptr [EBX + 0x14]          ; 0051fbeb
    FADD float ptr [ESP + 0x1c]         ; 0051fbee
    FSTP float ptr [EBX + 0x14]         ; 0051fbf2
    PUSH 0xc                            ; 0051fbf5
        ;   Label: LAB_0051fbf5
    MOV EAX,[0x005bac64]                ; 0051fbf7 | DAT_005bac64
    PUSH EAX                            ; 0051fbfc | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fbfd | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fbff
    ADD ESP,0x8                         ; 0051fc01
    TEST EAX,EAX                        ; 0051fc04
    JZ 0x0051fc12                       ; 0051fc06
        ;   XREF to: 0051fc12 (CONDITIONAL_JUMP)  ; LAB_0051fc12
    FLD float ptr [EBX + 0x18]          ; 0051fc08
    FSUB float ptr [ESP + 0x20]         ; 0051fc0b
    FSTP float ptr [EBX + 0x18]         ; 0051fc0f
    PUSH 0xd                            ; 0051fc12
        ;   Label: LAB_0051fc12
    MOV EAX,[0x005bac64]                ; 0051fc14 | DAT_005bac64
    PUSH EAX                            ; 0051fc19 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fc1a | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fc1c
    ADD ESP,0x8                         ; 0051fc1e
    TEST EAX,EAX                        ; 0051fc21
    JZ 0x0051fc2f                       ; 0051fc23
        ;   XREF to: 0051fc2f (CONDITIONAL_JUMP)  ; LAB_0051fc2f
    FLD float ptr [EBX + 0x18]          ; 0051fc25
    FADD float ptr [ESP + 0x20]         ; 0051fc28
    FSTP float ptr [EBX + 0x18]         ; 0051fc2c
    PUSH 0x4c                           ; 0051fc2f
        ;   Label: LAB_0051fc2f
    MOV EAX,[0x005bac64]                ; 0051fc31 | DAT_005bac64
    PUSH EAX                            ; 0051fc36 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fc37 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fc39
    ADD ESP,0x8                         ; 0051fc3b
    TEST EAX,EAX                        ; 0051fc3e
    JNZ 0x0051fc71                      ; 0051fc40
        ;   XREF to: 0051fc71 (CONDITIONAL_JUMP)  ; LAB_0051fc71
    MOV ESP,EBP                         ; 0051fc42
    POP EBP                             ; 0051fc44
    POP EBX                             ; 0051fc45
    RET                                 ; 0051fc46
    PUSH 0x2a                           ; 0051fc47
        ;   Label: LAB_0051fc47
    MOV EAX,[0x005bac64]                ; 0051fc49 | DAT_005bac64
    PUSH EAX                            ; 0051fc4e | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0051fc4f | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0051fc51
    ADD ESP,0x8                         ; 0051fc53
    TEST EAX,EAX                        ; 0051fc56
    JZ 0x0051f9c5                       ; 0051fc58
        ;   XREF to: 0051f9c5 (CONDITIONAL_JUMP)  ; LAB_0051f9c5
    FLD float ptr [ESP + 0x8]           ; 0051fc5e
    FLD ST0                             ; 0051fc62
    FMUL double ptr [0x00591ead]        ; 0051fc64 | DOUBLE_00591ead
    FSTP ST1                            ; 0051fc6a
    JMP 0x0051f9c1                      ; 0051fc6c
        ;   XREF to: 0051f9c1 (UNCONDITIONAL_JUMP)  ; LAB_0051f9c1
    MOV dword ptr [EBX + 0x14],0x0      ; 0051fc71
        ;   Label: LAB_0051fc71
    MOV EAX,dword ptr [EBX + 0x14]      ; 0051fc78
    MOV dword ptr [EBX + 0x10],EAX      ; 0051fc7b
    MOV EAX,dword ptr [EBX + 0x10]      ; 0051fc7e
    MOV dword ptr [EBX + 0xc],EAX       ; 0051fc81
    MOV ESP,EBP                         ; 0051fc84
    POP EBP                             ; 0051fc86
    POP EBX                             ; 0051fc87
    RET                                 ; 0051fc88

