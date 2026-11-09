; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl core_xform_cpp_determinant_FUN_005b6330(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   core_xform.cpp_FUN_005b6380 at 005b638d
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005b6330
        ;   Label: core_xform.cpp_determinant_FUN_005b6330
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b6333
    FLD float ptr [EAX + 0x10]          ; 005b6337
    FMUL float ptr [EAX + 0x28]         ; 005b633a
    FLD float ptr [EAX + 0x18]          ; 005b633d
    FMUL float ptr [EAX + 0x20]         ; 005b6340
    FSUBP                               ; 005b6343
    FMUL float ptr [EAX + 0x4]          ; 005b6345
    FLD float ptr [EAX + 0x14]          ; 005b6348
    FMUL float ptr [EAX + 0x28]         ; 005b634b
    FLD float ptr [EAX + 0x18]          ; 005b634e
    FMUL float ptr [EAX + 0x24]         ; 005b6351
    FSUBP                               ; 005b6354
    FMUL float ptr [EAX]                ; 005b6356
    FSUBRP                              ; 005b6358
    FLD float ptr [EAX + 0x10]          ; 005b635a
    FMUL float ptr [EAX + 0x24]         ; 005b635d
    FLD float ptr [EAX + 0x14]          ; 005b6360
    FMUL float ptr [EAX + 0x20]         ; 005b6363
    FSUBP                               ; 005b6366
    FMUL float ptr [EAX + 0x8]          ; 005b6368
    FADDP                               ; 005b636b
    FSTP double ptr [ESP]               ; 005b636d
    MOV EAX,dword ptr [ESP]             ; 005b6370
    MOV EDX,dword ptr [ESP + 0x4]       ; 005b6373
    ADD ESP,0x8                         ; 005b6377
    RET                                 ; 005b637a

