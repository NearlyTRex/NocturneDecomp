; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_00492300(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005dbc1c
;   undefined4 DAT_005dbc24
;   undefined4 DAT_005dbc2c
;   undefined4 DAT_005ff660
;   undefined4 DAT_0061255c
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492300
        ;   Label: core_dtri.cpp_FUN_00492300
    PUSH ESI                            ; 00492301
    PUSH EDI                            ; 00492302
    SUB ESP,0x6c                        ; 00492303
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00492306
    LEA EBX,[ESP + 0x48]                ; 0049230a
    MOV EAX,ESI                         ; 0049230e
    MOV EDX,dword ptr [0x0061255c]      ; 00492310 | DAT_0061255c
    FLD float ptr [EAX]                 ; 00492316
    FMUL float ptr [0x005ff660]         ; 00492318 | DAT_005ff660
    FISTP dword ptr [EBX]               ; 0049231e
    FLD float ptr [EAX + 0x4]           ; 00492320
    FMUL float ptr [0x005ff660]         ; 00492323 | DAT_005ff660
    FISTP dword ptr [EBX + 0x4]         ; 00492329
    FLD float ptr [EAX + 0x8]           ; 0049232c
    FMUL float ptr [0x005ff660]         ; 0049232f | DAT_005ff660
    FISTP dword ptr [EBX + 0x8]         ; 00492335
    LEA EAX,[ESP + 0x48]                ; 00492338
    PUSH EAX                            ; 0049233c
    MOV EAX,dword ptr [EDX]             ; 0049233d
    PUSH EAX                            ; 0049233f
    CALL engine_special.cpp_FUN_00580173 ; 00492340
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x68]                ; 00492345
    ADD ESP,0x8                         ; 00492349
    LEA EAX,[ESI + 0xc]                 ; 0049234c
    MOV EDX,dword ptr [0x0061255c]      ; 0049234f | DAT_0061255c
    FLD float ptr [EAX]                 ; 00492355
    FMUL float ptr [0x005ff660]         ; 00492357 | DAT_005ff660
    FISTP dword ptr [EBX]               ; 0049235d
    FLD float ptr [EAX + 0x4]           ; 0049235f
    FMUL float ptr [0x005ff660]         ; 00492362 | DAT_005ff660
    FISTP dword ptr [EBX + 0x4]         ; 00492368
    FLD float ptr [EAX + 0x8]           ; 0049236b
    FMUL float ptr [0x005ff660]         ; 0049236e | DAT_005ff660
    FISTP dword ptr [EBX + 0x8]         ; 00492374
    LEA EAX,[ESP + 0x60]                ; 00492377
    PUSH EAX                            ; 0049237b
    MOV EAX,dword ptr [EDX]             ; 0049237c
    ADD EAX,0x30                        ; 0049237e
    PUSH EAX                            ; 00492381
    CALL engine_special.cpp_FUN_00580173 ; 00492382
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x5c]                ; 00492387
    ADD ESP,0x8                         ; 0049238b
    LEA EAX,[ESI + 0x18]                ; 0049238e
    MOV EDX,dword ptr [0x0061255c]      ; 00492391 | DAT_0061255c
    FLD float ptr [EAX]                 ; 00492397
    FMUL float ptr [0x005ff660]         ; 00492399 | DAT_005ff660
    FISTP dword ptr [EBX]               ; 0049239f
    FLD float ptr [EAX + 0x4]           ; 004923a1
    FMUL float ptr [0x005ff660]         ; 004923a4 | DAT_005ff660
    FISTP dword ptr [EBX + 0x4]         ; 004923aa
    FLD float ptr [EAX + 0x8]           ; 004923ad
    FMUL float ptr [0x005ff660]         ; 004923b0 | DAT_005ff660
    FISTP dword ptr [EBX + 0x8]         ; 004923b6
    LEA EAX,[ESP + 0x54]                ; 004923b9
    PUSH EAX                            ; 004923bd
    MOV EAX,dword ptr [EDX]             ; 004923be
    ADD EAX,0x60                        ; 004923c0
    PUSH EAX                            ; 004923c3
    CALL engine_special.cpp_FUN_00580173 ; 004923c4
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3                         ; 004923c9
    ADD ESP,0x8                         ; 004923ce
    MOV dword ptr [ESP + 0x4],EDX       ; 004923d1
    FLD double ptr [0x005dbc1c]         ; 004923d5 | DAT_005dbc1c
    FLD float ptr [ESI + 0x24]          ; 004923db
    FMUL ST1                            ; 004923de
    CALL crt_math.c_round_FUN_005c03a0  ; 004923e0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 004923e5
    FLD float ptr [ESI + 0x28]          ; 004923e9
    FMUL ST1                            ; 004923ec
    CALL crt_math.c_round_FUN_005c03a0  ; 004923ee
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xc]         ; 004923f3
    FMUL float ptr [ESI + 0x2c]         ; 004923f7
    CALL crt_math.c_round_FUN_005c03a0  ; 004923fa
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x10]        ; 004923ff
    FLD float ptr [ESI + 0x30]          ; 00492403
    FMUL double ptr [0x005dbc24]        ; 00492406 | DAT_005dbc24
    FMUL double ptr [0x005dbc2c]        ; 0049240c | DAT_005dbc2c
    MOV EAX,ESP                         ; 00492412
    MOV EBX,0x1                         ; 00492414
    PUSH EAX                            ; 00492419
    MOV EDI,dword ptr [0x0061255c]      ; 0049241a | DAT_0061255c
    XOR ECX,ECX                         ; 00492420
    PUSH EDI                            ; 00492422
    MOV ESI,0x2                         ; 00492423
    MOV dword ptr [ESP + 0x20],ECX      ; 00492428
    MOV dword ptr [ESP + 0x2c],EBX      ; 0049242c
    MOV dword ptr [ESP + 0x38],ESI      ; 00492430
    CALL crt_math.c_round_FUN_005c03a0  ; 00492434
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1c]        ; 00492439
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 0049243d
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00492442
    ADD ESP,0x6c                        ; 00492445
    POP EDI                             ; 00492448
    POP ESI                             ; 00492449
    POP EBX                             ; 0049244a
    RET                                 ; 0049244b

