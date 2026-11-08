; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043ec40(int param_1)
;
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
;   FUN_0043e6d0 at 0043e981
;   FUN_0043eea0 at 0043f15b
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005d6849
;   TerminatedCString s_Too_many_connecting_vert_005d685b
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ec40
        ;   Label: FUN_0043ec40
    PUSH ESI                            ; 0043ec41
    PUSH EDI                            ; 0043ec42
    PUSH EBP                            ; 0043ec43
    MOV EBP,ESP                         ; 0043ec44
    SUB ESP,0x44                        ; 0043ec46
    AND ESP,0xfffffff8                  ; 0043ec49
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ec4c
    XOR EDX,EDX                         ; 0043ec4f
    MOV ECX,dword ptr [EAX + 0x104]     ; 0043ec51
    MOV dword ptr [ESP + 0x34],EDX      ; 0043ec57
    TEST ECX,ECX                        ; 0043ec5b
    JLE 0x0043ed43                      ; 0043ec5d
        ;   XREF to: 0043ed43 (CONDITIONAL_JUMP)  ; LAB_0043ed43
    ADD EAX,0x398                       ; 0043ec63
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043ec68
    MOV dword ptr [ESP + 0x2c],EAX      ; 0043ec6c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ec70
    MOV dword ptr [ESP + 0x20],EAX      ; 0043ec73
    IMUL EAX,dword ptr [ESP + 0x34],0x11c ; 0043ec77
        ;   Label: LAB_0043ec77
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043ec7f
    MOV dword ptr [EDX + 0x3c8],0x0     ; 0043ec83
    XOR ESI,ESI                         ; 0043ec8d
    MOV dword ptr [EDX + 0x40c],0x0     ; 0043ec8f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043ec99
    MOV dword ptr [ESP + 0x24],ESI      ; 0043ec9c
    MOV EDI,dword ptr [EDX + 0x110]     ; 0043eca0
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043eca6
    TEST EDI,EDI                        ; 0043ecaa
    JLE 0x0043ed0d                      ; 0043ecac
        ;   XREF to: 0043ed0d (CONDITIONAL_JUMP)  ; LAB_0043ed0d
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0043ecae
    ADD EDX,EAX                         ; 0043ecb2
    MOV dword ptr [ESP + 0x28],ESI      ; 0043ecb4
    MOV dword ptr [ESP + 0x30],EDX      ; 0043ecb8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ecbc
        ;   Label: LAB_0043ecbc
    MOV EDX,dword ptr [ESP + 0x28]      ; 0043ecbf
    MOV EAX,dword ptr [EAX + 0x114]     ; 0043ecc3
    ADD EDX,EAX                         ; 0043ecc9
    MOV dword ptr [ESP + 0x40],EDX      ; 0043eccb
    MOV EDI,dword ptr [EDX + 0x4]       ; 0043eccf
    XOR EAX,EAX                         ; 0043ecd2
    TEST EDI,EDI                        ; 0043ecd4
    JLE 0x0043ece1                      ; 0043ecd6
        ;   XREF to: 0043ece1 (CONDITIONAL_JUMP)  ; LAB_0043ece1
    MOV EDI,dword ptr [ESP + 0x34]      ; 0043ecd8
    CMP EDI,dword ptr [EDX + 0x18]      ; 0043ecdc
        ;   Label: LAB_0043ecdc
    JNZ 0x0043ed4a                      ; 0043ecdf
        ;   XREF to: 0043ed4a (CONDITIONAL_JUMP)  ; LAB_0043ed4a
    MOV EDX,dword ptr [ESP + 0x40]      ; 0043ece1
        ;   Label: LAB_0043ece1
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043ece5
    CMP EAX,ECX                         ; 0043ece8
    JNZ 0x0043ed5b                      ; 0043ecea
        ;   XREF to: 0043ed5b (CONDITIONAL_JUMP)  ; LAB_0043ed5b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043ecec
        ;   Label: LAB_0043ecec
    MOV EDX,dword ptr [ESP + 0x24]      ; 0043ecf0
    ADD EAX,0x48                        ; 0043ecf4
    INC EDX                             ; 0043ecf7
    MOV dword ptr [ESP + 0x28],EAX      ; 0043ecf8
    MOV dword ptr [ESP + 0x24],EDX      ; 0043ecfc
    MOV EAX,EDX                         ; 0043ed00
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043ed02
    CMP EAX,dword ptr [EDX + 0x110]     ; 0043ed05
    JL 0x0043ecbc                       ; 0043ed0b
        ;   XREF to: 0043ecbc (CONDITIONAL_JUMP)  ; LAB_0043ecbc
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043ed0d
        ;   Label: LAB_0043ed0d
    MOV ESI,dword ptr [ESP + 0x20]      ; 0043ed11
    MOV EDI,dword ptr [ESP + 0x34]      ; 0043ed15
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043ed19
    ADD EBX,0x11c                       ; 0043ed1c
    ADD ESI,0x11c                       ; 0043ed22
    INC EDI                             ; 0043ed28
    MOV ECX,dword ptr [EDX + 0x104]     ; 0043ed29
    MOV dword ptr [ESP + 0x1c],EBX      ; 0043ed2f
    MOV dword ptr [ESP + 0x20],ESI      ; 0043ed33
    MOV dword ptr [ESP + 0x34],EDI      ; 0043ed37
    CMP EDI,ECX                         ; 0043ed3b
    JL 0x0043ec77                       ; 0043ed3d
        ;   XREF to: 0043ec77 (CONDITIONAL_JUMP)  ; LAB_0043ec77
    MOV ESP,EBP                         ; 0043ed43
        ;   Label: LAB_0043ed43
    POP EBP                             ; 0043ed45
    POP EDI                             ; 0043ed46
    POP ESI                             ; 0043ed47
    POP EBX                             ; 0043ed48
    RET                                 ; 0043ed49
    MOV ECX,dword ptr [ESP + 0x40]      ; 0043ed4a
        ;   Label: LAB_0043ed4a
    INC EAX                             ; 0043ed4e
    MOV ESI,dword ptr [ECX + 0x4]       ; 0043ed4f
    ADD EDX,0xc                         ; 0043ed52
    CMP EAX,ESI                         ; 0043ed55
    JL 0x0043ecdc                       ; 0043ed57
        ;   XREF to: 0043ecdc (CONDITIONAL_JUMP)  ; LAB_0043ecdc
    JMP 0x0043ece1                      ; 0043ed59
        ;   XREF to: 0043ece1 (UNCONDITIONAL_JUMP)  ; LAB_0043ece1
    XOR ESI,ESI                         ; 0043ed5b
        ;   Label: LAB_0043ed5b
    MOV dword ptr [ESP + 0x3c],ESI      ; 0043ed5d
    TEST ECX,ECX                        ; 0043ed61
    JLE 0x0043ecec                      ; 0043ed63
        ;   XREF to: 0043ecec (CONDITIONAL_JUMP)  ; LAB_0043ecec
    MOV dword ptr [ESP + 0x38],EDX      ; 0043ed65
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0043ed69
        ;   Label: LAB_0043ed69
    MOV ECX,dword ptr [ESP + 0x40]      ; 0043ed6d
    INC EDX                             ; 0043ed71
    MOV EDI,dword ptr [ECX + 0x4]       ; 0043ed72
    MOV EAX,EDX                         ; 0043ed75
    SAR EDX,0x1f                        ; 0043ed77
    IDIV EDI                            ; 0043ed7a
    IMUL EDX,EDX,0xc                    ; 0043ed7c
    MOV ESI,dword ptr [ESP + 0x38]      ; 0043ed7f
    ADD EDX,ECX                         ; 0043ed83
    MOV ESI,dword ptr [ESI + 0x18]      ; 0043ed85
    MOV ECX,dword ptr [EDX + 0x18]      ; 0043ed88
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043ed8b
    CMP ESI,EDX                         ; 0043ed8f
    JNZ 0x0043edcd                      ; 0043ed91
        ;   XREF to: 0043edcd (CONDITIONAL_JUMP)  ; LAB_0043edcd
    MOV EDX,dword ptr [EBX + 0x30]      ; 0043ed93
        ;   Label: LAB_0043ed93
    XOR EAX,EAX                         ; 0043ed96
    TEST EDX,EDX                        ; 0043ed98
    JLE 0x0043eda3                      ; 0043ed9a
        ;   XREF to: 0043eda3 (CONDITIONAL_JUMP)  ; LAB_0043eda3
    MOV EDX,EBX                         ; 0043ed9c
    CMP ECX,dword ptr [EDX + 0x34]      ; 0043ed9e
        ;   Label: LAB_0043ed9e
    JNZ 0x0043edd5                      ; 0043eda1
        ;   XREF to: 0043edd5 (CONDITIONAL_JUMP)  ; LAB_0043edd5
    CMP EAX,dword ptr [EBX + 0x30]      ; 0043eda3
        ;   Label: LAB_0043eda3
    JZ 0x0043ede2                       ; 0043eda6
        ;   XREF to: 0043ede2 (CONDITIONAL_JUMP)  ; LAB_0043ede2
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043eda8
        ;   Label: LAB_0043eda8
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0043edac
    ADD EAX,0xc                         ; 0043edb0
    INC EDX                             ; 0043edb3
    MOV dword ptr [ESP + 0x38],EAX      ; 0043edb4
    MOV dword ptr [ESP + 0x3c],EDX      ; 0043edb8
    MOV EAX,EDX                         ; 0043edbc
    MOV EDX,dword ptr [ESP + 0x40]      ; 0043edbe
    CMP EAX,dword ptr [EDX + 0x4]       ; 0043edc2
    JGE 0x0043ecec                      ; 0043edc5
        ;   XREF to: 0043ecec (CONDITIONAL_JUMP)  ; LAB_0043ecec
    JMP 0x0043ed69                      ; 0043edcb
        ;   XREF to: 0043ed69 (UNCONDITIONAL_JUMP)  ; LAB_0043ed69
    CMP ECX,EDX                         ; 0043edcd
        ;   Label: LAB_0043edcd
    JNZ 0x0043eda8                      ; 0043edcf
        ;   XREF to: 0043eda8 (CONDITIONAL_JUMP)  ; LAB_0043eda8
    MOV ECX,ESI                         ; 0043edd1
    JMP 0x0043ed93                      ; 0043edd3
        ;   XREF to: 0043ed93 (UNCONDITIONAL_JUMP)  ; LAB_0043ed93
    INC EAX                             ; 0043edd5
        ;   Label: LAB_0043edd5
    MOV ESI,dword ptr [EBX + 0x30]      ; 0043edd6
    ADD EDX,0x4                         ; 0043edd9
    CMP EAX,ESI                         ; 0043eddc
    JL 0x0043ed9e                       ; 0043edde
        ;   XREF to: 0043ed9e (CONDITIONAL_JUMP)  ; LAB_0043ed9e
    JMP 0x0043eda3                      ; 0043ede0
        ;   XREF to: 0043eda3 (UNCONDITIONAL_JUMP)  ; LAB_0043eda3
    IMUL EDX,ECX,0x11c                  ; 0043ede2
        ;   Label: LAB_0043ede2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ede8
    FLD float ptr [EBX + 0xc4]          ; 0043edeb
    FCOMP float ptr [EDX + EAX*0x1 + 0x45c] ; 0043edf1
    FNSTSW AX                           ; 0043edf8
    SAHF                                ; 0043edfa
    JA 0x0043eda8                       ; 0043edfb
        ;   XREF to: 0043eda8 (CONDITIONAL_JUMP)  ; LAB_0043eda8
    MOV EAX,dword ptr [EBX + 0x30]      ; 0043edfd
    MOV dword ptr [EBX + EAX*0x4 + 0x34],ECX ; 0043ee00
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043ee04
    ADD EAX,EDX                         ; 0043ee08
    MOV EDX,dword ptr [ESP + 0x30]      ; 0043ee0a
    MOV EDI,ESP                         ; 0043ee0e
    LEA ESI,[ESP + 0xc]                 ; 0043ee10
    FLD float ptr [EDX]                 ; 0043ee14
    FLD float ptr [EDX + 0x4]           ; 0043ee16
    FLD float ptr [EDX + 0x8]           ; 0043ee19
    FXCH ST2                            ; 0043ee1c
    FSUB float ptr [EAX]                ; 0043ee1e
    FXCH                                ; 0043ee20
    FSUB float ptr [EAX + 0x4]          ; 0043ee22
    FXCH ST2                            ; 0043ee25
    FSUB float ptr [EAX + 0x8]          ; 0043ee27
    FXCH                                ; 0043ee2a
    FSTP float ptr [ESP + 0xc]          ; 0043ee2c
    FXCH                                ; 0043ee30
    FSTP float ptr [ESP + 0x10]         ; 0043ee32
    FSTP float ptr [ESP + 0x14]         ; 0043ee36
    MOVSD ES:EDI,ESI                    ; 0043ee3a
    MOVSD ES:EDI,ESI                    ; 0043ee3b
    MOVSD ES:EDI,ESI                    ; 0043ee3c
    FLD float ptr [ESP + 0x4]           ; 0043ee3d
    FMUL ST0                            ; 0043ee41
    FLD float ptr [ESP]                 ; 0043ee43
    FMUL ST0                            ; 0043ee46
    FADDP                               ; 0043ee48
    FLD float ptr [ESP + 0x8]           ; 0043ee4a
    FMUL ST0                            ; 0043ee4e
    FADDP                               ; 0043ee50
    FSQRT                               ; 0043ee52
    MOV EAX,dword ptr [EBX + 0x30]      ; 0043ee54
    FSTP float ptr [ESP + 0x18]         ; 0043ee57
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043ee5b
    MOV dword ptr [EBX + EAX*0x4 + 0x78],EDX ; 0043ee5f
    MOV ECX,dword ptr [EBX + 0x30]      ; 0043ee63
    INC ECX                             ; 0043ee66
    MOV dword ptr [EBX + 0x30],ECX      ; 0043ee67
    CMP ECX,0xf                         ; 0043ee6a
    JLE 0x0043eda8                      ; 0043ee6d
        ;   XREF to: 0043eda8 (CONDITIONAL_JUMP)  ; LAB_0043eda8
    MOV EDI,0x5d6849                    ; 0043ee73 | = "..\\core\\cloth.cpp"
    MOV EAX,0x1c3                       ; 0043ee78
    PUSH 0x5d685b                       ; 0043ee7d | = "Too many connecting verticies"
    MOV dword ptr [0x01d1d400],EDI      ; 0043ee82 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0043ee88 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0043ee8d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0043ee92
    JMP 0x0043eda8                      ; 0043ee95
        ;   XREF to: 0043eda8 (UNCONDITIONAL_JUMP)  ; LAB_0043eda8

