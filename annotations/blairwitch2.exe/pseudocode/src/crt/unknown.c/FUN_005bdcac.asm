; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005bdcac(int param_1,int *param_2,int param_3,int param_4)
;
; Local Variables:
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
; XREF[1]:
;   crt_unknown.c_FUN_005bd180 at 005bd30f
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   crt_unknown.c_FUN_005bd160
;   crt_unknown.c_FUN_005bd16c
;   crt_unknown.c_FUN_005be118
;   crt_unknown.c_FUN_005be148
;   unkafter_morph.cpp_FUN_005c34e8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bdcac
        ;   Label: crt_unknown.c_FUN_005bdcac
    PUSH ESI                            ; 005bdcad
    PUSH EDI                            ; 005bdcae
    PUSH ES                             ; 005bdcaf
    PUSH EBP                            ; 005bdcb0
    SUB ESP,0x28                        ; 005bdcb1
    MOV EDI,dword ptr [ESP + 0x48]      ; 005bdcb4
    XOR EDX,EDX                         ; 005bdcb8
    XOR EBP,EBP                         ; 005bdcba
    MOV dword ptr [ESP],EDX             ; 005bdcbc
    MOV dword ptr [ESP + 0x4],EDX       ; 005bdcbf
    MOV dword ptr [ESP + 0x24],EDX      ; 005bdcc3
    MOV dword ptr [ESP + 0x20],EDX      ; 005bdcc7
    MOV EAX,dword ptr [ESP + 0x40]      ; 005bdccb
        ;   Label: LAB_005bdccb
    PUSH EAX                            ; 005bdccf
    CALL crt_unknown.c_FUN_005bd160     ; 005bdcd0
        ;   XREF to: 005bd160 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bd160()
    ADD ESP,0x4                         ; 005bdcd5
    MOV dword ptr [ESP + 0x18],EAX      ; 005bdcd8
    MOV BL,byte ptr [ESP + 0x18]        ; 005bdcdc
    INC BL                              ; 005bdce0
    AND EBX,0xff                        ; 005bdce2
    TEST byte ptr [EBX + 0x61ed94],0x2  ; 005bdce8 | DAT_0061ed94
    JZ 0x005bdcf7                       ; 005bdcef
        ;   XREF to: 005bdcf7 (CONDITIONAL_JUMP)  ; LAB_005bdcf7
    INC dword ptr [ESP + 0x20]          ; 005bdcf1
    JMP 0x005bdccb                      ; 005bdcf5
        ;   XREF to: 005bdccb (UNCONDITIONAL_JUMP)  ; LAB_005bdccb
    MOV EDX,dword ptr [ESP + 0x40]      ; 005bdcf7
        ;   Label: LAB_005bdcf7
    TEST byte ptr [EDX + 0x10],0x2      ; 005bdcfb
    JNZ 0x005bdfc8                      ; 005bdcff
        ;   XREF to: 005bdfc8 (CONDITIONAL_JUMP)  ; LAB_005bdfc8
    MOV EBX,dword ptr [EDX + 0xc]       ; 005bdd05
    LEA ESI,[EBX + -0x1]                ; 005bdd08
    MOV dword ptr [EDX + 0xc],ESI       ; 005bdd0b
    TEST EBX,EBX                        ; 005bdd0e
    JZ 0x005bdfb6                       ; 005bdd10
        ;   XREF to: 005bdfb6 (CONDITIONAL_JUMP)  ; LAB_005bdfb6
    MOV EBX,0x2b                        ; 005bdd16
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005bdd1b
    MOV dword ptr [ESP + 0x1c],EBX      ; 005bdd1f
    TEST ECX,ECX                        ; 005bdd23
    JZ 0x005bdd5b                       ; 005bdd25
        ;   XREF to: 005bdd5b (CONDITIONAL_JUMP)  ; LAB_005bdd5b
    CMP EAX,EBX                         ; 005bdd27
    JZ 0x005bdd30                       ; 005bdd29
        ;   XREF to: 005bdd30 (CONDITIONAL_JUMP)  ; LAB_005bdd30
    CMP EAX,0x2d                        ; 005bdd2b
    JNZ 0x005bdd5b                      ; 005bdd2e
        ;   XREF to: 005bdd5b (CONDITIONAL_JUMP)  ; LAB_005bdd5b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005bdd30
        ;   Label: LAB_005bdd30
    MOV dword ptr [ESP + 0x1c],EAX      ; 005bdd34
    MOV EAX,dword ptr [ESP + 0x20]      ; 005bdd38
    MOV ESI,dword ptr [ESP + 0x40]      ; 005bdd3c
    INC EAX                             ; 005bdd40
    PUSH ESI                            ; 005bdd41
    MOV dword ptr [ESP + 0x24],EAX      ; 005bdd42
    CALL crt_unknown.c_FUN_005be148     ; 005bdd46
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be148()
    ADD ESP,0x4                         ; 005bdd4b
    MOV dword ptr [ESP + 0x18],EAX      ; 005bdd4e
    CMP EAX,-0x1                        ; 005bdd52
    JZ 0x005bdfc8                       ; 005bdd55
        ;   XREF to: 005bdfc8 (CONDITIONAL_JUMP)  ; LAB_005bdfc8
    TEST EDI,EDI                        ; 005bdd5b
        ;   Label: LAB_005bdd5b
    JNZ 0x005bddd2                      ; 005bdd5d
        ;   XREF to: 005bddd2 (CONDITIONAL_JUMP)  ; LAB_005bddd2
    CMP dword ptr [ESP + 0x18],0x30     ; 005bdd63
    JNZ 0x005bddcb                      ; 005bdd68
        ;   XREF to: 005bddcb (CONDITIONAL_JUMP)  ; LAB_005bddcb
    MOV EAX,dword ptr [ESP + 0x40]      ; 005bdd6a
    PUSH EAX                            ; 005bdd6e
    CALL crt_unknown.c_FUN_005be148     ; 005bdd6f
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be148()
    ADD ESP,0x4                         ; 005bdd74
    MOV EBP,0x1                         ; 005bdd77
    MOV dword ptr [ESP + 0x18],EAX      ; 005bdd7c
    CMP EAX,-0x1                        ; 005bdd80
    JZ 0x005bdfc8                       ; 005bdd83
        ;   XREF to: 005bdfc8 (CONDITIONAL_JUMP)  ; LAB_005bdfc8
    CMP EAX,0x78                        ; 005bdd89
    JZ 0x005bdd93                       ; 005bdd8c
        ;   XREF to: 005bdd93 (CONDITIONAL_JUMP)  ; LAB_005bdd93
    CMP EAX,0x58                        ; 005bdd8e
    JNZ 0x005bddc4                      ; 005bdd91
        ;   XREF to: 005bddc4 (CONDITIONAL_JUMP)  ; LAB_005bddc4
    MOV EDX,dword ptr [ESP + 0x40]      ; 005bdd93
        ;   Label: LAB_005bdd93
    MOV EBX,dword ptr [ESP + 0x20]      ; 005bdd97
    PUSH EDX                            ; 005bdd9b
    ADD EBX,0x2                         ; 005bdd9c
    CALL crt_unknown.c_FUN_005be148     ; 005bdd9f
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be148()
    MOV dword ptr [ESP + 0x24],EBX      ; 005bdda4
    ADD ESP,0x4                         ; 005bdda8
    XOR EBP,EBP                         ; 005bddab
    MOV dword ptr [ESP + 0x18],EAX      ; 005bddad
    CMP EAX,-0x1                        ; 005bddb1
    JZ 0x005bdfc8                       ; 005bddb4
        ;   XREF to: 005bdfc8 (CONDITIONAL_JUMP)  ; LAB_005bdfc8
    MOV EDI,0x10                        ; 005bddba
    JMP 0x005bde2e                      ; 005bddbf
        ;   XREF to: 005bde2e (UNCONDITIONAL_JUMP)  ; LAB_005bde2e
    MOV EDI,0x8                         ; 005bddc4
        ;   Label: LAB_005bddc4
    JMP 0x005bde2e                      ; 005bddc9
        ;   XREF to: 005bde2e (UNCONDITIONAL_JUMP)  ; LAB_005bde2e
    MOV EDI,0xa                         ; 005bddcb
        ;   Label: LAB_005bddcb
    JMP 0x005bde2e                      ; 005bddd0
        ;   XREF to: 005bde2e (UNCONDITIONAL_JUMP)  ; LAB_005bde2e
    CMP EDI,0x10                        ; 005bddd2
        ;   Label: LAB_005bddd2
    JNZ 0x005bde2e                      ; 005bddd5
        ;   XREF to: 005bde2e (CONDITIONAL_JUMP)  ; LAB_005bde2e
    CMP dword ptr [ESP + 0x18],0x30     ; 005bddd7
    JNZ 0x005bde2e                      ; 005bdddc
        ;   XREF to: 005bde2e (CONDITIONAL_JUMP)  ; LAB_005bde2e
    MOV EBX,dword ptr [ESP + 0x40]      ; 005bddde
    PUSH EBX                            ; 005bdde2
    CALL crt_unknown.c_FUN_005be148     ; 005bdde3
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be148()
    ADD ESP,0x4                         ; 005bdde8
    MOV EBP,0x1                         ; 005bddeb
    MOV dword ptr [ESP + 0x18],EAX      ; 005bddf0
    CMP EAX,-0x1                        ; 005bddf4
    JZ 0x005bdfc8                       ; 005bddf7
        ;   XREF to: 005bdfc8 (CONDITIONAL_JUMP)  ; LAB_005bdfc8
    CMP EAX,0x78                        ; 005bddfd
    JZ 0x005bde07                       ; 005bde00
        ;   XREF to: 005bde07 (CONDITIONAL_JUMP)  ; LAB_005bde07
    CMP EAX,0x58                        ; 005bde02
    JNZ 0x005bde2e                      ; 005bde05
        ;   XREF to: 005bde2e (CONDITIONAL_JUMP)  ; LAB_005bde2e
    MOV ECX,dword ptr [ESP + 0x40]      ; 005bde07
        ;   Label: LAB_005bde07
    MOV ESI,dword ptr [ESP + 0x20]      ; 005bde0b
    PUSH ECX                            ; 005bde0f
    ADD ESI,0x2                         ; 005bde10
    CALL crt_unknown.c_FUN_005be148     ; 005bde13
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be148()
    MOV dword ptr [ESP + 0x24],ESI      ; 005bde18
    ADD ESP,0x4                         ; 005bde1c
    XOR EBP,EBP                         ; 005bde1f
    MOV dword ptr [ESP + 0x18],EAX      ; 005bde21
    CMP EAX,-0x1                        ; 005bde25
    JZ 0x005bdfc8                       ; 005bde28
        ;   XREF to: 005bdfc8 (CONDITIONAL_JUMP)  ; LAB_005bdfc8
    MOV EAX,dword ptr [ESP + 0x40]      ; 005bde2e
        ;   Label: LAB_005bde2e
    TEST byte ptr [EAX + 0x10],0x40     ; 005bde32
    JZ 0x005bdf3d                       ; 005bde36
        ;   XREF to: 005bdf3d (CONDITIONAL_JUMP)  ; LAB_005bdf3d
    XOR ECX,ECX                         ; 005bde3c
    MOV dword ptr [ESP + 0x10],EDI      ; 005bde3e
    MOV dword ptr [ESP + 0x14],ECX      ; 005bde42
    MOV ECX,dword ptr [ESP + 0x18]      ; 005bde46
        ;   Label: LAB_005bde46
    PUSH ECX                            ; 005bde4a
    CALL crt_unknown.c_FUN_005be118     ; 005bde4b
        ;   XREF to: 005be118 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be118()
    ADD ESP,0x4                         ; 005bde50
    CMP EAX,EDI                         ; 005bde53
    JGE 0x005bdeb5                      ; 005bde55
        ;   XREF to: 005bdeb5 (CONDITIONAL_JUMP)  ; LAB_005bdeb5
    LEA EBX,[ESP + 0x10]                ; 005bde57
    MOV dword ptr [ESP + 0x8],EAX       ; 005bde5b
    XOR ESI,ESI                         ; 005bde5f
    MOV EAX,ESP                         ; 005bde61
    MOV dword ptr [ESP + 0xc],ESI       ; 005bde63
    MOV ESI,ESP                         ; 005bde67
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bde69
    MOV EAX,dword ptr [EAX]             ; 005bde6c
    MOV ECX,dword ptr [EBX + 0x4]       ; 005bde6e
    MOV EBX,dword ptr [EBX]             ; 005bde71
    CALL unkafter_morph.cpp_FUN_005c34e8 ; 005bde73
        ;   XREF to: 005c34e8 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c34e8()
    MOV dword ptr [ESI + 0x4],EDX       ; 005bde78
    MOV dword ptr [ESI],EAX             ; 005bde7b
    MOV ESI,ESP                         ; 005bde7d
    LEA EBX,[ESP + 0x8]                 ; 005bde7f
    MOV EAX,ESP                         ; 005bde83
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bde85
    MOV EAX,dword ptr [EAX]             ; 005bde88
    MOV ECX,dword ptr [EBX + 0x4]       ; 005bde8a
    MOV EBX,dword ptr [EBX]             ; 005bde8d
    ADD EAX,EBX                         ; 005bde8f
    ADC EDX,ECX                         ; 005bde91
    MOV dword ptr [ESI + 0x4],EDX       ; 005bde93
    MOV dword ptr [ESI],EAX             ; 005bde96
    MOV EAX,dword ptr [ESP + 0x40]      ; 005bde98
    PUSH EAX                            ; 005bde9c
    CALL crt_unknown.c_FUN_005be148     ; 005bde9d
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be148()
    ADD ESP,0x4                         ; 005bdea2
    INC EBP                             ; 005bdea5
    MOV dword ptr [ESP + 0x18],EAX      ; 005bdea6
    CMP EAX,-0x1                        ; 005bdeaa
    JZ 0x005bdfc8                       ; 005bdead
        ;   XREF to: 005bdfc8 (CONDITIONAL_JUMP)  ; LAB_005bdfc8
    JMP 0x005bde46                      ; 005bdeb3
        ;   XREF to: 005bde46 (UNCONDITIONAL_JUMP)  ; LAB_005bde46
    CMP dword ptr [ESP + 0x18],0x3a     ; 005bdeb5
        ;   Label: LAB_005bdeb5
    JNZ 0x005bdfb6                      ; 005bdeba
        ;   XREF to: 005bdfb6 (CONDITIONAL_JUMP)  ; LAB_005bdfb6
    MOV EAX,dword ptr [ESP + 0x40]      ; 005bdec0
    TEST byte ptr [EAX + 0x10],0x80     ; 005bdec4
    JZ 0x005bdfb6                       ; 005bdec8
        ;   XREF to: 005bdfb6 (CONDITIONAL_JUMP)  ; LAB_005bdfb6
    MOV EBX,dword ptr [ESP + 0x40]      ; 005bdece
        ;   Label: LAB_005bdece
    PUSH EBX                            ; 005bded2
    CALL crt_unknown.c_FUN_005be148     ; 005bded3
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be148()
    ADD ESP,0x4                         ; 005bded8
    INC EBP                             ; 005bdedb
    MOV dword ptr [ESP + 0x18],EAX      ; 005bdedc
    CMP EAX,-0x1                        ; 005bdee0
    JZ 0x005bdfc8                       ; 005bdee3
        ;   XREF to: 005bdfc8 (CONDITIONAL_JUMP)  ; LAB_005bdfc8
    PUSH EAX                            ; 005bdee9
    CALL crt_unknown.c_FUN_005be118     ; 005bdeea
        ;   XREF to: 005be118 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be118()
    ADD ESP,0x4                         ; 005bdeef
    CMP EAX,EDI                         ; 005bdef2
    JGE 0x005bdfb6                      ; 005bdef4
        ;   XREF to: 005bdfb6 (CONDITIONAL_JUMP)  ; LAB_005bdfb6
    MOV ESI,ESP                         ; 005bdefa
    LEA EBX,[ESP + 0x10]                ; 005bdefc
    MOV dword ptr [ESP + 0x8],EAX       ; 005bdf00
    XOR ECX,ECX                         ; 005bdf04
    MOV EAX,ESP                         ; 005bdf06
    MOV dword ptr [ESP + 0xc],ECX       ; 005bdf08
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bdf0c
    MOV EAX,dword ptr [EAX]             ; 005bdf0f
    MOV ECX,dword ptr [EBX + 0x4]       ; 005bdf11
    MOV EBX,dword ptr [EBX]             ; 005bdf14
    CALL unkafter_morph.cpp_FUN_005c34e8 ; 005bdf16
        ;   XREF to: 005c34e8 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c34e8()
    MOV dword ptr [ESI + 0x4],EDX       ; 005bdf1b
    MOV dword ptr [ESI],EAX             ; 005bdf1e
    MOV ESI,ESP                         ; 005bdf20
    LEA EBX,[ESP + 0x8]                 ; 005bdf22
    MOV EAX,ESP                         ; 005bdf26
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bdf28
    MOV EAX,dword ptr [EAX]             ; 005bdf2b
    MOV ECX,dword ptr [EBX + 0x4]       ; 005bdf2d
    MOV EBX,dword ptr [EBX]             ; 005bdf30
    ADD EAX,EBX                         ; 005bdf32
    ADC EDX,ECX                         ; 005bdf34
    MOV dword ptr [ESI + 0x4],EDX       ; 005bdf36
    MOV dword ptr [ESI],EAX             ; 005bdf39
    JMP 0x005bdece                      ; 005bdf3b
        ;   XREF to: 005bdece (UNCONDITIONAL_JUMP)  ; LAB_005bdece
    MOV ESI,dword ptr [ESP + 0x18]      ; 005bdf3d
        ;   Label: LAB_005bdf3d
    PUSH ESI                            ; 005bdf41
    CALL crt_unknown.c_FUN_005be118     ; 005bdf42
        ;   XREF to: 005be118 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be118()
    ADD ESP,0x4                         ; 005bdf47
    CMP EAX,EDI                         ; 005bdf4a
    JGE 0x005bdf74                      ; 005bdf4c
        ;   XREF to: 005bdf74 (CONDITIONAL_JUMP)  ; LAB_005bdf74
    MOV EBX,dword ptr [ESP + 0x24]      ; 005bdf4e
    IMUL EBX,EDI                        ; 005bdf52
    ADD EBX,EAX                         ; 005bdf55
    MOV EAX,dword ptr [ESP + 0x40]      ; 005bdf57
    PUSH EAX                            ; 005bdf5b
    MOV dword ptr [ESP + 0x28],EBX      ; 005bdf5c
    CALL crt_unknown.c_FUN_005be148     ; 005bdf60
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be148()
    ADD ESP,0x4                         ; 005bdf65
    INC EBP                             ; 005bdf68
    MOV dword ptr [ESP + 0x18],EAX      ; 005bdf69
    CMP EAX,-0x1                        ; 005bdf6d
    JZ 0x005bdfc8                       ; 005bdf70
        ;   XREF to: 005bdfc8 (CONDITIONAL_JUMP)  ; LAB_005bdfc8
    JMP 0x005bdf3d                      ; 005bdf72
        ;   XREF to: 005bdf3d (UNCONDITIONAL_JUMP)  ; LAB_005bdf3d
    CMP ESI,0x3a                        ; 005bdf74
        ;   Label: LAB_005bdf74
    JNZ 0x005bdfb6                      ; 005bdf77
        ;   XREF to: 005bdfb6 (CONDITIONAL_JUMP)  ; LAB_005bdfb6
    MOV EAX,dword ptr [ESP + 0x40]      ; 005bdf79
    TEST byte ptr [EAX + 0x10],0x80     ; 005bdf7d
    JZ 0x005bdfb6                       ; 005bdf81
        ;   XREF to: 005bdfb6 (CONDITIONAL_JUMP)  ; LAB_005bdfb6
    MOV EBX,dword ptr [ESP + 0x40]      ; 005bdf83
        ;   Label: LAB_005bdf83
    PUSH EBX                            ; 005bdf87
    CALL crt_unknown.c_FUN_005be148     ; 005bdf88
        ;   XREF to: 005be148 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be148()
    ADD ESP,0x4                         ; 005bdf8d
    INC EBP                             ; 005bdf90
    MOV dword ptr [ESP + 0x18],EAX      ; 005bdf91
    CMP EAX,-0x1                        ; 005bdf95
    JZ 0x005bdfc8                       ; 005bdf98
        ;   XREF to: 005bdfc8 (CONDITIONAL_JUMP)  ; LAB_005bdfc8
    PUSH EAX                            ; 005bdf9a
    CALL crt_unknown.c_FUN_005be118     ; 005bdf9b
        ;   XREF to: 005be118 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be118()
    ADD ESP,0x4                         ; 005bdfa0
    CMP EAX,EDI                         ; 005bdfa3
    JGE 0x005bdfb6                      ; 005bdfa5
        ;   XREF to: 005bdfb6 (CONDITIONAL_JUMP)  ; LAB_005bdfb6
    MOV EBX,dword ptr [ESP + 0x24]      ; 005bdfa7
    IMUL EBX,EDI                        ; 005bdfab
    ADD EBX,EAX                         ; 005bdfae
    MOV dword ptr [ESP + 0x24],EBX      ; 005bdfb0
    JMP 0x005bdf83                      ; 005bdfb4
        ;   XREF to: 005bdf83 (UNCONDITIONAL_JUMP)  ; LAB_005bdf83
    MOV ESI,dword ptr [ESP + 0x40]      ; 005bdfb6
        ;   Label: LAB_005bdfb6
    PUSH ESI                            ; 005bdfba
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005bdfbb
    PUSH EDI                            ; 005bdfbf
    CALL crt_unknown.c_FUN_005bd16c     ; 005bdfc0
        ;   XREF to: 005bd16c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bd16c()
    ADD ESP,0x8                         ; 005bdfc5
    MOV EAX,dword ptr [ESP + 0x40]      ; 005bdfc8
        ;   Label: LAB_005bdfc8
    TEST byte ptr [EAX + 0x10],0x40     ; 005bdfcc
    JZ 0x005be07c                       ; 005bdfd0
        ;   XREF to: 005be07c (CONDITIONAL_JUMP)  ; LAB_005be07c
    CMP dword ptr [ESP + 0x1c],0x2d     ; 005bdfd6
    JNZ 0x005be004                      ; 005bdfdb
        ;   XREF to: 005be004 (CONDITIONAL_JUMP)  ; LAB_005be004
    MOV EDX,dword ptr [ESP]             ; 005bdfdd
    MOV EBX,dword ptr [ESP + 0x4]       ; 005bdfe0
    NOT EDX                             ; 005bdfe4
    NOT EBX                             ; 005bdfe6
    MOV dword ptr [ESP],EDX             ; 005bdfe8
    LEA ECX,[EDX + 0x1]                 ; 005bdfeb
    MOV dword ptr [ESP + 0x4],EBX       ; 005bdfee
    MOV dword ptr [ESP],ECX             ; 005bdff2
    TEST ECX,ECX                        ; 005bdff5
    JNZ 0x005bdffe                      ; 005bdff7
        ;   XREF to: 005bdffe (CONDITIONAL_JUMP)  ; LAB_005bdffe
    LEA EAX,[EBX + 0x1]                 ; 005bdff9
    JMP 0x005be000                      ; 005bdffc
        ;   XREF to: 005be000 (UNCONDITIONAL_JUMP)  ; LAB_005be000
    MOV EAX,EBX                         ; 005bdffe
        ;   Label: LAB_005bdffe
    MOV dword ptr [ESP + 0x4],EAX       ; 005be000
        ;   Label: LAB_005be000
    TEST EBP,EBP                        ; 005be004
        ;   Label: LAB_005be004
    JLE 0x005be10a                      ; 005be006
        ;   XREF to: 005be10a (CONDITIONAL_JUMP)  ; LAB_005be10a
    MOV EAX,dword ptr [ESP + 0x40]      ; 005be00c
    MOV EDI,dword ptr [ESP + 0x20]      ; 005be010
    MOV DL,byte ptr [EAX + 0x10]        ; 005be014
    ADD EBP,EDI                         ; 005be017
    TEST DL,0x1                         ; 005be019
    JZ 0x005be10a                       ; 005be01c
        ;   XREF to: 005be10a (CONDITIONAL_JUMP)  ; LAB_005be10a
    TEST DL,0x4                         ; 005be022
    JZ 0x005be03b                       ; 005be025
        ;   XREF to: 005be03b (CONDITIONAL_JUMP)  ; LAB_005be03b
    MOV EAX,dword ptr [ESP + 0x44]      ; 005be027
    MOV ECX,dword ptr [EAX]             ; 005be02b
    ADD ECX,0x8                         ; 005be02d
    MOV dword ptr [EAX],ECX             ; 005be030
    MOV AX,word ptr [ECX + -0x4]        ; 005be032
    MOV EDI,dword ptr [ECX + -0x8]      ; 005be036
    JMP 0x005be06b                      ; 005be039
        ;   XREF to: 005be06b (UNCONDITIONAL_JUMP)  ; LAB_005be06b
    TEST DL,0x8                         ; 005be03b
        ;   Label: LAB_005be03b
    JZ 0x005be05b                       ; 005be03e
        ;   XREF to: 005be05b (CONDITIONAL_JUMP)  ; LAB_005be05b
    MOV EAX,dword ptr [ESP + 0x44]      ; 005be040
    MOV EBX,dword ptr [EAX]             ; 005be044
    ADD EBX,0x4                         ; 005be046
    MOV dword ptr [EAX],EBX             ; 005be049
    MOV AX,DS                           ; 005be04b
    MOV EDI,dword ptr [EBX + -0x4]      ; 005be04d
    MOV ESI,ESP                         ; 005be050
    MOV ES,AX                           ; 005be052
    MOVSD ES:EDI,ESI                    ; 005be054
    MOVSD ES:EDI,ESI                    ; 005be055
    JMP 0x005be10a                      ; 005be056
        ;   XREF to: 005be10a (UNCONDITIONAL_JUMP)  ; LAB_005be10a
    MOV EAX,dword ptr [ESP + 0x44]      ; 005be05b
        ;   Label: LAB_005be05b
    MOV EDX,dword ptr [EAX]             ; 005be05f
    ADD EDX,0x4                         ; 005be061
    MOV dword ptr [EAX],EDX             ; 005be064
    MOV AX,DS                           ; 005be066
    MOV EDI,dword ptr [EDX + -0x4]      ; 005be068
    MOV ESI,ESP                         ; 005be06b
        ;   Label: LAB_005be06b
    MOV ES,AX                           ; 005be06d
    MOVSD ES:EDI,ESI                    ; 005be06f
    MOVSD ES:EDI,ESI                    ; 005be070
    MOV EAX,EBP                         ; 005be071
    ADD ESP,0x28                        ; 005be073
    POP EBP                             ; 005be076
    POP ES                              ; 005be077
    POP EDI                             ; 005be078
    POP ESI                             ; 005be079
    POP EBX                             ; 005be07a
    RET                                 ; 005be07b
    CMP dword ptr [ESP + 0x1c],0x2d     ; 005be07c
        ;   Label: LAB_005be07c
    JNZ 0x005be087                      ; 005be081
        ;   XREF to: 005be087 (CONDITIONAL_JUMP)  ; LAB_005be087
    NEG dword ptr [ESP + 0x24]          ; 005be083
    TEST EBP,EBP                        ; 005be087
        ;   Label: LAB_005be087
    JLE 0x005be10a                      ; 005be089
        ;   XREF to: 005be10a (CONDITIONAL_JUMP)  ; LAB_005be10a
    MOV EAX,dword ptr [ESP + 0x40]      ; 005be08f
    MOV EBX,dword ptr [ESP + 0x20]      ; 005be093
    MOV DH,byte ptr [EAX + 0x10]        ; 005be097
    ADD EBP,EBX                         ; 005be09a
    TEST DH,0x1                         ; 005be09c
    JZ 0x005be10a                       ; 005be09f
        ;   XREF to: 005be10a (CONDITIONAL_JUMP)  ; LAB_005be10a
    TEST DH,0x4                         ; 005be0a1
    JZ 0x005be0b6                       ; 005be0a4
        ;   XREF to: 005be0b6 (CONDITIONAL_JUMP)  ; LAB_005be0b6
    MOV EAX,dword ptr [ESP + 0x44]      ; 005be0a6
    MOV EDI,dword ptr [EAX]             ; 005be0aa
    ADD EDI,0x8                         ; 005be0ac
    MOV dword ptr [EAX],EDI             ; 005be0af
    LES EAX,[EDI + -0x8]                ; 005be0b1
    JMP 0x005be0e1                      ; 005be0b4
        ;   XREF to: 005be0e1 (UNCONDITIONAL_JUMP)  ; LAB_005be0e1
    TEST DH,0x8                         ; 005be0b6
        ;   Label: LAB_005be0b6
    JZ 0x005be0cf                       ; 005be0b9
        ;   XREF to: 005be0cf (CONDITIONAL_JUMP)  ; LAB_005be0cf
    MOV EAX,dword ptr [ESP + 0x44]      ; 005be0bb
    MOV ESI,dword ptr [EAX]             ; 005be0bf
    ADD ESI,0x4                         ; 005be0c1
    MOV BX,DS                           ; 005be0c4
    MOV dword ptr [EAX],ESI             ; 005be0c6
    MOV ES,BX                           ; 005be0c8
    MOV EAX,dword ptr [ESI + -0x4]      ; 005be0ca
    JMP 0x005be0e1                      ; 005be0cd
        ;   XREF to: 005be0e1 (UNCONDITIONAL_JUMP)  ; LAB_005be0e1
    MOV EAX,dword ptr [ESP + 0x44]      ; 005be0cf
        ;   Label: LAB_005be0cf
    MOV ECX,dword ptr [EAX]             ; 005be0d3
    ADD ECX,0x4                         ; 005be0d5
    MOV BX,DS                           ; 005be0d8
    MOV dword ptr [EAX],ECX             ; 005be0da
    MOV ES,BX                           ; 005be0dc
    MOV EAX,dword ptr [ECX + -0x4]      ; 005be0de
    MOV EDX,dword ptr [ESP + 0x40]      ; 005be0e1
        ;   Label: LAB_005be0e1
    MOV CL,byte ptr [EDX + 0x10]        ; 005be0e5
    TEST CL,0x10                        ; 005be0e8
    JZ 0x005be100                       ; 005be0eb
        ;   XREF to: 005be100 (CONDITIONAL_JUMP)  ; LAB_005be100
    MOV EBX,dword ptr [ESP + 0x24]      ; 005be0ed
    MOV word ptr ES:[EAX],BX            ; 005be0f1
    MOV EAX,EBP                         ; 005be0f5
    ADD ESP,0x28                        ; 005be0f7
    POP EBP                             ; 005be0fa
    POP ES                              ; 005be0fb
    POP EDI                             ; 005be0fc
    POP ESI                             ; 005be0fd
    POP EBX                             ; 005be0fe
    RET                                 ; 005be0ff
    TEST CL,0x20                        ; 005be100
        ;   Label: LAB_005be100
    MOV EBX,dword ptr [ESP + 0x24]      ; 005be103
    MOV dword ptr ES:[EAX],EBX          ; 005be107
    MOV EAX,EBP                         ; 005be10a
        ;   Label: LAB_005be10a
    ADD ESP,0x28                        ; 005be10c
    POP EBP                             ; 005be10f
    POP ES                              ; 005be110
    POP EDI                             ; 005be111
    POP ESI                             ; 005be112
    POP EBX                             ; 005be113
    RET                                 ; 005be114

