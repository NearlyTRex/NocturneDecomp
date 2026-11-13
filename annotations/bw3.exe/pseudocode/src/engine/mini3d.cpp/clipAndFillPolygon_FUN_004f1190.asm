; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_clipAndFillPolygon_FUN_004f1190(float *vertices,int vertex_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
;
; XREF[1]:
;   engine_mini3d.cpp_polyListD3DTL_FUN_004ee5b0 at 004ee8e8
;
; Referenced Globals:
;   undefined4 DAT_01d76c5c
;   undefined4 DAT_01d76c60
;   undefined4 DAT_01d76c64
;   undefined4 DAT_01d76c68
;   undefined4 DAT_01d76f68
;   undefined4 DAT_01d76f6c
;   undefined4 DAT_01d76f70
;   undefined4 DAT_01d76f74
;   undefined4 DAT_01d76f78
;   undefined4 DAT_01d7777c
;   undefined4 DAT_01d77780
;   undefined4 DAT_01d777bc
;   undefined4 DAT_01d78f7c
;   undefined4 DAT_01d78f80
;   undefined4 DAT_01d78f84
;   ... and 7 more
;
; Called Functions:
;   engine_mini3d.cpp_clampClippedPolygon_FUN_004f0d00
;   engine_mini3d.cpp_clipAgainstPlane0_FUN_004f0850
;   engine_mini3d.cpp_clipAgainstPlane1_FUN_004f0980
;   engine_mini3d.cpp_clipAgainstPlane2_FUN_004f0ab0
;   engine_mini3d.cpp_clipAgainstPlane3_FUN_004f0be0
;   engine_mini3d.cpp_fillPolygon_FUN_004f2090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1190
        ;   Label: engine_mini3d.cpp_clipAndFillPolygon_FUN_004f1190
    PUSH EBP                            ; 004f1191
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f1192
    MOV dword ptr [0x01d76f68],EBX      ; 004f1196 | DAT_01d76f68
    XOR EDX,EDX                         ; 004f119c
    XOR EBP,EBP                         ; 004f119e
    XOR EAX,EAX                         ; 004f11a0
    MOV dword ptr [0x01d76f6c],EDX      ; 004f11a2 | DAT_01d76f6c
    MOV dword ptr [0x01d76f70],EDX      ; 004f11a8 | DAT_01d76f70
    MOV dword ptr [0x01d76f74],EDX      ; 004f11ae | DAT_01d76f74
    MOV dword ptr [0x01d76f78],EDX      ; 004f11b4 | DAT_01d76f78
    TEST EBX,EBX                        ; 004f11ba
    JLE 0x004f11e2                      ; 004f11bc
        ;   XREF to: 004f11e2 (CONDITIONAL_JUMP)  ; LAB_004f11e2
    PUSH EDI                            ; 004f11be
    PUSH ESI                            ; 004f11bf
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f11c0
    MOV ESI,EAX                         ; 004f11c4
        ;   Label: LAB_004f11c4
    SHL ESI,0x6                         ; 004f11c6
    MOV ECX,0x10                        ; 004f11c9
    LEA EDI,[ESI + 0x1d7777c]           ; 004f11ce
    MOV ESI,EDX                         ; 004f11d4
    INC EAX                             ; 004f11d6
    ADD EDX,0x40                        ; 004f11d7
    MOVSD.REP ES:EDI,ESI                ; 004f11da | DAT_01d7777c | DAT_01d77780 | DAT_01d777bc
    CMP EAX,EBX                         ; 004f11dc
    JL 0x004f11c4                       ; 004f11de
        ;   XREF to: 004f11c4 (CONDITIONAL_JUMP)  ; LAB_004f11c4
    POP ESI                             ; 004f11e0
    POP EDI                             ; 004f11e1
    CALL engine_mini3d.cpp_clipAgainstPlane0_FUN_004f0850 ; 004f11e2
        ;   XREF to: 004f0850 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clipAgainstPlane0_FUN_004f0850()
        ;   Label: LAB_004f11e2
    CMP dword ptr [0x01d76f6c],0x3      ; 004f11e7 | DAT_01d76f6c
    JGE 0x004f11f9                      ; 004f11ee
        ;   XREF to: 004f11f9 (CONDITIONAL_JUMP)  ; LAB_004f11f9
    MOV EBP,dword ptr [0x01d76f78]      ; 004f11f0 | DAT_01d76f78
        ;   Label: LAB_004f11f0
    POP EBP                             ; 004f11f6
    POP EBX                             ; 004f11f7
    RET                                 ; 004f11f8
    CALL engine_mini3d.cpp_clipAgainstPlane1_FUN_004f0980 ; 004f11f9
        ;   XREF to: 004f0980 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clipAgainstPlane1_FUN_004f0980()
        ;   Label: LAB_004f11f9
    CMP dword ptr [0x01d76f70],0x3      ; 004f11fe | DAT_01d76f70
    JL 0x004f11f0                       ; 004f1205
        ;   XREF to: 004f11f0 (CONDITIONAL_JUMP)  ; LAB_004f11f0
    CALL engine_mini3d.cpp_clipAgainstPlane2_FUN_004f0ab0 ; 004f1207
        ;   XREF to: 004f0ab0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clipAgainstPlane2_FUN_004f0ab0()
    CMP dword ptr [0x01d76f74],0x3      ; 004f120c | DAT_01d76f74
    JL 0x004f11f0                       ; 004f1213
        ;   XREF to: 004f11f0 (CONDITIONAL_JUMP)  ; LAB_004f11f0
    CALL engine_mini3d.cpp_clipAgainstPlane3_FUN_004f0be0 ; 004f1215
        ;   XREF to: 004f0be0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clipAgainstPlane3_FUN_004f0be0()
    MOV EBP,dword ptr [0x01d76f78]      ; 004f121a | DAT_01d76f78
    CMP EBP,0x3                         ; 004f1220
    JL 0x004f11f0                       ; 004f1223
        ;   XREF to: 004f11f0 (CONDITIONAL_JUMP)  ; LAB_004f11f0
    CALL engine_mini3d.cpp_clampClippedPolygon_FUN_004f0d00 ; 004f1225
        ;   XREF to: 004f0d00 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clampClippedPolygon_FUN_004f0d00()
    MOV EBP,dword ptr [0x01d76f78]      ; 004f122a | DAT_01d76f78
    XOR EDX,EDX                         ; 004f1230
    TEST EBP,EBP                        ; 004f1232
    JLE 0x004f128c                      ; 004f1234
        ;   XREF to: 004f128c (CONDITIONAL_JUMP)  ; LAB_004f128c
    FLD float ptr [0x01d76c68]          ; 004f1236 | DAT_01d76c68
    MOV EAX,0x1d78f7c                   ; 004f123c
    FLD float ptr [0x01d76c64]          ; 004f1241 | DAT_01d76c64
    FLD float ptr [0x01d76c60]          ; 004f1247 | DAT_01d76c60
    FLD float ptr [EAX + 0x8]           ; 004f124d | DAT_01d78f84 | DAT_01d78fc4
        ;   Label: LAB_004f124d
    FLD1                                ; 004f1250
    FDIVRP                              ; 004f1252
    FLD float ptr [EAX]                 ; 004f1254 | DAT_01d78f7c | DAT_01d78fbc
    FMUL float ptr [0x01d76c5c]         ; 004f1256 | DAT_01d76c5c
    FLD float ptr [EAX + 0x4]           ; 004f125c | DAT_01d78f80 | DAT_01d78fc0
    FMUL ST3                            ; 004f125f
    FXCH ST2                            ; 004f1261
    FSTP float ptr [EAX + 0xc]          ; 004f1263 | DAT_01d78f88 | DAT_01d78fc8
    FMUL float ptr [EAX + 0xc]          ; 004f1266 | DAT_01d78f88 | DAT_01d78fc8
    FXCH                                ; 004f1269
    FMUL float ptr [EAX + 0xc]          ; 004f126b | DAT_01d78f88 | DAT_01d78fc8
    ADD EAX,0x40                        ; 004f126e
    INC EDX                             ; 004f1271
    FLD ST4                             ; 004f1272
    FLD ST4                             ; 004f1274
    FADDP ST3,ST0                       ; 004f1276
    FADDP                               ; 004f1278
    FXCH                                ; 004f127a
    FSTP float ptr [EAX + -0x2c]        ; 004f127c | DAT_01d78f90
    FSTP float ptr [EAX + -0x28]        ; 004f127f | DAT_01d78f94
    CMP EDX,EBP                         ; 004f1282
    JL 0x004f124d                       ; 004f1284
        ;   XREF to: 004f124d (CONDITIONAL_JUMP)  ; LAB_004f124d
    FSTP ST0                            ; 004f1286
    FSTP ST0                            ; 004f1288
    FSTP ST0                            ; 004f128a
    PUSH EBP                            ; 004f128c
        ;   Label: LAB_004f128c
    PUSH 0x1d78f7c                      ; 004f128d | DAT_01d78f7c
    MOV dword ptr [0x01d76f78],EBP      ; 004f1292 | DAT_01d76f78
    CALL engine_mini3d.cpp_fillPolygon_FUN_004f2090 ; 004f1298
        ;   XREF to: 004f2090 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillPolygon_FUN_004f2090(float * vertices, int vertex_count)
    MOV EBP,dword ptr [0x01d76f78]      ; 004f129d | DAT_01d76f78
    ADD ESP,0x8                         ; 004f12a3
    MOV EBP,dword ptr [0x01d76f78]      ; 004f12a6 | DAT_01d76f78
    POP EBP                             ; 004f12ac
    POP EBX                             ; 004f12ad
    RET                                 ; 004f12ae

