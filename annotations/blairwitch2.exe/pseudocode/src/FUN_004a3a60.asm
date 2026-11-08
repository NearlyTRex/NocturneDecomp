; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3a60(int *param_1)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004a5f60 at 004a5f75
;
; Referenced Globals:
;   undefined4 DAT_005d5df8
;   undefined4 DAT_005d5e00
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   FUN_004a3bb0
;   FUN_004a3d00
;   FUN_005b7ff0
;   FUN_005b84d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3a60
        ;   Label: FUN_004a3a60
    PUSH EBP                            ; 004a3a61
    SUB ESP,0x14                        ; 004a3a62
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a3a65
    MOV EAX,[0x01cedef4]                ; 004a3a69 | DAT_01cedef4
    SHL EAX,0x2                         ; 004a3a6e
    CMP dword ptr [EAX + 0x1cedee4],0x0 ; 004a3a71
    JZ 0x004a3a89                       ; 004a3a78
        ;   XREF to: 004a3a89 (CONDITIONAL_JUMP)  ; LAB_004a3a89
    MOV ECX,dword ptr [EBX]             ; 004a3a7a
    TEST ECX,ECX                        ; 004a3a7c
    JZ 0x004a3a89                       ; 004a3a7e
        ;   XREF to: 004a3a89 (CONDITIONAL_JUMP)  ; LAB_004a3a89
    CMP dword ptr [ECX + 0x140],0x6     ; 004a3a80
    JZ 0x004a3a8f                       ; 004a3a87
        ;   XREF to: 004a3a8f (CONDITIONAL_JUMP)  ; LAB_004a3a8f
    ADD ESP,0x14                        ; 004a3a89
        ;   Label: LAB_004a3a89
    POP EBP                             ; 004a3a8c
    POP EBX                             ; 004a3a8d
    RET                                 ; 004a3a8e
    LEA EDX,[ESP + 0x8]                 ; 004a3a8f
        ;   Label: LAB_004a3a8f
    PUSH EDX                            ; 004a3a93
    LEA EDX,[ESP + 0x10]                ; 004a3a94
    MOV EAX,dword ptr [EAX + 0x1cedee4] ; 004a3a98
    PUSH EDX                            ; 004a3a9e
    ADD EAX,0x20                        ; 004a3a9f
    PUSH EAX                            ; 004a3aa2
    PUSH EBX                            ; 004a3aa3
    CALL FUN_004a3d00                   ; 004a3aa4
        ;   XREF to: 004a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3d00()
    ADD ESP,0x10                        ; 004a3aa9
    TEST EAX,EAX                        ; 004a3aac
    JL 0x004a3a89                       ; 004a3aae
        ;   XREF to: 004a3a89 (CONDITIONAL_JUMP)  ; LAB_004a3a89
    MOV EDX,EAX                         ; 004a3ab0
    SHL EAX,0x4                         ; 004a3ab2
    ADD EAX,EDX                         ; 004a3ab5
    FLD float ptr [EBX + EAX*0x8 + 0x124] ; 004a3ab7
    FMUL double ptr [0x005d5df8]        ; 004a3abe | DAT_005d5df8
    SUB ESP,0x8                         ; 004a3ac4
    FSTP double ptr [ESP]               ; 004a3ac7
    CALL FUN_005b84d0                   ; 004a3aca
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b84d0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004a3acf
    MOV dword ptr [ESP + 0xc],EDX       ; 004a3ad3
    FLD double ptr [ESP + 0x8]          ; 004a3ad7
    FADD double ptr [0x005d5e00]        ; 004a3adb | DAT_005d5e00
    ADD ESP,0x8                         ; 004a3ae1
    CALL FUN_005b7ff0                   ; 004a3ae4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x10]        ; 004a3ae9
    CMP dword ptr [ESP + 0x10],0x1      ; 004a3aed
    JGE 0x004a3afc                      ; 004a3af2
        ;   XREF to: 004a3afc (CONDITIONAL_JUMP)  ; LAB_004a3afc
    MOV dword ptr [ESP + 0x10],0x1      ; 004a3af4
    PUSH EDI                            ; 004a3afc
        ;   Label: LAB_004a3afc
    PUSH ESI                            ; 004a3afd
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a3afe
    IMUL EDX,dword ptr [EBX + 0x98]     ; 004a3b02
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a3b09
    MOV ESI,dword ptr [EBX + 0x6c]      ; 004a3b0d
    PUSH EAX                            ; 004a3b10
    MOV EAX,EDX                         ; 004a3b11
    SAR EDX,0x1f                        ; 004a3b13
    IDIV ESI                            ; 004a3b16
    MOV EDI,dword ptr [EBX + 0x94]      ; 004a3b18
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a3b1e
    IMUL EDX,EDI                        ; 004a3b22
    MOV EBP,dword ptr [EBX + 0x68]      ; 004a3b25
    PUSH EAX                            ; 004a3b28
    MOV EAX,EDX                         ; 004a3b29
    SAR EDX,0x1f                        ; 004a3b2b
    IDIV EBP                            ; 004a3b2e
    PUSH EAX                            ; 004a3b30
    PUSH EBX                            ; 004a3b31
    CALL FUN_004a3bb0                   ; 004a3b32
        ;   XREF to: 004a3bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3bb0()
    ADD ESP,0x10                        ; 004a3b37
    POP ESI                             ; 004a3b3a
    POP EDI                             ; 004a3b3b
    ADD ESP,0x14                        ; 004a3b3c
    POP EBP                             ; 004a3b3f
    POP EBX                             ; 004a3b40
    RET                                 ; 004a3b41

