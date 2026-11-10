; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_FUN_0058a010(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 005863d4
;
; Referenced Globals:
;   undefined4 DAT_005f6ae1
;   undefined4 DAT_005f6ae9
;   undefined4 DAT_005f6af1
;   undefined4 DAT_005f6af9
;   undefined4 DAT_005f6b01
;   undefined4 DAT_02c83650
;   undefined4 DAT_02c83654
;
; Called Functions:
;   core_motion.cpp_FUN_00524a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058a010
        ;   Label: core_stranger.cpp_FUN_0058a010
    PUSH ESI                            ; 0058a011
    PUSH EDI                            ; 0058a012
    PUSH EBP                            ; 0058a013
    MOV EBP,ESP                         ; 0058a014
    SUB ESP,0x34                        ; 0058a016
    AND ESP,0xfffffff8                  ; 0058a019
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058a01c
    LEA EAX,[EBX + 0x2004c]             ; 0058a01f
    MOV dword ptr [EAX + 0x8],0x0       ; 0058a025
    PUSH 0x0                            ; 0058a02c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058a02e
    MOV dword ptr [EAX + 0x4],EDX       ; 0058a031
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058a034
    MOV dword ptr [EAX],EDX             ; 0058a037
    LEA EAX,[EBX + 0x158]               ; 0058a039
    PUSH EAX                            ; 0058a03f
    CALL core_motion.cpp_FUN_00524a40   ; 0058a040
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x38],EAX      ; 0058a045
    FLD float ptr [ESP + 0x38]          ; 0058a049
    ADD ESP,0x8                         ; 0058a04d
    FLDZ                                ; 0058a050
    FXCH                                ; 0058a052
    FSTP double ptr [ESP + 0x8]         ; 0058a054
    FCOMP double ptr [ESP + 0x8]        ; 0058a058
    FNSTSW AX                           ; 0058a05c
    SAHF                                ; 0058a05e
    JNC 0x0058a1b8                      ; 0058a05f
        ;   XREF to: 0058a1b8 (CONDITIONAL_JUMP)  ; LAB_0058a1b8
    FLD float ptr [EBX + 0x20028]       ; 0058a065
    FLD1                                ; 0058a06b
    FCOMPP                              ; 0058a06d
    FNSTSW AX                           ; 0058a06f
    SAHF                                ; 0058a071
    JBE 0x0058a1b8                      ; 0058a072
        ;   XREF to: 0058a1b8 (CONDITIONAL_JUMP)  ; LAB_0058a1b8
    FLD1                                ; 0058a078
    FCOMP double ptr [ESP + 0x8]        ; 0058a07a
    FNSTSW AX                           ; 0058a07e
    SAHF                                ; 0058a080
    JA 0x0058a1f1                       ; 0058a081
        ;   XREF to: 0058a1f1 (CONDITIONAL_JUMP)  ; LAB_0058a1f1
    MOV EAX,[0x02c83650]                ; 0058a087 | DAT_02c83650
        ;   Label: LAB_0058a087
    MOV EDX,dword ptr [EBX + 0x20058]   ; 0058a08c
    MOV dword ptr [EBX + 0x20058],EAX   ; 0058a092
    FLDZ                                ; 0058a098
    FCOMP float ptr [EBX + 0x20024]     ; 0058a09a
    FNSTSW AX                           ; 0058a0a0
    SAHF                                ; 0058a0a2
    JBE 0x0058a0b0                      ; 0058a0a3
        ;   XREF to: 0058a0b0 (CONDITIONAL_JUMP)  ; LAB_0058a0b0
    MOV EAX,[0x02c83654]                ; 0058a0a5 | DAT_02c83654
    MOV dword ptr [EBX + 0x20058],EAX   ; 0058a0aa
    MOV ECX,0x3fcccccd                  ; 0058a0b0
        ;   Label: LAB_0058a0b0
    FLD float ptr [EBX + 0x20028]       ; 0058a0b5
    MOV dword ptr [ESP + 0x18],ECX      ; 0058a0bb
    FCOMP double ptr [0x005f6ae9]       ; 0058a0bf | DAT_005f6ae9
    FNSTSW AX                           ; 0058a0c5
    SAHF                                ; 0058a0c7
    JBE 0x0058a259                      ; 0058a0c8
        ;   XREF to: 0058a259 (CONDITIONAL_JUMP)  ; LAB_0058a259
    FLD float ptr [EBX + 0x20030]       ; 0058a0ce
    FADD float ptr [EBP + 0x18]         ; 0058a0d4
    FSTP float ptr [EBX + 0x20030]      ; 0058a0d7
    FLD float ptr [EBX + 0x2002c]       ; 0058a0dd
        ;   Label: LAB_0058a0dd
    FLDZ                                ; 0058a0e3
    FCOMPP                              ; 0058a0e5
    FNSTSW AX                           ; 0058a0e7
    SAHF                                ; 0058a0e9
    JC 0x0058a115                       ; 0058a0ea
        ;   XREF to: 0058a115 (CONDITIONAL_JUMP)  ; LAB_0058a115
    FLD float ptr [EBX + 0x20028]       ; 0058a0ec
    FCOMP double ptr [0x005f6af1]       ; 0058a0f2 | DAT_005f6af1
    FNSTSW AX                           ; 0058a0f8
    SAHF                                ; 0058a0fa
    JC 0x0058a268                       ; 0058a0fb
        ;   XREF to: 0058a268 (CONDITIONAL_JUMP)  ; LAB_0058a268
    FLD float ptr [EBX + 0x20028]       ; 0058a101
        ;   Label: LAB_0058a101
    FLD1                                ; 0058a107
    FSUBRP                              ; 0058a109
    FMUL float ptr [ESP + 0x18]         ; 0058a10b
    FSTP float ptr [EBX + 0x2002c]      ; 0058a10f
    FLD float ptr [EBX + 0x2002c]       ; 0058a115
        ;   Label: LAB_0058a115
    FLDZ                                ; 0058a11b
    FCOMPP                              ; 0058a11d
    FNSTSW AX                           ; 0058a11f
    SAHF                                ; 0058a121
    JNC 0x0058a2b3                      ; 0058a122
        ;   XREF to: 0058a2b3 (CONDITIONAL_JUMP)  ; LAB_0058a2b3
    MOV EAX,dword ptr [EBX + 0x2002c]   ; 0058a128
    MOV dword ptr [ESP + 0x28],EAX      ; 0058a12e
    FLD float ptr [ESP + 0x28]          ; 0058a132
    FSUB float ptr [EBP + 0x18]         ; 0058a136
    FST float ptr [EBX + 0x2002c]       ; 0058a139
    FLDZ                                ; 0058a13f
    FCOMPP                              ; 0058a141
    FNSTSW AX                           ; 0058a143
    SAHF                                ; 0058a145
    JC 0x0058a280                       ; 0058a146
        ;   XREF to: 0058a280 (CONDITIONAL_JUMP)  ; LAB_0058a280
    FLD float ptr [EBX + 0x20028]       ; 0058a14c
    FLD1                                ; 0058a152
    FSUBRP                              ; 0058a154
    MOV dword ptr [EBX + 0x2002c],0x0   ; 0058a156
    FSTP float ptr [ESP + 0x2c]         ; 0058a160
        ;   Label: LAB_0058a160
    MOV EAX,dword ptr [EBX + 0x20028]   ; 0058a164
    MOV dword ptr [ESP + 0x14],EAX      ; 0058a16a
    FLD float ptr [ESP + 0x14]          ; 0058a16e
    FADD float ptr [ESP + 0x2c]         ; 0058a172
    FST float ptr [EBX + 0x20028]       ; 0058a176
    FLD1                                ; 0058a17c
    FCOMPP                              ; 0058a17e
    FNSTSW AX                           ; 0058a180
    SAHF                                ; 0058a182
    JA 0x0058a28c                       ; 0058a183
        ;   XREF to: 0058a28c (CONDITIONAL_JUMP)  ; LAB_0058a28c
    MOV dword ptr [EBX + 0x20024],0x0   ; 0058a189
    MOV dword ptr [EBX + 0x2002c],0x0   ; 0058a193
    MOV dword ptr [EBX + 0x20030],0x0   ; 0058a19d
    MOV dword ptr [EBX + 0x20028],0x3f800000 ; 0058a1a7
    MOV ESP,EBP                         ; 0058a1b1
        ;   Label: LAB_0058a1b1
    POP EBP                             ; 0058a1b3
    POP EDI                             ; 0058a1b4
    POP ESI                             ; 0058a1b5
    POP EBX                             ; 0058a1b6
    RET                                 ; 0058a1b7
    MOV dword ptr [EBX + 0x20024],0x0   ; 0058a1b8
        ;   Label: LAB_0058a1b8
    MOV dword ptr [EBX + 0x20058],0xffffffff ; 0058a1c2
    MOV dword ptr [EBX + 0x2002c],0x0   ; 0058a1cc
    MOV dword ptr [EBX + 0x20030],0x0   ; 0058a1d6
    MOV dword ptr [EBX + 0x20028],0x0   ; 0058a1e0
    MOV ESP,EBP                         ; 0058a1ea
    POP EBP                             ; 0058a1ec
    POP EDI                             ; 0058a1ed
    POP ESI                             ; 0058a1ee
    POP EBX                             ; 0058a1ef
    RET                                 ; 0058a1f0
    FLD float ptr [EBX + 0x20024]       ; 0058a1f1
        ;   Label: LAB_0058a1f1
    FST double ptr [ESP]                ; 0058a1f7
    FABS                                ; 0058a1fa
    FLD1                                ; 0058a1fc
    FSUB double ptr [ESP + 0x8]         ; 0058a1fe
    FMUL float ptr [EBP + 0x18]         ; 0058a202
    FMUL double ptr [0x005f6ae1]        ; 0058a205 | DAT_005f6ae1
    FST float ptr [ESP + 0x10]          ; 0058a20b
    FCOMPP                              ; 0058a20f
    FNSTSW AX                           ; 0058a211
    SAHF                                ; 0058a213
    JBE 0x0058a225                      ; 0058a214
        ;   XREF to: 0058a225 (CONDITIONAL_JUMP)  ; LAB_0058a225
    MOV dword ptr [EBX + 0x20024],0x0   ; 0058a216
    JMP 0x0058a087                      ; 0058a220
        ;   XREF to: 0058a087 (UNCONDITIONAL_JUMP)  ; LAB_0058a087
    FLDZ                                ; 0058a225
        ;   Label: LAB_0058a225
    FCOMP double ptr [ESP]              ; 0058a227
    FNSTSW AX                           ; 0058a22a
    SAHF                                ; 0058a22c
    JBE 0x0058a244                      ; 0058a22d
        ;   XREF to: 0058a244 (CONDITIONAL_JUMP)  ; LAB_0058a244
    FLD float ptr [EBX + 0x20024]       ; 0058a22f
    FADD float ptr [ESP + 0x10]         ; 0058a235
    FSTP float ptr [EBX + 0x20024]      ; 0058a239
    JMP 0x0058a087                      ; 0058a23f
        ;   XREF to: 0058a087 (UNCONDITIONAL_JUMP)  ; LAB_0058a087
    FLD float ptr [EBX + 0x20024]       ; 0058a244
        ;   Label: LAB_0058a244
    FSUB float ptr [ESP + 0x10]         ; 0058a24a
    FSTP float ptr [EBX + 0x20024]      ; 0058a24e
    JMP 0x0058a087                      ; 0058a254
        ;   XREF to: 0058a087 (UNCONDITIONAL_JUMP)  ; LAB_0058a087
    MOV dword ptr [EBX + 0x20030],0x0   ; 0058a259
        ;   Label: LAB_0058a259
    JMP 0x0058a0dd                      ; 0058a263
        ;   XREF to: 0058a0dd (UNCONDITIONAL_JUMP)  ; LAB_0058a0dd
    FLD float ptr [EBX + 0x20030]       ; 0058a268
        ;   Label: LAB_0058a268
    FLD1                                ; 0058a26e
    FCOMPP                              ; 0058a270
    FNSTSW AX                           ; 0058a272
    SAHF                                ; 0058a274
    JC 0x0058a101                       ; 0058a275
        ;   XREF to: 0058a101 (CONDITIONAL_JUMP)  ; LAB_0058a101
    JMP 0x0058a115                      ; 0058a27b
        ;   XREF to: 0058a115 (UNCONDITIONAL_JUMP)  ; LAB_0058a115
    FLD float ptr [EBP + 0x18]          ; 0058a280
        ;   Label: LAB_0058a280
    FDIV float ptr [ESP + 0x28]         ; 0058a283
    JMP 0x0058a160                      ; 0058a287
        ;   XREF to: 0058a160 (UNCONDITIONAL_JUMP)  ; LAB_0058a160
    FLD float ptr [EBX + 0x20024]       ; 0058a28c
        ;   Label: LAB_0058a28c
    FMUL float ptr [ESP + 0x2c]         ; 0058a292
    FLD float ptr [ESP + 0x14]          ; 0058a296
    FLD1                                ; 0058a29a
    FSUBRP                              ; 0058a29c
    FDIVP                               ; 0058a29e
    FSUBR float ptr [EBX + 0x20024]     ; 0058a2a0
    FSTP float ptr [EBX + 0x20024]      ; 0058a2a6
    MOV ESP,EBP                         ; 0058a2ac
    POP EBP                             ; 0058a2ae
    POP EDI                             ; 0058a2af
    POP ESI                             ; 0058a2b0
    POP EBX                             ; 0058a2b1
    RET                                 ; 0058a2b2
    FLD float ptr [EBX + 0x20024]       ; 0058a2b3
        ;   Label: LAB_0058a2b3
    FMUL float ptr [0x005f6af9]         ; 0058a2b9 | DAT_005f6af9
    FABS                                ; 0058a2bf
    MOV ESI,dword ptr [EBX + 0x20058]   ; 0058a2c1
    FSTP float ptr [ESP + 0x1c]         ; 0058a2c7
    CMP EDX,ESI                         ; 0058a2cb
    JZ 0x0058a2d5                       ; 0058a2cd
        ;   XREF to: 0058a2d5 (CONDITIONAL_JUMP)  ; LAB_0058a2d5
    XOR EDI,EDI                         ; 0058a2cf
    MOV dword ptr [ESP + 0x1c],EDI      ; 0058a2d1
    FLD float ptr [ESP + 0x1c]          ; 0058a2d5
        ;   Label: LAB_0058a2d5
    FLD1                                ; 0058a2d9
    FCOMPP                              ; 0058a2db
    FNSTSW AX                           ; 0058a2dd
    SAHF                                ; 0058a2df
    JNC 0x0058a2ea                      ; 0058a2e0
        ;   XREF to: 0058a2ea (CONDITIONAL_JUMP)  ; LAB_0058a2ea
    MOV dword ptr [ESP + 0x1c],0x3f800000 ; 0058a2e2
    FLD float ptr [ESP + 0x1c]          ; 0058a2ea
        ;   Label: LAB_0058a2ea
    FSUB float ptr [EBX + 0x20028]      ; 0058a2ee
    FADD float ptr [EBX + 0x20028]      ; 0058a2f4
    FST float ptr [EBX + 0x20028]       ; 0058a2fa
    FCOMP double ptr [0x005f6b01]       ; 0058a300 | DAT_005f6b01
    FNSTSW AX                           ; 0058a306
    SAHF                                ; 0058a308
    JBE 0x0058a1b1                      ; 0058a309
        ;   XREF to: 0058a1b1 (CONDITIONAL_JUMP)  ; LAB_0058a1b1
    MOV dword ptr [EBX + 0x20058],EDX   ; 0058a30f
    MOV ESP,EBP                         ; 0058a315
    POP EBP                             ; 0058a317
    POP EDI                             ; 0058a318
    POP ESI                             ; 0058a319
    POP EBX                             ; 0058a31a
    RET                                 ; 0058a31b

