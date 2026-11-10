; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041a700(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   out_bbox_min
; CVector3i *      Stack[0xc]:4   out_bbox_max
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
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
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 at 00419c1f
;
; Referenced Globals:
;   undefined4 DAT_005d44e5
;   undefined4 DAT_005d44e9
;   undefined4 DAT_005d44ed
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a200
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a700
        ;   Label: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041a700
    PUSH ESI                            ; 0041a701
    PUSH EDI                            ; 0041a702
    PUSH EBP                            ; 0041a703
    SUB ESP,0xa8                        ; 0041a704
    MOV EDX,0x7fffffff                  ; 0041a70a
    XOR ECX,ECX                         ; 0041a70f
    MOV dword ptr [ESP + 0x78],EDX      ; 0041a711
    MOV dword ptr [ESP + 0x70],ECX      ; 0041a715
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041a719
        ;   Label: LAB_0041a719
    XOR EBX,EBX                         ; 0041a71d
    MOV dword ptr [ESP + 0x74],EAX      ; 0041a71f
    MOV dword ptr [ESP + 0x7c],EBX      ; 0041a723
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0041a727
        ;   Label: LAB_0041a727
    MOV dword ptr [ESP + 0xa4],EAX      ; 0041a72b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0041a732
    FILD dword ptr [ESP + 0xa4]         ; 0041a736
    MOV dword ptr [ESP + 0xa4],EAX      ; 0041a73d
    FLD float ptr [0x005d44e5]          ; 0041a744 | DAT_005d44e5
    FXCH                                ; 0041a74a
    FMUL ST1                            ; 0041a74c
    FILD dword ptr [ESP + 0xa4]         ; 0041a74e
    FMULP ST2                           ; 0041a755
    FLD float ptr [0x005d44e9]          ; 0041a757 | DAT_005d44e9
    FXCH                                ; 0041a75d
    FMUL ST1                            ; 0041a75f
    FXCH ST2                            ; 0041a761
    FMULP                               ; 0041a763
    XOR ESI,ESI                         ; 0041a765
    LEA EAX,[ESP + 0x4c]                ; 0041a767
    MOV dword ptr [ESP + 0x54],ESI      ; 0041a76b
    PUSH EAX                            ; 0041a76f
    LEA EAX,[ESP + 0x4]                 ; 0041a770
    FXCH                                ; 0041a774
    FSTP float ptr [ESP + 0x50]         ; 0041a776
    PUSH EAX                            ; 0041a77a
    FSTP float ptr [ESP + 0x58]         ; 0041a77b
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0041a77f
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0041a784
    FLD float ptr [ESP]                 ; 0041a787
    FMUL float ptr [0x005d44ed]         ; 0041a78a | DAT_005d44ed
    FLD float ptr [ESP + 0x4]           ; 0041a790
    FMUL float ptr [0x005d44ed]         ; 0041a794 | DAT_005d44ed
    FLD float ptr [ESP + 0x8]           ; 0041a79a
    FMUL float ptr [0x005d44ed]         ; 0041a79e | DAT_005d44ed
    FLD float ptr [ESP + 0xc]           ; 0041a7a4
    FMUL float ptr [0x005d44ed]         ; 0041a7a8 | DAT_005d44ed
    FLD float ptr [ESP + 0x10]          ; 0041a7ae
    FMUL float ptr [0x005d44ed]         ; 0041a7b2 | DAT_005d44ed
    FLD float ptr [ESP + 0x14]          ; 0041a7b8
    FMUL float ptr [0x005d44ed]         ; 0041a7bc | DAT_005d44ed
    FLD float ptr [ESP + 0x18]          ; 0041a7c2
    FMUL float ptr [0x005d44ed]         ; 0041a7c6 | DAT_005d44ed
    MOV EDI,0x7fffffff                  ; 0041a7cc
    FXCH ST6                            ; 0041a7d1
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a7d3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x98]        ; 0041a7d8
    FLD float ptr [ESP + 0x1c]          ; 0041a7df
    FMUL float ptr [0x005d44ed]         ; 0041a7e3 | DAT_005d44ed
    MOV EBP,EDI                         ; 0041a7e9
    FXCH ST5                            ; 0041a7eb
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a7ed
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x9c]        ; 0041a7f2
    FLD float ptr [ESP + 0x20]          ; 0041a7f9
    FMUL float ptr [0x005d44ed]         ; 0041a7fd | DAT_005d44ed
    XOR EBP,EDI                         ; 0041a803
    MOV EDX,0x80000001                  ; 0041a805
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0041a80a
    MOV dword ptr [ESP + 0x60],EDI      ; 0041a811
    MOV dword ptr [ESP + 0x5c],EDI      ; 0041a815
    MOV dword ptr [ESP + 0x58],EDI      ; 0041a819
    MOV dword ptr [ESP + 0x6c],EDX      ; 0041a81d
    MOV dword ptr [ESP + 0x68],EDX      ; 0041a821
    MOV dword ptr [ESP + 0x64],EDX      ; 0041a825
    MOV ESI,dword ptr [EAX + 0x174]     ; 0041a829
    FXCH ST4                            ; 0041a82f
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a831
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 0041a836
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a838
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 0041a83d
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a83f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0041a844
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a846
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST6                            ; 0041a84b
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a84d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST5                            ; 0041a852
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a854
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST4                            ; 0041a859
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a85b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 0041a860
    FISTP dword ptr [ESP + 0x88]        ; 0041a862
    FXCH                                ; 0041a869
    FISTP dword ptr [ESP + 0x8c]        ; 0041a86b
    FISTP dword ptr [ESP + 0x90]        ; 0041a872
    FXCH ST3                            ; 0041a879
    FISTP dword ptr [ESP + 0x94]        ; 0041a87b
    FXCH                                ; 0041a882
    FISTP dword ptr [ESP + 0x84]        ; 0041a884
    FISTP dword ptr [ESP + 0x80]        ; 0041a88b
    FISTP dword ptr [ESP + 0xa0]        ; 0041a892
    TEST ESI,ESI                        ; 0041a899
    JLE 0x0041a9c9                      ; 0041a89b
        ;   XREF to: 0041a9c9 (CONDITIONAL_JUMP)  ; LAB_0041a9c9
    XOR EDI,EDI                         ; 0041a8a1
    MOV ECX,dword ptr [ESP + 0xbc]      ; 0041a8a3
        ;   Label: LAB_0041a8a3
    MOV ECX,dword ptr [ECX + 0x178]     ; 0041a8aa
    MOV EAX,dword ptr [ESP + 0x98]      ; 0041a8b0
    MOV EDX,dword ptr [ECX + EDI*0x1]   ; 0041a8b7
    IMUL EDX                            ; 0041a8ba
    SHRD EAX,EDX,0x10                   ; 0041a8bc
    MOV EBX,EAX                         ; 0041a8c0
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x4] ; 0041a8c2
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0041a8c6
    IMUL EDX                            ; 0041a8cd
    SHRD EAX,EDX,0x10                   ; 0041a8cf
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x8] ; 0041a8d3
    ADD EBX,EAX                         ; 0041a8d7
    MOV EAX,dword ptr [ESP + 0x84]      ; 0041a8d9
    IMUL EDX                            ; 0041a8e0
    SHRD EAX,EDX,0x10                   ; 0041a8e2
    MOV EDX,dword ptr [ECX + EDI*0x1]   ; 0041a8e6
    ADD EBX,EAX                         ; 0041a8e9
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0041a8eb
    IMUL EDX                            ; 0041a8f2
    SHRD EAX,EDX,0x10                   ; 0041a8f4
    MOV ESI,EAX                         ; 0041a8f8
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x4] ; 0041a8fa
    MOV EAX,dword ptr [ESP + 0x90]      ; 0041a8fe
    IMUL EDX                            ; 0041a905
    SHRD EAX,EDX,0x10                   ; 0041a907
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x8] ; 0041a90b
    ADD ESI,EAX                         ; 0041a90f
    MOV EAX,dword ptr [ESP + 0x80]      ; 0041a911
    IMUL EDX                            ; 0041a918
    SHRD EAX,EDX,0x10                   ; 0041a91a
    MOV EDX,dword ptr [ECX + EDI*0x1]   ; 0041a91e
    ADD ESI,EAX                         ; 0041a921
    MOV EAX,dword ptr [ESP + 0x88]      ; 0041a923
    IMUL EDX                            ; 0041a92a
    SHRD EAX,EDX,0x10                   ; 0041a92c
    MOV dword ptr [ESP + 0xa4],EAX      ; 0041a930
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x4] ; 0041a937
    MOV EAX,dword ptr [ESP + 0x94]      ; 0041a93b
    IMUL EDX                            ; 0041a942
    SHRD EAX,EDX,0x10                   ; 0041a944
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0041a948
    ADD EDX,EAX                         ; 0041a94f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0041a951
    MOV dword ptr [ESP + 0xa4],EDX      ; 0041a958
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x8] ; 0041a95f
    IMUL EDX                            ; 0041a963
    SHRD EAX,EDX,0x10                   ; 0041a965
    MOV ECX,dword ptr [ESP + 0xa4]      ; 0041a969
    MOV EDX,dword ptr [ESP + 0x58]      ; 0041a970
    ADD EAX,ECX                         ; 0041a974
    CMP EBX,EDX                         ; 0041a976
    JL 0x0041aa8c                       ; 0041a978
        ;   XREF to: 0041aa8c (CONDITIONAL_JUMP)  ; LAB_0041aa8c
    CMP EBX,dword ptr [ESP + 0x64]      ; 0041a97e
        ;   Label: LAB_0041a97e
    JLE 0x0041a988                      ; 0041a982
        ;   XREF to: 0041a988 (CONDITIONAL_JUMP)  ; LAB_0041a988
    MOV dword ptr [ESP + 0x64],EBX      ; 0041a984
    CMP ESI,dword ptr [ESP + 0x5c]      ; 0041a988
        ;   Label: LAB_0041a988
    JGE 0x0041a992                      ; 0041a98c
        ;   XREF to: 0041a992 (CONDITIONAL_JUMP)  ; LAB_0041a992
    MOV dword ptr [ESP + 0x5c],ESI      ; 0041a98e
    CMP ESI,dword ptr [ESP + 0x68]      ; 0041a992
        ;   Label: LAB_0041a992
    JLE 0x0041a99c                      ; 0041a996
        ;   XREF to: 0041a99c (CONDITIONAL_JUMP)  ; LAB_0041a99c
    MOV dword ptr [ESP + 0x68],ESI      ; 0041a998
    CMP EAX,dword ptr [ESP + 0x60]      ; 0041a99c
        ;   Label: LAB_0041a99c
    JGE 0x0041a9a6                      ; 0041a9a0
        ;   XREF to: 0041a9a6 (CONDITIONAL_JUMP)  ; LAB_0041a9a6
    MOV dword ptr [ESP + 0x60],EAX      ; 0041a9a2
    CMP EAX,dword ptr [ESP + 0x6c]      ; 0041a9a6
        ;   Label: LAB_0041a9a6
    JLE 0x0041a9b0                      ; 0041a9aa
        ;   XREF to: 0041a9b0 (CONDITIONAL_JUMP)  ; LAB_0041a9b0
    MOV dword ptr [ESP + 0x6c],EAX      ; 0041a9ac
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0041a9b0
        ;   Label: LAB_0041a9b0
    INC EBP                             ; 0041a9b7
    MOV EDX,dword ptr [EAX + 0x174]     ; 0041a9b8
    ADD EDI,0xc                         ; 0041a9be
    CMP EBP,EDX                         ; 0041a9c1
    JL 0x0041a8a3                       ; 0041a9c3
        ;   XREF to: 0041a8a3 (CONDITIONAL_JUMP)  ; LAB_0041a8a3
    MOV EDX,dword ptr [ESP + 0x64]      ; 0041a9c9
        ;   Label: LAB_0041a9c9
    MOV ECX,dword ptr [ESP + 0x58]      ; 0041a9cd
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0041a9d1
    SUB EDX,ECX                         ; 0041a9d5
    MOV ECX,dword ptr [ESP + 0x68]      ; 0041a9d7
    SUB ECX,EBX                         ; 0041a9db
    MOV EAX,EDX                         ; 0041a9dd
    CMP ECX,EDX                         ; 0041a9df
    JLE 0x0041a9e5                      ; 0041a9e1
        ;   XREF to: 0041a9e5 (CONDITIONAL_JUMP)  ; LAB_0041a9e5
    MOV EAX,ECX                         ; 0041a9e3
    CMP EAX,dword ptr [ESP + 0x78]      ; 0041a9e5
        ;   Label: LAB_0041a9e5
    JGE 0x0041aa29                      ; 0041a9e9
        ;   XREF to: 0041aa29 (CONDITIONAL_JUMP)  ; LAB_0041aa29
    LEA EDI,[ESP + 0x28]                ; 0041a9eb
    LEA ESI,[ESP + 0x58]                ; 0041a9ef
    MOVSD ES:EDI,ESI                    ; 0041a9f3
    MOVSD ES:EDI,ESI                    ; 0041a9f4
    MOVSD ES:EDI,ESI                    ; 0041a9f5
    LEA EDX,[ESP + 0x40]                ; 0041a9f6
    LEA EDI,[ESP + 0x34]                ; 0041a9fa
    LEA ESI,[ESP + 0x64]                ; 0041a9fe
    MOV dword ptr [ESP + 0x78],EAX      ; 0041aa02
    LEA EAX,[ESP + 0x4c]                ; 0041aa06
    MOVSD ES:EDI,ESI                    ; 0041aa0a
    MOVSD ES:EDI,ESI                    ; 0041aa0b
    MOVSD ES:EDI,ESI                    ; 0041aa0c
    CMP EDX,EAX                         ; 0041aa0d
    JZ 0x0041aa29                       ; 0041aa0f
        ;   XREF to: 0041aa29 (CONDITIONAL_JUMP)  ; LAB_0041aa29
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041aa11
    MOV dword ptr [ESP + 0x40],EAX      ; 0041aa15
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041aa19
    MOV dword ptr [ESP + 0x44],EAX      ; 0041aa1d
    MOV EAX,dword ptr [ESP + 0x54]      ; 0041aa21
    MOV dword ptr [ESP + 0x48],EAX      ; 0041aa25
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0041aa29
        ;   Label: LAB_0041aa29
    ADD EDI,0x2                         ; 0041aa2d
    MOV dword ptr [ESP + 0x7c],EDI      ; 0041aa30
    CMP EDI,0x18                        ; 0041aa34
    JNZ 0x0041a727                      ; 0041aa37
        ;   XREF to: 0041a727 (CONDITIONAL_JUMP)  ; LAB_0041a727
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041aa3d
    ADD EAX,0x2                         ; 0041aa41
    MOV dword ptr [ESP + 0x70],EAX      ; 0041aa44
    CMP EAX,EDI                         ; 0041aa48
    JNZ 0x0041a719                      ; 0041aa4a
        ;   XREF to: 0041a719 (CONDITIONAL_JUMP)  ; LAB_0041a719
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0041aa50
    LEA ESI,[ESP + 0x28]                ; 0041aa57
    MOVSD ES:EDI,ESI                    ; 0041aa5b
    MOVSD ES:EDI,ESI                    ; 0041aa5c
    MOVSD ES:EDI,ESI                    ; 0041aa5d
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0041aa5e
    LEA ESI,[ESP + 0x34]                ; 0041aa65
    LEA EAX,[ESP + 0x40]                ; 0041aa69
    MOVSD ES:EDI,ESI                    ; 0041aa6d
    MOVSD ES:EDI,ESI                    ; 0041aa6e
    MOVSD ES:EDI,ESI                    ; 0041aa6f
    PUSH EAX                            ; 0041aa70
    MOV ESI,dword ptr [ESP + 0xc0]      ; 0041aa71
    PUSH ESI                            ; 0041aa78
    CALL core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a200 ; 0041aa79
        ;   XREF to: 0041a200 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a200(CBodyPart * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0041aa7e
    ADD ESP,0xa8                        ; 0041aa81
    POP EBP                             ; 0041aa87
    POP EDI                             ; 0041aa88
    POP ESI                             ; 0041aa89
    POP EBX                             ; 0041aa8a
    RET                                 ; 0041aa8b
    MOV dword ptr [ESP + 0x58],EBX      ; 0041aa8c
        ;   Label: LAB_0041aa8c
    JMP 0x0041a97e                      ; 0041aa90
        ;   XREF to: 0041a97e (UNCONDITIONAL_JUMP)  ; LAB_0041a97e

