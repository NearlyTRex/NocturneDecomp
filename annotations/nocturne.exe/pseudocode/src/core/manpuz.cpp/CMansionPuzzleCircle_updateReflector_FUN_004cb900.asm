; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900(int param_1,int param_2,float param_3)
;
;
; XREF[1]:
;   core_manpuz.cpp_FUN_004c9cf0 at 004c9d2d
;
; Referenced Globals:
;   float FLOAT_005a004c = 2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004cb900
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cb904
    SUB EAX,EDX                         ; 004cb90b
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cb90d
    SHL EAX,0x5                         ; 004cb911
    ADD EDX,0x1338                      ; 004cb914
    ADD EDX,EAX                         ; 004cb91a
    MOV ECX,dword ptr [EDX + 0x5c]      ; 004cb91c
    LEA EAX,[ECX*0x4 + 0x0]             ; 004cb91f
    SUB EAX,ECX                         ; 004cb926
    SHL EAX,0x3                         ; 004cb928
    ADD EAX,ECX                         ; 004cb92b
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cb92d
    CMP dword ptr [ECX + EAX*0x4 + 0x5e8],0x0 ; 004cb931
    JZ 0x004cb95d                       ; 004cb939
        ;   XREF to: 004cb95d (CONDITIONAL_JUMP)  ; LAB_004cb95d
    FLD float ptr [ESP + 0xc]           ; 004cb93b
    FDIV float ptr [0x005a004c]         ; 004cb93f | FLOAT_005a004c
    FSUBR float ptr [EDX + 0x18]        ; 004cb945
    FST float ptr [EDX + 0x18]          ; 004cb948
    FLDZ                                ; 004cb94b
    FCOMPP                              ; 004cb94d
    FNSTSW AX                           ; 004cb94f
    SAHF                                ; 004cb951
    JA 0x004cb955                       ; 004cb952
        ;   XREF to: 004cb955 (CONDITIONAL_JUMP)  ; LAB_004cb955
    RET                                 ; 004cb954
        ;   Label: LAB_004cb954
    MOV dword ptr [EDX + 0x18],0x0      ; 004cb955
        ;   Label: LAB_004cb955
    RET                                 ; 004cb95c
    FLD float ptr [ESP + 0xc]           ; 004cb95d
        ;   Label: LAB_004cb95d
    FDIV float ptr [0x005a004c]         ; 004cb961 | FLOAT_005a004c
    FADD float ptr [EDX + 0x18]         ; 004cb967
    FST float ptr [EDX + 0x18]          ; 004cb96a
    FLD1                                ; 004cb96d
    FCOMPP                              ; 004cb96f
    FNSTSW AX                           ; 004cb971
    SAHF                                ; 004cb973
    JNC 0x004cb954                      ; 004cb974
        ;   XREF to: 004cb954 (CONDITIONAL_JUMP)  ; LAB_004cb954
    MOV dword ptr [EDX + 0x18],0x3f800000 ; 004cb976
    RET                                 ; 004cb97d

