; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005861d0(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d81eb
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045bef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005861d0
        ;   Label: core_xform.cpp_FUN_005861d0
    PUSH EDI                            ; 005861d1
    SUB ESP,0x3c                        ; 005861d2
    MOV EBX,ESI                         ; 005861d5
    MOV ESI,dword ptr [ESP + 0x48]      ; 005861d7
    FLD float ptr [ESI]                 ; 005861db
    LEA EAX,[ESP + 0x24]                ; 005861dd
    FMUL float ptr [0x005d81eb]         ; 005861e1 | DAT_005d81eb
    PUSH EAX                            ; 005861e7
    LEA EAX,[ESP + 0x20]                ; 005861e8
    PUSH EAX                            ; 005861ec
    LEA EAX,[ESP + 0x18]                ; 005861ed
    PUSH EAX                            ; 005861f1
    FSTP float ptr [ESP + 0x30]         ; 005861f2
    CALL core_dirmat.cpp_FUN_0045bef0   ; 005861f6
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    FLD float ptr [ESI + 0x8]           ; 005861fb
    LEA EAX,[ESP + 0x34]                ; 005861fe
    ADD ESP,0xc                         ; 00586202
    FMUL float ptr [0x005d81eb]         ; 00586205 | DAT_005d81eb
    PUSH EAX                            ; 0058620b
    LEA EAX,[ESP + 0x38]                ; 0058620c
    PUSH EAX                            ; 00586210
    LEA EAX,[ESP + 0x1c]                ; 00586211
    PUSH EAX                            ; 00586215
    FSTP float ptr [ESP + 0x34]         ; 00586216
    CALL core_dirmat.cpp_FUN_0045bef0   ; 0058621a
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    FLD float ptr [ESI + 0x4]           ; 0058621f
    LEA EAX,[ESP + 0x38]                ; 00586222
    ADD ESP,0xc                         ; 00586226
    FMUL float ptr [0x005d81eb]         ; 00586229 | DAT_005d81eb
    PUSH EAX                            ; 0058622f
    LEA EAX,[ESP + 0x24]                ; 00586230
    PUSH EAX                            ; 00586234
    LEA EAX,[ESP + 0x20]                ; 00586235
    PUSH EAX                            ; 00586239
    FSTP float ptr [ESP + 0x38]         ; 0058623a
    CALL core_dirmat.cpp_FUN_0045bef0   ; 0058623e
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    ADD ESP,0xc                         ; 00586243
    FLD float ptr [ESP + 0x1c]          ; 00586246
    FMUL float ptr [ESP + 0x34]         ; 0058624a
    FLD float ptr [ESP + 0x10]          ; 0058624e
    FMUL float ptr [ESP + 0x34]         ; 00586252
    FLD float ptr [ESP + 0x10]          ; 00586256
    FCHS                                ; 0058625a
    FMUL float ptr [ESP + 0x34]         ; 0058625c
    FXCH                                ; 00586260
    FMUL float ptr [ESP + 0x18]         ; 00586262
    FXCH                                ; 00586266
    FMUL float ptr [ESP + 0x20]         ; 00586268
    FXCH ST2                            ; 0058626c
    FST float ptr [ESP + 0x30]          ; 0058626e
    FMUL float ptr [ESP + 0x20]         ; 00586272
    FLD float ptr [ESP + 0x1c]          ; 00586276
    FMUL float ptr [ESP + 0x14]         ; 0058627a
    FLD float ptr [ESP + 0x10]          ; 0058627e
    FMUL float ptr [ESP + 0x14]         ; 00586282
    FLD ST1                             ; 00586286
    FMUL float ptr [ESP + 0x18]         ; 00586288
    FXCH ST2                            ; 0058628c
    FMUL float ptr [ESP + 0x20]         ; 0058628e
    FLD ST1                             ; 00586292
    FMUL float ptr [ESP + 0x18]         ; 00586294
    FXCH ST3                            ; 00586298
    FSUBP ST6,ST0                       ; 0058629a
    FXCH                                ; 0058629c
    FMUL float ptr [ESP + 0x20]         ; 0058629e
    FXCH ST5                            ; 005862a2
    FSTP float ptr [ESP + 0x4]          ; 005862a4
    FLD float ptr [ESP + 0x30]          ; 005862a8
    FMUL float ptr [ESP + 0x18]         ; 005862ac
    MOV EDI,EBX                         ; 005862b0
    FXCH                                ; 005862b2
    FSUBP ST4,ST0                       ; 005862b4
    MOV ESI,ESP                         ; 005862b6
    FXCH ST3                            ; 005862b8
    FSTP float ptr [ESP + 0xc]          ; 005862ba
    FADDP                               ; 005862be
    FXCH                                ; 005862c0
    FSUBP ST2,ST0                       ; 005862c2
    FSTP float ptr [ESP]                ; 005862c4
    FSTP float ptr [ESP + 0x8]          ; 005862c7
    MOVSD ES:EDI,ESI                    ; 005862cb
    MOVSD ES:EDI,ESI                    ; 005862cc
    MOVSD ES:EDI,ESI                    ; 005862cd
    MOVSD ES:EDI,ESI                    ; 005862ce
    MOV EAX,EBX                         ; 005862cf
    ADD ESP,0x3c                        ; 005862d1
    POP EDI                             ; 005862d4
    POP EBX                             ; 005862d5
    RET                                 ; 005862d6

