; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00481fc0(undefined4 param_1)
;
;
; XREF[9]:
;   FUN_0047c970 at 0047c984
;   FUN_004b28b0 at 004b28f3
;   FUN_004b6170 at 004b6720
;   FUN_004ed260 at 004ee0a1
;   FUN_004eed60 at 004ef9dd
;   FUN_004fd280 at 004fd293
;   FUN_00520f90 at 00520f95
;   FUN_0055b110 at 0055b11c
;   FUN_0059c3d0 at 0059c3e4
;
; Referenced Globals:
;   undefined4 DAT_005d286c
;   TerminatedCString s_Cancel_005d286f
;   undefined1* PTR_FUN_005f5d34 = 004820b0
;
; Called Functions:
;   FUN_00480d20
;   FUN_00484310
;   FUN_00484e20
;   FUN_0050fe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481fc0
        ;   Label: FUN_00481fc0
    PUSH ESI                            ; 00481fc1
    PUSH EDI                            ; 00481fc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00481fc3
    PUSH EBX                            ; 00481fc7
    CALL FUN_00480d20                   ; 00481fc8
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d20()
    ADD ESP,0x4                         ; 00481fcd
    ADD EAX,0x1bc                       ; 00481fd0
    PUSH EAX                            ; 00481fd5
    CALL FUN_00484310                   ; 00481fd6
        ;   XREF to: 00484310 (UNCONDITIONAL_CALL)  ; undefined FUN_00484310()
    ADD ESP,0x4                         ; 00481fdb
    ADD EAX,0x38                        ; 00481fde
    PUSH EAX                            ; 00481fe1
    CALL FUN_00484e20                   ; 00481fe2
        ;   XREF to: 00484e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00484e20()
    ADD ESP,0x4                         ; 00481fe7
    ADD EAX,0xe4                        ; 00481fea
    PUSH EAX                            ; 00481fef
    CALL FUN_00484e20                   ; 00481ff0
        ;   XREF to: 00484e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00484e20()
    LEA EBX,[EAX + 0xfffffd28]          ; 00481ff5
    MOV dword ptr [EBX + 0xc],0x5f5d34  ; 00481ffb | PTR_FUN_005f5d34
    MOV dword ptr [EBX + 0x1f0],0x0     ; 00482002
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 0048200c
    MOV dword ptr [EBX + 0x1ac],0x0     ; 00482016
    MOV dword ptr [EBX + 0x1b0],0x0     ; 00482020
    ADD ESP,0x4                         ; 0048202a
    MOV dword ptr [EBX + 0x1b4],0x0     ; 0048202d
    PUSH 0x5d286c                       ; 00482037 | DAT_005d286c
    MOV dword ptr [EBX + 0x1b8],0x0     ; 0048203c
    CALL FUN_0050fe80                   ; 00482046
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 0048204b
    LEA EDI,[EBX + 0x5c]                ; 0048204e
    MOV ESI,EAX                         ; 00482051
    PUSH EDI                            ; 00482053
    MOV AL,byte ptr [ESI]               ; 00482054
        ;   Label: LAB_00482054
    MOV byte ptr [EDI],AL               ; 00482056
    CMP AL,0x0                          ; 00482058
    JZ 0x0048206c                       ; 0048205a
        ;   XREF to: 0048206c (CONDITIONAL_JUMP)  ; LAB_0048206c
    MOV AL,byte ptr [ESI + 0x1]         ; 0048205c
    ADD ESI,0x2                         ; 0048205f
    MOV byte ptr [EDI + 0x1],AL         ; 00482062
    ADD EDI,0x2                         ; 00482065
    CMP AL,0x0                          ; 00482068
    JNZ 0x00482054                      ; 0048206a
        ;   XREF to: 00482054 (CONDITIONAL_JUMP)  ; LAB_00482054
    POP EDI                             ; 0048206c
        ;   Label: LAB_0048206c
    PUSH 0x5d286f                       ; 0048206d | = "Cancel"
    CALL FUN_0050fe80                   ; 00482072
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 00482077
    LEA EDI,[EBX + 0xc0]                ; 0048207a
    MOV ESI,EAX                         ; 00482080
    PUSH EDI                            ; 00482082
    MOV AL,byte ptr [ESI]               ; 00482083
        ;   Label: LAB_00482083
    MOV byte ptr [EDI],AL               ; 00482085
    CMP AL,0x0                          ; 00482087
    JZ 0x0048209b                       ; 00482089
        ;   XREF to: 0048209b (CONDITIONAL_JUMP)  ; LAB_0048209b
    MOV AL,byte ptr [ESI + 0x1]         ; 0048208b
    ADD ESI,0x2                         ; 0048208e
    MOV byte ptr [EDI + 0x1],AL         ; 00482091
    ADD EDI,0x2                         ; 00482094
    CMP AL,0x0                          ; 00482097
    JNZ 0x00482083                      ; 00482099
        ;   XREF to: 00482083 (CONDITIONAL_JUMP)  ; LAB_00482083
    POP EDI                             ; 0048209b
        ;   Label: LAB_0048209b
    MOV dword ptr [EBX + 0x54],0xffffffff ; 0048209c
    MOV EAX,EBX                         ; 004820a3
    MOV dword ptr [EBX + 0x58],0x0      ; 004820a5
    POP EDI                             ; 004820ac
    POP ESI                             ; 004820ad
    POP EBX                             ; 004820ae
    RET                                 ; 004820af

