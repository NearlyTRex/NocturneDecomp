; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005520d0(int param_1,CVector3f *param_2,CVector3f *param_3,float *param_4)
;
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
;   core_dtri.cpp_rayTriangleIntersection_FUN_0046c620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005520d0
        ;   Label: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005520d0
    PUSH ESI                            ; 005520d1
    PUSH EDI                            ; 005520d2
    PUSH EBP                            ; 005520d3
    MOV EBP,ESP                         ; 005520d4
    SUB ESP,0x8c                        ; 005520d6
    AND ESP,0xfffffff8                  ; 005520dc
    MOV ESI,dword ptr [EBP + 0x14]      ; 005520df
    PUSH 0x0                            ; 005520e2
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005520e4
    PUSH EDX                            ; 005520e7
    MOV ECX,dword ptr [EBP + 0x18]      ; 005520e8
    PUSH ECX                            ; 005520eb
    LEA EAX,[ESP + 0x5c]                ; 005520ec
    PUSH EAX                            ; 005520f0
    MOV EDX,dword ptr [ESI + 0x14c]     ; 005520f1
    PUSH ESI                            ; 005520f7
    CALL dword ptr [EDX + 0x14]         ; 005520f8
    ADD ESP,0x8                         ; 005520fb
    PUSH EAX                            ; 005520fe
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550 ; 005520ff
        ;   XREF to: 0041d550 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    MOV dword ptr [ESP + 0x98],EAX      ; 00552104
    FLD float ptr [ESP + 0x98]          ; 0055210b
    ADD ESP,0x10                        ; 00552112
    FLDZ                                ; 00552115
    FXCH                                ; 00552117
    FSTP double ptr [ESP]               ; 00552119
    FCOMP double ptr [ESP]              ; 0055211c
    FNSTSW AX                           ; 0055211f
    SAHF                                ; 00552121
    JA 0x0055220a                       ; 00552122
        ;   XREF to: 0055220a (CONDITIONAL_JUMP)  ; LAB_0055220a
    FLD1                                ; 00552128
    FCOMP double ptr [ESP]              ; 0055212a
    FNSTSW AX                           ; 0055212d
    SAHF                                ; 0055212f
    JC 0x0055220a                       ; 00552130
        ;   XREF to: 0055220a (CONDITIONAL_JUMP)  ; LAB_0055220a
    MOV EBX,0x40000000                  ; 00552136
    MOV EAX,dword ptr [ESI + 0x2b22c]   ; 0055213b
    XOR EDI,EDI                         ; 00552141
    MOV dword ptr [ESP + 0x14],EBX      ; 00552143
    MOV dword ptr [ESP + 0x84],EAX      ; 00552147
    LEA EBX,[ESI + 0x7fa0]              ; 0055214e
    TEST EAX,EAX                        ; 00552154
    JLE 0x005521c5                      ; 00552156
        ;   XREF to: 005521c5 (CONDITIONAL_JUMP)  ; LAB_005521c5
    ADD ESI,0x294                       ; 00552158
    MOV EAX,dword ptr [EBX + 0x30]      ; 0055215e
        ;   Label: LAB_0055215e
    SHL EAX,0x5                         ; 00552161
    ADD EAX,ESI                         ; 00552164
    PUSH EAX                            ; 00552166
    MOV EAX,dword ptr [EBX + 0x24]      ; 00552167
    SHL EAX,0x5                         ; 0055216a
    ADD EAX,ESI                         ; 0055216d
    PUSH EAX                            ; 0055216f
    MOV EAX,dword ptr [EBX + 0x18]      ; 00552170
    SHL EAX,0x5                         ; 00552173
    ADD EAX,ESI                         ; 00552176
    PUSH EAX                            ; 00552178
    LEA EAX,[ESP + 0x24]                ; 00552179
    PUSH EAX                            ; 0055217d
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 0055217e
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00552183
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00552186
    PUSH ECX                            ; 00552189
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055218a
    PUSH EAX                            ; 0055218d
    LEA EAX,[ESP + 0x20]                ; 0055218e
    PUSH EAX                            ; 00552192
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0046c620 ; 00552193
        ;   XREF to: 0046c620 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0046c620(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0x94],EAX      ; 00552198
    FLD float ptr [ESP + 0x94]          ; 0055219f
    ADD ESP,0xc                         ; 005521a6
    FST float ptr [ESP + 0x10]          ; 005521a9
    FCOMP float ptr [ESP + 0x14]        ; 005521ad
    FNSTSW AX                           ; 005521b1
    SAHF                                ; 005521b3
    JC 0x00552217                       ; 005521b4
        ;   XREF to: 00552217 (CONDITIONAL_JUMP)  ; LAB_00552217
    MOV EAX,dword ptr [ESP + 0x84]      ; 005521b6
        ;   Label: LAB_005521b6
    INC EDI                             ; 005521bd
    ADD EBX,0x48                        ; 005521be
    CMP EDI,EAX                         ; 005521c1
    JL 0x0055215e                       ; 005521c3
        ;   XREF to: 0055215e (CONDITIONAL_JUMP)  ; LAB_0055215e
    FLD float ptr [ESP + 0x14]          ; 005521c5
        ;   Label: LAB_005521c5
    FLD1                                ; 005521c9
    FCOMPP                              ; 005521cb
    FNSTSW AX                           ; 005521cd
    SAHF                                ; 005521cf
    JBE 0x005521f1                      ; 005521d0
        ;   XREF to: 005521f1 (CONDITIONAL_JUMP)  ; LAB_005521f1
    MOV EDX,dword ptr [EBP + 0x20]      ; 005521d2
    LEA EAX,[ESP + 0x74]                ; 005521d5
    CMP EAX,EDX                         ; 005521d9
    JZ 0x005521f1                       ; 005521db
        ;   XREF to: 005521f1 (CONDITIONAL_JUMP)  ; LAB_005521f1
    MOV EAX,dword ptr [ESP + 0x74]      ; 005521dd
    MOV dword ptr [EDX],EAX             ; 005521e1
    MOV EAX,dword ptr [ESP + 0x78]      ; 005521e3
    MOV dword ptr [EDX + 0x4],EAX       ; 005521e7
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005521ea
    MOV dword ptr [EDX + 0x8],EAX       ; 005521ee
    MOV EAX,dword ptr [ESP + 0x14]      ; 005521f1
        ;   Label: LAB_005521f1
    MOV dword ptr [ESP + 0x80],EAX      ; 005521f5
    MOV EAX,dword ptr [ESP + 0x80]      ; 005521fc
        ;   Label: LAB_005521fc
    MOV ESP,EBP                         ; 00552203
    POP EBP                             ; 00552205
    POP EDI                             ; 00552206
    POP ESI                             ; 00552207
    POP EBX                             ; 00552208
    RET                                 ; 00552209
    MOV dword ptr [ESP + 0x80],0x40000000 ; 0055220a
        ;   Label: LAB_0055220a
    JMP 0x005521fc                      ; 00552215
        ;   XREF to: 005521fc (UNCONDITIONAL_JUMP)  ; LAB_005521fc
    FLD float ptr [ESP + 0x10]          ; 00552217
        ;   Label: LAB_00552217
    FLDZ                                ; 0055221b
    FXCH                                ; 0055221d
    FSTP double ptr [ESP + 0x8]         ; 0055221f
    FCOMP double ptr [ESP + 0x8]        ; 00552223
    FNSTSW AX                           ; 00552227
    SAHF                                ; 00552229
    JA 0x005521b6                       ; 0055222a
        ;   XREF to: 005521b6 (CONDITIONAL_JUMP)  ; LAB_005521b6
    FLD1                                ; 0055222c
    FCOMP double ptr [ESP + 0x8]        ; 0055222e
    FNSTSW AX                           ; 00552232
    SAHF                                ; 00552234
    JC 0x005521b6                       ; 00552235
        ;   XREF to: 005521b6 (CONDITIONAL_JUMP)  ; LAB_005521b6
    FLD float ptr [ESP + 0x3c]          ; 0055223b
    FLD float ptr [ESP + 0x40]          ; 0055223f
    FLD float ptr [ESP + 0x44]          ; 00552243
    MOV EAX,dword ptr [ESP + 0x10]      ; 00552247
    LEA EDX,[ESP + 0x68]                ; 0055224b
    FXCH ST2                            ; 0055224f
    FCHS                                ; 00552251
    FXCH                                ; 00552253
    FCHS                                ; 00552255
    FXCH ST2                            ; 00552257
    FCHS                                ; 00552259
    FXCH                                ; 0055225b
    FSTP float ptr [ESP + 0x68]         ; 0055225d
    FXCH                                ; 00552261
    FSTP float ptr [ESP + 0x6c]         ; 00552263
    MOV dword ptr [ESP + 0x14],EAX      ; 00552267
    LEA EAX,[ESP + 0x74]                ; 0055226b
    FSTP float ptr [ESP + 0x70]         ; 0055226f
    CMP EAX,EDX                         ; 00552273
    JZ 0x005521b6                       ; 00552275
        ;   XREF to: 005521b6 (CONDITIONAL_JUMP)  ; LAB_005521b6
    MOV EAX,dword ptr [ESP + 0x68]      ; 0055227b
    MOV dword ptr [ESP + 0x74],EAX      ; 0055227f
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00552283
    MOV dword ptr [ESP + 0x78],EAX      ; 00552287
    MOV EAX,dword ptr [ESP + 0x70]      ; 0055228b
    MOV dword ptr [ESP + 0x7c],EAX      ; 0055228f
    JMP 0x005521b6                      ; 00552293
        ;   XREF to: 005521b6 (UNCONDITIONAL_JUMP)  ; LAB_005521b6

