; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_copyVector3_FUN_004484a0(CVector3f *dest,CVector3f *src)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
; CVector3f *      Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004484a0
        ;   Label: core_dcube.cpp_copyVector3_FUN_004484a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004484a4
    CMP EAX,EDX                         ; 004484a8
    JNZ 0x004484ad                      ; 004484aa
        ;   XREF to: 004484ad (CONDITIONAL_JUMP)  ; LAB_004484ad
    RET                                 ; 004484ac
    MOV ECX,dword ptr [EDX]             ; 004484ad
        ;   Label: LAB_004484ad
    MOV dword ptr [EAX],ECX             ; 004484af
    MOV ECX,dword ptr [EDX + 0x4]       ; 004484b1
    MOV dword ptr [EAX + 0x4],ECX       ; 004484b4
    MOV ECX,dword ptr [EDX + 0x8]       ; 004484b7
    MOV dword ptr [EAX + 0x8],ECX       ; 004484ba
    RET                                 ; 004484bd

