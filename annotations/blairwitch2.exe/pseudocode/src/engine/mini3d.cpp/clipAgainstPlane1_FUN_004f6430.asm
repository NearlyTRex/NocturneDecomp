; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_clipAgainstPlane1_FUN_004f6430(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_mini3d.cpp_clipAndFillPolygon_FUN_004f6be0 at 004f6c49
;   engine_mini3d.cpp_clipBatchTriangle_FUN_004f6a70 at 004f6b08
;   engine_mini3d.cpp_drawSurfaceTriangle_FUN_004f8330 at 004f83fc
;
; Referenced Globals:
;   void* PTR_caseD_1_004f6418 = 004f64de
;   void* PTR_caseD_3_004f6420 = 004f64bc
;   undefined4 DAT_01d09b88
;   undefined4 DAT_01d09b8c
;   undefined4 DAT_01d09b98
;   undefined4 DAT_01d09b9c
;   undefined4 DAT_01d09ba0
;   undefined4 DAT_01d09bd8
;   undefined4 DAT_01d09be0
;
; Called Functions:
;   engine_mini3d.cpp_intersectClipPlane1_FUN_004f6090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6430
        ;   Label: engine_mini3d.cpp_clipAgainstPlane1_FUN_004f6430
    PUSH ESI                            ; 004f6431
    PUSH EDI                            ; 004f6432
    PUSH EBP                            ; 004f6433
    SUB ESP,0x8                         ; 004f6434
    MOV EBX,dword ptr [0x01d09b8c]      ; 004f6437 | DAT_01d09b8c
    XOR EDX,EDX                         ; 004f643d
    MOV ECX,dword ptr [0x01d09b88]      ; 004f643f | DAT_01d09b88
    MOV dword ptr [ESP],EDX             ; 004f6445
    TEST ECX,ECX                        ; 004f6448
    JLE 0x004f64d0                      ; 004f644a
        ;   XREF to: 004f64d0 (CONDITIONAL_JUMP)  ; LAB_004f64d0
    MOV EBP,0x1d09b98                   ; 004f6450
    MOV ECX,dword ptr [ESP]             ; 004f6455
        ;   Label: LAB_004f6455
    MOV EAX,[0x01d09b88]                ; 004f6458 | DAT_01d09b88
    INC ECX                             ; 004f645d
    CMP ECX,EAX                         ; 004f645e
    JNZ 0x004f6464                      ; 004f6460
        ;   XREF to: 004f6464 (CONDITIONAL_JUMP)  ; LAB_004f6464
    XOR ECX,EAX                         ; 004f6462
    FLD float ptr [EBP + 0x8]           ; 004f6464 | DAT_01d09ba0 | DAT_01d09be0
        ;   Label: LAB_004f6464
    MOV ESI,0x1d09b98                   ; 004f6467
    SHL ECX,0x6                         ; 004f646c
    MOV EDX,EBP                         ; 004f646f
    ADD ESI,ECX                         ; 004f6471
    FCHS                                ; 004f6473
    MOV dword ptr [ESP + 0x4],ESI       ; 004f6475
    XOR ECX,ECX                         ; 004f6479
    FCOMP float ptr [EBP]               ; 004f647b | DAT_01d09b98 | DAT_01d09bd8
    FNSTSW AX                           ; 004f647e
    SAHF                                ; 004f6480
    JC 0x004f6488                       ; 004f6481
        ;   XREF to: 004f6488 (CONDITIONAL_JUMP)  ; LAB_004f6488
    MOV ECX,0x1                         ; 004f6483
    MOV ESI,dword ptr [ESP + 0x4]       ; 004f6488
        ;   Label: LAB_004f6488
    FLD float ptr [ESI + 0x8]           ; 004f648c | DAT_01d09ba0
    FCHS                                ; 004f648f
    FCOMP float ptr [ESI]               ; 004f6491 | DAT_01d09b98
    FNSTSW AX                           ; 004f6493
    SAHF                                ; 004f6495
    JC 0x004f649b                       ; 004f6496
        ;   XREF to: 004f649b (CONDITIONAL_JUMP)  ; LAB_004f649b
    OR CL,0x2                           ; 004f6498
    CMP ECX,0x3                         ; 004f649b
        ;   Label: LAB_004f649b
    JA 0x004f64bc                       ; 004f649e
        ;   XREF to: 004f64bc (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f6414]  ; 004f64a0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 004f64a7
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 004f64a9
    MOV ECX,0x10                        ; 004f64ac
    LEA EDI,[ESI + 0x1d0ab98]           ; 004f64b1
    MOV ESI,EDX                         ; 004f64b7
    INC EBX                             ; 004f64b9
    MOVSD.REP ES:EDI,ESI                ; 004f64ba | DAT_01d09b98 | DAT_01d09b9c
    MOV ESI,dword ptr [ESP]             ; 004f64bc
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d09b88]      ; 004f64bf | DAT_01d09b88
    INC ESI                             ; 004f64c5
    ADD EBP,0x40                        ; 004f64c6
    MOV dword ptr [ESP],ESI             ; 004f64c9
    CMP ESI,EDI                         ; 004f64cc
    JL 0x004f6455                       ; 004f64ce
        ;   XREF to: 004f6455 (CONDITIONAL_JUMP)  ; LAB_004f6455
    MOV dword ptr [0x01d09b8c],EBX      ; 004f64d0 | DAT_01d09b8c
        ;   Label: LAB_004f64d0
    ADD ESP,0x8                         ; 004f64d6
    POP EBP                             ; 004f64d9
    POP EDI                             ; 004f64da
    POP ESI                             ; 004f64db
    POP EBX                             ; 004f64dc
    RET                                 ; 004f64dd
    MOV ECX,EBX                         ; 004f64de
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 004f64e0
    ADD ECX,0x1d0ab98                   ; 004f64e3
    PUSH ECX                            ; 004f64e9
    PUSH EDX                            ; 004f64ea | DAT_01d09b98
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f64eb
    PUSH ESI                            ; 004f64ef
    MOV dword ptr [0x01d09b8c],EBX      ; 004f64f0 | DAT_01d09b8c
    CALL engine_mini3d.cpp_intersectClipPlane1_FUN_004f6090 ; 004f64f6
        ;   XREF to: 004f6090 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_intersectClipPlane1_FUN_004f6090(float * from, float * to, float * out)
    MOV EBX,dword ptr [0x01d09b8c]      ; 004f64fb | DAT_01d09b8c
    ADD ESP,0xc                         ; 004f6501
    INC EBX                             ; 004f6504
    JMP 0x004f64bc                      ; 004f6505
        ;   XREF to: 004f64bc (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 004f6507
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 004f6509
    MOV ECX,0x10                        ; 004f650c
    LEA EDI,[ESI + 0x1d0ab98]           ; 004f6511
    MOV ESI,EDX                         ; 004f6517
    INC EBX                             ; 004f6519
    MOVSD.REP ES:EDI,ESI                ; 004f651a | DAT_01d09b98 | DAT_01d09b9c
    MOV ECX,EBX                         ; 004f651c
    SHL ECX,0x6                         ; 004f651e
    ADD ECX,0x1d0ab98                   ; 004f6521
    PUSH ECX                            ; 004f6527
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f6528
    PUSH ECX                            ; 004f652c
    PUSH EDX                            ; 004f652d | DAT_01d09b98
    MOV dword ptr [0x01d09b8c],EBX      ; 004f652e | DAT_01d09b8c
    CALL engine_mini3d.cpp_intersectClipPlane1_FUN_004f6090 ; 004f6534
        ;   XREF to: 004f6090 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_intersectClipPlane1_FUN_004f6090(float * from, float * to, float * out)
    MOV EBX,dword ptr [0x01d09b8c]      ; 004f6539 | DAT_01d09b8c
    ADD ESP,0xc                         ; 004f653f
    INC EBX                             ; 004f6542
    JMP 0x004f64bc                      ; 004f6543
        ;   XREF to: 004f64bc (UNCONDITIONAL_JUMP)  ; caseD_3

