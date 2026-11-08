; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b31a0(int param_1,char *param_2,undefined4 param_3)
;
;
; XREF[8]:
;   FUN_00460630 at 004606fd
;   FUN_004b82e0 at 004b8684
;   FUN_004b90d0 at 004b9139
;   FUN_004dadb0 at 004db203
;   FUN_004dc8c0 at 004dc9e1
;   FUN_004dee70 at 004deed2
;   FUN_0050df20 at 0050dfd9
;   FUN_00522350 at 005242b1
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b31a0
        ;   Label: FUN_004b31a0
    PUSH EDI                            ; 004b31a1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004b31a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004b31a6
    TEST ESI,ESI                        ; 004b31aa
    JZ 0x004b31c0                       ; 004b31ac
        ;   XREF to: 004b31c0 (CONDITIONAL_JUMP)  ; LAB_004b31c0
    CMP byte ptr [ESI],0x0              ; 004b31ae
    JNZ 0x004b31c9                      ; 004b31b1
        ;   XREF to: 004b31c9 (CONDITIONAL_JUMP)  ; LAB_004b31c9
    MOV dword ptr [EDI + 0x3a4],0x0     ; 004b31b3
    POP EDI                             ; 004b31bd
    POP ESI                             ; 004b31be
    RET                                 ; 004b31bf
    MOV dword ptr [EDI + 0x3a4],ESI     ; 004b31c0
        ;   Label: LAB_004b31c0
    POP EDI                             ; 004b31c6
    POP ESI                             ; 004b31c7
    RET                                 ; 004b31c8
    ADD EDI,0x2a4                       ; 004b31c9
        ;   Label: LAB_004b31c9
    MOV EAX,dword ptr [ESP + 0x14]      ; 004b31cf
    MOV dword ptr [EDI + 0x100],EAX     ; 004b31d3
    PUSH EDI                            ; 004b31d9
    MOV AL,byte ptr [ESI]               ; 004b31da
        ;   Label: LAB_004b31da
    MOV byte ptr [EDI],AL               ; 004b31dc
    CMP AL,0x0                          ; 004b31de
    JZ 0x004b31f2                       ; 004b31e0
        ;   XREF to: 004b31f2 (CONDITIONAL_JUMP)  ; LAB_004b31f2
    MOV AL,byte ptr [ESI + 0x1]         ; 004b31e2
    ADD ESI,0x2                         ; 004b31e5
    MOV byte ptr [EDI + 0x1],AL         ; 004b31e8
    ADD EDI,0x2                         ; 004b31eb
    CMP AL,0x0                          ; 004b31ee
    JNZ 0x004b31da                      ; 004b31f0
        ;   XREF to: 004b31da (CONDITIONAL_JUMP)  ; LAB_004b31da
    POP EDI                             ; 004b31f2
        ;   Label: LAB_004b31f2
    POP EDI                             ; 004b31f3
    POP ESI                             ; 004b31f4
    RET                                 ; 004b31f5

