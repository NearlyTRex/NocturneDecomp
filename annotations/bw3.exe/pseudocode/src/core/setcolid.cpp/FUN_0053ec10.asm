; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053ec10(int param_1,int param_2)
;
;
; XREF[39]:
;   FUN_00408a40 at 00408a66
;   FUN_00409f60 at 0040a697
;   FUN_0040c8e0 at 0040c93e
;   FUN_0040c990 at 0040ca0b
;   FUN_00410490 at 00410768
;   FUN_004179b0 at 00417f1f
;   FUN_00419b40 at 0041a077
;   FUN_00424550 at 00424790
;   FUN_00425da0 at 00426a16
;   FUN_0042c230 at 0042c385
;   ... and 29 more
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005d0bf4
;   TerminatedCString s_CDemonSet_ignore_ignore_005d0c09
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ec10
        ;   Label: FUN_0053ec10
    PUSH EBP                            ; 0053ec11
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053ec12
    CMP dword ptr [ESP + 0x10],0x0      ; 0053ec16
    JZ 0x0053ec43                       ; 0053ec1b
        ;   XREF to: 0053ec43 (CONDITIONAL_JUMP)  ; LAB_0053ec43
    MOV ECX,dword ptr [EBX + 0x15f6ac]  ; 0053ec1d
    TEST ECX,ECX                        ; 0053ec23
    JL 0x0053ec43                       ; 0053ec25
        ;   XREF to: 0053ec43 (CONDITIONAL_JUMP)  ; LAB_0053ec43
    CMP ECX,0xa                         ; 0053ec27
    JGE 0x0053ec46                      ; 0053ec2a
        ;   XREF to: 0053ec46 (CONDITIONAL_JUMP)  ; LAB_0053ec46
    MOV EAX,dword ptr [EBX + 0x15f6ac]  ; 0053ec2c
        ;   Label: LAB_0053ec2c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053ec32
    MOV dword ptr [EBX + EAX*0x4 + 0x15f6b4],EDX ; 0053ec36
    INC dword ptr [EBX + 0x15f6ac]      ; 0053ec3d
    POP EBP                             ; 0053ec43
        ;   Label: LAB_0053ec43
    POP EBX                             ; 0053ec44
    RET                                 ; 0053ec45
    PUSH EDI                            ; 0053ec46
        ;   Label: LAB_0053ec46
    MOV EDI,0x5d0bf4                    ; 0053ec47 | = "..\\core\\setcolid.cpp"
    MOV EBP,0x473                       ; 0053ec4c
    PUSH 0x5d0c09                       ; 0053ec51 | = "CDemonSet::ignore - ignore list is full"
    MOV dword ptr [0x01d71de0],EDI      ; 0053ec56 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0053ec5c | DAT_01d71de4
    CALL FUN_004e4330                   ; 0053ec62
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0053ec67
    POP EDI                             ; 0053ec6a
    JMP 0x0053ec2c                      ; 0053ec6b
        ;   XREF to: 0053ec2c (UNCONDITIONAL_JUMP)  ; LAB_0053ec2c

