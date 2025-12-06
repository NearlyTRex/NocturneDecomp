; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0(CMatrix3x4f * matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
;
; XREF[1]:
;   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 at 0058ab34
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005f6be0
        ;   Label: core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005f6be3
    FLD float ptr [EAX + 0x14]          ; 005f6be7
    FMUL float ptr [EAX + 0x28]         ; 005f6bea
    FLD float ptr [EAX + 0x18]          ; 005f6bed
    FMUL float ptr [EAX + 0x20]         ; 005f6bf0
    FLD float ptr [EAX + 0x10]          ; 005f6bf3
    FMUL float ptr [EAX + 0x24]         ; 005f6bf6
    FLD float ptr [EAX + 0x18]          ; 005f6bf9
    FMUL float ptr [EAX + 0x24]         ; 005f6bfc
    FLD float ptr [EAX + 0x10]          ; 005f6bff
    FMUL float ptr [EAX + 0x28]         ; 005f6c02
    FLD float ptr [EAX + 0x4]           ; 005f6c05
    FXCH                                ; 005f6c08
    FSUBP ST4,ST0                       ; 005f6c0a
    FMULP ST3                           ; 005f6c0c
    FSUBP ST3,ST0                       ; 005f6c0e
    FLD float ptr [EAX]                 ; 005f6c10
    FMULP ST3                           ; 005f6c12
    FLD float ptr [EAX + 0x20]          ; 005f6c14
    FMUL float ptr [EAX + 0x14]         ; 005f6c17
    FXCH ST3                            ; 005f6c1a
    FADDP ST2,ST0                       ; 005f6c1c
    FSUBRP ST2,ST0                      ; 005f6c1e
    FLD float ptr [EAX + 0x8]           ; 005f6c20
    FMULP ST2                           ; 005f6c23
    FADDP                               ; 005f6c25
    FLDZ                                ; 005f6c27
    FCOMPP                              ; 005f6c29
    FNSTSW AX                           ; 005f6c2b
    SAHF                                ; 005f6c2d
    SETA AL                             ; 005f6c2e
    AND EAX,0xff                        ; 005f6c31
    ADD ESP,0xc                         ; 005f6c36
    RET                                 ; 005f6c39

