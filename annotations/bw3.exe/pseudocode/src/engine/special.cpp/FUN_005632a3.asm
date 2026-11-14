; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_FUN_005632a3(SProjectedVertex *output,CVector3i *input)
;
; Parameters:
; SProjectedVertex * Stack[0x4]:4   output
; CVector3i *      Stack[0x8]:4   input
;
; XREF[61]:
;   core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409980 at 00409a0d
;   core_box.cpp_FUN_0041daf0 at 0041dc22
;   core_box.cpp_FUN_0041dcd0 at 0041dd4a
;   core_box.cpp_FUN_0041e100 at 0041e1ad
;   core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_004217c0 at 0042186f
;   core_charactr.cpp_FUN_0042d9f0 at 0042dbd9
;   core_cloth.cpp_FUN_0043f160 at 0043f246
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20 at 0044f09d
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_004540c0 at 0045415c
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0 at 0045ae69
;   ... and 51 more
;
; Referenced Globals:
;   undefined4 DAT_00604d68
;   undefined4 DAT_00604d6c
;   undefined4 DAT_00604d70
;   undefined4 DAT_00604d78
;   undefined4 DAT_00604d7c
;   undefined4 DAT_00604d80
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2cc
;   undefined4 DAT_01c6e2d0
;   undefined4 DAT_01c6e2d4
;   undefined4 DAT_01c6e2fc
;   ... and 8 more
;
; *****************************************************************************

