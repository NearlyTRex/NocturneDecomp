; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_platfrm.cpp_FUN_0054d690()
;
;
; XREF[2]:
;   core_platfrm.cpp_FUN_0054cc30 at 0054cf2e
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055ddb2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054d690
        ;   Label: core_platfrm.cpp_FUN_0054d690
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054d694
    MOV dword ptr [EDX + 0x2e0],EAX     ; 0054d698
    FLD float ptr [EDX + 0x2e0]         ; 0054d69e
    FLDZ                                ; 0054d6a4
    FCOMPP                              ; 0054d6a6
    FNSTSW AX                           ; 0054d6a8
    SAHF                                ; 0054d6aa
    JA 0x0054d6ff                       ; 0054d6ab | LAB_0054d6ff
        ;   XREF to: 0054d6ff (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x2e0]         ; 0054d6ad
        ;   Label: LAB_0054d6ad
    FLD1                                ; 0054d6b3
    FCOMPP                              ; 0054d6b5
    FNSTSW AX                           ; 0054d6b7
    SAHF                                ; 0054d6b9
    JNC 0x0054d6c6                      ; 0054d6ba | LAB_0054d6c6
        ;   XREF to: 0054d6c6 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x2e0],0x3f800000 ; 0054d6bc
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054d6c6
        ;   Label: LAB_0054d6c6
    MOV dword ptr [EDX + 0x2e4],EAX     ; 0054d6ca
    FLD float ptr [ESP + 0x8]           ; 0054d6d0
    FCOMP float ptr [EDX + 0x2dc]       ; 0054d6d4
    FNSTSW AX                           ; 0054d6da
    SAHF                                ; 0054d6dc
    JBE 0x0054d6e9                      ; 0054d6dd | LAB_0054d6e9
        ;   XREF to: 0054d6e9 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x2d4],0x3     ; 0054d6df
    JNC 0x0054d6f5                      ; 0054d6e9 | LAB_0054d6f5
        ;   Label: LAB_0054d6e9
        ;   XREF to: 0054d6f5 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x2d4],0x4     ; 0054d6eb
    CMP byte ptr [EDX + 0x480],0x0      ; 0054d6f5
        ;   Label: LAB_0054d6f5
    JNZ 0x0054d70b                      ; 0054d6fc | LAB_0054d70b
        ;   XREF to: 0054d70b (CONDITIONAL_JUMP)
    RET                                 ; 0054d6fe
    MOV dword ptr [EDX + 0x2e0],0x0     ; 0054d6ff
        ;   Label: LAB_0054d6ff
    JMP 0x0054d6ad                      ; 0054d709 | LAB_0054d6ad
        ;   XREF to: 0054d6ad (UNCONDITIONAL_JUMP)
    LEA ECX,[EDX + 0x480]               ; 0054d70b
        ;   Label: LAB_0054d70b
    PUSH ECX                            ; 0054d711
    MOV EAX,dword ptr [EDX + 0x154]     ; 0054d712
    PUSH EDX                            ; 0054d718
    CALL dword ptr [EAX + 0x28]         ; 0054d719
    ADD ESP,0x8                         ; 0054d71c
    RET                                 ; 0054d71f

