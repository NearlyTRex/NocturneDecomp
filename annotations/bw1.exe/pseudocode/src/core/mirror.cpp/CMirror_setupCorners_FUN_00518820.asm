; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_00518820(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   corner1
; CVector3f *      Stack[0xc]:4   corner2
; CVector3f *      Stack[0x10]:4   corner3
; CVector3f *      Stack[0x14]:4   corner4
;
; XREF[1]:
;   core_glass.cpp_FUN_004e1150 at 004e1600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518820
        ;   Label: core_mirror.cpp_CMirror_setupCorners_FUN_00518820
    PUSH ESI                            ; 00518821
    PUSH EDI                            ; 00518822
    MOV EAX,dword ptr [ESP + 0x10]      ; 00518823
    MOV EDX,dword ptr [ESP + 0x14]      ; 00518827
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051882b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0051882f
    MOV ESI,dword ptr [ESP + 0x20]      ; 00518833
    CMP EAX,EDX                         ; 00518837
    JNZ 0x00518874                      ; 00518839
        ;   XREF to: 00518874 (CONDITIONAL_JUMP)  ; LAB_00518874
    LEA EDX,[EAX + 0xc]                 ; 0051883b
        ;   Label: LAB_0051883b
    CMP EDX,EBX                         ; 0051883e
    JZ 0x00518852                       ; 00518840
        ;   XREF to: 00518852 (CONDITIONAL_JUMP)  ; LAB_00518852
    MOV EDI,dword ptr [EBX]             ; 00518842
    MOV dword ptr [EDX],EDI             ; 00518844
    MOV EDI,dword ptr [EBX + 0x4]       ; 00518846
    MOV dword ptr [EDX + 0x4],EDI       ; 00518849
    MOV EDI,dword ptr [EBX + 0x8]       ; 0051884c
    MOV dword ptr [EDX + 0x8],EDI       ; 0051884f
    LEA EDX,[EAX + 0x18]                ; 00518852
        ;   Label: LAB_00518852
    CMP EDX,ECX                         ; 00518855
    JZ 0x00518869                       ; 00518857
        ;   XREF to: 00518869 (CONDITIONAL_JUMP)  ; LAB_00518869
    MOV EBX,dword ptr [ECX]             ; 00518859
    MOV dword ptr [EDX],EBX             ; 0051885b
    MOV EBX,dword ptr [ECX + 0x4]       ; 0051885d
    MOV dword ptr [EDX + 0x4],EBX       ; 00518860
    MOV EBX,dword ptr [ECX + 0x8]       ; 00518863
    MOV dword ptr [EDX + 0x8],EBX       ; 00518866
    ADD EAX,0x24                        ; 00518869
        ;   Label: LAB_00518869
    CMP EAX,ESI                         ; 0051886c
    JNZ 0x00518886                      ; 0051886e
        ;   XREF to: 00518886 (CONDITIONAL_JUMP)  ; LAB_00518886
    POP EDI                             ; 00518870
    POP ESI                             ; 00518871
    POP EBX                             ; 00518872
    RET                                 ; 00518873
    MOV EDI,dword ptr [EDX]             ; 00518874
        ;   Label: LAB_00518874
    MOV dword ptr [EAX],EDI             ; 00518876
    MOV EDI,dword ptr [EDX + 0x4]       ; 00518878
    MOV dword ptr [EAX + 0x4],EDI       ; 0051887b
    MOV EDI,dword ptr [EDX + 0x8]       ; 0051887e
    MOV dword ptr [EAX + 0x8],EDI       ; 00518881
    JMP 0x0051883b                      ; 00518884
        ;   XREF to: 0051883b (UNCONDITIONAL_JUMP)  ; LAB_0051883b
    MOV EDX,dword ptr [ESI]             ; 00518886
        ;   Label: LAB_00518886
    MOV dword ptr [EAX],EDX             ; 00518888
    MOV EDX,dword ptr [ESI + 0x4]       ; 0051888a
    MOV dword ptr [EAX + 0x4],EDX       ; 0051888d
    MOV EDX,dword ptr [ESI + 0x8]       ; 00518890
    MOV dword ptr [EAX + 0x8],EDX       ; 00518893
    POP EDI                             ; 00518896
    POP ESI                             ; 00518897
    POP EBX                             ; 00518898
    RET                                 ; 00518899

