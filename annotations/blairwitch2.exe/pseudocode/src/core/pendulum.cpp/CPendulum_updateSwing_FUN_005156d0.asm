; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_updateSwing_FUN_005156d0(CPendulum *this_ptr,float delta_time)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_pendulum.cpp_CPendulum_process_FUN_00515cd0 at 00515d24
;
; Referenced Globals:
;   undefined4 DAT_005e1a3e
;   undefined4 DAT_005e1a42
;   undefined4 DAT_005e1a4a
;   undefined4 DAT_005e1a52
;   undefined4 DAT_005e1a5a
;   undefined4 DAT_005e1a62
;   undefined4 DAT_005e1a6a
;   undefined4 DAT_005e1a72
;   undefined4 DAT_005e1a7a
;   undefined4 DAT_005e1a82
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408d70
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80
;   crt_math.c_floor_FUN_005b84d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005156d0
        ;   Label: core_pendulum.cpp_CPendulum_updateSwing_FUN_005156d0
    PUSH ESI                            ; 005156d1
    PUSH EDI                            ; 005156d2
    PUSH EBP                            ; 005156d3
    MOV EBP,ESP                         ; 005156d4
    SUB ESP,0x64                        ; 005156d6
    AND ESP,0xfffffff8                  ; 005156d9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005156dc
    FLD float ptr [EBX + 0x4fc]         ; 005156df
    FSTP double ptr [ESP + 0x50]        ; 005156e5
    MOV EDX,dword ptr [ESP + 0x54]      ; 005156e9
    PUSH EDX                            ; 005156ed
    MOV ECX,dword ptr [ESP + 0x54]      ; 005156ee
    PUSH ECX                            ; 005156f2
    CALL crt_math.c_floor_FUN_005b84d0  ; 005156f3
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x60],EAX      ; 005156f8
    MOV dword ptr [ESP + 0x64],EDX      ; 005156fc
    FLD double ptr [ESP + 0x60]         ; 00515700
    ADD ESP,0x8                         ; 00515704
    FLD float ptr [EBP + 0x18]          ; 00515707
    FDIV float ptr [EBX + 0x500]        ; 0051570a
    MOV ESI,dword ptr [EBX + 0x598]     ; 00515710
    FXCH                                ; 00515716
    FSUBR double ptr [ESP + 0x50]       ; 00515718
    FXCH                                ; 0051571c
    FADD float ptr [EBX + 0x4fc]        ; 0051571e
    FXCH                                ; 00515724
    FSTP float ptr [ESP + 0x28]         ; 00515726
    FSTP float ptr [EBX + 0x4fc]        ; 0051572a
    TEST ESI,ESI                        ; 00515730
    JZ 0x00515755                       ; 00515732
        ;   XREF to: 00515755 (CONDITIONAL_JUMP)  ; LAB_00515755
    FLD float ptr [EBX + 0x4fc]         ; 00515734
    FLD1                                ; 0051573a
    FCOMPP                              ; 0051573c
    FNSTSW AX                           ; 0051573e
    SAHF                                ; 00515740
    JNC 0x00515755                      ; 00515741
        ;   XREF to: 00515755 (CONDITIONAL_JUMP)  ; LAB_00515755
    FLD float ptr [EBX + 0x4fc]         ; 00515743
    FADD float ptr [0x005e1a3e]         ; 00515749 | DAT_005e1a3e
    FSTP float ptr [EBX + 0x4fc]        ; 0051574f
    SUB ESP,0x8                         ; 00515755
        ;   Label: LAB_00515755
    FLD float ptr [EBX + 0x4fc]         ; 00515758
    FSTP double ptr [ESP]               ; 0051575e
    CALL crt_math.c_floor_FUN_005b84d0  ; 00515761
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x60],EAX      ; 00515766
    MOV dword ptr [ESP + 0x64],EDX      ; 0051576a
    FLD double ptr [ESP + 0x60]         ; 0051576e
    ADD ESP,0x8                         ; 00515772
    FSUBR float ptr [EBX + 0x4fc]       ; 00515775
    FST float ptr [EBX + 0x4fc]         ; 0051577b
    FMUL double ptr [0x005e1a42]        ; 00515781 | DAT_005e1a42
    FMUL double ptr [0x005e1a4a]        ; 00515787 | DAT_005e1a4a
    FSIN                                ; 0051578d
    FMUL float ptr [EBX + 0x504]        ; 0051578f
    FLD float ptr [EBX + 0x590]         ; 00515795
    FADD float ptr [EBP + 0x18]         ; 0051579b
    FLD float ptr [EBX + 0x58c]         ; 0051579e
    FMUL double ptr [0x005e1a52]        ; 005157a4 | DAT_005e1a52
    FXCH                                ; 005157aa
    FST float ptr [EBX + 0x590]         ; 005157ac
    FMULP                               ; 005157b2
    FLD1                                ; 005157b4
    FLDL2E                              ; 005157b6
    FMUL ST2                            ; 005157b8
    FST ST2                             ; 005157ba
    FPREM                               ; 005157bc
    F2XM1                               ; 005157be
    FADDP                               ; 005157c0
    FSCALE                              ; 005157c2
    FSTP ST1                            ; 005157c4
    FMULP                               ; 005157c6
    PUSH EBX                            ; 005157c8
    FSTP float ptr [EBX + 0x38]         ; 005157c9
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 005157cc
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005157d1
    LEA EAX,[EBX + 0x56c]               ; 005157d4
    PUSH EAX                            ; 005157da
    PUSH EBX                            ; 005157db
    LEA ESI,[ESP + 0x4c]                ; 005157dc
    LEA EDI,[ESP + 0x40]                ; 005157e0
    CALL core_actor.cpp_FUN_00408d70    ; 005157e4
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x4c]                ; 005157e9
    LEA EAX,[ESP + 0x40]                ; 005157ed
    ADD ESP,0x8                         ; 005157f1
    LEA EDX,[EBX + 0x578]               ; 005157f4
    MOVSD ES:EDI,ESI                    ; 005157fa
    MOVSD ES:EDI,ESI                    ; 005157fb
    MOVSD ES:EDI,ESI                    ; 005157fc
    CMP EDX,EAX                         ; 005157fd
    JZ 0x00515815                       ; 005157ff
        ;   XREF to: 00515815 (CONDITIONAL_JUMP)  ; LAB_00515815
    MOV EAX,dword ptr [ESP + 0x38]      ; 00515801
    MOV dword ptr [EDX],EAX             ; 00515805
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00515807
    MOV dword ptr [EDX + 0x4],EAX       ; 0051580b
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051580e
    MOV dword ptr [EDX + 0x8],EAX       ; 00515812
    FLD float ptr [EBX + 0x58c]         ; 00515815
        ;   Label: LAB_00515815
    FMUL double ptr [0x005e1a52]        ; 0051581b | DAT_005e1a52
    FMUL float ptr [EBX + 0x590]        ; 00515821
    FLD1                                ; 00515827
    FLDL2E                              ; 00515829
    FMUL ST2                            ; 0051582b
    FST ST2                             ; 0051582d
    FPREM                               ; 0051582f
    F2XM1                               ; 00515831
    FADDP                               ; 00515833
    FSCALE                              ; 00515835
    FSTP ST1                            ; 00515837
    FLD float ptr [EBP + 0x18]          ; 00515839
    FLDZ                                ; 0051583c
    FXCH ST2                            ; 0051583e
    FSTP float ptr [ESP + 0x14]         ; 00515840
    FXCH                                ; 00515844
    FCOMPP                              ; 00515846
    FNSTSW AX                           ; 00515848
    SAHF                                ; 0051584a
    JNC 0x00515aab                      ; 0051584b
        ;   XREF to: 00515aab (CONDITIONAL_JUMP)  ; LAB_00515aab
    FLD float ptr [ESP + 0x14]          ; 00515851
    FCOMP double ptr [0x005e1a5a]       ; 00515855 | DAT_005e1a5a
    FNSTSW AX                           ; 0051585b
    SAHF                                ; 0051585d
    JBE 0x00515aab                      ; 0051585e
        ;   XREF to: 00515aab (CONDITIONAL_JUMP)  ; LAB_00515aab
    FLD float ptr [ESP + 0x28]          ; 00515864
    MOV EAX,dword ptr [ESP + 0x28]      ; 00515868
    XOR EDI,EDI                         ; 0051586c
    MOV dword ptr [ESP + 0x18],EAX      ; 0051586e
    MOV EAX,dword ptr [EBX + 0x4fc]     ; 00515872
    MOV dword ptr [ESP + 0x24],EDI      ; 00515878
    MOV dword ptr [ESP + 0x8],EAX       ; 0051587c
    FCOMP double ptr [0x005e1a62]       ; 00515880 | DAT_005e1a62
    FNSTSW AX                           ; 00515886
    SAHF                                ; 00515888
    JC 0x00515ab2                       ; 00515889
        ;   XREF to: 00515ab2 (CONDITIONAL_JUMP)  ; LAB_00515ab2
    FLD float ptr [ESP + 0x24]          ; 0051588f
        ;   Label: LAB_0051588f
    FADD double ptr [0x005e1a6a]        ; 00515893 | DAT_005e1a6a
    FLD float ptr [ESP + 0x18]          ; 00515899
    FCOMPP                              ; 0051589d
    FNSTSW AX                           ; 0051589f
    SAHF                                ; 005158a1
    JBE 0x005158b2                      ; 005158a2
        ;   XREF to: 005158b2 (CONDITIONAL_JUMP)  ; LAB_005158b2
    FLD float ptr [ESP + 0x18]          ; 005158a4
    FADD float ptr [0x005e1a72]         ; 005158a8 | DAT_005e1a72
    FSTP float ptr [ESP + 0x18]         ; 005158ae
    FLD float ptr [ESP + 0x18]          ; 005158b2
        ;   Label: LAB_005158b2
    FCOMP float ptr [ESP + 0x24]        ; 005158b6
    FNSTSW AX                           ; 005158ba
    SAHF                                ; 005158bc
    JBE 0x00515ac1                      ; 005158bd
        ;   XREF to: 00515ac1 (CONDITIONAL_JUMP)  ; LAB_00515ac1
    FLD float ptr [EBX + 0x528]         ; 005158c3
        ;   Label: LAB_005158c3
    FADD double ptr [0x005e1a7a]        ; 005158c9 | DAT_005e1a7a
    FSTP float ptr [ESP + 0x60]         ; 005158cf
    MOV EAX,dword ptr [ESP + 0x60]      ; 005158d3
    FLD float ptr [ESP + 0x60]          ; 005158d7
    MOV dword ptr [ESP + 0x2c],EAX      ; 005158db
    MOV EAX,dword ptr [ESP + 0x28]      ; 005158df
    FADD double ptr [0x005e1a62]        ; 005158e3 | DAT_005e1a62
    MOV dword ptr [ESP + 0x1c],EAX      ; 005158e9
    MOV EAX,dword ptr [EBX + 0x4fc]     ; 005158ed
    FLD float ptr [ESP + 0x28]          ; 005158f3
    MOV dword ptr [ESP + 0x4],EAX       ; 005158f7
    FCOMPP                              ; 005158fb
    FNSTSW AX                           ; 005158fd
    SAHF                                ; 005158ff
    JNC 0x0051590c                      ; 00515900
        ;   XREF to: 0051590c (CONDITIONAL_JUMP)  ; LAB_0051590c
    FLD1                                ; 00515902
    FADD float ptr [ESP + 0x28]         ; 00515904
    FSTP float ptr [ESP + 0x1c]         ; 00515908
    FLD float ptr [ESP + 0x2c]          ; 0051590c
        ;   Label: LAB_0051590c
    FADD double ptr [0x005e1a6a]        ; 00515910 | DAT_005e1a6a
    FLD float ptr [ESP + 0x1c]          ; 00515916
    FCOMPP                              ; 0051591a
    FNSTSW AX                           ; 0051591c
    SAHF                                ; 0051591e
    JBE 0x0051592f                      ; 0051591f
        ;   XREF to: 0051592f (CONDITIONAL_JUMP)  ; LAB_0051592f
    FLD float ptr [ESP + 0x1c]          ; 00515921
    FADD float ptr [0x005e1a72]         ; 00515925 | DAT_005e1a72
    FSTP float ptr [ESP + 0x1c]         ; 0051592b
    FLD float ptr [ESP + 0x1c]          ; 0051592f
        ;   Label: LAB_0051592f
    FCOMP float ptr [ESP + 0x2c]        ; 00515933
    FNSTSW AX                           ; 00515937
    SAHF                                ; 00515939
    JBE 0x00515b63                      ; 0051593a
        ;   XREF to: 00515b63 (CONDITIONAL_JUMP)  ; LAB_00515b63
    FLD float ptr [ESP + 0x28]          ; 00515940
        ;   Label: LAB_00515940
    MOV EDX,0x3f000000                  ; 00515944
    MOV EAX,dword ptr [ESP + 0x28]      ; 00515949
    FLDZ                                ; 0051594d
    MOV dword ptr [ESP + 0x20],EAX      ; 0051594f
    MOV EAX,dword ptr [EBX + 0x4fc]     ; 00515953
    MOV dword ptr [ESP + 0x30],EDX      ; 00515959
    MOV dword ptr [ESP],EAX             ; 0051595d
    FCOMPP                              ; 00515960
    FNSTSW AX                           ; 00515962
    SAHF                                ; 00515964
    JBE 0x00515971                      ; 00515965
        ;   XREF to: 00515971 (CONDITIONAL_JUMP)  ; LAB_00515971
    FLD1                                ; 00515967
    FADD float ptr [ESP + 0x28]         ; 00515969
    FSTP float ptr [ESP + 0x20]         ; 0051596d
    FLD float ptr [ESP + 0x30]          ; 00515971
        ;   Label: LAB_00515971
    FADD double ptr [0x005e1a6a]        ; 00515975 | DAT_005e1a6a
    FLD float ptr [ESP + 0x20]          ; 0051597b
    FCOMPP                              ; 0051597f
    FNSTSW AX                           ; 00515981
    SAHF                                ; 00515983
    JBE 0x00515994                      ; 00515984
        ;   XREF to: 00515994 (CONDITIONAL_JUMP)  ; LAB_00515994
    FLD float ptr [ESP + 0x20]          ; 00515986
    FADD float ptr [0x005e1a72]         ; 0051598a | DAT_005e1a72
    FSTP float ptr [ESP + 0x20]         ; 00515990
    FLD float ptr [ESP + 0x20]          ; 00515994
        ;   Label: LAB_00515994
    FCOMP float ptr [ESP + 0x30]        ; 00515998
    FNSTSW AX                           ; 0051599c
    SAHF                                ; 0051599e
    JBE 0x00515c0e                      ; 0051599f
        ;   XREF to: 00515c0e (CONDITIONAL_JUMP)  ; LAB_00515c0e
    FLD float ptr [EBX + 0x528]         ; 005159a5
        ;   Label: LAB_005159a5
    FADD double ptr [0x005e1a82]        ; 005159ab | DAT_005e1a82
    FSTP float ptr [ESP + 0x60]         ; 005159b1
    MOV EAX,dword ptr [ESP + 0x60]      ; 005159b5
    FLD float ptr [ESP + 0x60]          ; 005159b9
    MOV dword ptr [ESP + 0x10],EAX      ; 005159bd
    MOV EAX,dword ptr [ESP + 0x28]      ; 005159c1
    FADD double ptr [0x005e1a62]        ; 005159c5 | DAT_005e1a62
    MOV dword ptr [ESP + 0x34],EAX      ; 005159cb
    MOV EAX,dword ptr [EBX + 0x4fc]     ; 005159cf
    FLD float ptr [ESP + 0x28]          ; 005159d5
    MOV dword ptr [ESP + 0xc],EAX       ; 005159d9
    FCOMPP                              ; 005159dd
    FNSTSW AX                           ; 005159df
    SAHF                                ; 005159e1
    JNC 0x005159ee                      ; 005159e2
        ;   XREF to: 005159ee (CONDITIONAL_JUMP)  ; LAB_005159ee
    FLD1                                ; 005159e4
    FADD float ptr [ESP + 0x28]         ; 005159e6
    FSTP float ptr [ESP + 0x34]         ; 005159ea
    FLD float ptr [ESP + 0x10]          ; 005159ee
        ;   Label: LAB_005159ee
    FADD double ptr [0x005e1a6a]        ; 005159f2 | DAT_005e1a6a
    FLD float ptr [ESP + 0x34]          ; 005159f8
    FCOMPP                              ; 005159fc
    FNSTSW AX                           ; 005159fe
    SAHF                                ; 00515a00
    JBE 0x00515a11                      ; 00515a01
        ;   XREF to: 00515a11 (CONDITIONAL_JUMP)  ; LAB_00515a11
    FLD float ptr [ESP + 0x34]          ; 00515a03
    FADD float ptr [0x005e1a72]         ; 00515a07 | DAT_005e1a72
    FSTP float ptr [ESP + 0x34]         ; 00515a0d
    FLD float ptr [ESP + 0x34]          ; 00515a11
        ;   Label: LAB_00515a11
    FCOMP float ptr [ESP + 0x10]        ; 00515a15
    FNSTSW AX                           ; 00515a19
    SAHF                                ; 00515a1b
    JA 0x00515aab                       ; 00515a1c
        ;   XREF to: 00515aab (CONDITIONAL_JUMP)  ; LAB_00515aab
    FLD float ptr [ESP + 0xc]           ; 00515a22
    FCOMP float ptr [ESP + 0x34]        ; 00515a26
    FNSTSW AX                           ; 00515a2a
    SAHF                                ; 00515a2c
    JNC 0x00515a39                      ; 00515a2d
        ;   XREF to: 00515a39 (CONDITIONAL_JUMP)  ; LAB_00515a39
    FLD1                                ; 00515a2f
    FADD float ptr [ESP + 0xc]          ; 00515a31
    FSTP float ptr [ESP + 0xc]          ; 00515a35
    FLD float ptr [ESP + 0xc]           ; 00515a39
        ;   Label: LAB_00515a39
    FCOMP float ptr [ESP + 0x34]        ; 00515a3d
    FNSTSW AX                           ; 00515a41
    SAHF                                ; 00515a43
    JNC 0x00515a50                      ; 00515a44
        ;   XREF to: 00515a50 (CONDITIONAL_JUMP)  ; LAB_00515a50
    FLD1                                ; 00515a46
    FADD float ptr [ESP + 0xc]          ; 00515a48
    FSTP float ptr [ESP + 0xc]          ; 00515a4c
    FLD float ptr [ESP + 0x34]          ; 00515a50
        ;   Label: LAB_00515a50
    FLD1                                ; 00515a54
    FADDP                               ; 00515a56
    FLD float ptr [ESP + 0xc]           ; 00515a58
    FCOMPP                              ; 00515a5c
    FNSTSW AX                           ; 00515a5e
    SAHF                                ; 00515a60
    JBE 0x00515a71                      ; 00515a61
        ;   XREF to: 00515a71 (CONDITIONAL_JUMP)  ; LAB_00515a71
    FLD float ptr [ESP + 0xc]           ; 00515a63
    FADD float ptr [0x005e1a72]         ; 00515a67 | DAT_005e1a72
    FSTP float ptr [ESP + 0xc]          ; 00515a6d
    FLD float ptr [ESP + 0x34]          ; 00515a71
        ;   Label: LAB_00515a71
    FLD1                                ; 00515a75
    FADDP                               ; 00515a77
    FLD float ptr [ESP + 0xc]           ; 00515a79
    FCOMPP                              ; 00515a7d
    FNSTSW AX                           ; 00515a7f
    SAHF                                ; 00515a81
    JBE 0x00515a92                      ; 00515a82
        ;   XREF to: 00515a92 (CONDITIONAL_JUMP)  ; LAB_00515a92
    FLD float ptr [ESP + 0xc]           ; 00515a84
    FADD float ptr [0x005e1a72]         ; 00515a88 | DAT_005e1a72
    FSTP float ptr [ESP + 0xc]          ; 00515a8e
    FLD float ptr [ESP + 0xc]           ; 00515a92
        ;   Label: LAB_00515a92
    FCOMP float ptr [ESP + 0x10]        ; 00515a96
    FNSTSW AX                           ; 00515a9a
    SAHF                                ; 00515a9c
    SETA AL                             ; 00515a9d
    AND EAX,0xff                        ; 00515aa0
    JNZ 0x00515ca3                      ; 00515aa5
        ;   XREF to: 00515ca3 (CONDITIONAL_JUMP)  ; LAB_00515ca3
    MOV ESP,EBP                         ; 00515aab
        ;   Label: LAB_00515aab
    POP EBP                             ; 00515aad
    POP EDI                             ; 00515aae
    POP ESI                             ; 00515aaf
    POP EBX                             ; 00515ab0
    RET                                 ; 00515ab1
    FLD1                                ; 00515ab2
        ;   Label: LAB_00515ab2
    FADD float ptr [ESP + 0x28]         ; 00515ab4
    FSTP float ptr [ESP + 0x18]         ; 00515ab8
    JMP 0x0051588f                      ; 00515abc
        ;   XREF to: 0051588f (UNCONDITIONAL_JUMP)  ; LAB_0051588f
    FLD float ptr [ESP + 0x8]           ; 00515ac1
        ;   Label: LAB_00515ac1
    FCOMP float ptr [ESP + 0x18]        ; 00515ac5
    FNSTSW AX                           ; 00515ac9
    SAHF                                ; 00515acb
    JNC 0x00515ad8                      ; 00515acc
        ;   XREF to: 00515ad8 (CONDITIONAL_JUMP)  ; LAB_00515ad8
    FLD1                                ; 00515ace
    FADD float ptr [ESP + 0x8]          ; 00515ad0
    FSTP float ptr [ESP + 0x8]          ; 00515ad4
    FLD float ptr [ESP + 0x8]           ; 00515ad8
        ;   Label: LAB_00515ad8
    FCOMP float ptr [ESP + 0x18]        ; 00515adc
    FNSTSW AX                           ; 00515ae0
    SAHF                                ; 00515ae2
    JNC 0x00515aef                      ; 00515ae3
        ;   XREF to: 00515aef (CONDITIONAL_JUMP)  ; LAB_00515aef
    FLD1                                ; 00515ae5
    FADD float ptr [ESP + 0x8]          ; 00515ae7
    FSTP float ptr [ESP + 0x8]          ; 00515aeb
    FLD float ptr [ESP + 0x18]          ; 00515aef
        ;   Label: LAB_00515aef
    FLD1                                ; 00515af3
    FADDP                               ; 00515af5
    FLD float ptr [ESP + 0x8]           ; 00515af7
    FCOMPP                              ; 00515afb
    FNSTSW AX                           ; 00515afd
    SAHF                                ; 00515aff
    JBE 0x00515b10                      ; 00515b00
        ;   XREF to: 00515b10 (CONDITIONAL_JUMP)  ; LAB_00515b10
    FLD float ptr [ESP + 0x8]           ; 00515b02
    FADD float ptr [0x005e1a72]         ; 00515b06 | DAT_005e1a72
    FSTP float ptr [ESP + 0x8]          ; 00515b0c
    FLD float ptr [ESP + 0x18]          ; 00515b10
        ;   Label: LAB_00515b10
    FLD1                                ; 00515b14
    FADDP                               ; 00515b16
    FLD float ptr [ESP + 0x8]           ; 00515b18
    FCOMPP                              ; 00515b1c
    FNSTSW AX                           ; 00515b1e
    SAHF                                ; 00515b20
    JBE 0x00515b31                      ; 00515b21
        ;   XREF to: 00515b31 (CONDITIONAL_JUMP)  ; LAB_00515b31
    FLD float ptr [ESP + 0x8]           ; 00515b23
    FADD float ptr [0x005e1a72]         ; 00515b27 | DAT_005e1a72
    FSTP float ptr [ESP + 0x8]          ; 00515b2d
    FLD float ptr [ESP + 0x8]           ; 00515b31
        ;   Label: LAB_00515b31
    FCOMP float ptr [ESP + 0x24]        ; 00515b35
    FNSTSW AX                           ; 00515b39
    SAHF                                ; 00515b3b
    SETA AL                             ; 00515b3c
    AND EAX,0xff                        ; 00515b3f
    JZ 0x005158c3                       ; 00515b44
        ;   XREF to: 005158c3 (CONDITIONAL_JUMP)  ; LAB_005158c3
    LEA EAX,[EBX + 0x52c]               ; 00515b4a
    PUSH EAX                            ; 00515b50
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00515b51
    PUSH EBX                            ; 00515b57
    CALL dword ptr [EDX + 0x34]         ; 00515b58
    ADD ESP,0x8                         ; 00515b5b
    JMP 0x005158c3                      ; 00515b5e
        ;   XREF to: 005158c3 (UNCONDITIONAL_JUMP)  ; LAB_005158c3
    FLD float ptr [ESP + 0x4]           ; 00515b63
        ;   Label: LAB_00515b63
    FCOMP float ptr [ESP + 0x1c]        ; 00515b67
    FNSTSW AX                           ; 00515b6b
    SAHF                                ; 00515b6d
    JNC 0x00515b7a                      ; 00515b6e
        ;   XREF to: 00515b7a (CONDITIONAL_JUMP)  ; LAB_00515b7a
    FLD1                                ; 00515b70
    FADD float ptr [ESP + 0x4]          ; 00515b72
    FSTP float ptr [ESP + 0x4]          ; 00515b76
    FLD float ptr [ESP + 0x4]           ; 00515b7a
        ;   Label: LAB_00515b7a
    FCOMP float ptr [ESP + 0x1c]        ; 00515b7e
    FNSTSW AX                           ; 00515b82
    SAHF                                ; 00515b84
    JNC 0x00515b91                      ; 00515b85
        ;   XREF to: 00515b91 (CONDITIONAL_JUMP)  ; LAB_00515b91
    FLD1                                ; 00515b87
    FADD float ptr [ESP + 0x4]          ; 00515b89
    FSTP float ptr [ESP + 0x4]          ; 00515b8d
    FLD float ptr [ESP + 0x1c]          ; 00515b91
        ;   Label: LAB_00515b91
    FLD1                                ; 00515b95
    FADDP                               ; 00515b97
    FLD float ptr [ESP + 0x4]           ; 00515b99
    FCOMPP                              ; 00515b9d
    FNSTSW AX                           ; 00515b9f
    SAHF                                ; 00515ba1
    JBE 0x00515bb2                      ; 00515ba2
        ;   XREF to: 00515bb2 (CONDITIONAL_JUMP)  ; LAB_00515bb2
    FLD float ptr [ESP + 0x4]           ; 00515ba4
    FADD float ptr [0x005e1a72]         ; 00515ba8 | DAT_005e1a72
    FSTP float ptr [ESP + 0x4]          ; 00515bae
    FLD float ptr [ESP + 0x1c]          ; 00515bb2
        ;   Label: LAB_00515bb2
    FLD1                                ; 00515bb6
    FADDP                               ; 00515bb8
    FLD float ptr [ESP + 0x4]           ; 00515bba
    FCOMPP                              ; 00515bbe
    FNSTSW AX                           ; 00515bc0
    SAHF                                ; 00515bc2
    JBE 0x00515bd3                      ; 00515bc3
        ;   XREF to: 00515bd3 (CONDITIONAL_JUMP)  ; LAB_00515bd3
    FLD float ptr [ESP + 0x4]           ; 00515bc5
    FADD float ptr [0x005e1a72]         ; 00515bc9 | DAT_005e1a72
    FSTP float ptr [ESP + 0x4]          ; 00515bcf
    FLD float ptr [ESP + 0x4]           ; 00515bd3
        ;   Label: LAB_00515bd3
    FCOMP float ptr [ESP + 0x2c]        ; 00515bd7
    FNSTSW AX                           ; 00515bdb
    SAHF                                ; 00515bdd
    SETA AL                             ; 00515bde
    AND EAX,0xff                        ; 00515be1
    JZ 0x00515940                       ; 00515be6
        ;   XREF to: 00515940 (CONDITIONAL_JUMP)  ; LAB_00515940
    LEA EAX,[EBX + 0x578]               ; 00515bec
    PUSH EAX                            ; 00515bf2
    LEA EAX,[EBX + 0x508]               ; 00515bf3
    PUSH EAX                            ; 00515bf9
    PUSH EBX                            ; 00515bfa
    MOV EAX,[0x0061c068]                ; 00515bfb | DAT_0061c068
    PUSH EAX                            ; 00515c00
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80 ; 00515c01
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 00515c06
    JMP 0x00515940                      ; 00515c09
        ;   XREF to: 00515940 (UNCONDITIONAL_JUMP)  ; LAB_00515940
    FLD float ptr [ESP]                 ; 00515c0e
        ;   Label: LAB_00515c0e
    FCOMP float ptr [ESP + 0x20]        ; 00515c11
    FNSTSW AX                           ; 00515c15
    SAHF                                ; 00515c17
    JNC 0x00515c22                      ; 00515c18
        ;   XREF to: 00515c22 (CONDITIONAL_JUMP)  ; LAB_00515c22
    FLD1                                ; 00515c1a
    FADD float ptr [ESP]                ; 00515c1c
    FSTP float ptr [ESP]                ; 00515c1f
    FLD float ptr [ESP]                 ; 00515c22
        ;   Label: LAB_00515c22
    FCOMP float ptr [ESP + 0x20]        ; 00515c25
    FNSTSW AX                           ; 00515c29
    SAHF                                ; 00515c2b
    JNC 0x00515c36                      ; 00515c2c
        ;   XREF to: 00515c36 (CONDITIONAL_JUMP)  ; LAB_00515c36
    FLD1                                ; 00515c2e
    FADD float ptr [ESP]                ; 00515c30
    FSTP float ptr [ESP]                ; 00515c33
    FLD float ptr [ESP + 0x20]          ; 00515c36
        ;   Label: LAB_00515c36
    FLD1                                ; 00515c3a
    FADDP                               ; 00515c3c
    FLD float ptr [ESP]                 ; 00515c3e
    FCOMPP                              ; 00515c41
    FNSTSW AX                           ; 00515c43
    SAHF                                ; 00515c45
    JBE 0x00515c54                      ; 00515c46
        ;   XREF to: 00515c54 (CONDITIONAL_JUMP)  ; LAB_00515c54
    FLD float ptr [ESP]                 ; 00515c48
    FADD float ptr [0x005e1a72]         ; 00515c4b | DAT_005e1a72
    FSTP float ptr [ESP]                ; 00515c51
    FLD float ptr [ESP + 0x20]          ; 00515c54
        ;   Label: LAB_00515c54
    FLD1                                ; 00515c58
    FADDP                               ; 00515c5a
    FLD float ptr [ESP]                 ; 00515c5c
    FCOMPP                              ; 00515c5f
    FNSTSW AX                           ; 00515c61
    SAHF                                ; 00515c63
    JBE 0x00515c72                      ; 00515c64
        ;   XREF to: 00515c72 (CONDITIONAL_JUMP)  ; LAB_00515c72
    FLD float ptr [ESP]                 ; 00515c66
    FADD float ptr [0x005e1a72]         ; 00515c69 | DAT_005e1a72
    FSTP float ptr [ESP]                ; 00515c6f
    FLD float ptr [ESP]                 ; 00515c72
        ;   Label: LAB_00515c72
    FCOMP float ptr [ESP + 0x30]        ; 00515c75
    FNSTSW AX                           ; 00515c79
    SAHF                                ; 00515c7b
    SETA AL                             ; 00515c7c
    AND EAX,0xff                        ; 00515c7f
    JZ 0x005159a5                       ; 00515c84
        ;   XREF to: 005159a5 (CONDITIONAL_JUMP)  ; LAB_005159a5
    LEA EAX,[EBX + 0x54c]               ; 00515c8a
    PUSH EAX                            ; 00515c90
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00515c91
    PUSH EBX                            ; 00515c97
    CALL dword ptr [EDX + 0x34]         ; 00515c98
    ADD ESP,0x8                         ; 00515c9b
    JMP 0x005159a5                      ; 00515c9e
        ;   XREF to: 005159a5 (UNCONDITIONAL_JUMP)  ; LAB_005159a5
    LEA EAX,[EBX + 0x578]               ; 00515ca3
        ;   Label: LAB_00515ca3
    PUSH EAX                            ; 00515ca9
    LEA EAX,[EBX + 0x508]               ; 00515caa
    PUSH EAX                            ; 00515cb0
    PUSH EBX                            ; 00515cb1
    MOV ECX,dword ptr [0x0061c068]      ; 00515cb2 | DAT_0061c068
    PUSH ECX                            ; 00515cb8
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80 ; 00515cb9
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 00515cbe
    MOV ESP,EBP                         ; 00515cc1
    POP EBP                             ; 00515cc3
    POP EDI                             ; 00515cc4
    POP ESI                             ; 00515cc5
    POP EBX                             ; 00515cc6
    RET                                 ; 00515cc7

