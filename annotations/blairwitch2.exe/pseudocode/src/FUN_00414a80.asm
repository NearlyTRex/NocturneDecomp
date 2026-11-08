; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414a80(int param_1,float param_2)
;
;
; Called Functions:
;   FUN_00424470
;   FUN_004244b0
;   FUN_00429e90
;   FUN_005030c0
;   FUN_00544f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414a80
        ;   Label: FUN_00414a80
    PUSH ESI                            ; 00414a81
    PUSH EBP                            ; 00414a82
    MOV EBP,ESP                         ; 00414a83
    SUB ESP,0x4                         ; 00414a85
    AND ESP,0xfffffff8                  ; 00414a88
    MOV ESI,dword ptr [EBP + 0x10]      ; 00414a8b
    PUSH dword ptr [EBP + 0x14]         ; 00414a8e
    PUSH ESI                            ; 00414a91
    CALL FUN_004244b0                   ; 00414a92
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 00414a97
    TEST EAX,EAX                        ; 00414a9a
    JZ 0x00414b00                       ; 00414a9c
        ;   XREF to: 00414b00 (CONDITIONAL_JUMP)  ; LAB_00414b00
    LEA EAX,[ESI + 0x2508]              ; 00414a9e
    MOV dword ptr [EAX + 0x8],0x0       ; 00414aa4
    FLD float ptr [EBP + 0x14]          ; 00414aab
    MOV EDX,dword ptr [EAX + 0x8]       ; 00414aae
    MOV dword ptr [EAX + 0x4],EDX       ; 00414ab1
    MOV EDX,dword ptr [EAX + 0x4]       ; 00414ab4
    MOV dword ptr [EAX],EDX             ; 00414ab7
    FMUL float ptr [ESI + 0x10a60]      ; 00414ab9
    LEA EBX,[ESI + 0x2b4]               ; 00414abf
    FSTP float ptr [ESP]                ; 00414ac5
    FLD float ptr [ESP]                 ; 00414ac8
        ;   Label: LAB_00414ac8
    FLDZ                                ; 00414acb
    FCOMPP                              ; 00414acd
    FNSTSW AX                           ; 00414acf
    SAHF                                ; 00414ad1
    JNC 0x00414ae2                      ; 00414ad2
        ;   XREF to: 00414ae2 (CONDITIONAL_JUMP)  ; LAB_00414ae2
    MOV EAX,ESP                         ; 00414ad4
    PUSH EAX                            ; 00414ad6
    PUSH EBX                            ; 00414ad7
    CALL FUN_005030c0                   ; 00414ad8
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    ADD ESP,0x8                         ; 00414add
    JMP 0x00414ac8                      ; 00414ae0
        ;   XREF to: 00414ac8 (UNCONDITIONAL_JUMP)  ; LAB_00414ac8
    PUSH ESI                            ; 00414ae2
        ;   Label: LAB_00414ae2
    CALL FUN_00424470                   ; 00414ae3
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; undefined FUN_00424470()
    ADD ESP,0x4                         ; 00414ae8
    PUSH EBX                            ; 00414aeb
    CALL FUN_00544f00                   ; 00414aec
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 00414af1
    PUSH dword ptr [EBP + 0x14]         ; 00414af4
    PUSH ESI                            ; 00414af7
    CALL FUN_00429e90                   ; 00414af8
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    ADD ESP,0x8                         ; 00414afd
    MOV ESP,EBP                         ; 00414b00
        ;   Label: LAB_00414b00
    POP EBP                             ; 00414b02
    POP ESI                             ; 00414b03
    POP EBX                             ; 00414b04
    RET                                 ; 00414b05

