; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_copyVector3_FUN_004547b0(CVector3f * dest, CVector3f * src)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
; CVector3f *      Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004547b0
        ;   Label: core_dcube.cpp_copyVector3_FUN_004547b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004547b4
    CMP EAX,EDX                         ; 004547b8
    JNZ 0x004547bd                      ; 004547ba
        ;   XREF to: 004547bd (CONDITIONAL_JUMP)  ; LAB_004547bd
    RET                                 ; 004547bc
    MOV ECX,dword ptr [EDX]             ; 004547bd
        ;   Label: LAB_004547bd
    MOV dword ptr [EAX],ECX             ; 004547bf
    MOV ECX,dword ptr [EDX + 0x4]       ; 004547c1
    MOV dword ptr [EAX + 0x4],ECX       ; 004547c4
    MOV ECX,dword ptr [EDX + 0x8]       ; 004547c7
    MOV dword ptr [EAX + 0x8],ECX       ; 004547ca
    RET                                 ; 004547cd

