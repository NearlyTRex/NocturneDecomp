; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_FUN_00536a20(CPendulum *this_ptr,float delta_time)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_pendulum.cpp_FUN_00537020 at 00537074
;
; Referenced Globals:
;   undefined4 DAT_005ecc99
;   undefined4 DAT_005ecc9d
;   undefined4 DAT_005ecca5
;   undefined4 DAT_005eccad
;   undefined4 DAT_005eccb5
;   undefined4 DAT_005eccbd
;   undefined4 DAT_005eccc5
;   undefined4 DAT_005ecccd
;   undefined4 DAT_005eccd5
;   undefined4 DAT_005eccdd
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408b40
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0
;   crt_math.c_floor_FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536a20
        ;   Label: core_pendulum.cpp_FUN_00536a20
    PUSH ESI                            ; 00536a21
    PUSH EDI                            ; 00536a22
    PUSH EBP                            ; 00536a23
    MOV EBP,ESP                         ; 00536a24
    SUB ESP,0x64                        ; 00536a26
    AND ESP,0xfffffff8                  ; 00536a29
    MOV EBX,dword ptr [EBP + 0x14]      ; 00536a2c
    FLD float ptr [EBX + 0x3a0]         ; 00536a2f
    FSTP double ptr [ESP + 0x50]        ; 00536a35
    MOV EDX,dword ptr [ESP + 0x54]      ; 00536a39
    PUSH EDX                            ; 00536a3d
    MOV ECX,dword ptr [ESP + 0x54]      ; 00536a3e
    PUSH ECX                            ; 00536a42
    CALL crt_math.c_floor_FUN_005c0880  ; 00536a43
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x60],EAX      ; 00536a48
    MOV dword ptr [ESP + 0x64],EDX      ; 00536a4c
    FLD double ptr [ESP + 0x60]         ; 00536a50
    ADD ESP,0x8                         ; 00536a54
    FLD float ptr [EBP + 0x18]          ; 00536a57
    FDIV float ptr [EBX + 0x3a4]        ; 00536a5a
    MOV ESI,dword ptr [EBX + 0x43c]     ; 00536a60
    FXCH                                ; 00536a66
    FSUBR double ptr [ESP + 0x50]       ; 00536a68
    FXCH                                ; 00536a6c
    FADD float ptr [EBX + 0x3a0]        ; 00536a6e
    FXCH                                ; 00536a74
    FSTP float ptr [ESP + 0x28]         ; 00536a76
    FSTP float ptr [EBX + 0x3a0]        ; 00536a7a
    TEST ESI,ESI                        ; 00536a80
    JZ 0x00536aa5                       ; 00536a82
        ;   XREF to: 00536aa5 (CONDITIONAL_JUMP)  ; LAB_00536aa5
    FLD float ptr [EBX + 0x3a0]         ; 00536a84
    FLD1                                ; 00536a8a
    FCOMPP                              ; 00536a8c
    FNSTSW AX                           ; 00536a8e
    SAHF                                ; 00536a90
    JNC 0x00536aa5                      ; 00536a91
        ;   XREF to: 00536aa5 (CONDITIONAL_JUMP)  ; LAB_00536aa5
    FLD float ptr [EBX + 0x3a0]         ; 00536a93
    FADD float ptr [0x005ecc99]         ; 00536a99 | DAT_005ecc99
    FSTP float ptr [EBX + 0x3a0]        ; 00536a9f
    SUB ESP,0x8                         ; 00536aa5
        ;   Label: LAB_00536aa5
    FLD float ptr [EBX + 0x3a0]         ; 00536aa8
    FSTP double ptr [ESP]               ; 00536aae
    CALL crt_math.c_floor_FUN_005c0880  ; 00536ab1
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x60],EAX      ; 00536ab6
    MOV dword ptr [ESP + 0x64],EDX      ; 00536aba
    FLD double ptr [ESP + 0x60]         ; 00536abe
    ADD ESP,0x8                         ; 00536ac2
    FSUBR float ptr [EBX + 0x3a0]       ; 00536ac5
    FST float ptr [EBX + 0x3a0]         ; 00536acb
    FMUL double ptr [0x005ecc9d]        ; 00536ad1 | DAT_005ecc9d
    FMUL double ptr [0x005ecca5]        ; 00536ad7 | DAT_005ecca5
    FSIN                                ; 00536add
    FMUL float ptr [EBX + 0x3a8]        ; 00536adf
    FLD float ptr [EBX + 0x434]         ; 00536ae5
    FADD float ptr [EBP + 0x18]         ; 00536aeb
    FLD float ptr [EBX + 0x430]         ; 00536aee
    FMUL double ptr [0x005eccad]        ; 00536af4 | DAT_005eccad
    FXCH                                ; 00536afa
    FST float ptr [EBX + 0x434]         ; 00536afc
    FMULP                               ; 00536b02
    FLD1                                ; 00536b04
    FLDL2E                              ; 00536b06
    FMUL ST2                            ; 00536b08
    FST ST2                             ; 00536b0a
    FPREM                               ; 00536b0c
    F2XM1                               ; 00536b0e
    FADDP                               ; 00536b10
    FSCALE                              ; 00536b12
    FSTP ST1                            ; 00536b14
    FMULP                               ; 00536b16
    PUSH EBX                            ; 00536b18
    FSTP float ptr [EBX + 0x38]         ; 00536b19
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 00536b1c
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00536b21
    LEA EAX,[EBX + 0x410]               ; 00536b24
    PUSH EAX                            ; 00536b2a
    PUSH EBX                            ; 00536b2b
    LEA ESI,[ESP + 0x4c]                ; 00536b2c
    LEA EDI,[ESP + 0x40]                ; 00536b30
    CALL core_actor.cpp_FUN_00408b40    ; 00536b34
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x4c]                ; 00536b39
    LEA EAX,[ESP + 0x40]                ; 00536b3d
    ADD ESP,0x8                         ; 00536b41
    LEA EDX,[EBX + 0x41c]               ; 00536b44
    MOVSD ES:EDI,ESI                    ; 00536b4a
    MOVSD ES:EDI,ESI                    ; 00536b4b
    MOVSD ES:EDI,ESI                    ; 00536b4c
    CMP EDX,EAX                         ; 00536b4d
    JZ 0x00536b65                       ; 00536b4f
        ;   XREF to: 00536b65 (CONDITIONAL_JUMP)  ; LAB_00536b65
    MOV EAX,dword ptr [ESP + 0x38]      ; 00536b51
    MOV dword ptr [EDX],EAX             ; 00536b55
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00536b57
    MOV dword ptr [EDX + 0x4],EAX       ; 00536b5b
    MOV EAX,dword ptr [ESP + 0x40]      ; 00536b5e
    MOV dword ptr [EDX + 0x8],EAX       ; 00536b62
    FLD float ptr [EBX + 0x430]         ; 00536b65
        ;   Label: LAB_00536b65
    FMUL double ptr [0x005eccad]        ; 00536b6b | DAT_005eccad
    FMUL float ptr [EBX + 0x434]        ; 00536b71
    FLD1                                ; 00536b77
    FLDL2E                              ; 00536b79
    FMUL ST2                            ; 00536b7b
    FST ST2                             ; 00536b7d
    FPREM                               ; 00536b7f
    F2XM1                               ; 00536b81
    FADDP                               ; 00536b83
    FSCALE                              ; 00536b85
    FSTP ST1                            ; 00536b87
    FLD float ptr [EBP + 0x18]          ; 00536b89
    FLDZ                                ; 00536b8c
    FXCH ST2                            ; 00536b8e
    FSTP float ptr [ESP + 0x14]         ; 00536b90
    FXCH                                ; 00536b94
    FCOMPP                              ; 00536b96
    FNSTSW AX                           ; 00536b98
    SAHF                                ; 00536b9a
    JNC 0x00536dfb                      ; 00536b9b
        ;   XREF to: 00536dfb (CONDITIONAL_JUMP)  ; LAB_00536dfb
    FLD float ptr [ESP + 0x14]          ; 00536ba1
    FCOMP double ptr [0x005eccb5]       ; 00536ba5 | DAT_005eccb5
    FNSTSW AX                           ; 00536bab
    SAHF                                ; 00536bad
    JBE 0x00536dfb                      ; 00536bae
        ;   XREF to: 00536dfb (CONDITIONAL_JUMP)  ; LAB_00536dfb
    FLD float ptr [ESP + 0x28]          ; 00536bb4
    MOV EAX,dword ptr [ESP + 0x28]      ; 00536bb8
    XOR EDI,EDI                         ; 00536bbc
    MOV dword ptr [ESP + 0x18],EAX      ; 00536bbe
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 00536bc2
    MOV dword ptr [ESP + 0x24],EDI      ; 00536bc8
    MOV dword ptr [ESP + 0x8],EAX       ; 00536bcc
    FCOMP double ptr [0x005eccbd]       ; 00536bd0 | DAT_005eccbd
    FNSTSW AX                           ; 00536bd6
    SAHF                                ; 00536bd8
    JC 0x00536e02                       ; 00536bd9
        ;   XREF to: 00536e02 (CONDITIONAL_JUMP)  ; LAB_00536e02
    FLD float ptr [ESP + 0x24]          ; 00536bdf
        ;   Label: LAB_00536bdf
    FADD double ptr [0x005eccc5]        ; 00536be3 | DAT_005eccc5
    FLD float ptr [ESP + 0x18]          ; 00536be9
    FCOMPP                              ; 00536bed
    FNSTSW AX                           ; 00536bef
    SAHF                                ; 00536bf1
    JBE 0x00536c02                      ; 00536bf2
        ;   XREF to: 00536c02 (CONDITIONAL_JUMP)  ; LAB_00536c02
    FLD float ptr [ESP + 0x18]          ; 00536bf4
    FADD float ptr [0x005ecccd]         ; 00536bf8 | DAT_005ecccd
    FSTP float ptr [ESP + 0x18]         ; 00536bfe
    FLD float ptr [ESP + 0x18]          ; 00536c02
        ;   Label: LAB_00536c02
    FCOMP float ptr [ESP + 0x24]        ; 00536c06
    FNSTSW AX                           ; 00536c0a
    SAHF                                ; 00536c0c
    JBE 0x00536e11                      ; 00536c0d
        ;   XREF to: 00536e11 (CONDITIONAL_JUMP)  ; LAB_00536e11
    FLD float ptr [EBX + 0x3cc]         ; 00536c13
        ;   Label: LAB_00536c13
    FADD double ptr [0x005eccd5]        ; 00536c19 | DAT_005eccd5
    FSTP float ptr [ESP + 0x60]         ; 00536c1f
    MOV EAX,dword ptr [ESP + 0x60]      ; 00536c23
    FLD float ptr [ESP + 0x60]          ; 00536c27
    MOV dword ptr [ESP + 0x2c],EAX      ; 00536c2b
    MOV EAX,dword ptr [ESP + 0x28]      ; 00536c2f
    FADD double ptr [0x005eccbd]        ; 00536c33 | DAT_005eccbd
    MOV dword ptr [ESP + 0x1c],EAX      ; 00536c39
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 00536c3d
    FLD float ptr [ESP + 0x28]          ; 00536c43
    MOV dword ptr [ESP + 0x4],EAX       ; 00536c47
    FCOMPP                              ; 00536c4b
    FNSTSW AX                           ; 00536c4d
    SAHF                                ; 00536c4f
    JNC 0x00536c5c                      ; 00536c50
        ;   XREF to: 00536c5c (CONDITIONAL_JUMP)  ; LAB_00536c5c
    FLD1                                ; 00536c52
    FADD float ptr [ESP + 0x28]         ; 00536c54
    FSTP float ptr [ESP + 0x1c]         ; 00536c58
    FLD float ptr [ESP + 0x2c]          ; 00536c5c
        ;   Label: LAB_00536c5c
    FADD double ptr [0x005eccc5]        ; 00536c60 | DAT_005eccc5
    FLD float ptr [ESP + 0x1c]          ; 00536c66
    FCOMPP                              ; 00536c6a
    FNSTSW AX                           ; 00536c6c
    SAHF                                ; 00536c6e
    JBE 0x00536c7f                      ; 00536c6f
        ;   XREF to: 00536c7f (CONDITIONAL_JUMP)  ; LAB_00536c7f
    FLD float ptr [ESP + 0x1c]          ; 00536c71
    FADD float ptr [0x005ecccd]         ; 00536c75 | DAT_005ecccd
    FSTP float ptr [ESP + 0x1c]         ; 00536c7b
    FLD float ptr [ESP + 0x1c]          ; 00536c7f
        ;   Label: LAB_00536c7f
    FCOMP float ptr [ESP + 0x2c]        ; 00536c83
    FNSTSW AX                           ; 00536c87
    SAHF                                ; 00536c89
    JBE 0x00536eb3                      ; 00536c8a
        ;   XREF to: 00536eb3 (CONDITIONAL_JUMP)  ; LAB_00536eb3
    FLD float ptr [ESP + 0x28]          ; 00536c90
        ;   Label: LAB_00536c90
    MOV EDX,0x3f000000                  ; 00536c94
    MOV EAX,dword ptr [ESP + 0x28]      ; 00536c99
    FLDZ                                ; 00536c9d
    MOV dword ptr [ESP + 0x20],EAX      ; 00536c9f
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 00536ca3
    MOV dword ptr [ESP + 0x30],EDX      ; 00536ca9
    MOV dword ptr [ESP],EAX             ; 00536cad
    FCOMPP                              ; 00536cb0
    FNSTSW AX                           ; 00536cb2
    SAHF                                ; 00536cb4
    JBE 0x00536cc1                      ; 00536cb5
        ;   XREF to: 00536cc1 (CONDITIONAL_JUMP)  ; LAB_00536cc1
    FLD1                                ; 00536cb7
    FADD float ptr [ESP + 0x28]         ; 00536cb9
    FSTP float ptr [ESP + 0x20]         ; 00536cbd
    FLD float ptr [ESP + 0x30]          ; 00536cc1
        ;   Label: LAB_00536cc1
    FADD double ptr [0x005eccc5]        ; 00536cc5 | DAT_005eccc5
    FLD float ptr [ESP + 0x20]          ; 00536ccb
    FCOMPP                              ; 00536ccf
    FNSTSW AX                           ; 00536cd1
    SAHF                                ; 00536cd3
    JBE 0x00536ce4                      ; 00536cd4
        ;   XREF to: 00536ce4 (CONDITIONAL_JUMP)  ; LAB_00536ce4
    FLD float ptr [ESP + 0x20]          ; 00536cd6
    FADD float ptr [0x005ecccd]         ; 00536cda | DAT_005ecccd
    FSTP float ptr [ESP + 0x20]         ; 00536ce0
    FLD float ptr [ESP + 0x20]          ; 00536ce4
        ;   Label: LAB_00536ce4
    FCOMP float ptr [ESP + 0x30]        ; 00536ce8
    FNSTSW AX                           ; 00536cec
    SAHF                                ; 00536cee
    JBE 0x00536f5e                      ; 00536cef
        ;   XREF to: 00536f5e (CONDITIONAL_JUMP)  ; LAB_00536f5e
    FLD float ptr [EBX + 0x3cc]         ; 00536cf5
        ;   Label: LAB_00536cf5
    FADD double ptr [0x005eccdd]        ; 00536cfb | DAT_005eccdd
    FSTP float ptr [ESP + 0x60]         ; 00536d01
    MOV EAX,dword ptr [ESP + 0x60]      ; 00536d05
    FLD float ptr [ESP + 0x60]          ; 00536d09
    MOV dword ptr [ESP + 0x10],EAX      ; 00536d0d
    MOV EAX,dword ptr [ESP + 0x28]      ; 00536d11
    FADD double ptr [0x005eccbd]        ; 00536d15 | DAT_005eccbd
    MOV dword ptr [ESP + 0x34],EAX      ; 00536d1b
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 00536d1f
    FLD float ptr [ESP + 0x28]          ; 00536d25
    MOV dword ptr [ESP + 0xc],EAX       ; 00536d29
    FCOMPP                              ; 00536d2d
    FNSTSW AX                           ; 00536d2f
    SAHF                                ; 00536d31
    JNC 0x00536d3e                      ; 00536d32
        ;   XREF to: 00536d3e (CONDITIONAL_JUMP)  ; LAB_00536d3e
    FLD1                                ; 00536d34
    FADD float ptr [ESP + 0x28]         ; 00536d36
    FSTP float ptr [ESP + 0x34]         ; 00536d3a
    FLD float ptr [ESP + 0x10]          ; 00536d3e
        ;   Label: LAB_00536d3e
    FADD double ptr [0x005eccc5]        ; 00536d42 | DAT_005eccc5
    FLD float ptr [ESP + 0x34]          ; 00536d48
    FCOMPP                              ; 00536d4c
    FNSTSW AX                           ; 00536d4e
    SAHF                                ; 00536d50
    JBE 0x00536d61                      ; 00536d51
        ;   XREF to: 00536d61 (CONDITIONAL_JUMP)  ; LAB_00536d61
    FLD float ptr [ESP + 0x34]          ; 00536d53
    FADD float ptr [0x005ecccd]         ; 00536d57 | DAT_005ecccd
    FSTP float ptr [ESP + 0x34]         ; 00536d5d
    FLD float ptr [ESP + 0x34]          ; 00536d61
        ;   Label: LAB_00536d61
    FCOMP float ptr [ESP + 0x10]        ; 00536d65
    FNSTSW AX                           ; 00536d69
    SAHF                                ; 00536d6b
    JA 0x00536dfb                       ; 00536d6c
        ;   XREF to: 00536dfb (CONDITIONAL_JUMP)  ; LAB_00536dfb
    FLD float ptr [ESP + 0xc]           ; 00536d72
    FCOMP float ptr [ESP + 0x34]        ; 00536d76
    FNSTSW AX                           ; 00536d7a
    SAHF                                ; 00536d7c
    JNC 0x00536d89                      ; 00536d7d
        ;   XREF to: 00536d89 (CONDITIONAL_JUMP)  ; LAB_00536d89
    FLD1                                ; 00536d7f
    FADD float ptr [ESP + 0xc]          ; 00536d81
    FSTP float ptr [ESP + 0xc]          ; 00536d85
    FLD float ptr [ESP + 0xc]           ; 00536d89
        ;   Label: LAB_00536d89
    FCOMP float ptr [ESP + 0x34]        ; 00536d8d
    FNSTSW AX                           ; 00536d91
    SAHF                                ; 00536d93
    JNC 0x00536da0                      ; 00536d94
        ;   XREF to: 00536da0 (CONDITIONAL_JUMP)  ; LAB_00536da0
    FLD1                                ; 00536d96
    FADD float ptr [ESP + 0xc]          ; 00536d98
    FSTP float ptr [ESP + 0xc]          ; 00536d9c
    FLD float ptr [ESP + 0x34]          ; 00536da0
        ;   Label: LAB_00536da0
    FLD1                                ; 00536da4
    FADDP                               ; 00536da6
    FLD float ptr [ESP + 0xc]           ; 00536da8
    FCOMPP                              ; 00536dac
    FNSTSW AX                           ; 00536dae
    SAHF                                ; 00536db0
    JBE 0x00536dc1                      ; 00536db1
        ;   XREF to: 00536dc1 (CONDITIONAL_JUMP)  ; LAB_00536dc1
    FLD float ptr [ESP + 0xc]           ; 00536db3
    FADD float ptr [0x005ecccd]         ; 00536db7 | DAT_005ecccd
    FSTP float ptr [ESP + 0xc]          ; 00536dbd
    FLD float ptr [ESP + 0x34]          ; 00536dc1
        ;   Label: LAB_00536dc1
    FLD1                                ; 00536dc5
    FADDP                               ; 00536dc7
    FLD float ptr [ESP + 0xc]           ; 00536dc9
    FCOMPP                              ; 00536dcd
    FNSTSW AX                           ; 00536dcf
    SAHF                                ; 00536dd1
    JBE 0x00536de2                      ; 00536dd2
        ;   XREF to: 00536de2 (CONDITIONAL_JUMP)  ; LAB_00536de2
    FLD float ptr [ESP + 0xc]           ; 00536dd4
    FADD float ptr [0x005ecccd]         ; 00536dd8 | DAT_005ecccd
    FSTP float ptr [ESP + 0xc]          ; 00536dde
    FLD float ptr [ESP + 0xc]           ; 00536de2
        ;   Label: LAB_00536de2
    FCOMP float ptr [ESP + 0x10]        ; 00536de6
    FNSTSW AX                           ; 00536dea
    SAHF                                ; 00536dec
    SETA AL                             ; 00536ded
    AND EAX,0xff                        ; 00536df0
    JNZ 0x00536ff3                      ; 00536df5
        ;   XREF to: 00536ff3 (CONDITIONAL_JUMP)  ; LAB_00536ff3
    MOV ESP,EBP                         ; 00536dfb
        ;   Label: LAB_00536dfb
    POP EBP                             ; 00536dfd
    POP EDI                             ; 00536dfe
    POP ESI                             ; 00536dff
    POP EBX                             ; 00536e00
    RET                                 ; 00536e01
    FLD1                                ; 00536e02
        ;   Label: LAB_00536e02
    FADD float ptr [ESP + 0x28]         ; 00536e04
    FSTP float ptr [ESP + 0x18]         ; 00536e08
    JMP 0x00536bdf                      ; 00536e0c
        ;   XREF to: 00536bdf (UNCONDITIONAL_JUMP)  ; LAB_00536bdf
    FLD float ptr [ESP + 0x8]           ; 00536e11
        ;   Label: LAB_00536e11
    FCOMP float ptr [ESP + 0x18]        ; 00536e15
    FNSTSW AX                           ; 00536e19
    SAHF                                ; 00536e1b
    JNC 0x00536e28                      ; 00536e1c
        ;   XREF to: 00536e28 (CONDITIONAL_JUMP)  ; LAB_00536e28
    FLD1                                ; 00536e1e
    FADD float ptr [ESP + 0x8]          ; 00536e20
    FSTP float ptr [ESP + 0x8]          ; 00536e24
    FLD float ptr [ESP + 0x8]           ; 00536e28
        ;   Label: LAB_00536e28
    FCOMP float ptr [ESP + 0x18]        ; 00536e2c
    FNSTSW AX                           ; 00536e30
    SAHF                                ; 00536e32
    JNC 0x00536e3f                      ; 00536e33
        ;   XREF to: 00536e3f (CONDITIONAL_JUMP)  ; LAB_00536e3f
    FLD1                                ; 00536e35
    FADD float ptr [ESP + 0x8]          ; 00536e37
    FSTP float ptr [ESP + 0x8]          ; 00536e3b
    FLD float ptr [ESP + 0x18]          ; 00536e3f
        ;   Label: LAB_00536e3f
    FLD1                                ; 00536e43
    FADDP                               ; 00536e45
    FLD float ptr [ESP + 0x8]           ; 00536e47
    FCOMPP                              ; 00536e4b
    FNSTSW AX                           ; 00536e4d
    SAHF                                ; 00536e4f
    JBE 0x00536e60                      ; 00536e50
        ;   XREF to: 00536e60 (CONDITIONAL_JUMP)  ; LAB_00536e60
    FLD float ptr [ESP + 0x8]           ; 00536e52
    FADD float ptr [0x005ecccd]         ; 00536e56 | DAT_005ecccd
    FSTP float ptr [ESP + 0x8]          ; 00536e5c
    FLD float ptr [ESP + 0x18]          ; 00536e60
        ;   Label: LAB_00536e60
    FLD1                                ; 00536e64
    FADDP                               ; 00536e66
    FLD float ptr [ESP + 0x8]           ; 00536e68
    FCOMPP                              ; 00536e6c
    FNSTSW AX                           ; 00536e6e
    SAHF                                ; 00536e70
    JBE 0x00536e81                      ; 00536e71
        ;   XREF to: 00536e81 (CONDITIONAL_JUMP)  ; LAB_00536e81
    FLD float ptr [ESP + 0x8]           ; 00536e73
    FADD float ptr [0x005ecccd]         ; 00536e77 | DAT_005ecccd
    FSTP float ptr [ESP + 0x8]          ; 00536e7d
    FLD float ptr [ESP + 0x8]           ; 00536e81
        ;   Label: LAB_00536e81
    FCOMP float ptr [ESP + 0x24]        ; 00536e85
    FNSTSW AX                           ; 00536e89
    SAHF                                ; 00536e8b
    SETA AL                             ; 00536e8c
    AND EAX,0xff                        ; 00536e8f
    JZ 0x00536c13                       ; 00536e94
        ;   XREF to: 00536c13 (CONDITIONAL_JUMP)  ; LAB_00536c13
    LEA EAX,[EBX + 0x3d0]               ; 00536e9a
    PUSH EAX                            ; 00536ea0
    MOV EDX,dword ptr [EBX + 0x154]     ; 00536ea1
    PUSH EBX                            ; 00536ea7
    CALL dword ptr [EDX + 0x2c]         ; 00536ea8
    ADD ESP,0x8                         ; 00536eab
    JMP 0x00536c13                      ; 00536eae
        ;   XREF to: 00536c13 (UNCONDITIONAL_JUMP)  ; LAB_00536c13
    FLD float ptr [ESP + 0x4]           ; 00536eb3
        ;   Label: LAB_00536eb3
    FCOMP float ptr [ESP + 0x1c]        ; 00536eb7
    FNSTSW AX                           ; 00536ebb
    SAHF                                ; 00536ebd
    JNC 0x00536eca                      ; 00536ebe
        ;   XREF to: 00536eca (CONDITIONAL_JUMP)  ; LAB_00536eca
    FLD1                                ; 00536ec0
    FADD float ptr [ESP + 0x4]          ; 00536ec2
    FSTP float ptr [ESP + 0x4]          ; 00536ec6
    FLD float ptr [ESP + 0x4]           ; 00536eca
        ;   Label: LAB_00536eca
    FCOMP float ptr [ESP + 0x1c]        ; 00536ece
    FNSTSW AX                           ; 00536ed2
    SAHF                                ; 00536ed4
    JNC 0x00536ee1                      ; 00536ed5
        ;   XREF to: 00536ee1 (CONDITIONAL_JUMP)  ; LAB_00536ee1
    FLD1                                ; 00536ed7
    FADD float ptr [ESP + 0x4]          ; 00536ed9
    FSTP float ptr [ESP + 0x4]          ; 00536edd
    FLD float ptr [ESP + 0x1c]          ; 00536ee1
        ;   Label: LAB_00536ee1
    FLD1                                ; 00536ee5
    FADDP                               ; 00536ee7
    FLD float ptr [ESP + 0x4]           ; 00536ee9
    FCOMPP                              ; 00536eed
    FNSTSW AX                           ; 00536eef
    SAHF                                ; 00536ef1
    JBE 0x00536f02                      ; 00536ef2
        ;   XREF to: 00536f02 (CONDITIONAL_JUMP)  ; LAB_00536f02
    FLD float ptr [ESP + 0x4]           ; 00536ef4
    FADD float ptr [0x005ecccd]         ; 00536ef8 | DAT_005ecccd
    FSTP float ptr [ESP + 0x4]          ; 00536efe
    FLD float ptr [ESP + 0x1c]          ; 00536f02
        ;   Label: LAB_00536f02
    FLD1                                ; 00536f06
    FADDP                               ; 00536f08
    FLD float ptr [ESP + 0x4]           ; 00536f0a
    FCOMPP                              ; 00536f0e
    FNSTSW AX                           ; 00536f10
    SAHF                                ; 00536f12
    JBE 0x00536f23                      ; 00536f13
        ;   XREF to: 00536f23 (CONDITIONAL_JUMP)  ; LAB_00536f23
    FLD float ptr [ESP + 0x4]           ; 00536f15
    FADD float ptr [0x005ecccd]         ; 00536f19 | DAT_005ecccd
    FSTP float ptr [ESP + 0x4]          ; 00536f1f
    FLD float ptr [ESP + 0x4]           ; 00536f23
        ;   Label: LAB_00536f23
    FCOMP float ptr [ESP + 0x2c]        ; 00536f27
    FNSTSW AX                           ; 00536f2b
    SAHF                                ; 00536f2d
    SETA AL                             ; 00536f2e
    AND EAX,0xff                        ; 00536f31
    JZ 0x00536c90                       ; 00536f36
        ;   XREF to: 00536c90 (CONDITIONAL_JUMP)  ; LAB_00536c90
    LEA EAX,[EBX + 0x41c]               ; 00536f3c
    PUSH EAX                            ; 00536f42
    LEA EAX,[EBX + 0x3ac]               ; 00536f43
    PUSH EAX                            ; 00536f49
    PUSH EBX                            ; 00536f4a
    MOV EAX,[0x006236b8]                ; 00536f4b | DAT_006236b8
    PUSH EAX                            ; 00536f50
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0 ; 00536f51
        ;   XREF to: 0057d8d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 00536f56
    JMP 0x00536c90                      ; 00536f59
        ;   XREF to: 00536c90 (UNCONDITIONAL_JUMP)  ; LAB_00536c90
    FLD float ptr [ESP]                 ; 00536f5e
        ;   Label: LAB_00536f5e
    FCOMP float ptr [ESP + 0x20]        ; 00536f61
    FNSTSW AX                           ; 00536f65
    SAHF                                ; 00536f67
    JNC 0x00536f72                      ; 00536f68
        ;   XREF to: 00536f72 (CONDITIONAL_JUMP)  ; LAB_00536f72
    FLD1                                ; 00536f6a
    FADD float ptr [ESP]                ; 00536f6c
    FSTP float ptr [ESP]                ; 00536f6f
    FLD float ptr [ESP]                 ; 00536f72
        ;   Label: LAB_00536f72
    FCOMP float ptr [ESP + 0x20]        ; 00536f75
    FNSTSW AX                           ; 00536f79
    SAHF                                ; 00536f7b
    JNC 0x00536f86                      ; 00536f7c
        ;   XREF to: 00536f86 (CONDITIONAL_JUMP)  ; LAB_00536f86
    FLD1                                ; 00536f7e
    FADD float ptr [ESP]                ; 00536f80
    FSTP float ptr [ESP]                ; 00536f83
    FLD float ptr [ESP + 0x20]          ; 00536f86
        ;   Label: LAB_00536f86
    FLD1                                ; 00536f8a
    FADDP                               ; 00536f8c
    FLD float ptr [ESP]                 ; 00536f8e
    FCOMPP                              ; 00536f91
    FNSTSW AX                           ; 00536f93
    SAHF                                ; 00536f95
    JBE 0x00536fa4                      ; 00536f96
        ;   XREF to: 00536fa4 (CONDITIONAL_JUMP)  ; LAB_00536fa4
    FLD float ptr [ESP]                 ; 00536f98
    FADD float ptr [0x005ecccd]         ; 00536f9b | DAT_005ecccd
    FSTP float ptr [ESP]                ; 00536fa1
    FLD float ptr [ESP + 0x20]          ; 00536fa4
        ;   Label: LAB_00536fa4
    FLD1                                ; 00536fa8
    FADDP                               ; 00536faa
    FLD float ptr [ESP]                 ; 00536fac
    FCOMPP                              ; 00536faf
    FNSTSW AX                           ; 00536fb1
    SAHF                                ; 00536fb3
    JBE 0x00536fc2                      ; 00536fb4
        ;   XREF to: 00536fc2 (CONDITIONAL_JUMP)  ; LAB_00536fc2
    FLD float ptr [ESP]                 ; 00536fb6
    FADD float ptr [0x005ecccd]         ; 00536fb9 | DAT_005ecccd
    FSTP float ptr [ESP]                ; 00536fbf
    FLD float ptr [ESP]                 ; 00536fc2
        ;   Label: LAB_00536fc2
    FCOMP float ptr [ESP + 0x30]        ; 00536fc5
    FNSTSW AX                           ; 00536fc9
    SAHF                                ; 00536fcb
    SETA AL                             ; 00536fcc
    AND EAX,0xff                        ; 00536fcf
    JZ 0x00536cf5                       ; 00536fd4
        ;   XREF to: 00536cf5 (CONDITIONAL_JUMP)  ; LAB_00536cf5
    LEA EAX,[EBX + 0x3f0]               ; 00536fda
    PUSH EAX                            ; 00536fe0
    MOV EDX,dword ptr [EBX + 0x154]     ; 00536fe1
    PUSH EBX                            ; 00536fe7
    CALL dword ptr [EDX + 0x2c]         ; 00536fe8
    ADD ESP,0x8                         ; 00536feb
    JMP 0x00536cf5                      ; 00536fee
        ;   XREF to: 00536cf5 (UNCONDITIONAL_JUMP)  ; LAB_00536cf5
    LEA EAX,[EBX + 0x41c]               ; 00536ff3
        ;   Label: LAB_00536ff3
    PUSH EAX                            ; 00536ff9
    LEA EAX,[EBX + 0x3ac]               ; 00536ffa
    PUSH EAX                            ; 00537000
    PUSH EBX                            ; 00537001
    MOV ECX,dword ptr [0x006236b8]      ; 00537002 | DAT_006236b8
    PUSH ECX                            ; 00537008
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0 ; 00537009
        ;   XREF to: 0057d8d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0053700e
    MOV ESP,EBP                         ; 00537011
    POP EBP                             ; 00537013
    POP EDI                             ; 00537014
    POP ESI                             ; 00537015
    POP EBX                             ; 00537016
    RET                                 ; 00537017

