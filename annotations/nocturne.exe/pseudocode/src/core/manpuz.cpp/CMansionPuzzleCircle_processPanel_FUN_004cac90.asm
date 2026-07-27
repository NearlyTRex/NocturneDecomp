; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90(int param_1,int param_2,float param_3)
;
;
; XREF[1]:
;   core_manpuz.cpp_FUN_004c9cf0 at 004c9d17
;
; Referenced Globals:
;   TerminatedCString s_core_manpuz_cpp_00587f72
;   TerminatedCString s_CMansionPuzzleCircle_pro_00587f85
;   float FLOAT_005a0040 = 2
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cac90
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90
    PUSH ESI                            ; 004cac91
    PUSH EBP                            ; 004cac92
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cac93
    MOV ECX,dword ptr [ESP + 0x14]      ; 004cac97
    LEA EAX,[ECX*0x4 + 0x0]             ; 004cac9b
    SUB EAX,ECX                         ; 004caca2
    SHL EAX,0x3                         ; 004caca4
    ADD EAX,ECX                         ; 004caca7
    LEA EBX,[ESI + 0x5e8]               ; 004caca9
    SHL EAX,0x2                         ; 004cacaf
    ADD EBX,EAX                         ; 004cacb2
    CMP dword ptr [EBX],0x0             ; 004cacb4
    JNZ 0x004cacc6                      ; 004cacb7
        ;   XREF to: 004cacc6 (CONDITIONAL_JUMP)  ; LAB_004cacc6
    CMP dword ptr [EBX],0x0             ; 004cacb9
        ;   Label: LAB_004cacb9
    JZ 0x004cae0b                       ; 004cacbc
        ;   XREF to: 004cae0b (CONDITIONAL_JUMP)  ; LAB_004cae0b
    POP EBP                             ; 004cacc2
    POP ESI                             ; 004cacc3
    POP EBX                             ; 004cacc4
    RET                                 ; 004cacc5
    FLD float ptr [EBX + 0x8]           ; 004cacc6
        ;   Label: LAB_004cacc6
    FMUL float ptr [ESP + 0x18]         ; 004cacc9
    FDIV float ptr [0x005a0040]         ; 004caccd | FLOAT_005a0040
    FADD float ptr [EBX + 0x4]          ; 004cacd3
    FST float ptr [EBX + 0x4]           ; 004cacd6
    FLDZ                                ; 004cacd9
    FCOMPP                              ; 004cacdb
    FNSTSW AX                           ; 004cacdd
    SAHF                                ; 004cacdf
    JBE 0x004cacf0                      ; 004cace0
        ;   XREF to: 004cacf0 (CONDITIONAL_JUMP)  ; LAB_004cacf0
    MOV dword ptr [EBX + 0x8],0x0       ; 004cace2
    MOV dword ptr [EBX + 0x4],0x0       ; 004cace9
    FLD float ptr [EBX + 0x4]           ; 004cacf0
        ;   Label: LAB_004cacf0
    FLD1                                ; 004cacf3
    FCOMPP                              ; 004cacf5
    FNSTSW AX                           ; 004cacf7
    SAHF                                ; 004cacf9
    JA 0x004cacb9                       ; 004cacfa
        ;   XREF to: 004cacb9 (CONDITIONAL_JUMP)  ; LAB_004cacb9
    PUSH EDI                            ; 004cacfc
    PUSH ECX                            ; 004cacfd
    PUSH ESI                            ; 004cacfe
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0 ; 004cacff
        ;   XREF to: 004cb8e0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0()
    MOV EDX,EAX                         ; 004cad04
    SHL EAX,0x2                         ; 004cad06
    SUB EAX,EDX                         ; 004cad09
    SHL EAX,0x3                         ; 004cad0b
    ADD EAX,EDX                         ; 004cad0e
    ADD ESI,0x5e8                       ; 004cad10
    SHL EAX,0x2                         ; 004cad16
    ADD ESI,EAX                         ; 004cad19
    MOV EDI,dword ptr [ESI]             ; 004cad1b
    ADD ESP,0x8                         ; 004cad1d
    TEST EDI,EDI                        ; 004cad20
    JZ 0x004cad46                       ; 004cad22
        ;   XREF to: 004cad46 (CONDITIONAL_JUMP)  ; LAB_004cad46
    MOV EBP,0x587f72                    ; 004cad24 | = "..\\core\\manpuz.cpp"
    MOV EAX,0x45d                       ; 004cad29
    PUSH 0x587f85                       ; 004cad2e | = "CMansionPuzzleCircle::processPanel - ..."
    MOV dword ptr [0x01cc4800],EBP      ; 004cad33 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004cad39 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004cad3e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004cad43
    MOV EAX,ESI                         ; 004cad46
        ;   Label: LAB_004cad46
    MOV ECX,dword ptr [EBX]             ; 004cad48
    MOV EDX,EBX                         ; 004cad4a
    MOV dword ptr [ESI],ECX             ; 004cad4c
    LEA EDI,[EBX + 0xc]                 ; 004cad4e
    FLD float ptr [EBX + 0x4]           ; 004cad51
    LEA ECX,[ESI + 0xc]                 ; 004cad54
    FSTP float ptr [ESI + 0x4]          ; 004cad57
    MOV EBP,dword ptr [EBX + 0x8]       ; 004cad5a
    MOV dword ptr [ESI + 0x8],EBP       ; 004cad5d
    CMP ECX,EDI                         ; 004cad60
    JZ 0x004cad74                       ; 004cad62
        ;   XREF to: 004cad74 (CONDITIONAL_JUMP)  ; LAB_004cad74
    MOV EBP,dword ptr [EDI]             ; 004cad64
    MOV dword ptr [ECX],EBP             ; 004cad66
    MOV EBP,dword ptr [EDI + 0x4]       ; 004cad68
    MOV dword ptr [ECX + 0x4],EBP       ; 004cad6b
    MOV EBP,dword ptr [EDI + 0x8]       ; 004cad6e
    MOV dword ptr [ECX + 0x8],EBP       ; 004cad71
    LEA ECX,[EDX + 0x18]                ; 004cad74
        ;   Label: LAB_004cad74
    LEA EDI,[EAX + 0x18]                ; 004cad77
    CMP EDI,ECX                         ; 004cad7a
    JZ 0x004cad8e                       ; 004cad7c
        ;   XREF to: 004cad8e (CONDITIONAL_JUMP)  ; LAB_004cad8e
    MOV EBP,dword ptr [ECX]             ; 004cad7e
    MOV dword ptr [EDI],EBP             ; 004cad80
    MOV EBP,dword ptr [ECX + 0x4]       ; 004cad82
    MOV dword ptr [EDI + 0x4],EBP       ; 004cad85
    MOV EBP,dword ptr [ECX + 0x8]       ; 004cad88
    MOV dword ptr [EDI + 0x8],EBP       ; 004cad8b
    MOV ECX,dword ptr [EDX + 0x24]      ; 004cad8e
        ;   Label: LAB_004cad8e
    MOV dword ptr [EAX + 0x24],ECX      ; 004cad91
    MOV ECX,dword ptr [EDX + 0x28]      ; 004cad94
    MOV dword ptr [EAX + 0x28],ECX      ; 004cad97
    MOV ECX,dword ptr [EDX + 0x2c]      ; 004cad9a
    MOV dword ptr [EAX + 0x2c],ECX      ; 004cad9d
    MOV ECX,dword ptr [EDX + 0x30]      ; 004cada0
    MOV dword ptr [EAX + 0x30],ECX      ; 004cada3
    MOV ECX,dword ptr [EDX + 0x34]      ; 004cada6
    MOV dword ptr [EAX + 0x34],ECX      ; 004cada9
    MOV ECX,dword ptr [EDX + 0x38]      ; 004cadac
    MOV dword ptr [EAX + 0x38],ECX      ; 004cadaf
    MOV ECX,dword ptr [EDX + 0x3c]      ; 004cadb2
    MOV dword ptr [EAX + 0x3c],ECX      ; 004cadb5
    MOV ECX,dword ptr [EDX + 0x40]      ; 004cadb8
    MOV dword ptr [EAX + 0x40],ECX      ; 004cadbb
    MOV ECX,dword ptr [EDX + 0x44]      ; 004cadbe
    MOV dword ptr [EAX + 0x44],ECX      ; 004cadc1
    MOV ECX,dword ptr [EDX + 0x48]      ; 004cadc4
    MOV dword ptr [EAX + 0x48],ECX      ; 004cadc7
    MOV ECX,dword ptr [EDX + 0x4c]      ; 004cadca
    MOV dword ptr [EAX + 0x4c],ECX      ; 004cadcd
    MOV ECX,dword ptr [EDX + 0x50]      ; 004cadd0
    MOV dword ptr [EAX + 0x50],ECX      ; 004cadd3
    ADD EAX,0x58                        ; 004cadd6
    MOV ECX,dword ptr [EDX + 0x54]      ; 004cadd9
    ADD EDX,0x58                        ; 004caddc
    MOV dword ptr [EAX + -0x4],ECX      ; 004caddf
    CMP EAX,EDX                         ; 004cade2
    JZ 0x004cadf6                       ; 004cade4
        ;   XREF to: 004cadf6 (CONDITIONAL_JUMP)  ; LAB_004cadf6
    MOV ECX,dword ptr [EDX]             ; 004cade6
    MOV dword ptr [EAX],ECX             ; 004cade8
    MOV ECX,dword ptr [EDX + 0x4]       ; 004cadea
    MOV dword ptr [EAX + 0x4],ECX       ; 004caded
    MOV ECX,dword ptr [EDX + 0x8]       ; 004cadf0
    MOV dword ptr [EAX + 0x8],ECX       ; 004cadf3
    MOV dword ptr [ESI + 0x8],0x0       ; 004cadf6
        ;   Label: LAB_004cadf6
    MOV dword ptr [ESI + 0x4],0x0       ; 004cadfd
    MOV dword ptr [EBX],0x0             ; 004cae04
    POP EDI                             ; 004cae0a
    MOV dword ptr [EBX + 0x8],0x0       ; 004cae0b
        ;   Label: LAB_004cae0b
    MOV dword ptr [EBX + 0x4],0x0       ; 004cae12
    POP EBP                             ; 004cae19
    POP ESI                             ; 004cae1a
    POP EBX                             ; 004cae1b
    RET                                 ; 004cae1c

