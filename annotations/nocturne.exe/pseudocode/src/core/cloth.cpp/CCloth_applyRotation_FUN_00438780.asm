; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_applyRotation_FUN_00438780(CCloth *this_ptr,CVector3f *euler)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   euler
;
; XREF[1]:
;   core_cloth.cpp_CClothList_applyRotation_FUN_00438620 at 00438642
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438780
        ;   Label: core_cloth.cpp_CCloth_applyRotation_FUN_00438780
    PUSH ESI                            ; 00438781
    PUSH EDI                            ; 00438782
    PUSH EBP                            ; 00438783
    SUB ESP,0x4c                        ; 00438784
    MOV EBX,dword ptr [ESP + 0x64]      ; 00438787
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043878b
    FLD float ptr [EBX]                 ; 0043878f
    FSUB float ptr [EAX + 0x3ab14]      ; 00438791
    FSTP float ptr [ESP + 0x28]         ; 00438797
    FLD float ptr [EBX + 0x4]           ; 0043879b
    FSUB float ptr [EAX + 0x3ab18]      ; 0043879e
    FSTP float ptr [ESP + 0x2c]         ; 004387a4
    FLD float ptr [EBX + 0x8]           ; 004387a8
    FSUB float ptr [EAX + 0x3ab1c]      ; 004387ab
    ADD EAX,0x3ab14                     ; 004387b1
    FSTP float ptr [ESP + 0x30]         ; 004387b6
    CMP EAX,EBX                         ; 004387ba
    JZ 0x004387ce                       ; 004387bc
        ;   XREF to: 004387ce (CONDITIONAL_JUMP)  ; LAB_004387ce
    MOV EDX,dword ptr [EBX]             ; 004387be
    MOV dword ptr [EAX],EDX             ; 004387c0
    MOV EDX,dword ptr [EBX + 0x4]       ; 004387c2
    MOV dword ptr [EAX + 0x4],EDX       ; 004387c5
    MOV EDX,dword ptr [EBX + 0x8]       ; 004387c8
    MOV dword ptr [EAX + 0x8],EDX       ; 004387cb
    LEA EAX,[ESP + 0x28]                ; 004387ce
        ;   Label: LAB_004387ce
    PUSH EAX                            ; 004387d2
    LEA EAX,[ESP + 0x4]                 ; 004387d3
    PUSH EAX                            ; 004387d7
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004387d8
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004387dd
    MOV EAX,dword ptr [ESP + 0x60]      ; 004387e0
    MOV EDX,dword ptr [EAX + 0x104]     ; 004387e4
    XOR EDI,EDI                         ; 004387ea
    TEST EDX,EDX                        ; 004387ec
    JLE 0x00438870                      ; 004387ee
        ;   XREF to: 00438870 (CONDITIONAL_JUMP)  ; LAB_00438870
    LEA EBP,[EAX + 0x398]               ; 004387f4
    LEA EBX,[EBP + 0x24]                ; 004387fa
    IMUL ESI,EDI,0x11c                  ; 004387fd
        ;   Label: LAB_004387fd
    ADD ESI,EBP                         ; 00438803
    PUSH ESI                            ; 00438805
    LEA EAX,[ESP + 0x38]                ; 00438806
    PUSH EAX                            ; 0043880a
    LEA EAX,[ESP + 0x8]                 ; 0043880b
    PUSH EAX                            ; 0043880f
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00438810
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00438815
    CMP ESI,EAX                         ; 00438818
    JZ 0x0043882c                       ; 0043881a
        ;   XREF to: 0043882c (CONDITIONAL_JUMP)  ; LAB_0043882c
    MOV EDX,dword ptr [EAX]             ; 0043881c
    MOV dword ptr [ESI],EDX             ; 0043881e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00438820
    MOV dword ptr [ESI + 0x4],EDX       ; 00438823
    MOV EDX,dword ptr [EAX + 0x8]       ; 00438826
    MOV dword ptr [ESI + 0x8],EDX       ; 00438829
    IMUL EAX,EDI,0x11c                  ; 0043882c
        ;   Label: LAB_0043882c
    ADD EAX,EBP                         ; 00438832
    PUSH EAX                            ; 00438834
    LEA EAX,[ESP + 0x44]                ; 00438835
    PUSH EAX                            ; 00438839
    LEA EAX,[ESP + 0x8]                 ; 0043883a
    PUSH EAX                            ; 0043883e
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0043883f
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00438844
    CMP EBX,EAX                         ; 00438847
    JZ 0x0043885b                       ; 00438849
        ;   XREF to: 0043885b (CONDITIONAL_JUMP)  ; LAB_0043885b
    MOV EDX,dword ptr [EAX]             ; 0043884b
    MOV dword ptr [EBX],EDX             ; 0043884d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043884f
    MOV dword ptr [EBX + 0x4],EDX       ; 00438852
    MOV EDX,dword ptr [EAX + 0x8]       ; 00438855
    MOV dword ptr [EBX + 0x8],EDX       ; 00438858
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043885b
        ;   Label: LAB_0043885b
    INC EDI                             ; 0043885f
    MOV ECX,dword ptr [EAX + 0x104]     ; 00438860
    ADD EBX,0x11c                       ; 00438866
    CMP EDI,ECX                         ; 0043886c
    JL 0x004387fd                       ; 0043886e
        ;   XREF to: 004387fd (CONDITIONAL_JUMP)  ; LAB_004387fd
    ADD ESP,0x4c                        ; 00438870
        ;   Label: LAB_00438870
    POP EBP                             ; 00438873
    POP EDI                             ; 00438874
    POP ESI                             ; 00438875
    POP EBX                             ; 00438876
    RET                                 ; 00438877

