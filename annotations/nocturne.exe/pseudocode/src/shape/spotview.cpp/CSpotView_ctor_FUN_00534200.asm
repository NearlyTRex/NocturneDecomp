; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * shape_spotview_cpp_CSpotView_ctor_FUN_00534200(undefined4 *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c0fa8
;   undefined4 DAT_005c0fac
;   undefined4 DAT_02dc9ea0
;   undefined4 DAT_02dc9ea4
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_reset_FUN_00534260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534200
        ;   Label: shape_spotview.cpp_CSpotView_ctor_FUN_00534200
    MOV EBX,dword ptr [ESP + 0x8]       ; 00534201
    FLD float ptr [0x005c0fa8]          ; 00534205 | DAT_005c0fa8
    FLD float ptr [0x005c0fac]          ; 0053420b | DAT_005c0fac
    FLD float ptr [0x02dc9ea0]          ; 00534211 | DAT_02dc9ea0
    LEA EAX,[EBX + 0x18]                ; 00534217
    FLD float ptr [0x02dc9ea4]          ; 0053421a | DAT_02dc9ea4
    MOV dword ptr [EAX + 0x8],0x0       ; 00534220
    PUSH 0x1f                           ; 00534227
    MOV EDX,dword ptr [EAX + 0x8]       ; 00534229
    MOV dword ptr [EAX + 0x4],EDX       ; 0053422c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053422f
    MOV dword ptr [EAX],EDX             ; 00534232
    MOV dword ptr [EBX + 0x10],0x0      ; 00534234
    PUSH EBX                            ; 0053423b
    FXCH ST3                            ; 0053423c
    FSTP float ptr [EBX]                ; 0053423e
    FXCH                                ; 00534240
    FSTP float ptr [EBX + 0x4]          ; 00534242
    FSTP float ptr [EBX + 0x8]          ; 00534245
    FSTP float ptr [EBX + 0xc]          ; 00534248
    MOV dword ptr [EBX + 0x14],0x0      ; 0053424b
    CALL shape_spotview.cpp_CSpotView_reset_FUN_00534260 ; 00534252
        ;   XREF to: 00534260 (UNCONDITIONAL_CALL)  ; undefined shape_spotview.cpp_CSpotView_reset_FUN_00534260()
    ADD ESP,0x8                         ; 00534257
    MOV EAX,EBX                         ; 0053425a
    POP EBX                             ; 0053425c
    RET                                 ; 0053425d

