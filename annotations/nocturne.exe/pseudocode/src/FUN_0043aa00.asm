; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043aa00(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059b568
;   undefined4 DAT_005b9354
;   undefined4 DAT_005b96c4
;   undefined4 DAT_01c777bc
;   undefined4 DAT_01c77818
;
; Called Functions:
;   FUN_00428510
;   FUN_004b0670
;   FUN_004e1660
;   FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043aa00
        ;   Label: FUN_0043aa00
    PUSH ESI                            ; 0043aa01
    PUSH EDI                            ; 0043aa02
    PUSH EBP                            ; 0043aa03
    MOV EBX,dword ptr [ESP + 0x14]      ; 0043aa04
    MOV ESI,dword ptr [ESP + 0x18]      ; 0043aa08
    TEST dword ptr [EBX + 0xbc8c],0x7fffffff ; 0043aa0c
    JNZ 0x0043aa84                      ; 0043aa16
        ;   XREF to: 0043aa84 (CONDITIONAL_JUMP)  ; LAB_0043aa84
    MOV EAX,[0x005b9354]                ; 0043aa18 | DAT_005b9354
        ;   Label: LAB_0043aa18
    CMP dword ptr [EAX + 0x1d0],0x0     ; 0043aa1d | DAT_01c777bc
    JZ 0x0043aa2d                       ; 0043aa24
        ;   XREF to: 0043aa2d (CONDITIONAL_JUMP)  ; LAB_0043aa2d
    MOV dword ptr [ESI + 0x4],0x0       ; 0043aa26
    MOV EAX,[0x005b9354]                ; 0043aa2d | DAT_005b9354
        ;   Label: LAB_0043aa2d
    MOV EDI,dword ptr [EAX + 0x22c]     ; 0043aa32 | DAT_01c77818
    TEST EDI,EDI                        ; 0043aa38
    JZ 0x0043aa8d                       ; 0043aa3a
        ;   XREF to: 0043aa8d (CONDITIONAL_JUMP)  ; LAB_0043aa8d
    MOV EAX,[0x0059b568]                ; 0043aa3c | DAT_0059b568
        ;   Label: LAB_0043aa3c
    MOV dword ptr [EBX + 0xbc8c],EAX    ; 0043aa41
    FLD float ptr [ESI + 0x4]           ; 0043aa47
    FSUBR float ptr [EBX + 0x2434]      ; 0043aa4a
    LEA EDI,[EBX + 0x150]               ; 0043aa50
    FST float ptr [EBX + 0x2434]        ; 0043aa56
    FLDZ                                ; 0043aa5c
    FCOMPP                              ; 0043aa5e
    FNSTSW AX                           ; 0043aa60
    SAHF                                ; 0043aa62
    JNC 0x0043aa92                      ; 0043aa63
        ;   XREF to: 0043aa92 (CONDITIONAL_JUMP)  ; LAB_0043aa92
    FLD float ptr [ESI + 0x4]           ; 0043aa65
    FLDZ                                ; 0043aa68
    FCOMPP                              ; 0043aa6a
    FNSTSW AX                           ; 0043aa6c
    SAHF                                ; 0043aa6e
    JC 0x0043aafd                       ; 0043aa6f
        ;   XREF to: 0043aafd (CONDITIONAL_JUMP)  ; LAB_0043aafd
    PUSH ESI                            ; 0043aa75
        ;   Label: LAB_0043aa75
    PUSH EBX                            ; 0043aa76
    CALL FUN_00428510                   ; 0043aa77
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined FUN_00428510()
    ADD ESP,0x8                         ; 0043aa7c
    POP EBP                             ; 0043aa7f
    POP EDI                             ; 0043aa80
    POP ESI                             ; 0043aa81
    POP EBX                             ; 0043aa82
    RET                                 ; 0043aa83
    MOV dword ptr [ESI + 0x4],0x0       ; 0043aa84
        ;   Label: LAB_0043aa84
    JMP 0x0043aa18                      ; 0043aa8b
        ;   XREF to: 0043aa18 (UNCONDITIONAL_JUMP)  ; LAB_0043aa18
    MOV dword ptr [ESI + 0x4],EDI       ; 0043aa8d
        ;   Label: LAB_0043aa8d
    JMP 0x0043aa3c                      ; 0043aa90
        ;   XREF to: 0043aa3c (UNCONDITIONAL_JUMP)  ; LAB_0043aa3c
    PUSH EDI                            ; 0043aa92
        ;   Label: LAB_0043aa92
    MOV dword ptr [EBX + 0x2434],0x0    ; 0043aa93
    CALL FUN_004e1660                   ; 0043aa9d
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0043aaa2
    ADD ESP,0x4                         ; 0043aaa5
    CMP EAX,0x6                         ; 0043aaa8
    JZ 0x0043aa75                       ; 0043aaab
        ;   XREF to: 0043aa75 (CONDITIONAL_JUMP)  ; LAB_0043aa75
    PUSH EDI                            ; 0043aaad
    CALL FUN_004e1660                   ; 0043aaae
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0043aab3
    ADD ESP,0x4                         ; 0043aab6
    CMP EAX,0x5                         ; 0043aab9
    JZ 0x0043aa75                       ; 0043aabc
        ;   XREF to: 0043aa75 (CONDITIONAL_JUMP)  ; LAB_0043aa75
    PUSH 0x1                            ; 0043aabe
    PUSH 0x5                            ; 0043aac0
    PUSH EDI                            ; 0043aac2
    MOV dword ptr [EBX + 0x2590],0x0    ; 0043aac3
    CALL FUN_004e16b0                   ; 0043aacd
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 0043aad2
    PUSH 0x0                            ; 0043aad5
    PUSH 0x42480000                     ; 0043aad7
    PUSH 0x32                           ; 0043aadc
    PUSH EBX                            ; 0043aade
    MOV EBP,dword ptr [0x005b96c4]      ; 0043aadf | DAT_005b96c4
    PUSH EBP                            ; 0043aae5
    CALL FUN_004b0670                   ; 0043aae6
        ;   XREF to: 004b0670 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0670()
    ADD ESP,0x14                        ; 0043aaeb
    PUSH ESI                            ; 0043aaee
    PUSH EBX                            ; 0043aaef
    CALL FUN_00428510                   ; 0043aaf0
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined FUN_00428510()
    ADD ESP,0x8                         ; 0043aaf5
    POP EBP                             ; 0043aaf8
    POP EDI                             ; 0043aaf9
    POP ESI                             ; 0043aafa
    POP EBX                             ; 0043aafb
    RET                                 ; 0043aafc
    PUSH 0x1                            ; 0043aafd
        ;   Label: LAB_0043aafd
    PUSH 0x4                            ; 0043aaff
    PUSH EDI                            ; 0043ab01
    CALL FUN_004e16b0                   ; 0043ab02
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 0043ab07
    PUSH ESI                            ; 0043ab0a
    PUSH EBX                            ; 0043ab0b
    CALL FUN_00428510                   ; 0043ab0c
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined FUN_00428510()
    ADD ESP,0x8                         ; 0043ab11
    POP EBP                             ; 0043ab14
    POP EDI                             ; 0043ab15
    POP ESI                             ; 0043ab16
    POP EBX                             ; 0043ab17
    RET                                 ; 0043ab18

