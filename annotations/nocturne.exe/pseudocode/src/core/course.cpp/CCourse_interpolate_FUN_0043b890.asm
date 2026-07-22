; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_interpolate_FUN_0043b890(int *param_1,float param_2,float *param_3,undefined4 *param_4)
;
; Local Variables:
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x64]:1  local_64
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
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_course.cpp_CCourse_evaluate_FUN_0043b800 at 0043b829
;
; Referenced Globals:
;   double DOUBLE_0057b2c2 = 0.00100000000000000
;
; Called Functions:
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b890
        ;   Label: core_course.cpp_CCourse_interpolate_FUN_0043b890
    PUSH ESI                            ; 0043b891
    PUSH EDI                            ; 0043b892
    PUSH EBP                            ; 0043b893
    MOV EBP,ESP                         ; 0043b894
    SUB ESP,0x80                        ; 0043b896
    AND ESP,0xfffffff8                  ; 0043b89c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043b89f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0043b8a2
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043b8a5
    TEST EDX,EDX                        ; 0043b8a8
    JNZ 0x0043ba03                      ; 0043b8aa
        ;   XREF to: 0043ba03 (CONDITIONAL_JUMP)  ; LAB_0043ba03
    FLD float ptr [EBP + 0x18]          ; 0043b8b0
    FLDZ                                ; 0043b8b3
    FCOMPP                              ; 0043b8b5
    FNSTSW AX                           ; 0043b8b7
    SAHF                                ; 0043b8b9
    JC 0x0043bac1                       ; 0043b8ba
        ;   XREF to: 0043bac1 (CONDITIONAL_JUMP)  ; LAB_0043bac1
    MOV dword ptr [ESP + 0x78],EDX      ; 0043b8c0
    MOV dword ptr [ESP + 0x18],EDX      ; 0043b8c4
    XOR EDI,EDI                         ; 0043b8c8
        ;   Label: LAB_0043b8c8
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043b8ca
        ;   Label: LAB_0043b8ca
    FLD float ptr [ESP + 0x18]          ; 0043b8ce
    SHL EAX,0x2                         ; 0043b8d2
    FSTP double ptr [ESP]               ; 0043b8d5
    LEA ECX,[EAX*0x8 + 0x0]             ; 0043b8d8
    FLD double ptr [ESP]                ; 0043b8df
    SUB ECX,EAX                         ; 0043b8e2
    FCOMP double ptr [0x0057b2c2]       ; 0043b8e4 | DOUBLE_0057b2c2
    FNSTSW AX                           ; 0043b8ea
    SAHF                                ; 0043b8ec
    JBE 0x0043bb0f                      ; 0043b8ed
        ;   XREF to: 0043bb0f (CONDITIONAL_JUMP)  ; LAB_0043bb0f
    LEA EAX,[EDI*0x4 + 0x0]             ; 0043b8f3
    MOV EDX,EAX                         ; 0043b8fa
    SHL EAX,0x3                         ; 0043b8fc
    SUB EAX,EDX                         ; 0043b8ff
    MOV EDX,dword ptr [ESI + 0x4]       ; 0043b901
    ADD EAX,EDX                         ; 0043b904
    FLD float ptr [ESP + 0x18]          ; 0043b906
    FLD float ptr [EAX]                 ; 0043b90a
    FMUL ST1                            ; 0043b90c
    FSTP float ptr [ESP + 0x48]         ; 0043b90e
    FLD float ptr [EAX + 0x4]           ; 0043b912
    FMUL ST1                            ; 0043b915
    FSTP float ptr [ESP + 0x4c]         ; 0043b917
    FMUL float ptr [EAX + 0x8]          ; 0043b91b
    FLD1                                ; 0043b91e
    FSUB double ptr [ESP]               ; 0043b920
    FXCH                                ; 0043b923
    FSTP float ptr [ESP + 0x50]         ; 0043b925
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043b929
    FSTP float ptr [ESP + 0x74]         ; 0043b92c
    FLD float ptr [ECX + EAX*0x1]       ; 0043b930
    FMUL float ptr [ESP + 0x74]         ; 0043b933
    FSTP float ptr [ESP + 0x3c]         ; 0043b937
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 0043b93b
    FMUL float ptr [ESP + 0x74]         ; 0043b93f
    FSTP float ptr [ESP + 0x40]         ; 0043b943
    FLD float ptr [ECX + EAX*0x1 + 0x8] ; 0043b947
    FMUL float ptr [ESP + 0x74]         ; 0043b94b
    LEA EDX,[ESP + 0x60]                ; 0043b94f
    FLD float ptr [ESP + 0x3c]          ; 0043b953
    FADD float ptr [ESP + 0x48]         ; 0043b957
    FLD float ptr [ESP + 0x40]          ; 0043b95b
    FXCH                                ; 0043b95f
    FSTP float ptr [ESP + 0x60]         ; 0043b961
    LEA EAX,[ESP + 0x54]                ; 0043b965
    FADD float ptr [ESP + 0x4c]         ; 0043b969
    FXCH                                ; 0043b96d
    FST float ptr [ESP + 0x44]          ; 0043b96f
    FADD float ptr [ESP + 0x50]         ; 0043b973
    FXCH                                ; 0043b977
    FSTP float ptr [ESP + 0x64]         ; 0043b979
    FSTP float ptr [ESP + 0x68]         ; 0043b97d
    CMP EAX,EDX                         ; 0043b981
    JZ 0x0043b99d                       ; 0043b983
        ;   XREF to: 0043b99d (CONDITIONAL_JUMP)  ; LAB_0043b99d
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043b985
    MOV dword ptr [ESP + 0x54],EAX      ; 0043b989
    MOV EAX,dword ptr [ESP + 0x64]      ; 0043b98d
    MOV dword ptr [ESP + 0x58],EAX      ; 0043b991
    MOV EAX,dword ptr [ESP + 0x68]      ; 0043b995
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043b999
    SHL EDI,0x2                         ; 0043b99d
        ;   Label: LAB_0043b99d
    LEA EAX,[EDI*0x8 + 0x0]             ; 0043b9a0
    MOV ESI,dword ptr [ESI + 0x4]       ; 0043b9a7
    SUB EAX,EDI                         ; 0043b9aa
    ADD EAX,ESI                         ; 0043b9ac
    ADD EAX,0xc                         ; 0043b9ae
    PUSH dword ptr [ESP + 0x18]         ; 0043b9b1
    PUSH EAX                            ; 0043b9b5
    MOV EAX,dword ptr [ESP + 0x80]      ; 0043b9b6
    SHL EAX,0x2                         ; 0043b9bd
    MOV EDX,EAX                         ; 0043b9c0
    SHL EAX,0x3                         ; 0043b9c2
    SUB EAX,EDX                         ; 0043b9c5
    ADD EAX,ESI                         ; 0043b9c7
    ADD EAX,0xc                         ; 0043b9c9
    PUSH EAX                            ; 0043b9cc
    LEA ESI,[ESP + 0x38]                ; 0043b9cd
    LEA EDI,[ESP + 0x28]                ; 0043b9d1
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 0043b9d5
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    LEA ESI,[ESP + 0x38]                ; 0043b9da
    ADD ESP,0xc                         ; 0043b9de
    MOVSD ES:EDI,ESI                    ; 0043b9e1
        ;   Label: LAB_0043b9e1
    MOVSD ES:EDI,ESI                    ; 0043b9e2
    MOVSD ES:EDI,ESI                    ; 0043b9e3
    MOVSD ES:EDI,ESI                    ; 0043b9e4
    LEA EAX,[ESP + 0x54]                ; 0043b9e5
    CMP EBX,EAX                         ; 0043b9e9
    JNZ 0x0043bb4e                      ; 0043b9eb
        ;   XREF to: 0043bb4e (CONDITIONAL_JUMP)  ; LAB_0043bb4e
    MOV EDI,dword ptr [EBP + 0x20]      ; 0043b9f1
    LEA ESI,[ESP + 0x1c]                ; 0043b9f4
    MOVSD ES:EDI,ESI                    ; 0043b9f8
    MOVSD ES:EDI,ESI                    ; 0043b9f9
    MOVSD ES:EDI,ESI                    ; 0043b9fa
    MOVSD ES:EDI,ESI                    ; 0043b9fb
    MOV ESP,EBP                         ; 0043b9fc
    POP EBP                             ; 0043b9fe
    POP EDI                             ; 0043b9ff
    POP ESI                             ; 0043ba00
    POP EBX                             ; 0043ba01
    RET                                 ; 0043ba02
    FLD float ptr [EBP + 0x18]          ; 0043ba03
        ;   Label: LAB_0043ba03
    FLDZ                                ; 0043ba06
    FILD dword ptr [ESI]                ; 0043ba08
    FSTP float ptr [ESP + 0x10]         ; 0043ba0a
    FXCH                                ; 0043ba0e
    FSTP double ptr [ESP + 0x8]         ; 0043ba10
    FCOMP double ptr [ESP + 0x8]        ; 0043ba14
    FNSTSW AX                           ; 0043ba18
    SAHF                                ; 0043ba1a
    JBE 0x0043ba96                      ; 0043ba1b
        ;   XREF to: 0043ba96 (CONDITIONAL_JUMP)  ; LAB_0043ba96
    FLD float ptr [EBP + 0x18]          ; 0043ba1d
    FCHS                                ; 0043ba20
    FDIV float ptr [ESP + 0x10]         ; 0043ba22
    SUB ESP,0x8                         ; 0043ba26
    FSTP double ptr [ESP]               ; 0043ba29
    CALL crt_math.c_floor_FUN_005648c0  ; 0043ba2c
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x74],EAX      ; 0043ba31
    MOV dword ptr [ESP + 0x78],EDX      ; 0043ba35
    FLD double ptr [ESP + 0x74]         ; 0043ba39
    ADD ESP,0x8                         ; 0043ba3d
    FMUL float ptr [ESP + 0x10]         ; 0043ba40
    FADD double ptr [ESP + 0x8]         ; 0043ba44
    FST float ptr [ESP + 0x14]          ; 0043ba48
    FLDZ                                ; 0043ba4c
    FCOMPP                              ; 0043ba4e
    FNSTSW AX                           ; 0043ba50
    SAHF                                ; 0043ba52
    JBE 0x0043ba61                      ; 0043ba53
        ;   XREF to: 0043ba61 (CONDITIONAL_JUMP)  ; LAB_0043ba61
    FLD float ptr [ESP + 0x14]          ; 0043ba55
    FADD float ptr [ESP + 0x10]         ; 0043ba59
    FSTP float ptr [ESP + 0x14]         ; 0043ba5d
        ;   Label: LAB_0043ba5d
    FLD float ptr [ESP + 0x14]          ; 0043ba61
        ;   Label: LAB_0043ba61
    FLD ST0                             ; 0043ba65
    CALL crt_math.c_round_FUN_00563a30  ; 0043ba67
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x78]        ; 0043ba6c
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043ba70
    MOV ECX,dword ptr [ESI]             ; 0043ba74
    MOV dword ptr [ESP + 0x7c],EAX      ; 0043ba76
    MOV EDI,dword ptr [ESP + 0x78]      ; 0043ba7a
    FILD dword ptr [ESP + 0x7c]         ; 0043ba7e
    FSUBP                               ; 0043ba82
    INC EDI                             ; 0043ba84
    FSTP float ptr [ESP + 0x18]         ; 0043ba85
    CMP EDI,ECX                         ; 0043ba89
    JL 0x0043b8ca                       ; 0043ba8b
        ;   XREF to: 0043b8ca (CONDITIONAL_JUMP)  ; LAB_0043b8ca
    JMP 0x0043b8c8                      ; 0043ba91
        ;   XREF to: 0043b8c8 (UNCONDITIONAL_JUMP)  ; LAB_0043b8c8
    FLD float ptr [EBP + 0x18]          ; 0043ba96
        ;   Label: LAB_0043ba96
    FDIV float ptr [ESP + 0x10]         ; 0043ba99
    SUB ESP,0x8                         ; 0043ba9d
    FSTP double ptr [ESP]               ; 0043baa0
    CALL crt_math.c_floor_FUN_005648c0  ; 0043baa3
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0x74],EAX      ; 0043baa8
    MOV dword ptr [ESP + 0x78],EDX      ; 0043baac
    FLD double ptr [ESP + 0x74]         ; 0043bab0
    ADD ESP,0x8                         ; 0043bab4
    FMUL float ptr [ESP + 0x10]         ; 0043bab7
    FSUBR double ptr [ESP + 0x8]        ; 0043babb
    JMP 0x0043ba5d                      ; 0043babf
        ;   XREF to: 0043ba5d (UNCONDITIONAL_JUMP)  ; LAB_0043ba5d
    MOV EDX,dword ptr [ESI]             ; 0043bac1
        ;   Label: LAB_0043bac1
    DEC EDX                             ; 0043bac3
    MOV dword ptr [ESP + 0x7c],EDX      ; 0043bac4
    FILD dword ptr [ESP + 0x7c]         ; 0043bac8
    FCOMP float ptr [EBP + 0x18]        ; 0043bacc
    FNSTSW AX                           ; 0043bacf
    SAHF                                ; 0043bad1
    JA 0x0043bae5                       ; 0043bad2
        ;   XREF to: 0043bae5 (CONDITIONAL_JUMP)  ; LAB_0043bae5
    MOV dword ptr [ESP + 0x78],EDX      ; 0043bad4
    XOR ECX,ECX                         ; 0043bad8
    MOV EDI,EDX                         ; 0043bada
    MOV dword ptr [ESP + 0x18],ECX      ; 0043badc
    JMP 0x0043b8ca                      ; 0043bae0
        ;   XREF to: 0043b8ca (UNCONDITIONAL_JUMP)  ; LAB_0043b8ca
    FLD float ptr [EBP + 0x18]          ; 0043bae5
        ;   Label: LAB_0043bae5
    FLD ST0                             ; 0043bae8
    CALL crt_math.c_round_FUN_00563a30  ; 0043baea
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x78]        ; 0043baef
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043baf3
    MOV dword ptr [ESP + 0x7c],EAX      ; 0043baf7
    MOV EDI,dword ptr [ESP + 0x78]      ; 0043bafb
    FILD dword ptr [ESP + 0x7c]         ; 0043baff
    FSUBP                               ; 0043bb03
    INC EDI                             ; 0043bb05
    FSTP float ptr [ESP + 0x18]         ; 0043bb06
    JMP 0x0043b8ca                      ; 0043bb0a
        ;   XREF to: 0043b8ca (UNCONDITIONAL_JUMP)  ; LAB_0043b8ca
    MOV EDI,dword ptr [ESI + 0x4]       ; 0043bb0f
        ;   Label: LAB_0043bb0f
    LEA EAX,[ESP + 0x54]                ; 0043bb12
    ADD EDI,ECX                         ; 0043bb16
    CMP EAX,EDI                         ; 0043bb18
    JZ 0x0043bb30                       ; 0043bb1a
        ;   XREF to: 0043bb30 (CONDITIONAL_JUMP)  ; LAB_0043bb30
    MOV EAX,dword ptr [EDI]             ; 0043bb1c
    MOV dword ptr [ESP + 0x54],EAX      ; 0043bb1e
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043bb22
    MOV dword ptr [ESP + 0x58],EAX      ; 0043bb25
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043bb29
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043bb2c
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043bb30
        ;   Label: LAB_0043bb30
    SHL EAX,0x2                         ; 0043bb34
    MOV EDX,EAX                         ; 0043bb37
    SHL EAX,0x3                         ; 0043bb39
    MOV ESI,dword ptr [ESI + 0x4]       ; 0043bb3c
    SUB EAX,EDX                         ; 0043bb3f
    LEA EDI,[ESP + 0x1c]                ; 0043bb41
    LEA ESI,[ESI + EAX*0x1 + 0xc]       ; 0043bb45
    JMP 0x0043b9e1                      ; 0043bb49
        ;   XREF to: 0043b9e1 (UNCONDITIONAL_JUMP)  ; LAB_0043b9e1
    MOV EAX,dword ptr [ESP + 0x54]      ; 0043bb4e
        ;   Label: LAB_0043bb4e
    MOV dword ptr [EBX],EAX             ; 0043bb52
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043bb54
    MOV dword ptr [EBX + 0x4],EAX       ; 0043bb58
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0043bb5b
    MOV dword ptr [EBX + 0x8],EAX       ; 0043bb5f
    MOV EDI,dword ptr [EBP + 0x20]      ; 0043bb62
    LEA ESI,[ESP + 0x1c]                ; 0043bb65
    MOVSD ES:EDI,ESI                    ; 0043bb69
    MOVSD ES:EDI,ESI                    ; 0043bb6a
    MOVSD ES:EDI,ESI                    ; 0043bb6b
    MOVSD ES:EDI,ESI                    ; 0043bb6c
    MOV ESP,EBP                         ; 0043bb6d
    POP EBP                             ; 0043bb6f
    POP EDI                             ; 0043bb70
    POP ESI                             ; 0043bb71
    POP EBX                             ; 0043bb72
    RET                                 ; 0043bb73

