; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_xform_cpp_matrixToEulerAngles_FUN_00583b10(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[22]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00415e30 at 004162b6
;   core_boxactor.cpp_CLightActor_process_FUN_00420420 at 0042061e
;   core_charactr.cpp_CCharacter_archive_FUN_0042b450 at 0042b867
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 at 00430718
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042e3a0 at 0042e441
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00431d10 at 00431eb5
;   core_course.cpp_CCourse_evaluate_FUN_00444ac0 at 00444b24
;   core_fire.cpp_CBulletHole_init_FUN_00497290 at 0049749f
;   core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004dfa70 at 004dfb65
;   core_ladder.cpp_CLadder_updatePositionFromMaster_FUN_004df930 at 004dfa17
;   ... and 12 more
;
; Referenced Globals:
;   undefined4 DAT_005d80f7
;   undefined4 DAT_005d80fb
;   undefined4 DAT_005d80ff
;   undefined4 DAT_005d8103
;   undefined4 DAT_005d8107
;   undefined4 DAT_005d810b
;   undefined4 DAT_005d810f
;   undefined4 DAT_005d8113
;   undefined4 DAT_005d8117
;   undefined4 DAT_005d811b
;
; Called Functions:
;   crt_math.c_acos_FUN_005a4b74
;   crt_math.c_asin_FUN_005a4b46
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583b10
        ;   Label: core_xform.cpp_matrixToEulerAngles_FUN_00583b10
    PUSH EDI                            ; 00583b11
    PUSH EBP                            ; 00583b12
    MOV EBP,ESP                         ; 00583b13
    SUB ESP,0x60                        ; 00583b15
    AND ESP,0xfffffff8                  ; 00583b18
    MOV EDX,dword ptr [EBP + 0x10]      ; 00583b1b
    MOV ECX,ESI                         ; 00583b1e
    FLD float ptr [EDX + 0x4]           ; 00583b20
    FMUL ST0                            ; 00583b23
    FLD float ptr [EDX]                 ; 00583b25
    FMUL ST0                            ; 00583b27
    FADDP                               ; 00583b29
    FLD float ptr [EDX + 0x8]           ; 00583b2b
    FMUL ST0                            ; 00583b2e
    FADDP                               ; 00583b30
    FSQRT                               ; 00583b32
    FLDZ                                ; 00583b34
    FXCH                                ; 00583b36
    FSTP float ptr [ESP + 0x48]         ; 00583b38
    FCOMP float ptr [ESP + 0x48]        ; 00583b3c
    FNSTSW AX                           ; 00583b40
    SAHF                                ; 00583b42
    JC 0x00583c9b                       ; 00583b43
        ;   XREF to: 00583c9b (CONDITIONAL_JUMP)  ; LAB_00583c9b
    FLD float ptr [EDX + 0x10]          ; 00583b49
        ;   Label: LAB_00583b49
    FMUL ST0                            ; 00583b4c
    FLD float ptr [EDX + 0x14]          ; 00583b4e
    FMUL ST0                            ; 00583b51
    FADDP                               ; 00583b53
    FLD float ptr [EDX + 0x18]          ; 00583b55
    FMUL ST0                            ; 00583b58
    FADDP                               ; 00583b5a
    FSQRT                               ; 00583b5c
    FLDZ                                ; 00583b5e
    FXCH                                ; 00583b60
    FSTP float ptr [ESP + 0x50]         ; 00583b62
    FCOMP float ptr [ESP + 0x50]        ; 00583b66
    FNSTSW AX                           ; 00583b6a
    SAHF                                ; 00583b6c
    JNC 0x00583b79                      ; 00583b6d
        ;   XREF to: 00583b79 (CONDITIONAL_JUMP)  ; LAB_00583b79
    FLD1                                ; 00583b6f
    FDIV float ptr [ESP + 0x50]         ; 00583b71
    FSTP float ptr [ESP + 0x50]         ; 00583b75
    FLD float ptr [EDX + 0x20]          ; 00583b79
        ;   Label: LAB_00583b79
    FMUL ST0                            ; 00583b7c
    FLD float ptr [EDX + 0x24]          ; 00583b7e
    FMUL ST0                            ; 00583b81
    FADDP                               ; 00583b83
    FLD float ptr [EDX + 0x28]          ; 00583b85
    FMUL ST0                            ; 00583b88
    FADDP                               ; 00583b8a
    FSQRT                               ; 00583b8c
    FLDZ                                ; 00583b8e
    FXCH                                ; 00583b90
    FSTP float ptr [ESP + 0x4c]         ; 00583b92
    FCOMP float ptr [ESP + 0x4c]        ; 00583b96
    FNSTSW AX                           ; 00583b9a
    SAHF                                ; 00583b9c
    JNC 0x00583ba9                      ; 00583b9d
        ;   XREF to: 00583ba9 (CONDITIONAL_JUMP)  ; LAB_00583ba9
    FLD1                                ; 00583b9f
    FDIV float ptr [ESP + 0x4c]         ; 00583ba1
    FSTP float ptr [ESP + 0x4c]         ; 00583ba5
    FLD float ptr [EDX + 0x18]          ; 00583ba9
        ;   Label: LAB_00583ba9
    FCHS                                ; 00583bac
    FMUL float ptr [ESP + 0x50]         ; 00583bae
    FST float ptr [ESP + 0x10]          ; 00583bb2
    FCOMP float ptr [0x005d80f7]        ; 00583bb6 | DAT_005d80f7
    FNSTSW AX                           ; 00583bbc
    SAHF                                ; 00583bbe
    JNC 0x00583caa                      ; 00583bbf
        ;   XREF to: 00583caa (CONDITIONAL_JUMP)  ; LAB_00583caa
    MOV dword ptr [ESP + 0x1c],0xbfc90fdb ; 00583bc5
    FLD float ptr [EDX]                 ; 00583bcd
        ;   Label: LAB_00583bcd
    FMUL float ptr [ESP + 0x48]         ; 00583bcf
    FLD float ptr [EDX + 0x20]          ; 00583bd3
    FCHS                                ; 00583bd6
    XOR EBX,EBX                         ; 00583bd8
    FMUL float ptr [ESP + 0x4c]         ; 00583bda
    MOV dword ptr [ESP + 0x24],EBX      ; 00583bde
    FSTP float ptr [ESP + 0x14]         ; 00583be2
    MOV EAX,dword ptr [ESP + 0x14]      ; 00583be6
    FSTP float ptr [ESP + 0x38]         ; 00583bea
    MOV dword ptr [ESP + 0x2c],EAX      ; 00583bee
    MOV EAX,dword ptr [ESP + 0x38]      ; 00583bf2
    FLD float ptr [ESP + 0x14]          ; 00583bf6
    MOV dword ptr [ESP + 0x4],EAX       ; 00583bfa
    FCOMP float ptr [0x005d810b]        ; 00583bfe | DAT_005d810b
    FNSTSW AX                           ; 00583c04
    SAHF                                ; 00583c06
    JNC 0x00583eb3                      ; 00583c07
        ;   XREF to: 00583eb3 (CONDITIONAL_JUMP)  ; LAB_00583eb3
    FLD float ptr [ESP + 0x14]          ; 00583c0d
    FCOMP float ptr [0x005d810f]        ; 00583c11 | DAT_005d810f
    FNSTSW AX                           ; 00583c17
    SAHF                                ; 00583c19
    JBE 0x00583eb3                      ; 00583c1a
        ;   XREF to: 00583eb3 (CONDITIONAL_JUMP)  ; LAB_00583eb3
    FLD float ptr [ESP + 0x14]          ; 00583c20
    CALL crt_math.c_asin_FUN_005a4b46   ; 00583c24
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005a4b46()
    FLDZ                                ; 00583c29
    FXCH                                ; 00583c2b
    FSTP float ptr [ESP + 0x58]         ; 00583c2d
    FCOMP float ptr [ESP + 0x38]        ; 00583c31
    FNSTSW AX                           ; 00583c35
    SAHF                                ; 00583c37
    JBE 0x00583c48                      ; 00583c38
        ;   XREF to: 00583c48 (CONDITIONAL_JUMP)  ; LAB_00583c48
    FLD float ptr [0x005d8117]          ; 00583c3a | DAT_005d8117
    FSUB float ptr [ESP + 0x58]         ; 00583c40
    FSTP float ptr [ESP + 0x58]         ; 00583c44
    FLD float ptr [ESP + 0x58]          ; 00583c48
        ;   Label: LAB_00583c48
    FCOMP float ptr [0x005d80ff]        ; 00583c4c | DAT_005d80ff
    FNSTSW AX                           ; 00583c52
    SAHF                                ; 00583c54
    JNC 0x00583c65                      ; 00583c55
        ;   XREF to: 00583c65 (CONDITIONAL_JUMP)  ; LAB_00583c65
    FLD float ptr [ESP + 0x58]          ; 00583c57
    FADD float ptr [0x005d8103]         ; 00583c5b | DAT_005d8103
    FSTP float ptr [ESP + 0x58]         ; 00583c61
    FLD float ptr [ESP + 0x58]          ; 00583c65
        ;   Label: LAB_00583c65
    FCOMP float ptr [0x005d8117]        ; 00583c69 | DAT_005d8117
    FNSTSW AX                           ; 00583c6f
    SAHF                                ; 00583c71
    JBE 0x00583c82                      ; 00583c72
        ;   XREF to: 00583c82 (CONDITIONAL_JUMP)  ; LAB_00583c82
    FLD float ptr [ESP + 0x58]          ; 00583c74
    FADD float ptr [0x005d811b]         ; 00583c78 | DAT_005d811b
    FSTP float ptr [ESP + 0x58]         ; 00583c7e
    MOV EAX,dword ptr [ESP + 0x58]      ; 00583c82
        ;   Label: LAB_00583c82
    MOV dword ptr [ESP + 0x20],EAX      ; 00583c86
    LEA ESI,[ESP + 0x1c]                ; 00583c8a
    MOV EDI,ECX                         ; 00583c8e
    MOVSD ES:EDI,ESI                    ; 00583c90
    MOVSD ES:EDI,ESI                    ; 00583c91
    MOVSD ES:EDI,ESI                    ; 00583c92
    MOV EAX,ECX                         ; 00583c93
    MOV ESP,EBP                         ; 00583c95
    POP EBP                             ; 00583c97
    POP EDI                             ; 00583c98
    POP EBX                             ; 00583c99
    RET                                 ; 00583c9a
    FLD1                                ; 00583c9b
        ;   Label: LAB_00583c9b
    FDIV float ptr [ESP + 0x48]         ; 00583c9d
    FSTP float ptr [ESP + 0x48]         ; 00583ca1
    JMP 0x00583b49                      ; 00583ca5
        ;   XREF to: 00583b49 (UNCONDITIONAL_JUMP)  ; LAB_00583b49
    FLD float ptr [ESP + 0x10]          ; 00583caa
        ;   Label: LAB_00583caa
    FCOMP float ptr [0x005d80fb]        ; 00583cae | DAT_005d80fb
    FNSTSW AX                           ; 00583cb4
    SAHF                                ; 00583cb6
    JBE 0x00583cc6                      ; 00583cb7
        ;   XREF to: 00583cc6 (CONDITIONAL_JUMP)  ; LAB_00583cc6
    MOV dword ptr [ESP + 0x1c],0x3fc90fdb ; 00583cb9
    JMP 0x00583bcd                      ; 00583cc1
        ;   XREF to: 00583bcd (UNCONDITIONAL_JUMP)  ; LAB_00583bcd
    FLD float ptr [ESP + 0x10]          ; 00583cc6
        ;   Label: LAB_00583cc6
    FLD ST0                             ; 00583cca
    CALL crt_math.c_asin_FUN_005a4b46   ; 00583ccc
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005a4b46()
    FLD ST1                             ; 00583cd1
    FMULP ST2                           ; 00583cd3
    FLD1                                ; 00583cd5
    FSUBRP ST2,ST0                      ; 00583cd7
    FXCH                                ; 00583cd9
    FSQRT                               ; 00583cdb
    FXCH                                ; 00583cdd
    FST float ptr [ESP + 0x1c]          ; 00583cdf
    FXCH                                ; 00583ce3
    FSTP float ptr [ESP + 0x3c]         ; 00583ce5
    FCOMP float ptr [0x005d80ff]        ; 00583ce9 | DAT_005d80ff
    FNSTSW AX                           ; 00583cef
    SAHF                                ; 00583cf1
    JNC 0x00583d02                      ; 00583cf2
        ;   XREF to: 00583d02 (CONDITIONAL_JUMP)  ; LAB_00583d02
    FLD float ptr [ESP + 0x1c]          ; 00583cf4
    FADD float ptr [0x005d8103]         ; 00583cf8 | DAT_005d8103
    FSTP float ptr [ESP + 0x1c]         ; 00583cfe
    FLD float ptr [ESP + 0x3c]          ; 00583d02
        ;   Label: LAB_00583d02
    FCOMP float ptr [0x005d8107]        ; 00583d06 | DAT_005d8107
    FNSTSW AX                           ; 00583d0c
    SAHF                                ; 00583d0e
    JC 0x00583bcd                       ; 00583d0f
        ;   XREF to: 00583bcd (CONDITIONAL_JUMP)  ; LAB_00583bcd
    FLD1                                ; 00583d15
    FDIV float ptr [ESP + 0x3c]         ; 00583d17
    FLD float ptr [EDX + 0x28]          ; 00583d1b
    FMUL float ptr [ESP + 0x4c]         ; 00583d1e
    FLD float ptr [EDX + 0x8]           ; 00583d22
    FMUL float ptr [ESP + 0x48]         ; 00583d25
    FXCH ST2                            ; 00583d29
    FSTP float ptr [ESP + 0x40]         ; 00583d2b
    FXCH                                ; 00583d2f
    FMUL float ptr [ESP + 0x40]         ; 00583d31
    FXCH                                ; 00583d35
    FMUL float ptr [ESP + 0x40]         ; 00583d37
    FXCH                                ; 00583d3b
    FSTP float ptr [ESP + 0x8]          ; 00583d3d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00583d41
    FSTP float ptr [ESP + 0x30]         ; 00583d45
    MOV dword ptr [ESP + 0x28],EAX      ; 00583d49
    MOV EAX,dword ptr [ESP + 0x30]      ; 00583d4d
    FLD float ptr [ESP + 0x8]           ; 00583d51
    MOV dword ptr [ESP + 0xc],EAX       ; 00583d55
    FCOMP float ptr [0x005d810b]        ; 00583d59 | DAT_005d810b
    FNSTSW AX                           ; 00583d5f
    SAHF                                ; 00583d61
    JNC 0x00583f04                      ; 00583d62
        ;   XREF to: 00583f04 (CONDITIONAL_JUMP)  ; LAB_00583f04
    FLD float ptr [ESP + 0x8]           ; 00583d68
    FCOMP float ptr [0x005d810f]        ; 00583d6c | DAT_005d810f
    FNSTSW AX                           ; 00583d72
    SAHF                                ; 00583d74
    JBE 0x00583f04                      ; 00583d75
        ;   XREF to: 00583f04 (CONDITIONAL_JUMP)  ; LAB_00583f04
    FLD float ptr [ESP + 0x8]           ; 00583d7b
    CALL crt_math.c_asin_FUN_005a4b46   ; 00583d7f
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005a4b46()
    FLDZ                                ; 00583d84
    FXCH                                ; 00583d86
    FSTP float ptr [ESP + 0x5c]         ; 00583d88
    FCOMP float ptr [ESP + 0x30]        ; 00583d8c
    FNSTSW AX                           ; 00583d90
    SAHF                                ; 00583d92
    JBE 0x00583da3                      ; 00583d93
        ;   XREF to: 00583da3 (CONDITIONAL_JUMP)  ; LAB_00583da3
    FLD float ptr [0x005d8117]          ; 00583d95 | DAT_005d8117
    FSUB float ptr [ESP + 0x5c]         ; 00583d9b
    FSTP float ptr [ESP + 0x5c]         ; 00583d9f
    FLD float ptr [ESP + 0x5c]          ; 00583da3
        ;   Label: LAB_00583da3
    FCOMP float ptr [0x005d80ff]        ; 00583da7 | DAT_005d80ff
    FNSTSW AX                           ; 00583dad
    SAHF                                ; 00583daf
    JNC 0x00583dc0                      ; 00583db0
        ;   XREF to: 00583dc0 (CONDITIONAL_JUMP)  ; LAB_00583dc0
    FLD float ptr [ESP + 0x5c]          ; 00583db2
    FADD float ptr [0x005d8103]         ; 00583db6 | DAT_005d8103
    FSTP float ptr [ESP + 0x5c]         ; 00583dbc
    FLD float ptr [ESP + 0x5c]          ; 00583dc0
        ;   Label: LAB_00583dc0
    FCOMP float ptr [0x005d8117]        ; 00583dc4 | DAT_005d8117
    FNSTSW AX                           ; 00583dca
    SAHF                                ; 00583dcc
    JBE 0x00583ddd                      ; 00583dcd
        ;   XREF to: 00583ddd (CONDITIONAL_JUMP)  ; LAB_00583ddd
    FLD float ptr [ESP + 0x5c]          ; 00583dcf
    FADD float ptr [0x005d811b]         ; 00583dd3 | DAT_005d811b
    FSTP float ptr [ESP + 0x5c]         ; 00583dd9
    FLD float ptr [ESP + 0x50]          ; 00583ddd
        ;   Label: LAB_00583ddd
    FLD float ptr [EDX + 0x14]          ; 00583de1
    FMUL ST1                            ; 00583de4
    FLD float ptr [EDX + 0x10]          ; 00583de6
    FMULP ST2                           ; 00583de9
    FLD float ptr [ESP + 0x40]          ; 00583deb
    FXCH                                ; 00583def
    FMUL ST1                            ; 00583df1
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00583df3
    FXCH ST2                            ; 00583df7
    FMULP                               ; 00583df9
    MOV dword ptr [ESP + 0x20],EAX      ; 00583dfb
    FSTP float ptr [ESP]                ; 00583dff
    MOV EAX,dword ptr [ESP]             ; 00583e02
    FSTP float ptr [ESP + 0x34]         ; 00583e05
    MOV dword ptr [ESP + 0x44],EAX      ; 00583e09
    MOV EAX,dword ptr [ESP + 0x34]      ; 00583e0d
    FLD float ptr [ESP]                 ; 00583e11
    MOV dword ptr [ESP + 0x18],EAX      ; 00583e14
    FCOMP float ptr [0x005d810b]        ; 00583e18 | DAT_005d810b
    FNSTSW AX                           ; 00583e1e
    SAHF                                ; 00583e20
    JNC 0x00583f55                      ; 00583e21
        ;   XREF to: 00583f55 (CONDITIONAL_JUMP)  ; LAB_00583f55
    FLD float ptr [ESP]                 ; 00583e27
    FCOMP float ptr [0x005d810f]        ; 00583e2a | DAT_005d810f
    FNSTSW AX                           ; 00583e30
    SAHF                                ; 00583e32
    JBE 0x00583f55                      ; 00583e33
        ;   XREF to: 00583f55 (CONDITIONAL_JUMP)  ; LAB_00583f55
    FLD float ptr [ESP]                 ; 00583e39
    CALL crt_math.c_asin_FUN_005a4b46   ; 00583e3c
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005a4b46()
    FLDZ                                ; 00583e41
    FXCH                                ; 00583e43
    FSTP float ptr [ESP + 0x54]         ; 00583e45
    FCOMP float ptr [ESP + 0x34]        ; 00583e49
    FNSTSW AX                           ; 00583e4d
    SAHF                                ; 00583e4f
    JBE 0x00583e60                      ; 00583e50
        ;   XREF to: 00583e60 (CONDITIONAL_JUMP)  ; LAB_00583e60
    FLD float ptr [0x005d8117]          ; 00583e52 | DAT_005d8117
    FSUB float ptr [ESP + 0x54]         ; 00583e58
    FSTP float ptr [ESP + 0x54]         ; 00583e5c
    FLD float ptr [ESP + 0x54]          ; 00583e60
        ;   Label: LAB_00583e60
    FCOMP float ptr [0x005d80ff]        ; 00583e64 | DAT_005d80ff
    FNSTSW AX                           ; 00583e6a
    SAHF                                ; 00583e6c
    JNC 0x00583e7d                      ; 00583e6d
        ;   XREF to: 00583e7d (CONDITIONAL_JUMP)  ; LAB_00583e7d
    FLD float ptr [ESP + 0x54]          ; 00583e6f
    FADD float ptr [0x005d8103]         ; 00583e73 | DAT_005d8103
    FSTP float ptr [ESP + 0x54]         ; 00583e79
    FLD float ptr [ESP + 0x54]          ; 00583e7d
        ;   Label: LAB_00583e7d
    FCOMP float ptr [0x005d8117]        ; 00583e81 | DAT_005d8117
    FNSTSW AX                           ; 00583e87
    SAHF                                ; 00583e89
    JBE 0x00583e9a                      ; 00583e8a
        ;   XREF to: 00583e9a (CONDITIONAL_JUMP)  ; LAB_00583e9a
    FLD float ptr [ESP + 0x54]          ; 00583e8c
    FADD float ptr [0x005d811b]         ; 00583e90 | DAT_005d811b
    FSTP float ptr [ESP + 0x54]         ; 00583e96
    MOV EAX,dword ptr [ESP + 0x54]      ; 00583e9a
        ;   Label: LAB_00583e9a
    MOV dword ptr [ESP + 0x24],EAX      ; 00583e9e
    LEA ESI,[ESP + 0x1c]                ; 00583ea2
    MOV EDI,ECX                         ; 00583ea6
    MOVSD ES:EDI,ESI                    ; 00583ea8
    MOVSD ES:EDI,ESI                    ; 00583ea9
    MOVSD ES:EDI,ESI                    ; 00583eaa
    MOV EAX,ECX                         ; 00583eab
    MOV ESP,EBP                         ; 00583ead
    POP EBP                             ; 00583eaf
    POP EDI                             ; 00583eb0
    POP EBX                             ; 00583eb1
    RET                                 ; 00583eb2
    FLD float ptr [ESP + 0x4]           ; 00583eb3
        ;   Label: LAB_00583eb3
    FCOMP float ptr [0x005d8113]        ; 00583eb7 | DAT_005d8113
    FNSTSW AX                           ; 00583ebd
    SAHF                                ; 00583ebf
    JA 0x00583ee3                       ; 00583ec0
        ;   XREF to: 00583ee3 (CONDITIONAL_JUMP)  ; LAB_00583ee3
    MOV dword ptr [ESP + 0x58],0x40490fdb ; 00583ec2
    FLDZ                                ; 00583eca
        ;   Label: LAB_00583eca
    FCOMP float ptr [ESP + 0x2c]        ; 00583ecc
    FNSTSW AX                           ; 00583ed0
    SAHF                                ; 00583ed2
    JBE 0x00583c48                      ; 00583ed3
        ;   XREF to: 00583c48 (CONDITIONAL_JUMP)  ; LAB_00583c48
    XOR byte ptr [ESP + 0x5b],0x80      ; 00583ed9
    JMP 0x00583c48                      ; 00583ede
        ;   XREF to: 00583c48 (UNCONDITIONAL_JUMP)  ; LAB_00583c48
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 00583ee3
        ;   Label: LAB_00583ee3
    JL 0x00583ef5                       ; 00583eeb
        ;   XREF to: 00583ef5 (CONDITIONAL_JUMP)  ; LAB_00583ef5
    XOR EDI,EDI                         ; 00583eed
    MOV dword ptr [ESP + 0x58],EDI      ; 00583eef
    JMP 0x00583eca                      ; 00583ef3
        ;   XREF to: 00583eca (UNCONDITIONAL_JUMP)  ; LAB_00583eca
    FLD float ptr [ESP + 0x4]           ; 00583ef5
        ;   Label: LAB_00583ef5
    CALL crt_math.c_acos_FUN_005a4b74   ; 00583ef9
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FSTP float ptr [ESP + 0x58]         ; 00583efe
    JMP 0x00583eca                      ; 00583f02
        ;   XREF to: 00583eca (UNCONDITIONAL_JUMP)  ; LAB_00583eca
    FLD float ptr [ESP + 0xc]           ; 00583f04
        ;   Label: LAB_00583f04
    FCOMP float ptr [0x005d8113]        ; 00583f08 | DAT_005d8113
    FNSTSW AX                           ; 00583f0e
    SAHF                                ; 00583f10
    JA 0x00583f34                       ; 00583f11
        ;   XREF to: 00583f34 (CONDITIONAL_JUMP)  ; LAB_00583f34
    MOV dword ptr [ESP + 0x5c],0x40490fdb ; 00583f13
    FLDZ                                ; 00583f1b
        ;   Label: LAB_00583f1b
    FCOMP float ptr [ESP + 0x28]        ; 00583f1d
    FNSTSW AX                           ; 00583f21
    SAHF                                ; 00583f23
    JBE 0x00583da3                      ; 00583f24
        ;   XREF to: 00583da3 (CONDITIONAL_JUMP)  ; LAB_00583da3
    XOR byte ptr [ESP + 0x5f],0x80      ; 00583f2a
    JMP 0x00583da3                      ; 00583f2f
        ;   XREF to: 00583da3 (UNCONDITIONAL_JUMP)  ; LAB_00583da3
    CMP dword ptr [ESP + 0xc],0x3f800000 ; 00583f34
        ;   Label: LAB_00583f34
    JL 0x00583f46                       ; 00583f3c
        ;   XREF to: 00583f46 (CONDITIONAL_JUMP)  ; LAB_00583f46
    XOR ESI,ESI                         ; 00583f3e
    MOV dword ptr [ESP + 0x5c],ESI      ; 00583f40
    JMP 0x00583f1b                      ; 00583f44
        ;   XREF to: 00583f1b (UNCONDITIONAL_JUMP)  ; LAB_00583f1b
    FLD float ptr [ESP + 0xc]           ; 00583f46
        ;   Label: LAB_00583f46
    CALL crt_math.c_acos_FUN_005a4b74   ; 00583f4a
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FSTP float ptr [ESP + 0x5c]         ; 00583f4f
    JMP 0x00583f1b                      ; 00583f53
        ;   XREF to: 00583f1b (UNCONDITIONAL_JUMP)  ; LAB_00583f1b
    FLD float ptr [ESP + 0x18]          ; 00583f55
        ;   Label: LAB_00583f55
    FCOMP float ptr [0x005d8113]        ; 00583f59 | DAT_005d8113
    FNSTSW AX                           ; 00583f5f
    SAHF                                ; 00583f61
    JA 0x00583f85                       ; 00583f62
        ;   XREF to: 00583f85 (CONDITIONAL_JUMP)  ; LAB_00583f85
    MOV dword ptr [ESP + 0x54],0x40490fdb ; 00583f64
    FLDZ                                ; 00583f6c
        ;   Label: LAB_00583f6c
    FCOMP float ptr [ESP + 0x44]        ; 00583f6e
    FNSTSW AX                           ; 00583f72
    SAHF                                ; 00583f74
    JBE 0x00583e60                      ; 00583f75
        ;   XREF to: 00583e60 (CONDITIONAL_JUMP)  ; LAB_00583e60
    XOR byte ptr [ESP + 0x57],0x80      ; 00583f7b
    JMP 0x00583e60                      ; 00583f80
        ;   XREF to: 00583e60 (UNCONDITIONAL_JUMP)  ; LAB_00583e60
    CMP dword ptr [ESP + 0x18],0x3f800000 ; 00583f85
        ;   Label: LAB_00583f85
    JL 0x00583f97                       ; 00583f8d
        ;   XREF to: 00583f97 (CONDITIONAL_JUMP)  ; LAB_00583f97
    XOR EBX,EBX                         ; 00583f8f
    MOV dword ptr [ESP + 0x54],EBX      ; 00583f91
    JMP 0x00583f6c                      ; 00583f95
        ;   XREF to: 00583f6c (UNCONDITIONAL_JUMP)  ; LAB_00583f6c
    FLD float ptr [ESP + 0x18]          ; 00583f97
        ;   Label: LAB_00583f97
    CALL crt_math.c_acos_FUN_005a4b74   ; 00583f9b
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FSTP float ptr [ESP + 0x54]         ; 00583fa0
    JMP 0x00583f6c                      ; 00583fa4
        ;   XREF to: 00583f6c (UNCONDITIONAL_JUMP)  ; LAB_00583f6c

