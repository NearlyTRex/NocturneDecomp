; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00481200(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005bd33d
;   undefined4 DAT_005bd341
;   undefined4 DAT_005deffc
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407b30
;   engine_matrix.c_transformToCache_FUN_004e5540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481200
        ;   Label: shape_edittool.cpp_FUN_00481200
    PUSH ESI                            ; 00481201
    PUSH EDI                            ; 00481202
    PUSH EBP                            ; 00481203
    SUB ESP,0x54                        ; 00481204
    MOV EBP,dword ptr [ESP + 0x68]      ; 00481207
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0048120b
    LEA EBX,[ESP + 0x18]                ; 0048120f
    MOV EAX,EBP                         ; 00481213
    FLD float ptr [EAX]                 ; 00481215
    FMUL float ptr [0x005deffc]         ; 00481217 | DAT_005deffc
    FISTP dword ptr [EBX]               ; 0048121d
    FLD float ptr [EAX + 0x4]           ; 0048121f
    FMUL float ptr [0x005deffc]         ; 00481222 | DAT_005deffc
    FISTP dword ptr [EBX + 0x4]         ; 00481228
    FLD float ptr [EAX + 0x8]           ; 0048122b
    FMUL float ptr [0x005deffc]         ; 0048122e | DAT_005deffc
    FISTP dword ptr [EBX + 0x8]         ; 00481234
    LEA EAX,[ESP + 0x18]                ; 00481237
    PUSH EAX                            ; 0048123b
    PUSH 0x0                            ; 0048123c
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 0048123e
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [0x005bd33d]          ; 00481243 | DAT_005bd33d
    FLD float ptr [EDI]                 ; 00481249
    FMUL ST1                            ; 0048124b
    FLD float ptr [EDI + 0x4]           ; 0048124d
    FMUL ST2                            ; 00481250
    FLD float ptr [EDI + 0x8]           ; 00481252
    FMULP ST3                           ; 00481255
    LEA ESI,[ESP + 0x38]                ; 00481257
    ADD ESP,0x8                         ; 0048125b
    LEA EDI,[ESP + 0x48]                ; 0048125e
    FXCH                                ; 00481262
    FSTP float ptr [ESP + 0x30]         ; 00481264
    FSTP float ptr [ESP + 0x34]         ; 00481268
    FSTP float ptr [ESP + 0x38]         ; 0048126c
    MOVSD ES:EDI,ESI                    ; 00481270
    MOVSD ES:EDI,ESI                    ; 00481271
    MOVSD ES:EDI,ESI                    ; 00481272
    FLD float ptr [0x005bd341]          ; 00481273 | DAT_005bd341
    FLD float ptr [EBP]                 ; 00481279
    FMUL ST1                            ; 0048127c
    FLD float ptr [EBP + 0x4]           ; 0048127e
    FMUL ST2                            ; 00481281
    FLD float ptr [EBP + 0x8]           ; 00481283
    FMULP ST3                           ; 00481286
    LEA EBX,[ESP + 0x18]                ; 00481288
    LEA EDI,[ESP + 0xc]                 ; 0048128c
    LEA ESI,[ESP + 0x3c]                ; 00481290
    FXCH                                ; 00481294
    FSTP float ptr [ESP + 0x3c]         ; 00481296
    FSTP float ptr [ESP + 0x40]         ; 0048129a
    FSTP float ptr [ESP + 0x44]         ; 0048129e
    MOVSD ES:EDI,ESI                    ; 004812a2
    MOVSD ES:EDI,ESI                    ; 004812a3
    MOVSD ES:EDI,ESI                    ; 004812a4
    LEA EAX,[ESP + 0x24]                ; 004812a5
    FLD float ptr [ESP + 0xc]           ; 004812a9
    FLD float ptr [ESP + 0x10]          ; 004812ad
    FLD float ptr [ESP + 0x14]          ; 004812b1
    LEA EDI,[ESP + 0x24]                ; 004812b5
    MOV ESI,ESP                         ; 004812b9
    FXCH ST2                            ; 004812bb
    FADD float ptr [ESP + 0x48]         ; 004812bd
    FXCH                                ; 004812c1
    FADD float ptr [ESP + 0x4c]         ; 004812c3
    FXCH ST2                            ; 004812c7
    FADD float ptr [ESP + 0x50]         ; 004812c9
    FXCH                                ; 004812cd
    FSTP float ptr [ESP]                ; 004812cf
    FXCH                                ; 004812d2
    FSTP float ptr [ESP + 0x4]          ; 004812d4
    FSTP float ptr [ESP + 0x8]          ; 004812d8
    MOVSD ES:EDI,ESI                    ; 004812dc
    MOVSD ES:EDI,ESI                    ; 004812dd
    MOVSD ES:EDI,ESI                    ; 004812de
    FLD float ptr [EAX]                 ; 004812df
    FMUL float ptr [0x005deffc]         ; 004812e1 | DAT_005deffc
    FISTP dword ptr [EBX]               ; 004812e7
    FLD float ptr [EAX + 0x4]           ; 004812e9
    FMUL float ptr [0x005deffc]         ; 004812ec | DAT_005deffc
    FISTP dword ptr [EBX + 0x4]         ; 004812f2
    FLD float ptr [EAX + 0x8]           ; 004812f5
    FMUL float ptr [0x005deffc]         ; 004812f8 | DAT_005deffc
    FISTP dword ptr [EBX + 0x8]         ; 004812fe
    LEA EAX,[ESP + 0x18]                ; 00481301
    PUSH EAX                            ; 00481305
    PUSH 0x1                            ; 00481306
    CALL engine_matrix.c_transformToCache_FUN_004e5540 ; 00481308
        ;   XREF to: 004e5540 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e5540(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0048130d
    MOV ESI,0x60b044                    ; 00481310
    SUB ESP,0x30                        ; 00481315
    MOV ECX,0xc                         ; 00481318
    MOV EDI,ESP                         ; 0048131d
    MOVSD.REP ES:EDI,ESI                ; 0048131f
    SUB ESP,0x30                        ; 00481321
    MOV ECX,0xc                         ; 00481324
    MOV ESI,0x60b014                    ; 00481329
    MOV EDI,ESP                         ; 0048132e
    MOVSD.REP ES:EDI,ESI                ; 00481330
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407b30 ; 00481332
        ;   XREF to: 00407b30 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407b30(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00481337
    ADD ESP,0x54                        ; 0048133a
    POP EBP                             ; 0048133d
    POP EDI                             ; 0048133e
    POP ESI                             ; 0048133f
    POP EBX                             ; 00481340
    RET                                 ; 00481341

