; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_cloth_cpp_vectorLengthFast_FUN_00442380(CVector3f *v)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   v
;
; Referenced Globals:
;   undefined4 DAT_01cc804c
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00442380
        ;   Label: core_cloth.cpp_vectorLengthFast_FUN_00442380
    MOV EAX,dword ptr [ESP + 0x8]       ; 00442383
    FLD float ptr [EAX + 0x4]           ; 00442387
    FMUL ST0                            ; 0044238a
    FLD float ptr [EAX]                 ; 0044238c
    FMUL ST0                            ; 0044238e
    FADDP                               ; 00442390
    FLD float ptr [EAX + 0x8]           ; 00442392
    FMUL ST0                            ; 00442395
    FADDP                               ; 00442397
    FSTP float ptr [ESP]                ; 00442399
    MOV EAX,dword ptr [ESP]             ; 0044239c
    MOV EDX,dword ptr [0x01cc804c]      ; 0044239f | DAT_01cc804c
    SAR EAX,0x1                         ; 004423a5
    ADD EAX,EDX                         ; 004423a7
    ADD ESP,0x4                         ; 004423a9
    RET                                 ; 004423ac

