; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00440560(CDemonCamera *this_ptr,CDemonLight *light_source)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
;
; XREF[1]:
;   core_set.cpp_FUN_0052d3c0 at 0052d817
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440560
        ;   Label: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00440560
    PUSH ESI                            ; 00440561
    PUSH EDI                            ; 00440562
    PUSH EBP                            ; 00440563
    SUB ESP,0xc                         ; 00440564
    MOV EBP,dword ptr [ESP + 0x20]      ; 00440567
    MOV EDI,dword ptr [ESP + 0x24]      ; 0044056b
    XOR EBX,EBX                         ; 0044056f
    MOV ECX,dword ptr [EBP + 0x154]     ; 00440571
    MOV dword ptr [ESP],EBX             ; 00440577
    TEST ECX,ECX                        ; 0044057a
    JLE 0x00440615                      ; 0044057c
        ;   XREF to: 00440615 (CONDITIONAL_JUMP)  ; LAB_00440615
    MOV EAX,dword ptr [EDI + 0x1c4c]    ; 00440582
    MOV EDX,dword ptr [EDI + 0x1c48]    ; 00440588
    MOV dword ptr [ESP + 0x4],EAX       ; 0044058e
    MOV dword ptr [ESP + 0x8],EDX       ; 00440592
    MOV ESI,dword ptr [EDI + 0x14c8]    ; 00440596
        ;   Label: LAB_00440596
    MOV EAX,dword ptr [EDI + 0x1888]    ; 0044059c
    SUB EAX,ESI                         ; 004405a2
    LEA EDX,[EAX + 0x1]                 ; 004405a4
    LEA ECX,[ESI*0x4 + 0x0]             ; 004405a7
    MOV EAX,dword ptr [ESP + 0x8]       ; 004405ae
    MOV ESI,dword ptr [ESP + 0x4]       ; 004405b2
    ADD EAX,ECX                         ; 004405b6
    ADD ECX,ESI                         ; 004405b8
    TEST EDX,EDX                        ; 004405ba
    JLE 0x004405de                      ; 004405bc
        ;   XREF to: 004405de (CONDITIONAL_JUMP)  ; LAB_004405de
    CMP dword ptr [EAX],0x0             ; 004405be
        ;   Label: LAB_004405be
    JBE 0x004405d3                      ; 004405c1
        ;   XREF to: 004405d3 (CONDITIONAL_JUMP)  ; LAB_004405d3
    MOV ESI,dword ptr [ECX]             ; 004405c3
    MOV SI,word ptr [ESI]               ; 004405c5
    AND ESI,0xffff                      ; 004405c8
    CMP ESI,dword ptr [EAX]             ; 004405ce
    JBE 0x004405d3                      ; 004405d0
        ;   XREF to: 004405d3 (CONDITIONAL_JUMP)  ; LAB_004405d3
    INC EBX                             ; 004405d2
    ADD EAX,0x4                         ; 004405d3
        ;   Label: LAB_004405d3
    DEC EDX                             ; 004405d6
    ADD ECX,0x4                         ; 004405d7
    TEST EDX,EDX                        ; 004405da
    JG 0x004405be                       ; 004405dc
        ;   XREF to: 004405be (CONDITIONAL_JUMP)  ; LAB_004405be
    CMP EBX,0x300                       ; 004405de
        ;   Label: LAB_004405de
    JG 0x0044061f                       ; 004405e4
        ;   XREF to: 0044061f (CONDITIONAL_JUMP)  ; LAB_0044061f
    MOV ESI,dword ptr [ESP + 0x4]       ; 004405e6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004405ea
    MOV EDX,dword ptr [ESP]             ; 004405ee
    ADD EDI,0x4                         ; 004405f1
    MOV ECX,dword ptr [EBP + 0x154]     ; 004405f4
    ADD ESI,0x500                       ; 004405fa
    ADD EAX,0x500                       ; 00440600
    INC EDX                             ; 00440605
    MOV dword ptr [ESP + 0x4],ESI       ; 00440606
    MOV dword ptr [ESP + 0x8],EAX       ; 0044060a
    MOV dword ptr [ESP],EDX             ; 0044060e
    CMP EDX,ECX                         ; 00440611
    JL 0x00440596                       ; 00440613
        ;   XREF to: 00440596 (CONDITIONAL_JUMP)  ; LAB_00440596
    XOR EAX,EAX                         ; 00440615
        ;   Label: LAB_00440615
    ADD ESP,0xc                         ; 00440617
    POP EBP                             ; 0044061a
    POP EDI                             ; 0044061b
    POP ESI                             ; 0044061c
    POP EBX                             ; 0044061d
    RET                                 ; 0044061e
    MOV EAX,0x1                         ; 0044061f
        ;   Label: LAB_0044061f
    ADD ESP,0xc                         ; 00440624
    POP EBP                             ; 00440627
    POP EDI                             ; 00440628
    POP ESI                             ; 00440629
    POP EBX                             ; 0044062a
    RET                                 ; 0044062b

