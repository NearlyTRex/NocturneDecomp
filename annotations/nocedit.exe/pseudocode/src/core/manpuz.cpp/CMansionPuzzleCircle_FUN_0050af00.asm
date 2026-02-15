; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af00(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_005091d0 at 0050920d
;
; Referenced Globals:
;   float FLOAT_00660d9c = 2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0050af00
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050af00
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050af04
    SUB EAX,EDX                         ; 0050af0b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050af0d
    SHL EAX,0x5                         ; 0050af11
    ADD EDX,0x1340                      ; 0050af14
    ADD EDX,EAX                         ; 0050af1a
    MOV ECX,dword ptr [EDX + 0x5c]      ; 0050af1c
    LEA EAX,[ECX*0x4 + 0x0]             ; 0050af1f
    SUB EAX,ECX                         ; 0050af26
    SHL EAX,0x3                         ; 0050af28
    ADD EAX,ECX                         ; 0050af2b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0050af2d
    CMP dword ptr [ECX + EAX*0x4 + 0x5f0],0x0 ; 0050af31
    JZ 0x0050af5d                       ; 0050af39
        ;   XREF to: 0050af5d (CONDITIONAL_JUMP)  ; LAB_0050af5d
    FLD float ptr [ESP + 0xc]           ; 0050af3b
    FDIV float ptr [0x00660d9c]         ; 0050af3f | FLOAT_00660d9c
    FSUBR float ptr [EDX + 0x18]        ; 0050af45
    FST float ptr [EDX + 0x18]          ; 0050af48
    FLDZ                                ; 0050af4b
    FCOMPP                              ; 0050af4d
    FNSTSW AX                           ; 0050af4f
    SAHF                                ; 0050af51
    JA 0x0050af55                       ; 0050af52
        ;   XREF to: 0050af55 (CONDITIONAL_JUMP)  ; LAB_0050af55
    RET                                 ; 0050af54
        ;   Label: LAB_0050af54
    MOV dword ptr [EDX + 0x18],0x0      ; 0050af55
        ;   Label: LAB_0050af55
    RET                                 ; 0050af5c
    FLD float ptr [ESP + 0xc]           ; 0050af5d
        ;   Label: LAB_0050af5d
    FDIV float ptr [0x00660d9c]         ; 0050af61 | FLOAT_00660d9c
    FADD float ptr [EDX + 0x18]         ; 0050af67
    FST float ptr [EDX + 0x18]          ; 0050af6a
    FLD1                                ; 0050af6d
    FCOMPP                              ; 0050af6f
    FNSTSW AX                           ; 0050af71
    SAHF                                ; 0050af73
    JNC 0x0050af54                      ; 0050af74
        ;   XREF to: 0050af54 (CONDITIONAL_JUMP)  ; LAB_0050af54
    MOV dword ptr [EDX + 0x18],0x3f800000 ; 0050af76
    RET                                 ; 0050af7d

