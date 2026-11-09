; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00404240(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_006141d8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0070ca78
;   undefined4 DAT_0070ca98
;   undefined4 DAT_0070ca9c
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00404240
        ;   Label: engine_3d.c_renderPolygonSolidLitClampedOp17_FUN_00404240
    PUSH EDI                            ; 00404241
    PUSH EBP                            ; 00404242
    MOV EAX,dword ptr [ESP + 0x10]      ; 00404243
    ADD EAX,0x8                         ; 00404247
    MOV EBP,dword ptr [ESP + 0x10]      ; 0040424a
    PUSH EAX                            ; 0040424e
    ADD EBP,0x18                        ; 0040424f
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00404252
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00404257
    TEST EAX,EAX                        ; 0040425a
    JZ 0x0040441f                       ; 0040425c
        ;   XREF to: 0040441f (CONDITIONAL_JUMP)  ; LAB_0040441f
    CMP dword ptr [0x0070ca78],0x0      ; 00404262 | DAT_0070ca78
    JNZ 0x0040437f                      ; 00404269
        ;   XREF to: 0040437f (CONDITIONAL_JUMP)  ; LAB_0040437f
    CMP dword ptr [0x01c38b40],0x0      ; 0040426f | DAT_01c38b40
    JNZ 0x00404358                      ; 00404276
        ;   XREF to: 00404358 (CONDITIONAL_JUMP)  ; LAB_00404358
    CMP dword ptr [0x006141c0],0x20     ; 0040427c | DAT_006141c0
    JNZ 0x00404349                      ; 00404283
        ;   XREF to: 00404349 (CONDITIONAL_JUMP)  ; LAB_00404349
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00404289 | DAT_01c35e6c
        ;   Label: LAB_00404289
    MOV ESI,dword ptr [ESP + 0x10]      ; 00404293
        ;   Label: LAB_00404293
    PUSH ESI                            ; 00404297
    MOV EDI,0x13                        ; 00404298
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 0040429d
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00403a20()
    MOV EAX,[0x006141d8]                ; 004042a2 | DAT_006141d8
    ADD ESP,0x4                         ; 004042a7
    MOV dword ptr [0x01c38b54],EDI      ; 004042aa | DAT_01c38b54
    CMP EAX,0xff                        ; 004042b0
    JL 0x004043bc                       ; 004042b5
        ;   XREF to: 004043bc (CONDITIONAL_JUMP)  ; LAB_004043bc
    PUSH EBX                            ; 004042bb
        ;   Label: LAB_004042bb
    XOR ECX,ECX                         ; 004042bc
    XOR EDI,EDI                         ; 004042be
    XOR EBX,EBX                         ; 004042c0
    XOR ESI,ESI                         ; 004042c2
    MOV dword ptr [0x01c38b58],ECX      ; 004042c4 | DAT_01c38b58
    MOV ECX,EBP                         ; 004042ca
    MOV EAX,dword ptr [ESP + 0x14]      ; 004042cc
        ;   Label: LAB_004042cc
    MOV EAX,dword ptr [EAX + 0x4]       ; 004042d0
    LEA EAX,[EAX + EAX*0x2]             ; 004042d3
    CMP EBX,EAX                         ; 004042d6
    JGE 0x00404410                      ; 004042d8
        ;   XREF to: 00404410 (CONDITIONAL_JUMP)  ; LAB_00404410
    MOV EAX,dword ptr [ECX]             ; 004042de
    MOV dword ptr [ESI + 0x70ca98],EAX  ; 004042e0 | DAT_0070ca98 | DAT_0070ca9c
    MOV EBP,dword ptr [0x01c37788]      ; 004042e6 | DAT_01c37788
    MOV EAX,dword ptr [ECX + 0x4]       ; 004042ec
    MOV EDX,dword ptr [ECX + 0x8]       ; 004042ef
    TEST EBP,EBP                        ; 004042f2
    JZ 0x004043d5                       ; 004042f4
        ;   XREF to: 004043d5 (CONDITIONAL_JUMP)  ; LAB_004043d5
    CMP EAX,0x20000                     ; 004042fa
    JGE 0x00404306                      ; 004042ff
        ;   XREF to: 00404306 (CONDITIONAL_JUMP)  ; LAB_00404306
    MOV EAX,0x20000                     ; 00404301
    CMP EDX,0x20000                     ; 00404306
        ;   Label: LAB_00404306
    JGE 0x00404313                      ; 0040430c
        ;   XREF to: 00404313 (CONDITIONAL_JUMP)  ; LAB_00404313
    MOV EDX,0x20000                     ; 0040430e
    CMP EAX,0xfdffff                    ; 00404313
        ;   Label: LAB_00404313
    JLE 0x0040431f                      ; 00404318
        ;   XREF to: 0040431f (CONDITIONAL_JUMP)  ; LAB_0040431f
    MOV EAX,0xfdffff                    ; 0040431a
    CMP EDX,0xfdffff                    ; 0040431f
        ;   Label: LAB_0040431f
    JG 0x004043cb                       ; 00404325
        ;   XREF to: 004043cb (CONDITIONAL_JUMP)  ; LAB_004043cb
    IMUL EBP,dword ptr [ECX],0x30       ; 0040432b
        ;   Label: LAB_0040432b
    MOV dword ptr [EBP + 0x62202c],EAX  ; 0040432e | DAT_0062202c
    IMUL EAX,dword ptr [ECX],0x30       ; 00404334
    ADD ESI,0x4                         ; 00404337
    INC EDI                             ; 0040433a
    ADD EBX,0x3                         ; 0040433b
    ADD ECX,0xc                         ; 0040433e
    MOV dword ptr [EAX + 0x622030],EDX  ; 00404341 | DAT_00622030
    JMP 0x004042cc                      ; 00404347
        ;   XREF to: 004042cc (UNCONDITIONAL_JUMP)  ; LAB_004042cc
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00404349 | DAT_01c35e6c
        ;   Label: LAB_00404349
    JMP 0x00404293                      ; 00404353
        ;   XREF to: 00404293 (UNCONDITIONAL_JUMP)  ; LAB_00404293
    CMP dword ptr [0x006141c0],0x20     ; 00404358 | DAT_006141c0
        ;   Label: LAB_00404358
    JNZ 0x00404370                      ; 0040435f
        ;   XREF to: 00404370 (CONDITIONAL_JUMP)  ; LAB_00404370
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00404361 | DAT_01c35e6c
    JMP 0x00404293                      ; 0040436b
        ;   XREF to: 00404293 (UNCONDITIONAL_JUMP)  ; LAB_00404293
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00404370 | DAT_01c35e6c
        ;   Label: LAB_00404370
    JMP 0x00404293                      ; 0040437a
        ;   XREF to: 00404293 (UNCONDITIONAL_JUMP)  ; LAB_00404293
    CMP dword ptr [0x01c38b40],0x0      ; 0040437f | DAT_01c38b40
        ;   Label: LAB_0040437f
    JNZ 0x004043a4                      ; 00404386
        ;   XREF to: 004043a4 (CONDITIONAL_JUMP)  ; LAB_004043a4
    CMP dword ptr [0x006141c0],0x20     ; 00404388 | DAT_006141c0
    JZ 0x00404289                       ; 0040438f
        ;   XREF to: 00404289 (CONDITIONAL_JUMP)  ; LAB_00404289
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00404395 | DAT_01c35e6c
    JMP 0x00404293                      ; 0040439f
        ;   XREF to: 00404293 (UNCONDITIONAL_JUMP)  ; LAB_00404293
    CMP dword ptr [0x006141c0],0x20     ; 004043a4 | DAT_006141c0
        ;   Label: LAB_004043a4
    JNZ 0x00404370                      ; 004043ab
        ;   XREF to: 00404370 (CONDITIONAL_JUMP)  ; LAB_00404370
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004043ad | DAT_01c35e6c
    JMP 0x00404293                      ; 004043b7
        ;   XREF to: 00404293 (UNCONDITIONAL_JUMP)  ; LAB_00404293
    MOV dword ptr [0x01c38b54],0x33     ; 004043bc | DAT_01c38b54
        ;   Label: LAB_004043bc
    JMP 0x004042bb                      ; 004043c6
        ;   XREF to: 004042bb (UNCONDITIONAL_JUMP)  ; LAB_004042bb
    MOV EDX,0xfdffff                    ; 004043cb
        ;   Label: LAB_004043cb
    JMP 0x0040432b                      ; 004043d0
        ;   XREF to: 0040432b (UNCONDITIONAL_JUMP)  ; LAB_0040432b
    CMP EAX,0x10000                     ; 004043d5
        ;   Label: LAB_004043d5
    JGE 0x004043e1                      ; 004043da
        ;   XREF to: 004043e1 (CONDITIONAL_JUMP)  ; LAB_004043e1
    MOV EAX,0x10000                     ; 004043dc
    CMP EDX,0x10000                     ; 004043e1
        ;   Label: LAB_004043e1
    JGE 0x004043ee                      ; 004043e7
        ;   XREF to: 004043ee (CONDITIONAL_JUMP)  ; LAB_004043ee
    MOV EDX,0x10000                     ; 004043e9
    CMP EAX,0xfeffff                    ; 004043ee
        ;   Label: LAB_004043ee
    JLE 0x004043fa                      ; 004043f3
        ;   XREF to: 004043fa (CONDITIONAL_JUMP)  ; LAB_004043fa
    MOV EAX,0xfeffff                    ; 004043f5
    CMP EDX,0xfeffff                    ; 004043fa
        ;   Label: LAB_004043fa
    JLE 0x0040432b                      ; 00404400
        ;   XREF to: 0040432b (CONDITIONAL_JUMP)  ; LAB_0040432b
    MOV EDX,0xfeffff                    ; 00404406
    JMP 0x0040432b                      ; 0040440b
        ;   XREF to: 0040432b (UNCONDITIONAL_JUMP)  ; LAB_0040432b
    PUSH 0x70ca98                       ; 00404410 | DAT_0070ca98
        ;   Label: LAB_00404410
    PUSH EDI                            ; 00404415
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00404416
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040441b
    POP EBX                             ; 0040441e
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040441f
        ;   Label: LAB_0040441f
    MOV EDX,dword ptr [EDX + 0x4]       ; 00404423
    LEA EAX,[EDX*0x4 + 0x0]             ; 00404426
    SUB EAX,EDX                         ; 0040442d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040442f
    SHL EAX,0x2                         ; 00404433
    ADD EDX,0x18                        ; 00404436
    ADD EAX,EDX                         ; 00404439
    POP EBP                             ; 0040443b
    POP EDI                             ; 0040443c
    POP ESI                             ; 0040443d
    RET                                 ; 0040443e

