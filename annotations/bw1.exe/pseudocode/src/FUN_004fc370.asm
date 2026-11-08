; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc370(int param_1)
;
;
; XREF[2]:
;   FUN_004d0ee0 at 004d12ec
;   FUN_004d9260 at 004d95ac
;
; Referenced Globals:
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   FUN_004fa6c0
;   FUN_004fa710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc370
        ;   Label: FUN_004fc370
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fc371
    MOV EDX,dword ptr [0x01d06ab4]      ; 004fc375 | DAT_01d06ab4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004fc37b
    CMP EAX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004fc37e
    JNZ 0x004fc3ba                      ; 004fc385
        ;   XREF to: 004fc3ba (CONDITIONAL_JUMP)  ; LAB_004fc3ba
    CMP dword ptr [EBX + 0x454],0x0     ; 004fc387
    SETZ AL                             ; 004fc38e
    FLD float ptr [EBX + 0x344]         ; 004fc391
    AND EAX,0xff                        ; 004fc397
    FLDZ                                ; 004fc39c
    MOV dword ptr [EBX + 0x454],EAX     ; 004fc39e
    FCOMPP                              ; 004fc3a4
    FNSTSW AX                           ; 004fc3a6
    SAHF                                ; 004fc3a8
    JC 0x004fc3bc                       ; 004fc3a9
        ;   XREF to: 004fc3bc (CONDITIONAL_JUMP)  ; LAB_004fc3bc
    FLD float ptr [EBX + 0x340]         ; 004fc3ab
        ;   Label: LAB_004fc3ab
    FLDZ                                ; 004fc3b1
    FCOMPP                              ; 004fc3b3
    FNSTSW AX                           ; 004fc3b5
    SAHF                                ; 004fc3b7
    JC 0x004fc3c7                       ; 004fc3b8
        ;   XREF to: 004fc3c7 (CONDITIONAL_JUMP)  ; LAB_004fc3c7
    POP EBX                             ; 004fc3ba
        ;   Label: LAB_004fc3ba
    RET                                 ; 004fc3bb
    PUSH EBX                            ; 004fc3bc
        ;   Label: LAB_004fc3bc
    CALL FUN_004fa710                   ; 004fc3bd
        ;   XREF to: 004fa710 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa710()
    ADD ESP,0x4                         ; 004fc3c2
    JMP 0x004fc3ab                      ; 004fc3c5
        ;   XREF to: 004fc3ab (UNCONDITIONAL_JUMP)  ; LAB_004fc3ab
    PUSH 0x0                            ; 004fc3c7
        ;   Label: LAB_004fc3c7
    PUSH EBX                            ; 004fc3c9
    CALL FUN_004fa6c0                   ; 004fc3ca
        ;   XREF to: 004fa6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa6c0()
    ADD ESP,0x8                         ; 004fc3cf
    POP EBX                             ; 004fc3d2
    RET                                 ; 004fc3d3

