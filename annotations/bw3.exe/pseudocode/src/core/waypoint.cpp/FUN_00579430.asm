; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_waypoint_cpp_FUN_00579430(undefined4 param_1,int param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_charactr.cpp_FUN_004349d0 at 004349e4
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonSetInstance.waypoint_count
;   undefined4 DAT_02d09d60
;
; Called Functions:
;   core_waypoint.cpp_FUN_00579130
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579430
        ;   Label: core_waypoint.cpp_FUN_00579430
    PUSH EBP                            ; 00579431
    SUB ESP,0x10                        ; 00579432
    MOV EBX,dword ptr [ESP + 0x20]      ; 00579435
    TEST EBX,EBX                        ; 00579439
    JNZ 0x00579445                      ; 0057943b
        ;   XREF to: 00579445 (CONDITIONAL_JUMP)  ; LAB_00579445
    XOR EAX,EAX                         ; 0057943d
    ADD ESP,0x10                        ; 0057943f
        ;   Label: LAB_0057943f
    POP EBP                             ; 00579442
    POP EBX                             ; 00579443
    RET                                 ; 00579444
    MOV EDX,dword ptr [ESP + 0x24]      ; 00579445
        ;   Label: LAB_00579445
    PUSH EDX                            ; 00579449
    PUSH 0x0                            ; 0057944a
    LEA EAX,[EBX + 0x20]                ; 0057944c
    PUSH EAX                            ; 0057944f
    MOV ECX,dword ptr [ESP + 0x28]      ; 00579450
    PUSH ECX                            ; 00579454
    CALL core_waypoint.cpp_FUN_00579130 ; 00579455
        ;   XREF to: 00579130 (UNCONDITIONAL_CALL)  ; undefined core_waypoint.cpp_FUN_00579130()
    ADD ESP,0x10                        ; 0057945a
    TEST EAX,EAX                        ; 0057945d
    JNZ 0x00579493                      ; 0057945f
        ;   XREF to: 00579493 (CONDITIONAL_JUMP)  ; LAB_00579493
    CMP dword ptr [EBX + 0x374],0x1     ; 00579461
    JL 0x0057943f                       ; 00579468
        ;   XREF to: 0057943f (CONDITIONAL_JUMP)  ; LAB_0057943f
    PUSH EDI                            ; 0057946a
    PUSH ESI                            ; 0057946b
    XOR ESI,ESI                         ; 0057946c
    MOV EDX,dword ptr [0x00603b28]      ; 0057946e | g_CDemonSetPtr
        ;   Label: LAB_0057946e
    CMP ESI,dword ptr [EDX + 0x154e74]  ; 00579474 | g_CDemonSetInstance.waypoint_count
    JGE 0x0057949b                      ; 0057947a
        ;   XREF to: 0057949b (CONDITIONAL_JUMP)  ; LAB_0057949b
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x154e78] ; 0057947c
    ADD EAX,0x4                         ; 00579483
    INC ESI                             ; 00579486
    MOV dword ptr [EDX + 0x558],0x7149f2ca ; 00579487
    JMP 0x0057946e                      ; 00579491
        ;   XREF to: 0057946e (UNCONDITIONAL_JUMP)  ; LAB_0057946e
    MOV EAX,EBX                         ; 00579493
        ;   Label: LAB_00579493
    ADD ESP,0x10                        ; 00579495
    POP EBP                             ; 00579498
    POP EBX                             ; 00579499
    RET                                 ; 0057949a
    MOV ESI,0x1                         ; 0057949b
        ;   Label: LAB_0057949b
    MOV dword ptr [0x02d09d60],EBX      ; 005794a0 | DAT_02d09d60
    MOV dword ptr [EBX + 0x558],0x0     ; 005794a6
    DEC ESI                             ; 005794b0
        ;   Label: LAB_005794b0
    LEA EBX,[ESI*0x4 + 0x0]             ; 005794b1
    PUSH EBX                            ; 005794b8
    PUSH 0x2d09d64                      ; 005794b9
    MOV EAX,[0x02d09d60]                ; 005794be | DAT_02d09d60
    PUSH 0x2d09d60                      ; 005794c3 | DAT_02d09d60
    MOV dword ptr [ESP + 0x18],EAX      ; 005794c8
    CALL crt_string.c_memmove_FUN_005a54c0 ; 005794cc
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005794d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005794d4
    XOR EBP,EBP                         ; 005794d8
    MOV EDX,dword ptr [EAX + 0x374]     ; 005794da
    MOV dword ptr [ESP + 0x14],EBP      ; 005794e0
    TEST EDX,EDX                        ; 005794e4
    JLE 0x0057955e                      ; 005794e6
        ;   XREF to: 0057955e (CONDITIONAL_JUMP)  ; LAB_0057955e
    MOV EBP,EBX                         ; 005794ec
    MOV EDI,EAX                         ; 005794ee
    MOV EAX,dword ptr [ESP + 0xc]       ; 005794f0
        ;   Label: LAB_005794f0
    FLD float ptr [EAX + 0x558]         ; 005794f4
    FADD float ptr [EDI + 0x37c]        ; 005794fa
    MOV ECX,dword ptr [EDI + 0x378]     ; 00579500
    FST float ptr [ESP + 0x10]          ; 00579506
    FCOMP float ptr [ECX + 0x558]       ; 0057950a
    FNSTSW AX                           ; 00579510
    SAHF                                ; 00579512
    JNC 0x00579544                      ; 00579513
        ;   XREF to: 00579544 (CONDITIONAL_JUMP)  ; LAB_00579544
    MOV EAX,dword ptr [ESP + 0x10]      ; 00579515
    XOR EDX,EDX                         ; 00579519
    MOV dword ptr [ECX + 0x558],EAX     ; 0057951b
    TEST ESI,ESI                        ; 00579521
    JLE 0x00579536                      ; 00579523
        ;   XREF to: 00579536 (CONDITIONAL_JUMP)  ; LAB_00579536
    LEA EBX,[ESI*0x4 + 0x0]             ; 00579525
    XOR EAX,EAX                         ; 0057952c
    CMP ECX,dword ptr [EAX + 0x2d09d60] ; 0057952e | DAT_02d09d60
        ;   Label: LAB_0057952e
    JNZ 0x0057959e                      ; 00579534
        ;   XREF to: 0057959e (CONDITIONAL_JUMP)  ; LAB_0057959e
    CMP EDX,ESI                         ; 00579536
        ;   Label: LAB_00579536
    JNZ 0x00579544                      ; 00579538
        ;   XREF to: 00579544 (CONDITIONAL_JUMP)  ; LAB_00579544
    ADD EBP,0x4                         ; 0057953a
    INC ESI                             ; 0057953d
    MOV dword ptr [EBP + 0x2d09d5c],ECX ; 0057953e | DAT_02d09d60
    MOV ECX,dword ptr [ESP + 0x14]      ; 00579544
        ;   Label: LAB_00579544
    MOV EDX,dword ptr [ESP + 0xc]       ; 00579548
    ADD EDI,0x8                         ; 0057954c
    INC ECX                             ; 0057954f
    MOV EBX,dword ptr [EDX + 0x374]     ; 00579550
    MOV dword ptr [ESP + 0x14],ECX      ; 00579556
    CMP ECX,EBX                         ; 0057955a
    JL 0x005794f0                       ; 0057955c
        ;   XREF to: 005794f0 (CONDITIONAL_JUMP)  ; LAB_005794f0
    TEST ESI,ESI                        ; 0057955e
        ;   Label: LAB_0057955e
    JG 0x005794b0                       ; 00579560
        ;   XREF to: 005794b0 (CONDITIONAL_JUMP)  ; LAB_005794b0
    MOV ESI,0x6fa18f08                  ; 00579566
    XOR EBP,EBP                         ; 0057956b
    XOR EDI,EDI                         ; 0057956d
    MOV dword ptr [ESP + 0x8],ESI       ; 0057956f
    XOR ESI,ESI                         ; 00579573
    MOV EAX,[0x00603b28]                ; 00579575 | g_CDemonSetPtr
        ;   Label: LAB_00579575
    CMP EDI,dword ptr [EAX + 0x154e74]  ; 0057957a | g_CDemonSetInstance.waypoint_count
    JGE 0x005795d2                      ; 00579580
        ;   XREF to: 005795d2 (CONDITIONAL_JUMP)  ; LAB_005795d2
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x154e78] ; 00579582
    FLD float ptr [EBX + 0x558]         ; 00579589
    FCOMP float ptr [ESP + 0x8]         ; 0057958f
    FNSTSW AX                           ; 00579593
    SAHF                                ; 00579595
    JC 0x005795a8                       ; 00579596
        ;   XREF to: 005795a8 (CONDITIONAL_JUMP)  ; LAB_005795a8
    INC EDI                             ; 00579598
        ;   Label: LAB_00579598
    ADD ESI,0x4                         ; 00579599
    JMP 0x00579575                      ; 0057959c
        ;   XREF to: 00579575 (UNCONDITIONAL_JUMP)  ; LAB_00579575
    ADD EAX,0x4                         ; 0057959e
        ;   Label: LAB_0057959e
    INC EDX                             ; 005795a1
    CMP EAX,EBX                         ; 005795a2
    JL 0x0057952e                       ; 005795a4
        ;   XREF to: 0057952e (CONDITIONAL_JUMP)  ; LAB_0057952e
    JMP 0x00579536                      ; 005795a6
        ;   XREF to: 00579536 (UNCONDITIONAL_JUMP)  ; LAB_00579536
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005795a8
        ;   Label: LAB_005795a8
    PUSH ECX                            ; 005795ac
    PUSH 0x0                            ; 005795ad
    LEA EAX,[EBX + 0x20]                ; 005795af
    PUSH EAX                            ; 005795b2
    MOV EAX,dword ptr [ESP + 0x30]      ; 005795b3
    PUSH EAX                            ; 005795b7
    CALL core_waypoint.cpp_FUN_00579130 ; 005795b8
        ;   XREF to: 00579130 (UNCONDITIONAL_CALL)  ; undefined core_waypoint.cpp_FUN_00579130()
    ADD ESP,0x10                        ; 005795bd
    TEST EAX,EAX                        ; 005795c0
    JZ 0x00579598                       ; 005795c2
        ;   XREF to: 00579598 (CONDITIONAL_JUMP)  ; LAB_00579598
    MOV EAX,dword ptr [EBX + 0x558]     ; 005795c4
    MOV EBP,EBX                         ; 005795ca
    MOV dword ptr [ESP + 0x8],EAX       ; 005795cc
    JMP 0x00579598                      ; 005795d0
        ;   XREF to: 00579598 (UNCONDITIONAL_JUMP)  ; LAB_00579598
    MOV EAX,EBP                         ; 005795d2
        ;   Label: LAB_005795d2
    POP ESI                             ; 005795d4
    POP EDI                             ; 005795d5
    ADD ESP,0x10                        ; 005795d6
    POP EBP                             ; 005795d9
    POP EBX                             ; 005795da
    RET                                 ; 005795db

