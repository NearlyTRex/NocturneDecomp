; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_marquee_cpp_FUN_004e8180(CMarquee *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00618170
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_course.cpp_FUN_00438c40
;   core_marquee.cpp_CMarquee_renderLightBulb_FUN_004e7ff0
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8180
        ;   Label: core_marquee.cpp_FUN_004e8180
    PUSH EBP                            ; 004e8181
    SUB ESP,0xc0                        ; 004e8182
    MOV EBX,dword ptr [ESP + 0xcc]      ; 004e8188
    CMP dword ptr [EBX + 0x2f8],0x0     ; 004e818f
    JNZ 0x004e81a3                      ; 004e8196
        ;   XREF to: 004e81a3 (CONDITIONAL_JUMP)  ; LAB_004e81a3
    XOR EAX,EAX                         ; 004e8198
    ADD ESP,0xc0                        ; 004e819a
    POP EBP                             ; 004e81a0
    POP EBX                             ; 004e81a1
    RET                                 ; 004e81a2
    PUSH EDI                            ; 004e81a3
        ;   Label: LAB_004e81a3
    PUSH ESI                            ; 004e81a4
    PUSH 0x1                            ; 004e81a5
    MOV ECX,dword ptr [0x0060b280]      ; 004e81a7 | DAT_0060b280
    PUSH ECX                            ; 004e81ad
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004e81ae
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004e81b3
    PUSH 0xffff                         ; 004e81b6
    MOV ESI,dword ptr [0x0060b280]      ; 004e81bb | DAT_0060b280
    PUSH ESI                            ; 004e81c1
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004e81c2
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e81c7
    PUSH 0x617f2c                       ; 004e81ca
    MOV EDI,dword ptr [0x0060b280]      ; 004e81cf | DAT_0060b280
    PUSH EDI                            ; 004e81d5
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004e81d6
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EDX,dword ptr [0x00618170]      ; 004e81db | DAT_00618170
    ADD ESP,0x8                         ; 004e81e1
    MOV EBP,dword ptr [EDX + 0x1008]    ; 004e81e4
    LEA EAX,[EBX + 0x300]               ; 004e81ea
    TEST EBP,EBP                        ; 004e81f0
    JZ 0x004e82c6                       ; 004e81f2
        ;   XREF to: 004e82c6 (CONDITIONAL_JUMP)  ; LAB_004e82c6
    MOV EDX,dword ptr [EAX]             ; 004e81f8
    XOR EBP,EBP                         ; 004e81fa
    MOV dword ptr [ESP + 0xac],EDX      ; 004e81fc
    TEST EDX,EDX                        ; 004e8203
    JLE 0x004e82a5                      ; 004e8205
        ;   XREF to: 004e82a5 (CONDITIONAL_JUMP)  ; LAB_004e82a5
    MOV dword ptr [ESP + 0xb4],EAX      ; 004e820b
    LEA EAX,[ESP + 0x74]                ; 004e8212
        ;   Label: LAB_004e8212
    MOV ECX,dword ptr [ESP + 0xb4]      ; 004e8216
    MOV dword ptr [ESP + 0xc4],EBP      ; 004e821d
    PUSH EAX                            ; 004e8224
    LEA EAX,[ESP + 0x6c]                ; 004e8225
    FILD dword ptr [ESP + 0xc8]         ; 004e8229
    PUSH EAX                            ; 004e8230
    FSTP float ptr [ESP + 0xa0]         ; 004e8231
    PUSH dword ptr [ESP + 0xa0]         ; 004e8238
    PUSH ECX                            ; 004e823f
    CALL core_course.cpp_FUN_00438c40   ; 004e8240
        ;   XREF to: 00438c40 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00438c40(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 004e8245
    LEA EAX,[ESP + 0x68]                ; 004e8248
    PUSH EAX                            ; 004e824c
    PUSH EBX                            ; 004e824d
    LEA ESI,[ESP + 0x34]                ; 004e824e
    LEA EDI,[ESP + 0x1c]                ; 004e8252
    CALL core_actor.cpp_FUN_00408d70    ; 004e8256
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x34]                ; 004e825b
    LEA EAX,[ESP + 0x1c]                ; 004e825f
    ADD ESP,0x8                         ; 004e8263
    LEA EDX,[ESP + 0x68]                ; 004e8266
    MOVSD ES:EDI,ESI                    ; 004e826a
    MOVSD ES:EDI,ESI                    ; 004e826b
    MOVSD ES:EDI,ESI                    ; 004e826c
    CMP EDX,EAX                         ; 004e826d
    JZ 0x004e8289                       ; 004e826f
        ;   XREF to: 004e8289 (CONDITIONAL_JUMP)  ; LAB_004e8289
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e8271
    MOV dword ptr [ESP + 0x68],EAX      ; 004e8275
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e8279
    MOV dword ptr [ESP + 0x6c],EAX      ; 004e827d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e8281
    MOV dword ptr [ESP + 0x70],EAX      ; 004e8285
    LEA EAX,[ESP + 0x68]                ; 004e8289
        ;   Label: LAB_004e8289
    PUSH EAX                            ; 004e828d
    PUSH EBX                            ; 004e828e
    CALL core_marquee.cpp_CMarquee_renderLightBulb_FUN_004e7ff0 ; 004e828f
        ;   XREF to: 004e7ff0 (UNCONDITIONAL_CALL)  ; void core_marquee.cpp_CMarquee_renderLightBulb_FUN_004e7ff0(CMarquee * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004e8294
    INC EBP                             ; 004e8297
    CMP EBP,dword ptr [ESP + 0xac]      ; 004e8298
    JL 0x004e8212                       ; 004e829f
        ;   XREF to: 004e8212 (CONDITIONAL_JUMP)  ; LAB_004e8212
    PUSH 0x0                            ; 004e82a5
        ;   Label: LAB_004e82a5
    MOV EBX,dword ptr [0x0060b280]      ; 004e82a7 | DAT_0060b280
    PUSH EBX                            ; 004e82ad
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004e82ae
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EAX,0x1                         ; 004e82b3
    ADD ESP,0x8                         ; 004e82b8
    POP ESI                             ; 004e82bb
    POP EDI                             ; 004e82bc
    ADD ESP,0xc0                        ; 004e82bd
    POP EBP                             ; 004e82c3
    POP EBX                             ; 004e82c4
    RET                                 ; 004e82c5
    MOV EDX,dword ptr [EBX + 0x2fc]     ; 004e82c6
        ;   Label: LAB_004e82c6
    CMP EDX,0x1                         ; 004e82cc
    JNZ 0x004e8393                      ; 004e82cf
        ;   XREF to: 004e8393 (CONDITIONAL_JUMP)  ; LAB_004e8393
    FLD float ptr [EBX + 0x2d8]         ; 004e82d5
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e82db
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xbc]        ; 004e82e0
    CMP dword ptr [ESP + 0xbc],0x0      ; 004e82e7
    JLE 0x004e82a5                      ; 004e82ef
        ;   XREF to: 004e82a5 (CONDITIONAL_JUMP)  ; LAB_004e82a5
    MOV dword ptr [ESP + 0xb0],EAX      ; 004e82f1
    LEA EAX,[ESP + 0x8c]                ; 004e82f8
        ;   Label: LAB_004e82f8
    MOV dword ptr [ESP + 0xc4],EBP      ; 004e82ff
    PUSH EAX                            ; 004e8306
    LEA EAX,[ESP + 0x48]                ; 004e8307
    FILD dword ptr [ESP + 0xc8]         ; 004e830b
    PUSH EAX                            ; 004e8312
    FSTP float ptr [ESP + 0xa8]         ; 004e8313
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004e831a
    PUSH dword ptr [ESP + 0xa8]         ; 004e8321
    PUSH EAX                            ; 004e8328
    CALL core_course.cpp_FUN_00438c40   ; 004e8329
        ;   XREF to: 00438c40 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00438c40(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 004e832e
    LEA EAX,[ESP + 0x44]                ; 004e8331
    PUSH EAX                            ; 004e8335
    PUSH EBX                            ; 004e8336
    LEA ESI,[ESP + 0x28]                ; 004e8337
    LEA EDI,[ESP + 0x64]                ; 004e833b
    CALL core_actor.cpp_FUN_00408d70    ; 004e833f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x28]                ; 004e8344
    LEA EAX,[ESP + 0x64]                ; 004e8348
    ADD ESP,0x8                         ; 004e834c
    LEA EDX,[ESP + 0x44]                ; 004e834f
    MOVSD ES:EDI,ESI                    ; 004e8353
    MOVSD ES:EDI,ESI                    ; 004e8354
    MOVSD ES:EDI,ESI                    ; 004e8355
    CMP EDX,EAX                         ; 004e8356
    JZ 0x004e8372                       ; 004e8358
        ;   XREF to: 004e8372 (CONDITIONAL_JUMP)  ; LAB_004e8372
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004e835a
    MOV dword ptr [ESP + 0x44],EAX      ; 004e835e
    MOV EAX,dword ptr [ESP + 0x60]      ; 004e8362
    MOV dword ptr [ESP + 0x48],EAX      ; 004e8366
    MOV EAX,dword ptr [ESP + 0x64]      ; 004e836a
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e836e
    LEA EAX,[ESP + 0x44]                ; 004e8372
        ;   Label: LAB_004e8372
    PUSH EAX                            ; 004e8376
    PUSH EBX                            ; 004e8377
    CALL core_marquee.cpp_CMarquee_renderLightBulb_FUN_004e7ff0 ; 004e8378
        ;   XREF to: 004e7ff0 (UNCONDITIONAL_CALL)  ; void core_marquee.cpp_CMarquee_renderLightBulb_FUN_004e7ff0(CMarquee * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004e837d
    INC EBP                             ; 004e8380
    CMP EBP,dword ptr [ESP + 0xbc]      ; 004e8381
    JGE 0x004e82a5                      ; 004e8388
        ;   XREF to: 004e82a5 (CONDITIONAL_JUMP)  ; LAB_004e82a5
    JMP 0x004e82f8                      ; 004e838e
        ;   XREF to: 004e82f8 (UNCONDITIONAL_JUMP)  ; LAB_004e82f8
    TEST EDX,EDX                        ; 004e8393
        ;   Label: LAB_004e8393
    JNZ 0x004e82a5                      ; 004e8395
        ;   XREF to: 004e82a5 (CONDITIONAL_JUMP)  ; LAB_004e82a5
    FLD float ptr [EBX + 0x2d8]         ; 004e839b
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e83a1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV dword ptr [ESP + 0xc0],EBP      ; 004e83a6
    MOV EDX,dword ptr [EAX]             ; 004e83ad
    FISTP dword ptr [ESP + 0xa4]        ; 004e83af
    MOV dword ptr [ESP + 0xa8],EDX      ; 004e83b6
    TEST EDX,EDX                        ; 004e83bd
    JLE 0x004e82a5                      ; 004e83bf
        ;   XREF to: 004e82a5 (CONDITIONAL_JUMP)  ; LAB_004e82a5
    MOV EBP,dword ptr [ESP + 0xa4]      ; 004e83c5
    MOV dword ptr [ESP + 0xb8],EAX      ; 004e83cc
    MOV EAX,EBP                         ; 004e83d3
        ;   Label: LAB_004e83d3
    MOV EDX,EBP                         ; 004e83d5
    MOV ECX,dword ptr [EBX + 0x2dc]     ; 004e83d7
    SAR EDX,0x1f                        ; 004e83dd
    IDIV ECX                            ; 004e83e0
    TEST EDX,EDX                        ; 004e83e2
    JNZ 0x004e8407                      ; 004e83e4
        ;   XREF to: 004e8407 (CONDITIONAL_JUMP)  ; LAB_004e8407
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004e83e6
        ;   Label: LAB_004e83e6
    MOV EDX,dword ptr [ESP + 0xa8]      ; 004e83ed
    INC EAX                             ; 004e83f4
    INC EBP                             ; 004e83f5
    MOV dword ptr [ESP + 0xc0],EAX      ; 004e83f6
    CMP EAX,EDX                         ; 004e83fd
    JGE 0x004e82a5                      ; 004e83ff
        ;   XREF to: 004e82a5 (CONDITIONAL_JUMP)  ; LAB_004e82a5
    JMP 0x004e83d3                      ; 004e8405
        ;   XREF to: 004e83d3 (UNCONDITIONAL_JUMP)  ; LAB_004e83d3
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004e8407
        ;   Label: LAB_004e8407
    MOV dword ptr [ESP + 0xc4],EAX      ; 004e840e
    LEA EAX,[ESP + 0x80]                ; 004e8415
    MOV ESI,dword ptr [ESP + 0xb8]      ; 004e841c
    PUSH EAX                            ; 004e8423
    LEA EAX,[ESP + 0x54]                ; 004e8424
    FILD dword ptr [ESP + 0xc8]         ; 004e8428
    PUSH EAX                            ; 004e842f
    FSTP float ptr [ESP + 0xa4]         ; 004e8430
    PUSH dword ptr [ESP + 0xa4]         ; 004e8437
    PUSH ESI                            ; 004e843e
    CALL core_course.cpp_FUN_00438c40   ; 004e843f
        ;   XREF to: 00438c40 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00438c40(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 004e8444
    LEA EAX,[ESP + 0x50]                ; 004e8447
    PUSH EAX                            ; 004e844b
    PUSH EBX                            ; 004e844c
    LEA ESI,[ESP + 0x40]                ; 004e844d
    LEA EDI,[ESP + 0x10]                ; 004e8451
    CALL core_actor.cpp_FUN_00408d70    ; 004e8455
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x40]                ; 004e845a
    LEA EAX,[ESP + 0x10]                ; 004e845e
    ADD ESP,0x8                         ; 004e8462
    LEA EDX,[ESP + 0x50]                ; 004e8465
    MOVSD ES:EDI,ESI                    ; 004e8469
    MOVSD ES:EDI,ESI                    ; 004e846a
    MOVSD ES:EDI,ESI                    ; 004e846b
    CMP EDX,EAX                         ; 004e846c
    JZ 0x004e8488                       ; 004e846e
        ;   XREF to: 004e8488 (CONDITIONAL_JUMP)  ; LAB_004e8488
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e8470
    MOV dword ptr [ESP + 0x50],EAX      ; 004e8474
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e8478
    MOV dword ptr [ESP + 0x54],EAX      ; 004e847c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e8480
    MOV dword ptr [ESP + 0x58],EAX      ; 004e8484
    LEA EAX,[ESP + 0x50]                ; 004e8488
        ;   Label: LAB_004e8488
    PUSH EAX                            ; 004e848c
    PUSH EBX                            ; 004e848d
    CALL core_marquee.cpp_CMarquee_renderLightBulb_FUN_004e7ff0 ; 004e848e
        ;   XREF to: 004e7ff0 (UNCONDITIONAL_CALL)  ; void core_marquee.cpp_CMarquee_renderLightBulb_FUN_004e7ff0(CMarquee * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004e8493
    JMP 0x004e83e6                      ; 004e8496
        ;   XREF to: 004e83e6 (UNCONDITIONAL_JUMP)  ; LAB_004e83e6

