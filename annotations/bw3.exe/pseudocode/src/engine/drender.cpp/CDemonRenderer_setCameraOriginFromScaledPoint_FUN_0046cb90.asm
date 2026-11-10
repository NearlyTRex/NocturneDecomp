; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer *this_ptr,CVector3f *point_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[13]:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00449840 at 0044999e
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 at 004491d7
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530 at 0045c5c8
;   core_inv.cpp_FUN_004dbe70 at 004dc0da
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070 at 004f4080
;   core_moon.cpp_FUN_004f9670 at 004f96fc
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20 at 0053af2f
;   core_set.cpp_FUN_005365c0 at 005368ee
;   core_setdir.cpp_FUN_0053f940 at 00540330
;   core_setdir.cpp_FUN_00540cf0 at 00540d81
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_005bc4f3
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_matrix.c_setCameraOrigin_FUN_004e6a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cb90
        ;   Label: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
    SUB ESP,0x8                         ; 0046cb91
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046cb94
    FLD double ptr [0x005bc4f3]         ; 0046cb98 | DAT_005bc4f3
    FLD float ptr [EAX + 0x8]           ; 0046cb9e
    FMUL ST1                            ; 0046cba1
    FLD float ptr [EAX + 0x4]           ; 0046cba3
    FMUL ST2                            ; 0046cba6
    FLD float ptr [EAX]                 ; 0046cba8
    FMULP ST3                           ; 0046cbaa
    FXCH                                ; 0046cbac
    CALL crt_math.c_round_FUN_005a3120  ; 0046cbae
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0046cbb3
    CALL crt_math.c_round_FUN_005a3120  ; 0046cbb5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0046cbba
    FISTP dword ptr [ESP]               ; 0046cbbc
    FISTP dword ptr [ESP + 0x4]         ; 0046cbbf
    MOV EDX,dword ptr [ESP]             ; 0046cbc3
    MOV ECX,dword ptr [ESP + 0x4]       ; 0046cbc6
    PUSH EDX                            ; 0046cbca
    CALL crt_math.c_round_FUN_005a3120  ; 0046cbcb
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH ECX                            ; 0046cbd0
    FISTP dword ptr [ESP + 0xc]         ; 0046cbd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046cbd5
    PUSH EBX                            ; 0046cbd9
    CALL engine_matrix.c_setCameraOrigin_FUN_004e6a40 ; 0046cbda
        ;   XREF to: 004e6a40 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_setCameraOrigin_FUN_004e6a40(int x, int y, int z)
    ADD ESP,0xc                         ; 0046cbdf
    ADD ESP,0x8                         ; 0046cbe2
    POP EBX                             ; 0046cbe5
    RET                                 ; 0046cbe6

