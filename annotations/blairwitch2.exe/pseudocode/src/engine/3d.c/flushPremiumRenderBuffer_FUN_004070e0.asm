; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_004070e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_006141d8
;   undefined4 DAT_0070caf8
;   undefined4 DAT_0070cafc
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b4c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   crt_stdlib.c__qsort_FUN_005b78b8
;   engine_3d.c_setBlendMode_FUN_00406df0
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_texture.cpp_loadTextureAndGetData_FUN_00574e80
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004070e0
        ;   Label: engine_3d.c_flushPremiumRenderBuffer_FUN_004070e0
    SUB ESP,0xc                         ; 004070e1
    CMP dword ptr [0x0070caf8],0x0      ; 004070e4 | DAT_0070caf8
    JZ 0x00407266                       ; 004070eb
        ;   XREF to: 00407266 (CONDITIONAL_JUMP)  ; LAB_00407266
    PUSH EDI                            ; 004070f1
    PUSH ESI                            ; 004070f2
    PUSH EBX                            ; 004070f3
    MOV ECX,dword ptr [0x0070cafc]      ; 004070f4 | DAT_0070cafc
    TEST ECX,ECX                        ; 004070fa
    JLE 0x00407120                      ; 004070fc
        ;   XREF to: 00407120 (CONDITIONAL_JUMP)  ; LAB_00407120
    MOV EDX,0x70cb00                    ; 004070fe
    LEA EBX,[ECX*0x4 + 0x0]             ; 00407103
    XOR EAX,EAX                         ; 0040710a
    MOV dword ptr [EAX + 0x7b7960],EDX  ; 0040710c
        ;   Label: LAB_0040710c
    ADD EAX,0x4                         ; 00407112
    ADD EDX,0x118                       ; 00407115
    CMP EAX,EBX                         ; 0040711b
    JL 0x0040710c                       ; 0040711d
        ;   XREF to: 0040710c (CONDITIONAL_JUMP)  ; LAB_0040710c
    NOP                                 ; 0040711f
    PUSH 0x4070a0                       ; 00407120
        ;   Label: LAB_00407120
    PUSH 0x4                            ; 00407125
    MOV EBX,dword ptr [0x0070cafc]      ; 00407127 | DAT_0070cafc
    PUSH EBX                            ; 0040712d
    PUSH 0x7b7960                       ; 0040712e
    CALL crt_stdlib.c__qsort_FUN_005b78b8 ; 00407133
        ;   XREF to: 005b78b8 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__qsort_FUN_005b78b8(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
    MOV ESI,dword ptr [0x01c38b40]      ; 00407138 | DAT_01c38b40
    ADD ESP,0x10                        ; 0040713e
    TEST ESI,ESI                        ; 00407141
    JNZ 0x0040727a                      ; 00407143
        ;   XREF to: 0040727a (CONDITIONAL_JUMP)  ; LAB_0040727a
    CMP dword ptr [0x006141c0],0x20     ; 00407149 | DAT_006141c0
    JNZ 0x0040726b                      ; 00407150
        ;   XREF to: 0040726b (CONDITIONAL_JUMP)  ; LAB_0040726b
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00407156 | DAT_01c35e6c
    MOV EDI,0x1                         ; 00407160
        ;   Label: LAB_00407160
    MOV ESI,0x1e7                       ; 00407165
    MOV EAX,[0x0070cafc]                ; 0040716a | DAT_0070cafc
    XOR EBP,EBP                         ; 0040716f
    MOV dword ptr [0x01c38b58],EDI      ; 00407171 | DAT_01c38b58
    MOV dword ptr [ESP + 0x10],EBP      ; 00407177
    MOV dword ptr [0x01c38b54],ESI      ; 0040717b | DAT_01c38b54
    TEST EAX,EAX                        ; 00407181
    JLE 0x0040724c                      ; 00407183
        ;   XREF to: 0040724c (CONDITIONAL_JUMP)  ; LAB_0040724c
    MOV dword ptr [ESP + 0xc],EBP       ; 00407189
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040718d
        ;   Label: LAB_0040718d
    MOV EAX,dword ptr [EAX + 0x7b7960]  ; 00407191
    MOV dword ptr [ESP + 0x14],EAX      ; 00407197
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040719b
    MOV ECX,dword ptr [EDX]             ; 0040719f
    XOR EAX,EAX                         ; 004071a1
    TEST ECX,ECX                        ; 004071a3
    JLE 0x004071e6                      ; 004071a5
        ;   XREF to: 004071e6 (CONDITIONAL_JUMP)  ; LAB_004071e6
    MOV EBX,EDX                         ; 004071a7
    XOR EBP,EBP                         ; 004071a9
    IMUL EDX,EAX,0x30                   ; 004071ab
        ;   Label: LAB_004071ab
    MOV ECX,0xc                         ; 004071ae
    LEA ESI,[EBX + 0x4]                 ; 004071b3
    LEA EDI,[EDX + 0x622014]            ; 004071b6
    MOVSD.REP ES:EDI,ESI                ; 004071bc
    MOV CX,word ptr [EDX + 0x622040]    ; 004071be
    XOR ECX,0xffffffff                  ; 004071c5
    ADD EBP,0x4                         ; 004071c8
    MOV word ptr [EDX + 0x622040],CX    ; 004071cb
    MOV EDX,dword ptr [ESP + 0x14]      ; 004071d2
    MOV dword ptr [EBP + 0x70ca94],EAX  ; 004071d6
    INC EAX                             ; 004071dc
    MOV ESI,dword ptr [EDX]             ; 004071dd
    ADD EBX,0x30                        ; 004071df
    CMP EAX,ESI                         ; 004071e2
    JL 0x004071ab                       ; 004071e4
        ;   XREF to: 004071ab (CONDITIONAL_JUMP)  ; LAB_004071ab
    MOV EAX,dword ptr [ESP + 0x14]      ; 004071e6
        ;   Label: LAB_004071e6
    ADD EAX,0xc4                        ; 004071ea
    PUSH EAX                            ; 004071ef
    CALL engine_texture.cpp_loadTextureAndGetData_FUN_00574e80 ; 004071f0
        ;   XREF to: 00574e80 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_loadTextureAndGetData_FUN_00574e80(SMRGLTextureBasic * texture_info)
    ADD ESP,0x4                         ; 004071f5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004071f8
    MOV EAX,dword ptr [EAX + 0x110]     ; 004071fc
    MOV [0x01c38b4c],EAX                ; 00407202 | DAT_01c38b4c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00407207
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0040720b
    MOV [0x006141d8],EAX                ; 00407211 | DAT_006141d8
    MOV EAX,dword ptr [ESP + 0x14]      ; 00407216
    PUSH 0x70ca98                       ; 0040721a
    MOV EDX,dword ptr [EAX]             ; 0040721f
    PUSH EDX                            ; 00407221
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00407222
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407227
    MOV ESI,dword ptr [0x0070cafc]      ; 0040722a | DAT_0070cafc
    MOV ECX,dword ptr [ESP + 0xc]       ; 00407230
    MOV EBX,dword ptr [ESP + 0x10]      ; 00407234
    ADD ECX,0x4                         ; 00407238
    INC EBX                             ; 0040723b
    MOV dword ptr [ESP + 0xc],ECX       ; 0040723c
    MOV dword ptr [ESP + 0x10],EBX      ; 00407240
    CMP EBX,ESI                         ; 00407244
    JL 0x0040718d                       ; 00407246
        ;   XREF to: 0040718d (CONDITIONAL_JUMP)  ; LAB_0040718d
    XOR EDI,EDI                         ; 0040724c
        ;   Label: LAB_0040724c
    PUSH EDI                            ; 0040724e
    MOV dword ptr [0x0070cafc],EDI      ; 0040724f | DAT_0070cafc
    MOV dword ptr [0x0070caf8],EDI      ; 00407255 | DAT_0070caf8
    CALL engine_3d.c_setBlendMode_FUN_00406df0 ; 0040725b
        ;   XREF to: 00406df0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406df0(int blend_mode)
    ADD ESP,0x4                         ; 00407260
    POP EBX                             ; 00407263
    POP ESI                             ; 00407264
    POP EDI                             ; 00407265
    ADD ESP,0xc                         ; 00407266
        ;   Label: LAB_00407266
    POP EBP                             ; 00407269
    RET                                 ; 0040726a
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 0040726b | DAT_01c35e6c
        ;   Label: LAB_0040726b
    JMP 0x00407160                      ; 00407275
        ;   XREF to: 00407160 (UNCONDITIONAL_JUMP)  ; LAB_00407160
    CMP dword ptr [0x006141c0],0x20     ; 0040727a | DAT_006141c0
        ;   Label: LAB_0040727a
    JNZ 0x00407292                      ; 00407281
        ;   XREF to: 00407292 (CONDITIONAL_JUMP)  ; LAB_00407292
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00407283 | DAT_01c35e6c
    JMP 0x00407160                      ; 0040728d
        ;   XREF to: 00407160 (UNCONDITIONAL_JUMP)  ; LAB_00407160
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00407292 | DAT_01c35e6c
        ;   Label: LAB_00407292
    JMP 0x00407160                      ; 0040729c
        ;   XREF to: 00407160 (UNCONDITIONAL_JUMP)  ; LAB_00407160

