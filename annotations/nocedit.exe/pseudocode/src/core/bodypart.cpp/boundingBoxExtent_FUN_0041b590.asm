; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxExtent_FUN_0041b590(CBoundingBox3D *src,CBoundingBox3D *dst)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   src
; CBoundingBox3D * Stack[0x8]:4   dst
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0041b590
        ;   Label: core_bodypart.cpp_boundingBoxExtent_FUN_0041b590
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041b594
    LEA EAX,[ECX + 0xc]                 ; 0041b598
    FLD float ptr [EAX]                 ; 0041b59b
    FSUB float ptr [ECX]                ; 0041b59d
    FSTP float ptr [EDX]                ; 0041b59f
    FLD float ptr [EAX + 0x4]           ; 0041b5a1
    FSUB float ptr [ECX + 0x4]          ; 0041b5a4
    FSTP float ptr [EDX + 0x4]          ; 0041b5a7
    FLD float ptr [EAX + 0x8]           ; 0041b5aa
    FSUB float ptr [ECX + 0x8]          ; 0041b5ad
    MOV EAX,EDX                         ; 0041b5b0
    FSTP float ptr [EDX + 0x8]          ; 0041b5b2
    RET                                 ; 0041b5b5

