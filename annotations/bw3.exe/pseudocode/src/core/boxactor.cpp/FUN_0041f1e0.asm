; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_FUN_0041f1e0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x7c]:1  local_7c
;
; XREF[4]:
;   core_boxactor.cpp_CBoxActor_onDropped_FUN_00420100 at 00420113
;   core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_00420290 at 00420307
;   core_boxactor.cpp_FUN_0041f130 at 0041f1c7
;   core_boxactor.cpp_FUN_0041ff20 at 0042007d
;
; Referenced Globals:
;   undefined4 DAT_005b74ed
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_box.cpp_CBox_setupCorners_FUN_0041ae00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f1e0
        ;   Label: core_boxactor.cpp_FUN_0041f1e0
    SUB ESP,0x90                        ; 0041f1e1
    MOV EBX,dword ptr [ESP + 0x98]      ; 0041f1e7
    FLD float ptr [EBX + 0x390]         ; 0041f1ee
    FLDZ                                ; 0041f1f4
    MOV dword ptr [EBX + 0x5e8],0x0     ; 0041f1f6
    FCOMPP                              ; 0041f200
    FNSTSW AX                           ; 0041f202
    SAHF                                ; 0041f204
    JNC 0x0041f229                      ; 0041f205
        ;   XREF to: 0041f229 (CONDITIONAL_JUMP)  ; LAB_0041f229
    CMP dword ptr [EBX + 0x68],0x78a123 ; 0041f207 | DAT_0078a123
    JNZ 0x0041f229                      ; 0041f20e
        ;   XREF to: 0041f229 (CONDITIONAL_JUMP)  ; LAB_0041f229
    LEA EAX,[EBX + 0x158]               ; 0041f210
    CMP dword ptr [EAX + 0x178],0x0     ; 0041f216
    JNZ 0x0041f231                      ; 0041f21d
        ;   XREF to: 0041f231 (CONDITIONAL_JUMP)  ; LAB_0041f231
    MOV dword ptr [EBX + 0x5e8],0xffffffff ; 0041f21f
    ADD ESP,0x90                        ; 0041f229
        ;   Label: LAB_0041f229
    POP EBX                             ; 0041f22f
    RET                                 ; 0041f230
    PUSH EDI                            ; 0041f231
        ;   Label: LAB_0041f231
    PUSH ESI                            ; 0041f232
    PUSH EBX                            ; 0041f233
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041f234
    LEA ESI,[ESP + 0xc]                 ; 0041f23a
    LEA EDI,[ESP + 0x24]                ; 0041f23e
    CALL dword ptr [EAX + 0x1c]         ; 0041f242
    MOV ECX,0x6                         ; 0041f245
    LEA ESI,[ESP + 0xc]                 ; 0041f24a
    ADD ESP,0x4                         ; 0041f24e
    MOVSD.REP ES:EDI,ESI                ; 0041f251
    FLD float ptr [ESP + 0x20]          ; 0041f253
    FLD float ptr [ESP + 0x24]          ; 0041f257
    FLD float ptr [ESP + 0x28]          ; 0041f25b
    LEA EDI,[ESP + 0x80]                ; 0041f25f
    LEA ESI,[ESP + 0x8c]                ; 0041f266
    FXCH ST2                            ; 0041f26d
    FADD float ptr [ESP + 0x2c]         ; 0041f26f
    FXCH                                ; 0041f273
    FADD float ptr [ESP + 0x30]         ; 0041f275
    FXCH ST2                            ; 0041f279
    FADD float ptr [ESP + 0x34]         ; 0041f27b
    FXCH                                ; 0041f27f
    FSTP float ptr [ESP + 0x8c]         ; 0041f281
    FXCH                                ; 0041f288
    FSTP float ptr [ESP + 0x90]         ; 0041f28a
    FSTP float ptr [ESP + 0x94]         ; 0041f291
    MOVSD ES:EDI,ESI                    ; 0041f298
    MOVSD ES:EDI,ESI                    ; 0041f299
    MOVSD ES:EDI,ESI                    ; 0041f29a
    FLD float ptr [0x005b74ed]          ; 0041f29b | DAT_005b74ed
    FLD float ptr [ESP + 0x80]          ; 0041f2a1
    FMUL ST1                            ; 0041f2a8
    FLD float ptr [ESP + 0x84]          ; 0041f2aa
    FMUL ST2                            ; 0041f2b1
    FLD float ptr [ESP + 0x88]          ; 0041f2b3
    FMULP ST3                           ; 0041f2ba
    LEA EDI,[ESP + 0x74]                ; 0041f2bc
    LEA ESI,[ESP + 0x68]                ; 0041f2c0
    FXCH                                ; 0041f2c4
    FSTP float ptr [ESP + 0x68]         ; 0041f2c6
    FSTP float ptr [ESP + 0x6c]         ; 0041f2ca
    FSTP float ptr [ESP + 0x70]         ; 0041f2ce
    MOVSD ES:EDI,ESI                    ; 0041f2d2
    MOVSD ES:EDI,ESI                    ; 0041f2d3
    MOVSD ES:EDI,ESI                    ; 0041f2d4
    LEA ESI,[ESP + 0x74]                ; 0041f2d5
    PUSH ESI                            ; 0041f2d9
    PUSH EBX                            ; 0041f2da
    LEA ESI,[ESP + 0x64]                ; 0041f2db
    LEA EDI,[ESP + 0x58]                ; 0041f2df
    CALL core_actor.cpp_FUN_00408b80    ; 0041f2e3
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0041f2e8
    LEA ESI,[ESP + 0x5c]                ; 0041f2eb
    FLD float ptr [ESP + 0x2c]          ; 0041f2ef
    FLD float ptr [ESP + 0x30]          ; 0041f2f3
    MOVSD ES:EDI,ESI                    ; 0041f2f7
    MOVSD ES:EDI,ESI                    ; 0041f2f8
    MOVSD ES:EDI,ESI                    ; 0041f2f9
    FLD float ptr [ESP + 0x34]          ; 0041f2fa
    LEA EDI,[ESP + 0x44]                ; 0041f2fe
    LEA ESI,[ESP + 0x38]                ; 0041f302
    FXCH ST2                            ; 0041f306
    FSUB float ptr [ESP + 0x20]         ; 0041f308
    FXCH                                ; 0041f30c
    FSUB float ptr [ESP + 0x24]         ; 0041f30e
    FXCH ST2                            ; 0041f312
    FSUB float ptr [ESP + 0x28]         ; 0041f314
    FXCH                                ; 0041f318
    FSTP float ptr [ESP + 0x38]         ; 0041f31a
    FXCH                                ; 0041f31e
    FSTP float ptr [ESP + 0x3c]         ; 0041f320
    FSTP float ptr [ESP + 0x40]         ; 0041f324
    MOVSD ES:EDI,ESI                    ; 0041f328
    MOVSD ES:EDI,ESI                    ; 0041f329
    MOVSD ES:EDI,ESI                    ; 0041f32a
    LEA EAX,[ESP + 0x44]                ; 0041f32b
    PUSH dword ptr [EBX + 0x390]        ; 0041f32f
    PUSH EAX                            ; 0041f335
    LEA EAX,[EBX + 0x30]                ; 0041f336
    PUSH EAX                            ; 0041f339
    LEA EAX,[ESP + 0x5c]                ; 0041f33a
    PUSH EAX                            ; 0041f33e
    ADD EBX,0x394                       ; 0041f33f
    PUSH EBX                            ; 0041f345
    CALL core_box.cpp_CBox_setupCorners_FUN_0041ae00 ; 0041f346
        ;   XREF to: 0041ae00 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041ae00(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 0041f34b
    POP ESI                             ; 0041f34e
    POP EDI                             ; 0041f34f
    ADD ESP,0x90                        ; 0041f350
    POP EBX                             ; 0041f356
    RET                                 ; 0041f357

