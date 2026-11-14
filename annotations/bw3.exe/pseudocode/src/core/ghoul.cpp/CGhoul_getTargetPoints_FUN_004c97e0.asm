; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ghoul_cpp_CGhoul_getTargetPoints_FUN_004c97e0(CGhoul *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined1* switchdataD_004c97c4 = 004c986b
;   undefined4 DAT_005c4415
;   undefined4 DAT_005c441d
;   undefined4 DAT_005c4425
;   undefined4 DAT_01d22da0
;   undefined4 DAT_01d22db4
;   undefined4 DAT_01d22db8
;   undefined4 DAT_01d22dc4
;   undefined4 DAT_01d22dc8
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c97e0
        ;   Label: core_ghoul.cpp_CGhoul_getTargetPoints_FUN_004c97e0
    PUSH ESI                            ; 004c97e1
    PUSH EDI                            ; 004c97e2
    PUSH EBP                            ; 004c97e3
    MOV EBP,ESP                         ; 004c97e4
    SUB ESP,0x8c                        ; 004c97e6
    AND ESP,0xfffffff8                  ; 004c97ec
    MOV EDX,dword ptr [0x01d22dc4]      ; 004c97ef | DAT_01d22dc4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c97f5
    PUSH EDX                            ; 004c97f8
    ADD EAX,0x158                       ; 004c97f9
    PUSH EAX                            ; 004c97fe
    LEA ESI,[ESP + 0x20]                ; 004c97ff
    LEA EDI,[ESP + 0x2c]                ; 004c9803
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0 ; 004c9807
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x20]                ; 004c980c
    ADD ESP,0x8                         ; 004c9810
    LEA EAX,[ESP + 0x24]                ; 004c9813
    MOV ECX,dword ptr [EBP + 0x18]      ; 004c9817
    MOVSD ES:EDI,ESI                    ; 004c981a
    MOVSD ES:EDI,ESI                    ; 004c981b
    MOVSD ES:EDI,ESI                    ; 004c981c
    CMP EAX,ECX                         ; 004c981d
    JNZ 0x004c994f                      ; 004c981f
        ;   XREF to: 004c994f (CONDITIONAL_JUMP)  ; LAB_004c994f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9825
        ;   Label: LAB_004c9825
    MOV EBX,0x1                         ; 004c9828
    XOR ESI,ESI                         ; 004c982d
    ADD EAX,0x158                       ; 004c982f
    MOV dword ptr [ESP + 0x84],ESI      ; 004c9834
    MOV dword ptr [ESP + 0x88],EAX      ; 004c983b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9842
        ;   Label: LAB_004c9842
    MOV EDX,dword ptr [ESP + 0x84]      ; 004c9845
    ADD EDX,dword ptr [EAX + 0x6c]      ; 004c984c
    MOV ESI,0x4                         ; 004c984f
    MOV EAX,EDX                         ; 004c9854
    SAR EDX,0x1f                        ; 004c9856
    IDIV ESI                            ; 004c9859
    CMP EDX,0x3                         ; 004c985b
    JA 0x004c992e                       ; 004c985e
        ;   XREF to: 004c992e (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4c97c4]  ; 004c9864 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c986b
        ;   Label: caseD_0
    MOV EAX,dword ptr [EAX + 0xd078]    ; 004c986e
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c9874
    SHL EAX,0x2                         ; 004c9877
    ADD EAX,EDX                         ; 004c987a
    CMP dword ptr [EAX + 0x2298],0x0    ; 004c987c
    JZ 0x004c992e                       ; 004c9883
        ;   XREF to: 004c992e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01d22db4]      ; 004c9889 | DAT_01d22db4
    PUSH ESI                            ; 004c988f
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004c9890
    PUSH EDI                            ; 004c9897
    LEA ESI,[ESP + 0x44]                ; 004c9898
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0 ; 004c989c
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EDI,[ESP + 0x68]                ; 004c98a1
    LEA ESI,[ESP + 0x44]                ; 004c98a5
    LEA EDX,[ESP + 0x68]                ; 004c98a9
    ADD ESP,0x8                         ; 004c98ad
    LEA EAX,[ESP + 0x30]                ; 004c98b0
    MOVSD ES:EDI,ESI                    ; 004c98b4
    MOVSD ES:EDI,ESI                    ; 004c98b5
    MOVSD ES:EDI,ESI                    ; 004c98b6
    CMP EAX,EDX                         ; 004c98b7
    JZ 0x004c98d3                       ; 004c98b9
        ;   XREF to: 004c98d3 (CONDITIONAL_JUMP)  ; LAB_004c98d3
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c98bb
    MOV dword ptr [ESP + 0x30],EAX      ; 004c98bf
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c98c3
    MOV dword ptr [ESP + 0x34],EAX      ; 004c98c7
    MOV EAX,dword ptr [ESP + 0x68]      ; 004c98cb
    MOV dword ptr [ESP + 0x38],EAX      ; 004c98cf
        ;   Label: LAB_004c98cf
    IMUL EDX,EBX,0xc                    ; 004c98d3
        ;   Label: LAB_004c98d3
    FLD double ptr [0x005c4415]         ; 004c98d6 | DAT_005c4415
    FLD float ptr [ESP + 0x30]          ; 004c98dc
    FMUL ST1                            ; 004c98e0
    FLD float ptr [ESP + 0x34]          ; 004c98e2
    FMUL double ptr [0x005c441d]        ; 004c98e6 | DAT_005c441d
    FLD float ptr [ESP + 0x24]          ; 004c98ec
    FMULP ST3                           ; 004c98f0
    FLD float ptr [ESP + 0x28]          ; 004c98f2
    FMUL double ptr [0x005c4425]        ; 004c98f6 | DAT_005c4425
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c98fc
    FADDP                               ; 004c98ff
    FXCH ST2                            ; 004c9901
    FADDP                               ; 004c9903
    FXCH                                ; 004c9905
    FSTP float ptr [ESP + 0x34]         ; 004c9907
    ADD EDX,EAX                         ; 004c990b
    LEA EAX,[ESP + 0x30]                ; 004c990d
    FSTP float ptr [ESP + 0x30]         ; 004c9911
    CMP EDX,EAX                         ; 004c9915
    JZ 0x004c992d                       ; 004c9917
        ;   XREF to: 004c992d (CONDITIONAL_JUMP)  ; LAB_004c992d
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c9919
    MOV dword ptr [EDX],EAX             ; 004c991d
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c991f
    MOV dword ptr [EDX + 0x4],EAX       ; 004c9923
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c9926
    MOV dword ptr [EDX + 0x8],EAX       ; 004c992a
        ;   Label: LAB_004c992a
    INC EBX                             ; 004c992d
        ;   Label: LAB_004c992d
    MOV EDX,dword ptr [ESP + 0x84]      ; 004c992e
        ;   Label: default
    INC EDX                             ; 004c9935
    MOV dword ptr [ESP + 0x84],EDX      ; 004c9936
    CMP EDX,0x4                         ; 004c993d
    JL 0x004c9842                       ; 004c9940
        ;   XREF to: 004c9842 (CONDITIONAL_JUMP)  ; LAB_004c9842
    MOV EAX,EBX                         ; 004c9946
    MOV ESP,EBP                         ; 004c9948
    POP EBP                             ; 004c994a
    POP EDI                             ; 004c994b
    POP ESI                             ; 004c994c
    POP EBX                             ; 004c994d
    RET                                 ; 004c994e
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c994f
        ;   Label: LAB_004c994f
    MOV dword ptr [ECX],EAX             ; 004c9953
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c9955
    MOV dword ptr [ECX + 0x4],EAX       ; 004c9959
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c995c
    MOV dword ptr [ECX + 0x8],EAX       ; 004c9960
    JMP 0x004c9825                      ; 004c9963
        ;   XREF to: 004c9825 (UNCONDITIONAL_JUMP)  ; LAB_004c9825
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9968
        ;   Label: caseD_1
    MOV EAX,dword ptr [EAX + 0xd080]    ; 004c996b
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c9971
    SHL EAX,0x2                         ; 004c9974
    ADD EAX,EDX                         ; 004c9977
    CMP dword ptr [EAX + 0x2298],0x0    ; 004c9979
    JZ 0x004c992e                       ; 004c9980
        ;   XREF to: 004c992e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01d22db8]      ; 004c9982 | DAT_01d22db8
    PUSH ESI                            ; 004c9988
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004c9989
    PUSH EDI                            ; 004c9990
    LEA ESI,[ESP + 0x74]                ; 004c9991
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0 ; 004c9995
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EDI,[ESP + 0x14]                ; 004c999a
    LEA ESI,[ESP + 0x74]                ; 004c999e
    LEA EDX,[ESP + 0x14]                ; 004c99a2
    ADD ESP,0x8                         ; 004c99a6
    LEA EAX,[ESP + 0x30]                ; 004c99a9
    MOVSD ES:EDI,ESI                    ; 004c99ad
    MOVSD ES:EDI,ESI                    ; 004c99ae
    MOVSD ES:EDI,ESI                    ; 004c99af
    CMP EAX,EDX                         ; 004c99b0
    JZ 0x004c98d3                       ; 004c99b2
        ;   XREF to: 004c98d3 (CONDITIONAL_JUMP)  ; LAB_004c98d3
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c99b8
    MOV dword ptr [ESP + 0x30],EAX      ; 004c99bc
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c99c0
    MOV dword ptr [ESP + 0x34],EAX      ; 004c99c4
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c99c8
    JMP 0x004c98cf                      ; 004c99cc
        ;   XREF to: 004c98cf (UNCONDITIONAL_JUMP)  ; LAB_004c98cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c99d1
        ;   Label: caseD_2
    MOV EAX,dword ptr [EAX + 0xd0a0]    ; 004c99d4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c99da
    SHL EAX,0x2                         ; 004c99dd
    ADD EAX,EDX                         ; 004c99e0
    CMP dword ptr [EAX + 0x2298],0x0    ; 004c99e2
    JZ 0x004c992e                       ; 004c99e9
        ;   XREF to: 004c992e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01d22da0]      ; 004c99ef | DAT_01d22da0
    PUSH ESI                            ; 004c99f5
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004c99f6
    PUSH EDI                            ; 004c99fd
    LEA ESI,[ESP + 0x8]                 ; 004c99fe
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0 ; 004c9a02
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    IMUL EDX,EBX,0xc                    ; 004c9a07
    ADD ESP,0x8                         ; 004c9a0a
    LEA EDI,[ESP + 0x78]                ; 004c9a0d
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c9a11
    MOV ESI,ESP                         ; 004c9a14
    ADD EDX,EAX                         ; 004c9a16
    LEA EAX,[ESP + 0x78]                ; 004c9a18
    MOVSD ES:EDI,ESI                    ; 004c9a1c
    MOVSD ES:EDI,ESI                    ; 004c9a1d
    MOVSD ES:EDI,ESI                    ; 004c9a1e
    CMP EDX,EAX                         ; 004c9a1f
    JZ 0x004c992d                       ; 004c9a21
        ;   XREF to: 004c992d (CONDITIONAL_JUMP)  ; LAB_004c992d
    MOV EAX,dword ptr [ESP + 0x78]      ; 004c9a27
    MOV dword ptr [EDX],EAX             ; 004c9a2b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004c9a2d
    MOV dword ptr [EDX + 0x4],EAX       ; 004c9a31
    MOV EAX,dword ptr [ESP + 0x80]      ; 004c9a34
    JMP 0x004c992a                      ; 004c9a3b
        ;   XREF to: 004c992a (UNCONDITIONAL_JUMP)  ; LAB_004c992a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9a40
        ;   Label: caseD_3
    MOV EAX,dword ptr [EAX + 0xd09c]    ; 004c9a43
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c9a49
    SHL EAX,0x2                         ; 004c9a4c
    ADD EAX,EDX                         ; 004c9a4f
    CMP dword ptr [EAX + 0x2298],0x0    ; 004c9a51
    JZ 0x004c992e                       ; 004c9a58
        ;   XREF to: 004c992e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01d22dc8]      ; 004c9a5e | DAT_01d22dc8
    PUSH ESI                            ; 004c9a64
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004c9a65
    PUSH EDI                            ; 004c9a6c
    LEA ESI,[ESP + 0x50]                ; 004c9a6d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0 ; 004c9a71
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    IMUL EDX,EBX,0xc                    ; 004c9a76
    ADD ESP,0x8                         ; 004c9a79
    LEA EDI,[ESP + 0x54]                ; 004c9a7c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c9a80
    LEA ESI,[ESP + 0x48]                ; 004c9a83
    ADD EDX,EAX                         ; 004c9a87
    LEA EAX,[ESP + 0x54]                ; 004c9a89
    MOVSD ES:EDI,ESI                    ; 004c9a8d
    MOVSD ES:EDI,ESI                    ; 004c9a8e
    MOVSD ES:EDI,ESI                    ; 004c9a8f
    CMP EDX,EAX                         ; 004c9a90
    JZ 0x004c992d                       ; 004c9a92
        ;   XREF to: 004c992d (CONDITIONAL_JUMP)  ; LAB_004c992d
    MOV EAX,dword ptr [ESP + 0x54]      ; 004c9a98
    MOV dword ptr [EDX],EAX             ; 004c9a9c
    MOV EAX,dword ptr [ESP + 0x58]      ; 004c9a9e
    MOV dword ptr [EDX + 0x4],EAX       ; 004c9aa2
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004c9aa5
    JMP 0x004c992a                      ; 004c9aa9
        ;   XREF to: 004c992a (UNCONDITIONAL_JUMP)  ; LAB_004c992a

