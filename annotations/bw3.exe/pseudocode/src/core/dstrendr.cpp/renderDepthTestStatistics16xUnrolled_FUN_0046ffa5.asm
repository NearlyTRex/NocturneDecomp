; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderDepthTestStatistics16xUnrolled_FUN_0046ffa5(void)
;
;
; XREF[1]:
;   engine_drender.cpp_FUN_0046b470 at 0046b558
;
; Referenced Globals:
;   undefined4 DAT_01bdd810
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c6b5d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046ffa5
        ;   Label: core_dstrendr.cpp_renderDepthTestStatistics16xUnrolled_FUN_0046ffa5
    PUSH EDI                            ; 0046ffa6
    PUSH EBP                            ; 0046ffa7
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046ffa8
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046ffab
    CMP EAX,ECX                         ; 0046ffae
    JBE 0x0046ffb5                      ; 0046ffb0
        ;   XREF to: 0046ffb5 (CONDITIONAL_JUMP)  ; LAB_0046ffb5
    XCHG EAX,ECX                        ; 0046ffb2
    XCHG EDI,ESI                        ; 0046ffb3
    SHR EAX,0x10                        ; 0046ffb5
        ;   Label: LAB_0046ffb5
    SHR ECX,0x10                        ; 0046ffb8
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 0046ffbb | DAT_01c60dac
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 0046ffc2 | DAT_01c5faec
    SUB ECX,EAX                         ; 0046ffc9
    JLE 0x0047012c                      ; 0046ffcb
        ;   XREF to: 0047012c (CONDITIONAL_JUMP)  ; LAB_0047012c
    ADD EBX,EAX                         ; 0046ffd1
    SHL EAX,0x2                         ; 0046ffd3
    ADD EBP,EAX                         ; 0046ffd6
    INC ECX                             ; 0046ffd8
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046ffd9
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046ffdc
    IMUL dword ptr [ECX*0x4 + 0x1c6b5d0] ; 0046ffdf | DAT_01c6b5d0
    MOV EDI,EBX                         ; 0046ffe6
    MOV EBX,EBP                         ; 0046ffe8
    DEC ECX                             ; 0046ffea
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046ffeb
    MOV EAX,[0x01bdd810]                ; 0046ffee | DAT_01bdd810
    SUB ECX,0x4                         ; 0046fff3
        ;   Label: LAB_0046fff3
    JL 0x004700f8                       ; 0046fff6
        ;   XREF to: 004700f8 (CONDITIONAL_JUMP)  ; LAB_004700f8
    MOV EBP,ESI                         ; 0046fffc
    SHR EBP,0x8                         ; 0046fffe
    CMP EBP,dword ptr [EBX]             ; 00470001
    SBB EAX,-0x1                        ; 00470003
    ADD ESI,EDX                         ; 00470006
    MOV EBP,ESI                         ; 00470008
    SHR EBP,0x8                         ; 0047000a
    CMP EBP,dword ptr [EBX + 0x4]       ; 0047000d
    SBB EAX,-0x1                        ; 00470010
    ADD ESI,EDX                         ; 00470013
    MOV EBP,ESI                         ; 00470015
    SHR EBP,0x8                         ; 00470017
    CMP EBP,dword ptr [EBX + 0x8]       ; 0047001a
    SBB EAX,-0x1                        ; 0047001d
    ADD ESI,EDX                         ; 00470020
    MOV EBP,ESI                         ; 00470022
    SHR EBP,0x8                         ; 00470024
    CMP EBP,dword ptr [EBX + 0xc]       ; 00470027
    SBB EAX,-0x1                        ; 0047002a
    ADD ESI,EDX                         ; 0047002d
    ADD EBX,0x10                        ; 0047002f
    ADD EDI,0x4                         ; 00470032
    SUB ECX,0x4                         ; 00470035
    JL 0x004700f8                       ; 00470038
        ;   XREF to: 004700f8 (CONDITIONAL_JUMP)  ; LAB_004700f8
    MOV EBP,ESI                         ; 0047003e
    SHR EBP,0x8                         ; 00470040
    CMP EBP,dword ptr [EBX]             ; 00470043
    SBB EAX,-0x1                        ; 00470045
    ADD ESI,EDX                         ; 00470048
    MOV EBP,ESI                         ; 0047004a
    SHR EBP,0x8                         ; 0047004c
    CMP EBP,dword ptr [EBX + 0x4]       ; 0047004f
    SBB EAX,-0x1                        ; 00470052
    ADD ESI,EDX                         ; 00470055
    MOV EBP,ESI                         ; 00470057
    SHR EBP,0x8                         ; 00470059
    CMP EBP,dword ptr [EBX + 0x8]       ; 0047005c
    SBB EAX,-0x1                        ; 0047005f
    ADD ESI,EDX                         ; 00470062
    MOV EBP,ESI                         ; 00470064
    SHR EBP,0x8                         ; 00470066
    CMP EBP,dword ptr [EBX + 0xc]       ; 00470069
    SBB EAX,-0x1                        ; 0047006c
    ADD ESI,EDX                         ; 0047006f
    ADD EBX,0x10                        ; 00470071
    ADD EDI,0x4                         ; 00470074
    SUB ECX,0x4                         ; 00470077
    JL 0x004700f8                       ; 0047007a
        ;   XREF to: 004700f8 (CONDITIONAL_JUMP)  ; LAB_004700f8
    MOV EBP,ESI                         ; 0047007c
    SHR EBP,0x8                         ; 0047007e
    CMP EBP,dword ptr [EBX]             ; 00470081
    SBB EAX,-0x1                        ; 00470083
    ADD ESI,EDX                         ; 00470086
    MOV EBP,ESI                         ; 00470088
    SHR EBP,0x8                         ; 0047008a
    CMP EBP,dword ptr [EBX + 0x4]       ; 0047008d
    SBB EAX,-0x1                        ; 00470090
    ADD ESI,EDX                         ; 00470093
    MOV EBP,ESI                         ; 00470095
    SHR EBP,0x8                         ; 00470097
    CMP EBP,dword ptr [EBX + 0x8]       ; 0047009a
    SBB EAX,-0x1                        ; 0047009d
    ADD ESI,EDX                         ; 004700a0
    MOV EBP,ESI                         ; 004700a2
    SHR EBP,0x8                         ; 004700a4
    CMP EBP,dword ptr [EBX + 0xc]       ; 004700a7
    SBB EAX,-0x1                        ; 004700aa
    ADD ESI,EDX                         ; 004700ad
    ADD EBX,0x10                        ; 004700af
    ADD EDI,0x4                         ; 004700b2
    SUB ECX,0x4                         ; 004700b5
    JL 0x004700f8                       ; 004700b8
        ;   XREF to: 004700f8 (CONDITIONAL_JUMP)  ; LAB_004700f8
    MOV EBP,ESI                         ; 004700ba
    SHR EBP,0x8                         ; 004700bc
    CMP EBP,dword ptr [EBX]             ; 004700bf
    SBB EAX,-0x1                        ; 004700c1
    ADD ESI,EDX                         ; 004700c4
    MOV EBP,ESI                         ; 004700c6
    SHR EBP,0x8                         ; 004700c8
    CMP EBP,dword ptr [EBX + 0x4]       ; 004700cb
    SBB EAX,-0x1                        ; 004700ce
    ADD ESI,EDX                         ; 004700d1
    MOV EBP,ESI                         ; 004700d3
    SHR EBP,0x8                         ; 004700d5
    CMP EBP,dword ptr [EBX + 0x8]       ; 004700d8
    SBB EAX,-0x1                        ; 004700db
    ADD ESI,EDX                         ; 004700de
    MOV EBP,ESI                         ; 004700e0
    SHR EBP,0x8                         ; 004700e2
    CMP EBP,dword ptr [EBX + 0xc]       ; 004700e5
    SBB EAX,-0x1                        ; 004700e8
    ADD ESI,EDX                         ; 004700eb
    ADD EBX,0x10                        ; 004700ed
    ADD EDI,0x4                         ; 004700f0
    JMP 0x0046fff3                      ; 004700f3
        ;   XREF to: 0046fff3 (UNCONDITIONAL_JUMP)  ; LAB_0046fff3
    ADD ECX,0x4                         ; 004700f8
        ;   Label: LAB_004700f8
    JLE 0x00470127                      ; 004700fb
        ;   XREF to: 00470127 (CONDITIONAL_JUMP)  ; LAB_00470127
    MOV EBP,ESI                         ; 004700fd
    SHR EBP,0x8                         ; 004700ff
    CMP EBP,dword ptr [EBX]             ; 00470102
    SBB EAX,-0x1                        ; 00470104
    ADD ESI,EDX                         ; 00470107
    DEC ECX                             ; 00470109
    JLE 0x00470127                      ; 0047010a
        ;   XREF to: 00470127 (CONDITIONAL_JUMP)  ; LAB_00470127
    MOV EBP,ESI                         ; 0047010c
    SHR EBP,0x8                         ; 0047010e
    CMP EBP,dword ptr [EBX + 0x4]       ; 00470111
    SBB EAX,-0x1                        ; 00470114
    ADD ESI,EDX                         ; 00470117
    DEC ECX                             ; 00470119
    JLE 0x00470127                      ; 0047011a
        ;   XREF to: 00470127 (CONDITIONAL_JUMP)  ; LAB_00470127
    MOV EBP,ESI                         ; 0047011c
    SHR EBP,0x8                         ; 0047011e
    CMP EBP,dword ptr [EBX + 0x8]       ; 00470121
    SBB EAX,-0x1                        ; 00470124
    MOV [0x01bdd810],EAX                ; 00470127 | DAT_01bdd810
        ;   Label: LAB_00470127
    POP EBP                             ; 0047012c
        ;   Label: LAB_0047012c
    POP EDI                             ; 0047012d
    POP ESI                             ; 0047012e
    RET                                 ; 0047012f

