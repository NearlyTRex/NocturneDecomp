; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6bd0(int param_1,float param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004f6170 at 004f61fa
;   FUN_004ff2c0 at 00502862
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f6bd0
        ;   Label: FUN_004f6bd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f6bd4
    MOV dword ptr [EDX + 0x2d8],EAX     ; 004f6bd8
    FLD float ptr [EDX + 0x2d8]         ; 004f6bde
    FLDZ                                ; 004f6be4
    FCOMPP                              ; 004f6be6
    FNSTSW AX                           ; 004f6be8
    SAHF                                ; 004f6bea
    JA 0x004f6c3f                       ; 004f6beb
        ;   XREF to: 004f6c3f (CONDITIONAL_JUMP)  ; LAB_004f6c3f
    FLD float ptr [EDX + 0x2d8]         ; 004f6bed
        ;   Label: LAB_004f6bed
    FLD1                                ; 004f6bf3
    FCOMPP                              ; 004f6bf5
    FNSTSW AX                           ; 004f6bf7
    SAHF                                ; 004f6bf9
    JNC 0x004f6c06                      ; 004f6bfa
        ;   XREF to: 004f6c06 (CONDITIONAL_JUMP)  ; LAB_004f6c06
    MOV dword ptr [EDX + 0x2d8],0x3f800000 ; 004f6bfc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f6c06
        ;   Label: LAB_004f6c06
    MOV dword ptr [EDX + 0x2dc],EAX     ; 004f6c0a
    FLD float ptr [ESP + 0x8]           ; 004f6c10
    FCOMP float ptr [EDX + 0x2d4]       ; 004f6c14
    FNSTSW AX                           ; 004f6c1a
    SAHF                                ; 004f6c1c
    JBE 0x004f6c29                      ; 004f6c1d
        ;   XREF to: 004f6c29 (CONDITIONAL_JUMP)  ; LAB_004f6c29
    MOV dword ptr [EDX + 0x2cc],0x3     ; 004f6c1f
    JNC 0x004f6c35                      ; 004f6c29
        ;   XREF to: 004f6c35 (CONDITIONAL_JUMP)  ; LAB_004f6c35
        ;   Label: LAB_004f6c29
    MOV dword ptr [EDX + 0x2cc],0x4     ; 004f6c2b
    CMP byte ptr [EDX + 0x478],0x0      ; 004f6c35
        ;   Label: LAB_004f6c35
    JNZ 0x004f6c4b                      ; 004f6c3c
        ;   XREF to: 004f6c4b (CONDITIONAL_JUMP)  ; LAB_004f6c4b
    RET                                 ; 004f6c3e
    MOV dword ptr [EDX + 0x2d8],0x0     ; 004f6c3f
        ;   Label: LAB_004f6c3f
    JMP 0x004f6bed                      ; 004f6c49
        ;   XREF to: 004f6bed (UNCONDITIONAL_JUMP)  ; LAB_004f6bed
    LEA ECX,[EDX + 0x478]               ; 004f6c4b
        ;   Label: LAB_004f6c4b
    PUSH ECX                            ; 004f6c51
    MOV EAX,dword ptr [EDX + 0x14c]     ; 004f6c52
    PUSH EDX                            ; 004f6c58
    CALL dword ptr [EAX + 0x28]         ; 004f6c59
    ADD ESP,0x8                         ; 004f6c5c
    RET                                 ; 004f6c5f

