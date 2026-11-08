; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bfa40(int param_1)
;
; Local Variables:
; undefined1       Stack[-0x210]:1  local_210
; undefined1       Stack[-0x20f]:1  local_20f
; undefined        Stack[-0x10c]:1  local_10c
;
; XREF[2]:
;   FUN_004b7f90 at 004b8a87
;   FUN_004ba540 at 004ba7c1
;
; Referenced Globals:
;   undefined4 DAT_005c3a88
;   undefined4 DAT_005c3a8c
;   TerminatedCString s_sav_005c3a91
;   undefined4 DAT_005c3a97
;   TerminatedCString s_Select_file_to_load_005c3a9c
;   undefined4 DAT_005fb140
;   undefined4 DAT_01d225c8
;   undefined4 DAT_01d225c9
;   undefined4 DAT_01d225ca
;   undefined4 DAT_01d225cb
;
; Called Functions:
;   FUN_0047db70
;   FUN_00508960
;   FUN_005a3260
;   FUN_005a5128
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfa40
        ;   Label: FUN_004bfa40
    PUSH ESI                            ; 004bfa41
    PUSH EDI                            ; 004bfa42
    SUB ESP,0x204                       ; 004bfa43
    MOV EBX,dword ptr [ESP + 0x214]     ; 004bfa49
    LEA EAX,[ESP + 0x104]               ; 004bfa50
    PUSH EAX                            ; 004bfa57
    PUSH 0x0                            ; 004bfa58
    PUSH 0x0                            ; 004bfa5a
    PUSH 0x0                            ; 004bfa5c
    MOV dword ptr [EBX + 0xa78],0x0     ; 004bfa5e
    PUSH 0x1d225c8                      ; 004bfa68 | DAT_01d225c8
    MOV byte ptr [EBX + 0xa7c],0x0      ; 004bfa6d
    CALL FUN_005a5128                   ; 004bfa74
        ;   XREF to: 005a5128 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5128()
    ADD ESP,0x14                        ; 004bfa79
    PUSH 0x5c3a88                       ; 004bfa7c | DAT_005c3a88
    LEA EAX,[ESP + 0x108]               ; 004bfa81
    PUSH EAX                            ; 004bfa88
    CALL FUN_005a3260                   ; 004bfa89
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004bfa8e
    TEST EAX,EAX                        ; 004bfa91
    JZ 0x004bfaae                       ; 004bfa93
        ;   XREF to: 004bfaae (CONDITIONAL_JUMP)  ; LAB_004bfaae
    PUSH 0x5c3a8c                       ; 004bfa95 | DAT_005c3a8c
    LEA EAX,[ESP + 0x108]               ; 004bfa9a
    PUSH EAX                            ; 004bfaa1
    CALL FUN_005a3260                   ; 004bfaa2
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004bfaa7
    TEST EAX,EAX                        ; 004bfaaa
    JNZ 0x004bfb0b                      ; 004bfaac
        ;   XREF to: 004bfb0b (CONDITIONAL_JUMP)  ; LAB_004bfb0b
    MOV ESI,0x1d225c8                   ; 004bfaae
        ;   Label: LAB_004bfaae
    MOV EDI,ESP                         ; 004bfab3
    PUSH EDI                            ; 004bfab5
    MOV AL,byte ptr [ESI]               ; 004bfab6 | DAT_01d225c8 | DAT_01d225ca
        ;   Label: LAB_004bfab6
    MOV byte ptr [EDI],AL               ; 004bfab8
    CMP AL,0x0                          ; 004bfaba
    JZ 0x004bface                       ; 004bfabc
        ;   XREF to: 004bface (CONDITIONAL_JUMP)  ; LAB_004bface
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfabe | DAT_01d225c9 | DAT_01d225cb
    ADD ESI,0x2                         ; 004bfac1
    MOV byte ptr [EDI + 0x1],AL         ; 004bfac4
    ADD EDI,0x2                         ; 004bfac7
    CMP AL,0x0                          ; 004bfaca
    JNZ 0x004bfab6                      ; 004bfacc
        ;   XREF to: 004bfab6 (CONDITIONAL_JUMP)  ; LAB_004bfab6
    POP EDI                             ; 004bface
        ;   Label: LAB_004bface
    PUSH 0x1                            ; 004bfacf
        ;   Label: LAB_004bfacf
    LEA EAX,[ESP + 0x4]                 ; 004bfad1
    PUSH EAX                            ; 004bfad5
    PUSH 0x5c3a91                       ; 004bfad6 | = "*.sav"
    PUSH 0x5c3a97                       ; 004bfadb | DAT_005c3a97
    PUSH 0x5c3a9c                       ; 004bfae0 | = "Select file to load"
    CALL FUN_00508960                   ; 004bfae5
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004bfaea
    PUSH EAX                            ; 004bfaed
    MOV EDX,dword ptr [0x005fb140]      ; 004bfaee | DAT_005fb140
    PUSH EDX                            ; 004bfaf4
    CALL FUN_0047db70                   ; 004bfaf5
        ;   XREF to: 0047db70 (UNCONDITIONAL_CALL)  ; undefined FUN_0047db70()
    ADD ESP,0x18                        ; 004bfafa
    TEST EAX,EAX                        ; 004bfafd
    JNZ 0x004bfb12                      ; 004bfaff
        ;   XREF to: 004bfb12 (CONDITIONAL_JUMP)  ; LAB_004bfb12
    ADD ESP,0x204                       ; 004bfb01
    POP EDI                             ; 004bfb07
    POP ESI                             ; 004bfb08
    POP EBX                             ; 004bfb09
    RET                                 ; 004bfb0a
    XOR AH,AH                           ; 004bfb0b
        ;   Label: LAB_004bfb0b
    MOV byte ptr [ESP],AH               ; 004bfb0d
    JMP 0x004bfacf                      ; 004bfb10
        ;   XREF to: 004bfacf (UNCONDITIONAL_JUMP)  ; LAB_004bfacf
    MOV ESI,ESP                         ; 004bfb12
        ;   Label: LAB_004bfb12
    LEA EDI,[EBX + 0xa7c]               ; 004bfb14
    MOV dword ptr [EBX + 0xa78],0x1     ; 004bfb1a
    PUSH EDI                            ; 004bfb24
    MOV AL,byte ptr [ESI]               ; 004bfb25
        ;   Label: LAB_004bfb25
    MOV byte ptr [EDI],AL               ; 004bfb27
    CMP AL,0x0                          ; 004bfb29
    JZ 0x004bfb3d                       ; 004bfb2b
        ;   XREF to: 004bfb3d (CONDITIONAL_JUMP)  ; LAB_004bfb3d
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfb2d
    ADD ESI,0x2                         ; 004bfb30
    MOV byte ptr [EDI + 0x1],AL         ; 004bfb33
    ADD EDI,0x2                         ; 004bfb36
    CMP AL,0x0                          ; 004bfb39
    JNZ 0x004bfb25                      ; 004bfb3b
        ;   XREF to: 004bfb25 (CONDITIONAL_JUMP)  ; LAB_004bfb25
    POP EDI                             ; 004bfb3d
        ;   Label: LAB_004bfb3d
    ADD ESP,0x204                       ; 004bfb3e
    POP EDI                             ; 004bfb44
    POP ESI                             ; 004bfb45
    POP EBX                             ; 004bfb46
    RET                                 ; 004bfb47