section .text

    TEST dword ptr [0x01c6e2a0],0xffffffff ; 005632a3 | DAT_01c6e2a0
        ;   Label: engine_special.cpp_FUN_005632a3
    JZ 0x005633f1                       ; 005632ad
        ;   XREF to: 005633f1 (CONDITIONAL_JUMP)  ; LAB_005633f1
    MOV EBX,dword ptr [ESP + 0x8]       ; 005632b3
    MOV EAX,dword ptr [EBX]             ; 005632b7
    MOV ECX,dword ptr [EBX + 0x4]       ; 005632b9
    MOV EDX,dword ptr [EBX + 0x8]       ; 005632bc
    SUB EAX,dword ptr [0x01c6e2cc]      ; 005632bf | DAT_01c6e2cc
    SUB ECX,dword ptr [0x01c6e2d0]      ; 005632c5 | DAT_01c6e2d0
    SUB EDX,dword ptr [0x01c6e2d4]      ; 005632cb | DAT_01c6e2d4
    MOVD MM0,EAX                        ; 005632d1
    MOVD MM1,ECX                        ; 005632d4
    MOVD MM2,EDX                        ; 005632d7
    IMUL dword ptr [0x01c6e2fc]         ; 005632da | DAT_01c6e2fc
    MOV EBX,EAX                         ; 005632e0
    MOV ECX,EDX                         ; 005632e2
    MOVD EAX,MM1                        ; 005632e4
    IMUL dword ptr [0x01c6e308]         ; 005632e7 | DAT_01c6e308
    ADD EBX,EAX                         ; 005632ed
    ADC ECX,EDX                         ; 005632ef
    MOVD EAX,MM2                        ; 005632f1
    IMUL dword ptr [0x01c6e314]         ; 005632f4 | DAT_01c6e314
    ADD EAX,EBX                         ; 005632fa
    ADC EDX,ECX                         ; 005632fc
    SHRD EAX,EDX,0x10                   ; 005632fe
    MOVD MM4,EAX                        ; 00563302
    MOVD EAX,MM0                        ; 00563305
    IMUL dword ptr [0x01c6e300]         ; 00563308 | DAT_01c6e300
    MOV EBX,EAX                         ; 0056330e
    MOV ECX,EDX                         ; 00563310
    MOVD EAX,MM1                        ; 00563312
    IMUL dword ptr [0x01c6e30c]         ; 00563315 | DAT_01c6e30c
    ADD EBX,EAX                         ; 0056331b
    ADC ECX,EDX                         ; 0056331d
    MOVD EAX,MM2                        ; 0056331f
    IMUL dword ptr [0x01c6e318]         ; 00563322 | DAT_01c6e318
    ADD EAX,EBX                         ; 00563328
    ADC EDX,ECX                         ; 0056332a
    SHRD EAX,EDX,0x10                   ; 0056332c
    MOVD MM5,EAX                        ; 00563330
    MOVD EAX,MM0                        ; 00563333
    IMUL dword ptr [0x01c6e304]         ; 00563336 | DAT_01c6e304
    MOV EBX,EAX                         ; 0056333c
    MOV ECX,EDX                         ; 0056333e
    MOVD EAX,MM1                        ; 00563340
    IMUL dword ptr [0x01c6e310]         ; 00563343 | DAT_01c6e310
    ADD EBX,EAX                         ; 00563349
    ADC ECX,EDX                         ; 0056334b
    MOVD EAX,MM2                        ; 0056334d
    IMUL dword ptr [0x01c6e31c]         ; 00563350 | DAT_01c6e31c
    ADD EAX,EBX                         ; 00563356
    ADC EDX,ECX                         ; 00563358
    SHRD EAX,EDX,0x10                   ; 0056335a
    MOVD MM6,EAX                        ; 0056335e
    NEG EAX                             ; 00563361
    MOV EDX,EAX                         ; 00563363
    XOR EAX,EAX                         ; 00563365
    MOVD EBX,MM4                        ; 00563367
    MOVD ECX,MM6                        ; 0056336a
    CMP EBX,ECX                         ; 0056336d
    JLE 0x00563376                      ; 0056336f
        ;   XREF to: 00563376 (CONDITIONAL_JUMP)  ; LAB_00563376
    OR EAX,0x80000001                   ; 00563371
    CMP EBX,EDX                         ; 00563376
        ;   Label: LAB_00563376
    JGE 0x0056337f                      ; 00563378
        ;   XREF to: 0056337f (CONDITIONAL_JUMP)  ; LAB_0056337f
    OR EAX,0x80000002                   ; 0056337a
    MOVD EBX,MM5                        ; 0056337f
        ;   Label: LAB_0056337f
    CMP EBX,ECX                         ; 00563382
    JLE 0x0056338b                      ; 00563384
        ;   XREF to: 0056338b (CONDITIONAL_JUMP)  ; LAB_0056338b
    OR EAX,0x80000004                   ; 00563386
    CMP EBX,EDX                         ; 0056338b
        ;   Label: LAB_0056338b
    JGE 0x00563394                      ; 0056338d
        ;   XREF to: 00563394 (CONDITIONAL_JUMP)  ; LAB_00563394
    OR EAX,0x80000008                   ; 0056338f
    CMP ECX,0x0                         ; 00563394
        ;   Label: LAB_00563394
    JG 0x0056339e                       ; 00563397
        ;   XREF to: 0056339e (CONDITIONAL_JUMP)  ; LAB_0056339e
    OR EAX,0x80000010                   ; 00563399
    MOV EBX,dword ptr [ESP + 0x4]       ; 0056339e
        ;   Label: LAB_0056339e
    MOVD dword ptr [EBX],MM4            ; 005633a2
    MOVD dword ptr [EBX + 0x4],MM5      ; 005633a5
    MOVD dword ptr [EBX + 0x8],MM6      ; 005633a9
    TEST EAX,0xffffffff                 ; 005633ad
    JNZ 0x005633eb                      ; 005633b2
        ;   XREF to: 005633eb (CONDITIONAL_JUMP)  ; LAB_005633eb
    MOV EAX,0x7fffffff                  ; 005633b4
    XOR EDX,EDX                         ; 005633b9
    IDIV ECX                            ; 005633bb
    MOV dword ptr [EBX + 0xc],EAX       ; 005633bd
    MOVD EAX,MM4                        ; 005633c0
    IMUL dword ptr [0x01c6b598]         ; 005633c3 | DAT_01c6b598
    IDIV ECX                            ; 005633c9
    ADD EAX,dword ptr [0x01c6b5a0]      ; 005633cb | DAT_01c6b5a0
    MOV dword ptr [EBX + 0x10],EAX      ; 005633d1
    MOVD EAX,MM5                        ; 005633d4
    IMUL dword ptr [0x01c6b59c]         ; 005633d7 | DAT_01c6b59c
    IDIV ECX                            ; 005633dd
    ADD EAX,dword ptr [0x01c6b5a4]      ; 005633df | DAT_01c6b5a4
    MOV dword ptr [EBX + 0x14],EAX      ; 005633e5
    EMMS                                ; 005633e8
    RET                                 ; 005633ea
    MOV dword ptr [EBX + 0x10],EAX      ; 005633eb
        ;   Label: LAB_005633eb
    EMMS                                ; 005633ee
    RET                                 ; 005633f0
    PUSH ESI                            ; 005633f1
        ;   Label: LAB_005633f1
    PUSH EDI                            ; 005633f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005633f3
    MOV EDI,dword ptr [ESP + 0xc]       ; 005633f7
    MOV EAX,dword ptr [ESI]             ; 005633fb
    MOV EBX,dword ptr [ESI + 0x4]       ; 005633fd
    MOV ECX,dword ptr [ESI + 0x8]       ; 00563400
    SUB EAX,dword ptr [0x01c6e2cc]      ; 00563403 | DAT_01c6e2cc
    SUB EBX,dword ptr [0x01c6e2d0]      ; 00563409 | DAT_01c6e2d0
    SUB ECX,dword ptr [0x01c6e2d4]      ; 0056340f | DAT_01c6e2d4
    MOV [0x00604d68],EAX                ; 00563415 | DAT_00604d68
    MOV dword ptr [0x00604d6c],EBX      ; 0056341a | DAT_00604d6c
    MOV dword ptr [0x00604d70],ECX      ; 00563420 | DAT_00604d70
    IMUL dword ptr [0x01c6e2fc]         ; 00563426 | DAT_01c6e2fc
    MOV EBX,EAX                         ; 0056342c
    MOV ECX,EDX                         ; 0056342e
    MOV EAX,[0x00604d6c]                ; 00563430 | DAT_00604d6c
    IMUL dword ptr [0x01c6e308]         ; 00563435 | DAT_01c6e308
    ADD EBX,EAX                         ; 0056343b
    ADC ECX,EDX                         ; 0056343d
    MOV EAX,[0x00604d70]                ; 0056343f | DAT_00604d70
    IMUL dword ptr [0x01c6e314]         ; 00563444 | DAT_01c6e314
    ADD EAX,EBX                         ; 0056344a
    ADC EDX,ECX                         ; 0056344c
    SHRD EAX,EDX,0x10                   ; 0056344e
    MOV [0x00604d78],EAX                ; 00563452 | DAT_00604d78
    MOV EAX,[0x00604d68]                ; 00563457 | DAT_00604d68
    IMUL dword ptr [0x01c6e300]         ; 0056345c | DAT_01c6e300
    MOV EBX,EAX                         ; 00563462
    MOV ECX,EDX                         ; 00563464
    MOV EAX,[0x00604d6c]                ; 00563466 | DAT_00604d6c
    IMUL dword ptr [0x01c6e30c]         ; 0056346b | DAT_01c6e30c
    ADD EBX,EAX                         ; 00563471
    ADC ECX,EDX                         ; 00563473
    MOV EAX,[0x00604d70]                ; 00563475 | DAT_00604d70
    IMUL dword ptr [0x01c6e318]         ; 0056347a | DAT_01c6e318
    ADD EAX,EBX                         ; 00563480
    ADC EDX,ECX                         ; 00563482
    SHRD EAX,EDX,0x10                   ; 00563484
    MOV [0x00604d7c],EAX                ; 00563488 | DAT_00604d7c
    MOV EAX,[0x00604d68]                ; 0056348d | DAT_00604d68
    IMUL dword ptr [0x01c6e304]         ; 00563492 | DAT_01c6e304
    MOV EBX,EAX                         ; 00563498
    MOV ECX,EDX                         ; 0056349a
    MOV EAX,[0x00604d6c]                ; 0056349c | DAT_00604d6c
    IMUL dword ptr [0x01c6e310]         ; 005634a1 | DAT_01c6e310
    ADD EBX,EAX                         ; 005634a7
    ADC ECX,EDX                         ; 005634a9
    MOV EAX,[0x00604d70]                ; 005634ab | DAT_00604d70
    IMUL dword ptr [0x01c6e31c]         ; 005634b0 | DAT_01c6e31c
    ADD EAX,EBX                         ; 005634b6
    ADC EDX,ECX                         ; 005634b8
    SHRD EAX,EDX,0x10                   ; 005634ba
    MOV [0x00604d80],EAX                ; 005634be | DAT_00604d80
    NEG EAX                             ; 005634c3
    MOV EDX,EAX                         ; 005634c5
    XOR EAX,EAX                         ; 005634c7
    MOV EBX,dword ptr [0x00604d78]      ; 005634c9 | DAT_00604d78
    MOV ECX,dword ptr [0x00604d80]      ; 005634cf | DAT_00604d80
    CMP EBX,ECX                         ; 005634d5
    JLE 0x005634de                      ; 005634d7
        ;   XREF to: 005634de (CONDITIONAL_JUMP)  ; LAB_005634de
    OR EAX,0x80000001                   ; 005634d9
    CMP EBX,EDX                         ; 005634de
        ;   Label: LAB_005634de
    JGE 0x005634e7                      ; 005634e0
        ;   XREF to: 005634e7 (CONDITIONAL_JUMP)  ; LAB_005634e7
    OR EAX,0x80000002                   ; 005634e2
    MOV EBX,dword ptr [0x00604d7c]      ; 005634e7 | DAT_00604d7c
        ;   Label: LAB_005634e7
    CMP EBX,ECX                         ; 005634ed
    JLE 0x005634f6                      ; 005634ef
        ;   XREF to: 005634f6 (CONDITIONAL_JUMP)  ; LAB_005634f6
    OR EAX,0x80000004                   ; 005634f1
    CMP EBX,EDX                         ; 005634f6
        ;   Label: LAB_005634f6
    JGE 0x005634ff                      ; 005634f8
        ;   XREF to: 005634ff (CONDITIONAL_JUMP)  ; LAB_005634ff
    OR EAX,0x80000008                   ; 005634fa
    CMP ECX,0x0                         ; 005634ff
        ;   Label: LAB_005634ff
    JG 0x00563509                       ; 00563502
        ;   XREF to: 00563509 (CONDITIONAL_JUMP)  ; LAB_00563509
    OR EAX,0x80000010                   ; 00563504
    TEST EAX,0xffffffff                 ; 00563509
        ;   Label: LAB_00563509
    JNZ 0x00563558                      ; 0056350e
        ;   XREF to: 00563558 (CONDITIONAL_JUMP)  ; LAB_00563558
    MOV EAX,[0x00604d78]                ; 00563510 | DAT_00604d78
    MOV dword ptr [EDI],EAX             ; 00563515
    MOV dword ptr [EDI + 0x4],EBX       ; 00563517
    MOV dword ptr [EDI + 0x8],ECX       ; 0056351a
    MOV EAX,0x7fffffff                  ; 0056351d
    XOR EDX,EDX                         ; 00563522
    IDIV ECX                            ; 00563524
    MOV dword ptr [EDI + 0xc],EAX       ; 00563526
    MOV EAX,[0x00604d78]                ; 00563529 | DAT_00604d78
    IMUL dword ptr [0x01c6b598]         ; 0056352e | DAT_01c6b598
    IDIV ECX                            ; 00563534
    ADD EAX,dword ptr [0x01c6b5a0]      ; 00563536 | DAT_01c6b5a0
    MOV dword ptr [EDI + 0x10],EAX      ; 0056353c
    MOV EAX,[0x00604d7c]                ; 0056353f | DAT_00604d7c
    IMUL dword ptr [0x01c6b59c]         ; 00563544 | DAT_01c6b59c
    IDIV ECX                            ; 0056354a
    ADD EAX,dword ptr [0x01c6b5a4]      ; 0056354c | DAT_01c6b5a4
    MOV dword ptr [EDI + 0x14],EAX      ; 00563552
    POP EDI                             ; 00563555
    POP ESI                             ; 00563556
    RET                                 ; 00563557
    MOV EDX,dword ptr [0x00604d78]      ; 00563558 | DAT_00604d78
        ;   Label: LAB_00563558
    MOV dword ptr [EDI],EDX             ; 0056355e
    MOV dword ptr [EDI + 0x4],EBX       ; 00563560
    MOV dword ptr [EDI + 0x8],ECX       ; 00563563
    MOV dword ptr [EDI + 0x10],EAX      ; 00563566
    POP EDI                             ; 00563569
    POP ESI                             ; 0056356a
    RET                                 ; 0056356b

