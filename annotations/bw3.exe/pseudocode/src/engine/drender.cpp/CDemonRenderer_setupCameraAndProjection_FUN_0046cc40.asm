; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CMatrix3x3f *    Stack[0x8]:4   transform_matrix
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00449840 at 004499c2
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 at 004491fb
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530 at 0045c5ed
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070 at 004f40a5
;   core_moon.cpp_CMoon_render_FUN_004f9670 at 004f9722
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10 at 0046cc2d
;
; Referenced Globals:
;   undefined4 DAT_005bc4fb
;   undefined4 DAT_005bc503
;   undefined4 DAT_005bc50b
;   undefined4 DAT_005fba44
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01c6e2e4
;   undefined4 DAT_01c6e2e8
;   undefined4 DAT_01c6e2ec
;   undefined4 DAT_01c6e2fc
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e304
;   undefined4 DAT_01c6e308
;   ... and 5 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b9b0
;   crt_math.c_round_FUN_005a3120
;   engine_matrix.c_invertTransformMatrix_FUN_004e4e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cc40
        ;   Label: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
    PUSH ESI                            ; 0046cc41
    PUSH EDI                            ; 0046cc42
    PUSH EBP                            ; 0046cc43
    SUB ESP,0x18                        ; 0046cc44
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0046cc47
    MOV EBX,dword ptr [ESP + 0x30]      ; 0046cc4b
    PUSH EBX                            ; 0046cc4f
    LEA ESI,[ESP + 0x4]                 ; 0046cc50
    LEA EDI,[ESP + 0x10]                ; 0046cc54
    CALL core_dirmat.cpp_FUN_0045b9b0   ; 0046cc58
        ;   XREF to: 0045b9b0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b9b0()
    LEA ESI,[ESP + 0x4]                 ; 0046cc5d
    ADD ESP,0x4                         ; 0046cc61
    MOVSD ES:EDI,ESI                    ; 0046cc64
    MOVSD ES:EDI,ESI                    ; 0046cc65
    MOVSD ES:EDI,ESI                    ; 0046cc66
    FLD float ptr [0x005bc4fb]          ; 0046cc67 | DAT_005bc4fb
    FLD float ptr [ESP + 0xc]           ; 0046cc6d
    FMUL ST1                            ; 0046cc71
    FLD float ptr [ESP + 0x14]          ; 0046cc73
    FMUL ST2                            ; 0046cc77
    FLD float ptr [ESP + 0x10]          ; 0046cc79
    FMULP ST3                           ; 0046cc7d
    FLD float ptr [EBX]                 ; 0046cc7f
    FMUL double ptr [0x005bc50b]        ; 0046cc81 | DAT_005bc50b
    FLD float ptr [EBX + 0x4]           ; 0046cc87
    FMUL double ptr [0x005bc50b]        ; 0046cc8a | DAT_005bc50b
    FLD float ptr [EBX + 0x8]           ; 0046cc90
    FMUL double ptr [0x005bc50b]        ; 0046cc93 | DAT_005bc50b
    FLD float ptr [EBX + 0xc]           ; 0046cc99
    FMUL double ptr [0x005bc50b]        ; 0046cc9c | DAT_005bc50b
    FXCH ST5                            ; 0046cca2
    FMUL double ptr [0x005bc503]        ; 0046cca4 | DAT_005bc503
    FXCH ST4                            ; 0046ccaa
    FMUL double ptr [0x005bc503]        ; 0046ccac | DAT_005bc503
    FXCH ST6                            ; 0046ccb2
    FMUL double ptr [0x005bc503]        ; 0046ccb4 | DAT_005bc503
    FXCH ST3                            ; 0046ccba
    CALL crt_math.c_round_FUN_005a3120  ; 0046ccbc
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e2fc]        ; 0046ccc1 | DAT_01c6e2fc
    FLD float ptr [EBX + 0x10]          ; 0046ccc7
    FMUL double ptr [0x005bc50b]        ; 0046ccca | DAT_005bc50b
    FXCH ST2                            ; 0046ccd0
    CALL crt_math.c_round_FUN_005a3120  ; 0046ccd2
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e300]        ; 0046ccd7 | DAT_01c6e300
    FLD float ptr [EBX + 0x14]          ; 0046ccdd
    FMUL double ptr [0x005bc50b]        ; 0046cce0 | DAT_005bc50b
    FXCH                                ; 0046cce6
    CALL crt_math.c_round_FUN_005a3120  ; 0046cce8
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e304]        ; 0046cced | DAT_01c6e304
    FLD float ptr [EBX + 0x18]          ; 0046ccf3
    FMUL double ptr [0x005bc50b]        ; 0046ccf6 | DAT_005bc50b
    FXCH ST5                            ; 0046ccfc
    CALL crt_math.c_round_FUN_005a3120  ; 0046ccfe
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e308]        ; 0046cd03 | DAT_01c6e308
    FLD float ptr [EBX + 0x1c]          ; 0046cd09
    FMUL double ptr [0x005bc50b]        ; 0046cd0c | DAT_005bc50b
    MOV EDX,0x10000                     ; 0046cd12
    FXCH ST2                            ; 0046cd17
    CALL crt_math.c_round_FUN_005a3120  ; 0046cd19
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [0x01c6e30c]        ; 0046cd1e | DAT_01c6e30c
    FLD float ptr [EBX + 0x20]          ; 0046cd24
    FMUL double ptr [0x005bc50b]        ; 0046cd27 | DAT_005bc50b
    MOV EAX,EDX                         ; 0046cd2d
    MOV EBX,dword ptr [0x005fba44]      ; 0046cd2f | DAT_005fba44
    FXCH                                ; 0046cd35
    CALL crt_math.c_round_FUN_005a3120  ; 0046cd37
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST5                            ; 0046cd3c
    CALL crt_math.c_round_FUN_005a3120  ; 0046cd3e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 0046cd43
    CALL crt_math.c_round_FUN_005a3120  ; 0046cd45
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0046cd4a
    CALL crt_math.c_round_FUN_005a3120  ; 0046cd4c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST5                            ; 0046cd51
    FISTP dword ptr [0x01c6e310]        ; 0046cd53 | DAT_01c6e310
    FXCH                                ; 0046cd59
    FISTP dword ptr [0x01c6e314]        ; 0046cd5b | DAT_01c6e314
    FISTP dword ptr [0x01c6e318]        ; 0046cd61 | DAT_01c6e318
    FXCH ST2                            ; 0046cd67
    FISTP dword ptr [0x01c6e31c]        ; 0046cd69 | DAT_01c6e31c
    CALL crt_math.c_round_FUN_005a3120  ; 0046cd6f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 0046cd74
    CALL crt_math.c_round_FUN_005a3120  ; 0046cd76
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0046cd7b
    CALL crt_math.c_round_FUN_005a3120  ; 0046cd7d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 0046cd82
    FISTP dword ptr [0x01c6e2e4]        ; 0046cd84 | DAT_01c6e2e4
    FISTP dword ptr [0x01c6e2e8]        ; 0046cd8a | DAT_01c6e2e8
    FISTP dword ptr [0x01c6e2ec]        ; 0046cd90 | DAT_01c6e2ec
    IMUL EDX                            ; 0046cd96
    IDIV EBX                            ; 0046cd98
    MOV EDX,dword ptr [0x01c6b5b0]      ; 0046cd9a | DAT_01c6b5b0
    MOV ECX,dword ptr [0x01c6b5a8]      ; 0046cda0 | DAT_01c6b5a8
    MOV EBX,dword ptr [0x01c6b5b4]      ; 0046cda6 | DAT_01c6b5b4
    MOV ESI,dword ptr [0x01c6b5ac]      ; 0046cdac | DAT_01c6b5ac
    SUB EDX,ECX                         ; 0046cdb2
    MOV dword ptr [EBP + 0x24],EAX      ; 0046cdb4
    INC EDX                             ; 0046cdb7
    SUB EBX,ESI                         ; 0046cdb8
    SHL EDX,0x10                        ; 0046cdba
    INC EBX                             ; 0046cdbd
    MOV EAX,EDX                         ; 0046cdbe
    SAR EDX,0x1f                        ; 0046cdc0
    IDIV EBX                            ; 0046cdc3
    MOV EDX,0x10000                     ; 0046cdc5
    MOV EBX,dword ptr [0x005fba44]      ; 0046cdca | DAT_005fba44
    MOV dword ptr [EBP + 0x28],EAX      ; 0046cdd0
    IMUL EDX                            ; 0046cdd3
    IDIV EBX                            ; 0046cdd5
    MOV dword ptr [EBP + 0x28],EAX      ; 0046cdd7
    MOV EDX,dword ptr [0x01c6e2fc]      ; 0046cdda | DAT_01c6e2fc
    MOV EAX,dword ptr [EBP + 0x24]      ; 0046cde0
    IMUL EDX                            ; 0046cde3
    SHRD EAX,EDX,0x10                   ; 0046cde5
    MOV [0x01c6e2fc],EAX                ; 0046cde9 | DAT_01c6e2fc
    MOV EDX,dword ptr [0x01c6e308]      ; 0046cdee | DAT_01c6e308
    MOV EAX,dword ptr [EBP + 0x24]      ; 0046cdf4
    IMUL EDX                            ; 0046cdf7
    SHRD EAX,EDX,0x10                   ; 0046cdf9
    MOV EDX,dword ptr [0x01c6e314]      ; 0046cdfd | DAT_01c6e314
    MOV [0x01c6e308],EAX                ; 0046ce03 | DAT_01c6e308
    MOV EAX,dword ptr [EBP + 0x24]      ; 0046ce08
    IMUL EDX                            ; 0046ce0b
    SHRD EAX,EDX,0x10                   ; 0046ce0d
    MOV EDX,dword ptr [0x01c6e300]      ; 0046ce11 | DAT_01c6e300
    MOV [0x01c6e314],EAX                ; 0046ce17 | DAT_01c6e314
    MOV EAX,dword ptr [EBP + 0x28]      ; 0046ce1c
    IMUL EDX                            ; 0046ce1f
    SHRD EAX,EDX,0x10                   ; 0046ce21
    MOV EDX,dword ptr [0x01c6e30c]      ; 0046ce25 | DAT_01c6e30c
    MOV [0x01c6e300],EAX                ; 0046ce2b | DAT_01c6e300
    MOV EAX,dword ptr [EBP + 0x28]      ; 0046ce30
    IMUL EDX                            ; 0046ce33
    SHRD EAX,EDX,0x10                   ; 0046ce35
    MOV EDX,dword ptr [0x01c6e318]      ; 0046ce39 | DAT_01c6e318
    MOV [0x01c6e30c],EAX                ; 0046ce3f | DAT_01c6e30c
    MOV EAX,dword ptr [EBP + 0x28]      ; 0046ce44
    IMUL EDX                            ; 0046ce47
    SHRD EAX,EDX,0x10                   ; 0046ce49
    MOV [0x01c6e318],EAX                ; 0046ce4d | DAT_01c6e318
    CALL engine_matrix.c_invertTransformMatrix_FUN_004e4e10 ; 0046ce52
        ;   XREF to: 004e4e10 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_004e4e10()
    ADD ESP,0x18                        ; 0046ce57
    POP EBP                             ; 0046ce5a
    POP EDI                             ; 0046ce5b
    POP ESI                             ; 0046ce5c
    POP EBX                             ; 0046ce5d
    RET                                 ; 0046ce5e

