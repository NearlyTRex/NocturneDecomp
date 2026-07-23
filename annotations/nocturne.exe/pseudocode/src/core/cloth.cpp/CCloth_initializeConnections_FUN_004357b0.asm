; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_initializeConnections_FUN_004357b0(int param_1)
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_cloth.cpp_CCloth_load_FUN_00435240 at 004354f1
;   core_cloth.cpp_CCloth_setup_FUN_004359e0 at 00435c8b
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_0057adb6
;   TerminatedCString s_Too_many_connecting_vert_0057adc8
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004357b0
        ;   Label: core_cloth.cpp_CCloth_initializeConnections_FUN_004357b0
    PUSH ESI                            ; 004357b1
    PUSH EDI                            ; 004357b2
    PUSH EBP                            ; 004357b3
    SUB ESP,0x2c                        ; 004357b4
    MOV EAX,dword ptr [ESP + 0x40]      ; 004357b7
    XOR EDX,EDX                         ; 004357bb
    MOV ECX,dword ptr [EAX + 0x104]     ; 004357bd
    MOV dword ptr [ESP + 0x28],EDX      ; 004357c3
    TEST ECX,ECX                        ; 004357c7
    JLE 0x004358ae                      ; 004357c9
        ;   XREF to: 004358ae (CONDITIONAL_JUMP)  ; LAB_004358ae
    ADD EAX,0x398                       ; 004357cf
    MOV dword ptr [ESP + 0x10],EAX      ; 004357d4
    MOV dword ptr [ESP + 0x20],EAX      ; 004357d8
    MOV EAX,dword ptr [ESP + 0x40]      ; 004357dc
    MOV dword ptr [ESP + 0x14],EAX      ; 004357e0
    IMUL EAX,dword ptr [ESP + 0x28],0x11c ; 004357e4
        ;   Label: LAB_004357e4
    MOV EDX,dword ptr [ESP + 0x14]      ; 004357ec
    MOV dword ptr [EDX + 0x3c8],0x0     ; 004357f0
    MOV dword ptr [EDX + 0x40c],0x0     ; 004357fa
    MOV EDX,dword ptr [ESP + 0x40]      ; 00435804
    MOV EBX,dword ptr [ESP + 0x10]      ; 00435808
    XOR ECX,ECX                         ; 0043580c
    MOV ESI,dword ptr [EDX + 0x110]     ; 0043580e
    MOV dword ptr [ESP + 0x18],ECX      ; 00435814
    TEST ESI,ESI                        ; 00435818
    JLE 0x00435877                      ; 0043581a
        ;   XREF to: 00435877 (CONDITIONAL_JUMP)  ; LAB_00435877
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043581c
    ADD EDX,EAX                         ; 00435820
    MOV dword ptr [ESP + 0x1c],ECX      ; 00435822
    MOV dword ptr [ESP + 0x24],EDX      ; 00435826
    MOV ESI,dword ptr [ESP + 0x40]      ; 0043582a
        ;   Label: LAB_0043582a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043582e
    MOV ESI,dword ptr [ESI + 0x114]     ; 00435832
    ADD ESI,EDI                         ; 00435838
    MOV EBP,dword ptr [ESI + 0x4]       ; 0043583a
    XOR EAX,EAX                         ; 0043583d
    TEST EBP,EBP                        ; 0043583f
    JLE 0x0043584e                      ; 00435841
        ;   XREF to: 0043584e (CONDITIONAL_JUMP)  ; LAB_0043584e
    MOV EDI,dword ptr [ESP + 0x28]      ; 00435843
    MOV EDX,ESI                         ; 00435847
    CMP EDI,dword ptr [EDX + 0x18]      ; 00435849
        ;   Label: LAB_00435849
    JNZ 0x004358b6                      ; 0043584c
        ;   XREF to: 004358b6 (CONDITIONAL_JUMP)  ; LAB_004358b6
    MOV EBP,dword ptr [ESI + 0x4]       ; 0043584e
        ;   Label: LAB_0043584e
    CMP EAX,EBP                         ; 00435851
    JNZ 0x004358c3                      ; 00435853
        ;   XREF to: 004358c3 (CONDITIONAL_JUMP)  ; LAB_004358c3
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00435855
        ;   Label: LAB_00435855
    MOV EBP,dword ptr [ESP + 0x18]      ; 00435859
    MOV EDX,dword ptr [ESP + 0x40]      ; 0043585d
    ADD EDI,0x48                        ; 00435861
    INC EBP                             ; 00435864
    MOV ECX,dword ptr [EDX + 0x110]     ; 00435865
    MOV dword ptr [ESP + 0x1c],EDI      ; 0043586b
    MOV dword ptr [ESP + 0x18],EBP      ; 0043586f
    CMP EBP,ECX                         ; 00435873
    JL 0x0043582a                       ; 00435875
        ;   XREF to: 0043582a (CONDITIONAL_JUMP)  ; LAB_0043582a
    MOV EBX,dword ptr [ESP + 0x10]      ; 00435877
        ;   Label: LAB_00435877
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043587b
    MOV EDI,dword ptr [ESP + 0x28]      ; 0043587f
    MOV EDX,dword ptr [ESP + 0x40]      ; 00435883
    ADD EBX,0x11c                       ; 00435887
    ADD ESI,0x11c                       ; 0043588d
    INC EDI                             ; 00435893
    MOV EBP,dword ptr [EDX + 0x104]     ; 00435894
    MOV dword ptr [ESP + 0x10],EBX      ; 0043589a
    MOV dword ptr [ESP + 0x14],ESI      ; 0043589e
    MOV dword ptr [ESP + 0x28],EDI      ; 004358a2
    CMP EDI,EBP                         ; 004358a6
    JL 0x004357e4                       ; 004358a8
        ;   XREF to: 004357e4 (CONDITIONAL_JUMP)  ; LAB_004357e4
    ADD ESP,0x2c                        ; 004358ae
        ;   Label: LAB_004358ae
    POP EBP                             ; 004358b1
    POP EDI                             ; 004358b2
    POP ESI                             ; 004358b3
    POP EBX                             ; 004358b4
    RET                                 ; 004358b5
    INC EAX                             ; 004358b6
        ;   Label: LAB_004358b6
    MOV ECX,dword ptr [ESI + 0x4]       ; 004358b7
    ADD EDX,0xc                         ; 004358ba
    CMP EAX,ECX                         ; 004358bd
    JL 0x00435849                       ; 004358bf
        ;   XREF to: 00435849 (CONDITIONAL_JUMP)  ; LAB_00435849
    JMP 0x0043584e                      ; 004358c1
        ;   XREF to: 0043584e (UNCONDITIONAL_JUMP)  ; LAB_0043584e
    XOR EDI,EDI                         ; 004358c3
        ;   Label: LAB_004358c3
    TEST EBP,EBP                        ; 004358c5
    JLE 0x00435855                      ; 004358c7
        ;   XREF to: 00435855 (CONDITIONAL_JUMP)  ; LAB_00435855
    MOV EBP,ESI                         ; 004358c9
    LEA EDX,[EDI + 0x1]                 ; 004358cb
        ;   Label: LAB_004358cb
    MOV EAX,EDX                         ; 004358ce
    SAR EDX,0x1f                        ; 004358d0
    IDIV dword ptr [ESI + 0x4]          ; 004358d3
    IMUL EDX,EDX,0xc                    ; 004358d6
    LEA EAX,[ESI + EDX*0x1]             ; 004358d9
    MOV ECX,dword ptr [EBP + 0x18]      ; 004358dc
    MOV EDX,dword ptr [ESP + 0x28]      ; 004358df
    MOV EAX,dword ptr [EAX + 0x18]      ; 004358e3
    CMP ECX,EDX                         ; 004358e6
    JNZ 0x00435912                      ; 004358e8
        ;   XREF to: 00435912 (CONDITIONAL_JUMP)  ; LAB_00435912
    MOV ECX,EAX                         ; 004358ea
    MOV EDX,dword ptr [EBX + 0x30]      ; 004358ec
        ;   Label: LAB_004358ec
    XOR EAX,EAX                         ; 004358ef
    TEST EDX,EDX                        ; 004358f1
    JLE 0x004358fc                      ; 004358f3
        ;   XREF to: 004358fc (CONDITIONAL_JUMP)  ; LAB_004358fc
    MOV EDX,EBX                         ; 004358f5
    CMP ECX,dword ptr [EDX + 0x34]      ; 004358f7
        ;   Label: LAB_004358f7
    JNZ 0x00435918                      ; 004358fa
        ;   XREF to: 00435918 (CONDITIONAL_JUMP)  ; LAB_00435918
    CMP EAX,dword ptr [EBX + 0x30]      ; 004358fc
        ;   Label: LAB_004358fc
    JZ 0x00435923                       ; 004358ff
        ;   XREF to: 00435923 (CONDITIONAL_JUMP)  ; LAB_00435923
    INC EDI                             ; 00435901
        ;   Label: LAB_00435901
    MOV EDX,dword ptr [ESI + 0x4]       ; 00435902
    ADD EBP,0xc                         ; 00435905
    CMP EDI,EDX                         ; 00435908
    JGE 0x00435855                      ; 0043590a
        ;   XREF to: 00435855 (CONDITIONAL_JUMP)  ; LAB_00435855
    JMP 0x004358cb                      ; 00435910
        ;   XREF to: 004358cb (UNCONDITIONAL_JUMP)  ; LAB_004358cb
    CMP EAX,EDX                         ; 00435912
        ;   Label: LAB_00435912
    JNZ 0x00435901                      ; 00435914
        ;   XREF to: 00435901 (CONDITIONAL_JUMP)  ; LAB_00435901
    JMP 0x004358ec                      ; 00435916
        ;   XREF to: 004358ec (UNCONDITIONAL_JUMP)  ; LAB_004358ec
    INC EAX                             ; 00435918
        ;   Label: LAB_00435918
    ADD EDX,0x4                         ; 00435919
    CMP EAX,dword ptr [EBX + 0x30]      ; 0043591c
    JL 0x004358f7                       ; 0043591f
        ;   XREF to: 004358f7 (CONDITIONAL_JUMP)  ; LAB_004358f7
    JMP 0x004358fc                      ; 00435921
        ;   XREF to: 004358fc (UNCONDITIONAL_JUMP)  ; LAB_004358fc
    IMUL EDX,ECX,0x11c                  ; 00435923
        ;   Label: LAB_00435923
    MOV EAX,dword ptr [ESP + 0x40]      ; 00435929
    FLD float ptr [EBX + 0xc4]          ; 0043592d
    FCOMP float ptr [EDX + EAX*0x1 + 0x45c] ; 00435933
    FNSTSW AX                           ; 0043593a
    SAHF                                ; 0043593c
    JA 0x00435901                       ; 0043593d
        ;   XREF to: 00435901 (CONDITIONAL_JUMP)  ; LAB_00435901
    MOV EAX,dword ptr [EBX + 0x30]      ; 0043593f
    MOV dword ptr [EBX + EAX*0x4 + 0x34],ECX ; 00435942
    MOV EAX,dword ptr [ESP + 0x20]      ; 00435946
    ADD EAX,EDX                         ; 0043594a
    MOV EDX,dword ptr [ESP + 0x24]      ; 0043594c
    FLD float ptr [EDX]                 ; 00435950
    FSUB float ptr [EAX]                ; 00435952
    FSTP float ptr [ESP]                ; 00435954
    FLD float ptr [EDX + 0x4]           ; 00435957
    FSUB float ptr [EAX + 0x4]          ; 0043595a
    FST float ptr [ESP + 0x4]           ; 0043595d
    FMUL float ptr [ESP + 0x4]          ; 00435961
    FLD float ptr [ESP]                 ; 00435965
    FMUL ST0                            ; 00435968
    FLD float ptr [EDX + 0x8]           ; 0043596a
    FSUB float ptr [EAX + 0x8]          ; 0043596d
    FXCH                                ; 00435970
    FADDP ST2,ST0                       ; 00435972
    FST float ptr [ESP + 0x8]           ; 00435974
    FMUL float ptr [ESP + 0x8]          ; 00435978
    FADDP                               ; 0043597c
    FSQRT                               ; 0043597e
    MOV EAX,dword ptr [EBX + 0x30]      ; 00435980
    FSTP float ptr [ESP + 0xc]          ; 00435983
    MOV EDX,dword ptr [ESP + 0xc]       ; 00435987
    MOV dword ptr [EBX + EAX*0x4 + 0x78],EDX ; 0043598b
    MOV ECX,dword ptr [EBX + 0x30]      ; 0043598f
    INC ECX                             ; 00435992
    MOV dword ptr [EBX + 0x30],ECX      ; 00435993
    CMP ECX,0xf                         ; 00435996
    JLE 0x00435901                      ; 00435999
        ;   XREF to: 00435901 (CONDITIONAL_JUMP)  ; LAB_00435901
    MOV EDX,0x57adb6                    ; 0043599f | = "..\\core\\cloth.cpp"
    MOV ECX,0x1c3                       ; 004359a4
    PUSH 0x57adc8                       ; 004359a9 | = "Too many connecting verticies"
    MOV dword ptr [0x01cc4800],EDX      ; 004359ae | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004359b4 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004359ba
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004359bf
    INC EDI                             ; 004359c2
    MOV EDX,dword ptr [ESI + 0x4]       ; 004359c3
    ADD EBP,0xc                         ; 004359c6
    CMP EDI,EDX                         ; 004359c9
    JGE 0x00435855                      ; 004359cb
        ;   XREF to: 00435855 (CONDITIONAL_JUMP)  ; LAB_00435855
    JMP 0x004358cb                      ; 004359d1
        ;   XREF to: 004358cb (UNCONDITIONAL_JUMP)  ; LAB_004358cb

