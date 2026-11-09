; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodPool_render_FUN_004e5180(CBloodPool *this_ptr,int expire_flag)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   expire_flag
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004e5cd0 at 004e5d6a
;
; Referenced Globals:
;   undefined4 DAT_005e40bd
;   undefined4 DAT_006016a8
;   undefined4 DAT_00612560
;   undefined4 DAT_0061e32c
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629064
;   undefined4 DAT_00629068
;   undefined4 DAT_0062906c
;   undefined4 DAT_00629094
;   undefined4 DAT_00629098
;   undefined4 DAT_0062909c
;   undefined4 DAT_006290c4
;   undefined4 DAT_006290c8
;   ... and 2 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5180
        ;   Label: core_gore.cpp_CBloodPool_render_FUN_004e5180
    PUSH ESI                            ; 004e5181
    PUSH EDI                            ; 004e5182
    PUSH EBP                            ; 004e5183
    SUB ESP,0x40                        ; 004e5184
    MOV ESI,dword ptr [ESP + 0x54]      ; 004e5187
    FLD float ptr [ESI + 0x18]          ; 004e518b
    FMUL double ptr [0x005e40bd]        ; 004e518e | DAT_005e40bd
    CALL crt_math.c_round_FUN_005c03a0  ; 004e5194
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x3c]        ; 004e5199
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e519d
    TEST EDX,EDX                        ; 004e51a1
    JL 0x004e543f                       ; 004e51a3
        ;   XREF to: 004e543f (CONDITIONAL_JUMP)  ; LAB_004e543f
    CMP EDX,0x1c                        ; 004e51a9
    JLE 0x004e51c5                      ; 004e51ac
        ;   XREF to: 004e51c5 (CONDITIONAL_JUMP)  ; LAB_004e51c5
    MOV EBX,0x1c                        ; 004e51ae
    MOV EDI,dword ptr [ESP + 0x58]      ; 004e51b3
    MOV dword ptr [ESP + 0x3c],EBX      ; 004e51b7
    TEST EDI,EDI                        ; 004e51bb
    JZ 0x004e51c5                       ; 004e51bd
        ;   XREF to: 004e51c5 (CONDITIONAL_JUMP)  ; LAB_004e51c5
    MOV dword ptr [ESI],0x1             ; 004e51bf
    LEA EAX,[ESI + 0x4]                 ; 004e51c5
        ;   Label: LAB_004e51c5
    PUSH EAX                            ; 004e51c8
    MOV EAX,[0x00612560]                ; 004e51c9 | DAT_00612560
    PUSH EAX                            ; 004e51ce | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004e51cf
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    IMUL EAX,dword ptr [ESI + 0x14],0x2b8 ; 004e51d4
    ADD ESP,0x8                         ; 004e51db
    MOV EBX,0x61e32c                    ; 004e51de | DAT_0061e32c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e51e3
    ADD EBX,EAX                         ; 004e51e7
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e51e9
    SUB EAX,EDX                         ; 004e51f0
    SHL EAX,0x3                         ; 004e51f2
    ADD EAX,EBX                         ; 004e51f5
    PUSH EAX                            ; 004e51f7
    MOV ECX,dword ptr [0x00612560]      ; 004e51f8 | DAT_00612560
    PUSH ECX                            ; 004e51fe | DAT_01bc120c
    XOR EDI,EDI                         ; 004e51ff
    MOV EBX,0xbfaa9fbe                  ; 004e5201
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e5206
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EBP,EBX                         ; 004e520b
    LEA EAX,[ESP + 0x20]                ; 004e520d
    ADD ESP,0x8                         ; 004e5211
    MOV EDX,dword ptr [0x00612560]      ; 004e5214 | DAT_00612560
    MOV dword ptr [ESP + 0x18],EBX      ; 004e521a
    MOV dword ptr [ESP + 0x20],EBX      ; 004e521e
    LEA EBX,[ESP + 0x30]                ; 004e5222
    MOV dword ptr [ESP + 0x1c],EDI      ; 004e5226
    FLD float ptr [EAX]                 ; 004e522a
    FMUL float ptr [0x006016a8]         ; 004e522c | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e5232
    FLD float ptr [EAX + 0x4]           ; 004e5234
    FMUL float ptr [0x006016a8]         ; 004e5237 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e523d
    FLD float ptr [EAX + 0x8]           ; 004e5240
    FMUL float ptr [0x006016a8]         ; 004e5243 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e5249
    LEA EAX,[ESP + 0x30]                ; 004e524c
    PUSH EAX                            ; 004e5250
    MOV EAX,dword ptr [EDX]             ; 004e5251 | DAT_01bc120c
    PUSH EAX                            ; 004e5253
    CALL engine_special.cpp_FUN_00580173 ; 004e5254
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3faa9fbe                  ; 004e5259
    LEA EBX,[ESP + 0x14]                ; 004e525e
    MOV EDX,dword ptr [0x00612560]      ; 004e5262 | DAT_00612560
    ADD ESP,0x8                         ; 004e5268
    MOV ECX,EBP                         ; 004e526b
    MOV dword ptr [ESP + 0x18],EAX      ; 004e526d
    MOV dword ptr [ESP + 0x1c],EDI      ; 004e5271
    LEA EAX,[ESP + 0x18]                ; 004e5275
    MOV dword ptr [ESP + 0x20],ECX      ; 004e5279
    FLD float ptr [EAX]                 ; 004e527d
    FMUL float ptr [0x006016a8]         ; 004e527f | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e5285
    FLD float ptr [EAX + 0x4]           ; 004e5287
    FMUL float ptr [0x006016a8]         ; 004e528a | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e5290
    FLD float ptr [EAX + 0x8]           ; 004e5293
    FMUL float ptr [0x006016a8]         ; 004e5296 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e529c
    LEA EAX,[ESP + 0xc]                 ; 004e529f
    PUSH EAX                            ; 004e52a3
    MOV EAX,dword ptr [EDX]             ; 004e52a4 | DAT_01bc120c
    ADD EAX,0x30                        ; 004e52a6
    PUSH EAX                            ; 004e52a9
    CALL engine_special.cpp_FUN_00580173 ; 004e52aa
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3faa9fbe                  ; 004e52af
    LEA EAX,[ESP + 0x20]                ; 004e52b4
    ADD ESP,0x8                         ; 004e52b8
    MOV EDX,dword ptr [0x00612560]      ; 004e52bb | DAT_00612560
    MOV dword ptr [ESP + 0x18],EBX      ; 004e52c1
    MOV EBP,EBX                         ; 004e52c5
    MOV dword ptr [ESP + 0x20],EBX      ; 004e52c7
    LEA EBX,[ESP + 0x24]                ; 004e52cb
    MOV dword ptr [ESP + 0x1c],EDI      ; 004e52cf
    FLD float ptr [EAX]                 ; 004e52d3
    FMUL float ptr [0x006016a8]         ; 004e52d5 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e52db
    FLD float ptr [EAX + 0x4]           ; 004e52dd
    FMUL float ptr [0x006016a8]         ; 004e52e0 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e52e6
    FLD float ptr [EAX + 0x8]           ; 004e52e9
    FMUL float ptr [0x006016a8]         ; 004e52ec | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e52f2
    LEA EAX,[ESP + 0x24]                ; 004e52f5
    PUSH EAX                            ; 004e52f9
    MOV EAX,dword ptr [EDX]             ; 004e52fa | DAT_01bc120c
    ADD EAX,0x60                        ; 004e52fc
    PUSH EAX                            ; 004e52ff
    CALL engine_special.cpp_FUN_00580173 ; 004e5300
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0xbfaa9fbe                  ; 004e5305
    LEA EBX,[ESP + 0x8]                 ; 004e530a
    MOV EDX,dword ptr [0x00612560]      ; 004e530e | DAT_00612560
    ADD ESP,0x8                         ; 004e5314
    MOV ECX,EBP                         ; 004e5317
    MOV dword ptr [ESP + 0x18],EAX      ; 004e5319
    MOV dword ptr [ESP + 0x1c],EDI      ; 004e531d
    LEA EAX,[ESP + 0x18]                ; 004e5321
    MOV dword ptr [ESP + 0x20],ECX      ; 004e5325
    FLD float ptr [EAX]                 ; 004e5329
    FMUL float ptr [0x006016a8]         ; 004e532b | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e5331
    FLD float ptr [EAX + 0x4]           ; 004e5333
    FMUL float ptr [0x006016a8]         ; 004e5336 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e533c
    FLD float ptr [EAX + 0x8]           ; 004e533f
    FMUL float ptr [0x006016a8]         ; 004e5342 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e5348
    MOV EAX,ESP                         ; 004e534b
    PUSH EAX                            ; 004e534d
    MOV EAX,dword ptr [EDX]             ; 004e534e | DAT_01bc120c
    ADD EAX,0x90                        ; 004e5350
    PUSH EAX                            ; 004e5355
    CALL engine_special.cpp_FUN_00580173 ; 004e5356
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x629034                    ; 004e535b | DAT_00629034
    MOV ECX,0x629038                    ; 004e5360 | DAT_00629038
    MOV EDX,0x62903c                    ; 004e5365 | DAT_0062903c
    MOV EAX,dword ptr [ESI + 0x10]      ; 004e536a
    ADD ESP,0x8                         ; 004e536d
    CMP EAX,0x1                         ; 004e5370
    JNC 0x004e547d                      ; 004e5373
        ;   XREF to: 004e547d (CONDITIONAL_JUMP)  ; LAB_004e547d
    MOV dword ptr [EBX],0x2000          ; 004e5379 | DAT_00629034
        ;   Label: LAB_004e5379
    MOV dword ptr [ECX],0x0             ; 004e537f | DAT_00629038
    MOV dword ptr [EDX],0x0             ; 004e5385 | DAT_0062903c
    MOV EBX,0x629064                    ; 004e538b | DAT_00629064
        ;   Label: LAB_004e538b
    MOV EDX,0x629068                    ; 004e5390 | DAT_00629068
    MOV EAX,dword ptr [ESI + 0x10]      ; 004e5395
    MOV ECX,0x62906c                    ; 004e5398 | DAT_0062906c
    CMP EAX,0x1                         ; 004e539d
    JNC 0x004e54be                      ; 004e53a0
        ;   XREF to: 004e54be (CONDITIONAL_JUMP)  ; LAB_004e54be
    MOV dword ptr [EBX],0x2000          ; 004e53a6 | DAT_00629064
        ;   Label: LAB_004e53a6
    MOV dword ptr [EDX],0x0             ; 004e53ac | DAT_00629068
    MOV dword ptr [ECX],0x0             ; 004e53b2 | DAT_0062906c
    MOV ECX,0x629094                    ; 004e53b8 | DAT_00629094
        ;   Label: LAB_004e53b8
    MOV EBX,0x629098                    ; 004e53bd | DAT_00629098
    MOV EAX,dword ptr [ESI + 0x10]      ; 004e53c2
    MOV EDX,0x62909c                    ; 004e53c5 | DAT_0062909c
    CMP EAX,0x1                         ; 004e53ca
    JNC 0x004e54ff                      ; 004e53cd
        ;   XREF to: 004e54ff (CONDITIONAL_JUMP)  ; LAB_004e54ff
    MOV dword ptr [ECX],0x2000          ; 004e53d3 | DAT_00629094
        ;   Label: LAB_004e53d3
    MOV dword ptr [EBX],0x0             ; 004e53d9 | DAT_00629098
    MOV dword ptr [EDX],0x0             ; 004e53df | DAT_0062909c
    MOV EDX,0x6290c4                    ; 004e53e5 | DAT_006290c4
        ;   Label: LAB_004e53e5
    MOV ECX,0x6290c8                    ; 004e53ea | DAT_006290c8
    MOV EAX,dword ptr [ESI + 0x10]      ; 004e53ef
    MOV EBX,0x6290cc                    ; 004e53f2 | DAT_006290cc
    CMP EAX,0x1                         ; 004e53f7
    JC 0x004e550b                       ; 004e53fa
        ;   XREF to: 004e550b (CONDITIONAL_JUMP)  ; LAB_004e550b
    JBE 0x004e5522                      ; 004e5400
        ;   XREF to: 004e5522 (CONDITIONAL_JUMP)  ; LAB_004e5522
    CMP EAX,0x2                         ; 004e5406
    JNZ 0x004e550b                      ; 004e5409
        ;   XREF to: 004e550b (CONDITIONAL_JUMP)  ; LAB_004e550b
    XOR EBX,EBX                         ; 004e540f
    MOV dword ptr [0x006290c8],EBX      ; 004e5411 | DAT_006290c8
    MOV dword ptr [0x006290cc],EBX      ; 004e5417 | DAT_006290cc
    MOV dword ptr [0x006290c4],EBX      ; 004e541d | DAT_006290c4
    PUSH 0x1cd0e40                      ; 004e5423
        ;   Label: LAB_004e5423
    MOV ECX,dword ptr [0x00612560]      ; 004e5428 | DAT_00612560
    PUSH ECX                            ; 004e542e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004e542f
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004e5434
    ADD ESP,0x40                        ; 004e5437
    POP EBP                             ; 004e543a
    POP EDI                             ; 004e543b
    POP ESI                             ; 004e543c
    POP EBX                             ; 004e543d
    RET                                 ; 004e543e
    XOR EBP,EBP                         ; 004e543f
        ;   Label: LAB_004e543f
    MOV dword ptr [ESP + 0x3c],EBP      ; 004e5441
    JMP 0x004e51c5                      ; 004e5445
        ;   XREF to: 004e51c5 (UNCONDITIONAL_JUMP)  ; LAB_004e51c5
    MOV EDX,0x7f80                      ; 004e544a
        ;   Label: LAB_004e544a
    MOV dword ptr [0x0062903c],EDI      ; 004e544f | DAT_0062903c
    MOV dword ptr [0x00629034],EDI      ; 004e5455 | DAT_00629034
    MOV dword ptr [0x00629038],EDX      ; 004e545b | DAT_00629038
    JMP 0x004e538b                      ; 004e5461
        ;   XREF to: 004e538b (UNCONDITIONAL_JUMP)  ; LAB_004e538b
    MOV dword ptr [0x00629038],EDI      ; 004e5466 | DAT_00629038
        ;   Label: LAB_004e5466
    MOV dword ptr [0x0062903c],EDI      ; 004e546c | DAT_0062903c
    MOV dword ptr [0x00629034],EDI      ; 004e5472 | DAT_00629034
    JMP 0x004e538b                      ; 004e5478
        ;   XREF to: 004e538b (UNCONDITIONAL_JUMP)  ; LAB_004e538b
    JBE 0x004e544a                      ; 004e547d
        ;   XREF to: 004e544a (CONDITIONAL_JUMP)  ; LAB_004e544a
        ;   Label: LAB_004e547d
    CMP EAX,0x2                         ; 004e547f
    JZ 0x004e5466                       ; 004e5482
        ;   XREF to: 004e5466 (CONDITIONAL_JUMP)  ; LAB_004e5466
    JMP 0x004e5379                      ; 004e5484
        ;   XREF to: 004e5379 (UNCONDITIONAL_JUMP)  ; LAB_004e5379
    MOV EDX,0x7f80                      ; 004e5489
        ;   Label: LAB_004e5489
    XOR EAX,EAX                         ; 004e548e
    MOV dword ptr [0x00629068],EDX      ; 004e5490 | DAT_00629068
    MOV [0x0062906c],EAX                ; 004e5496 | DAT_0062906c
    MOV [0x00629064],EAX                ; 004e549b | DAT_00629064
    JMP 0x004e53b8                      ; 004e54a0
        ;   XREF to: 004e53b8 (UNCONDITIONAL_JUMP)  ; LAB_004e53b8
    XOR EBX,EBX                         ; 004e54a5
        ;   Label: LAB_004e54a5
    MOV dword ptr [0x00629068],EBX      ; 004e54a7 | DAT_00629068
    MOV dword ptr [0x0062906c],EBX      ; 004e54ad | DAT_0062906c
    MOV dword ptr [0x00629064],EBX      ; 004e54b3 | DAT_00629064
    JMP 0x004e53b8                      ; 004e54b9
        ;   XREF to: 004e53b8 (UNCONDITIONAL_JUMP)  ; LAB_004e53b8
    JBE 0x004e5489                      ; 004e54be
        ;   XREF to: 004e5489 (CONDITIONAL_JUMP)  ; LAB_004e5489
        ;   Label: LAB_004e54be
    CMP EAX,0x2                         ; 004e54c0
    JZ 0x004e54a5                       ; 004e54c3
        ;   XREF to: 004e54a5 (CONDITIONAL_JUMP)  ; LAB_004e54a5
    JMP 0x004e53a6                      ; 004e54c5
        ;   XREF to: 004e53a6 (UNCONDITIONAL_JUMP)  ; LAB_004e53a6
    MOV EDX,0x7f80                      ; 004e54ca
        ;   Label: LAB_004e54ca
    XOR EAX,EAX                         ; 004e54cf
    MOV dword ptr [0x00629098],EDX      ; 004e54d1 | DAT_00629098
    MOV [0x0062909c],EAX                ; 004e54d7 | DAT_0062909c
    MOV [0x00629094],EAX                ; 004e54dc | DAT_00629094
    JMP 0x004e53e5                      ; 004e54e1
        ;   XREF to: 004e53e5 (UNCONDITIONAL_JUMP)  ; LAB_004e53e5
    XOR EBX,EBX                         ; 004e54e6
        ;   Label: LAB_004e54e6
    MOV dword ptr [0x00629098],EBX      ; 004e54e8 | DAT_00629098
    MOV dword ptr [0x0062909c],EBX      ; 004e54ee | DAT_0062909c
    MOV dword ptr [0x00629094],EBX      ; 004e54f4 | DAT_00629094
    JMP 0x004e53e5                      ; 004e54fa
        ;   XREF to: 004e53e5 (UNCONDITIONAL_JUMP)  ; LAB_004e53e5
    JBE 0x004e54ca                      ; 004e54ff
        ;   XREF to: 004e54ca (CONDITIONAL_JUMP)  ; LAB_004e54ca
        ;   Label: LAB_004e54ff
    CMP EAX,0x2                         ; 004e5501
    JZ 0x004e54e6                       ; 004e5504
        ;   XREF to: 004e54e6 (CONDITIONAL_JUMP)  ; LAB_004e54e6
    JMP 0x004e53d3                      ; 004e5506
        ;   XREF to: 004e53d3 (UNCONDITIONAL_JUMP)  ; LAB_004e53d3
    MOV dword ptr [EDX],0x2000          ; 004e550b | DAT_006290c4
        ;   Label: LAB_004e550b
    MOV dword ptr [ECX],0x0             ; 004e5511 | DAT_006290c8
    MOV dword ptr [EBX],0x0             ; 004e5517 | DAT_006290cc
    JMP 0x004e5423                      ; 004e551d
        ;   XREF to: 004e5423 (UNCONDITIONAL_JUMP)  ; LAB_004e5423
    MOV EAX,0x7f80                      ; 004e5522
        ;   Label: LAB_004e5522
    XOR EBP,EBP                         ; 004e5527
    MOV [0x006290c8],EAX                ; 004e5529 | DAT_006290c8
    MOV dword ptr [0x006290cc],EBP      ; 004e552e | DAT_006290cc
    MOV dword ptr [0x006290c4],EBP      ; 004e5534 | DAT_006290c4
    JMP 0x004e5423                      ; 004e553a
        ;   XREF to: 004e5423 (UNCONDITIONAL_JUMP)  ; LAB_004e5423

