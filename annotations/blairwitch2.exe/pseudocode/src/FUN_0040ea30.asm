; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040ea30(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ea30
        ;   Label: FUN_0040ea30
    PUSH ESI                            ; 0040ea31
    PUSH EDI                            ; 0040ea32
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040ea33
    PUSH EBX                            ; 0040ea37
    CALL FUN_00408790                   ; 0040ea38
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 0040ea3d
    ADD EAX,0x2b4                       ; 0040ea40
    PUSH EAX                            ; 0040ea45
    CALL FUN_0044fc80                   ; 0040ea46
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0040ea4b
    LEA EBX,[EAX + 0xfffffd4c]          ; 0040ea4e
    PUSH 0x5cb2f3                       ; 0040ea54
    LEA EAX,[EBX + 0x2b4]               ; 0040ea59
    PUSH EAX                            ; 0040ea5f
    MOV ESI,0x5cb300                    ; 0040ea60
    MOV dword ptr [EBX + 0x2b0],0x5f2554 ; 0040ea65
    CALL FUN_0044fd70                   ; 0040ea6f
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x494],0x41c80000 ; 0040ea74
    ADD ESP,0x8                         ; 0040ea7e
    MOV dword ptr [EBX + 0x498],0x0     ; 0040ea81
    LEA EDI,[EBX + 0x430]               ; 0040ea8b
    MOV dword ptr [EBX + 0x49c],0x0     ; 0040ea91
    PUSH EDI                            ; 0040ea9b
    MOV AL,byte ptr [ESI]               ; 0040ea9c
        ;   Label: LAB_0040ea9c
    MOV byte ptr [EDI],AL               ; 0040ea9e
    CMP AL,0x0                          ; 0040eaa0
    JZ 0x0040eab4                       ; 0040eaa2
        ;   XREF to: 0040eab4 (CONDITIONAL_JUMP)  ; LAB_0040eab4
    MOV AL,byte ptr [ESI + 0x1]         ; 0040eaa4
    ADD ESI,0x2                         ; 0040eaa7
    MOV byte ptr [EDI + 0x1],AL         ; 0040eaaa
    ADD EDI,0x2                         ; 0040eaad
    CMP AL,0x0                          ; 0040eab0
    JNZ 0x0040ea9c                      ; 0040eab2
        ;   XREF to: 0040ea9c (CONDITIONAL_JUMP)  ; LAB_0040ea9c
    POP EDI                             ; 0040eab4
        ;   Label: LAB_0040eab4
    MOV EAX,EBX                         ; 0040eab5
    POP EDI                             ; 0040eab7
    POP ESI                             ; 0040eab8
    POP EBX                             ; 0040eab9
    RET                                 ; 0040eaba

