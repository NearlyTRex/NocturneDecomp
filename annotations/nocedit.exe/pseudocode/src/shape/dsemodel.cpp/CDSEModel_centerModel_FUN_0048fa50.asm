; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50(CDSEModel * this_ptr)
;
; Parameters:
; CDSEModel *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x64]:8  local_64
; undefined8       Stack[-0x5c]:8  local_5c
; undefined8       Stack[-0x54]:8  local_54
; undefined8       Stack[-0x4c]:8  local_4c
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x3c]:8  local_3c
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 at 0048ffb3
;
; Referenced Globals:
;   double g_CDSECenteringFactor = 0.5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fa50
        ;   Label: shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50
    PUSH ESI                            ; 0048fa51
    PUSH EDI                            ; 0048fa52
    PUSH EBP                            ; 0048fa53
    MOV EBP,ESP                         ; 0048fa54
    SUB ESP,0x54                        ; 0048fa56
    MOV dword ptr [EBP + -0x4c],0xcccccccd ; 0048fa5c
    MOV dword ptr [EBP + -0x48],0x412e847f ; 0048fa63
    MOV dword ptr [EBP + -0x44],0xcccccccd ; 0048fa6a
    MOV dword ptr [EBP + -0x40],0x412e847f ; 0048fa71
    MOV dword ptr [EBP + -0x3c],0xcccccccd ; 0048fa78
    MOV dword ptr [EBP + -0x38],0x412e847f ; 0048fa7f
    MOV dword ptr [EBP + -0xc],0xcccccccd ; 0048fa86
    MOV dword ptr [EBP + -0x8],0xc12e847f ; 0048fa8d
    MOV dword ptr [EBP + -0x1c],0xcccccccd ; 0048fa94
    MOV dword ptr [EBP + -0x18],0xc12e847f ; 0048fa9b
    MOV dword ptr [EBP + -0x14],0xcccccccd ; 0048faa2
    MOV dword ptr [EBP + -0x10],0xc12e847f ; 0048faa9
    MOV dword ptr [EBP + -0x4],0x0      ; 0048fab0
    JMP 0x0048fabf                      ; 0048fab7
        ;   XREF to: 0048fabf (UNCONDITIONAL_JUMP)  ; LAB_0048fabf
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048fab9
        ;   Label: LAB_0048fab9
    INC dword ptr [EBP + -0x4]          ; 0048fabc
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048fabf
        ;   Label: LAB_0048fabf
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048fac2
    CMP EAX,dword ptr [EDX]             ; 0048fac5
    JGE 0x0048fb83                      ; 0048fac7
        ;   XREF to: 0048fb83 (CONDITIONAL_JUMP)  ; LAB_0048fb83
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0048facd
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fad1
    FLD float ptr [EAX + 0x4]           ; 0048fad4
    FSTP double ptr [EBP + -0x34]       ; 0048fad7
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0048fada
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fade
    FLD float ptr [EAX + 0x8]           ; 0048fae1
    FSTP double ptr [EBP + -0x2c]       ; 0048fae4
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0048fae7
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048faeb
    FLD float ptr [EAX + 0xc]           ; 0048faee
    FSTP double ptr [EBP + -0x24]       ; 0048faf1
    FLD double ptr [EBP + -0x34]        ; 0048faf4
    FCOMP double ptr [EBP + -0xc]       ; 0048faf7
    FNSTSW AX                           ; 0048fafa
    SAHF                                ; 0048fafc
    JBE 0x0048fb0b                      ; 0048fafd
        ;   XREF to: 0048fb0b (CONDITIONAL_JUMP)  ; LAB_0048fb0b
    MOV EAX,dword ptr [EBP + -0x34]     ; 0048faff
    MOV dword ptr [EBP + -0xc],EAX      ; 0048fb02
    MOV EAX,dword ptr [EBP + -0x30]     ; 0048fb05
    MOV dword ptr [EBP + -0x8],EAX      ; 0048fb08
    FLD double ptr [EBP + -0x34]        ; 0048fb0b
        ;   Label: LAB_0048fb0b
    FCOMP double ptr [EBP + -0x4c]      ; 0048fb0e
    FNSTSW AX                           ; 0048fb11
    SAHF                                ; 0048fb13
    JNC 0x0048fb22                      ; 0048fb14
        ;   XREF to: 0048fb22 (CONDITIONAL_JUMP)  ; LAB_0048fb22
    MOV EAX,dword ptr [EBP + -0x34]     ; 0048fb16
    MOV dword ptr [EBP + -0x4c],EAX     ; 0048fb19
    MOV EAX,dword ptr [EBP + -0x30]     ; 0048fb1c
    MOV dword ptr [EBP + -0x48],EAX     ; 0048fb1f
    FLD double ptr [EBP + -0x2c]        ; 0048fb22
        ;   Label: LAB_0048fb22
    FCOMP double ptr [EBP + -0x1c]      ; 0048fb25
    FNSTSW AX                           ; 0048fb28
    SAHF                                ; 0048fb2a
    JBE 0x0048fb39                      ; 0048fb2b
        ;   XREF to: 0048fb39 (CONDITIONAL_JUMP)  ; LAB_0048fb39
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0048fb2d
    MOV dword ptr [EBP + -0x1c],EAX     ; 0048fb30
    MOV EAX,dword ptr [EBP + -0x28]     ; 0048fb33
    MOV dword ptr [EBP + -0x18],EAX     ; 0048fb36
    FLD double ptr [EBP + -0x2c]        ; 0048fb39
        ;   Label: LAB_0048fb39
    FCOMP double ptr [EBP + -0x44]      ; 0048fb3c
    FNSTSW AX                           ; 0048fb3f
    SAHF                                ; 0048fb41
    JNC 0x0048fb50                      ; 0048fb42
        ;   XREF to: 0048fb50 (CONDITIONAL_JUMP)  ; LAB_0048fb50
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0048fb44
    MOV dword ptr [EBP + -0x44],EAX     ; 0048fb47
    MOV EAX,dword ptr [EBP + -0x28]     ; 0048fb4a
    MOV dword ptr [EBP + -0x40],EAX     ; 0048fb4d
    FLD double ptr [EBP + -0x24]        ; 0048fb50
        ;   Label: LAB_0048fb50
    FCOMP double ptr [EBP + -0x14]      ; 0048fb53
    FNSTSW AX                           ; 0048fb56
    SAHF                                ; 0048fb58
    JBE 0x0048fb67                      ; 0048fb59
        ;   XREF to: 0048fb67 (CONDITIONAL_JUMP)  ; LAB_0048fb67
    MOV EAX,dword ptr [EBP + -0x24]     ; 0048fb5b
    MOV dword ptr [EBP + -0x14],EAX     ; 0048fb5e
    MOV EAX,dword ptr [EBP + -0x20]     ; 0048fb61
    MOV dword ptr [EBP + -0x10],EAX     ; 0048fb64
    FLD double ptr [EBP + -0x24]        ; 0048fb67
        ;   Label: LAB_0048fb67
    FCOMP double ptr [EBP + -0x3c]      ; 0048fb6a
    FNSTSW AX                           ; 0048fb6d
    SAHF                                ; 0048fb6f
    JNC 0x0048fb7e                      ; 0048fb70
        ;   XREF to: 0048fb7e (CONDITIONAL_JUMP)  ; LAB_0048fb7e
    MOV EAX,dword ptr [EBP + -0x24]     ; 0048fb72
    MOV dword ptr [EBP + -0x3c],EAX     ; 0048fb75
    MOV EAX,dword ptr [EBP + -0x20]     ; 0048fb78
    MOV dword ptr [EBP + -0x38],EAX     ; 0048fb7b
    JMP 0x0048fab9                      ; 0048fb7e
        ;   XREF to: 0048fab9 (UNCONDITIONAL_JUMP)  ; LAB_0048fab9
        ;   Label: LAB_0048fb7e
    MOV dword ptr [EBP + -0x34],0x0     ; 0048fb83
        ;   Label: LAB_0048fb83
    MOV dword ptr [EBP + -0x30],0x0     ; 0048fb8a
    MOV dword ptr [EBP + -0x2c],0x0     ; 0048fb91
    MOV dword ptr [EBP + -0x28],0x0     ; 0048fb98
    MOV dword ptr [EBP + -0x24],0x0     ; 0048fb9f
    MOV dword ptr [EBP + -0x20],0x0     ; 0048fba6
    MOV dword ptr [EBP + -0x4],0x0      ; 0048fbad
    JMP 0x0048fbbc                      ; 0048fbb4
        ;   XREF to: 0048fbbc (UNCONDITIONAL_JUMP)  ; LAB_0048fbbc
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048fbb6
        ;   Label: LAB_0048fbb6
    INC dword ptr [EBP + -0x4]          ; 0048fbb9
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048fbbc
        ;   Label: LAB_0048fbbc
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048fbbf
    CMP EAX,dword ptr [EDX]             ; 0048fbc2
    JGE 0x0048fbf8                      ; 0048fbc4
        ;   XREF to: 0048fbf8 (CONDITIONAL_JUMP)  ; LAB_0048fbf8
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0048fbc6
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fbca
    FLD float ptr [EAX + 0x4]           ; 0048fbcd
    FADD double ptr [EBP + -0x34]       ; 0048fbd0
    FSTP double ptr [EBP + -0x34]       ; 0048fbd3
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0048fbd6
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fbda
    FLD float ptr [EAX + 0x8]           ; 0048fbdd
    FADD double ptr [EBP + -0x2c]       ; 0048fbe0
    FSTP double ptr [EBP + -0x2c]       ; 0048fbe3
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0048fbe6
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fbea
    FLD float ptr [EAX + 0xc]           ; 0048fbed
    FADD double ptr [EBP + -0x24]       ; 0048fbf0
    FSTP double ptr [EBP + -0x24]       ; 0048fbf3
    JMP 0x0048fbb6                      ; 0048fbf6
        ;   XREF to: 0048fbb6 (UNCONDITIONAL_JUMP)  ; LAB_0048fbb6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048fbf8
        ;   Label: LAB_0048fbf8
    FILD dword ptr [EAX]                ; 0048fbfb
    FDIVR double ptr [EBP + -0x34]      ; 0048fbfd
    FSTP double ptr [EBP + -0x34]       ; 0048fc00
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048fc03
    FILD dword ptr [EAX]                ; 0048fc06
    FDIVR double ptr [EBP + -0x2c]      ; 0048fc08
    FSTP double ptr [EBP + -0x2c]       ; 0048fc0b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048fc0e
    FILD dword ptr [EAX]                ; 0048fc11
    FDIVR double ptr [EBP + -0x24]      ; 0048fc13
    FSTP double ptr [EBP + -0x24]       ; 0048fc16
    MOV dword ptr [EBP + -0x4],0x0      ; 0048fc19
    JMP 0x0048fc28                      ; 0048fc20
        ;   XREF to: 0048fc28 (UNCONDITIONAL_JUMP)  ; LAB_0048fc28
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048fc22
        ;   Label: LAB_0048fc22
    INC dword ptr [EBP + -0x4]          ; 0048fc25
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048fc28
        ;   Label: LAB_0048fc28
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048fc2b
    CMP EAX,dword ptr [EDX]             ; 0048fc2e
    JGE 0x0048fcaf                      ; 0048fc30
        ;   XREF to: 0048fcaf (CONDITIONAL_JUMP)  ; LAB_0048fcaf
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0048fc32
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fc36
    FLD double ptr [EBP + -0xc]         ; 0048fc39
    FSUB double ptr [EBP + -0x4c]       ; 0048fc3c
    FMUL double ptr [0x00622502]        ; 0048fc3f | g_CDSECenteringFactor
    FADD double ptr [EBP + -0x4c]       ; 0048fc45
    FLD float ptr [EAX + 0x4]           ; 0048fc48
    FSTP double ptr [EBP + -0x54]       ; 0048fc4b
    FSUBR double ptr [EBP + -0x54]      ; 0048fc4e
    FSTP double ptr [EBP + -0x54]       ; 0048fc51
    FLD double ptr [EBP + -0x54]        ; 0048fc54
    FSTP float ptr [EAX + 0x4]          ; 0048fc57
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0048fc5a
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fc5e
    FLD double ptr [EBP + -0x1c]        ; 0048fc61
    FSUB double ptr [EBP + -0x44]       ; 0048fc64
    FMUL double ptr [0x00622502]        ; 0048fc67 | g_CDSECenteringFactor
    FADD double ptr [EBP + -0x44]       ; 0048fc6d
    FLD float ptr [EAX + 0x8]           ; 0048fc70
    FSTP double ptr [EBP + -0x54]       ; 0048fc73
    FSUBR double ptr [EBP + -0x54]      ; 0048fc76
    FSTP double ptr [EBP + -0x54]       ; 0048fc79
    FLD double ptr [EBP + -0x54]        ; 0048fc7c
    FSTP float ptr [EAX + 0x8]          ; 0048fc7f
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0048fc82
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fc86
    FLD double ptr [EBP + -0x14]        ; 0048fc89
    FSUB double ptr [EBP + -0x3c]       ; 0048fc8c
    FMUL double ptr [0x00622502]        ; 0048fc8f | g_CDSECenteringFactor
    FADD double ptr [EBP + -0x3c]       ; 0048fc95
    FLD float ptr [EAX + 0xc]           ; 0048fc98
    FSTP double ptr [EBP + -0x54]       ; 0048fc9b
    FSUBR double ptr [EBP + -0x54]      ; 0048fc9e
    FSTP double ptr [EBP + -0x54]       ; 0048fca1
    FLD double ptr [EBP + -0x54]        ; 0048fca4
    FSTP float ptr [EAX + 0xc]          ; 0048fca7
    JMP 0x0048fc22                      ; 0048fcaa
        ;   XREF to: 0048fc22 (UNCONDITIONAL_JUMP)  ; LAB_0048fc22
    MOV ESP,EBP                         ; 0048fcaf
        ;   Label: LAB_0048fcaf
    POP EBP                             ; 0048fcb1
    POP EDI                             ; 0048fcb2
    POP ESI                             ; 0048fcb3
    POP EBX                             ; 0048fcb4
    RET                                 ; 0048fcb5

