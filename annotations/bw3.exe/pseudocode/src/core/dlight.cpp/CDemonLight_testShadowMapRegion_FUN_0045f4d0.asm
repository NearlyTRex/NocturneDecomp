; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_0045f4d0(CDemonLight *this_ptr,CRect *rect)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CRect *          Stack[0x8]:4   rect
;
; XREF[1]:
;   core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041d920 at 0041da9d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f4d0
        ;   Label: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_0045f4d0
    PUSH ESI                            ; 0045f4d1
    PUSH EDI                            ; 0045f4d2
    PUSH EBP                            ; 0045f4d3
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045f4d4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045f4d8
    MOV EDX,dword ptr [EDX]             ; 0045f4dc
    MOV EAX,dword ptr [EAX]             ; 0045f4de
    SAR EDX,0x1f                        ; 0045f4e0
    SHL EDX,0x3                         ; 0045f4e3
    SBB EAX,EDX                         ; 0045f4e6
    SAR EAX,0x3                         ; 0045f4e8
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045f4eb
    MOV ESI,EAX                         ; 0045f4ef
    MOV EDX,dword ptr [EDX + 0x4]       ; 0045f4f1
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045f4f4
    SAR EDX,0x1f                        ; 0045f4f8
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045f4fb
    SHL EDX,0x3                         ; 0045f4fe
    SBB EAX,EDX                         ; 0045f501
    SAR EAX,0x3                         ; 0045f503
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045f506
    MOV ECX,EAX                         ; 0045f50a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045f50c
    MOV EDX,dword ptr [EDX + 0x8]       ; 0045f510
    MOV EBX,dword ptr [EAX + 0x1cc0]    ; 0045f513
    IMUL EDX,EBX                        ; 0045f519
    MOV EAX,EDX                         ; 0045f51c
    SAR EDX,0x1f                        ; 0045f51e
    SHL EDX,0x3                         ; 0045f521
    SBB EAX,EDX                         ; 0045f524
    SAR EAX,0x3                         ; 0045f526
    MOV EBP,dword ptr [ESP + 0x14]      ; 0045f529
    MOV EBP,dword ptr [EBP + 0x2fa0]    ; 0045f52d
    MOV EDI,dword ptr [ESP + 0x18]      ; 0045f533
    ADD EBP,EAX                         ; 0045f537
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045f539
    MOV EDI,dword ptr [EDI + 0x8]       ; 0045f53d
    CMP EDI,dword ptr [EAX + 0xc]       ; 0045f540
    JG 0x0045f584                       ; 0045f543
        ;   XREF to: 0045f584 (CONDITIONAL_JUMP)  ; LAB_0045f584
    MOV EDX,ESI                         ; 0045f545
        ;   Label: LAB_0045f545
    CMP ESI,ECX                         ; 0045f547
    JG 0x0045f559                       ; 0045f549
        ;   XREF to: 0045f559 (CONDITIONAL_JUMP)  ; LAB_0045f559
    LEA EAX,[ESI + EBP*0x1]             ; 0045f54b
    CMP byte ptr [EAX],0x0              ; 0045f54e
        ;   Label: LAB_0045f54e
    JNZ 0x0045f58b                      ; 0045f551
        ;   XREF to: 0045f58b (CONDITIONAL_JUMP)  ; LAB_0045f58b
    INC EDX                             ; 0045f553
    INC EAX                             ; 0045f554
    CMP EDX,ECX                         ; 0045f555
    JLE 0x0045f54e                      ; 0045f557
        ;   XREF to: 0045f54e (CONDITIONAL_JUMP)  ; LAB_0045f54e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045f559
        ;   Label: LAB_0045f559
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045f55d
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0045f561
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 0045f567
    SAR EDX,0x1f                        ; 0045f56d
    SHL EDX,0x3                         ; 0045f570
    SBB EAX,EDX                         ; 0045f573
    SAR EAX,0x3                         ; 0045f575
    ADD EBP,EAX                         ; 0045f578
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045f57a
    INC EDI                             ; 0045f57e
    CMP EDI,dword ptr [EAX + 0xc]       ; 0045f57f
    JLE 0x0045f545                      ; 0045f582
        ;   XREF to: 0045f545 (CONDITIONAL_JUMP)  ; LAB_0045f545
    XOR EAX,EAX                         ; 0045f584
        ;   Label: LAB_0045f584
    POP EBP                             ; 0045f586
    POP EDI                             ; 0045f587
    POP ESI                             ; 0045f588
    POP EBX                             ; 0045f589
    RET                                 ; 0045f58a
    MOV EAX,0x1                         ; 0045f58b
        ;   Label: LAB_0045f58b
    POP EBP                             ; 0045f590
    POP EDI                             ; 0045f591
    POP ESI                             ; 0045f592
    POP EBX                             ; 0045f593
    RET                                 ; 0045f594

