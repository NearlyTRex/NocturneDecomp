; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_cloth_cpp_vectorLengthFast_FUN_004388d0(CVector3f *v)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   v
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   int g_FastSqrtMagic
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004388d0
        ;   Label: core_cloth.cpp_vectorLengthFast_FUN_004388d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004388d3
    FLD float ptr [EAX + 0x4]           ; 004388d7
    FMUL ST0                            ; 004388da
    FLD float ptr [EAX]                 ; 004388dc
    FMUL ST0                            ; 004388de
    FADDP                               ; 004388e0
    FLD float ptr [EAX + 0x8]           ; 004388e2
    FMUL ST0                            ; 004388e5
    FADDP                               ; 004388e7
    FSTP float ptr [ESP]                ; 004388e9
    MOV EAX,dword ptr [ESP]             ; 004388ec
    MOV EDX,dword ptr [0x01c7070c]      ; 004388ef | g_FastSqrtMagic
    SAR EAX,0x1                         ; 004388f5
    ADD EAX,EDX                         ; 004388f7
    ADD ESP,0x4                         ; 004388f9
    RET                                 ; 004388fc

