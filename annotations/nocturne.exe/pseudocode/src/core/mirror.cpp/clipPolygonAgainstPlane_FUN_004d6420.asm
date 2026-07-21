; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420(float *param_1,float *param_2,uint param_3,int param_4,int *param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004d74a0 at 004d7530
;
; Referenced Globals:
;   void* PTR_caseD_1_004d6408 = 004d64f5
;   void* PTR_caseD_3_004d6410 = 004d64d7
;
; Called Functions:
;   core_mirror.cpp_computePlaneIntersection_FUN_004d62f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6420
        ;   Label: core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420
    PUSH ESI                            ; 004d6421
    PUSH EDI                            ; 004d6422
    PUSH EBP                            ; 004d6423
    SUB ESP,0x4                         ; 004d6424
    MOV ESI,dword ptr [ESP + 0x18]      ; 004d6427
    MOV EBX,dword ptr [ESP + 0x28]      ; 004d642b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004d642f
    XOR EDX,EDX                         ; 004d6433
    MOV dword ptr [EBX],0x0             ; 004d6435
    MOV dword ptr [ESP],EDX             ; 004d643b
    TEST ECX,ECX                        ; 004d643e
    JLE 0x004d64ed                      ; 004d6440
        ;   XREF to: 004d64ed (CONDITIONAL_JUMP)  ; LAB_004d64ed
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004d6446
    MOV ECX,dword ptr [ESP]             ; 004d644a
        ;   Label: LAB_004d644a
    MOV EDX,dword ptr [ESP + 0x20]      ; 004d644d
    INC ECX                             ; 004d6451
    CMP ECX,EDX                         ; 004d6452
    JNZ 0x004d6458                      ; 004d6454
        ;   XREF to: 004d6458 (CONDITIONAL_JUMP)  ; LAB_004d6458
    XOR ECX,EDX                         ; 004d6456
    IMUL ECX,ECX,0xc                    ; 004d6458
        ;   Label: LAB_004d6458
    FLD float ptr [ESI + 0x4]           ; 004d645b
    FMUL float ptr [EDI + 0x4]          ; 004d645e
    FLD float ptr [ESI]                 ; 004d6461
    FMUL float ptr [EDI]                ; 004d6463
    FADDP                               ; 004d6465
    FLD float ptr [ESI + 0x8]           ; 004d6467
    FMUL float ptr [EDI + 0x8]          ; 004d646a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004d646d
    MOV EDX,EDI                         ; 004d6471
    FADDP                               ; 004d6473
    ADD EBP,ECX                         ; 004d6475
    FADD float ptr [ESI + 0xc]          ; 004d6477
    XOR ECX,ECX                         ; 004d647a
    FLDZ                                ; 004d647c
    FCOMPP                              ; 004d647e
    FNSTSW AX                           ; 004d6480
    SAHF                                ; 004d6482
    JNC 0x004d648a                      ; 004d6483
        ;   XREF to: 004d648a (CONDITIONAL_JUMP)  ; LAB_004d648a
    MOV ECX,0x1                         ; 004d6485
    FLD float ptr [ESI + 0x4]           ; 004d648a
        ;   Label: LAB_004d648a
    FMUL float ptr [EBP + 0x4]          ; 004d648d
    FLD float ptr [ESI]                 ; 004d6490
    FMUL float ptr [EBP]                ; 004d6492
    FADDP                               ; 004d6495
    FLD float ptr [ESI + 0x8]           ; 004d6497
    FMUL float ptr [EBP + 0x8]          ; 004d649a
    FADDP                               ; 004d649d
    FADD float ptr [ESI + 0xc]          ; 004d649f
    FLDZ                                ; 004d64a2
    FCOMPP                              ; 004d64a4
    FNSTSW AX                           ; 004d64a6
    SAHF                                ; 004d64a8
    JNC 0x004d64ae                      ; 004d64a9
        ;   XREF to: 004d64ae (CONDITIONAL_JUMP)  ; LAB_004d64ae
    OR CL,0x2                           ; 004d64ab
    CMP ECX,0x3                         ; 004d64ae
        ;   Label: LAB_004d64ae
    JA 0x004d64d7                       ; 004d64b1
        ;   XREF to: 004d64d7 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4d6404]  ; 004d64b3 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [EBX],0xc        ; 004d64ba
        ;   Label: caseD_0
    ADD ECX,dword ptr [ESP + 0x24]      ; 004d64bd
    CMP ECX,EDX                         ; 004d64c1
    JZ 0x004d64d5                       ; 004d64c3
        ;   XREF to: 004d64d5 (CONDITIONAL_JUMP)  ; LAB_004d64d5
    MOV EAX,dword ptr [EDX]             ; 004d64c5
    MOV dword ptr [ECX],EAX             ; 004d64c7
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d64c9
    MOV dword ptr [ECX + 0x4],EAX       ; 004d64cc
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d64cf
    MOV dword ptr [ECX + 0x8],EAX       ; 004d64d2
    INC dword ptr [EBX]                 ; 004d64d5
        ;   Label: LAB_004d64d5
    MOV EBP,dword ptr [ESP]             ; 004d64d7
        ;   Label: caseD_3
    MOV EAX,dword ptr [ESP + 0x20]      ; 004d64da
    INC EBP                             ; 004d64de
    ADD EDI,0xc                         ; 004d64df
    MOV dword ptr [ESP],EBP             ; 004d64e2
    CMP EBP,EAX                         ; 004d64e5
    JL 0x004d644a                       ; 004d64e7
        ;   XREF to: 004d644a (CONDITIONAL_JUMP)  ; LAB_004d644a
    ADD ESP,0x4                         ; 004d64ed
        ;   Label: LAB_004d64ed
    POP EBP                             ; 004d64f0
    POP EDI                             ; 004d64f1
    POP ESI                             ; 004d64f2
    POP EBX                             ; 004d64f3
    RET                                 ; 004d64f4
    IMUL ECX,dword ptr [EBX],0xc        ; 004d64f5
        ;   Label: caseD_1
    ADD ECX,dword ptr [ESP + 0x24]      ; 004d64f8
    PUSH ECX                            ; 004d64fc
    PUSH EDX                            ; 004d64fd
    PUSH EBP                            ; 004d64fe
    PUSH ESI                            ; 004d64ff
    CALL core_mirror.cpp_computePlaneIntersection_FUN_004d62f0 ; 004d6500
        ;   XREF to: 004d62f0 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_computePlaneIntersection_FUN_004d62f0()
    MOV EDX,dword ptr [EBX]             ; 004d6505
    INC EDX                             ; 004d6507
    ADD ESP,0x10                        ; 004d6508
    MOV dword ptr [EBX],EDX             ; 004d650b
    JMP 0x004d64d7                      ; 004d650d
        ;   XREF to: 004d64d7 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [EBX],0xc        ; 004d650f
        ;   Label: caseD_2
    ADD ECX,dword ptr [ESP + 0x24]      ; 004d6512
    CMP ECX,EDX                         ; 004d6516
    JZ 0x004d652a                       ; 004d6518
        ;   XREF to: 004d652a (CONDITIONAL_JUMP)  ; LAB_004d652a
    MOV EAX,dword ptr [EDX]             ; 004d651a
    MOV dword ptr [ECX],EAX             ; 004d651c
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d651e
    MOV dword ptr [ECX + 0x4],EAX       ; 004d6521
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d6524
    MOV dword ptr [ECX + 0x8],EAX       ; 004d6527
    MOV ECX,dword ptr [EBX]             ; 004d652a
        ;   Label: LAB_004d652a
    INC ECX                             ; 004d652c
    MOV dword ptr [EBX],ECX             ; 004d652d
    IMUL ECX,ECX,0xc                    ; 004d652f
    ADD ECX,dword ptr [ESP + 0x24]      ; 004d6532
    PUSH ECX                            ; 004d6536
    PUSH EBP                            ; 004d6537
    PUSH EDX                            ; 004d6538
    PUSH ESI                            ; 004d6539
    CALL core_mirror.cpp_computePlaneIntersection_FUN_004d62f0 ; 004d653a
        ;   XREF to: 004d62f0 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_computePlaneIntersection_FUN_004d62f0()
    MOV EDX,dword ptr [EBX]             ; 004d653f
    INC EDX                             ; 004d6541
    ADD ESP,0x10                        ; 004d6542
    MOV dword ptr [EBX],EDX             ; 004d6545
    JMP 0x004d64d7                      ; 004d6547
        ;   XREF to: 004d64d7 (UNCONDITIONAL_JUMP)  ; caseD_3

