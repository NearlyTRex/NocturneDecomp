; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_FUN_005cbec0(void)
;
;
; XREF[1]:
;   shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00 at 005d7e68
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005cbec0
        ;   Label: shape_superopt.cpp_FUN_005cbec0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005cbec4
    MOV EAX,dword ptr [EDX + 0x8]       ; 005cbec8
    MOV dword ptr [ECX],EAX             ; 005cbecb
    MOV EAX,dword ptr [EDX + 0xc]       ; 005cbecd
    RET                                 ; 005cbed0

