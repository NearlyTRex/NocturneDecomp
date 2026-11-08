; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040ede0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_004448d0
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ede0
        ;   Label: FUN_0040ede0
    PUSH ESI                            ; 0040ede1
    PUSH EDI                            ; 0040ede2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040ede3
    PUSH EBX                            ; 0040ede7
    CALL FUN_00408600                   ; 0040ede8
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 0040eded
    ADD EAX,0x178                       ; 0040edf0
    PUSH EAX                            ; 0040edf5
    CALL FUN_004448d0                   ; 0040edf6
        ;   XREF to: 004448d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004448d0()
    ADD ESP,0x4                         ; 0040edfb
    ADD EAX,0x10                        ; 0040edfe
    PUSH EAX                            ; 0040ee01
    CALL FUN_00462500                   ; 0040ee02
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    LEA EBX,[EAX + 0xfffffe78]          ; 0040ee07
    MOV dword ptr [EBX + 0x154],0x5db794 ; 0040ee0d
    MOV dword ptr [EBX + 0x184],0x0     ; 0040ee17
    MOV dword ptr [EBX + 0x304],0x0     ; 0040ee21
    MOV ESI,0x5b6223                    ; 0040ee2b
    MOV dword ptr [EBX + 0x308],0x41f00000 ; 0040ee30
    ADD ESP,0x4                         ; 0040ee3a
    MOV dword ptr [EBX + 0x30c],0x3f800000 ; 0040ee3d
    LEA EDI,[EBX + 0x158]               ; 0040ee47
    MOV dword ptr [EBX + 0x310],0x41f00000 ; 0040ee4d
    PUSH EDI                            ; 0040ee57
    MOV AL,byte ptr [ESI]               ; 0040ee58
        ;   Label: LAB_0040ee58
    MOV byte ptr [EDI],AL               ; 0040ee5a
    CMP AL,0x0                          ; 0040ee5c
    JZ 0x0040ee70                       ; 0040ee5e
        ;   XREF to: 0040ee70 (CONDITIONAL_JUMP)  ; LAB_0040ee70
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ee60
    ADD ESI,0x2                         ; 0040ee63
    MOV byte ptr [EDI + 0x1],AL         ; 0040ee66
    ADD EDI,0x2                         ; 0040ee69
    CMP AL,0x0                          ; 0040ee6c
    JNZ 0x0040ee58                      ; 0040ee6e
        ;   XREF to: 0040ee58 (CONDITIONAL_JUMP)  ; LAB_0040ee58
    POP EDI                             ; 0040ee70
        ;   Label: LAB_0040ee70
    PUSH 0x5b622f                       ; 0040ee71
    LEA EAX,[EBX + 0x188]               ; 0040ee76
    PUSH EAX                            ; 0040ee7c
    CALL FUN_004625f0                   ; 0040ee7d
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV byte ptr [EBX + 0x314],0x0      ; 0040ee82
    MOV dword ptr [EBX + 0x378],0x41700000 ; 0040ee89
    ADD ESP,0x8                         ; 0040ee93
    MOV dword ptr [EBX + 0x37c],0x41f00000 ; 0040ee96
    MOV EAX,EBX                         ; 0040eea0
    MOV dword ptr [EBX + 0x384],0x0     ; 0040eea2
    POP EDI                             ; 0040eeac
    POP ESI                             ; 0040eead
    POP EBX                             ; 0040eeae
    RET                                 ; 0040eeaf

