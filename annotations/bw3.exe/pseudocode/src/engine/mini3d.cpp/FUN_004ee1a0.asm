; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ee1a0(int param_1,int param_2,undefined4 param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005c80a5
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76c34
;   undefined4 DAT_01d76f60
;   undefined4 DAT_01d7a694
;   undefined4 DAT_01d7a698
;   undefined4 DAT_01ed3198
;   undefined4 DAT_02cf60c0
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_mini3d.cpp_FUN_004edcc0
;   engine_mini3d.cpp_FUN_004ede40
;   engine_mini3d.cpp_FUN_004eea30
;   engine_mini3d.cpp_FUN_004ef890
;   engine_mini3d.cpp_FUN_004f12b0
;   engine_mini3d.cpp_FUN_004f2430
;   engine_mini3d.cpp_FUN_004f2490
;   engine_mini3d.cpp_FUN_004f2e30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee1a0
        ;   Label: engine_mini3d.cpp_FUN_004ee1a0
    PUSH ESI                            ; 004ee1a1
    PUSH EDI                            ; 004ee1a2
    PUSH EBP                            ; 004ee1a3
    SUB ESP,0x14                        ; 004ee1a4
    MOV ESI,dword ptr [ESP + 0x28]      ; 004ee1a7
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ee1ab
    MOV EDX,dword ptr [0x01ed3198]      ; 004ee1af | DAT_01ed3198
    MOV ECX,dword ptr [0x01d76c34]      ; 004ee1b5 | DAT_01d76c34
    ADD EDX,EAX                         ; 004ee1bb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ee1bd
    MOV EBX,dword ptr [0x01d7a694]      ; 004ee1c1 | DAT_01d7a694
    ADD ECX,EAX                         ; 004ee1c7
    MOV dword ptr [0x01ed3198],EDX      ; 004ee1c9 | DAT_01ed3198
    MOV dword ptr [0x01d76c34],ECX      ; 004ee1cf | DAT_01d76c34
    TEST EBX,EBX                        ; 004ee1d5
    JNZ 0x004ee33f                      ; 004ee1d7
        ;   XREF to: 004ee33f (CONDITIONAL_JUMP)  ; LAB_004ee33f
    CALL engine_mini3d.cpp_FUN_004edcc0 ; 004ee1dd
        ;   XREF to: 004edcc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edcc0()
    CALL engine_mini3d.cpp_FUN_004f2430 ; 004ee1e2
        ;   XREF to: 004f2430 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2430()
    CMP dword ptr [0x02cf60c0],0x0      ; 004ee1e7 | DAT_02cf60c0
    JZ 0x004ee1fd                       ; 004ee1ee
        ;   XREF to: 004ee1fd (CONDITIONAL_JUMP)  ; LAB_004ee1fd
    CMP dword ptr [0x01c6cee8],0x0      ; 004ee1f0 | DAT_01c6cee8
    JNZ 0x004ee352                      ; 004ee1f7
        ;   XREF to: 004ee352 (CONDITIONAL_JUMP)  ; LAB_004ee352
    CALL engine_mini3d.cpp_FUN_004ede40 ; 004ee1fd
        ;   XREF to: 004ede40 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ede40()
        ;   Label: LAB_004ee1fd
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ee202
    CMP EAX,0x2710                      ; 004ee206
    JLE 0x004ee231                      ; 004ee20b
        ;   XREF to: 004ee231 (CONDITIONAL_JUMP)  ; LAB_004ee231
    PUSH EAX                            ; 004ee20d
    MOV EDX,0x5c8064                    ; 004ee20e
    MOV ECX,0x75f                       ; 004ee213
    PUSH 0x5c8079                       ; 004ee218
    MOV dword ptr [0x01d71de0],EDX      ; 004ee21d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004ee223 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ee229
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004ee22e
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004ee231
        ;   Label: LAB_004ee231
    MOV EBX,dword ptr [0x01d76f60]      ; 004ee235 | DAT_01d76f60
    XOR EBP,EBP                         ; 004ee23b
    TEST EDI,EDI                        ; 004ee23d
    JLE 0x004ee310                      ; 004ee23f
        ;   XREF to: 004ee310 (CONDITIONAL_JUMP)  ; LAB_004ee310
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ee245
    SHL EAX,0x6                         ; 004ee249
    XOR EDI,EDI                         ; 004ee24c
    MOV dword ptr [ESP + 0x10],EAX      ; 004ee24e
    PUSH EBX                            ; 004ee252
        ;   Label: LAB_004ee252
    PUSH ESI                            ; 004ee253
    CALL engine_mini3d.cpp_FUN_004eea30 ; 004ee254
        ;   XREF to: 004eea30 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004eea30()
    MOV EAX,dword ptr [ESI + 0x10]      ; 004ee259
    ADD ESP,0x8                         ; 004ee25c
    MOV EDX,EAX                         ; 004ee25f
    XOR ECX,ECX                         ; 004ee261
    AND EDX,0xff                        ; 004ee263
    MOV dword ptr [ESP + 0x4],ECX       ; 004ee269
    MOV dword ptr [ESP],EDX             ; 004ee26d
    MOV EDX,EAX                         ; 004ee270
    FILD qword ptr [ESP]                ; 004ee272
    SHR EDX,0x8                         ; 004ee275
    FMUL float ptr [0x005c80a5]         ; 004ee278 | DAT_005c80a5
    AND EDX,0xff                        ; 004ee27e
    MOV dword ptr [ESP + 0x4],ECX       ; 004ee284
    MOV dword ptr [ESP],EDX             ; 004ee288
    FILD qword ptr [ESP]                ; 004ee28b
    FMUL float ptr [0x005c80a5]         ; 004ee28e | DAT_005c80a5
    MOV dword ptr [ESP + 0x4],ECX       ; 004ee294
    MOV EDX,EAX                         ; 004ee298
    MOV dword ptr [ESP + 0xc],ECX       ; 004ee29a
    SHR EDX,0x10                        ; 004ee29e
    SHR EAX,0x18                        ; 004ee2a1
    AND EDX,0xff                        ; 004ee2a4
    AND EAX,0xff                        ; 004ee2aa
    MOV dword ptr [ESP],EDX             ; 004ee2af
    MOV dword ptr [ESP + 0x8],EAX       ; 004ee2b2
    FILD qword ptr [ESP]                ; 004ee2b6
    FMUL float ptr [0x005c80a5]         ; 004ee2b9 | DAT_005c80a5
    FILD qword ptr [ESP + 0x8]          ; 004ee2bf
    FMUL float ptr [0x005c80a5]         ; 004ee2c3 | DAT_005c80a5
    ADD EDI,0x40                        ; 004ee2c9
    ADD ESI,0x20                        ; 004ee2cc
    PUSH EBX                            ; 004ee2cf
    FXCH ST3                            ; 004ee2d0
    FSTP float ptr [EBX + 0x24]         ; 004ee2d2
    FXCH                                ; 004ee2d5
    FSTP float ptr [EBX + 0x28]         ; 004ee2d7
    FSTP float ptr [EBX + 0x2c]         ; 004ee2da
    FSTP float ptr [EBX + 0x30]         ; 004ee2dd
    MOV EAX,dword ptr [ESI + -0x8]      ; 004ee2e0
    MOV dword ptr [EBX + 0x1c],EAX      ; 004ee2e3
    MOV EAX,dword ptr [ESI + -0x4]      ; 004ee2e6
    MOV dword ptr [EBX + 0x20],EAX      ; 004ee2e9
    CALL engine_mini3d.cpp_FUN_004ef890 ; 004ee2ec
        ;   XREF to: 004ef890 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ef890()
    MOV EAX,[0x01d76f60]                ; 004ee2f1 | DAT_01d76f60
    ADD EBX,0x40                        ; 004ee2f6
    ADD ESP,0x4                         ; 004ee2f9
    MOV ECX,dword ptr [EDI + EAX*0x1 + -0x30] ; 004ee2fc
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ee300
    OR EBP,ECX                          ; 004ee304
    CMP EDI,EAX                         ; 004ee306
    JL 0x004ee252                       ; 004ee308
        ;   XREF to: 004ee252 (CONDITIONAL_JUMP)  ; LAB_004ee252
    MOV EAX,EAX                         ; 004ee30e
    CMP dword ptr [0x01d7a698],0x0      ; 004ee310 | DAT_01d7a698
        ;   Label: LAB_004ee310
    JZ 0x004ee374                       ; 004ee317
        ;   XREF to: 004ee374 (CONDITIONAL_JUMP)  ; LAB_004ee374
    MOV EBP,dword ptr [ESP + 0x34]      ; 004ee319
    PUSH EBP                            ; 004ee31d
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ee31e
    PUSH EAX                            ; 004ee322
    MOV EDX,dword ptr [ESP + 0x34]      ; 004ee323
    PUSH EDX                            ; 004ee327
    MOV ECX,dword ptr [0x01d76f60]      ; 004ee328 | DAT_01d76f60
    PUSH ECX                            ; 004ee32e
    CALL engine_mini3d.cpp_FUN_004f2e30 ; 004ee32f
        ;   XREF to: 004f2e30 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2e30()
    ADD ESP,0x10                        ; 004ee334
        ;   Label: LAB_004ee334
    ADD ESP,0x14                        ; 004ee337
        ;   Label: LAB_004ee337
    POP EBP                             ; 004ee33a
    POP EDI                             ; 004ee33b
    POP ESI                             ; 004ee33c
    POP EBX                             ; 004ee33d
    RET                                 ; 004ee33e
    MOV EBX,dword ptr [ESP + 0x34]      ; 004ee33f
        ;   Label: LAB_004ee33f
    PUSH EBX                            ; 004ee343
    MOV EDI,dword ptr [ESP + 0x34]      ; 004ee344
    PUSH EDI                            ; 004ee348
    PUSH EAX                            ; 004ee349
    PUSH ESI                            ; 004ee34a
    CALL engine_mini3d.cpp_FUN_004f2490 ; 004ee34b
        ;   XREF to: 004f2490 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2490()
    JMP 0x004ee334                      ; 004ee350
        ;   XREF to: 004ee334 (UNCONDITIONAL_JUMP)  ; LAB_004ee334
    MOV EBP,dword ptr [0x01c6e2b4]      ; 004ee352 | DAT_01c6e2b4
        ;   Label: LAB_004ee352
    PUSH EBP                            ; 004ee358
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ee359
    PUSH EAX                            ; 004ee35d
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ee35e
    PUSH EDX                            ; 004ee362
    MOV ECX,dword ptr [ESP + 0x38]      ; 004ee363
    PUSH ECX                            ; 004ee367
    PUSH ESI                            ; 004ee368
    CALL dword ptr [0x02cf60c0]         ; 004ee369 | DAT_02cf60c0
    ADD ESP,0x14                        ; 004ee36f
    JMP 0x004ee337                      ; 004ee372
        ;   XREF to: 004ee337 (UNCONDITIONAL_JUMP)  ; LAB_004ee337
    PUSH EBP                            ; 004ee374
        ;   Label: LAB_004ee374
    MOV ECX,dword ptr [ESP + 0x38]      ; 004ee375
    PUSH ECX                            ; 004ee379
    MOV EBX,dword ptr [ESP + 0x38]      ; 004ee37a
    PUSH EBX                            ; 004ee37e
    MOV ESI,dword ptr [ESP + 0x38]      ; 004ee37f
    PUSH ESI                            ; 004ee383
    MOV EDI,dword ptr [0x01d76f60]      ; 004ee384 | DAT_01d76f60
    PUSH EDI                            ; 004ee38a
    CALL engine_mini3d.cpp_FUN_004f12b0 ; 004ee38b
        ;   XREF to: 004f12b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f12b0()
    ADD ESP,0x14                        ; 004ee390
    ADD ESP,0x14                        ; 004ee393
    POP EBP                             ; 004ee396
    POP EDI                             ; 004ee397
    POP ESI                             ; 004ee398
    POP EBX                             ; 004ee399
    RET                                 ; 004ee39a

