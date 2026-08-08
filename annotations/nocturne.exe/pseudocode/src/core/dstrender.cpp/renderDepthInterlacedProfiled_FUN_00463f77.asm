; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrender_cpp_renderDepthInterlacedProfiled_FUN_00463f77(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 at 0045f24a
;
; Referenced Globals:
;   int INT_005ae708 = 0x1
;   undefined4 DAT_01b4d764
;   undefined4 DAT_01b4d768
;   uint*[1200] g_ZBufferScanlineArray
;   uint[1600] g_ReciprocalLookupTable
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00463f77
        ;   Label: core_dstrender.cpp_renderDepthInterlacedProfiled_FUN_00463f77
    PUSH EDI                            ; 00463f78
    TEST EBX,0x1                        ; 00463f79
    JZ 0x00463f84                       ; 00463f7f
        ;   XREF to: 00463f84 (CONDITIONAL_JUMP)  ; LAB_00463f84
    POP EDI                             ; 00463f81
    POP ESI                             ; 00463f82
    RET                                 ; 00463f83
    PUSH EBP                            ; 00463f84
        ;   Label: LAB_00463f84
    MOV EAX,dword ptr [ESI + 0x8]       ; 00463f85
    MOV ECX,dword ptr [EDI + 0x8]       ; 00463f88
    CMP EAX,ECX                         ; 00463f8b
    JBE 0x00463f92                      ; 00463f8d
        ;   XREF to: 00463f92 (CONDITIONAL_JUMP)  ; LAB_00463f92
    XCHG EAX,ECX                        ; 00463f8f
    XCHG EDI,ESI                        ; 00463f90
    SHR EAX,0x10                        ; 00463f92
        ;   Label: LAB_00463f92
    SHR ECX,0x10                        ; 00463f95
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd4260] ; 00463f98 | g_ZBufferScanlineArray
    SUB ECX,EAX                         ; 00463f9f
    JLE 0x00463fd0                      ; 00463fa1
        ;   XREF to: 00463fd0 (CONDITIONAL_JUMP)  ; LAB_00463fd0
    SHL EAX,0x2                         ; 00463fa3
    ADD EBP,EAX                         ; 00463fa6
    INC ECX                             ; 00463fa8
    MOV EAX,dword ptr [EDI + 0x28]      ; 00463fa9
    SUB EAX,dword ptr [ESI + 0x28]      ; 00463fac
    IMUL dword ptr [ECX*0x4 + 0x1c00c80] ; 00463faf | g_ReciprocalLookupTable
    MOV EBX,EBP                         ; 00463fb6
    DEC ECX                             ; 00463fb8
    MOV ESI,dword ptr [ESI + 0x28]      ; 00463fb9
    MOV EAX,ESI                         ; 00463fbc
        ;   Label: LAB_00463fbc
    SHR EAX,0x8                         ; 00463fbe
    CMP EAX,dword ptr [EBX]             ; 00463fc1
    JGE 0x00463fd4                      ; 00463fc3
        ;   XREF to: 00463fd4 (CONDITIONAL_JUMP)  ; LAB_00463fd4
    LEA ESI,[ESI + EDX*0x2]             ; 00463fc5
        ;   Label: LAB_00463fc5
    ADD EBX,0x8                         ; 00463fc8
    SUB ECX,0x2                         ; 00463fcb
    JG 0x00463fbc                       ; 00463fce
        ;   XREF to: 00463fbc (CONDITIONAL_JUMP)  ; LAB_00463fbc
    POP EBP                             ; 00463fd0
        ;   Label: LAB_00463fd0
    POP EDI                             ; 00463fd1
    POP ESI                             ; 00463fd2
    RET                                 ; 00463fd3
    MOV EAX,[0x01b4d764]                ; 00463fd4 | DAT_01b4d764
        ;   Label: LAB_00463fd4
    INC EAX                             ; 00463fd9
    MOV [0x01b4d764],EAX                ; 00463fda | DAT_01b4d764
    CMP EAX,dword ptr [0x005ae708]      ; 00463fdf | INT_005ae708
    JC 0x00463fc5                       ; 00463fe5
        ;   XREF to: 00463fc5 (CONDITIONAL_JUMP)  ; LAB_00463fc5
    MOV dword ptr [0x01b4d768],0x1      ; 00463fe7 | DAT_01b4d768
    POP EBP                             ; 00463ff1
    POP EDI                             ; 00463ff2
    POP ESI                             ; 00463ff3
    RET                                 ; 00463ff4

