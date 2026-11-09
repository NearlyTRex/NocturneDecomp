; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl core_xform_cpp_determinant_FUN_00584510(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   core_xform.cpp_FUN_00584560 at 0058456d
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00584510
        ;   Label: core_xform.cpp_determinant_FUN_00584510
    MOV EAX,dword ptr [ESP + 0xc]       ; 00584513
    FLD float ptr [EAX + 0x10]          ; 00584517
    FMUL float ptr [EAX + 0x28]         ; 0058451a
    FLD float ptr [EAX + 0x18]          ; 0058451d
    FMUL float ptr [EAX + 0x20]         ; 00584520
    FSUBP                               ; 00584523
    FMUL float ptr [EAX + 0x4]          ; 00584525
    FLD float ptr [EAX + 0x14]          ; 00584528
    FMUL float ptr [EAX + 0x28]         ; 0058452b
    FLD float ptr [EAX + 0x18]          ; 0058452e
    FMUL float ptr [EAX + 0x24]         ; 00584531
    FSUBP                               ; 00584534
    FMUL float ptr [EAX]                ; 00584536
    FSUBRP                              ; 00584538
    FLD float ptr [EAX + 0x10]          ; 0058453a
    FMUL float ptr [EAX + 0x24]         ; 0058453d
    FLD float ptr [EAX + 0x14]          ; 00584540
    FMUL float ptr [EAX + 0x20]         ; 00584543
    FSUBP                               ; 00584546
    FMUL float ptr [EAX + 0x8]          ; 00584548
    FADDP                               ; 0058454b
    FSTP double ptr [ESP]               ; 0058454d
    MOV EAX,dword ptr [ESP]             ; 00584550
    MOV EDX,dword ptr [ESP + 0x4]       ; 00584553
    ADD ESP,0x8                         ; 00584557
    RET                                 ; 0058455a

