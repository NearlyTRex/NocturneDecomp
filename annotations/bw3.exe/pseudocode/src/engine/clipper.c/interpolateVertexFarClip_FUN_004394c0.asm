; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexFarClip_FUN_004394c0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00439da0 at 0043a772
;
; Referenced Globals:
;   undefined4 DAT_005f12f4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004394c0
        ;   Label: engine_clipper.c_interpolateVertexFarClip_FUN_004394c0
    PUSH ESI                            ; 004394c1
    PUSH EDI                            ; 004394c2
    PUSH EBP                            ; 004394c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004394c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004394c8
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004394cc
    MOV EBX,dword ptr [EDI + 0x8]       ; 004394d0
    MOV EDX,dword ptr [ESI + 0x8]       ; 004394d3
    MOV ECX,dword ptr [ESI + 0x8]       ; 004394d6
    SUB EBX,EDX                         ; 004394d9
    MOV EDX,dword ptr [0x005f12f4]      ; 004394db | DAT_005f12f4
    SUB EDX,ECX                         ; 004394e1
    CMP EDX,EBX                         ; 004394e3
    JGE 0x004394f9                      ; 004394e5
        ;   XREF to: 004394f9 (CONDITIONAL_JUMP)  ; LAB_004394f9
    NEG EBX                             ; 004394e7
    CMP EDX,EBX                         ; 004394e9
    JLE 0x00439500                      ; 004394eb
        ;   XREF to: 00439500 (CONDITIONAL_JUMP)  ; LAB_00439500
    NEG EBX                             ; 004394ed
    XOR EAX,EAX                         ; 004394ef
    SAR EDX,0x1                         ; 004394f1
    RCR EAX,0x1                         ; 004394f3
    IDIV EBX                            ; 004394f5
    JMP 0x00439507                      ; 004394f7
        ;   XREF to: 00439507 (UNCONDITIONAL_JUMP)  ; LAB_00439507
    MOV EAX,0x7fffffff                  ; 004394f9
        ;   Label: LAB_004394f9
    JMP 0x00439507                      ; 004394fe
        ;   XREF to: 00439507 (UNCONDITIONAL_JUMP)  ; LAB_00439507
    NEG EBX                             ; 00439500
        ;   Label: LAB_00439500
    MOV EAX,0x80000000                  ; 00439502
    MOV ECX,EAX                         ; 00439507
        ;   Label: LAB_00439507
    MOV EBX,dword ptr [ESI + 0x8]       ; 00439509
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043950c
    MOV EDX,ECX                         ; 0043950f
    SUB EAX,EBX                         ; 00439511
    IMUL EDX                            ; 00439513
    ADD EAX,EAX                         ; 00439515
    ADC EDX,EDX                         ; 00439517
    MOV EAX,EDX                         ; 00439519
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043951b
    ADD EAX,EBX                         ; 0043951e
    MOV dword ptr [EBP + 0x8],EAX       ; 00439520
    MOV EAX,dword ptr [EDI + 0x4]       ; 00439523
    SUB EAX,dword ptr [ESI + 0x4]       ; 00439526
    MOV EDX,ECX                         ; 00439529
    IMUL EDX                            ; 0043952b
    ADD EAX,EAX                         ; 0043952d
    ADC EDX,EDX                         ; 0043952f
    MOV EAX,EDX                         ; 00439531
    MOV EBX,dword ptr [ESI + 0x4]       ; 00439533
    ADD EAX,EBX                         ; 00439536
    MOV dword ptr [EBP + 0x4],EAX       ; 00439538
    MOV EAX,dword ptr [EDI]             ; 0043953b
    MOV EBX,dword ptr [ESI]             ; 0043953d
    MOV EDX,ECX                         ; 0043953f
    SUB EAX,EBX                         ; 00439541
    IMUL EDX                            ; 00439543
    ADD EAX,EAX                         ; 00439545
    ADC EDX,EDX                         ; 00439547
    MOV EAX,EDX                         ; 00439549
    MOV EBX,dword ptr [ESI]             ; 0043954b
    ADD EAX,EBX                         ; 0043954d
    MOV dword ptr [EBP],EAX             ; 0043954f
    MOV EAX,dword ptr [EDI + 0x20]      ; 00439552
    SUB EAX,dword ptr [ESI + 0x20]      ; 00439555
    MOV EDX,ECX                         ; 00439558
    IMUL EDX                            ; 0043955a
    ADD EAX,EAX                         ; 0043955c
    ADC EDX,EDX                         ; 0043955e
    MOV EAX,EDX                         ; 00439560
    MOV EBX,dword ptr [ESI + 0x20]      ; 00439562
    ADD EAX,EBX                         ; 00439565
    MOV dword ptr [EBP + 0x20],EAX      ; 00439567
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043956a
    MOV EBX,dword ptr [ESI + 0x2c]      ; 0043956d
    MOV EDX,ECX                         ; 00439570
    SUB EAX,EBX                         ; 00439572
    IMUL EDX                            ; 00439574
    ADD EAX,EAX                         ; 00439576
    ADC EDX,EDX                         ; 00439578
    MOV EAX,EDX                         ; 0043957a
    MOV EBX,dword ptr [ESI + 0x2c]      ; 0043957c
    ADD EAX,EBX                         ; 0043957f
    MOV dword ptr [EBP + 0x2c],EAX      ; 00439581
    MOV EAX,dword ptr [EDI + 0x18]      ; 00439584
    SUB EAX,dword ptr [ESI + 0x18]      ; 00439587
    MOV EDX,ECX                         ; 0043958a
    IMUL EDX                            ; 0043958c
    ADD EAX,EAX                         ; 0043958e
    ADC EDX,EDX                         ; 00439590
    MOV EAX,EDX                         ; 00439592
    MOV EBX,dword ptr [ESI + 0x18]      ; 00439594
    ADD EAX,EBX                         ; 00439597
    MOV dword ptr [EBP + 0x18],EAX      ; 00439599
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043959c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043959f
    MOV EDX,ECX                         ; 004395a2
    SUB EAX,EBX                         ; 004395a4
    IMUL EDX                            ; 004395a6
    ADD EAX,EAX                         ; 004395a8
    ADC EDX,EDX                         ; 004395aa
    MOV EAX,EDX                         ; 004395ac
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004395ae
    MOV dword ptr [EBP + 0x10],0xffffffff ; 004395b1
    ADD ECX,EAX                         ; 004395b8
    MOV dword ptr [EBP + 0x1c],ECX      ; 004395ba
    POP EBP                             ; 004395bd
    POP EDI                             ; 004395be
    POP ESI                             ; 004395bf
    POP EBX                             ; 004395c0
    RET                                 ; 004395c1

