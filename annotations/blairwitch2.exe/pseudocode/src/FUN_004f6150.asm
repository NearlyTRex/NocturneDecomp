; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6150(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_004f6560 at 004f6623
;
; Referenced Globals:
;   undefined4 DAT_01d0d2b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6150
        ;   Label: FUN_004f6150
    SUB ESP,0x4                         ; 004f6151
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f6154
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f6158
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f615c
    FLD float ptr [ECX + 0x4]           ; 004f6160
    FADD float ptr [EAX + 0x8]          ; 004f6163
    FLD float ptr [EAX + 0x4]           ; 004f6166
    FADD float ptr [ECX + 0x8]          ; 004f6169
    FSUBP                               ; 004f616c
    FLD float ptr [EAX + 0x8]           ; 004f616e
    FSUB float ptr [EAX + 0x4]          ; 004f6171
    FDIVRP                              ; 004f6174
    FLD float ptr [ECX + 0x8]           ; 004f6176
    FSUB float ptr [EAX + 0x8]          ; 004f6179
    FXCH                                ; 004f617c
    FSTP float ptr [ESP]                ; 004f617e
    FMUL float ptr [ESP]                ; 004f6181
    FADD float ptr [EAX + 0x8]          ; 004f6184
    FST float ptr [EDX + 0x8]           ; 004f6187
    FSTP float ptr [EDX + 0x4]          ; 004f618a
    FLD float ptr [ECX]                 ; 004f618d
    FSUB float ptr [EAX]                ; 004f618f
    FMUL float ptr [ESP]                ; 004f6191
    FADD float ptr [EAX]                ; 004f6194
    MOV EBX,dword ptr [0x01d0d2b4]      ; 004f6196 | DAT_01d0d2b4
    FSTP float ptr [EDX]                ; 004f619c
    TEST EBX,EBX                        ; 004f619e
    JZ 0x004f61a7                       ; 004f61a0
        ;   XREF to: 004f61a7 (CONDITIONAL_JUMP)  ; LAB_004f61a7
    ADD ESP,0x4                         ; 004f61a2
    POP EBX                             ; 004f61a5
    RET                                 ; 004f61a6
    FLD float ptr [ECX + 0x2c]          ; 004f61a7
        ;   Label: LAB_004f61a7
    FSUB float ptr [EAX + 0x2c]         ; 004f61aa
    FLD float ptr [ESP]                 ; 004f61ad
    FXCH                                ; 004f61b0
    FMUL ST1                            ; 004f61b2
    FADD float ptr [EAX + 0x2c]         ; 004f61b4
    FSTP float ptr [EDX + 0x2c]         ; 004f61b7
    FLD float ptr [ECX + 0x28]          ; 004f61ba
    FSUB float ptr [EAX + 0x28]         ; 004f61bd
    FMUL ST1                            ; 004f61c0
    FADD float ptr [EAX + 0x28]         ; 004f61c2
    FSTP float ptr [EDX + 0x28]         ; 004f61c5
    FLD float ptr [ECX + 0x24]          ; 004f61c8
    FSUB float ptr [EAX + 0x24]         ; 004f61cb
    FMUL ST1                            ; 004f61ce
    FADD float ptr [EAX + 0x24]         ; 004f61d0
    FSTP float ptr [EDX + 0x24]         ; 004f61d3
    FLD float ptr [ECX + 0x1c]          ; 004f61d6
    FSUB float ptr [EAX + 0x1c]         ; 004f61d9
    FMUL ST1                            ; 004f61dc
    FADD float ptr [EAX + 0x1c]         ; 004f61de
    FSTP float ptr [EDX + 0x1c]         ; 004f61e1
    FLD float ptr [ECX + 0x20]          ; 004f61e4
    FSUB float ptr [EAX + 0x20]         ; 004f61e7
    FMUL ST1                            ; 004f61ea
    FADD float ptr [EAX + 0x20]         ; 004f61ec
    FSTP float ptr [EDX + 0x20]         ; 004f61ef
    FLD float ptr [ECX + 0x30]          ; 004f61f2
    FSUB float ptr [EAX + 0x30]         ; 004f61f5
    FMUL ST1                            ; 004f61f8
    FADD float ptr [EAX + 0x30]         ; 004f61fa
    FSTP float ptr [EDX + 0x30]         ; 004f61fd
    FLD float ptr [ECX + 0x34]          ; 004f6200
    FSUB float ptr [EAX + 0x34]         ; 004f6203
    FMULP                               ; 004f6206
    FADD float ptr [EAX + 0x34]         ; 004f6208
    FSTP float ptr [EDX + 0x34]         ; 004f620b
    ADD ESP,0x4                         ; 004f620e
    POP EBX                             ; 004f6211
    RET                                 ; 004f6212

