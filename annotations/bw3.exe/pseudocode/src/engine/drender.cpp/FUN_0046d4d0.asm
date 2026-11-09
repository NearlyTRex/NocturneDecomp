; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_FUN_0046d4d0(CDemonRenderer *this_ptr,float render_alpha)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   render_alpha
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_fire.cpp_FUN_004a0680 at 004a06f6
;
; Referenced Globals:
;   undefined4 DAT_005bc583
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046d4d0
        ;   Label: engine_drender.cpp_FUN_0046d4d0
    FLD float ptr [ESP + 0xc]           ; 0046d4d3
    FMUL double ptr [0x005bc583]        ; 0046d4d7 | DAT_005bc583
    CALL crt_math.c_round_FUN_005a3120  ; 0046d4dd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 0046d4e2
    MOV EDX,dword ptr [ESP]             ; 0046d4e5
    PUSH EDX                            ; 0046d4e8
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0046d4e9
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 0046d4ee
    ADD ESP,0x4                         ; 0046d4f1
    RET                                 ; 0046d4f4

