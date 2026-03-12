; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(CKeyFramedModel *this_ptr,CVector3f *transform_vector)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   transform_vector
; Local Variables:
; CVector3f        Stack[-0x78]:12  local_78
; CVector3f        Stack[-0x6c]:12  local_6c
; CVector3f        Stack[-0x60]:12  local_60
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; int              Stack[-0x30]:4  local_30
; CMatrix3x3f *    Stack[-0x2c]:4  local_2c
; CMatrix3x3f *    Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; CMatrix3x3f *    Stack[-0x1c]:4  local_1c
; CVector3i *      Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830 at 0047892b
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740 at 004787a3
;   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650 at 0047868e
;
; Referenced Globals:
;   float g_Fixed16ToFloat = 0.00390625
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478950
        ;   Label: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950
    PUSH ESI                            ; 00478951
    PUSH EDI                            ; 00478952
    PUSH EBP                            ; 00478953
    SUB ESP,0x68                        ; 00478954
    MOV EDX,dword ptr [ESP + 0x80]      ; 00478957
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047895e
    ADD EAX,0x56a4                      ; 00478962
    CMP EAX,EDX                         ; 00478967
    JZ 0x0047897b                       ; 00478969
        ;   XREF to: 0047897b (CONDITIONAL_JUMP)  ; LAB_0047897b
    MOV ECX,dword ptr [EDX]             ; 0047896b
    MOV dword ptr [EAX],ECX             ; 0047896d
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047896f
    MOV dword ptr [EAX + 0x4],ECX       ; 00478972
    MOV ECX,dword ptr [EDX + 0x8]       ; 00478975
    MOV dword ptr [EAX + 0x8],ECX       ; 00478978
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047897b
        ;   Label: LAB_0047897b
    ADD EAX,0x56a4                      ; 0047897f
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00478984
    PUSH EAX                            ; 00478988
    ADD EBX,0x56b0                      ; 00478989
    PUSH EBX                            ; 0047898f
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00478990
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00478995
    XOR EDX,EDX                         ; 00478998
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047899a
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0047899e
    MOV dword ptr [ESP + 0x48],EDX      ; 004789a2
    MOV ECX,dword ptr [EAX + 0x100]     ; 004789a6
    MOV EBP,dword ptr [EBP + 0x5698]    ; 004789ac
    TEST ECX,ECX                        ; 004789b2
    JLE 0x00478bf2                      ; 004789b4
        ;   XREF to: 00478bf2 (CONDITIONAL_JUMP)  ; LAB_00478bf2
    MOV dword ptr [ESP + 0x4c],EBX      ; 004789ba
    MOV dword ptr [ESP + 0x50],EBX      ; 004789be
    MOV dword ptr [ESP + 0x5c],EBX      ; 004789c2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004789c6
        ;   Label: LAB_004789c6
    MOV EDI,dword ptr [ESP + 0x48]      ; 004789ca
    MOV EAX,dword ptr [EAX + 0x104]     ; 004789ce
    IMUL EAX,EDI                        ; 004789d4
    IMUL EDX,EAX,0xc                    ; 004789d7
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004789da
    MOV EAX,dword ptr [EAX + 0x10c]     ; 004789de
    ADD EAX,EDX                         ; 004789e4
    MOV dword ptr [ESP + 0x60],EAX      ; 004789e6
    XOR EAX,EAX                         ; 004789ea
    MOV dword ptr [ESP + 0x58],EAX      ; 004789ec
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004789f0
    CMP dword ptr [EAX + 0x110],0x0     ; 004789f4
    JLE 0x00478bd7                      ; 004789fb
        ;   XREF to: 00478bd7 (CONDITIONAL_JUMP)  ; LAB_00478bd7
    XOR EDI,EDI                         ; 00478a01
    MOV dword ptr [ESP + 0x54],EDI      ; 00478a03
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00478a07
        ;   Label: LAB_00478a07
    MOV EDX,dword ptr [ESP + 0x54]      ; 00478a0b
    MOV EAX,dword ptr [EAX + 0x114]     ; 00478a0f
    ADD EDX,EAX                         ; 00478a15
    MOV dword ptr [ESP + 0x64],EDX      ; 00478a17
    IMUL EAX,dword ptr [EDX + 0x18],0xc ; 00478a1b
    MOV ECX,dword ptr [ESP + 0x60]      ; 00478a1f
    LEA EBX,[ESP + 0x30]                ; 00478a23
    ADD EAX,ECX                         ; 00478a27
    FILD dword ptr [EAX]                ; 00478a29
    FMUL float ptr [0x0065c974]         ; 00478a2b | g_Fixed16ToFloat
    FSTP float ptr [EBX]                ; 00478a31
    FILD dword ptr [EAX + 0x4]          ; 00478a33
    FMUL float ptr [0x0065c974]         ; 00478a36 | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x4]          ; 00478a3c
    FILD dword ptr [EAX + 0x8]          ; 00478a3f
    FMUL float ptr [0x0065c974]         ; 00478a42 | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x8]          ; 00478a48
    MOV EAX,dword ptr [ESP + 0x64]      ; 00478a4b
    IMUL EAX,dword ptr [EAX + 0x24],0xc ; 00478a4f
    LEA EBX,[ESP + 0x24]                ; 00478a53
    ADD EAX,ECX                         ; 00478a57
    FILD dword ptr [EAX]                ; 00478a59
    FMUL float ptr [0x0065c974]         ; 00478a5b | g_Fixed16ToFloat
    FSTP float ptr [EBX]                ; 00478a61
    FILD dword ptr [EAX + 0x4]          ; 00478a63
    FMUL float ptr [0x0065c974]         ; 00478a66 | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x4]          ; 00478a6c
    FILD dword ptr [EAX + 0x8]          ; 00478a6f
    FMUL float ptr [0x0065c974]         ; 00478a72 | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x8]          ; 00478a78
    LEA EAX,[ESP + 0x30]                ; 00478a7b
    PUSH EAX                            ; 00478a7f
    LEA EAX,[ESP + 0x40]                ; 00478a80
    PUSH EAX                            ; 00478a84
    MOV EDI,dword ptr [ESP + 0x58]      ; 00478a85
    PUSH EDI                            ; 00478a89
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00478a8a
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 00478a8f
    LEA EAX,[ESP + 0x3c]                ; 00478a91
    ADD ESP,0xc                         ; 00478a95
    CMP EAX,EDX                         ; 00478a98
    JZ 0x00478ab0                       ; 00478a9a
        ;   XREF to: 00478ab0 (CONDITIONAL_JUMP)  ; LAB_00478ab0
    MOV EAX,dword ptr [EDX]             ; 00478a9c
    MOV dword ptr [ESP + 0x30],EAX      ; 00478a9e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00478aa2
    MOV dword ptr [ESP + 0x34],EAX      ; 00478aa5
    MOV EAX,dword ptr [EDX + 0x8]       ; 00478aa9
    MOV dword ptr [ESP + 0x38],EAX      ; 00478aac
    LEA EAX,[ESP + 0x24]                ; 00478ab0
        ;   Label: LAB_00478ab0
    PUSH EAX                            ; 00478ab4
    LEA EAX,[ESP + 0x4]                 ; 00478ab5
    PUSH EAX                            ; 00478ab9
    MOV EAX,dword ptr [ESP + 0x54]      ; 00478aba
    PUSH EAX                            ; 00478abe
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00478abf
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 00478ac4
    LEA EAX,[ESP + 0x30]                ; 00478ac6
    ADD ESP,0xc                         ; 00478aca
    CMP EAX,EDX                         ; 00478acd
    JZ 0x00478ae5                       ; 00478acf
        ;   XREF to: 00478ae5 (CONDITIONAL_JUMP)  ; LAB_00478ae5
    MOV EAX,dword ptr [EDX]             ; 00478ad1
    MOV dword ptr [ESP + 0x24],EAX      ; 00478ad3
    MOV EAX,dword ptr [EDX + 0x4]       ; 00478ad7
    MOV dword ptr [ESP + 0x28],EAX      ; 00478ada
    MOV EAX,dword ptr [EDX + 0x8]       ; 00478ade
    MOV dword ptr [ESP + 0x2c],EAX      ; 00478ae1
    MOV EAX,dword ptr [ESP + 0x64]      ; 00478ae5
        ;   Label: LAB_00478ae5
    MOV EDI,0x2                         ; 00478ae9
    CMP EDI,dword ptr [EAX + 0x4]       ; 00478aee
    JGE 0x00478bb1                      ; 00478af1
        ;   XREF to: 00478bb1 (CONDITIONAL_JUMP)  ; LAB_00478bb1
    LEA ESI,[EAX + 0x18]                ; 00478af7
    IMUL EAX,dword ptr [ESI + 0x18],0xc ; 00478afa
        ;   Label: LAB_00478afa
    MOV EDX,dword ptr [ESP + 0x60]      ; 00478afe
    LEA EBX,[ESP + 0x18]                ; 00478b02
    ADD EAX,EDX                         ; 00478b06
    FILD dword ptr [EAX]                ; 00478b08
    FMUL float ptr [0x0065c974]         ; 00478b0a | g_Fixed16ToFloat
    FSTP float ptr [EBX]                ; 00478b10
    FILD dword ptr [EAX + 0x4]          ; 00478b12
    FMUL float ptr [0x0065c974]         ; 00478b15 | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x4]          ; 00478b1b
    FILD dword ptr [EAX + 0x8]          ; 00478b1e
    FMUL float ptr [0x0065c974]         ; 00478b21 | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x8]          ; 00478b27
    LEA EAX,[ESP + 0x18]                ; 00478b2a
    PUSH EAX                            ; 00478b2e
    LEA EAX,[ESP + 0x10]                ; 00478b2f
    PUSH EAX                            ; 00478b33
    MOV ECX,dword ptr [ESP + 0x64]      ; 00478b34
    PUSH ECX                            ; 00478b38
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00478b39
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 00478b3e
    LEA EAX,[ESP + 0x24]                ; 00478b40
    ADD ESP,0xc                         ; 00478b44
    CMP EAX,EDX                         ; 00478b47
    JZ 0x00478b5f                       ; 00478b49
        ;   XREF to: 00478b5f (CONDITIONAL_JUMP)  ; LAB_00478b5f
    MOV EAX,dword ptr [EDX]             ; 00478b4b
    MOV dword ptr [ESP + 0x18],EAX      ; 00478b4d
    MOV EAX,dword ptr [EDX + 0x4]       ; 00478b51
    MOV dword ptr [ESP + 0x1c],EAX      ; 00478b54
    MOV EAX,dword ptr [EDX + 0x8]       ; 00478b58
    MOV dword ptr [ESP + 0x20],EAX      ; 00478b5b
    LEA EAX,[ESP + 0x18]                ; 00478b5f
        ;   Label: LAB_00478b5f
    PUSH EAX                            ; 00478b63
    LEA EAX,[ESP + 0x28]                ; 00478b64
    PUSH EAX                            ; 00478b68
    LEA EAX,[ESP + 0x38]                ; 00478b69
    PUSH EAX                            ; 00478b6d
    PUSH EBP                            ; 00478b6e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00478b6f
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    LEA EAX,[ESP + 0x28]                ; 00478b74
    LEA EDX,[ESP + 0x34]                ; 00478b78
    ADD ESP,0x10                        ; 00478b7c
    ADD EBP,0x38                        ; 00478b7f
    CMP EDX,EAX                         ; 00478b82
    JZ 0x00478b9e                       ; 00478b84
        ;   XREF to: 00478b9e (CONDITIONAL_JUMP)  ; LAB_00478b9e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00478b86
    MOV dword ptr [ESP + 0x24],EAX      ; 00478b8a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00478b8e
    MOV dword ptr [ESP + 0x28],EAX      ; 00478b92
    MOV EAX,dword ptr [ESP + 0x20]      ; 00478b96
    MOV dword ptr [ESP + 0x2c],EAX      ; 00478b9a
    MOV EAX,dword ptr [ESP + 0x64]      ; 00478b9e
        ;   Label: LAB_00478b9e
    INC EDI                             ; 00478ba2
    MOV ECX,dword ptr [EAX + 0x4]       ; 00478ba3
    ADD ESI,0xc                         ; 00478ba6
    CMP EDI,ECX                         ; 00478ba9
    JL 0x00478afa                       ; 00478bab
        ;   XREF to: 00478afa (CONDITIONAL_JUMP)  ; LAB_00478afa
    MOV ECX,dword ptr [ESP + 0x54]      ; 00478bb1
        ;   Label: LAB_00478bb1
    MOV EBX,dword ptr [ESP + 0x58]      ; 00478bb5
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00478bb9
    ADD ECX,0x48                        ; 00478bbd
    INC EBX                             ; 00478bc0
    MOV ESI,dword ptr [EDX + 0x110]     ; 00478bc1
    MOV dword ptr [ESP + 0x54],ECX      ; 00478bc7
    MOV dword ptr [ESP + 0x58],EBX      ; 00478bcb
    CMP EBX,ESI                         ; 00478bcf
    JL 0x00478a07                       ; 00478bd1
        ;   XREF to: 00478a07 (CONDITIONAL_JUMP)  ; LAB_00478a07
    MOV EBX,dword ptr [ESP + 0x48]      ; 00478bd7
        ;   Label: LAB_00478bd7
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00478bdb
    INC EBX                             ; 00478bdf
    MOV ESI,dword ptr [EDX + 0x100]     ; 00478be0
    MOV dword ptr [ESP + 0x48],EBX      ; 00478be6
    CMP EBX,ESI                         ; 00478bea
    JL 0x004789c6                       ; 00478bec
        ;   XREF to: 004789c6 (CONDITIONAL_JUMP)  ; LAB_004789c6
    ADD ESP,0x68                        ; 00478bf2
        ;   Label: LAB_00478bf2
    POP EBP                             ; 00478bf5
    POP EDI                             ; 00478bf6
    POP ESI                             ; 00478bf7
    POP EBX                             ; 00478bf8
    RET                                 ; 00478bf9

