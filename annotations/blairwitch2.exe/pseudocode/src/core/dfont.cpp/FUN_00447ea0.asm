; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447ea0(void)
;
;
; XREF[1]:
;   FUN_004e46c0 at 004e47f5
;
; Referenced Globals:
;   TerminatedCString s_core_dfont_cpp_005ced58
;   TerminatedCString s_Medium_font_object_not_a_005ced6a
;   TerminatedCString s_nocfont_raw_005ced8c
;   TerminatedCString s_core_dfont_cpp_005ced98
;   TerminatedCString s_Tiny_font_object_not_all_005cedaa
;   TerminatedCString s_nocsmall_raw_005cedca
;   TerminatedCString s_core_dfont_cpp_005cedd7
;   TerminatedCString s_Theme_font_object_not_al_005cede9
;   TerminatedCString s_menufont_raw_005cee0a
;   TerminatedCString s_core_dfont_cpp_005cee17
;   TerminatedCString s_Debug_font_object_not_al_005cee29
;   TerminatedCString s_fnte_pfd_RAW_005cee4a
;   TerminatedCString s_core_dfont_cpp_005cee57
;   TerminatedCString s_Console_font_object_not_005cee69
;   TerminatedCString s_fnte_f_RAW_005cee8c
;   ... and 30 more
;
; Called Functions:
;   FUN_004a7b70
;   FUN_004a7cd0
;   FUN_004a88d0
;   FUN_004ab5c0
;   FUN_004ab620
;   FUN_004e4500
;   FUN_0058df90
;   FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447ea0
        ;   Label: FUN_00447ea0
    PUSH ESI                            ; 00447ea1
    PUSH EDI                            ; 00447ea2
    PUSH EBP                            ; 00447ea3
    PUSH 0x4220                         ; 00447ea4
    CALL FUN_005b8be2                   ; 00447ea9
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 00447eae
    TEST EAX,EAX                        ; 00447eb1
    JNZ 0x00448386                      ; 00447eb3
        ;   XREF to: 00448386 (CONDITIONAL_JUMP)  ; LAB_00448386
    MOV [0x01511cb8],EAX                ; 00447eb9 | DAT_01511cb8
        ;   Label: LAB_00447eb9
    TEST EAX,EAX                        ; 00447ebe
    JZ 0x00448394                       ; 00447ec0
        ;   XREF to: 00448394 (CONDITIONAL_JUMP)  ; LAB_00448394
    PUSH 0x0                            ; 00447ec6
        ;   Label: LAB_00447ec6
    PUSH 0x1ae                          ; 00447ec8
    PUSH 0x136                          ; 00447ecd
    PUSH 0x5ced8c                       ; 00447ed2 | = "nocfont.raw"
    MOV EBX,dword ptr [0x01511cb8]      ; 00447ed7 | DAT_01511cb8
    PUSH EBX                            ; 00447edd
    CALL FUN_004a7cd0                   ; 00447ede
        ;   XREF to: 004a7cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7cd0()
    ADD ESP,0x14                        ; 00447ee3
    MOV ESI,dword ptr [0x01511cb8]      ; 00447ee6 | DAT_01511cb8
    PUSH ESI                            ; 00447eec
    CALL FUN_004a88d0                   ; 00447eed
        ;   XREF to: 004a88d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a88d0()
    ADD ESP,0x4                         ; 00447ef2
    PUSH 0x7e                           ; 00447ef5
    PUSH 0x20                           ; 00447ef7
    PUSH 0x3                            ; 00447ef9
    MOV EAX,[0x01511cb8]                ; 00447efb | DAT_01511cb8
    PUSH EAX                            ; 00447f00
    MOV dword ptr [EAX + 0x3668],0x8    ; 00447f01
    CALL FUN_004ab5c0                   ; 00447f0b
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 00447f10
    PUSH 0xdf                           ; 00447f13
    PUSH 0xc0                           ; 00447f18
    PUSH 0x1                            ; 00447f1d
    MOV EDI,dword ptr [0x01511cb8]      ; 00447f1f | DAT_01511cb8
    PUSH EDI                            ; 00447f25
    CALL FUN_004ab5c0                   ; 00447f26
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 00447f2b
    MOV EAX,[0x01511cb8]                ; 00447f2e | DAT_01511cb8
    PUSH 0x1                            ; 00447f33
    MOV dword ptr [EAX + 0x41fc],0x2    ; 00447f35
    PUSH EAX                            ; 00447f3f
    MOV dword ptr [EAX + 0x4200],0x1    ; 00447f40
    CALL FUN_004ab620                   ; 00447f4a
        ;   XREF to: 004ab620 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab620()
    ADD ESP,0x8                         ; 00447f4f
    PUSH 0x4220                         ; 00447f52
    CALL FUN_005b8be2                   ; 00447f57
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 00447f5c
    TEST EAX,EAX                        ; 00447f5f
    JZ 0x00447f6c                       ; 00447f61
        ;   XREF to: 00447f6c (CONDITIONAL_JUMP)  ; LAB_00447f6c
    PUSH EAX                            ; 00447f63
    CALL FUN_004a7b70                   ; 00447f64
        ;   XREF to: 004a7b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b70()
    ADD ESP,0x4                         ; 00447f69
    MOV [0x01511cbc],EAX                ; 00447f6c | DAT_01511cbc
        ;   Label: LAB_00447f6c
    TEST EAX,EAX                        ; 00447f71
    JZ 0x004483bc                       ; 00447f73
        ;   XREF to: 004483bc (CONDITIONAL_JUMP)  ; LAB_004483bc
    PUSH 0x0                            ; 00447f79
        ;   Label: LAB_00447f79
    PUSH 0x158                          ; 00447f7b
    PUSH 0xf8                           ; 00447f80
    PUSH 0x5cedca                       ; 00447f85 | = "nocsmall.raw"
    MOV EDX,dword ptr [0x01511cbc]      ; 00447f8a | DAT_01511cbc
    PUSH EDX                            ; 00447f90
    CALL FUN_004a7cd0                   ; 00447f91
        ;   XREF to: 004a7cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7cd0()
    ADD ESP,0x14                        ; 00447f96
    MOV ECX,dword ptr [0x01511cbc]      ; 00447f99 | DAT_01511cbc
    PUSH ECX                            ; 00447f9f
    CALL FUN_004a88d0                   ; 00447fa0
        ;   XREF to: 004a88d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a88d0()
    ADD ESP,0x4                         ; 00447fa5
    PUSH 0x7e                           ; 00447fa8
    PUSH 0x20                           ; 00447faa
    PUSH 0x2                            ; 00447fac
    MOV EAX,[0x01511cbc]                ; 00447fae | DAT_01511cbc
    PUSH EAX                            ; 00447fb3
    MOV dword ptr [EAX + 0x3668],0x5    ; 00447fb4
    CALL FUN_004ab5c0                   ; 00447fbe
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 00447fc3
    MOV EAX,[0x01511cbc]                ; 00447fc6 | DAT_01511cbc
    PUSH 0x1                            ; 00447fcb
    MOV dword ptr [EAX + 0x41fc],0x2    ; 00447fcd
    PUSH EAX                            ; 00447fd7
    MOV dword ptr [EAX + 0x4200],0x1    ; 00447fd8
    CALL FUN_004ab620                   ; 00447fe2
        ;   XREF to: 004ab620 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab620()
    ADD ESP,0x8                         ; 00447fe7
    PUSH 0x4220                         ; 00447fea
    CALL FUN_005b8be2                   ; 00447fef
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 00447ff4
    TEST EAX,EAX                        ; 00447ff7
    JZ 0x00448004                       ; 00447ff9
        ;   XREF to: 00448004 (CONDITIONAL_JUMP)  ; LAB_00448004
    PUSH EAX                            ; 00447ffb
    CALL FUN_004a7b70                   ; 00447ffc
        ;   XREF to: 004a7b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b70()
    ADD ESP,0x4                         ; 00448001
    MOV [0x01511cc0],EAX                ; 00448004 | DAT_01511cc0
        ;   Label: LAB_00448004
    TEST EAX,EAX                        ; 00448009
    JZ 0x004483e3                       ; 0044800b
        ;   XREF to: 004483e3 (CONDITIONAL_JUMP)  ; LAB_004483e3
    PUSH 0x0                            ; 00448011
        ;   Label: LAB_00448011
    PUSH 0x23f                          ; 00448013
    PUSH 0xfa                           ; 00448018
    PUSH 0x5cee0a                       ; 0044801d | = "menufont.raw"
    MOV EDI,dword ptr [0x01511cc0]      ; 00448022 | DAT_01511cc0
    PUSH EDI                            ; 00448028
    CALL FUN_004a7cd0                   ; 00448029
        ;   XREF to: 004a7cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7cd0()
    ADD ESP,0x14                        ; 0044802e
    MOV EBP,dword ptr [0x01511cc0]      ; 00448031 | DAT_01511cc0
    PUSH EBP                            ; 00448037
    CALL FUN_004a88d0                   ; 00448038
        ;   XREF to: 004a88d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a88d0()
    ADD ESP,0x4                         ; 0044803d
    PUSH 0x7e                           ; 00448040
    PUSH 0x20                           ; 00448042
    PUSH 0x3                            ; 00448044
    MOV EAX,[0x01511cc0]                ; 00448046 | DAT_01511cc0
    PUSH EAX                            ; 0044804b
    MOV dword ptr [EAX + 0x3668],0x8    ; 0044804c
    CALL FUN_004ab5c0                   ; 00448056
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 0044805b
    PUSH 0xdf                           ; 0044805e
    PUSH 0xc0                           ; 00448063
    PUSH 0x0                            ; 00448068
    MOV EAX,[0x01511cc0]                ; 0044806a | DAT_01511cc0
    PUSH EAX                            ; 0044806f
    CALL FUN_004ab5c0                   ; 00448070
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 00448075
    PUSH 0xff                           ; 00448078
    PUSH 0xe0                           ; 0044807d
    PUSH 0x1                            ; 00448082
    MOV EDX,dword ptr [0x01511cc0]      ; 00448084 | DAT_01511cc0
    PUSH EDX                            ; 0044808a
    CALL FUN_004ab5c0                   ; 0044808b
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 00448090
    MOV EAX,[0x01511cc0]                ; 00448093 | DAT_01511cc0
    PUSH 0x1                            ; 00448098
    MOV dword ptr [EAX + 0x41fc],0x2    ; 0044809a
    PUSH EAX                            ; 004480a4
    MOV dword ptr [EAX + 0x4200],0x1    ; 004480a5
    CALL FUN_004ab620                   ; 004480af
        ;   XREF to: 004ab620 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab620()
    ADD ESP,0x8                         ; 004480b4
    PUSH 0x4220                         ; 004480b7
    CALL FUN_005b8be2                   ; 004480bc
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 004480c1
    TEST EAX,EAX                        ; 004480c4
    JZ 0x004480d1                       ; 004480c6
        ;   XREF to: 004480d1 (CONDITIONAL_JUMP)  ; LAB_004480d1
    PUSH EAX                            ; 004480c8
    CALL FUN_004a7b70                   ; 004480c9
        ;   XREF to: 004a7b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b70()
    ADD ESP,0x4                         ; 004480ce
    MOV [0x01511cc4],EAX                ; 004480d1 | DAT_01511cc4
        ;   Label: LAB_004480d1
    TEST EAX,EAX                        ; 004480d6
    JZ 0x0044840b                       ; 004480d8
        ;   XREF to: 0044840b (CONDITIONAL_JUMP)  ; LAB_0044840b
    PUSH 0x0                            ; 004480de
        ;   Label: LAB_004480de
    PUSH 0xec                           ; 004480e0
    PUSH 0x94                           ; 004480e5
    PUSH 0x5cee4a                       ; 004480ea | = "fnte_pfd.RAW"
    MOV ESI,dword ptr [0x01511cc4]      ; 004480ef | DAT_01511cc4
    PUSH ESI                            ; 004480f5
    CALL FUN_004a7cd0                   ; 004480f6
        ;   XREF to: 004a7cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7cd0()
    ADD ESP,0x14                        ; 004480fb
    MOV EDI,dword ptr [0x01511cc4]      ; 004480fe | DAT_01511cc4
    PUSH EDI                            ; 00448104
    CALL FUN_004a88d0                   ; 00448105
        ;   XREF to: 004a88d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a88d0()
    ADD ESP,0x4                         ; 0044810a
    PUSH 0x7e                           ; 0044810d
    PUSH 0x20                           ; 0044810f
    PUSH 0x3                            ; 00448111
    MOV EAX,[0x01511cc4]                ; 00448113 | DAT_01511cc4
    PUSH EAX                            ; 00448118
    MOV dword ptr [EAX + 0x3668],0x4    ; 00448119
    CALL FUN_004ab5c0                   ; 00448123
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 00448128
    MOV EAX,[0x01511cc4]                ; 0044812b | DAT_01511cc4
    PUSH 0x1                            ; 00448130
    MOV dword ptr [EAX + 0x41fc],0x1    ; 00448132
    PUSH EAX                            ; 0044813c
    MOV dword ptr [EAX + 0x4200],0x1    ; 0044813d
    CALL FUN_004ab620                   ; 00448147
        ;   XREF to: 004ab620 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab620()
    ADD ESP,0x8                         ; 0044814c
    MOV EAX,[0x01511cc4]                ; 0044814f | DAT_01511cc4
    PUSH 0x4220                         ; 00448154
    MOV [0x01c25590],EAX                ; 00448159 | DAT_01c25590
    CALL FUN_005b8be2                   ; 0044815e
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 00448163
    TEST EAX,EAX                        ; 00448166
    JZ 0x00448173                       ; 00448168
        ;   XREF to: 00448173 (CONDITIONAL_JUMP)  ; LAB_00448173
    PUSH EAX                            ; 0044816a
    CALL FUN_004a7b70                   ; 0044816b
        ;   XREF to: 004a7b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b70()
    ADD ESP,0x4                         ; 00448170
    MOV [0x01511cc8],EAX                ; 00448173 | DAT_01511cc8
        ;   Label: LAB_00448173
    TEST EAX,EAX                        ; 00448178
    JZ 0x00448433                       ; 0044817a
        ;   XREF to: 00448433 (CONDITIONAL_JUMP)  ; LAB_00448433
    PUSH 0xff                           ; 00448180
        ;   Label: LAB_00448180
    PUSH 0xec                           ; 00448185
    PUSH 0x94                           ; 0044818a
    PUSH 0x5cee8c                       ; 0044818f | = "fnte_f.RAW"
    MOV EDX,dword ptr [0x01511cc8]      ; 00448194 | DAT_01511cc8
    PUSH EDX                            ; 0044819a
    CALL FUN_004a7cd0                   ; 0044819b
        ;   XREF to: 004a7cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7cd0()
    ADD ESP,0x14                        ; 004481a0
    PUSH 0x7e                           ; 004481a3
    PUSH 0x20                           ; 004481a5
    PUSH 0x3                            ; 004481a7
    MOV EAX,[0x01511cc8]                ; 004481a9 | DAT_01511cc8
    PUSH EAX                            ; 004481ae
    MOV dword ptr [EAX + 0x3668],0x4    ; 004481af
    CALL FUN_004ab5c0                   ; 004481b9
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 004481be
    MOV EAX,[0x01511cc8]                ; 004481c1 | DAT_01511cc8
    PUSH 0x1                            ; 004481c6
    MOV dword ptr [EAX + 0x41fc],0x1    ; 004481c8
    PUSH EAX                            ; 004481d2
    MOV dword ptr [EAX + 0x4200],0x1    ; 004481d3
    CALL FUN_004ab620                   ; 004481dd
        ;   XREF to: 004ab620 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab620()
    ADD ESP,0x8                         ; 004481e2
    MOV EAX,[0x01511cc4]                ; 004481e5 | DAT_01511cc4
    PUSH 0x4220                         ; 004481ea
    MOV [0x01c25590],EAX                ; 004481ef | DAT_01c25590
    CALL FUN_005b8be2                   ; 004481f4
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 004481f9
    TEST EAX,EAX                        ; 004481fc
    JZ 0x00448209                       ; 004481fe
        ;   XREF to: 00448209 (CONDITIONAL_JUMP)  ; LAB_00448209
    PUSH EAX                            ; 00448200
    CALL FUN_004a7b70                   ; 00448201
        ;   XREF to: 004a7b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b70()
    ADD ESP,0x4                         ; 00448206
    MOV [0x01511ccc],EAX                ; 00448209 | DAT_01511ccc
        ;   Label: LAB_00448209
    TEST EAX,EAX                        ; 0044820e
    JZ 0x0044845a                       ; 00448210
        ;   XREF to: 0044845a (CONDITIONAL_JUMP)  ; LAB_0044845a
    PUSH 0x0                            ; 00448216
        ;   Label: LAB_00448216
    PUSH 0xec                           ; 00448218
    PUSH 0x94                           ; 0044821d
    PUSH 0x5ceeca                       ; 00448222 | = "micro.raw"
    MOV ESI,dword ptr [0x01511ccc]      ; 00448227 | DAT_01511ccc
    PUSH ESI                            ; 0044822d
    CALL FUN_004a7cd0                   ; 0044822e
        ;   XREF to: 004a7cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7cd0()
    ADD ESP,0x14                        ; 00448233
    MOV EDI,dword ptr [0x01511ccc]      ; 00448236 | DAT_01511ccc
    PUSH EDI                            ; 0044823c
    CALL FUN_004a88d0                   ; 0044823d
        ;   XREF to: 004a88d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a88d0()
    ADD ESP,0x4                         ; 00448242
    PUSH 0x7e                           ; 00448245
    PUSH 0x20                           ; 00448247
    PUSH 0x1                            ; 00448249
    MOV EAX,[0x01511ccc]                ; 0044824b | DAT_01511ccc
    PUSH EAX                            ; 00448250
    MOV dword ptr [EAX + 0x3668],0x4    ; 00448251
    CALL FUN_004ab5c0                   ; 0044825b
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 00448260
    MOV EAX,[0x01511ccc]                ; 00448263 | DAT_01511ccc
    PUSH 0x1                            ; 00448268
    MOV dword ptr [EAX + 0x41fc],0x1    ; 0044826a
    PUSH EAX                            ; 00448274
    MOV dword ptr [EAX + 0x4200],0x1    ; 00448275
    CALL FUN_004ab620                   ; 0044827f
        ;   XREF to: 004ab620 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab620()
    ADD ESP,0x8                         ; 00448284
    PUSH 0x4220                         ; 00448287
    CALL FUN_005b8be2                   ; 0044828c
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 00448291
    TEST EAX,EAX                        ; 00448294
    JZ 0x004482a1                       ; 00448296
        ;   XREF to: 004482a1 (CONDITIONAL_JUMP)  ; LAB_004482a1
    PUSH EAX                            ; 00448298
    CALL FUN_004a7b70                   ; 00448299
        ;   XREF to: 004a7b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b70()
    ADD ESP,0x4                         ; 0044829e
    MOV [0x01511cd0],EAX                ; 004482a1 | DAT_01511cd0
        ;   Label: LAB_004482a1
    TEST EAX,EAX                        ; 004482a6
    JNZ 0x004482cc                      ; 004482a8
        ;   XREF to: 004482cc (CONDITIONAL_JUMP)  ; LAB_004482cc
    MOV EBP,0x5ceed4                    ; 004482aa | = "..\\core\\dfont.cpp"
    MOV EAX,0xa5                        ; 004482af
    PUSH 0x5ceee6                       ; 004482b4 | = "Hand font object not allocated!"
    MOV dword ptr [0x01d046a0],EBP      ; 004482b9 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004482bf | DAT_01d046a4
    CALL FUN_004e4500                   ; 004482c4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004482c9
    PUSH 0x0                            ; 004482cc
        ;   Label: LAB_004482cc
    PUSH 0x100                          ; 004482ce
    PUSH 0x100                          ; 004482d3
    PUSH 0x5cef06                       ; 004482d8 | = "dochand.raw"
    MOV EDX,dword ptr [0x01511cd0]      ; 004482dd | DAT_01511cd0
    PUSH EDX                            ; 004482e3
    CALL FUN_004a7cd0                   ; 004482e4
        ;   XREF to: 004a7cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7cd0()
    ADD ESP,0x14                        ; 004482e9
    MOV ECX,dword ptr [0x01511cd0]      ; 004482ec | DAT_01511cd0
    PUSH ECX                            ; 004482f2
    CALL FUN_004a88d0                   ; 004482f3
        ;   XREF to: 004a88d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a88d0()
    ADD ESP,0x4                         ; 004482f8
    PUSH 0x7e                           ; 004482fb
    PUSH 0x20                           ; 004482fd
    PUSH 0x3                            ; 004482ff
    MOV EAX,[0x01511cd0]                ; 00448301 | DAT_01511cd0
    PUSH EAX                            ; 00448306
    MOV dword ptr [EAX + 0x3668],0x8    ; 00448307
    CALL FUN_004ab5c0                   ; 00448311
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 00448316
    PUSH 0xdf                           ; 00448319
    PUSH 0xc0                           ; 0044831e
    PUSH 0x0                            ; 00448323
    MOV EBX,dword ptr [0x01511cd0]      ; 00448325 | DAT_01511cd0
    PUSH EBX                            ; 0044832b
    CALL FUN_004ab5c0                   ; 0044832c
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 00448331
    PUSH 0xff                           ; 00448334
    PUSH 0xe0                           ; 00448339
    PUSH 0x1                            ; 0044833e
    MOV ESI,dword ptr [0x01511cd0]      ; 00448340 | DAT_01511cd0
    PUSH ESI                            ; 00448346
    CALL FUN_004ab5c0                   ; 00448347
        ;   XREF to: 004ab5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab5c0()
    ADD ESP,0x10                        ; 0044834c
    MOV EAX,[0x01511cd0]                ; 0044834f | DAT_01511cd0
    PUSH 0x1                            ; 00448354
    MOV dword ptr [EAX + 0x41fc],0x2    ; 00448356
    PUSH EAX                            ; 00448360
    MOV dword ptr [EAX + 0x4200],0x1    ; 00448361
    CALL FUN_004ab620                   ; 0044836b
        ;   XREF to: 004ab620 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab620()
    MOV EDI,dword ptr [0x01d63250]      ; 00448370 | DAT_01d63250
    ADD ESP,0x8                         ; 00448376
    TEST EDI,EDI                        ; 00448379
    JNZ 0x00448482                      ; 0044837b
        ;   XREF to: 00448482 (CONDITIONAL_JUMP)  ; LAB_00448482
    POP EBP                             ; 00448381
    POP EDI                             ; 00448382
    POP ESI                             ; 00448383
    POP EBX                             ; 00448384
    RET                                 ; 00448385
    PUSH EAX                            ; 00448386
        ;   Label: LAB_00448386
    CALL FUN_004a7b70                   ; 00448387
        ;   XREF to: 004a7b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7b70()
    ADD ESP,0x4                         ; 0044838c
    JMP 0x00447eb9                      ; 0044838f
        ;   XREF to: 00447eb9 (UNCONDITIONAL_JUMP)  ; LAB_00447eb9
    MOV EDX,0x5ced58                    ; 00448394 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_00448394
    MOV ECX,0x41                        ; 00448399
    PUSH 0x5ced6a                       ; 0044839e | = "Medium font object not allocated!"
    MOV dword ptr [0x01d046a0],EDX      ; 004483a3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004483a9 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004483af
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004483b4
    JMP 0x00447ec6                      ; 004483b7
        ;   XREF to: 00447ec6 (UNCONDITIONAL_JUMP)  ; LAB_00447ec6
    MOV EBP,0x5ced98                    ; 004483bc | = "..\\core\\dfont.cpp"
        ;   Label: LAB_004483bc
    MOV EAX,0x51                        ; 004483c1
    PUSH 0x5cedaa                       ; 004483c6 | = "Tiny font object not allocated!"
    MOV dword ptr [0x01d046a0],EBP      ; 004483cb | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004483d1 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004483d6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004483db
    JMP 0x00447f79                      ; 004483de
        ;   XREF to: 00447f79 (UNCONDITIONAL_JUMP)  ; LAB_00447f79
    MOV EBX,0x5cedd7                    ; 004483e3 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_004483e3
    MOV ESI,0x60                        ; 004483e8
    PUSH 0x5cede9                       ; 004483ed | = "Theme font object not allocated!"
    MOV dword ptr [0x01d046a0],EBX      ; 004483f2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004483f8 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004483fe
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00448403
    JMP 0x00448011                      ; 00448406
        ;   XREF to: 00448011 (UNCONDITIONAL_JUMP)  ; LAB_00448011
    MOV ECX,0x5cee17                    ; 0044840b | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0044840b
    MOV EBX,0x71                        ; 00448410
    PUSH 0x5cee29                       ; 00448415 | = "Debug font object not allocated!"
    MOV dword ptr [0x01d046a0],ECX      ; 0044841a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00448420 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00448426
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0044842b
    JMP 0x004480de                      ; 0044842e
        ;   XREF to: 004480de (UNCONDITIONAL_JUMP)  ; LAB_004480de
    MOV EBP,0x5cee57                    ; 00448433 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_00448433
    MOV EAX,0x84                        ; 00448438
    PUSH 0x5cee69                       ; 0044843d | = "Console font object not allocated!"
    MOV dword ptr [0x01d046a0],EBP      ; 00448442 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00448448 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0044844d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00448452
    JMP 0x00448180                      ; 00448455
        ;   XREF to: 00448180 (UNCONDITIONAL_JUMP)  ; LAB_00448180
    MOV ECX,0x5cee97                    ; 0044845a | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0044845a
    MOV EBX,0x96                        ; 0044845f
    PUSH 0x5ceea9                       ; 00448464 | = "Micro font object not allocated!"
    MOV dword ptr [0x01d046a0],ECX      ; 00448469 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0044846f | DAT_01d046a4
    CALL FUN_004e4500                   ; 00448475
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0044847a
    JMP 0x00448216                      ; 0044847d
        ;   XREF to: 00448216 (UNCONDITIONAL_JUMP)  ; LAB_00448216
    PUSH 0x6b80                         ; 00448482
        ;   Label: LAB_00448482
    CALL FUN_005b8be2                   ; 00448487
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 0044848c
    TEST EAX,EAX                        ; 0044848f
    JZ 0x004484a7                       ; 00448491
        ;   XREF to: 004484a7 (CONDITIONAL_JUMP)  ; LAB_004484a7
    PUSH 0x2                            ; 00448493
    PUSH 0x2                            ; 00448495
    PUSH 0xe                            ; 00448497
    PUSH 0x61b190                       ; 00448499 | DAT_0061b190
    PUSH EAX                            ; 0044849e
    CALL FUN_0058df90                   ; 0044849f
        ;   XREF to: 0058df90 (UNCONDITIONAL_CALL)  ; undefined FUN_0058df90()
    ADD ESP,0x14                        ; 004484a4
    MOV [0x01511cd4],EAX                ; 004484a7 | DAT_01511cd4
        ;   Label: LAB_004484a7
    TEST EAX,EAX                        ; 004484ac
    JNZ 0x004484d2                      ; 004484ae
        ;   XREF to: 004484d2 (CONDITIONAL_JUMP)  ; LAB_004484d2
    MOV EBP,0x5cef12                    ; 004484b0 | = "..\\core\\dfont.cpp"
    MOV EAX,0xb7                        ; 004484b5
    PUSH 0x5cef24                       ; 004484ba | = "initFonts - Can't allocate gMediumOSFont"
    MOV dword ptr [0x01d046a0],EBP      ; 004484bf | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004484c5 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004484ca
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004484cf
    MOV EAX,[0x01511cb8]                ; 004484d2 | DAT_01511cb8
        ;   Label: LAB_004484d2
    MOV EDX,dword ptr [0x01511cd4]      ; 004484d7 | DAT_01511cd4
    MOV dword ptr [EAX + 0x4210],0x1    ; 004484dd
    PUSH 0x6b80                         ; 004484e7
    MOV dword ptr [EAX + 0x4214],EDX    ; 004484ec
    CALL FUN_005b8be2                   ; 004484f2
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 004484f7
    TEST EAX,EAX                        ; 004484fa
    JZ 0x00448512                       ; 004484fc
        ;   XREF to: 00448512 (CONDITIONAL_JUMP)  ; LAB_00448512
    PUSH 0x0                            ; 004484fe
    PUSH 0x0                            ; 00448500
    PUSH 0x12                           ; 00448502
    PUSH 0x61b190                       ; 00448504 | DAT_0061b190
    PUSH EAX                            ; 00448509
    CALL FUN_0058df90                   ; 0044850a
        ;   XREF to: 0058df90 (UNCONDITIONAL_CALL)  ; undefined FUN_0058df90()
    ADD ESP,0x14                        ; 0044850f
    MOV [0x01511cdc],EAX                ; 00448512 | DAT_01511cdc
        ;   Label: LAB_00448512
    TEST EAX,EAX                        ; 00448517
    JNZ 0x0044853e                      ; 00448519
        ;   XREF to: 0044853e (CONDITIONAL_JUMP)  ; LAB_0044853e
    MOV EDX,0x5cef4d                    ; 0044851b | = "..\\core\\dfont.cpp"
    MOV ECX,0xbd                        ; 00448520
    PUSH 0x5cef5f                       ; 00448525 | = "initFonts - Can't allocate gThemeOSFont"
    MOV dword ptr [0x01d046a0],EDX      ; 0044852a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00448530 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00448536
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0044853b
    MOV EAX,[0x01511cc0]                ; 0044853e | DAT_01511cc0
        ;   Label: LAB_0044853e
    MOV EDX,dword ptr [0x01511cdc]      ; 00448543 | DAT_01511cdc
    MOV dword ptr [EAX + 0x4210],0x1    ; 00448549
    PUSH 0x6b80                         ; 00448553
    MOV dword ptr [EAX + 0x4214],EDX    ; 00448558
    CALL FUN_005b8be2                   ; 0044855e
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 00448563
    TEST EAX,EAX                        ; 00448566
    JZ 0x0044857e                       ; 00448568
        ;   XREF to: 0044857e (CONDITIONAL_JUMP)  ; LAB_0044857e
    PUSH 0x0                            ; 0044856a
    PUSH 0x0                            ; 0044856c
    PUSH 0xc                            ; 0044856e
    PUSH 0x61b190                       ; 00448570 | DAT_0061b190
    PUSH EAX                            ; 00448575
    CALL FUN_0058df90                   ; 00448576
        ;   XREF to: 0058df90 (UNCONDITIONAL_CALL)  ; undefined FUN_0058df90()
    ADD ESP,0x14                        ; 0044857b
    MOV [0x01511cd8],EAX                ; 0044857e | DAT_01511cd8
        ;   Label: LAB_0044857e
    TEST EAX,EAX                        ; 00448583
    JNZ 0x004485aa                      ; 00448585
        ;   XREF to: 004485aa (CONDITIONAL_JUMP)  ; LAB_004485aa
    MOV EBX,0x5cef87                    ; 00448587 | = "..\\core\\dfont.cpp"
    MOV ESI,0xc3                        ; 0044858c
    PUSH 0x5cef99                       ; 00448591 | = "initFonts - Can't allocate gTinyOSFont"
    MOV dword ptr [0x01d046a0],EBX      ; 00448596 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044859c | DAT_01d046a4
    CALL FUN_004e4500                   ; 004485a2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004485a7
    MOV EAX,[0x01511cbc]                ; 004485aa | DAT_01511cbc
        ;   Label: LAB_004485aa
    MOV EDX,dword ptr [0x01511cd8]      ; 004485af | DAT_01511cd8
    MOV dword ptr [EAX + 0x4210],0x1    ; 004485b5
    PUSH 0x6b80                         ; 004485bf
    MOV dword ptr [EAX + 0x4214],EDX    ; 004485c4
    CALL FUN_005b8be2                   ; 004485ca
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 004485cf
    TEST EAX,EAX                        ; 004485d2
    JZ 0x004485ea                       ; 004485d4
        ;   XREF to: 004485ea (CONDITIONAL_JUMP)  ; LAB_004485ea
    PUSH 0x0                            ; 004485d6
    PUSH 0x0                            ; 004485d8
    PUSH 0xa                            ; 004485da
    PUSH 0x61b190                       ; 004485dc | DAT_0061b190
    PUSH EAX                            ; 004485e1
    CALL FUN_0058df90                   ; 004485e2
        ;   XREF to: 0058df90 (UNCONDITIONAL_CALL)  ; undefined FUN_0058df90()
    ADD ESP,0x14                        ; 004485e7
    MOV [0x01511ce0],EAX                ; 004485ea | DAT_01511ce0
        ;   Label: LAB_004485ea
    TEST EAX,EAX                        ; 004485ef
    JNZ 0x00448616                      ; 004485f1
        ;   XREF to: 00448616 (CONDITIONAL_JUMP)  ; LAB_00448616
    MOV EDI,0x5cefc0                    ; 004485f3 | = "..\\core\\dfont.cpp"
    MOV EBP,0xc9                        ; 004485f8
    PUSH 0x5cefd2                       ; 004485fd | = "initFonts - Can't allocate gDebugOSFont"
    MOV dword ptr [0x01d046a0],EDI      ; 00448602 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00448608 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0044860e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00448613
    MOV EAX,[0x01511cc4]                ; 00448616 | DAT_01511cc4
        ;   Label: LAB_00448616
    MOV EDX,dword ptr [0x01511ce0]      ; 0044861b | DAT_01511ce0
    MOV dword ptr [EAX + 0x4210],0x1    ; 00448621
    MOV dword ptr [EAX + 0x4214],EDX    ; 0044862b
    POP EBP                             ; 00448631
    POP EDI                             ; 00448632
    POP ESI                             ; 00448633
    POP EBX                             ; 00448634
    RET                                 ; 00448635

