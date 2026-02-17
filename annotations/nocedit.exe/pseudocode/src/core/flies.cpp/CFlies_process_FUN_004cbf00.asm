; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_CFlies_process_FUN_004cbf00(CFlies *this_ptr,float delta_time)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x58]:8  local_58
; undefined1       Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined1       Stack[-0x2c]:1  local_2c
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   float FLOAT_0062a422 = 0.5
;   double DOUBLE_0062a426 = 2
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_flies.cpp_CFlies_generateRandomPoint_FUN_004cc820
;   core_flies.cpp_CFlies_initFly_FUN_004cc760
;   crt_math.c_floor_FUN_005feb90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbf00
        ;   Label: core_flies.cpp_CFlies_process_FUN_004cbf00
    PUSH ESI                            ; 004cbf01
    PUSH EDI                            ; 004cbf02
    PUSH EBP                            ; 004cbf03
    MOV EBP,ESP                         ; 004cbf04
    SUB ESP,0x44                        ; 004cbf06
    AND ESP,0xfffffff8                  ; 004cbf09
    MOV EDI,dword ptr [EBP + 0x14]      ; 004cbf0c
    CMP dword ptr [EDI + 0x2a1c],0x0    ; 004cbf0f
    JZ 0x004cbfbd                       ; 004cbf16
        ;   XREF to: 004cbfbd (CONDITIONAL_JUMP)  ; LAB_004cbfbd
    MOV ECX,dword ptr [EDI + 0x2a08]    ; 004cbf1c
    TEST ECX,ECX                        ; 004cbf22
    JNZ 0x004cbfc4                      ; 004cbf24
        ;   XREF to: 004cbfc4 (CONDITIONAL_JUMP)  ; LAB_004cbfc4
    CMP dword ptr [EDI + 0x2a0c],0x0    ; 004cbf2a
        ;   Label: LAB_004cbf2a
    JLE 0x004cbf67                      ; 004cbf31
        ;   XREF to: 004cbf67 (CONDITIONAL_JUMP)  ; LAB_004cbf67
    FLD float ptr [EDI + 0x2a10]        ; 004cbf33
    FSUB float ptr [EBP + 0x18]         ; 004cbf39
    FST float ptr [EDI + 0x2a10]        ; 004cbf3c
    FLDZ                                ; 004cbf42
    FCOMPP                              ; 004cbf44
    FNSTSW AX                           ; 004cbf46
    SAHF                                ; 004cbf48
    JC 0x004cbf67                       ; 004cbf49
        ;   XREF to: 004cbf67 (CONDITIONAL_JUMP)  ; LAB_004cbf67
    MOV ESI,dword ptr [EDI + 0x164]     ; 004cbf4b
    CMP ESI,0xc8                        ; 004cbf51
    JL 0x004cc145                       ; 004cbf57
        ;   XREF to: 004cc145 (CONDITIONAL_JUMP)  ; LAB_004cc145
    MOV dword ptr [EDI + 0x2a0c],0x0    ; 004cbf5d
    FLD float ptr [EBP + 0x18]          ; 004cbf67
        ;   Label: LAB_004cbf67
    FLD ST0                             ; 004cbf6a
    FMUL double ptr [0x0062a426]        ; 004cbf6c | DOUBLE_0062a426
    XOR EBX,EBX                         ; 004cbf72
    MOV ESI,dword ptr [EDI + 0x164]     ; 004cbf74
    MOV dword ptr [ESP + 0x40],EBX      ; 004cbf7a
    FSTP ST1                            ; 004cbf7e
    FSTP float ptr [EBP + 0x18]         ; 004cbf80
    TEST ESI,ESI                        ; 004cbf83
    JLE 0x004cbfbd                      ; 004cbf85
        ;   XREF to: 004cbfbd (CONDITIONAL_JUMP)  ; LAB_004cbfbd
    LEA EBX,[EDI + 0x168]               ; 004cbf87
    FLD1                                ; 004cbf8d
        ;   Label: LAB_004cbf8d
    FLD float ptr [EBX]                 ; 004cbf8f
    FADD float ptr [EBP + 0x18]         ; 004cbf91
    MOV ESI,EBX                         ; 004cbf94
    FST float ptr [EBX]                 ; 004cbf96
    FSTP double ptr [ESP]               ; 004cbf98
    FCOMP double ptr [ESP]              ; 004cbf9b
    FNSTSW AX                           ; 004cbf9e
    SAHF                                ; 004cbfa0
    JBE 0x004cc17a                      ; 004cbfa1
        ;   XREF to: 004cc17a (CONDITIONAL_JUMP)  ; LAB_004cc17a
    MOV EAX,dword ptr [ESP + 0x40]      ; 004cbfa7
        ;   Label: LAB_004cbfa7
    ADD EBX,0x34                        ; 004cbfab
    INC EAX                             ; 004cbfae
    MOV EDX,dword ptr [EDI + 0x164]     ; 004cbfaf
    MOV dword ptr [ESP + 0x40],EAX      ; 004cbfb5
    CMP EAX,EDX                         ; 004cbfb9
    JL 0x004cbf8d                       ; 004cbfbb
        ;   XREF to: 004cbf8d (CONDITIONAL_JUMP)  ; LAB_004cbf8d
    MOV ESP,EBP                         ; 004cbfbd
        ;   Label: LAB_004cbfbd
    POP EBP                             ; 004cbfbf
    POP EDI                             ; 004cbfc0
    POP ESI                             ; 004cbfc1
    POP EBX                             ; 004cbfc2
    RET                                 ; 004cbfc3
    MOV EDX,ECX                         ; 004cbfc4
        ;   Label: LAB_004cbfc4
    LEA EAX,[EDI + 0x20]                ; 004cbfc6
    FLD float ptr [EDX + 0x20]          ; 004cbfc9
    FSUB float ptr [EAX]                ; 004cbfcc
    FSTP float ptr [ESP + 0x20]         ; 004cbfce
    FLD float ptr [EDX + 0x24]          ; 004cbfd2
    FSUB float ptr [EAX + 0x4]          ; 004cbfd5
    FST float ptr [ESP + 0x24]          ; 004cbfd8
    FMUL float ptr [ESP + 0x24]         ; 004cbfdc
    FLD float ptr [ESP + 0x20]          ; 004cbfe0
    FMUL ST0                            ; 004cbfe4
    FLD float ptr [EDX + 0x28]          ; 004cbfe6
    FSUB float ptr [EAX + 0x8]          ; 004cbfe9
    FXCH                                ; 004cbfec
    FADDP ST2,ST0                       ; 004cbfee
    FST float ptr [ESP + 0x28]          ; 004cbff0
    FMUL float ptr [ESP + 0x28]         ; 004cbff4
    FADDP                               ; 004cbff8
    FSQRT                               ; 004cbffa
    FLDZ                                ; 004cbffc
    FCOMPP                              ; 004cbffe
    FNSTSW AX                           ; 004cc000
    SAHF                                ; 004cc002
    JNC 0x004cc120                      ; 004cc003
        ;   XREF to: 004cc120 (CONDITIONAL_JUMP)  ; LAB_004cc120
    LEA EAX,[ESP + 0x20]                ; 004cc009
    PUSH EAX                            ; 004cc00d
    LEA EAX,[ESP + 0x30]                ; 004cc00e
    PUSH EAX                            ; 004cc012
    PUSH EDI                            ; 004cc013
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 004cc014
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    FLD float ptr [0x0062a422]          ; 004cc019 | FLOAT_0062a422
    FLD float ptr [EAX]                 ; 004cc01f
    FMUL ST1                            ; 004cc021
    ADD ESP,0xc                         ; 004cc023
    FSTP float ptr [ESP + 0x14]         ; 004cc026
    FLD float ptr [EAX + 0x4]           ; 004cc02a
    FMUL ST1                            ; 004cc02d
    FSTP float ptr [ESP + 0x18]         ; 004cc02f
    FMUL float ptr [EAX + 0x8]          ; 004cc033
    LEA EDX,[ESP + 0x14]                ; 004cc036
    LEA EAX,[ESP + 0x20]                ; 004cc03a
    FSTP float ptr [ESP + 0x1c]         ; 004cc03e
    CMP EAX,EDX                         ; 004cc042
    JZ 0x004cc05e                       ; 004cc044
        ;   XREF to: 004cc05e (CONDITIONAL_JUMP)  ; LAB_004cc05e
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cc046
    MOV dword ptr [ESP + 0x20],EAX      ; 004cc04a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004cc04e
    MOV dword ptr [ESP + 0x24],EAX      ; 004cc052
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004cc056
    MOV dword ptr [ESP + 0x28],EAX      ; 004cc05a
    MOV ESI,dword ptr [EDI + 0x164]     ; 004cc05e
        ;   Label: LAB_004cc05e
    XOR EBX,EBX                         ; 004cc064
    TEST ESI,ESI                        ; 004cc066
    JLE 0x004cc120                      ; 004cc068
        ;   XREF to: 004cc120 (CONDITIONAL_JUMP)  ; LAB_004cc120
    LEA EAX,[EDI + 0x184]               ; 004cc06e
    LEA EDX,[EDI + 0x16c]               ; 004cc074
    FLD float ptr [EDX]                 ; 004cc07a
        ;   Label: LAB_004cc07a
    FSUB float ptr [ESP + 0x20]         ; 004cc07c
    FLD float ptr [EDX + 0x4]           ; 004cc080
    FXCH                                ; 004cc083
    FSTP float ptr [EDX]                ; 004cc085
    FSUB float ptr [ESP + 0x24]         ; 004cc087
    FLD float ptr [EDX + 0x8]           ; 004cc08b
    FXCH                                ; 004cc08e
    FSTP float ptr [EDX + 0x4]          ; 004cc090
    FSUB float ptr [ESP + 0x28]         ; 004cc093
    FLD float ptr [EDX + 0xc]           ; 004cc097
    FXCH                                ; 004cc09a
    FSTP float ptr [EDX + 0x8]          ; 004cc09c
    FSUB float ptr [ESP + 0x20]         ; 004cc09f
    FLD float ptr [EDX + 0x10]          ; 004cc0a3
    FXCH                                ; 004cc0a6
    FSTP float ptr [EDX + 0xc]          ; 004cc0a8
    FSUB float ptr [ESP + 0x24]         ; 004cc0ab
    FLD float ptr [EDX + 0x14]          ; 004cc0af
    FXCH                                ; 004cc0b2
    FSTP float ptr [EDX + 0x10]         ; 004cc0b4
    FSUB float ptr [ESP + 0x28]         ; 004cc0b7
    ADD EAX,0x34                        ; 004cc0bb
    FSTP float ptr [EDX + 0x14]         ; 004cc0be
    FLD float ptr [EAX + -0x34]         ; 004cc0c1
    FSUB float ptr [ESP + 0x20]         ; 004cc0c4
    FLD float ptr [EAX + -0x30]         ; 004cc0c8
    FXCH                                ; 004cc0cb
    FSTP float ptr [EAX + -0x34]        ; 004cc0cd
    FSUB float ptr [ESP + 0x24]         ; 004cc0d0
    FLD float ptr [EAX + -0x2c]         ; 004cc0d4
    FXCH                                ; 004cc0d7
    FSTP float ptr [EAX + -0x30]        ; 004cc0d9
    FSUB float ptr [ESP + 0x28]         ; 004cc0dc
    FLD float ptr [EAX + -0x28]         ; 004cc0e0
    FXCH                                ; 004cc0e3
    FSTP float ptr [EAX + -0x2c]        ; 004cc0e5
    FSUB float ptr [ESP + 0x20]         ; 004cc0e8
    FLD float ptr [EAX + -0x24]         ; 004cc0ec
    FXCH                                ; 004cc0ef
    FSTP float ptr [EAX + -0x28]        ; 004cc0f1
    FSUB float ptr [ESP + 0x24]         ; 004cc0f4
    FLD float ptr [EAX + -0x20]         ; 004cc0f8
    FXCH                                ; 004cc0fb
    FSTP float ptr [EAX + -0x24]        ; 004cc0fd
    FSUB float ptr [ESP + 0x28]         ; 004cc100
    INC EBX                             ; 004cc104
    FSTP float ptr [EAX + -0x20]        ; 004cc105
    MOV ECX,dword ptr [EDI + 0x164]     ; 004cc108
    ADD EDX,0x34                        ; 004cc10e
    CMP EBX,ECX                         ; 004cc111
    JL 0x004cc07a                       ; 004cc113
        ;   XREF to: 004cc07a (CONDITIONAL_JUMP)  ; LAB_004cc07a
    LEA EAX,[EAX]                       ; 004cc119
    NOP                                 ; 004cc11f
    MOV EAX,dword ptr [EDI + 0x2a08]    ; 004cc120
        ;   Label: LAB_004cc120
    LEA EDX,[EDI + 0x20]                ; 004cc126
    MOV ECX,dword ptr [EAX + 0x20]      ; 004cc129
    MOV dword ptr [EDX],ECX             ; 004cc12c
    MOV ECX,dword ptr [EAX + 0x24]      ; 004cc12e
    MOV dword ptr [EDX + 0x4],ECX       ; 004cc131
    MOV ECX,dword ptr [EAX + 0x28]      ; 004cc134
    MOV dword ptr [EDX + 0x8],ECX       ; 004cc137
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004cc13a
    MOV dword ptr [EDX + 0xc],EAX       ; 004cc13d
    JMP 0x004cbf2a                      ; 004cc140
        ;   XREF to: 004cbf2a (UNCONDITIONAL_JUMP)  ; LAB_004cbf2a
    PUSH ESI                            ; 004cc145
        ;   Label: LAB_004cc145
    PUSH EDI                            ; 004cc146
    CALL core_flies.cpp_CFlies_initFly_FUN_004cc760 ; 004cc147
        ;   XREF to: 004cc760 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_CFlies_initFly_FUN_004cc760(CFlies * this_ptr, int fly_index)
    FLD float ptr [EDI + 0x2a14]        ; 004cc14c
    MOV EDX,dword ptr [EDI + 0x164]     ; 004cc152
    ADD ESP,0x8                         ; 004cc158
    INC EDX                             ; 004cc15b
    MOV ECX,dword ptr [EDI + 0x2a0c]    ; 004cc15c
    MOV dword ptr [EDI + 0x164],EDX     ; 004cc162
    DEC ECX                             ; 004cc168
    FSTP float ptr [EDI + 0x2a10]       ; 004cc169
    MOV dword ptr [EDI + 0x2a0c],ECX    ; 004cc16f
    JMP 0x004cbf67                      ; 004cc175
        ;   XREF to: 004cbf67 (UNCONDITIONAL_JUMP)  ; LAB_004cbf67
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cc17a
        ;   Label: LAB_004cc17a
    PUSH ECX                            ; 004cc17e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cc17f
    PUSH EAX                            ; 004cc183
    CALL crt_math.c_floor_FUN_005feb90  ; 004cc184
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x40],EAX      ; 004cc189
    MOV dword ptr [ESP + 0x44],EDX      ; 004cc18d
    FLD double ptr [ESP + 0x40]         ; 004cc191
    LEA EAX,[EBX + 0x4]                 ; 004cc195
    ADD ESP,0x8                         ; 004cc198
    FLD float ptr [EBX]                 ; 004cc19b
    FXCH                                ; 004cc19d
    FSUBR ST0,ST1                       ; 004cc19f
    LEA EDX,[EBX + 0x10]                ; 004cc1a1
    FSTP ST1                            ; 004cc1a4
    FSTP float ptr [EBX]                ; 004cc1a6
    CMP EAX,EDX                         ; 004cc1a8
    JZ 0x004cc1bc                       ; 004cc1aa
        ;   XREF to: 004cc1bc (CONDITIONAL_JUMP)  ; LAB_004cc1bc
    MOV ECX,dword ptr [EDX]             ; 004cc1ac
    MOV dword ptr [EAX],ECX             ; 004cc1ae
    MOV ECX,dword ptr [EDX + 0x4]       ; 004cc1b0
    MOV dword ptr [EAX + 0x4],ECX       ; 004cc1b3
    MOV ECX,dword ptr [EDX + 0x8]       ; 004cc1b6
    MOV dword ptr [EAX + 0x8],ECX       ; 004cc1b9
    LEA EAX,[ESI + 0x10]                ; 004cc1bc
        ;   Label: LAB_004cc1bc
    LEA EDX,[ESI + 0x1c]                ; 004cc1bf
    CMP EAX,EDX                         ; 004cc1c2
    JZ 0x004cc1d6                       ; 004cc1c4
        ;   XREF to: 004cc1d6 (CONDITIONAL_JUMP)  ; LAB_004cc1d6
    MOV ECX,dword ptr [EDX]             ; 004cc1c6
    MOV dword ptr [EAX],ECX             ; 004cc1c8
    MOV ECX,dword ptr [EDX + 0x4]       ; 004cc1ca
    MOV dword ptr [EAX + 0x4],ECX       ; 004cc1cd
    MOV ECX,dword ptr [EDX + 0x8]       ; 004cc1d0
    MOV dword ptr [EAX + 0x8],ECX       ; 004cc1d3
    LEA EDX,[ESI + 0x1c]                ; 004cc1d6
        ;   Label: LAB_004cc1d6
    LEA EAX,[ESI + 0x28]                ; 004cc1d9
    CMP EDX,EAX                         ; 004cc1dc
    JZ 0x004cc1f0                       ; 004cc1de
        ;   XREF to: 004cc1f0 (CONDITIONAL_JUMP)  ; LAB_004cc1f0
    MOV ECX,dword ptr [EAX]             ; 004cc1e0
    MOV dword ptr [EDX],ECX             ; 004cc1e2
    MOV ECX,dword ptr [EAX + 0x4]       ; 004cc1e4
    MOV dword ptr [EDX + 0x4],ECX       ; 004cc1e7
    MOV ECX,dword ptr [EAX + 0x8]       ; 004cc1ea
    MOV dword ptr [EDX + 0x8],ECX       ; 004cc1ed
    LEA EAX,[ESI + 0x1c]                ; 004cc1f0
        ;   Label: LAB_004cc1f0
    PUSH EAX                            ; 004cc1f3
    LEA EAX,[ESP + 0xc]                 ; 004cc1f4
    PUSH EAX                            ; 004cc1f8
    PUSH EDI                            ; 004cc1f9
    ADD ESI,0x28                        ; 004cc1fa
    CALL core_flies.cpp_CFlies_generateRandomPoint_FUN_004cc820 ; 004cc1fd
        ;   XREF to: 004cc820 (UNCONDITIONAL_CALL)  ; CVector3f * core_flies.cpp_CFlies_generateRandomPoint_FUN_004cc820(CFlies * this_ptr, CVector3f * out_point, CVector3f * reference_point)
    ADD ESP,0xc                         ; 004cc202
    CMP ESI,EAX                         ; 004cc205
    JZ 0x004cbfa7                       ; 004cc207
        ;   XREF to: 004cbfa7 (CONDITIONAL_JUMP)  ; LAB_004cbfa7
    MOV EDX,dword ptr [EAX]             ; 004cc20d
    MOV dword ptr [ESI],EDX             ; 004cc20f
    MOV EDX,dword ptr [EAX + 0x4]       ; 004cc211
    MOV dword ptr [ESI + 0x4],EDX       ; 004cc214
    MOV EDX,dword ptr [EAX + 0x8]       ; 004cc217
    MOV dword ptr [ESI + 0x8],EDX       ; 004cc21a
    JMP 0x004cbfa7                      ; 004cc21d
        ;   XREF to: 004cbfa7 (UNCONDITIONAL_JUMP)  ; LAB_004cbfa7

