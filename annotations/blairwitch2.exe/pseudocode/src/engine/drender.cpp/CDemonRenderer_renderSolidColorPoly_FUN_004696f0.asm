; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
;
; XREF[5]:
;   core_dtrace.cpp_FUN_00474020 at 00474434
;   core_dtri.cpp_FUN_00479e0c at 00479f4d
;   core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00534130 at 00534196
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_00541a60 at 005421f1
;   core_water.cpp_CWater_render_FUN_005862e0 at 005868f2
;
; Referenced Globals:
;   undefined4 DAT_01ba5c84
;   undefined4 DAT_01ba5c88
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004696f0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0
    PUSH EDI                            ; 004696f1
    PUSH EBP                            ; 004696f2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004696f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004696f7
    CMP dword ptr [EDI + 0xc],0x0       ; 004696fb
    JNZ 0x00469766                      ; 004696ff
        ;   XREF to: 00469766 (CONDITIONAL_JUMP)  ; LAB_00469766
    PUSH EBX                            ; 00469701
        ;   Label: LAB_00469701
    MOV ECX,dword ptr [ESI + 0x4]       ; 00469702
    XOR EDX,EDX                         ; 00469705
    TEST ECX,ECX                        ; 00469707
    JLE 0x00469730                      ; 00469709
        ;   XREF to: 00469730 (CONDITIONAL_JUMP)  ; LAB_00469730
    MOV EAX,ESI                         ; 0046970b
    XOR ECX,ECX                         ; 0046970d
    ADD ECX,0x4                         ; 0046970f
        ;   Label: LAB_0046970f
    MOV EBX,dword ptr [EAX + 0x18]      ; 00469712
    MOV dword ptr [ECX + 0x1ba5c80],EBX ; 00469715 | DAT_01ba5c84 | DAT_01ba5c88
    INC EDX                             ; 0046971b
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046971c
    ADD EAX,0xc                         ; 0046971f
    CMP EDX,EBX                         ; 00469722
    JL 0x0046970f                       ; 00469724
        ;   XREF to: 0046970f (CONDITIONAL_JUMP)  ; LAB_0046970f
    LEA EAX,[EAX]                       ; 00469726
    LEA EDX,[EDX]                       ; 0046972c
    CMP dword ptr [EDI + 0x4],0x0       ; 00469730
        ;   Label: LAB_00469730
    JZ 0x00469778                       ; 00469734
        ;   XREF to: 00469778 (CONDITIONAL_JUMP)  ; LAB_00469778
    XOR EBP,EBP                         ; 00469736
    MOV EBX,0x46e936                    ; 00469738
    MOV dword ptr [0x01c38b54],EBP      ; 0046973d | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00469743 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EBX      ; 00469749 | DAT_01c35e6c
    PUSH 0x1ba5c84                      ; 0046974f | DAT_01ba5c84
        ;   Label: LAB_0046974f
    MOV EDX,dword ptr [ESI + 0x4]       ; 00469754
    PUSH EDX                            ; 00469757
    PUSH EDI                            ; 00469758
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 00469759
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046975e
    POP EBX                             ; 00469761
    POP EBP                             ; 00469762
        ;   Label: LAB_00469762
    POP EDI                             ; 00469763
    POP ESI                             ; 00469764
    RET                                 ; 00469765
    LEA EAX,[ESI + 0x8]                 ; 00469766
        ;   Label: LAB_00469766
    PUSH EAX                            ; 00469769
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046976a
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046976f
    TEST EAX,EAX                        ; 00469772
    JZ 0x00469762                       ; 00469774
        ;   XREF to: 00469762 (CONDITIONAL_JUMP)  ; LAB_00469762
    JMP 0x00469701                      ; 00469776
        ;   XREF to: 00469701 (UNCONDITIONAL_JUMP)  ; LAB_00469701
    MOV EDX,0xc0                        ; 00469778
        ;   Label: LAB_00469778
    MOV ECX,0x6                         ; 0046977d
    MOV EAX,0x46ec58                    ; 00469782
    MOV dword ptr [0x01c38b54],EDX      ; 00469787 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ECX      ; 0046978d | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 00469793 | DAT_01c35e6c
    JMP 0x0046974f                      ; 00469798
        ;   XREF to: 0046974f (UNCONDITIONAL_JUMP)  ; LAB_0046974f

