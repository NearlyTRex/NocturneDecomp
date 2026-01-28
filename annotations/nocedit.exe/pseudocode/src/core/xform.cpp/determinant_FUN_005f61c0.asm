; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double __cdecl core_xform_cpp_determinant_FUN_005f61c0(CMatrix3x4f *matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[2]:
;   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 at 0058ade9
;   core_xform.cpp_inverse_FUN_005f6210 at 005f6229
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005f61c0
        ;   Label: core_xform.cpp_determinant_FUN_005f61c0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005f61c3
    FLD float ptr [EAX + 0x10]          ; 005f61c7
    FMUL float ptr [EAX + 0x28]         ; 005f61ca
    FLD float ptr [EAX + 0x18]          ; 005f61cd
    FMUL float ptr [EAX + 0x20]         ; 005f61d0
    FSUBP                               ; 005f61d3
    FMUL float ptr [EAX + 0x4]          ; 005f61d5
    FLD float ptr [EAX + 0x14]          ; 005f61d8
    FMUL float ptr [EAX + 0x28]         ; 005f61db
    FLD float ptr [EAX + 0x18]          ; 005f61de
    FMUL float ptr [EAX + 0x24]         ; 005f61e1
    FSUBP                               ; 005f61e4
    FMUL float ptr [EAX]                ; 005f61e6
    FSUBRP                              ; 005f61e8
    FLD float ptr [EAX + 0x10]          ; 005f61ea
    FMUL float ptr [EAX + 0x24]         ; 005f61ed
    FLD float ptr [EAX + 0x14]          ; 005f61f0
    FMUL float ptr [EAX + 0x20]         ; 005f61f3
    FSUBP                               ; 005f61f6
    FMUL float ptr [EAX + 0x8]          ; 005f61f8
    FADDP                               ; 005f61fb
    FSTP double ptr [ESP]               ; 005f61fd
    MOV EAX,dword ptr [ESP]             ; 005f6200
    MOV EDX,dword ptr [ESP + 0x4]       ; 005f6203
    ADD ESP,0x8                         ; 005f6207
    RET                                 ; 005f620a

