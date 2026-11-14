; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_clipAgainstPlane3_FUN_00515410(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_mini3d.cpp_clipAndFillPolygon_FUN_005159c0 at 00515a45
;   engine_mini3d.cpp_clipBatchTriangle_FUN_00515850 at 00515904
;   engine_mini3d.cpp_drawSurfaceTriangle_FUN_00517240 at 00517326
;
; Referenced Globals:
;   void* PTR_caseD_1_005153fc = 005154bf
;   void* PTR_caseD_3_00515404 = 0051549d
;   undefined4 DAT_01d227f4
;   undefined4 DAT_01d227f8
;   undefined4 DAT_01d23ffc
;   undefined4 DAT_01d24000
;   undefined4 DAT_01d24004
;   undefined4 DAT_01d24040
;   undefined4 DAT_01d24044
;   undefined4 DAT_01d247fc
;   undefined4 DAT_01d24800
;
; Called Functions:
;   engine_mini3d.cpp_intersectClipPlane3_FUN_00514fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515410
        ;   Label: engine_mini3d.cpp_clipAgainstPlane3_FUN_00515410
    PUSH ESI                            ; 00515411
    PUSH EDI                            ; 00515412
    PUSH EBP                            ; 00515413
    SUB ESP,0x8                         ; 00515414
    MOV EBX,dword ptr [0x01d227f8]      ; 00515417 | DAT_01d227f8
    XOR EDX,EDX                         ; 0051541d
    MOV ECX,dword ptr [0x01d227f4]      ; 0051541f | DAT_01d227f4
    MOV dword ptr [ESP],EDX             ; 00515425
    TEST ECX,ECX                        ; 00515428
    JLE 0x005154b1                      ; 0051542a
        ;   XREF to: 005154b1 (CONDITIONAL_JUMP)  ; LAB_005154b1
    MOV EBP,0x1d23ffc                   ; 00515430
    MOV ECX,dword ptr [ESP]             ; 00515435
        ;   Label: LAB_00515435
    MOV EAX,[0x01d227f4]                ; 00515438 | DAT_01d227f4
    INC ECX                             ; 0051543d
    CMP ECX,EAX                         ; 0051543e
    JNZ 0x00515444                      ; 00515440
        ;   XREF to: 00515444 (CONDITIONAL_JUMP)  ; LAB_00515444
    XOR ECX,EAX                         ; 00515442
    FLD float ptr [EBP + 0x8]           ; 00515444 | DAT_01d24004 | DAT_01d24044
        ;   Label: LAB_00515444
    MOV ESI,0x1d23ffc                   ; 00515447
    SHL ECX,0x6                         ; 0051544c
    MOV EDX,EBP                         ; 0051544f
    ADD ESI,ECX                         ; 00515451
    FCHS                                ; 00515453
    MOV dword ptr [ESP + 0x4],ESI       ; 00515455
    XOR ECX,ECX                         ; 00515459
    FCOMP float ptr [EBP + 0x4]         ; 0051545b | DAT_01d24000 | DAT_01d24040
    FNSTSW AX                           ; 0051545e
    SAHF                                ; 00515460
    JC 0x00515468                       ; 00515461
        ;   XREF to: 00515468 (CONDITIONAL_JUMP)  ; LAB_00515468
    MOV ECX,0x1                         ; 00515463
    MOV ESI,dword ptr [ESP + 0x4]       ; 00515468
        ;   Label: LAB_00515468
    FLD float ptr [ESI + 0x8]           ; 0051546c | DAT_01d24004
    FCHS                                ; 0051546f
    FCOMP float ptr [ESI + 0x4]         ; 00515471 | DAT_01d24000
    FNSTSW AX                           ; 00515474
    SAHF                                ; 00515476
    JC 0x0051547c                       ; 00515477
        ;   XREF to: 0051547c (CONDITIONAL_JUMP)  ; LAB_0051547c
    OR CL,0x2                           ; 00515479
    CMP ECX,0x3                         ; 0051547c
        ;   Label: LAB_0051547c
    JA 0x0051549d                       ; 0051547f
        ;   XREF to: 0051549d (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x5153f8]  ; 00515481 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 00515488
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 0051548a
    MOV ECX,0x10                        ; 0051548d
    LEA EDI,[ESI + 0x1d247fc]           ; 00515492
    MOV ESI,EDX                         ; 00515498
    INC EBX                             ; 0051549a
    MOVSD.REP ES:EDI,ESI                ; 0051549b | DAT_01d23ffc | DAT_01d247fc | DAT_01d24000
    MOV ESI,dword ptr [ESP]             ; 0051549d
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d227f4]      ; 005154a0 | DAT_01d227f4
    INC ESI                             ; 005154a6
    ADD EBP,0x40                        ; 005154a7
    MOV dword ptr [ESP],ESI             ; 005154aa
    CMP ESI,EDI                         ; 005154ad
    JL 0x00515435                       ; 005154af
        ;   XREF to: 00515435 (CONDITIONAL_JUMP)  ; LAB_00515435
    MOV dword ptr [0x01d227f8],EBX      ; 005154b1 | DAT_01d227f8
        ;   Label: LAB_005154b1
    ADD ESP,0x8                         ; 005154b7
    POP EBP                             ; 005154ba
    POP EDI                             ; 005154bb
    POP ESI                             ; 005154bc
    POP EBX                             ; 005154bd
    RET                                 ; 005154be
    MOV ECX,EBX                         ; 005154bf
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 005154c1
    ADD ECX,0x1d247fc                   ; 005154c4
    PUSH ECX                            ; 005154ca
    PUSH EDX                            ; 005154cb | DAT_01d23ffc
    MOV ESI,dword ptr [ESP + 0xc]       ; 005154cc
    PUSH ESI                            ; 005154d0
    MOV dword ptr [0x01d227f8],EBX      ; 005154d1 | DAT_01d227f8
    CALL engine_mini3d.cpp_intersectClipPlane3_FUN_00514fa0 ; 005154d7
        ;   XREF to: 00514fa0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_intersectClipPlane3_FUN_00514fa0(float * from, float * to, float * out)
    MOV EBX,dword ptr [0x01d227f8]      ; 005154dc | DAT_01d227f8
    ADD ESP,0xc                         ; 005154e2
    INC EBX                             ; 005154e5
    JMP 0x0051549d                      ; 005154e6
        ;   XREF to: 0051549d (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 005154e8
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 005154ea
    MOV ECX,0x10                        ; 005154ed
    LEA EDI,[ESI + 0x1d247fc]           ; 005154f2
    MOV ESI,EDX                         ; 005154f8
    INC EBX                             ; 005154fa
    MOVSD.REP ES:EDI,ESI                ; 005154fb | DAT_01d23ffc | DAT_01d247fc | DAT_01d24000
    MOV ECX,EBX                         ; 005154fd
    SHL ECX,0x6                         ; 005154ff
    ADD ECX,0x1d247fc                   ; 00515502
    PUSH ECX                            ; 00515508
    MOV ECX,dword ptr [ESP + 0x8]       ; 00515509
    PUSH ECX                            ; 0051550d
    PUSH EDX                            ; 0051550e | DAT_01d23ffc
    MOV dword ptr [0x01d227f8],EBX      ; 0051550f | DAT_01d227f8
    CALL engine_mini3d.cpp_intersectClipPlane3_FUN_00514fa0 ; 00515515
        ;   XREF to: 00514fa0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_intersectClipPlane3_FUN_00514fa0(float * from, float * to, float * out)
    MOV EBX,dword ptr [0x01d227f8]      ; 0051551a | DAT_01d227f8
    ADD ESP,0xc                         ; 00515520
    INC EBX                             ; 00515523
    JMP 0x0051549d                      ; 00515524
        ;   XREF to: 0051549d (UNCONDITIONAL_JUMP)  ; caseD_3

