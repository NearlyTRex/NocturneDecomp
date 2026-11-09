; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_004657c0(CDemonLight *this_ptr,CRect *rect)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CRect *          Stack[0x8]:4   rect
;
; XREF[1]:
;   core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_004205e0 at 0042075d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004657c0
        ;   Label: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_004657c0
    PUSH ESI                            ; 004657c1
    PUSH EDI                            ; 004657c2
    PUSH EBP                            ; 004657c3
    MOV EDX,dword ptr [ESP + 0x18]      ; 004657c4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004657c8
    MOV EDX,dword ptr [EDX]             ; 004657cc
    MOV EAX,dword ptr [EAX]             ; 004657ce
    SAR EDX,0x1f                        ; 004657d0
    SHL EDX,0x3                         ; 004657d3
    SBB EAX,EDX                         ; 004657d6
    SAR EAX,0x3                         ; 004657d8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004657db
    MOV ESI,EAX                         ; 004657df
    MOV EDX,dword ptr [EDX + 0x4]       ; 004657e1
    MOV EAX,dword ptr [ESP + 0x18]      ; 004657e4
    SAR EDX,0x1f                        ; 004657e8
    MOV EAX,dword ptr [EAX + 0x4]       ; 004657eb
    SHL EDX,0x3                         ; 004657ee
    SBB EAX,EDX                         ; 004657f1
    SAR EAX,0x3                         ; 004657f3
    MOV EDX,dword ptr [ESP + 0x18]      ; 004657f6
    MOV ECX,EAX                         ; 004657fa
    MOV EAX,dword ptr [ESP + 0x14]      ; 004657fc
    MOV EDX,dword ptr [EDX + 0x8]       ; 00465800
    MOV EBX,dword ptr [EAX + 0x1cc0]    ; 00465803
    IMUL EDX,EBX                        ; 00465809
    MOV EAX,EDX                         ; 0046580c
    SAR EDX,0x1f                        ; 0046580e
    SHL EDX,0x3                         ; 00465811
    SBB EAX,EDX                         ; 00465814
    SAR EAX,0x3                         ; 00465816
    MOV EBP,dword ptr [ESP + 0x14]      ; 00465819
    MOV EBP,dword ptr [EBP + 0x2fa0]    ; 0046581d
    MOV EDI,dword ptr [ESP + 0x18]      ; 00465823
    ADD EBP,EAX                         ; 00465827
    MOV EAX,dword ptr [ESP + 0x18]      ; 00465829
    MOV EDI,dword ptr [EDI + 0x8]       ; 0046582d
    CMP EDI,dword ptr [EAX + 0xc]       ; 00465830
    JG 0x00465874                       ; 00465833
        ;   XREF to: 00465874 (CONDITIONAL_JUMP)  ; LAB_00465874
    MOV EDX,ESI                         ; 00465835
        ;   Label: LAB_00465835
    CMP ESI,ECX                         ; 00465837
    JG 0x00465849                       ; 00465839
        ;   XREF to: 00465849 (CONDITIONAL_JUMP)  ; LAB_00465849
    LEA EAX,[ESI + EBP*0x1]             ; 0046583b
    CMP byte ptr [EAX],0x0              ; 0046583e
        ;   Label: LAB_0046583e
    JNZ 0x0046587b                      ; 00465841
        ;   XREF to: 0046587b (CONDITIONAL_JUMP)  ; LAB_0046587b
    INC EDX                             ; 00465843
    INC EAX                             ; 00465844
    CMP EDX,ECX                         ; 00465845
    JLE 0x0046583e                      ; 00465847
        ;   XREF to: 0046583e (CONDITIONAL_JUMP)  ; LAB_0046583e
    MOV EDX,dword ptr [ESP + 0x14]      ; 00465849
        ;   Label: LAB_00465849
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046584d
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 00465851
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 00465857
    SAR EDX,0x1f                        ; 0046585d
    SHL EDX,0x3                         ; 00465860
    SBB EAX,EDX                         ; 00465863
    SAR EAX,0x3                         ; 00465865
    ADD EBP,EAX                         ; 00465868
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046586a
    INC EDI                             ; 0046586e
    CMP EDI,dword ptr [EAX + 0xc]       ; 0046586f
    JLE 0x00465835                      ; 00465872
        ;   XREF to: 00465835 (CONDITIONAL_JUMP)  ; LAB_00465835
    XOR EAX,EAX                         ; 00465874
        ;   Label: LAB_00465874
    POP EBP                             ; 00465876
    POP EDI                             ; 00465877
    POP ESI                             ; 00465878
    POP EBX                             ; 00465879
    RET                                 ; 0046587a
    MOV EAX,0x1                         ; 0046587b
        ;   Label: LAB_0046587b
    POP EBP                             ; 00465880
    POP EDI                             ; 00465881
    POP ESI                             ; 00465882
    POP EBX                             ; 00465883
    RET                                 ; 00465884

