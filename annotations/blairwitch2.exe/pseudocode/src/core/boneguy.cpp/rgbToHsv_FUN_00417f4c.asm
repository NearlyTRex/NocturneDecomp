; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_rgbToHsv_FUN_00417f4c(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005cbfea
;   undefined4 DAT_005cbff2
;   undefined4 DAT_005cbffa
;   undefined4 DAT_005cc002
;   undefined4 DAT_005cc00a
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00417f4c
        ;   Label: core_boneguy.cpp_rgbToHsv_FUN_00417f4c
    PUSH EBX                            ; 00417f50
    PUSH EDI                            ; 00417f51
    PUSH EBP                            ; 00417f52
    MOV EBP,ESP                         ; 00417f53
    SUB ESP,0x40                        ; 00417f55
    AND ESP,0xfffffff8                  ; 00417f58
    MOV EAX,dword ptr [EBP + 0x10]      ; 00417f5b
    MOV EDX,ESI                         ; 00417f5e
    MOV ECX,dword ptr [EAX]             ; 00417f60
    MOV dword ptr [ESP + 0x3c],ECX      ; 00417f62
    MOV ECX,dword ptr [EAX + 0x4]       ; 00417f66
    MOV EAX,dword ptr [EAX + 0x8]       ; 00417f69
    MOV dword ptr [ESP + 0x38],ECX      ; 00417f6c
    MOV dword ptr [ESP + 0x34],EAX      ; 00417f70
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00417f74
    FLD float ptr [ESP + 0x38]          ; 00417f78
    MOV dword ptr [ESP + 0x30],EAX      ; 00417f7c
    FCOMP float ptr [ESP + 0x3c]        ; 00417f80
    FNSTSW AX                           ; 00417f84
    SAHF                                ; 00417f86
    JC 0x004180a9                       ; 00417f87
        ;   XREF to: 004180a9 (CONDITIONAL_JUMP)  ; LAB_004180a9
    FLD float ptr [ESP + 0x34]          ; 00417f8d
        ;   Label: LAB_00417f8d
    FCOMP float ptr [ESP + 0x30]        ; 00417f91
    FNSTSW AX                           ; 00417f95
    SAHF                                ; 00417f97
    JNC 0x00417fa2                      ; 00417f98
        ;   XREF to: 00417fa2 (CONDITIONAL_JUMP)  ; LAB_00417fa2
    MOV EAX,dword ptr [ESP + 0x34]      ; 00417f9a
    MOV dword ptr [ESP + 0x30],EAX      ; 00417f9e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00417fa2
        ;   Label: LAB_00417fa2
    FLD float ptr [ESP + 0x38]          ; 00417fa6
    MOV dword ptr [ESP + 0x10],EAX      ; 00417faa
    FCOMP float ptr [ESP + 0x3c]        ; 00417fae
    FNSTSW AX                           ; 00417fb2
    SAHF                                ; 00417fb4
    JBE 0x00417fbf                      ; 00417fb5
        ;   XREF to: 00417fbf (CONDITIONAL_JUMP)  ; LAB_00417fbf
    MOV EAX,dword ptr [ESP + 0x38]      ; 00417fb7
    MOV dword ptr [ESP + 0x10],EAX      ; 00417fbb
    FLD float ptr [ESP + 0x34]          ; 00417fbf
        ;   Label: LAB_00417fbf
    FCOMP float ptr [ESP + 0x10]        ; 00417fc3
    FNSTSW AX                           ; 00417fc7
    SAHF                                ; 00417fc9
    JBE 0x00417fd4                      ; 00417fca
        ;   XREF to: 00417fd4 (CONDITIONAL_JUMP)  ; LAB_00417fd4
    MOV EAX,dword ptr [ESP + 0x34]      ; 00417fcc
    MOV dword ptr [ESP + 0x10],EAX      ; 00417fd0
    FLD float ptr [ESP + 0x10]          ; 00417fd4
        ;   Label: LAB_00417fd4
    FLD ST0                             ; 00417fd8
    MOV EAX,dword ptr [ESP + 0x10]      ; 00417fda
    FLDZ                                ; 00417fde
    FXCH ST2                            ; 00417fe0
    FSUB float ptr [ESP + 0x30]         ; 00417fe2
    MOV dword ptr [ESP + 0x28],EAX      ; 00417fe6
    FSTP float ptr [ESP + 0x2c]         ; 00417fea
    FXCH                                ; 00417fee
    FCOMPP                              ; 00417ff0
    FNSTSW AX                           ; 00417ff2
    SAHF                                ; 00417ff4
    JNC 0x004180b2                      ; 00417ff5
        ;   XREF to: 004180b2 (CONDITIONAL_JUMP)  ; LAB_004180b2
    FLD float ptr [ESP + 0x2c]          ; 00417ffb
    FDIV float ptr [ESP + 0x10]         ; 00417fff
    FSTP float ptr [ESP + 0x8]          ; 00418003
    FLD float ptr [ESP + 0x8]           ; 00418007
        ;   Label: LAB_00418007
    FLDZ                                ; 0041800b
    FXCH                                ; 0041800d
    FSTP double ptr [ESP]               ; 0041800f
    FCOMP double ptr [ESP]              ; 00418012
    FNSTSW AX                           ; 00418015
    SAHF                                ; 00418017
    JNC 0x004180ef                      ; 00418018
        ;   XREF to: 004180ef (CONDITIONAL_JUMP)  ; LAB_004180ef
    FLD double ptr [ESP]                ; 0041801e
    FMUL double ptr [0x005cbfea]        ; 00418021 | DAT_005cbfea
    FLD float ptr [ESP + 0x3c]          ; 00418027
    FXCH                                ; 0041802b
    FSTP float ptr [ESP + 0x8]          ; 0041802d
    FCOMP float ptr [ESP + 0x10]        ; 00418031
    FNSTSW AX                           ; 00418035
    SAHF                                ; 00418037
    JZ 0x004180bd                       ; 00418038
        ;   XREF to: 004180bd (CONDITIONAL_JUMP)  ; LAB_004180bd
    FLD float ptr [ESP + 0x38]          ; 0041803e
    FCOMP float ptr [ESP + 0x10]        ; 00418042
    FNSTSW AX                           ; 00418046
    SAHF                                ; 00418048
    JZ 0x004180cb                       ; 00418049
        ;   XREF to: 004180cb (CONDITIONAL_JUMP)  ; LAB_004180cb
    FLD float ptr [ESP + 0x3c]          ; 0041804f
    FSUB float ptr [ESP + 0x38]         ; 00418053
    FDIV float ptr [ESP + 0x2c]         ; 00418057
    FADD double ptr [0x005cbff2]        ; 0041805b | DAT_005cbff2
    FSTP float ptr [ESP + 0xc]          ; 00418061
        ;   Label: LAB_00418061
    FLD float ptr [ESP + 0xc]           ; 00418065
    FLD ST0                             ; 00418069
    FMUL double ptr [0x005cc002]        ; 0041806b | DAT_005cc002
    FSTP ST1                            ; 00418071
    FST float ptr [ESP + 0xc]           ; 00418073
    FLDZ                                ; 00418077
    FCOMPP                              ; 00418079
    FNSTSW AX                           ; 0041807b
    SAHF                                ; 0041807d
    JA 0x004180df                       ; 0041807e
        ;   XREF to: 004180df (CONDITIONAL_JUMP)  ; LAB_004180df
    MOV EAX,dword ptr [ESP + 0xc]       ; 00418080
        ;   Label: LAB_00418080
    MOV dword ptr [ESP + 0x14],EAX      ; 00418084
    MOV EAX,dword ptr [ESP + 0x8]       ; 00418088
    LEA ESI,[ESP + 0x14]                ; 0041808c
    MOV dword ptr [ESP + 0x18],EAX      ; 00418090
    MOV EAX,dword ptr [ESP + 0x28]      ; 00418094
    MOV EDI,EDX                         ; 00418098
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041809a
    MOVSD ES:EDI,ESI                    ; 0041809e
    MOVSD ES:EDI,ESI                    ; 0041809f
    MOVSD ES:EDI,ESI                    ; 004180a0
    MOV EAX,EDX                         ; 004180a1
    MOV ESP,EBP                         ; 004180a3
    POP EBP                             ; 004180a5
    POP EDI                             ; 004180a6
    POP EBX                             ; 004180a7
    RET                                 ; 004180a8
    MOV dword ptr [ESP + 0x30],ECX      ; 004180a9
        ;   Label: LAB_004180a9
    JMP 0x00417f8d                      ; 004180ad
        ;   XREF to: 00417f8d (UNCONDITIONAL_JUMP)  ; LAB_00417f8d
    XOR ECX,ECX                         ; 004180b2
        ;   Label: LAB_004180b2
    MOV dword ptr [ESP + 0x8],ECX       ; 004180b4
    JMP 0x00418007                      ; 004180b8
        ;   XREF to: 00418007 (UNCONDITIONAL_JUMP)  ; LAB_00418007
    FLD float ptr [ESP + 0x38]          ; 004180bd
        ;   Label: LAB_004180bd
    FSUB float ptr [ESP + 0x34]         ; 004180c1
    FDIV float ptr [ESP + 0x2c]         ; 004180c5
    JMP 0x00418061                      ; 004180c9
        ;   XREF to: 00418061 (UNCONDITIONAL_JUMP)  ; LAB_00418061
    FLD float ptr [ESP + 0x34]          ; 004180cb
        ;   Label: LAB_004180cb
    FSUB float ptr [ESP + 0x3c]         ; 004180cf
    FDIV float ptr [ESP + 0x2c]         ; 004180d3
    FSUBR double ptr [0x005cbffa]       ; 004180d7 | DAT_005cbffa
    JMP 0x00418061                      ; 004180dd
        ;   XREF to: 00418061 (UNCONDITIONAL_JUMP)  ; LAB_00418061
    FLD float ptr [ESP + 0xc]           ; 004180df
        ;   Label: LAB_004180df
    FADD float ptr [0x005cc00a]         ; 004180e3 | DAT_005cc00a
    FSTP float ptr [ESP + 0xc]          ; 004180e9
    JMP 0x00418080                      ; 004180ed
        ;   XREF to: 00418080 (UNCONDITIONAL_JUMP)  ; LAB_00418080
    XOR EBX,EBX                         ; 004180ef
        ;   Label: LAB_004180ef
    MOV dword ptr [ESP + 0xc],EBX       ; 004180f1
    JMP 0x00418080                      ; 004180f5
        ;   XREF to: 00418080 (UNCONDITIONAL_JUMP)  ; LAB_00418080

