; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00456620(SIntersectXZCylinder *param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_004566c0 at 00456b33
;
; Called Functions:
;   core_dcube.cpp_FUN_00456340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456620
        ;   Label: core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00456620
    PUSH ESI                            ; 00456621
    PUSH EDI                            ; 00456622
    SUB ESP,0x4                         ; 00456623
    MOV EBX,dword ptr [ESP + 0x14]      ; 00456626
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045662a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045662e
    FLD float ptr [ESI]                 ; 00456632
    PUSH EBX                            ; 00456634
    FSTP float ptr [EBX + 0x3c]         ; 00456635
    MOV EAX,dword ptr [ESI + 0x8]       ; 00456638
    MOV dword ptr [EBX + 0x40],EAX      ; 0045663b
    MOV EAX,dword ptr [EDI]             ; 0045663e
    MOV dword ptr [EBX + 0x44],EAX      ; 00456640
    MOV EAX,dword ptr [EDI + 0x8]       ; 00456643
    MOV dword ptr [EBX + 0x48],EAX      ; 00456646
    CALL core_dcube.cpp_FUN_00456340    ; 00456649
        ;   XREF to: 00456340 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_FUN_00456340(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 0045664e
    TEST EAX,EAX                        ; 00456651
    JZ 0x00456679                       ; 00456653
        ;   XREF to: 00456679 (CONDITIONAL_JUMP)  ; LAB_00456679
    FLD float ptr [EDI + 0x4]           ; 00456655
    FSUB float ptr [ESI + 0x4]          ; 00456658
    FMUL float ptr [EBX + 0x50]         ; 0045665b
    FADD float ptr [ESI + 0x4]          ; 0045665e
    FST float ptr [ESP]                 ; 00456661
    FCOMP float ptr [EBX + 0x28]        ; 00456664
    FNSTSW AX                           ; 00456667
    SAHF                                ; 00456669
    JBE 0x00456677                      ; 0045666a
        ;   XREF to: 00456677 (CONDITIONAL_JUMP)  ; LAB_00456677
    FLD float ptr [ESP]                 ; 0045666c
    FCOMP float ptr [EBX + 0x24]        ; 0045666f
    FNSTSW AX                           ; 00456672
    SAHF                                ; 00456674
    JC 0x00456680                       ; 00456675
        ;   XREF to: 00456680 (CONDITIONAL_JUMP)  ; LAB_00456680
    XOR EAX,EAX                         ; 00456677
        ;   Label: LAB_00456677
    ADD ESP,0x4                         ; 00456679
        ;   Label: LAB_00456679
    POP EDI                             ; 0045667c
    POP ESI                             ; 0045667d
    POP EBX                             ; 0045667e
    RET                                 ; 0045667f
    FLD float ptr [EBX + 0x18]          ; 00456680
        ;   Label: LAB_00456680
    FMUL float ptr [EBX + 0x4c]         ; 00456683
    FLD float ptr [EBX + 0x1c]          ; 00456686
    FMUL float ptr [EBX + 0x4c]         ; 00456689
    FLD float ptr [EBX + 0x4c]          ; 0045668c
    MOV dword ptr [EBX + 0x8],0x0       ; 0045668f
    MOV EAX,0x1                         ; 00456696
    FSTP float ptr [EBX]                ; 0045669b
    FXCH                                ; 0045669d
    FADD float ptr [EBX + 0x10]         ; 0045669f
    FXCH                                ; 004566a2
    FADD float ptr [EBX + 0x14]         ; 004566a4
    FLD float ptr [EBX + 0x54]          ; 004566a7
    FLD float ptr [EBX + 0x58]          ; 004566aa
    FSUBP ST2,ST0                       ; 004566ad
    FSUBP ST2,ST0                       ; 004566af
    FSTP float ptr [EBX + 0xc]          ; 004566b1
    FSTP float ptr [EBX + 0x4]          ; 004566b4
    ADD ESP,0x4                         ; 004566b7
    POP EDI                             ; 004566ba
    POP ESI                             ; 004566bb
    POP EBX                             ; 004566bc
    RET                                 ; 004566bd

