; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_cloth_cpp_vectorLengthFast_FUN_005b1b10(CVector3f *v)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   v
;
; Referenced Globals:
;   undefined4 DAT_01caf5b4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005b1b10
        ;   Label: core_cloth.cpp_vectorLengthFast_FUN_005b1b10
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b1b13
    FLD float ptr [EAX + 0x4]           ; 005b1b17
    FMUL ST0                            ; 005b1b1a
    FLD float ptr [EAX]                 ; 005b1b1c
    FMUL ST0                            ; 005b1b1e
    FADDP                               ; 005b1b20
    FLD float ptr [EAX + 0x8]           ; 005b1b22
    FMUL ST0                            ; 005b1b25
    FADDP                               ; 005b1b27
    FSTP float ptr [ESP]                ; 005b1b29
    MOV EAX,dword ptr [ESP]             ; 005b1b2c
    MOV EDX,dword ptr [0x01caf5b4]      ; 005b1b2f | DAT_01caf5b4
    SAR EAX,0x1                         ; 005b1b35
    ADD EAX,EDX                         ; 005b1b37
    ADD ESP,0x4                         ; 005b1b39
    RET                                 ; 005b1b3c

