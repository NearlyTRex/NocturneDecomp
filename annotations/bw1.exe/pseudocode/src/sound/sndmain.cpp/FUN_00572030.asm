; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00572030(int param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   FUN_00571420 at 00571838
;   FUN_00571fa0 at 00572015
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3ae5
;   TerminatedCString s_SfxSlot_updatePlaybackPo_005f3afa
;   TerminatedCString s_sound_sndmain_cpp_005f3b24
;   TerminatedCString s_SfxSlot_updatePlaybackPo_005f3b39
;   TerminatedCString s_sound_sndmain_cpp_005f3b6e
;   TerminatedCString s_SfxSlot_updatePlaybackPo_005f3b83
;   undefined4 DAT_005f3bd0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_00572680
;   FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572030
        ;   Label: FUN_00572030
    PUSH ESI                            ; 00572031
    PUSH EDI                            ; 00572032
    PUSH EBP                            ; 00572033
    MOV EBP,ESP                         ; 00572034
    SUB ESP,0x18                        ; 00572036
    AND ESP,0xfffffff8                  ; 00572039
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057203c
    CMP dword ptr [EBX + 0x68],0x0      ; 0057203f
    JZ 0x00572166                       ; 00572043
        ;   XREF to: 00572166 (CONDITIONAL_JUMP)  ; LAB_00572166
    FLDZ                                ; 00572049
        ;   Label: LAB_00572049
    FCOMP double ptr [EBP + 0x18]       ; 0057204b
    FNSTSW AX                           ; 0057204e
    SAHF                                ; 00572050
    JBE 0x0057218e                      ; 00572051
        ;   XREF to: 0057218e (CONDITIONAL_JUMP)  ; LAB_0057218e
    MOV EDI,0x5f3b24                    ; 00572057 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00572057
    MOV EAX,0xd3a                       ; 0057205c
    PUSH 0x5f3b39                       ; 00572061 | = "SfxSlot::updatePlaybackPos - invalid ..."
    MOV dword ptr [0x01d1d400],EDI      ; 00572066 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0057206c | DAT_01d1d404
    CALL FUN_005030e0                   ; 00572071
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00572076
    FLD double ptr [EBP + 0x18]         ; 00572079
        ;   Label: LAB_00572079
    FSUB double ptr [EBX + 0x10c]       ; 0057207c
    FLDZ                                ; 00572082
    FXCH                                ; 00572084
    FSTP double ptr [ESP]               ; 00572086
    FCOMP double ptr [ESP]              ; 00572089
    FNSTSW AX                           ; 0057208c
    SAHF                                ; 0057208e
    JBE 0x005720a0                      ; 0057208f
        ;   XREF to: 005720a0 (CONDITIONAL_JUMP)  ; LAB_005720a0
    MOV EAX,dword ptr [EBX + 0x68]      ; 00572091
    FILD dword ptr [EAX + 0x164]        ; 00572094
    FADD double ptr [ESP]               ; 0057209a
    FSTP double ptr [ESP]               ; 0057209d
    FLDZ                                ; 005720a0
        ;   Label: LAB_005720a0
    FCOMP double ptr [ESP]              ; 005720a2
    FNSTSW AX                           ; 005720a5
    SAHF                                ; 005720a7
    JBE 0x005721a8                      ; 005720a8
        ;   XREF to: 005721a8 (CONDITIONAL_JUMP)  ; LAB_005721a8
    MOV ESI,dword ptr [EBX + 0x68]      ; 005720ae
        ;   Label: LAB_005720ae
    PUSH ESI                            ; 005720b1
    MOV EDI,dword ptr [ESI + 0x164]     ; 005720b2
    MOV EDX,0x5f3b6e                    ; 005720b8 | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 005720bd
    MOV EAX,dword ptr [ESP + 0xc]       ; 005720be
    MOV dword ptr [0x01d1d400],EDX      ; 005720c2 | DAT_01d1d400
    PUSH EAX                            ; 005720c8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005720c9
    MOV ECX,0xd48                       ; 005720cd
    PUSH EDX                            ; 005720d2
    MOV dword ptr [0x01d1d404],ECX      ; 005720d3 | DAT_01d1d404
    MOV ECX,dword ptr [EBX + 0x110]     ; 005720d9
    PUSH ECX                            ; 005720df
    MOV ESI,dword ptr [EBX + 0x10c]     ; 005720e0
    PUSH ESI                            ; 005720e6
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005720e7
    PUSH EDI                            ; 005720ea
    MOV EAX,dword ptr [EBP + 0x18]      ; 005720eb
    PUSH EAX                            ; 005720ee
    PUSH 0x5f3b83                       ; 005720ef | = "SfxSlot::updatePlaybackPos - stepped ..."
    CALL FUN_005030e0                   ; 005720f4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x24                        ; 005720f9
    FLD double ptr [EBX + 0x50]         ; 005720fc
        ;   Label: LAB_005720fc
    FCOMP double ptr [EBX + 0x10c]      ; 005720ff
    FNSTSW AX                           ; 00572105
    SAHF                                ; 00572107
    JZ 0x005721c8                       ; 00572108
        ;   XREF to: 005721c8 (CONDITIONAL_JUMP)  ; LAB_005721c8
    FLD double ptr [EBX + 0x50]         ; 0057210e
        ;   Label: LAB_0057210e
    FADD double ptr [ESP]               ; 00572111
    FSTP double ptr [EBX + 0x50]        ; 00572114
    FLDZ                                ; 00572117
        ;   Label: LAB_00572117
    FCOMP double ptr [EBX + 0x50]       ; 00572119
    FNSTSW AX                           ; 0057211c
    SAHF                                ; 0057211e
    JBE 0x0057212f                      ; 0057211f
        ;   XREF to: 0057212f (CONDITIONAL_JUMP)  ; LAB_0057212f
    MOV dword ptr [EBX + 0x50],0x0      ; 00572121
    MOV dword ptr [EBX + 0x54],0x0      ; 00572128
    MOV EDX,dword ptr [EBX + 0x68]      ; 0057212f
        ;   Label: LAB_0057212f
    CMP dword ptr [EDX + 0x110],0x0     ; 00572132
    JL 0x0057214d                       ; 00572139
        ;   XREF to: 0057214d (CONDITIONAL_JUMP)  ; LAB_0057214d
    FILD dword ptr [EDX + 0x110]        ; 0057213b
    FCOMP double ptr [EBX + 0x50]       ; 00572141
    FNSTSW AX                           ; 00572144
    SAHF                                ; 00572146
    JBE 0x005721e8                      ; 00572147
        ;   XREF to: 005721e8 (CONDITIONAL_JUMP)  ; LAB_005721e8
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057214d
        ;   Label: LAB_0057214d
    MOV dword ptr [EBX + 0x10c],EAX     ; 00572150
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00572156
    MOV dword ptr [EBX + 0x110],EAX     ; 00572159
    MOV ESP,EBP                         ; 0057215f
    POP EBP                             ; 00572161
    POP EDI                             ; 00572162
    POP ESI                             ; 00572163
    POP EBX                             ; 00572164
    RET                                 ; 00572165
    MOV ECX,0x5f3ae5                    ; 00572166 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00572166
    MOV ESI,0xd34                       ; 0057216b
    PUSH 0x5f3afa                       ; 00572170 | = "SfxSlot::updatePlaybackPos - no sampl..."
    MOV dword ptr [0x01d1d400],ECX      ; 00572175 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0057217b | DAT_01d1d404
    CALL FUN_005030e0                   ; 00572181
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00572186
    JMP 0x00572049                      ; 00572189
        ;   XREF to: 00572049 (UNCONDITIONAL_JUMP)  ; LAB_00572049
    MOV EAX,dword ptr [EBX + 0x68]      ; 0057218e
        ;   Label: LAB_0057218e
    FILD dword ptr [EAX + 0x164]        ; 00572191
    FCOMP double ptr [EBP + 0x18]       ; 00572197
    FNSTSW AX                           ; 0057219a
    SAHF                                ; 0057219c
    JC 0x00572057                       ; 0057219d
        ;   XREF to: 00572057 (CONDITIONAL_JUMP)  ; LAB_00572057
    JMP 0x00572079                      ; 005721a3
        ;   XREF to: 00572079 (UNCONDITIONAL_JUMP)  ; LAB_00572079
    MOV EAX,dword ptr [EBX + 0x68]      ; 005721a8
        ;   Label: LAB_005721a8
    FILD dword ptr [EAX + 0x164]        ; 005721ab
    FADD double ptr [0x005f3bd0]        ; 005721b1 | DAT_005f3bd0
    FCOMP double ptr [ESP]              ; 005721b7
    FNSTSW AX                           ; 005721ba
    SAHF                                ; 005721bc
    JC 0x005720ae                       ; 005721bd
        ;   XREF to: 005720ae (CONDITIONAL_JUMP)  ; LAB_005720ae
    JMP 0x005720fc                      ; 005721c3
        ;   XREF to: 005720fc (UNCONDITIONAL_JUMP)  ; LAB_005720fc
    FLD double ptr [EBP + 0x18]         ; 005721c8
        ;   Label: LAB_005721c8
    FCOMP double ptr [EBX + 0x50]       ; 005721cb
    FNSTSW AX                           ; 005721ce
    SAHF                                ; 005721d0
    JC 0x0057210e                       ; 005721d1
        ;   XREF to: 0057210e (CONDITIONAL_JUMP)  ; LAB_0057210e
    MOV EAX,dword ptr [EBP + 0x18]      ; 005721d7
    MOV dword ptr [EBX + 0x50],EAX      ; 005721da
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005721dd
    MOV dword ptr [EBX + 0x54],EAX      ; 005721e0
    JMP 0x00572117                      ; 005721e3
        ;   XREF to: 00572117 (UNCONDITIONAL_JUMP)  ; LAB_00572117
    PUSH EDX                            ; 005721e8
        ;   Label: LAB_005721e8
    CALL FUN_00572680                   ; 005721e9
        ;   XREF to: 00572680 (UNCONDITIONAL_CALL)  ; undefined FUN_00572680()
    ADD ESP,0x4                         ; 005721ee
    TEST EAX,EAX                        ; 005721f1
    JNZ 0x00572206                      ; 005721f3
        ;   XREF to: 00572206 (CONDITIONAL_JUMP)  ; LAB_00572206
    MOV EAX,dword ptr [EBX + 0x68]      ; 005721f5
    FILD dword ptr [EAX + 0x110]        ; 005721f8
    FSTP double ptr [EBX + 0x50]        ; 005721fe
    JMP 0x0057214d                      ; 00572201
        ;   XREF to: 0057214d (UNCONDITIONAL_JUMP)  ; LAB_0057214d
    MOV EAX,dword ptr [EBX + 0x68]      ; 00572206
        ;   Label: LAB_00572206
    FLD double ptr [EBX + 0x50]         ; 00572209
    FILD dword ptr [EAX + 0x110]        ; 0057220c
    FSTP double ptr [ESP + 0x10]        ; 00572212
    FDIV double ptr [ESP + 0x10]        ; 00572216
    SUB ESP,0x8                         ; 0057221a
    FSTP double ptr [ESP]               ; 0057221d
    CALL FUN_005c0880                   ; 00572220
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x10],EAX      ; 00572225
    MOV dword ptr [ESP + 0x14],EDX      ; 00572229
    FLD double ptr [ESP + 0x10]         ; 0057222d
    ADD ESP,0x8                         ; 00572231
    FMUL double ptr [ESP + 0x10]        ; 00572234
    FSUBR double ptr [EBX + 0x50]       ; 00572238
    FSTP double ptr [EBX + 0x50]        ; 0057223b
    JMP 0x0057214d                      ; 0057223e
        ;   XREF to: 0057214d (UNCONDITIONAL_JUMP)  ; LAB_0057214d

