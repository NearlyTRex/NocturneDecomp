; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_00473080(CVector3f *start_point,CVector3f *end_point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   start_point
; CVector3f *      Stack[0x8]:4   end_point
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   double DOUBLE_0057eaa2 = 0.000878906456455297
;   undefined4 DOUBLE_0057eaa2+4
;   undefined4 DAT_0059ca4c
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;   undefined4 DAT_005c5044
;   undefined4 DAT_005c5048
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00409290
;   engine_matrix.c_transformToCache_FUN_004cd210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473080
        ;   Label: shape_edittool.cpp_draw3DInterpolatedLine_FUN_00473080
    PUSH ESI                            ; 00473081
    PUSH EDI                            ; 00473082
    SUB ESP,0x30                        ; 00473083
    MOV EDI,dword ptr [ESP + 0x40]      ; 00473086
    MOV ESI,dword ptr [ESP + 0x44]      ; 0047308a
    LEA EBX,[ESP + 0x18]                ; 0047308e
    MOV EAX,EDI                         ; 00473092
    FLD float ptr [EAX]                 ; 00473094
    FMUL float ptr [0x0059ca4c]         ; 00473096 | DAT_0059ca4c
    FISTP dword ptr [EBX]               ; 0047309c
    FLD float ptr [EAX + 0x4]           ; 0047309e
    FMUL float ptr [0x0059ca4c]         ; 004730a1 | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x4]         ; 004730a7
    FLD float ptr [EAX + 0x8]           ; 004730aa
    FMUL float ptr [0x0059ca4c]         ; 004730ad | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x8]         ; 004730b3
    LEA EAX,[ESP + 0x18]                ; 004730b6
    PUSH EAX                            ; 004730ba
    PUSH 0x0                            ; 004730bb
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 004730bd
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [0x0057eaa2]          ; 004730c2 | DOUBLE_0057eaa2
    FLD float ptr [ESI]                 ; 004730c8
    FMUL ST1                            ; 004730ca
    ADD ESP,0x8                         ; 004730cc
    FSTP float ptr [ESP + 0xc]          ; 004730cf
    FLD float ptr [ESI + 0x4]           ; 004730d3
    FMUL ST1                            ; 004730d6
    FSTP float ptr [ESP + 0x10]         ; 004730d8
    FMUL float ptr [ESI + 0x8]          ; 004730dc
    FSTP float ptr [ESP + 0x14]         ; 004730df
    FLD float ptr [0x0057eaa6]          ; 004730e3 | DOUBLE_0057eaa2+4
    FLD float ptr [EDI]                 ; 004730e9
    FMUL ST1                            ; 004730eb
    FSTP float ptr [ESP]                ; 004730ed
    FLD float ptr [EDI + 0x4]           ; 004730f0
    FMUL ST1                            ; 004730f3
    FSTP float ptr [ESP + 0x4]          ; 004730f5
    FMUL float ptr [EDI + 0x8]          ; 004730f9
    LEA EBX,[ESP + 0x18]                ; 004730fc
    LEA EAX,[ESP + 0x24]                ; 00473100
    FLD float ptr [ESP]                 ; 00473104
    FADD float ptr [ESP + 0xc]          ; 00473107
    FLD float ptr [ESP + 0x4]           ; 0047310b
    FXCH                                ; 0047310f
    FSTP float ptr [ESP + 0x24]         ; 00473111
    FADD float ptr [ESP + 0x10]         ; 00473115
    FXCH                                ; 00473119
    FST float ptr [ESP + 0x8]           ; 0047311b
    FADD float ptr [ESP + 0x14]         ; 0047311f
    FXCH                                ; 00473123
    FSTP float ptr [ESP + 0x28]         ; 00473125
    FSTP float ptr [ESP + 0x2c]         ; 00473129
    FLD float ptr [EAX]                 ; 0047312d
    FMUL float ptr [0x0059ca4c]         ; 0047312f | DAT_0059ca4c
    FISTP dword ptr [EBX]               ; 00473135
    FLD float ptr [EAX + 0x4]           ; 00473137
    FMUL float ptr [0x0059ca4c]         ; 0047313a | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x4]         ; 00473140
    FLD float ptr [EAX + 0x8]           ; 00473143
    FMUL float ptr [0x0059ca4c]         ; 00473146 | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x8]         ; 0047314c
    LEA EAX,[ESP + 0x18]                ; 0047314f
    PUSH EAX                            ; 00473153
    PUSH 0x1                            ; 00473154
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 00473156
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0047315b
    MOV ESI,0x5c5044                    ; 0047315e | DAT_005c5044
    SUB ESP,0x30                        ; 00473163
    MOV ECX,0xc                         ; 00473166
    MOV EDI,ESP                         ; 0047316b
    MOVSD.REP ES:EDI,ESI                ; 0047316d | DAT_005c5044 | DAT_005c5048
    SUB ESP,0x30                        ; 0047316f
    MOV ECX,0xc                         ; 00473172
    MOV ESI,0x5c5014                    ; 00473177 | DAT_005c5014
    MOV EDI,ESP                         ; 0047317c
    MOVSD.REP ES:EDI,ESI                ; 0047317e | DAT_005c5014 | DAT_005c5018
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00409290 ; 00473180
        ;   XREF to: 00409290 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00409290(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00473185
    ADD ESP,0x30                        ; 00473188
    POP EDI                             ; 0047318b
    POP ESI                             ; 0047318c
    POP EBX                             ; 0047318d
    RET                                 ; 0047318e

