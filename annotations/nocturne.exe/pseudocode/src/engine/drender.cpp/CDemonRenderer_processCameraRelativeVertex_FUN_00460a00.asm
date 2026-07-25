; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(undefined4 param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[62]:
;   FUN_0040f740 at 0040f765
;   FUN_00414e70 at 00414e84
;   FUN_0041ea00 at 0041ea5f
;   FUN_0041eaf0 at 0041eb28
;   FUN_0043cbc0 at 0043cbd4
;   FUN_0044d060 at 0044d07a
;   FUN_00450c90 at 00450cc0
;   FUN_00481d90 at 00481da4
;   FUN_00489990 at 00489a05
;   FUN_0048e6d0 at 0048e6e4
;   ... and 52 more
;
; Referenced Globals:
;   double DOUBLE_0057dc25 = 256
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_3d.c_processCameraRelativePoint_FUN_004044d0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 00460a00
        ;   Label: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
    MOV EAX,dword ptr [ESP + 0x18]      ; 00460a03
    FLD double ptr [0x0057dc25]         ; 00460a07 | DOUBLE_0057dc25
    FLD float ptr [EAX]                 ; 00460a0d
    FMUL ST1                            ; 00460a0f
    CALL crt_math.c_round_FUN_00563a30  ; 00460a11
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x4]         ; 00460a16
    FLD float ptr [EAX + 0x4]           ; 00460a1a
    FMUL ST1                            ; 00460a1d
    CALL crt_math.c_round_FUN_00563a30  ; 00460a1f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 00460a24
    FMUL float ptr [EAX + 0x8]          ; 00460a28
    MOV EAX,ESP                         ; 00460a2b
    CALL crt_math.c_round_FUN_00563a30  ; 00460a2d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH EAX                            ; 00460a32
    FISTP dword ptr [ESP + 0x10]        ; 00460a33
    CALL engine_3d.c_processCameraRelativePoint_FUN_004044d0 ; 00460a37
        ;   XREF to: 004044d0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_processCameraRelativePoint_FUN_004044d0()
    ADD ESP,0x4                         ; 00460a3c
    ADD ESP,0x10                        ; 00460a3f
    RET                                 ; 00460a42

