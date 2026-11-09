; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_cloth_cpp_vectorLengthFast_FUN_0043ffe0(CVector3f *v)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   v
;
; Referenced Globals:
;   undefined4 DAT_01d1a0a4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0043ffe0
        ;   Label: core_cloth.cpp_vectorLengthFast_FUN_0043ffe0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043ffe3
    FLD float ptr [EAX + 0x4]           ; 0043ffe7
    FMUL ST0                            ; 0043ffea
    FLD float ptr [EAX]                 ; 0043ffec
    FMUL ST0                            ; 0043ffee
    FADDP                               ; 0043fff0
    FLD float ptr [EAX + 0x8]           ; 0043fff2
    FMUL ST0                            ; 0043fff5
    FADDP                               ; 0043fff7
    FSTP float ptr [ESP]                ; 0043fff9
    MOV EAX,dword ptr [ESP]             ; 0043fffc
    MOV EDX,dword ptr [0x01d1a0a4]      ; 0043ffff | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00440005
    ADD EAX,EDX                         ; 00440007
    ADD ESP,0x4                         ; 00440009
    RET                                 ; 0044000c

