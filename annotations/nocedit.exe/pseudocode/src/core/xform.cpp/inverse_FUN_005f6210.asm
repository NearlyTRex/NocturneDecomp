; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_in
; Local Variables:
; undefined8       Stack[-0x98]:8  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[13]:
;   core_charactr.cpp_CCharacter_FUN_0042d090 at 0042d24b
;   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 at 0042cf63
;   core_cloth.cpp_FUN_0043a2b0 at 0043a300
;   core_mirror.cpp_setupMirrorReflection_FUN_005214c0 at 005218a7
;   core_skeledit.cpp_FUN_0058ac80 at 0058acf9
;   core_skeledit.cpp_FUN_0058aeb0 at 0058aedd
;   core_skeledit.cpp_FUN_0058bd00 at 0058c010
;   core_skeledit.cpp_FUN_0058c190 at 0058c3bf
;   core_skeledit.cpp_FUN_00592690 at 00595bfa
;   core_tentacle.cpp_CTentacle_process_FUN_005db050 at 005db32e
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_core_xform_cpp_00658389
;   TerminatedCString s_inverse_Singular_matrix_0065839b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_xform.cpp_determinant_FUN_005f61c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f6210
        ;   Label: core_xform.cpp_inverse_FUN_005f6210
    PUSH EDI                            ; 005f6211
    PUSH EBP                            ; 005f6212
    MOV EBP,ESP                         ; 005f6213
    SUB ESP,0x8c                        ; 005f6215
    AND ESP,0xfffffff8                  ; 005f621b
    MOV EBX,dword ptr [EBP + 0x10]      ; 005f621e
    MOV dword ptr [ESP + 0x88],ESI      ; 005f6221
    PUSH EBX                            ; 005f6228
    CALL core_xform.cpp_determinant_FUN_005f61c0 ; 005f6229
        ;   XREF to: 005f61c0 (UNCONDITIONAL_CALL)  ; double core_xform.cpp_determinant_FUN_005f61c0(CMatrix3x4f * matrix)
    MOV dword ptr [ESP + 0x7c],EAX      ; 005f622e
    MOV dword ptr [ESP + 0x80],EDX      ; 005f6232
    FLD double ptr [ESP + 0x7c]         ; 005f6239
    ADD ESP,0x4                         ; 005f623d
    FSTP double ptr [ESP]               ; 005f6240
    MOV EDX,dword ptr [ESP + 0x4]       ; 005f6243
    MOV ECX,dword ptr [ESP]             ; 005f6247
    TEST EDX,0x7fffffff                 ; 005f624a
    JNZ 0x005f625a                      ; 005f6250
        ;   XREF to: 005f625a (CONDITIONAL_JUMP)  ; LAB_005f625a
    TEST ECX,ECX                        ; 005f6252
    JZ 0x005f6431                       ; 005f6254
        ;   XREF to: 005f6431 (CONDITIONAL_JUMP)  ; LAB_005f6431
    FLD float ptr [EBX + 0x14]          ; 005f625a
        ;   Label: LAB_005f625a
    FMUL float ptr [EBX + 0x28]         ; 005f625d
    FLD float ptr [EBX + 0x10]          ; 005f6260
    FMUL float ptr [EBX + 0x28]         ; 005f6263
    FLD float ptr [EBX + 0x10]          ; 005f6266
    FMUL float ptr [EBX + 0x24]         ; 005f6269
    FLD float ptr [EBX + 0x4]           ; 005f626c
    FMUL float ptr [EBX + 0x28]         ; 005f626f
    FLD float ptr [EBX + 0x8]           ; 005f6272
    FMUL float ptr [EBX + 0x20]         ; 005f6275
    FLD float ptr [EBX + 0x18]          ; 005f6278
    FMUL float ptr [EBX + 0x24]         ; 005f627b
    FLD float ptr [EBX + 0x18]          ; 005f627e
    FXCH                                ; 005f6281
    FSUBP ST6,ST0                       ; 005f6283
    FMUL float ptr [EBX + 0x20]         ; 005f6285
    FXCH ST5                            ; 005f6288
    FSTP double ptr [ESP + 0x38]        ; 005f628a
    FLD float ptr [EBX + 0x4]           ; 005f628e
    FMUL float ptr [EBX + 0x20]         ; 005f6291
    FXCH ST5                            ; 005f6294
    FSUBP ST4,ST0                       ; 005f6296
    FLD1                                ; 005f6298
    FXCH ST4                            ; 005f629a
    FCHS                                ; 005f629c
    FSTP double ptr [ESP + 0x70]        ; 005f629e
    FLD float ptr [EBX + 0x14]          ; 005f62a2
    FMUL float ptr [EBX + 0x20]         ; 005f62a5
    FXCH ST4                            ; 005f62a8
    FDIV double ptr [ESP]               ; 005f62aa
    FLD float ptr [EBX + 0x4]           ; 005f62ad
    FMUL float ptr [EBX + 0x18]         ; 005f62b0
    FXCH ST5                            ; 005f62b3
    FSUBP ST4,ST0                       ; 005f62b5
    FXCH ST3                            ; 005f62b7
    FSTP double ptr [ESP + 0x50]        ; 005f62b9
    FLD float ptr [EBX + 0x8]           ; 005f62bd
    FMUL float ptr [EBX + 0x24]         ; 005f62c0
    FLD float ptr [EBX + 0x8]           ; 005f62c3
    FXCH                                ; 005f62c6
    FSUBP ST3,ST0                       ; 005f62c8
    FMUL float ptr [EBX + 0x10]         ; 005f62ca
    FXCH ST2                            ; 005f62cd
    FCHS                                ; 005f62cf
    FSTP double ptr [ESP + 0x40]        ; 005f62d1
    FLD float ptr [EBX]                 ; 005f62d5
    FMUL float ptr [EBX + 0x28]         ; 005f62d7
    FLD float ptr [EBX + 0x4]           ; 005f62da
    FMUL float ptr [EBX + 0x10]         ; 005f62dd
    FXCH                                ; 005f62e0
    FSUBRP ST2,ST0                      ; 005f62e2
    FXCH                                ; 005f62e4
    FSTP double ptr [ESP + 0x48]        ; 005f62e6
    FLD float ptr [EBX]                 ; 005f62ea
    FMUL float ptr [EBX + 0x24]         ; 005f62ec
    FLD float ptr [EBX + 0x8]           ; 005f62ef
    FXCH                                ; 005f62f2
    FSUBRP ST6,ST0                      ; 005f62f4
    FMUL float ptr [EBX + 0x14]         ; 005f62f6
    FXCH ST5                            ; 005f62f9
    FCHS                                ; 005f62fb
    FSTP double ptr [ESP + 0x80]        ; 005f62fd
    FLD float ptr [EBX]                 ; 005f6304
    FMUL float ptr [EBX + 0x18]         ; 005f6306
    FLD float ptr [EBX]                 ; 005f6309
    FMUL float ptr [EBX + 0x14]         ; 005f630b
    FXCH ST6                            ; 005f630e
    FSUBP ST5,ST0                       ; 005f6310
    FLD double ptr [ESP + 0x38]         ; 005f6312
    FXCH ST4                            ; 005f6316
    FSTP double ptr [ESP]               ; 005f6318
    FXCH ST3                            ; 005f631b
    FMUL double ptr [ESP]               ; 005f631d
    FXCH ST3                            ; 005f6320
    FSUBRP ST2,ST0                      ; 005f6322
    FLD double ptr [ESP + 0x40]         ; 005f6324
    FMUL double ptr [ESP]               ; 005f6328
    FXCH ST2                            ; 005f632b
    FCHS                                ; 005f632d
    FXCH ST4                            ; 005f632f
    FMUL double ptr [ESP]               ; 005f6331
    FLD double ptr [ESP + 0x70]         ; 005f6334
    FMUL double ptr [ESP]               ; 005f6338
    FXCH ST6                            ; 005f633b
    FSUBRP ST2,ST0                      ; 005f633d
    FXCH                                ; 005f633f
    FSTP double ptr [ESP + 0x68]        ; 005f6341
    FLD double ptr [ESP + 0x48]         ; 005f6345
    FMUL double ptr [ESP]               ; 005f6349
    FXCH ST4                            ; 005f634c
    FMUL double ptr [ESP]               ; 005f634e
    FLD double ptr [ESP + 0x50]         ; 005f6351
    FMUL double ptr [ESP]               ; 005f6355
    FXCH ST4                            ; 005f6358
    FSTP float ptr [ESP + 0x8]          ; 005f635a
    FLD double ptr [ESP + 0x80]         ; 005f635e
    FMUL double ptr [ESP]               ; 005f6365
    FXCH ST3                            ; 005f6368
    FSTP float ptr [ESP + 0xc]          ; 005f636a
    FLD double ptr [ESP + 0x68]         ; 005f636e
    FMUL double ptr [ESP]               ; 005f6372
    FXCH ST2                            ; 005f6375
    FSTP float ptr [ESP + 0x10]         ; 005f6377
    FLD float ptr [EBX + 0x1c]          ; 005f637b
    FMUL float ptr [ESP + 0xc]          ; 005f637e
    FXCH ST6                            ; 005f6382
    FSTP float ptr [ESP + 0x18]         ; 005f6384
    FLD float ptr [EBX + 0xc]           ; 005f6388
    FMUL float ptr [ESP + 0x18]         ; 005f638b
    FXCH ST5                            ; 005f638f
    FSTP float ptr [ESP + 0x1c]         ; 005f6391
    FLD float ptr [EBX + 0xc]           ; 005f6395
    FXCH ST4                            ; 005f6398
    FSTP float ptr [ESP + 0x28]         ; 005f639a
    FXCH ST3                            ; 005f639e
    FMUL float ptr [ESP + 0x28]         ; 005f63a0
    FXCH ST3                            ; 005f63a4
    FSTP float ptr [ESP + 0x20]         ; 005f63a6
    FLD float ptr [EBX + 0xc]           ; 005f63aa
    FMUL float ptr [ESP + 0x8]          ; 005f63ad
    FLD float ptr [EBX + 0x1c]          ; 005f63b1
    FMUL float ptr [ESP + 0x1c]         ; 005f63b4
    FXCH ST3                            ; 005f63b8
    FSTP float ptr [ESP + 0x2c]         ; 005f63ba
    FLD float ptr [EBX + 0x1c]          ; 005f63be
    FMUL float ptr [ESP + 0x2c]         ; 005f63c1
    FXCH                                ; 005f63c5
    FADDP ST6,ST0                       ; 005f63c7
    FXCH ST2                            ; 005f63c9
    FADDP ST4,ST0                       ; 005f63cb
    FLD float ptr [EBX + 0x2c]          ; 005f63cd
    FMUL float ptr [ESP + 0x10]         ; 005f63d0
    FLD float ptr [EBX + 0x2c]          ; 005f63d4
    FMUL float ptr [ESP + 0x20]         ; 005f63d7
    FXCH ST3                            ; 005f63db
    FADDP ST4,ST0                       ; 005f63dd
    FXCH                                ; 005f63df
    FSTP float ptr [ESP + 0x30]         ; 005f63e1
    FLD float ptr [EBX + 0x2c]          ; 005f63e5
    FMUL float ptr [ESP + 0x30]         ; 005f63e8
    FXCH                                ; 005f63ec
    FADDP ST5,ST0                       ; 005f63ee
    FXCH                                ; 005f63f0
    FADDP ST3,ST0                       ; 005f63f2
    FADDP                               ; 005f63f4
    FXCH ST2                            ; 005f63f6
    FCHS                                ; 005f63f8
    FXCH                                ; 005f63fa
    FCHS                                ; 005f63fc
    FXCH ST2                            ; 005f63fe
    FCHS                                ; 005f6400
    FXCH                                ; 005f6402
    FSTP float ptr [ESP + 0x14]         ; 005f6404
    FXCH                                ; 005f6408
    FSTP float ptr [ESP + 0x24]         ; 005f640a
    FSTP float ptr [ESP + 0x34]         ; 005f640e
    MOV ECX,0xc                         ; 005f6412
    MOV EDI,dword ptr [ESP + 0x88]      ; 005f6417
    LEA ESI,[ESP + 0x8]                 ; 005f641e
    MOVSD.REP ES:EDI,ESI                ; 005f6422
    MOV EAX,dword ptr [ESP + 0x88]      ; 005f6424
    MOV ESP,EBP                         ; 005f642b
    POP EBP                             ; 005f642d
    POP EDI                             ; 005f642e
    POP EBX                             ; 005f642f
    RET                                 ; 005f6430
    MOV ESI,0x658389                    ; 005f6431 | = "..\\core\\xform.cpp"
        ;   Label: LAB_005f6431
    MOV EDI,0x23e                       ; 005f6436
    PUSH 0x65839b                       ; 005f643b | = "inverse() - Singular matrix"
    MOV dword ptr [0x02f0ca48],ESI      ; 005f6440 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005f6446 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005f644c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005f6451
    JMP 0x005f625a                      ; 005f6454
        ;   XREF to: 005f625a (UNCONDITIONAL_JUMP)  ; LAB_005f625a

