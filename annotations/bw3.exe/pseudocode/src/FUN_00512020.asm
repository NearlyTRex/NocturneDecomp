; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00512020(int param_1,float param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_005114f0 at 0051157a
;   FUN_00529a70 at 0052da6e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00512020
        ;   Label: FUN_00512020
    MOV EAX,dword ptr [ESP + 0x8]       ; 00512024
    MOV dword ptr [EDX + 0x2e0],EAX     ; 00512028
    FLD float ptr [EDX + 0x2e0]         ; 0051202e
    FLDZ                                ; 00512034
    FCOMPP                              ; 00512036
    FNSTSW AX                           ; 00512038
    SAHF                                ; 0051203a
    JA 0x0051208f                       ; 0051203b
        ;   XREF to: 0051208f (CONDITIONAL_JUMP)  ; LAB_0051208f
    FLD float ptr [EDX + 0x2e0]         ; 0051203d
        ;   Label: LAB_0051203d
    FLD1                                ; 00512043
    FCOMPP                              ; 00512045
    FNSTSW AX                           ; 00512047
    SAHF                                ; 00512049
    JNC 0x00512056                      ; 0051204a
        ;   XREF to: 00512056 (CONDITIONAL_JUMP)  ; LAB_00512056
    MOV dword ptr [EDX + 0x2e0],0x3f800000 ; 0051204c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00512056
        ;   Label: LAB_00512056
    MOV dword ptr [EDX + 0x2e4],EAX     ; 0051205a
    FLD float ptr [ESP + 0x8]           ; 00512060
    FCOMP float ptr [EDX + 0x2dc]       ; 00512064
    FNSTSW AX                           ; 0051206a
    SAHF                                ; 0051206c
    JBE 0x00512079                      ; 0051206d
        ;   XREF to: 00512079 (CONDITIONAL_JUMP)  ; LAB_00512079
    MOV dword ptr [EDX + 0x2d4],0x3     ; 0051206f
    JNC 0x00512085                      ; 00512079
        ;   XREF to: 00512085 (CONDITIONAL_JUMP)  ; LAB_00512085
        ;   Label: LAB_00512079
    MOV dword ptr [EDX + 0x2d4],0x4     ; 0051207b
    CMP byte ptr [EDX + 0x480],0x0      ; 00512085
        ;   Label: LAB_00512085
    JNZ 0x0051209b                      ; 0051208c
        ;   XREF to: 0051209b (CONDITIONAL_JUMP)  ; LAB_0051209b
    RET                                 ; 0051208e
    MOV dword ptr [EDX + 0x2e0],0x0     ; 0051208f
        ;   Label: LAB_0051208f
    JMP 0x0051203d                      ; 00512099
        ;   XREF to: 0051203d (UNCONDITIONAL_JUMP)  ; LAB_0051203d
    LEA ECX,[EDX + 0x480]               ; 0051209b
        ;   Label: LAB_0051209b
    PUSH ECX                            ; 005120a1
    MOV EAX,dword ptr [EDX + 0x154]     ; 005120a2
    PUSH EDX                            ; 005120a8
    CALL dword ptr [EAX + 0x30]         ; 005120a9
    ADD ESP,0x8                         ; 005120ac
    RET                                 ; 005120af

