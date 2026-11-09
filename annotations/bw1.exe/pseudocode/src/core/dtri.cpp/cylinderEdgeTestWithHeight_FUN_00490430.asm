; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_00490430(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 at 004908ae
;
; Called Functions:
;   core_dtri.cpp_cylinderEdgeIntersection_FUN_00490150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490430
        ;   Label: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00490430
    PUSH ESI                            ; 00490431
    PUSH EDI                            ; 00490432
    SUB ESP,0x4                         ; 00490433
    MOV EBX,dword ptr [ESP + 0x14]      ; 00490436
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049043a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0049043e
    FLD float ptr [ESI]                 ; 00490442
    PUSH EBX                            ; 00490444
    FSTP float ptr [EBX + 0x3c]         ; 00490445
    MOV EAX,dword ptr [ESI + 0x8]       ; 00490448
    MOV dword ptr [EBX + 0x40],EAX      ; 0049044b
    MOV EAX,dword ptr [EDI]             ; 0049044e
    MOV dword ptr [EBX + 0x44],EAX      ; 00490450
    MOV EAX,dword ptr [EDI + 0x8]       ; 00490453
    MOV dword ptr [EBX + 0x48],EAX      ; 00490456
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_00490150 ; 00490459
        ;   XREF to: 00490150 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderEdgeIntersection_FUN_00490150()
    ADD ESP,0x4                         ; 0049045e
    TEST EAX,EAX                        ; 00490461
    JZ 0x00490487                       ; 00490463
        ;   XREF to: 00490487 (CONDITIONAL_JUMP)  ; LAB_00490487
    FLD float ptr [EDI + 0x4]           ; 00490465
    FSUB float ptr [ESI + 0x4]          ; 00490468
    FMUL float ptr [EBX + 0x50]         ; 0049046b
    FADD float ptr [ESI + 0x4]          ; 0049046e
    FST float ptr [ESP]                 ; 00490471
    FCOMP float ptr [EBX + 0x28]        ; 00490474
    FNSTSW AX                           ; 00490477
    SAHF                                ; 00490479
    JBE 0x00490487                      ; 0049047a
        ;   XREF to: 00490487 (CONDITIONAL_JUMP)  ; LAB_00490487
    FLD float ptr [ESP]                 ; 0049047c
    FCOMP float ptr [EBX + 0x24]        ; 0049047f
    FNSTSW AX                           ; 00490482
    SAHF                                ; 00490484
    JC 0x0049048e                       ; 00490485
        ;   XREF to: 0049048e (CONDITIONAL_JUMP)  ; LAB_0049048e
    ADD ESP,0x4                         ; 00490487
        ;   Label: LAB_00490487
    POP EDI                             ; 0049048a
    POP ESI                             ; 0049048b
    POP EBX                             ; 0049048c
    RET                                 ; 0049048d
    MOV dword ptr [EBX + 0x8],0x0       ; 0049048e
        ;   Label: LAB_0049048e
    FLD float ptr [EBX + 0x18]          ; 00490495
    FMUL float ptr [EBX + 0x4c]         ; 00490498
    FLD float ptr [EBX + 0x1c]          ; 0049049b
    FMUL float ptr [EBX + 0x4c]         ; 0049049e
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004904a1
    MOV dword ptr [EBX],EAX             ; 004904a4
    FXCH                                ; 004904a6
    FADD float ptr [EBX + 0x10]         ; 004904a8
    FXCH                                ; 004904ab
    FADD float ptr [EBX + 0x14]         ; 004904ad
    FLD float ptr [EBX + 0x54]          ; 004904b0
    FLD float ptr [EBX + 0x58]          ; 004904b3
    FSUBP ST2,ST0                       ; 004904b6
    FSUBP ST2,ST0                       ; 004904b8
    FSTP float ptr [EBX + 0xc]          ; 004904ba
    FSTP float ptr [EBX + 0x4]          ; 004904bd
    ADD ESP,0x4                         ; 004904c0
    POP EDI                             ; 004904c3
    POP ESI                             ; 004904c4
    POP EBX                             ; 004904c5
    RET                                 ; 004904c6

