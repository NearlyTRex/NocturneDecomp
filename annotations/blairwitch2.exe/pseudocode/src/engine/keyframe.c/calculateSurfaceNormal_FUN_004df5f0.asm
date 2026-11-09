; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_calculateSurfaceNormal_FUN_004df5f0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 at 00416b62
;   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_0044ecb0 at 0044ed25
;   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00461690 at 00461707
;   core_set.cpp_FUN_00533a80 at 00533e86
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004df960 at 004dfcbb
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_004dfd50 at 004dfdb1
;
; Referenced Globals:
;   undefined4 DAT_005dbbfe
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df5f0
        ;   Label: engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0
    PUSH ESI                            ; 004df5f1
    PUSH EDI                            ; 004df5f2
    PUSH EBP                            ; 004df5f3
    MOV EBP,ESP                         ; 004df5f4
    SUB ESP,0x38                        ; 004df5f6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004df5f9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004df5fc
    MOV EDX,dword ptr [EAX + 0x24]      ; 004df5ff
    LEA EAX,[EDX*0x4 + 0x0]             ; 004df602
    SUB EAX,EDX                         ; 004df609
    SHL EAX,0x2                         ; 004df60b
    LEA EDX,[EAX + EBX*0x1]             ; 004df60e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004df611
    MOV ECX,dword ptr [EAX + 0x18]      ; 004df614
    LEA EAX,[ECX*0x4 + 0x0]             ; 004df617
    SUB EAX,ECX                         ; 004df61e
    MOV ECX,dword ptr [EDX]             ; 004df620
    SUB ECX,dword ptr [EBX + EAX*0x4]   ; 004df622
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x4] ; 004df625
    MOV dword ptr [EBP + -0xc],ECX      ; 004df629
    MOV ECX,dword ptr [EDX + 0x4]       ; 004df62c
    SUB ECX,EDI                         ; 004df62f
    MOV dword ptr [EBP + -0x8],ECX      ; 004df631
    MOV ECX,dword ptr [EDX + 0x8]       ; 004df634
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x8] ; 004df637
    MOV EAX,ECX                         ; 004df63b
    SUB EAX,ESI                         ; 004df63d
    FILD dword ptr [EBP + -0xc]         ; 004df63f
    MOV dword ptr [EBP + -0xc],EAX      ; 004df642
    FILD dword ptr [EBP + -0x8]         ; 004df645
    FILD dword ptr [EBP + -0xc]         ; 004df648
    FSTP float ptr [EBP + -0x14]        ; 004df64b
    MOV ECX,dword ptr [EBP + 0x18]      ; 004df64e
    MOV ECX,dword ptr [ECX + 0x30]      ; 004df651
    LEA EAX,[ECX*0x4 + 0x0]             ; 004df654
    SUB EAX,ECX                         ; 004df65b
    MOV EDI,dword ptr [EDX]             ; 004df65d
    MOV ECX,dword ptr [EBX + EAX*0x4]   ; 004df65f
    SUB ECX,EDI                         ; 004df662
    FLD ST0                             ; 004df664
    MOV dword ptr [EBP + -0xc],ECX      ; 004df666
    MOV EDI,dword ptr [EDX + 0x8]       ; 004df669
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x4] ; 004df66c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8] ; 004df670
    MOV ESI,dword ptr [EDX + 0x4]       ; 004df674
    SUB EAX,EDI                         ; 004df677
    SUB ECX,ESI                         ; 004df679
    MOV dword ptr [EBP + -0x4],EAX      ; 004df67b
    MOV dword ptr [EBP + -0x8],ECX      ; 004df67e
    FILD dword ptr [EBP + -0x4]         ; 004df681
    FXCH                                ; 004df684
    FMUL ST1                            ; 004df686
    FILD dword ptr [EBP + -0x8]         ; 004df688
    FLD ST0                             ; 004df68b
    FMUL float ptr [EBP + -0x14]        ; 004df68d
    FSUBP ST2,ST0                       ; 004df690
    FILD dword ptr [EBP + -0xc]         ; 004df692
    FXCH ST2                            ; 004df695
    FSTP float ptr [EBP + -0x1c]        ; 004df697
    FLD ST1                             ; 004df69a
    FMUL float ptr [EBP + -0x14]        ; 004df69c
    FLD ST5                             ; 004df69f
    FMULP ST4                           ; 004df6a1
    FSUBRP ST3,ST0                      ; 004df6a3
    FXCH ST2                            ; 004df6a5
    FSTP float ptr [EBP + -0x34]        ; 004df6a7
    FXCH ST3                            ; 004df6aa
    FMULP                               ; 004df6ac
    FXCH ST2                            ; 004df6ae
    FMULP                               ; 004df6b0
    FSUBP                               ; 004df6b2
    FSTP float ptr [EBP + -0x30]        ; 004df6b4
    FLD float ptr [EBP + -0x1c]         ; 004df6b7
    FMUL ST0                            ; 004df6ba
    FLD float ptr [EBP + -0x34]         ; 004df6bc
    FMUL ST0                            ; 004df6bf
    FADDP                               ; 004df6c1
    FLD float ptr [EBP + -0x30]         ; 004df6c3
    FMUL ST0                            ; 004df6c6
    FADDP                               ; 004df6c8
    FSQRT                               ; 004df6ca
    FSTP float ptr [EBP + -0x10]        ; 004df6cc
    TEST dword ptr [EBP + -0x10],0x7fffffff ; 004df6cf
    JNZ 0x004df6df                      ; 004df6d6
        ;   XREF to: 004df6df (CONDITIONAL_JUMP)  ; LAB_004df6df
    MOV dword ptr [EBP + -0x10],0x477fff00 ; 004df6d8
    FLD1                                ; 004df6df
        ;   Label: LAB_004df6df
    FDIV float ptr [EBP + -0x10]        ; 004df6e1
    FLD float ptr [EBP + -0x1c]         ; 004df6e4
    FMUL ST1                            ; 004df6e7
    FLD double ptr [0x005dbbfe]         ; 004df6e9 | DAT_005dbbfe
    FXCH                                ; 004df6ef
    FMUL ST1                            ; 004df6f1
    FSTP float ptr [EBP + -0x1c]        ; 004df6f3
    FLD float ptr [EBP + -0x34]         ; 004df6f6
    FMUL ST2                            ; 004df6f9
    FMUL ST1                            ; 004df6fb
    FSTP float ptr [EBP + -0x34]        ; 004df6fd
    FLD float ptr [EBP + -0x30]         ; 004df700
    FMULP ST2                           ; 004df703
    FMULP                               ; 004df705
    FSTP float ptr [EBP + -0x30]        ; 004df707
    MOV EDX,dword ptr [EBP + 0x18]      ; 004df70a
    MOV EDX,dword ptr [EDX + 0x18]      ; 004df70d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004df710
    SUB EAX,EDX                         ; 004df717
    FILD dword ptr [EBX + EAX*0x4 + 0x4] ; 004df719
    FMUL float ptr [EBP + -0x34]        ; 004df71d
    FILD dword ptr [EBX + EAX*0x4]      ; 004df720
    FMUL float ptr [EBP + -0x1c]        ; 004df723
    FADDP                               ; 004df726
    FILD dword ptr [EBX + EAX*0x4 + 0x8] ; 004df728
    FMUL float ptr [EBP + -0x30]        ; 004df72c
    FADDP                               ; 004df72f
    FSTP float ptr [EBP + -0x2c]        ; 004df731
    MOV EBX,dword ptr [EBP + 0x18]      ; 004df734
    FLD float ptr [EBP + 0xffffffe4]    ; 004df73a
    FISTP dword ptr [EBX + 0x8]         ; 004df740
    FLD float ptr [EBP + 0xffffffcc]    ; 004df743
    FISTP dword ptr [EBX + 0xc]         ; 004df749
    FLD float ptr [EBP + 0xffffffd0]    ; 004df74c
    FISTP dword ptr [EBX + 0x10]        ; 004df752
    FLD float ptr [EBP + 0xffffffd4]    ; 004df755
    FISTP dword ptr [EBX + 0x14]        ; 004df75b
    MOV ESP,EBP                         ; 004df75e
    POP EBP                             ; 004df760
    POP EDI                             ; 004df761
    POP ESI                             ; 004df762
    POP EBX                             ; 004df763
    RET                                 ; 004df764

