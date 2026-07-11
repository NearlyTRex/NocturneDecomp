; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004858f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,undefined4 *param_6,int param_7,int param_8,int param_9,undefined4 param_10,undefined4 param_11)
;
;
; XREF[2]:
;   FUN_0048b370 at 0048b3b8
;   FUN_0048b3e0 at 0048b427
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004858f0
        ;   Label: FUN_004858f0
    PUSH ESI                            ; 004858f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004858f2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004858f6
    MOV EBX,dword ptr [ESP + 0x14]      ; 004858fa
    MOV ECX,dword ptr [ESP + 0x20]      ; 004858fe
    CMP EDX,EAX                         ; 00485902
    JNZ 0x0048596d                      ; 00485904
        ;   XREF to: 0048596d (CONDITIONAL_JUMP)  ; LAB_0048596d
    LEA EAX,[EDX + 0xc]                 ; 00485906
        ;   Label: LAB_00485906
    CMP EAX,EBX                         ; 00485909
    JZ 0x0048591d                       ; 0048590b
        ;   XREF to: 0048591d (CONDITIONAL_JUMP)  ; LAB_0048591d
    MOV ESI,dword ptr [EBX]             ; 0048590d
    MOV dword ptr [EAX],ESI             ; 0048590f
    MOV ESI,dword ptr [EBX + 0x4]       ; 00485911
    MOV dword ptr [EAX + 0x4],ESI       ; 00485914
    MOV ESI,dword ptr [EBX + 0x8]       ; 00485917
    MOV dword ptr [EAX + 0x8],ESI       ; 0048591a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048591d
        ;   Label: LAB_0048591d
    MOV dword ptr [EDX + 0x18],EAX      ; 00485921
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00485924
    MOV dword ptr [EDX + 0x1c],EAX      ; 00485928
    FLD float ptr [EDX + 0x1c]          ; 0048592b
    FLDZ                                ; 0048592e
    FCOMPP                              ; 00485930
    FNSTSW AX                           ; 00485932
    SAHF                                ; 00485934
    JNC 0x0048593e                      ; 00485935
        ;   XREF to: 0048593e (CONDITIONAL_JUMP)  ; LAB_0048593e
    LEA EAX,[EDX + 0x20]                ; 00485937
    CMP EAX,ECX                         ; 0048593a
    JNZ 0x0048597f                      ; 0048593c
        ;   XREF to: 0048597f (CONDITIONAL_JUMP)  ; LAB_0048597f
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048593e
        ;   Label: LAB_0048593e
    SHL EAX,0x7                         ; 00485942
    MOV dword ptr [EDX + 0x2c],EAX      ; 00485945
    MOV EAX,dword ptr [ESP + 0x28]      ; 00485948
    SHL EAX,0x7                         ; 0048594c
    MOV dword ptr [EDX + 0x30],EAX      ; 0048594f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00485952
    SHL EAX,0x7                         ; 00485956
    MOV dword ptr [EDX + 0x34],EAX      ; 00485959
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048595c
    MOV dword ptr [EDX + 0x38],EAX      ; 00485960
    MOV EAX,dword ptr [ESP + 0x34]      ; 00485963
    MOV dword ptr [EDX + 0x3c],EAX      ; 00485967
    POP ESI                             ; 0048596a
    POP EBX                             ; 0048596b
    RET                                 ; 0048596c
    MOV ESI,dword ptr [EAX]             ; 0048596d
        ;   Label: LAB_0048596d
    MOV dword ptr [EDX],ESI             ; 0048596f
    MOV ESI,dword ptr [EAX + 0x4]       ; 00485971
    MOV dword ptr [EDX + 0x4],ESI       ; 00485974
    MOV ESI,dword ptr [EAX + 0x8]       ; 00485977
    MOV dword ptr [EDX + 0x8],ESI       ; 0048597a
    JMP 0x00485906                      ; 0048597d
        ;   XREF to: 00485906 (UNCONDITIONAL_JUMP)  ; LAB_00485906
    MOV EBX,dword ptr [ECX]             ; 0048597f
        ;   Label: LAB_0048597f
    MOV dword ptr [EAX],EBX             ; 00485981
    MOV EBX,dword ptr [ECX + 0x4]       ; 00485983
    MOV dword ptr [EAX + 0x4],EBX       ; 00485986
    MOV EBX,dword ptr [ECX + 0x8]       ; 00485989
    MOV dword ptr [EAX + 0x8],EBX       ; 0048598c
    JMP 0x0048593e                      ; 0048598f
        ;   XREF to: 0048593e (UNCONDITIONAL_JUMP)  ; LAB_0048593e

