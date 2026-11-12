; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_FUN_0043c8a0(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; Local Variables:
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
;   core_cloth.cpp_CCloth_load_FUN_0043c330 at 0043c5e1
;   core_cloth.cpp_FUN_0043cb00 at 0043cdbb
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005b90b9
;   TerminatedCString s_Too_many_connecting_vert_005b90cb
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c8a0
        ;   Label: core_cloth.cpp_FUN_0043c8a0
    PUSH ESI                            ; 0043c8a1
    PUSH EDI                            ; 0043c8a2
    PUSH EBP                            ; 0043c8a3
    MOV EBP,ESP                         ; 0043c8a4
    SUB ESP,0x44                        ; 0043c8a6
    AND ESP,0xfffffff8                  ; 0043c8a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043c8ac
    XOR EDX,EDX                         ; 0043c8af
    MOV ECX,dword ptr [EAX + 0x104]     ; 0043c8b1
    MOV dword ptr [ESP + 0x34],EDX      ; 0043c8b7
    TEST ECX,ECX                        ; 0043c8bb
    JLE 0x0043c9a3                      ; 0043c8bd
        ;   XREF to: 0043c9a3 (CONDITIONAL_JUMP)  ; LAB_0043c9a3
    ADD EAX,0x398                       ; 0043c8c3
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043c8c8
    MOV dword ptr [ESP + 0x2c],EAX      ; 0043c8cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043c8d0
    MOV dword ptr [ESP + 0x20],EAX      ; 0043c8d3
    IMUL EAX,dword ptr [ESP + 0x34],0x11c ; 0043c8d7
        ;   Label: LAB_0043c8d7
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043c8df
    MOV dword ptr [EDX + 0x3c8],0x0     ; 0043c8e3
    XOR ESI,ESI                         ; 0043c8ed
    MOV dword ptr [EDX + 0x40c],0x0     ; 0043c8ef
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043c8f9
    MOV dword ptr [ESP + 0x24],ESI      ; 0043c8fc
    MOV EDI,dword ptr [EDX + 0x110]     ; 0043c900
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043c906
    TEST EDI,EDI                        ; 0043c90a
    JLE 0x0043c96d                      ; 0043c90c
        ;   XREF to: 0043c96d (CONDITIONAL_JUMP)  ; LAB_0043c96d
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0043c90e
    ADD EDX,EAX                         ; 0043c912
    MOV dword ptr [ESP + 0x28],ESI      ; 0043c914
    MOV dword ptr [ESP + 0x30],EDX      ; 0043c918
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043c91c
        ;   Label: LAB_0043c91c
    MOV EDX,dword ptr [ESP + 0x28]      ; 0043c91f
    MOV EAX,dword ptr [EAX + 0x114]     ; 0043c923
    ADD EDX,EAX                         ; 0043c929
    MOV dword ptr [ESP + 0x40],EDX      ; 0043c92b
    MOV EDI,dword ptr [EDX + 0x4]       ; 0043c92f
    XOR EAX,EAX                         ; 0043c932
    TEST EDI,EDI                        ; 0043c934
    JLE 0x0043c941                      ; 0043c936
        ;   XREF to: 0043c941 (CONDITIONAL_JUMP)  ; LAB_0043c941
    MOV EDI,dword ptr [ESP + 0x34]      ; 0043c938
    CMP EDI,dword ptr [EDX + 0x18]      ; 0043c93c
        ;   Label: LAB_0043c93c
    JNZ 0x0043c9aa                      ; 0043c93f
        ;   XREF to: 0043c9aa (CONDITIONAL_JUMP)  ; LAB_0043c9aa
    MOV EDX,dword ptr [ESP + 0x40]      ; 0043c941
        ;   Label: LAB_0043c941
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043c945
    CMP EAX,ECX                         ; 0043c948
    JNZ 0x0043c9bb                      ; 0043c94a
        ;   XREF to: 0043c9bb (CONDITIONAL_JUMP)  ; LAB_0043c9bb
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043c94c
        ;   Label: LAB_0043c94c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0043c950
    ADD EAX,0x48                        ; 0043c954
    INC EDX                             ; 0043c957
    MOV dword ptr [ESP + 0x28],EAX      ; 0043c958
    MOV dword ptr [ESP + 0x24],EDX      ; 0043c95c
    MOV EAX,EDX                         ; 0043c960
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043c962
    CMP EAX,dword ptr [EDX + 0x110]     ; 0043c965
    JL 0x0043c91c                       ; 0043c96b
        ;   XREF to: 0043c91c (CONDITIONAL_JUMP)  ; LAB_0043c91c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043c96d
        ;   Label: LAB_0043c96d
    MOV ESI,dword ptr [ESP + 0x20]      ; 0043c971
    MOV EDI,dword ptr [ESP + 0x34]      ; 0043c975
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043c979
    ADD EBX,0x11c                       ; 0043c97c
    ADD ESI,0x11c                       ; 0043c982
    INC EDI                             ; 0043c988
    MOV ECX,dword ptr [EDX + 0x104]     ; 0043c989
    MOV dword ptr [ESP + 0x1c],EBX      ; 0043c98f
    MOV dword ptr [ESP + 0x20],ESI      ; 0043c993
    MOV dword ptr [ESP + 0x34],EDI      ; 0043c997
    CMP EDI,ECX                         ; 0043c99b
    JL 0x0043c8d7                       ; 0043c99d
        ;   XREF to: 0043c8d7 (CONDITIONAL_JUMP)  ; LAB_0043c8d7
    MOV ESP,EBP                         ; 0043c9a3
        ;   Label: LAB_0043c9a3
    POP EBP                             ; 0043c9a5
    POP EDI                             ; 0043c9a6
    POP ESI                             ; 0043c9a7
    POP EBX                             ; 0043c9a8
    RET                                 ; 0043c9a9
    MOV ECX,dword ptr [ESP + 0x40]      ; 0043c9aa
        ;   Label: LAB_0043c9aa
    INC EAX                             ; 0043c9ae
    MOV ESI,dword ptr [ECX + 0x4]       ; 0043c9af
    ADD EDX,0xc                         ; 0043c9b2
    CMP EAX,ESI                         ; 0043c9b5
    JL 0x0043c93c                       ; 0043c9b7
        ;   XREF to: 0043c93c (CONDITIONAL_JUMP)  ; LAB_0043c93c
    JMP 0x0043c941                      ; 0043c9b9
        ;   XREF to: 0043c941 (UNCONDITIONAL_JUMP)  ; LAB_0043c941
    XOR ESI,ESI                         ; 0043c9bb
        ;   Label: LAB_0043c9bb
    MOV dword ptr [ESP + 0x3c],ESI      ; 0043c9bd
    TEST ECX,ECX                        ; 0043c9c1
    JLE 0x0043c94c                      ; 0043c9c3
        ;   XREF to: 0043c94c (CONDITIONAL_JUMP)  ; LAB_0043c94c
    MOV dword ptr [ESP + 0x38],EDX      ; 0043c9c5
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0043c9c9
        ;   Label: LAB_0043c9c9
    MOV ECX,dword ptr [ESP + 0x40]      ; 0043c9cd
    INC EDX                             ; 0043c9d1
    MOV EDI,dword ptr [ECX + 0x4]       ; 0043c9d2
    MOV EAX,EDX                         ; 0043c9d5
    SAR EDX,0x1f                        ; 0043c9d7
    IDIV EDI                            ; 0043c9da
    IMUL EDX,EDX,0xc                    ; 0043c9dc
    MOV ESI,dword ptr [ESP + 0x38]      ; 0043c9df
    ADD EDX,ECX                         ; 0043c9e3
    MOV ESI,dword ptr [ESI + 0x18]      ; 0043c9e5
    MOV ECX,dword ptr [EDX + 0x18]      ; 0043c9e8
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043c9eb
    CMP ESI,EDX                         ; 0043c9ef
    JNZ 0x0043ca2d                      ; 0043c9f1
        ;   XREF to: 0043ca2d (CONDITIONAL_JUMP)  ; LAB_0043ca2d
    MOV EDX,dword ptr [EBX + 0x30]      ; 0043c9f3
        ;   Label: LAB_0043c9f3
    XOR EAX,EAX                         ; 0043c9f6
    TEST EDX,EDX                        ; 0043c9f8
    JLE 0x0043ca03                      ; 0043c9fa
        ;   XREF to: 0043ca03 (CONDITIONAL_JUMP)  ; LAB_0043ca03
    MOV EDX,EBX                         ; 0043c9fc
    CMP ECX,dword ptr [EDX + 0x34]      ; 0043c9fe
        ;   Label: LAB_0043c9fe
    JNZ 0x0043ca35                      ; 0043ca01
        ;   XREF to: 0043ca35 (CONDITIONAL_JUMP)  ; LAB_0043ca35
    CMP EAX,dword ptr [EBX + 0x30]      ; 0043ca03
        ;   Label: LAB_0043ca03
    JZ 0x0043ca42                       ; 0043ca06
        ;   XREF to: 0043ca42 (CONDITIONAL_JUMP)  ; LAB_0043ca42
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043ca08
        ;   Label: LAB_0043ca08
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0043ca0c
    ADD EAX,0xc                         ; 0043ca10
    INC EDX                             ; 0043ca13
    MOV dword ptr [ESP + 0x38],EAX      ; 0043ca14
    MOV dword ptr [ESP + 0x3c],EDX      ; 0043ca18
    MOV EAX,EDX                         ; 0043ca1c
    MOV EDX,dword ptr [ESP + 0x40]      ; 0043ca1e
    CMP EAX,dword ptr [EDX + 0x4]       ; 0043ca22
    JGE 0x0043c94c                      ; 0043ca25
        ;   XREF to: 0043c94c (CONDITIONAL_JUMP)  ; LAB_0043c94c
    JMP 0x0043c9c9                      ; 0043ca2b
        ;   XREF to: 0043c9c9 (UNCONDITIONAL_JUMP)  ; LAB_0043c9c9
    CMP ECX,EDX                         ; 0043ca2d
        ;   Label: LAB_0043ca2d
    JNZ 0x0043ca08                      ; 0043ca2f
        ;   XREF to: 0043ca08 (CONDITIONAL_JUMP)  ; LAB_0043ca08
    MOV ECX,ESI                         ; 0043ca31
    JMP 0x0043c9f3                      ; 0043ca33
        ;   XREF to: 0043c9f3 (UNCONDITIONAL_JUMP)  ; LAB_0043c9f3
    INC EAX                             ; 0043ca35
        ;   Label: LAB_0043ca35
    MOV ESI,dword ptr [EBX + 0x30]      ; 0043ca36
    ADD EDX,0x4                         ; 0043ca39
    CMP EAX,ESI                         ; 0043ca3c
    JL 0x0043c9fe                       ; 0043ca3e
        ;   XREF to: 0043c9fe (CONDITIONAL_JUMP)  ; LAB_0043c9fe
    JMP 0x0043ca03                      ; 0043ca40
        ;   XREF to: 0043ca03 (UNCONDITIONAL_JUMP)  ; LAB_0043ca03
    IMUL EDX,ECX,0x11c                  ; 0043ca42
        ;   Label: LAB_0043ca42
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ca48
    FLD float ptr [EBX + 0xc4]          ; 0043ca4b
    FCOMP float ptr [EDX + EAX*0x1 + 0x45c] ; 0043ca51
    FNSTSW AX                           ; 0043ca58
    SAHF                                ; 0043ca5a
    JA 0x0043ca08                       ; 0043ca5b
        ;   XREF to: 0043ca08 (CONDITIONAL_JUMP)  ; LAB_0043ca08
    MOV EAX,dword ptr [EBX + 0x30]      ; 0043ca5d
    MOV dword ptr [EBX + EAX*0x4 + 0x34],ECX ; 0043ca60
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043ca64
    ADD EAX,EDX                         ; 0043ca68
    MOV EDX,dword ptr [ESP + 0x30]      ; 0043ca6a
    MOV EDI,ESP                         ; 0043ca6e
    LEA ESI,[ESP + 0xc]                 ; 0043ca70
    FLD float ptr [EDX]                 ; 0043ca74
    FLD float ptr [EDX + 0x4]           ; 0043ca76
    FLD float ptr [EDX + 0x8]           ; 0043ca79
    FXCH ST2                            ; 0043ca7c
    FSUB float ptr [EAX]                ; 0043ca7e
    FXCH                                ; 0043ca80
    FSUB float ptr [EAX + 0x4]          ; 0043ca82
    FXCH ST2                            ; 0043ca85
    FSUB float ptr [EAX + 0x8]          ; 0043ca87
    FXCH                                ; 0043ca8a
    FSTP float ptr [ESP + 0xc]          ; 0043ca8c
    FXCH                                ; 0043ca90
    FSTP float ptr [ESP + 0x10]         ; 0043ca92
    FSTP float ptr [ESP + 0x14]         ; 0043ca96
    MOVSD ES:EDI,ESI                    ; 0043ca9a
    MOVSD ES:EDI,ESI                    ; 0043ca9b
    MOVSD ES:EDI,ESI                    ; 0043ca9c
    FLD float ptr [ESP + 0x4]           ; 0043ca9d
    FMUL ST0                            ; 0043caa1
    FLD float ptr [ESP]                 ; 0043caa3
    FMUL ST0                            ; 0043caa6
    FADDP                               ; 0043caa8
    FLD float ptr [ESP + 0x8]           ; 0043caaa
    FMUL ST0                            ; 0043caae
    FADDP                               ; 0043cab0
    FSQRT                               ; 0043cab2
    MOV EAX,dword ptr [EBX + 0x30]      ; 0043cab4
    FSTP float ptr [ESP + 0x18]         ; 0043cab7
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043cabb
    MOV dword ptr [EBX + EAX*0x4 + 0x78],EDX ; 0043cabf
    MOV ECX,dword ptr [EBX + 0x30]      ; 0043cac3
    INC ECX                             ; 0043cac6
    MOV dword ptr [EBX + 0x30],ECX      ; 0043cac7
    CMP ECX,0xf                         ; 0043caca
    JLE 0x0043ca08                      ; 0043cacd
        ;   XREF to: 0043ca08 (CONDITIONAL_JUMP)  ; LAB_0043ca08
    MOV EDI,0x5b90b9                    ; 0043cad3 | = "..\\core\\cloth.cpp"
    MOV EAX,0x1c3                       ; 0043cad8
    PUSH 0x5b90cb                       ; 0043cadd | = "Too many connecting verticies"
    MOV dword ptr [0x01d71de0],EDI      ; 0043cae2 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0043cae8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043caed
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0043caf2
    JMP 0x0043ca08                      ; 0043caf5
        ;   XREF to: 0043ca08 (UNCONDITIONAL_JUMP)  ; LAB_0043ca08

