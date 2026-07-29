; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_addVector_FUN_004388a0(CVector3f *a,CVector3f *b)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   a
; CVector3f *      Stack[0x8]:4   b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004388a0
        ;   Label: core_cloth.cpp_addVector_FUN_004388a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004388a4
    FLD float ptr [EDX]                 ; 004388a8
    FADD float ptr [EAX]                ; 004388aa
    FSTP float ptr [EAX]                ; 004388ac
    FLD float ptr [EDX + 0x4]           ; 004388ae
    FADD float ptr [EAX + 0x4]          ; 004388b1
    FSTP float ptr [EAX + 0x4]          ; 004388b4
    FLD float ptr [EDX + 0x8]           ; 004388b7
    FADD float ptr [EAX + 0x8]          ; 004388ba
    FSTP float ptr [EAX + 0x8]          ; 004388bd
    RET                                 ; 004388c0

