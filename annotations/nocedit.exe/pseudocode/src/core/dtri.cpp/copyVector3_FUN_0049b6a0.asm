; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtri.cpp_copyVector3_FUN_0049b6a0(CVector3f * dest_ptr, CVector3f * src_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest_ptr
; CVector3f *      Stack[0x8]:4   src_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049b6a0
        ;   Label: core_dtri.cpp_copyVector3_FUN_0049b6a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049b6a4
    CMP EAX,EDX                         ; 0049b6a8
    JNZ 0x0049b6ad                      ; 0049b6aa
        ;   XREF to: 0049b6ad (CONDITIONAL_JUMP)  ; LAB_0049b6ad
    RET                                 ; 0049b6ac
    MOV ECX,dword ptr [EDX]             ; 0049b6ad
        ;   Label: LAB_0049b6ad
    MOV dword ptr [EAX],ECX             ; 0049b6af
    MOV ECX,dword ptr [EDX + 0x4]       ; 0049b6b1
    MOV dword ptr [EAX + 0x4],ECX       ; 0049b6b4
    MOV ECX,dword ptr [EDX + 0x8]       ; 0049b6b7
    MOV dword ptr [EAX + 0x8],ECX       ; 0049b6ba
    RET                                 ; 0049b6bd

