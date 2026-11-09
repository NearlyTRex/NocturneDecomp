; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_menu_cpp_FUN_004eb0e0(undefined4 *param_1,int param_2,int *param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_menu.cpp_FUN_004ebf10 at 004ec3d8
;   core_menu.cpp_FUN_004ecc70 at 004ecfa8
;   core_menu.cpp_FUN_004ed260 at 004edafc
;   core_menu.cpp_FUN_004ee1a0 at 004ee2f7
;   core_menu.cpp_FUN_004ee3f0 at 004ee627
;
; Referenced Globals:
;   undefined4 DAT_005dcacd
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01511cc0
;   undefined4 DAT_01511cc4
;   undefined4 DAT_01d02f84
;   undefined4 DAT_01d0612c
;   undefined4 DAT_01d06138
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_FUN_004a8df0
;   engine_font.cpp_FUN_004aaf00
;   engine_font.cpp_FUN_004aafb0
;   engine_font.cpp_FUN_004ab560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb0e0
        ;   Label: core_menu.cpp_FUN_004eb0e0
    PUSH ESI                            ; 004eb0e1
    PUSH EDI                            ; 004eb0e2
    PUSH EBP                            ; 004eb0e3
    SUB ESP,0x10                        ; 004eb0e4
    MOV ESI,dword ptr [ESP + 0x30]      ; 004eb0e7
    MOV EDX,dword ptr [ESP + 0x34]      ; 004eb0eb
    MOV EDI,dword ptr [0x01511cc0]      ; 004eb0ef | DAT_01511cc0
    TEST EDX,EDX                        ; 004eb0f5
    JNZ 0x004eb336                      ; 004eb0f7
        ;   XREF to: 004eb336 (CONDITIONAL_JUMP)  ; LAB_004eb336
    MOV EDX,dword ptr [ESP + 0x28]      ; 004eb0fd
        ;   Label: LAB_004eb0fd
    XOR EBP,EBP                         ; 004eb101
    TEST EDX,EDX                        ; 004eb103
    JLE 0x004eb1bd                      ; 004eb105
        ;   XREF to: 004eb1bd (CONDITIONAL_JUMP)  ; LAB_004eb1bd
    MOV EBX,dword ptr [ESP + 0x24]      ; 004eb10b
    MOV EAX,dword ptr [EBX]             ; 004eb10f
        ;   Label: LAB_004eb10f
    PUSH EAX                            ; 004eb111
    PUSH EDI                            ; 004eb112
    CALL engine_font.cpp_FUN_004aaf00   ; 004eb113
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    MOV dword ptr [ESP + 0x8],EAX       ; 004eb118
    ADD ESP,0x8                         ; 004eb11c
    PUSH 0x58                           ; 004eb11f
    PUSH EDI                            ; 004eb121
    CALL engine_font.cpp_FUN_004ab560   ; 004eb122
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004eb127
    MOV EDX,0x280                       ; 004eb12a
    SUB EDX,dword ptr [ESP]             ; 004eb12f
    MOV dword ptr [ESP + 0x4],EAX       ; 004eb132
    MOV EAX,EDX                         ; 004eb136
    SAR EDX,0x1f                        ; 004eb138
    SUB EAX,EDX                         ; 004eb13b
    SAR EAX,0x1                         ; 004eb13d
    PUSH -0x1                           ; 004eb13f
    PUSH 0x4                            ; 004eb141
    MOV dword ptr [ESP + 0x10],EAX      ; 004eb143
    LEA EAX,[ESI + 0x1]                 ; 004eb147
    PUSH EAX                            ; 004eb14a
    MOV EAX,dword ptr [ESP + 0x14]      ; 004eb14b
    PUSH EAX                            ; 004eb14f
    MOV EDX,dword ptr [EBX]             ; 004eb150
    PUSH EDX                            ; 004eb152
    PUSH EDI                            ; 004eb153
    CALL engine_font.cpp_FUN_004a8df0   ; 004eb154
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004eb159
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004eb15c
    MOV ECX,0xfc                        ; 004eb160
    MOV EDX,dword ptr [EAX]             ; 004eb165
    MOV dword ptr [ESP + 0xc],ECX       ; 004eb167
    CMP EBP,EDX                         ; 004eb16b
    JNZ 0x004eb177                      ; 004eb16d
        ;   XREF to: 004eb177 (CONDITIONAL_JUMP)  ; LAB_004eb177
    MOV dword ptr [ESP + 0xc],0xff      ; 004eb16f
    PUSH 0xffff                         ; 004eb177
        ;   Label: LAB_004eb177
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 004eb17c
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 004eb181
    PUSH -0x1                           ; 004eb184
    MOV EAX,dword ptr [ESP + 0x10]      ; 004eb186
    PUSH EAX                            ; 004eb18a
    PUSH ESI                            ; 004eb18b
    MOV EDX,dword ptr [ESP + 0x14]      ; 004eb18c
    PUSH EDX                            ; 004eb190
    MOV ECX,dword ptr [EBX]             ; 004eb191
    PUSH ECX                            ; 004eb193
    PUSH EDI                            ; 004eb194
    CALL engine_font.cpp_FUN_004a8df0   ; 004eb195
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004eb19a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004eb19d
    MOV EDX,dword ptr [ESP + 0x34]      ; 004eb1a1
    ADD ESI,EAX                         ; 004eb1a5
    TEST EDX,EDX                        ; 004eb1a7
    JNZ 0x004eb1ad                      ; 004eb1a9
        ;   XREF to: 004eb1ad (CONDITIONAL_JUMP)  ; LAB_004eb1ad
    ADD ESI,EAX                         ; 004eb1ab
    MOV ECX,dword ptr [ESP + 0x28]      ; 004eb1ad
        ;   Label: LAB_004eb1ad
    INC EBP                             ; 004eb1b1
    ADD EBX,0x4                         ; 004eb1b2
    CMP EBP,ECX                         ; 004eb1b5
    JL 0x004eb10f                       ; 004eb1b7
        ;   XREF to: 004eb10f (CONDITIONAL_JUMP)  ; LAB_004eb10f
    PUSH 0xffff                         ; 004eb1bd
        ;   Label: LAB_004eb1bd
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 004eb1c2
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 004eb1c7
    PUSH 0x5dcacd                       ; 004eb1ca | DAT_005dcacd
    MOV EBX,dword ptr [0x01511cc4]      ; 004eb1cf | DAT_01511cc4
    PUSH EBX                            ; 004eb1d5
    CALL engine_font.cpp_FUN_004aaf00   ; 004eb1d6
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    ADD ESP,0x8                         ; 004eb1db
    PUSH 0x5dcacd                       ; 004eb1de | DAT_005dcacd
    MOV ESI,dword ptr [0x01511cc4]      ; 004eb1e3 | DAT_01511cc4
    PUSH ESI                            ; 004eb1e9
    MOV EBX,EAX                         ; 004eb1ea
    CALL engine_font.cpp_FUN_004aafb0   ; 004eb1ec
        ;   XREF to: 004aafb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004aafb0(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 004eb1f1
    PUSH 0x0                            ; 004eb1f4
    PUSH 0xfa                           ; 004eb1f6
    MOV EAX,0x280                       ; 004eb1fb
    PUSH 0x0                            ; 004eb200
    SUB EAX,EBX                         ; 004eb202
    PUSH EAX                            ; 004eb204
    PUSH 0x5dcacd                       ; 004eb205 | DAT_005dcacd
    MOV EDI,dword ptr [0x01511cc4]      ; 004eb20a | DAT_01511cc4
    PUSH EDI                            ; 004eb210
    CALL engine_font.cpp_FUN_004a8df0   ; 004eb211
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004eb216
    PUSH 0x8000                         ; 004eb219
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 004eb21e
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 004eb223
    PUSH 0xffff                         ; 004eb226
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 004eb22b
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 004eb230
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004eb233
    MOV EAX,dword ptr [EAX]             ; 004eb237
    MOV EBP,dword ptr [ESP + 0x24]      ; 004eb239
    SHL EAX,0x2                         ; 004eb23d
    ADD EAX,EBP                         ; 004eb240
    MOV DL,0x3a                         ; 004eb242
    MOV ESI,dword ptr [EAX]             ; 004eb244
    XOR EBX,EBX                         ; 004eb246
    MOV AL,byte ptr [ESI]               ; 004eb248
        ;   Label: LAB_004eb248
    CMP AL,DL                           ; 004eb24a
    JZ 0x004eb260                       ; 004eb24c
        ;   XREF to: 004eb260 (CONDITIONAL_JUMP)  ; LAB_004eb260
    CMP AL,0x0                          ; 004eb24e
    JZ 0x004eb25e                       ; 004eb250
        ;   XREF to: 004eb25e (CONDITIONAL_JUMP)  ; LAB_004eb25e
    INC ESI                             ; 004eb252
    MOV AL,byte ptr [ESI]               ; 004eb253
    CMP AL,DL                           ; 004eb255
    JZ 0x004eb260                       ; 004eb257
        ;   XREF to: 004eb260 (CONDITIONAL_JUMP)  ; LAB_004eb260
    INC ESI                             ; 004eb259
    CMP AL,0x0                          ; 004eb25a
    JNZ 0x004eb248                      ; 004eb25c
        ;   XREF to: 004eb248 (CONDITIONAL_JUMP)  ; LAB_004eb248
    SUB ESI,ESI                         ; 004eb25e
        ;   Label: LAB_004eb25e
    TEST ESI,ESI                        ; 004eb260
        ;   Label: LAB_004eb260
    JZ 0x004eb269                       ; 004eb262
        ;   XREF to: 004eb269 (CONDITIONAL_JUMP)  ; LAB_004eb269
    MOV EBX,0x1                         ; 004eb264
    XOR EAX,EAX                         ; 004eb269
        ;   Label: LAB_004eb269
    PUSH 0x48                           ; 004eb26b
    MOV [0x01d06138],EAX                ; 004eb26d | DAT_01d06138
    MOV EAX,[0x00617dd4]                ; 004eb272 | DAT_00617dd4
    PUSH EAX                            ; 004eb277 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb278 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eb27a
    ADD ESP,0x8                         ; 004eb27d
    TEST EAX,EAX                        ; 004eb280
    JZ 0x004eb2a1                       ; 004eb282
        ;   XREF to: 004eb2a1 (CONDITIONAL_JUMP)  ; LAB_004eb2a1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004eb284
    MOV EDX,0x1                         ; 004eb288
    MOV ECX,dword ptr [EAX]             ; 004eb28d
    SUB ECX,EDX                         ; 004eb28f
    MOV dword ptr [0x01d06138],EDX      ; 004eb291 | DAT_01d06138
    MOV dword ptr [EAX],ECX             ; 004eb297
    TEST ECX,ECX                        ; 004eb299
    JL 0x004eb391                       ; 004eb29b
        ;   XREF to: 004eb391 (CONDITIONAL_JUMP)  ; LAB_004eb391
    PUSH 0x50                           ; 004eb2a1
        ;   Label: LAB_004eb2a1
    MOV EAX,[0x00617dd4]                ; 004eb2a3 | DAT_00617dd4
    PUSH EAX                            ; 004eb2a8 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb2a9 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eb2ab
    ADD ESP,0x8                         ; 004eb2ae
    TEST EAX,EAX                        ; 004eb2b1
    JZ 0x004eb2d8                       ; 004eb2b3
        ;   XREF to: 004eb2d8 (CONDITIONAL_JUMP)  ; LAB_004eb2d8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004eb2b5
    MOV EDI,0x1                         ; 004eb2b9
    MOV EBP,dword ptr [EAX]             ; 004eb2be
    MOV EDX,dword ptr [ESP + 0x28]      ; 004eb2c0
    ADD EBP,EDI                         ; 004eb2c4
    MOV dword ptr [0x01d06138],EDI      ; 004eb2c6 | DAT_01d06138
    MOV dword ptr [EAX],EBP             ; 004eb2cc
    CMP EBP,EDX                         ; 004eb2ce
    JL 0x004eb2d8                       ; 004eb2d0
        ;   XREF to: 004eb2d8 (CONDITIONAL_JUMP)  ; LAB_004eb2d8
    MOV dword ptr [EAX],0x0             ; 004eb2d2
    TEST EBX,EBX                        ; 004eb2d8
        ;   Label: LAB_004eb2d8
    JZ 0x004eb310                       ; 004eb2da
        ;   XREF to: 004eb310 (CONDITIONAL_JUMP)  ; LAB_004eb310
    PUSH 0x4b                           ; 004eb2dc
    MOV EAX,[0x00617dd4]                ; 004eb2de | DAT_00617dd4
    XOR ECX,ECX                         ; 004eb2e3
    PUSH EAX                            ; 004eb2e5 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb2e6 | DAT_01d02f84
    MOV dword ptr [0x01d0612c],ECX      ; 004eb2e8 | DAT_01d0612c
    CALL dword ptr [EDX + 0x4]          ; 004eb2ee
    ADD ESP,0x8                         ; 004eb2f1
    TEST EAX,EAX                        ; 004eb2f4
    JNZ 0x004eb3a2                      ; 004eb2f6
        ;   XREF to: 004eb3a2 (CONDITIONAL_JUMP)  ; LAB_004eb3a2
    PUSH 0x4d                           ; 004eb2fc
    MOV EAX,[0x00617dd4]                ; 004eb2fe | DAT_00617dd4
    PUSH EAX                            ; 004eb303 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb304 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eb306
    ADD ESP,0x8                         ; 004eb309
    TEST EAX,EAX                        ; 004eb30c
    JNZ 0x004eb328                      ; 004eb30e
        ;   XREF to: 004eb328 (CONDITIONAL_JUMP)  ; LAB_004eb328
    PUSH 0x1c                           ; 004eb310
        ;   Label: LAB_004eb310
    MOV EAX,[0x00617dd4]                ; 004eb312 | DAT_00617dd4
    PUSH EAX                            ; 004eb317 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb318 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eb31a
    ADD ESP,0x8                         ; 004eb31d
    TEST EAX,EAX                        ; 004eb320
    JZ 0x004eb3bb                       ; 004eb322
        ;   XREF to: 004eb3bb (CONDITIONAL_JUMP)  ; LAB_004eb3bb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004eb328
        ;   Label: LAB_004eb328
    MOV EAX,dword ptr [EAX]             ; 004eb32c
    ADD ESP,0x10                        ; 004eb32e
    POP EBP                             ; 004eb331
    POP EDI                             ; 004eb332
    POP ESI                             ; 004eb333
    POP EBX                             ; 004eb334
    RET                                 ; 004eb335
    PUSH EDX                            ; 004eb336
        ;   Label: LAB_004eb336
    PUSH EDI                            ; 004eb337
    CALL engine_font.cpp_FUN_004aaf00   ; 004eb338
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    MOV EDX,0x280                       ; 004eb33d
    SUB EDX,EAX                         ; 004eb342
    MOV EAX,EDX                         ; 004eb344
    SAR EDX,0x1f                        ; 004eb346
    SUB EAX,EDX                         ; 004eb349
    SAR EAX,0x1                         ; 004eb34b
    ADD ESP,0x8                         ; 004eb34d
    PUSH 0x0                            ; 004eb350
    PUSH 0x2                            ; 004eb352
    MOV EBX,EAX                         ; 004eb354
    LEA EAX,[ESI + 0x1]                 ; 004eb356
    PUSH EAX                            ; 004eb359
    LEA EAX,[EBX + 0x1]                 ; 004eb35a
    PUSH EAX                            ; 004eb35d
    MOV EBP,dword ptr [ESP + 0x44]      ; 004eb35e
    PUSH EBP                            ; 004eb362
    PUSH EDI                            ; 004eb363
    CALL engine_font.cpp_FUN_004a8df0   ; 004eb364
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004eb369
    PUSH 0x0                            ; 004eb36c
    PUSH 0xfa                           ; 004eb36e
    PUSH ESI                            ; 004eb373
    PUSH EBX                            ; 004eb374
    PUSH EBP                            ; 004eb375
    PUSH EDI                            ; 004eb376
    CALL engine_font.cpp_FUN_004a8df0   ; 004eb377
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004eb37c
    PUSH 0x58                           ; 004eb37f
    PUSH EDI                            ; 004eb381
    CALL engine_font.cpp_FUN_004ab560   ; 004eb382
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004eb387
    ADD ESI,EAX                         ; 004eb38a
    JMP 0x004eb0fd                      ; 004eb38c
        ;   XREF to: 004eb0fd (UNCONDITIONAL_JUMP)  ; LAB_004eb0fd
    MOV EAX,dword ptr [ESP + 0x28]      ; 004eb391
        ;   Label: LAB_004eb391
    SUB EAX,EDX                         ; 004eb395
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004eb397
    MOV dword ptr [EDX],EAX             ; 004eb39b
    JMP 0x004eb2a1                      ; 004eb39d
        ;   XREF to: 004eb2a1 (UNCONDITIONAL_JUMP)  ; LAB_004eb2a1
    MOV EBX,0x1                         ; 004eb3a2
        ;   Label: LAB_004eb3a2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004eb3a7
    MOV dword ptr [0x01d0612c],EBX      ; 004eb3ab | DAT_01d0612c
    MOV EAX,dword ptr [EAX]             ; 004eb3b1
    ADD ESP,0x10                        ; 004eb3b3
    POP EBP                             ; 004eb3b6
    POP EDI                             ; 004eb3b7
    POP ESI                             ; 004eb3b8
    POP EBX                             ; 004eb3b9
    RET                                 ; 004eb3ba
    MOV EAX,0xffffffff                  ; 004eb3bb
        ;   Label: LAB_004eb3bb
    ADD ESP,0x10                        ; 004eb3c0
    POP EBP                             ; 004eb3c3
    POP EDI                             ; 004eb3c4
    POP ESI                             ; 004eb3c5
    POP EBX                             ; 004eb3c6
    RET                                 ; 004eb3c7

