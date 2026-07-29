; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_set_cpp_CVector3f_copy_FUN_0050ea90(CVector3f *a,CVector3f *b)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   a
; CVector3f *      Stack[0x8]:4   b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050ea90
        ;   Label: core_set.cpp_CVector3f_copy_FUN_0050ea90
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050ea94
    CMP EAX,EDX                         ; 0050ea98
    JNZ 0x0050eaa7                      ; 0050ea9a
        ;   XREF to: 0050eaa7 (CONDITIONAL_JUMP)  ; LAB_0050eaa7
    ADD EDX,0xc                         ; 0050ea9c
    LEA ECX,[EAX + 0xc]                 ; 0050ea9f
    CMP ECX,EDX                         ; 0050eaa2
    JNZ 0x0050eac2                      ; 0050eaa4
        ;   XREF to: 0050eac2 (CONDITIONAL_JUMP)  ; LAB_0050eac2
    RET                                 ; 0050eaa6
    MOV ECX,dword ptr [EDX]             ; 0050eaa7
        ;   Label: LAB_0050eaa7
    MOV dword ptr [EAX],ECX             ; 0050eaa9
    MOV ECX,dword ptr [EDX + 0x4]       ; 0050eaab
    MOV dword ptr [EAX + 0x4],ECX       ; 0050eaae
    MOV ECX,dword ptr [EDX + 0x8]       ; 0050eab1
    MOV dword ptr [EAX + 0x8],ECX       ; 0050eab4
    ADD EDX,0xc                         ; 0050eab7
    LEA ECX,[EAX + 0xc]                 ; 0050eaba
    CMP ECX,EDX                         ; 0050eabd
    JNZ 0x0050eac2                      ; 0050eabf
        ;   XREF to: 0050eac2 (CONDITIONAL_JUMP)  ; LAB_0050eac2
    RET                                 ; 0050eac1
    PUSH EBX                            ; 0050eac2
        ;   Label: LAB_0050eac2
    MOV EBX,dword ptr [EDX]             ; 0050eac3
    MOV dword ptr [ECX],EBX             ; 0050eac5
    MOV EBX,dword ptr [EDX + 0x4]       ; 0050eac7
    MOV dword ptr [ECX + 0x4],EBX       ; 0050eaca
    MOV EBX,dword ptr [EDX + 0x8]       ; 0050eacd
    MOV dword ptr [ECX + 0x8],EBX       ; 0050ead0
    POP EBX                             ; 0050ead3
    RET                                 ; 0050ead4

