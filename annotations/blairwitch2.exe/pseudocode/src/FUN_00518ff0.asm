; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00518ff0(int param_1,float param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_005184c0 at 0051854a
;   FUN_00522350 at 0052635e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00518ff0
        ;   Label: FUN_00518ff0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00518ff4
    MOV dword ptr [EDX + 0x43c],EAX     ; 00518ff8
    FLD float ptr [EDX + 0x43c]         ; 00518ffe
    FLDZ                                ; 00519004
    FCOMPP                              ; 00519006
    FNSTSW AX                           ; 00519008
    SAHF                                ; 0051900a
    JA 0x0051905f                       ; 0051900b
        ;   XREF to: 0051905f (CONDITIONAL_JUMP)  ; LAB_0051905f
    FLD float ptr [EDX + 0x43c]         ; 0051900d
        ;   Label: LAB_0051900d
    FLD1                                ; 00519013
    FCOMPP                              ; 00519015
    FNSTSW AX                           ; 00519017
    SAHF                                ; 00519019
    JNC 0x00519026                      ; 0051901a
        ;   XREF to: 00519026 (CONDITIONAL_JUMP)  ; LAB_00519026
    MOV dword ptr [EDX + 0x43c],0x3f800000 ; 0051901c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00519026
        ;   Label: LAB_00519026
    MOV dword ptr [EDX + 0x440],EAX     ; 0051902a
    FLD float ptr [ESP + 0x8]           ; 00519030
    FCOMP float ptr [EDX + 0x438]       ; 00519034
    FNSTSW AX                           ; 0051903a
    SAHF                                ; 0051903c
    JBE 0x00519049                      ; 0051903d
        ;   XREF to: 00519049 (CONDITIONAL_JUMP)  ; LAB_00519049
    MOV dword ptr [EDX + 0x430],0x3     ; 0051903f
    JNC 0x00519055                      ; 00519049
        ;   XREF to: 00519055 (CONDITIONAL_JUMP)  ; LAB_00519055
        ;   Label: LAB_00519049
    MOV dword ptr [EDX + 0x430],0x4     ; 0051904b
    CMP byte ptr [EDX + 0x5dc],0x0      ; 00519055
        ;   Label: LAB_00519055
    JNZ 0x0051906b                      ; 0051905c
        ;   XREF to: 0051906b (CONDITIONAL_JUMP)  ; LAB_0051906b
    RET                                 ; 0051905e
    MOV dword ptr [EDX + 0x43c],0x0     ; 0051905f
        ;   Label: LAB_0051905f
    JMP 0x0051900d                      ; 00519069
        ;   XREF to: 0051900d (UNCONDITIONAL_JUMP)  ; LAB_0051900d
    LEA ECX,[EDX + 0x5dc]               ; 0051906b
        ;   Label: LAB_0051906b
    PUSH ECX                            ; 00519071
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 00519072
    PUSH EDX                            ; 00519078
    CALL dword ptr [EAX + 0x38]         ; 00519079
    ADD ESP,0x8                         ; 0051907c
    RET                                 ; 0051907f

