; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004024e0(byte *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00402a60 at 00402a91
;
; Called Functions:
;   FUN_00402040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004024e0
        ;   Label: FUN_004024e0
    PUSH ESI                            ; 004024e1
    PUSH EDI                            ; 004024e2
    PUSH EBP                            ; 004024e3
    SUB ESP,0x4                         ; 004024e4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004024e7
    MOV EBX,dword ptr [ESP + 0x20]      ; 004024eb
    MOV EDI,EDX                         ; 004024ef
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004024f1
    SUB ECX,ECX                         ; 004024f5
    DEC ECX                             ; 004024f7
    XOR EAX,EAX                         ; 004024f8
    SCASB.REPNE ES:EDI                  ; 004024fa
    NOT ECX                             ; 004024fc
    DEC ECX                             ; 004024fe
    XOR EBP,EBP                         ; 004024ff
    MOV dword ptr [ESP],ECX             ; 00402501
    TEST ECX,ECX                        ; 00402504
    JLE 0x0040255e                      ; 00402506
        ;   XREF to: 0040255e (CONDITIONAL_JUMP)  ; LAB_0040255e
    MOV EDI,EDX                         ; 00402508
    CMP byte ptr [EDI],0xa              ; 0040250a
        ;   Label: LAB_0040250a
    JNZ 0x0040251e                      ; 0040250d
        ;   XREF to: 0040251e (CONDITIONAL_JUMP)  ; LAB_0040251e
    MOV ECX,dword ptr [ESP + 0x28]      ; 0040250f
    ADD EBX,0xb                         ; 00402513
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00402516
    CMP EBX,ECX                         ; 0040251a
    JG 0x0040255e                       ; 0040251c
        ;   XREF to: 0040255e (CONDITIONAL_JUMP)  ; LAB_0040255e
    XOR EAX,EAX                         ; 0040251e
        ;   Label: LAB_0040251e
    MOV AL,byte ptr [EDI]               ; 00402520
    CMP EAX,0x20                        ; 00402522
    JL 0x00402555                       ; 00402525
        ;   XREF to: 00402555 (CONDITIONAL_JUMP)  ; LAB_00402555
    CMP EAX,0x100                       ; 00402527
    JGE 0x00402555                      ; 0040252c
        ;   XREF to: 00402555 (CONDITIONAL_JUMP)  ; LAB_00402555
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0040252e
    PUSH EDX                            ; 00402532
    PUSH EBX                            ; 00402533
    PUSH ESI                            ; 00402534
    PUSH EAX                            ; 00402535
    CALL FUN_00402040                   ; 00402536
        ;   XREF to: 00402040 (UNCONDITIONAL_CALL)  ; undefined FUN_00402040()
    ADD ESP,0x10                        ; 0040253b
    ADD ESI,EAX                         ; 0040253e
    CMP ESI,dword ptr [ESP + 0x24]      ; 00402540
    JLE 0x00402555                      ; 00402544
        ;   XREF to: 00402555 (CONDITIONAL_JUMP)  ; LAB_00402555
    MOV EAX,dword ptr [ESP + 0x28]      ; 00402546
    ADD EBX,0xb                         ; 0040254a
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040254d
    CMP EBX,EAX                         ; 00402551
    JG 0x0040255e                       ; 00402553
        ;   XREF to: 0040255e (CONDITIONAL_JUMP)  ; LAB_0040255e
    MOV EDX,dword ptr [ESP]             ; 00402555
        ;   Label: LAB_00402555
    INC EBP                             ; 00402558
    INC EDI                             ; 00402559
    CMP EBP,EDX                         ; 0040255a
    JL 0x0040250a                       ; 0040255c
        ;   XREF to: 0040250a (CONDITIONAL_JUMP)  ; LAB_0040250a
    ADD ESP,0x4                         ; 0040255e
        ;   Label: LAB_0040255e
    POP EBP                             ; 00402561
    POP EDI                             ; 00402562
    POP ESI                             ; 00402563
    POP EBX                             ; 00402564
    RET                                 ; 00402565

