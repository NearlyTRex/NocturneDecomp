; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_1000f360(int param_1,int *param_2,uint *param_3)
;
;
; XREF[1]:
;   FUN_1000f2d0 at 1000f2ed
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 1000f360
        ;   Label: FUN_1000f360
    PUSH EBX                            ; 1000f364
    PUSH ESI                            ; 1000f365
    PUSH EDI                            ; 1000f366
    PUSH EBP                            ; 1000f367
    MOV ESI,dword ptr [ECX]             ; 1000f368
    MOV EDI,dword ptr [ESP + 0x1c]      ; 1000f36a
    CMP dword ptr [EDI],0x1             ; 1000f36e
    JBE 0x1000f3a2                      ; 1000f371
        ;   XREF to: 1000f3a2 (CONDITIONAL_JUMP)  ; LAB_1000f3a2
    MOV EBX,dword ptr [ESP + 0x14]      ; 1000f373
    MOV ECX,0xa                         ; 1000f377
        ;   Label: LAB_1000f377
    MOV EAX,EBX                         ; 1000f37c
    INC ESI                             ; 1000f37e
    MOV EBP,0xa                         ; 1000f37f
    CDQ                                 ; 1000f384
    IDIV ECX                            ; 1000f385
    ADD DL,0x30                         ; 1000f387
    MOV EAX,EBX                         ; 1000f38a
    MOV byte ptr [ESI + -0x1],DL        ; 1000f38c
    CDQ                                 ; 1000f38f
    IDIV EBP                            ; 1000f390
    MOV ECX,dword ptr [EDI]             ; 1000f392
    MOV EBX,EAX                         ; 1000f394
    DEC ECX                             ; 1000f396
    TEST EBX,EBX                        ; 1000f397
    MOV dword ptr [EDI],ECX             ; 1000f399
    JLE 0x1000f3a2                      ; 1000f39b
        ;   XREF to: 1000f3a2 (CONDITIONAL_JUMP)  ; LAB_1000f3a2
    CMP ECX,0x1                         ; 1000f39d
    JA 0x1000f377                       ; 1000f3a0
        ;   XREF to: 1000f377 (CONDITIONAL_JUMP)  ; LAB_1000f377
    MOV ECX,dword ptr [ESP + 0x18]      ; 1000f3a2
        ;   Label: LAB_1000f3a2
    MOV EAX,dword ptr [ECX]             ; 1000f3a6
    MOV dword ptr [ECX],ESI             ; 1000f3a8
    DEC ESI                             ; 1000f3aa
    MOV CL,byte ptr [ESI]               ; 1000f3ab
        ;   Label: LAB_1000f3ab
    MOV DL,byte ptr [EAX]               ; 1000f3ad
    MOV byte ptr [ESI],DL               ; 1000f3af
    DEC ESI                             ; 1000f3b1
    MOV byte ptr [EAX],CL               ; 1000f3b2
    INC EAX                             ; 1000f3b4
    CMP EAX,ESI                         ; 1000f3b5
    JC 0x1000f3ab                       ; 1000f3b7
        ;   XREF to: 1000f3ab (CONDITIONAL_JUMP)  ; LAB_1000f3ab
    POP EBP                             ; 1000f3b9
    POP EDI                             ; 1000f3ba
    POP ESI                             ; 1000f3bb
    POP EBX                             ; 1000f3bc
    RET                                 ; 1000f3bd

