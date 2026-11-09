; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00553f40(int param_1)
;
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430 at 005544ea
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553f40
        ;   Label: sound_sndmain.cpp_FUN_00553f40
    PUSH ESI                            ; 00553f41
    MOV EDX,dword ptr [ESP + 0xc]       ; 00553f42
    MOV ECX,dword ptr [EDX + 0x20]      ; 00553f46
    CMP ECX,0x1                         ; 00553f49
    JNZ 0x00553fed                      ; 00553f4c
        ;   XREF to: 00553fed (CONDITIONAL_JUMP)  ; LAB_00553fed
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00553f52
    FLD float ptr [ECX]                 ; 00553f55
    FCOMP double ptr [EDX + 0x4]        ; 00553f57
    FNSTSW AX                           ; 00553f5a
    SAHF                                ; 00553f5c
    JZ 0x00553fd1                       ; 00553f5d
        ;   XREF to: 00553fd1 (CONDITIONAL_JUMP)  ; LAB_00553fd1
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00553f5f
        ;   Label: LAB_00553f5f
    MOV BL,byte ptr [EDX + 0x118]       ; 00553f62
    FLD float ptr [ECX]                 ; 00553f68
    OR BL,0x2                           ; 00553f6a
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00553f6d
    FSTP double ptr [EDX + 0x4]         ; 00553f70
    FLD float ptr [ECX + 0x4]           ; 00553f73
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00553f76
    FSTP double ptr [EDX + 0xc]         ; 00553f79
    FLD float ptr [ECX + 0x8]           ; 00553f7c
    FSTP double ptr [EDX + 0x14]        ; 00553f7f
    MOV byte ptr [EDX + 0x118],BL       ; 00553f82
    MOV ESI,dword ptr [EDX + 0x34]      ; 00553f88
        ;   Label: LAB_00553f88
    CMP ESI,0x1                         ; 00553f8b
    JNZ 0x0055406f                      ; 00553f8e
        ;   XREF to: 0055406f (CONDITIONAL_JUMP)  ; LAB_0055406f
    MOV ECX,dword ptr [EDX + 0x30]      ; 00553f94
    FLD float ptr [EDX + 0x24]          ; 00553f97
    FCOMP float ptr [ECX]               ; 00553f9a
    FNSTSW AX                           ; 00553f9c
    SAHF                                ; 00553f9e
    JZ 0x0055404e                       ; 00553f9f
        ;   XREF to: 0055404e (CONDITIONAL_JUMP)  ; LAB_0055404e
    MOV ECX,dword ptr [EDX + 0x30]      ; 00553fa5
        ;   Label: LAB_00553fa5
    FLD float ptr [ECX]                 ; 00553fa8
    MOV ECX,dword ptr [EDX + 0x30]      ; 00553faa
    FSTP float ptr [EDX + 0x24]         ; 00553fad
    FLD float ptr [ECX + 0x4]           ; 00553fb0
    MOV ECX,dword ptr [EDX + 0x30]      ; 00553fb3
    FSTP float ptr [EDX + 0x28]         ; 00553fb6
    FLD float ptr [ECX + 0x8]           ; 00553fb9
    MOV CL,byte ptr [EDX + 0x118]       ; 00553fbc
    OR CL,0x4                           ; 00553fc2
    FSTP float ptr [EDX + 0x2c]         ; 00553fc5
    MOV byte ptr [EDX + 0x118],CL       ; 00553fc8
    POP ESI                             ; 00553fce
        ;   Label: LAB_00553fce
    POP EBX                             ; 00553fcf
    RET                                 ; 00553fd0
    FLD float ptr [ECX + 0x4]           ; 00553fd1
        ;   Label: LAB_00553fd1
    FCOMP double ptr [EDX + 0xc]        ; 00553fd4
    FNSTSW AX                           ; 00553fd7
    SAHF                                ; 00553fd9
    JNZ 0x00553f5f                      ; 00553fda
        ;   XREF to: 00553f5f (CONDITIONAL_JUMP)  ; LAB_00553f5f
    FLD float ptr [ECX + 0x8]           ; 00553fdc
    FCOMP double ptr [EDX + 0x14]       ; 00553fdf
    FNSTSW AX                           ; 00553fe2
    SAHF                                ; 00553fe4
    JNZ 0x00553f5f                      ; 00553fe5
        ;   XREF to: 00553f5f (CONDITIONAL_JUMP)  ; LAB_00553f5f
    JMP 0x00553f88                      ; 00553feb
        ;   XREF to: 00553f88 (UNCONDITIONAL_JUMP)  ; LAB_00553f88
    CMP ECX,0x2                         ; 00553fed
        ;   Label: LAB_00553fed
    JNZ 0x00553f88                      ; 00553ff0
        ;   XREF to: 00553f88 (CONDITIONAL_JUMP)  ; LAB_00553f88
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00553ff2
    FLD double ptr [EDX + 0x4]          ; 00553ff5
    FCOMP double ptr [ECX]              ; 00553ff8
    FNSTSW AX                           ; 00553ffa
    SAHF                                ; 00553ffc
    JZ 0x00554033                       ; 00553ffd
        ;   XREF to: 00554033 (CONDITIONAL_JUMP)  ; LAB_00554033
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00553fff
        ;   Label: LAB_00553fff
    MOV AH,byte ptr [EDX + 0x118]       ; 00554002
    FLD double ptr [ECX]                ; 00554008
    OR AH,0x2                           ; 0055400a
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0055400d
    FSTP double ptr [EDX + 0x4]         ; 00554010
    FLD double ptr [ECX + 0x8]          ; 00554013
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00554016
    FSTP double ptr [EDX + 0xc]         ; 00554019
    MOV EBX,dword ptr [ECX + 0x10]      ; 0055401c
    MOV dword ptr [EDX + 0x14],EBX      ; 0055401f
    MOV EBX,dword ptr [ECX + 0x14]      ; 00554022
    MOV dword ptr [EDX + 0x18],EBX      ; 00554025
    MOV byte ptr [EDX + 0x118],AH       ; 00554028
    JMP 0x00553f88                      ; 0055402e
        ;   XREF to: 00553f88 (UNCONDITIONAL_JUMP)  ; LAB_00553f88
    FLD double ptr [EDX + 0xc]          ; 00554033
        ;   Label: LAB_00554033
    FCOMP double ptr [ECX + 0x8]        ; 00554036
    FNSTSW AX                           ; 00554039
    SAHF                                ; 0055403b
    JNZ 0x00553fff                      ; 0055403c
        ;   XREF to: 00553fff (CONDITIONAL_JUMP)  ; LAB_00553fff
    FLD double ptr [EDX + 0x14]         ; 0055403e
    FCOMP double ptr [ECX + 0x10]       ; 00554041
    FNSTSW AX                           ; 00554044
    SAHF                                ; 00554046
    JNZ 0x00553fff                      ; 00554047
        ;   XREF to: 00553fff (CONDITIONAL_JUMP)  ; LAB_00553fff
    JMP 0x00553f88                      ; 00554049
        ;   XREF to: 00553f88 (UNCONDITIONAL_JUMP)  ; LAB_00553f88
    FLD float ptr [EDX + 0x28]          ; 0055404e
        ;   Label: LAB_0055404e
    FCOMP float ptr [ECX + 0x4]         ; 00554051
    FNSTSW AX                           ; 00554054
    SAHF                                ; 00554056
    JNZ 0x00553fa5                      ; 00554057
        ;   XREF to: 00553fa5 (CONDITIONAL_JUMP)  ; LAB_00553fa5
    FLD float ptr [EDX + 0x2c]          ; 0055405d
    FCOMP float ptr [ECX + 0x8]         ; 00554060
    FNSTSW AX                           ; 00554063
    SAHF                                ; 00554065
    JNZ 0x00553fa5                      ; 00554066
        ;   XREF to: 00553fa5 (CONDITIONAL_JUMP)  ; LAB_00553fa5
    POP ESI                             ; 0055406c
    POP EBX                             ; 0055406d
    RET                                 ; 0055406e
    CMP ESI,0x2                         ; 0055406f
        ;   Label: LAB_0055406f
    JNZ 0x00553fce                      ; 00554072
        ;   XREF to: 00553fce (CONDITIONAL_JUMP)  ; LAB_00553fce
    MOV ECX,dword ptr [EDX + 0x30]      ; 00554078
    FLD float ptr [EDX + 0x24]          ; 0055407b
    FCOMP double ptr [ECX]              ; 0055407e
    FNSTSW AX                           ; 00554080
    SAHF                                ; 00554082
    JZ 0x005540b1                       ; 00554083
        ;   XREF to: 005540b1 (CONDITIONAL_JUMP)  ; LAB_005540b1
    MOV ECX,dword ptr [EDX + 0x30]      ; 00554085
        ;   Label: LAB_00554085
    MOV BH,byte ptr [EDX + 0x118]       ; 00554088
    FLD double ptr [ECX]                ; 0055408e
    OR BH,0x4                           ; 00554090
    MOV ECX,dword ptr [EDX + 0x30]      ; 00554093
    FSTP float ptr [EDX + 0x24]         ; 00554096
    FLD double ptr [ECX + 0x8]          ; 00554099
    MOV ECX,dword ptr [EDX + 0x30]      ; 0055409c
    FSTP float ptr [EDX + 0x28]         ; 0055409f
    FLD double ptr [ECX + 0x10]         ; 005540a2
    FSTP float ptr [EDX + 0x2c]         ; 005540a5
    MOV byte ptr [EDX + 0x118],BH       ; 005540a8
    POP ESI                             ; 005540ae
    POP EBX                             ; 005540af
    RET                                 ; 005540b0
    FLD float ptr [EDX + 0x28]          ; 005540b1
        ;   Label: LAB_005540b1
    FCOMP double ptr [ECX + 0x8]        ; 005540b4
    FNSTSW AX                           ; 005540b7
    SAHF                                ; 005540b9
    JNZ 0x00554085                      ; 005540ba
        ;   XREF to: 00554085 (CONDITIONAL_JUMP)  ; LAB_00554085
    FLD float ptr [EDX + 0x2c]          ; 005540bc
    FCOMP double ptr [ECX + 0x10]       ; 005540bf
    FNSTSW AX                           ; 005540c2
    SAHF                                ; 005540c4
    JNZ 0x00554085                      ; 005540c5
        ;   XREF to: 00554085 (CONDITIONAL_JUMP)  ; LAB_00554085
    POP ESI                             ; 005540c7
    POP EBX                             ; 005540c8
    RET                                 ; 005540c9

