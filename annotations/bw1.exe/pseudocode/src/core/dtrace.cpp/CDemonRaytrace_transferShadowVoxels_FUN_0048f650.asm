; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_0048f650(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *start,CVector3f *end)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   offset
; CVector3f *      Stack[0xc]:4   rotation
; CVector3f *      Stack[0x10]:4   start
; CVector3f *      Stack[0x14]:4   end
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
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
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_005594e0 at 0055954a
;
; Referenced Globals:
;   undefined4 DAT_005dbb3c
;   undefined4 DAT_005dbb44
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0048fa40
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f650
        ;   Label: core_dtrace.cpp_CDemonRaytrace_transferShadowVoxels_FUN_0048f650
    PUSH ESI                            ; 0048f651
    PUSH EDI                            ; 0048f652
    PUSH EBP                            ; 0048f653
    MOV EBP,ESP                         ; 0048f654
    SUB ESP,0xac                        ; 0048f656
    AND ESP,0xfffffff8                  ; 0048f65c
    MOV EBX,dword ptr [EBP + 0x24]      ; 0048f65f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0048f662
    PUSH EDX                            ; 0048f665
    LEA EAX,[ESP + 0x10]                ; 0048f666
    PUSH EAX                            ; 0048f66a
    LEA EDI,[ESP + 0x6c]                ; 0048f66b
    LEA ESI,[ESP + 0x48]                ; 0048f66f
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0048f673
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX]                 ; 0048f678
    ADD ESP,0x8                         ; 0048f67a
    FLD float ptr [EBX + 0x4]           ; 0048f67d
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048f680
    FLD float ptr [EBX + 0x8]           ; 0048f683
    FXCH ST2                            ; 0048f686
    FSUB float ptr [EAX]                ; 0048f688
    FXCH                                ; 0048f68a
    FSUB float ptr [EAX + 0x4]          ; 0048f68c
    FXCH ST2                            ; 0048f68f
    FSUB float ptr [EAX + 0x8]          ; 0048f691
    FXCH                                ; 0048f694
    FSTP float ptr [ESP + 0x40]         ; 0048f696
    FXCH                                ; 0048f69a
    FSTP float ptr [ESP + 0x44]         ; 0048f69c
    FSTP float ptr [ESP + 0x48]         ; 0048f6a0
    MOVSD ES:EDI,ESI                    ; 0048f6a4
    MOVSD ES:EDI,ESI                    ; 0048f6a5
    MOVSD ES:EDI,ESI                    ; 0048f6a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f6a7
    FLD float ptr [ESP + 0x64]          ; 0048f6aa
    FDIV float ptr [EAX + 0x34]         ; 0048f6ae
    FLD float ptr [ESP + 0x68]          ; 0048f6b1
    FDIV float ptr [EAX + 0x38]         ; 0048f6b5
    FLD float ptr [ESP + 0x6c]          ; 0048f6b8
    FDIV float ptr [EAX + 0x3c]         ; 0048f6bc
    FXCH ST2                            ; 0048f6bf
    FLD double ptr [0x005dbb3c]         ; 0048f6c1 | DAT_005dbb3c
    FXCH                                ; 0048f6c7
    FMUL ST1                            ; 0048f6c9
    FLD1                                ; 0048f6cb
    FADDP                               ; 0048f6cd
    CALL crt_math.c_round_FUN_005c03a0  ; 0048f6cf
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x94]        ; 0048f6d4
    MOV EAX,dword ptr [ESP + 0x94]      ; 0048f6db
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048f6e2
    FILD dword ptr [ESP + 0xa8]         ; 0048f6e9
    FDIVR float ptr [ESP + 0x64]        ; 0048f6f0
    FXCH ST2                            ; 0048f6f4
    FMUL ST1                            ; 0048f6f6
    FLD1                                ; 0048f6f8
    FADDP                               ; 0048f6fa
    CALL crt_math.c_round_FUN_005c03a0  ; 0048f6fc
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x98]        ; 0048f701
    MOV EAX,dword ptr [ESP + 0x98]      ; 0048f708
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048f70f
    FILD dword ptr [ESP + 0xa8]         ; 0048f716
    FDIVR float ptr [ESP + 0x68]        ; 0048f71d
    FXCH ST3                            ; 0048f721
    FMULP                               ; 0048f723
    FLD1                                ; 0048f725
    FADDP                               ; 0048f727
    CALL crt_math.c_round_FUN_005c03a0  ; 0048f729
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xa0]        ; 0048f72e
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0048f735
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048f73c
    FILD dword ptr [ESP + 0xa8]         ; 0048f743
    FDIVR float ptr [ESP + 0x6c]        ; 0048f74a
    XOR ECX,ECX                         ; 0048f74e
    MOV dword ptr [ESP + 0x9c],ECX      ; 0048f750
    MOV EBX,dword ptr [ESP + 0x94]      ; 0048f757
    FXCH                                ; 0048f75e
    FSTP float ptr [ESP]                ; 0048f760
    FXCH                                ; 0048f763
    FSTP float ptr [ESP + 0x4]          ; 0048f765
    FSTP float ptr [ESP + 0x8]          ; 0048f769
    TEST EBX,EBX                        ; 0048f76d
    JLE 0x0048f914                      ; 0048f76f
        ;   XREF to: 0048f914 (CONDITIONAL_JUMP)  ; LAB_0048f914
    XOR EAX,EAX                         ; 0048f775
        ;   Label: LAB_0048f775
    MOV EDX,dword ptr [ESP + 0x98]      ; 0048f777
    MOV dword ptr [ESP + 0xa4],EAX      ; 0048f77e
    TEST EDX,EDX                        ; 0048f785
    JLE 0x0048f8f6                      ; 0048f787
        ;   XREF to: 0048f8f6 (CONDITIONAL_JUMP)  ; LAB_0048f8f6
    MOV ESI,dword ptr [ESP + 0xa0]      ; 0048f78d
        ;   Label: LAB_0048f78d
    XOR EBX,EBX                         ; 0048f794
    TEST ESI,ESI                        ; 0048f796
    JLE 0x0048f8d8                      ; 0048f798
        ;   XREF to: 0048f8d8 (CONDITIONAL_JUMP)  ; LAB_0048f8d8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0048f79e
        ;   Label: LAB_0048f79e
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048f7a5
    FLD float ptr [ESP]                 ; 0048f7ac
    FILD dword ptr [ESP + 0xa8]         ; 0048f7af
    FMUL ST1                            ; 0048f7b6
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048f7b8
    FADD float ptr [EAX]                ; 0048f7bb
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0048f7bd
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048f7c4
    FXCH                                ; 0048f7cb
    FLD double ptr [0x005dbb44]         ; 0048f7cd | DAT_005dbb44
    FXCH                                ; 0048f7d3
    FMUL ST1                            ; 0048f7d5
    FLD float ptr [ESP + 0x4]           ; 0048f7d7
    FILD dword ptr [ESP + 0xa8]         ; 0048f7db
    FMUL ST1                            ; 0048f7e2
    FXCH ST2                            ; 0048f7e4
    FADDP ST4,ST0                       ; 0048f7e6
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048f7e8
    FXCH ST3                            ; 0048f7eb
    FSTP float ptr [ESP + 0x34]         ; 0048f7ed
    FADD float ptr [EAX + 0x4]          ; 0048f7f1
    MOV dword ptr [ESP + 0xa8],EBX      ; 0048f7f4
    FXCH ST2                            ; 0048f7fb
    FMUL ST1                            ; 0048f7fd
    FILD dword ptr [ESP + 0xa8]         ; 0048f7ff
    FXCH                                ; 0048f806
    FADDP ST3,ST0                       ; 0048f808
    FLD float ptr [ESP + 0x8]           ; 0048f80a
    FXCH                                ; 0048f80e
    FMUL ST1                            ; 0048f810
    FXCH ST3                            ; 0048f812
    FSTP float ptr [ESP + 0x38]         ; 0048f814
    FXCH ST2                            ; 0048f818
    FADD float ptr [EAX + 0x8]          ; 0048f81a
    FXCH ST2                            ; 0048f81d
    FMULP                               ; 0048f81f
    LEA ESI,[ESP + 0x58]                ; 0048f821
    LEA EAX,[ESP + 0x34]                ; 0048f825
    LEA EDI,[ESP + 0x7c]                ; 0048f829
    PUSH EAX                            ; 0048f82d
    LEA EAX,[ESP + 0x10]                ; 0048f82e
    FADDP                               ; 0048f832
    PUSH EAX                            ; 0048f834
    FSTP float ptr [ESP + 0x44]         ; 0048f835
    CALL core_dirmat.cpp_FUN_0045f690   ; 0048f839
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x60]                ; 0048f83e
    ADD ESP,0x8                         ; 0048f842
    MOVSD ES:EDI,ESI                    ; 0048f845
    MOVSD ES:EDI,ESI                    ; 0048f846
    MOVSD ES:EDI,ESI                    ; 0048f847
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f848
    FLD float ptr [ESP + 0x7c]          ; 0048f84b
    FLD float ptr [ESP + 0x80]          ; 0048f84f
    FLD float ptr [ESP + 0x84]          ; 0048f856
    LEA EDI,[ESP + 0x4c]                ; 0048f85d
    LEA ESI,[ESP + 0x70]                ; 0048f861
    FXCH ST2                            ; 0048f865
    FADD float ptr [EAX]                ; 0048f867
    FXCH                                ; 0048f869
    FADD float ptr [EAX + 0x4]          ; 0048f86b
    FXCH ST2                            ; 0048f86e
    FADD float ptr [EAX + 0x8]          ; 0048f870
    FXCH                                ; 0048f873
    FSTP float ptr [ESP + 0x70]         ; 0048f875
    FXCH                                ; 0048f879
    FSTP float ptr [ESP + 0x74]         ; 0048f87b
    FSTP float ptr [ESP + 0x78]         ; 0048f87f
    MOVSD ES:EDI,ESI                    ; 0048f883
    MOVSD ES:EDI,ESI                    ; 0048f884
    MOVSD ES:EDI,ESI                    ; 0048f885
    LEA EAX,[ESP + 0x4c]                ; 0048f886
    LEA ESI,[ESP + 0x88]                ; 0048f88a
    CMP ESI,EAX                         ; 0048f891
    JZ 0x0048f8b6                       ; 0048f893
        ;   XREF to: 0048f8b6 (CONDITIONAL_JUMP)  ; LAB_0048f8b6
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0048f895
    MOV dword ptr [ESP + 0x88],EAX      ; 0048f899
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048f8a0
    MOV dword ptr [ESP + 0x8c],EAX      ; 0048f8a4
    MOV EAX,dword ptr [ESP + 0x54]      ; 0048f8ab
    MOV dword ptr [ESP + 0x90],EAX      ; 0048f8af
    LEA EAX,[ESP + 0x88]                ; 0048f8b6
        ;   Label: LAB_0048f8b6
    PUSH EAX                            ; 0048f8bd
    MOV EDI,dword ptr [EBP + 0x14]      ; 0048f8be
    PUSH EDI                            ; 0048f8c1
    CALL core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0048fa40 ; 0048f8c2
        ;   XREF to: 0048fa40 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0048fa40(CDemonRaytrace * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0048f8c7
    INC EBX                             ; 0048f8ca
    CMP EBX,dword ptr [ESP + 0xa0]      ; 0048f8cb
    JL 0x0048f79e                       ; 0048f8d2
        ;   XREF to: 0048f79e (CONDITIONAL_JUMP)  ; LAB_0048f79e
    MOV ECX,dword ptr [ESP + 0xa4]      ; 0048f8d8
        ;   Label: LAB_0048f8d8
    INC ECX                             ; 0048f8df
    MOV EBX,dword ptr [ESP + 0x98]      ; 0048f8e0
    MOV dword ptr [ESP + 0xa4],ECX      ; 0048f8e7
    CMP ECX,EBX                         ; 0048f8ee
    JL 0x0048f78d                       ; 0048f8f0
        ;   XREF to: 0048f78d (CONDITIONAL_JUMP)  ; LAB_0048f78d
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0048f8f6
        ;   Label: LAB_0048f8f6
    INC ESI                             ; 0048f8fd
    MOV EDI,dword ptr [ESP + 0x94]      ; 0048f8fe
    MOV dword ptr [ESP + 0x9c],ESI      ; 0048f905
    CMP ESI,EDI                         ; 0048f90c
    JL 0x0048f775                       ; 0048f90e
        ;   XREF to: 0048f775 (CONDITIONAL_JUMP)  ; LAB_0048f775
    MOV ESP,EBP                         ; 0048f914
        ;   Label: LAB_0048f914
    POP EBP                             ; 0048f916
    POP EDI                             ; 0048f917
    POP ESI                             ; 0048f918
    POP EBX                             ; 0048f919
    RET                                 ; 0048f91a

