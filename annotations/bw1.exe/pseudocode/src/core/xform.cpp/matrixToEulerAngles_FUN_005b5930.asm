; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_xform_cpp_matrixToEulerAngles_FUN_005b5930(float *param_1)
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
; XREF[31]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a200 at 0041a686
;   core_boxactor.cpp_CLightActor_process_FUN_00422f90 at 0042318a
;   core_charactr.cpp_CCharacter_archive_FUN_0042c7f0 at 0042cb0e
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 at 00431398
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042f3c0 at 0042f461
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0 at 00432a95
;   core_course.cpp_CCourse_evaluate_FUN_00447f00 at 00447f64
;   core_doc.cpp_CDoc_renderOpaque_FUN_00471af0 at 00471e6c
;   core_doc.cpp_FUN_0046f610 at 0046f6e2
;   core_doc.cpp_FUN_0046f740 at 0047040a
;   ... and 21 more
;
; Referenced Globals:
;   undefined4 DAT_005fa0cc
;   undefined4 DAT_005fa0d0
;   undefined4 DAT_005fa0d4
;   undefined4 DAT_005fa0d8
;   undefined4 DAT_005fa0dc
;   undefined4 DAT_005fa0e0
;   undefined4 DAT_005fa0e4
;   undefined4 DAT_005fa0e8
;   undefined4 DAT_005fa0ec
;   undefined4 DAT_005fa0f0
;
; Called Functions:
;   crt_math.c_acos_FUN_005c1d04
;   crt_math.c_asin_FUN_005c1cd6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b5930
        ;   Label: core_xform.cpp_matrixToEulerAngles_FUN_005b5930
    PUSH EDI                            ; 005b5931
    PUSH EBP                            ; 005b5932
    MOV EBP,ESP                         ; 005b5933
    SUB ESP,0x60                        ; 005b5935
    AND ESP,0xfffffff8                  ; 005b5938
    MOV EDX,dword ptr [EBP + 0x10]      ; 005b593b
    MOV ECX,ESI                         ; 005b593e
    FLD float ptr [EDX + 0x4]           ; 005b5940
    FMUL ST0                            ; 005b5943
    FLD float ptr [EDX]                 ; 005b5945
    FMUL ST0                            ; 005b5947
    FADDP                               ; 005b5949
    FLD float ptr [EDX + 0x8]           ; 005b594b
    FMUL ST0                            ; 005b594e
    FADDP                               ; 005b5950
    FSQRT                               ; 005b5952
    FLDZ                                ; 005b5954
    FXCH                                ; 005b5956
    FSTP float ptr [ESP + 0x48]         ; 005b5958
    FCOMP float ptr [ESP + 0x48]        ; 005b595c
    FNSTSW AX                           ; 005b5960
    SAHF                                ; 005b5962
    JC 0x005b5abb                       ; 005b5963
        ;   XREF to: 005b5abb (CONDITIONAL_JUMP)  ; LAB_005b5abb
    FLD float ptr [EDX + 0x10]          ; 005b5969
        ;   Label: LAB_005b5969
    FMUL ST0                            ; 005b596c
    FLD float ptr [EDX + 0x14]          ; 005b596e
    FMUL ST0                            ; 005b5971
    FADDP                               ; 005b5973
    FLD float ptr [EDX + 0x18]          ; 005b5975
    FMUL ST0                            ; 005b5978
    FADDP                               ; 005b597a
    FSQRT                               ; 005b597c
    FLDZ                                ; 005b597e
    FXCH                                ; 005b5980
    FSTP float ptr [ESP + 0x50]         ; 005b5982
    FCOMP float ptr [ESP + 0x50]        ; 005b5986
    FNSTSW AX                           ; 005b598a
    SAHF                                ; 005b598c
    JNC 0x005b5999                      ; 005b598d
        ;   XREF to: 005b5999 (CONDITIONAL_JUMP)  ; LAB_005b5999
    FLD1                                ; 005b598f
    FDIV float ptr [ESP + 0x50]         ; 005b5991
    FSTP float ptr [ESP + 0x50]         ; 005b5995
    FLD float ptr [EDX + 0x20]          ; 005b5999
        ;   Label: LAB_005b5999
    FMUL ST0                            ; 005b599c
    FLD float ptr [EDX + 0x24]          ; 005b599e
    FMUL ST0                            ; 005b59a1
    FADDP                               ; 005b59a3
    FLD float ptr [EDX + 0x28]          ; 005b59a5
    FMUL ST0                            ; 005b59a8
    FADDP                               ; 005b59aa
    FSQRT                               ; 005b59ac
    FLDZ                                ; 005b59ae
    FXCH                                ; 005b59b0
    FSTP float ptr [ESP + 0x4c]         ; 005b59b2
    FCOMP float ptr [ESP + 0x4c]        ; 005b59b6
    FNSTSW AX                           ; 005b59ba
    SAHF                                ; 005b59bc
    JNC 0x005b59c9                      ; 005b59bd
        ;   XREF to: 005b59c9 (CONDITIONAL_JUMP)  ; LAB_005b59c9
    FLD1                                ; 005b59bf
    FDIV float ptr [ESP + 0x4c]         ; 005b59c1
    FSTP float ptr [ESP + 0x4c]         ; 005b59c5
    FLD float ptr [EDX + 0x18]          ; 005b59c9
        ;   Label: LAB_005b59c9
    FCHS                                ; 005b59cc
    FMUL float ptr [ESP + 0x50]         ; 005b59ce
    FST float ptr [ESP + 0x10]          ; 005b59d2
    FCOMP float ptr [0x005fa0cc]        ; 005b59d6 | DAT_005fa0cc
    FNSTSW AX                           ; 005b59dc
    SAHF                                ; 005b59de
    JNC 0x005b5aca                      ; 005b59df
        ;   XREF to: 005b5aca (CONDITIONAL_JUMP)  ; LAB_005b5aca
    MOV dword ptr [ESP + 0x1c],0xbfc90fdb ; 005b59e5
    FLD float ptr [EDX]                 ; 005b59ed
        ;   Label: LAB_005b59ed
    FMUL float ptr [ESP + 0x48]         ; 005b59ef
    FLD float ptr [EDX + 0x20]          ; 005b59f3
    FCHS                                ; 005b59f6
    XOR EBX,EBX                         ; 005b59f8
    FMUL float ptr [ESP + 0x4c]         ; 005b59fa
    MOV dword ptr [ESP + 0x24],EBX      ; 005b59fe
    FSTP float ptr [ESP + 0x14]         ; 005b5a02
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b5a06
    FSTP float ptr [ESP + 0x38]         ; 005b5a0a
    MOV dword ptr [ESP + 0x2c],EAX      ; 005b5a0e
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b5a12
    FLD float ptr [ESP + 0x14]          ; 005b5a16
    MOV dword ptr [ESP + 0x4],EAX       ; 005b5a1a
    FCOMP float ptr [0x005fa0e0]        ; 005b5a1e | DAT_005fa0e0
    FNSTSW AX                           ; 005b5a24
    SAHF                                ; 005b5a26
    JNC 0x005b5cd3                      ; 005b5a27
        ;   XREF to: 005b5cd3 (CONDITIONAL_JUMP)  ; LAB_005b5cd3
    FLD float ptr [ESP + 0x14]          ; 005b5a2d
    FCOMP float ptr [0x005fa0e4]        ; 005b5a31 | DAT_005fa0e4
    FNSTSW AX                           ; 005b5a37
    SAHF                                ; 005b5a39
    JBE 0x005b5cd3                      ; 005b5a3a
        ;   XREF to: 005b5cd3 (CONDITIONAL_JUMP)  ; LAB_005b5cd3
    FLD float ptr [ESP + 0x14]          ; 005b5a40
    CALL crt_math.c_asin_FUN_005c1cd6   ; 005b5a44
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLDZ                                ; 005b5a49
    FXCH                                ; 005b5a4b
    FSTP float ptr [ESP + 0x58]         ; 005b5a4d
    FCOMP float ptr [ESP + 0x38]        ; 005b5a51
    FNSTSW AX                           ; 005b5a55
    SAHF                                ; 005b5a57
    JBE 0x005b5a68                      ; 005b5a58
        ;   XREF to: 005b5a68 (CONDITIONAL_JUMP)  ; LAB_005b5a68
    FLD float ptr [0x005fa0ec]          ; 005b5a5a | DAT_005fa0ec
    FSUB float ptr [ESP + 0x58]         ; 005b5a60
    FSTP float ptr [ESP + 0x58]         ; 005b5a64
    FLD float ptr [ESP + 0x58]          ; 005b5a68
        ;   Label: LAB_005b5a68
    FCOMP float ptr [0x005fa0d4]        ; 005b5a6c | DAT_005fa0d4
    FNSTSW AX                           ; 005b5a72
    SAHF                                ; 005b5a74
    JNC 0x005b5a85                      ; 005b5a75
        ;   XREF to: 005b5a85 (CONDITIONAL_JUMP)  ; LAB_005b5a85
    FLD float ptr [ESP + 0x58]          ; 005b5a77
    FADD float ptr [0x005fa0d8]         ; 005b5a7b | DAT_005fa0d8
    FSTP float ptr [ESP + 0x58]         ; 005b5a81
    FLD float ptr [ESP + 0x58]          ; 005b5a85
        ;   Label: LAB_005b5a85
    FCOMP float ptr [0x005fa0ec]        ; 005b5a89 | DAT_005fa0ec
    FNSTSW AX                           ; 005b5a8f
    SAHF                                ; 005b5a91
    JBE 0x005b5aa2                      ; 005b5a92
        ;   XREF to: 005b5aa2 (CONDITIONAL_JUMP)  ; LAB_005b5aa2
    FLD float ptr [ESP + 0x58]          ; 005b5a94
    FADD float ptr [0x005fa0f0]         ; 005b5a98 | DAT_005fa0f0
    FSTP float ptr [ESP + 0x58]         ; 005b5a9e
    MOV EAX,dword ptr [ESP + 0x58]      ; 005b5aa2
        ;   Label: LAB_005b5aa2
    MOV dword ptr [ESP + 0x20],EAX      ; 005b5aa6
    LEA ESI,[ESP + 0x1c]                ; 005b5aaa
    MOV EDI,ECX                         ; 005b5aae
    MOVSD ES:EDI,ESI                    ; 005b5ab0
    MOVSD ES:EDI,ESI                    ; 005b5ab1
    MOVSD ES:EDI,ESI                    ; 005b5ab2
    MOV EAX,ECX                         ; 005b5ab3
    MOV ESP,EBP                         ; 005b5ab5
    POP EBP                             ; 005b5ab7
    POP EDI                             ; 005b5ab8
    POP EBX                             ; 005b5ab9
    RET                                 ; 005b5aba
    FLD1                                ; 005b5abb
        ;   Label: LAB_005b5abb
    FDIV float ptr [ESP + 0x48]         ; 005b5abd
    FSTP float ptr [ESP + 0x48]         ; 005b5ac1
    JMP 0x005b5969                      ; 005b5ac5
        ;   XREF to: 005b5969 (UNCONDITIONAL_JUMP)  ; LAB_005b5969
    FLD float ptr [ESP + 0x10]          ; 005b5aca
        ;   Label: LAB_005b5aca
    FCOMP float ptr [0x005fa0d0]        ; 005b5ace | DAT_005fa0d0
    FNSTSW AX                           ; 005b5ad4
    SAHF                                ; 005b5ad6
    JBE 0x005b5ae6                      ; 005b5ad7
        ;   XREF to: 005b5ae6 (CONDITIONAL_JUMP)  ; LAB_005b5ae6
    MOV dword ptr [ESP + 0x1c],0x3fc90fdb ; 005b5ad9
    JMP 0x005b59ed                      ; 005b5ae1
        ;   XREF to: 005b59ed (UNCONDITIONAL_JUMP)  ; LAB_005b59ed
    FLD float ptr [ESP + 0x10]          ; 005b5ae6
        ;   Label: LAB_005b5ae6
    FLD ST0                             ; 005b5aea
    CALL crt_math.c_asin_FUN_005c1cd6   ; 005b5aec
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLD ST1                             ; 005b5af1
    FMULP ST2                           ; 005b5af3
    FLD1                                ; 005b5af5
    FSUBRP ST2,ST0                      ; 005b5af7
    FXCH                                ; 005b5af9
    FSQRT                               ; 005b5afb
    FXCH                                ; 005b5afd
    FST float ptr [ESP + 0x1c]          ; 005b5aff
    FXCH                                ; 005b5b03
    FSTP float ptr [ESP + 0x3c]         ; 005b5b05
    FCOMP float ptr [0x005fa0d4]        ; 005b5b09 | DAT_005fa0d4
    FNSTSW AX                           ; 005b5b0f
    SAHF                                ; 005b5b11
    JNC 0x005b5b22                      ; 005b5b12
        ;   XREF to: 005b5b22 (CONDITIONAL_JUMP)  ; LAB_005b5b22
    FLD float ptr [ESP + 0x1c]          ; 005b5b14
    FADD float ptr [0x005fa0d8]         ; 005b5b18 | DAT_005fa0d8
    FSTP float ptr [ESP + 0x1c]         ; 005b5b1e
    FLD float ptr [ESP + 0x3c]          ; 005b5b22
        ;   Label: LAB_005b5b22
    FCOMP float ptr [0x005fa0dc]        ; 005b5b26 | DAT_005fa0dc
    FNSTSW AX                           ; 005b5b2c
    SAHF                                ; 005b5b2e
    JC 0x005b59ed                       ; 005b5b2f
        ;   XREF to: 005b59ed (CONDITIONAL_JUMP)  ; LAB_005b59ed
    FLD1                                ; 005b5b35
    FDIV float ptr [ESP + 0x3c]         ; 005b5b37
    FLD float ptr [EDX + 0x28]          ; 005b5b3b
    FMUL float ptr [ESP + 0x4c]         ; 005b5b3e
    FLD float ptr [EDX + 0x8]           ; 005b5b42
    FMUL float ptr [ESP + 0x48]         ; 005b5b45
    FXCH ST2                            ; 005b5b49
    FSTP float ptr [ESP + 0x40]         ; 005b5b4b
    FXCH                                ; 005b5b4f
    FMUL float ptr [ESP + 0x40]         ; 005b5b51
    FXCH                                ; 005b5b55
    FMUL float ptr [ESP + 0x40]         ; 005b5b57
    FXCH                                ; 005b5b5b
    FSTP float ptr [ESP + 0x8]          ; 005b5b5d
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b5b61
    FSTP float ptr [ESP + 0x30]         ; 005b5b65
    MOV dword ptr [ESP + 0x28],EAX      ; 005b5b69
    MOV EAX,dword ptr [ESP + 0x30]      ; 005b5b6d
    FLD float ptr [ESP + 0x8]           ; 005b5b71
    MOV dword ptr [ESP + 0xc],EAX       ; 005b5b75
    FCOMP float ptr [0x005fa0e0]        ; 005b5b79 | DAT_005fa0e0
    FNSTSW AX                           ; 005b5b7f
    SAHF                                ; 005b5b81
    JNC 0x005b5d24                      ; 005b5b82
        ;   XREF to: 005b5d24 (CONDITIONAL_JUMP)  ; LAB_005b5d24
    FLD float ptr [ESP + 0x8]           ; 005b5b88
    FCOMP float ptr [0x005fa0e4]        ; 005b5b8c | DAT_005fa0e4
    FNSTSW AX                           ; 005b5b92
    SAHF                                ; 005b5b94
    JBE 0x005b5d24                      ; 005b5b95
        ;   XREF to: 005b5d24 (CONDITIONAL_JUMP)  ; LAB_005b5d24
    FLD float ptr [ESP + 0x8]           ; 005b5b9b
    CALL crt_math.c_asin_FUN_005c1cd6   ; 005b5b9f
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLDZ                                ; 005b5ba4
    FXCH                                ; 005b5ba6
    FSTP float ptr [ESP + 0x5c]         ; 005b5ba8
    FCOMP float ptr [ESP + 0x30]        ; 005b5bac
    FNSTSW AX                           ; 005b5bb0
    SAHF                                ; 005b5bb2
    JBE 0x005b5bc3                      ; 005b5bb3
        ;   XREF to: 005b5bc3 (CONDITIONAL_JUMP)  ; LAB_005b5bc3
    FLD float ptr [0x005fa0ec]          ; 005b5bb5 | DAT_005fa0ec
    FSUB float ptr [ESP + 0x5c]         ; 005b5bbb
    FSTP float ptr [ESP + 0x5c]         ; 005b5bbf
    FLD float ptr [ESP + 0x5c]          ; 005b5bc3
        ;   Label: LAB_005b5bc3
    FCOMP float ptr [0x005fa0d4]        ; 005b5bc7 | DAT_005fa0d4
    FNSTSW AX                           ; 005b5bcd
    SAHF                                ; 005b5bcf
    JNC 0x005b5be0                      ; 005b5bd0
        ;   XREF to: 005b5be0 (CONDITIONAL_JUMP)  ; LAB_005b5be0
    FLD float ptr [ESP + 0x5c]          ; 005b5bd2
    FADD float ptr [0x005fa0d8]         ; 005b5bd6 | DAT_005fa0d8
    FSTP float ptr [ESP + 0x5c]         ; 005b5bdc
    FLD float ptr [ESP + 0x5c]          ; 005b5be0
        ;   Label: LAB_005b5be0
    FCOMP float ptr [0x005fa0ec]        ; 005b5be4 | DAT_005fa0ec
    FNSTSW AX                           ; 005b5bea
    SAHF                                ; 005b5bec
    JBE 0x005b5bfd                      ; 005b5bed
        ;   XREF to: 005b5bfd (CONDITIONAL_JUMP)  ; LAB_005b5bfd
    FLD float ptr [ESP + 0x5c]          ; 005b5bef
    FADD float ptr [0x005fa0f0]         ; 005b5bf3 | DAT_005fa0f0
    FSTP float ptr [ESP + 0x5c]         ; 005b5bf9
    FLD float ptr [ESP + 0x50]          ; 005b5bfd
        ;   Label: LAB_005b5bfd
    FLD float ptr [EDX + 0x14]          ; 005b5c01
    FMUL ST1                            ; 005b5c04
    FLD float ptr [EDX + 0x10]          ; 005b5c06
    FMULP ST2                           ; 005b5c09
    FLD float ptr [ESP + 0x40]          ; 005b5c0b
    FXCH                                ; 005b5c0f
    FMUL ST1                            ; 005b5c11
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005b5c13
    FXCH ST2                            ; 005b5c17
    FMULP                               ; 005b5c19
    MOV dword ptr [ESP + 0x20],EAX      ; 005b5c1b
    FSTP float ptr [ESP]                ; 005b5c1f
    MOV EAX,dword ptr [ESP]             ; 005b5c22
    FSTP float ptr [ESP + 0x34]         ; 005b5c25
    MOV dword ptr [ESP + 0x44],EAX      ; 005b5c29
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b5c2d
    FLD float ptr [ESP]                 ; 005b5c31
    MOV dword ptr [ESP + 0x18],EAX      ; 005b5c34
    FCOMP float ptr [0x005fa0e0]        ; 005b5c38 | DAT_005fa0e0
    FNSTSW AX                           ; 005b5c3e
    SAHF                                ; 005b5c40
    JNC 0x005b5d75                      ; 005b5c41
        ;   XREF to: 005b5d75 (CONDITIONAL_JUMP)  ; LAB_005b5d75
    FLD float ptr [ESP]                 ; 005b5c47
    FCOMP float ptr [0x005fa0e4]        ; 005b5c4a | DAT_005fa0e4
    FNSTSW AX                           ; 005b5c50
    SAHF                                ; 005b5c52
    JBE 0x005b5d75                      ; 005b5c53
        ;   XREF to: 005b5d75 (CONDITIONAL_JUMP)  ; LAB_005b5d75
    FLD float ptr [ESP]                 ; 005b5c59
    CALL crt_math.c_asin_FUN_005c1cd6   ; 005b5c5c
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLDZ                                ; 005b5c61
    FXCH                                ; 005b5c63
    FSTP float ptr [ESP + 0x54]         ; 005b5c65
    FCOMP float ptr [ESP + 0x34]        ; 005b5c69
    FNSTSW AX                           ; 005b5c6d
    SAHF                                ; 005b5c6f
    JBE 0x005b5c80                      ; 005b5c70
        ;   XREF to: 005b5c80 (CONDITIONAL_JUMP)  ; LAB_005b5c80
    FLD float ptr [0x005fa0ec]          ; 005b5c72 | DAT_005fa0ec
    FSUB float ptr [ESP + 0x54]         ; 005b5c78
    FSTP float ptr [ESP + 0x54]         ; 005b5c7c
    FLD float ptr [ESP + 0x54]          ; 005b5c80
        ;   Label: LAB_005b5c80
    FCOMP float ptr [0x005fa0d4]        ; 005b5c84 | DAT_005fa0d4
    FNSTSW AX                           ; 005b5c8a
    SAHF                                ; 005b5c8c
    JNC 0x005b5c9d                      ; 005b5c8d
        ;   XREF to: 005b5c9d (CONDITIONAL_JUMP)  ; LAB_005b5c9d
    FLD float ptr [ESP + 0x54]          ; 005b5c8f
    FADD float ptr [0x005fa0d8]         ; 005b5c93 | DAT_005fa0d8
    FSTP float ptr [ESP + 0x54]         ; 005b5c99
    FLD float ptr [ESP + 0x54]          ; 005b5c9d
        ;   Label: LAB_005b5c9d
    FCOMP float ptr [0x005fa0ec]        ; 005b5ca1 | DAT_005fa0ec
    FNSTSW AX                           ; 005b5ca7
    SAHF                                ; 005b5ca9
    JBE 0x005b5cba                      ; 005b5caa
        ;   XREF to: 005b5cba (CONDITIONAL_JUMP)  ; LAB_005b5cba
    FLD float ptr [ESP + 0x54]          ; 005b5cac
    FADD float ptr [0x005fa0f0]         ; 005b5cb0 | DAT_005fa0f0
    FSTP float ptr [ESP + 0x54]         ; 005b5cb6
    MOV EAX,dword ptr [ESP + 0x54]      ; 005b5cba
        ;   Label: LAB_005b5cba
    MOV dword ptr [ESP + 0x24],EAX      ; 005b5cbe
    LEA ESI,[ESP + 0x1c]                ; 005b5cc2
    MOV EDI,ECX                         ; 005b5cc6
    MOVSD ES:EDI,ESI                    ; 005b5cc8
    MOVSD ES:EDI,ESI                    ; 005b5cc9
    MOVSD ES:EDI,ESI                    ; 005b5cca
    MOV EAX,ECX                         ; 005b5ccb
    MOV ESP,EBP                         ; 005b5ccd
    POP EBP                             ; 005b5ccf
    POP EDI                             ; 005b5cd0
    POP EBX                             ; 005b5cd1
    RET                                 ; 005b5cd2
    FLD float ptr [ESP + 0x4]           ; 005b5cd3
        ;   Label: LAB_005b5cd3
    FCOMP float ptr [0x005fa0e8]        ; 005b5cd7 | DAT_005fa0e8
    FNSTSW AX                           ; 005b5cdd
    SAHF                                ; 005b5cdf
    JA 0x005b5d03                       ; 005b5ce0
        ;   XREF to: 005b5d03 (CONDITIONAL_JUMP)  ; LAB_005b5d03
    MOV dword ptr [ESP + 0x58],0x40490fdb ; 005b5ce2
    FLDZ                                ; 005b5cea
        ;   Label: LAB_005b5cea
    FCOMP float ptr [ESP + 0x2c]        ; 005b5cec
    FNSTSW AX                           ; 005b5cf0
    SAHF                                ; 005b5cf2
    JBE 0x005b5a68                      ; 005b5cf3
        ;   XREF to: 005b5a68 (CONDITIONAL_JUMP)  ; LAB_005b5a68
    XOR byte ptr [ESP + 0x5b],0x80      ; 005b5cf9
    JMP 0x005b5a68                      ; 005b5cfe
        ;   XREF to: 005b5a68 (UNCONDITIONAL_JUMP)  ; LAB_005b5a68
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 005b5d03
        ;   Label: LAB_005b5d03
    JL 0x005b5d15                       ; 005b5d0b
        ;   XREF to: 005b5d15 (CONDITIONAL_JUMP)  ; LAB_005b5d15
    XOR EDI,EDI                         ; 005b5d0d
    MOV dword ptr [ESP + 0x58],EDI      ; 005b5d0f
    JMP 0x005b5cea                      ; 005b5d13
        ;   XREF to: 005b5cea (UNCONDITIONAL_JUMP)  ; LAB_005b5cea
    FLD float ptr [ESP + 0x4]           ; 005b5d15
        ;   Label: LAB_005b5d15
    CALL crt_math.c_acos_FUN_005c1d04   ; 005b5d19
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP + 0x58]         ; 005b5d1e
    JMP 0x005b5cea                      ; 005b5d22
        ;   XREF to: 005b5cea (UNCONDITIONAL_JUMP)  ; LAB_005b5cea
    FLD float ptr [ESP + 0xc]           ; 005b5d24
        ;   Label: LAB_005b5d24
    FCOMP float ptr [0x005fa0e8]        ; 005b5d28 | DAT_005fa0e8
    FNSTSW AX                           ; 005b5d2e
    SAHF                                ; 005b5d30
    JA 0x005b5d54                       ; 005b5d31
        ;   XREF to: 005b5d54 (CONDITIONAL_JUMP)  ; LAB_005b5d54
    MOV dword ptr [ESP + 0x5c],0x40490fdb ; 005b5d33
    FLDZ                                ; 005b5d3b
        ;   Label: LAB_005b5d3b
    FCOMP float ptr [ESP + 0x28]        ; 005b5d3d
    FNSTSW AX                           ; 005b5d41
    SAHF                                ; 005b5d43
    JBE 0x005b5bc3                      ; 005b5d44
        ;   XREF to: 005b5bc3 (CONDITIONAL_JUMP)  ; LAB_005b5bc3
    XOR byte ptr [ESP + 0x5f],0x80      ; 005b5d4a
    JMP 0x005b5bc3                      ; 005b5d4f
        ;   XREF to: 005b5bc3 (UNCONDITIONAL_JUMP)  ; LAB_005b5bc3
    CMP dword ptr [ESP + 0xc],0x3f800000 ; 005b5d54
        ;   Label: LAB_005b5d54
    JL 0x005b5d66                       ; 005b5d5c
        ;   XREF to: 005b5d66 (CONDITIONAL_JUMP)  ; LAB_005b5d66
    XOR ESI,ESI                         ; 005b5d5e
    MOV dword ptr [ESP + 0x5c],ESI      ; 005b5d60
    JMP 0x005b5d3b                      ; 005b5d64
        ;   XREF to: 005b5d3b (UNCONDITIONAL_JUMP)  ; LAB_005b5d3b
    FLD float ptr [ESP + 0xc]           ; 005b5d66
        ;   Label: LAB_005b5d66
    CALL crt_math.c_acos_FUN_005c1d04   ; 005b5d6a
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP + 0x5c]         ; 005b5d6f
    JMP 0x005b5d3b                      ; 005b5d73
        ;   XREF to: 005b5d3b (UNCONDITIONAL_JUMP)  ; LAB_005b5d3b
    FLD float ptr [ESP + 0x18]          ; 005b5d75
        ;   Label: LAB_005b5d75
    FCOMP float ptr [0x005fa0e8]        ; 005b5d79 | DAT_005fa0e8
    FNSTSW AX                           ; 005b5d7f
    SAHF                                ; 005b5d81
    JA 0x005b5da5                       ; 005b5d82
        ;   XREF to: 005b5da5 (CONDITIONAL_JUMP)  ; LAB_005b5da5
    MOV dword ptr [ESP + 0x54],0x40490fdb ; 005b5d84
    FLDZ                                ; 005b5d8c
        ;   Label: LAB_005b5d8c
    FCOMP float ptr [ESP + 0x44]        ; 005b5d8e
    FNSTSW AX                           ; 005b5d92
    SAHF                                ; 005b5d94
    JBE 0x005b5c80                      ; 005b5d95
        ;   XREF to: 005b5c80 (CONDITIONAL_JUMP)  ; LAB_005b5c80
    XOR byte ptr [ESP + 0x57],0x80      ; 005b5d9b
    JMP 0x005b5c80                      ; 005b5da0
        ;   XREF to: 005b5c80 (UNCONDITIONAL_JUMP)  ; LAB_005b5c80
    CMP dword ptr [ESP + 0x18],0x3f800000 ; 005b5da5
        ;   Label: LAB_005b5da5
    JL 0x005b5db7                       ; 005b5dad
        ;   XREF to: 005b5db7 (CONDITIONAL_JUMP)  ; LAB_005b5db7
    XOR EBX,EBX                         ; 005b5daf
    MOV dword ptr [ESP + 0x54],EBX      ; 005b5db1
    JMP 0x005b5d8c                      ; 005b5db5
        ;   XREF to: 005b5d8c (UNCONDITIONAL_JUMP)  ; LAB_005b5d8c
    FLD float ptr [ESP + 0x18]          ; 005b5db7
        ;   Label: LAB_005b5db7
    CALL crt_math.c_acos_FUN_005c1d04   ; 005b5dbb
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP + 0x54]         ; 005b5dc0
    JMP 0x005b5d8c                      ; 005b5dc4
        ;   XREF to: 005b5d8c (UNCONDITIONAL_JUMP)  ; LAB_005b5d8c

