; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ba60(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xcf]:1  local_cf
;
; XREF[30]:
;   FUN_0040e1b0 at 0040e1ca
;   FUN_0040e860 at 0040e87a
;   FUN_0040ecc0 at 0040ecda
;   FUN_0040f4d0 at 0040f4ea
;   FUN_00411110 at 0041118e
;   FUN_004148b0 at 004148ca
;   FUN_0041c7f0 at 0041c814
;   FUN_0041f7c0 at 0041f849
;   FUN_0043a1d0 at 0043a1ea
;   FUN_0045ff80 at 0045ff9b
;   ... and 20 more
;
; Referenced Globals:
;   undefined4 DAT_007bc038
;
; Called Functions:
;   FUN_0040b730
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040ba60
        ;   Label: FUN_0040ba60
    PUSH EDI                            ; 0040ba61
    SUB ESP,0xc8                        ; 0040ba62
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0040ba68
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0040ba6f
    CMP dword ptr [0x007bc038],0x1      ; 0040ba76 | DAT_007bc038
    JNZ 0x0040baa2                      ; 0040ba7d
        ;   XREF to: 0040baa2 (CONDITIONAL_JUMP)  ; LAB_0040baa2
    PUSH EDX                            ; 0040ba7f
    LEA ESI,[ESP + 0x4]                 ; 0040ba80
    PUSH ESI                            ; 0040ba84
    CALL FUN_0040b730                   ; 0040ba85
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0040ba8a
    MOV ESI,ESP                         ; 0040ba8d
    PUSH ESI                            ; 0040ba8f
    PUSH EDI                            ; 0040ba90
    CALL FUN_0044fd70                   ; 0040ba91
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0040ba96
    ADD ESP,0xc8                        ; 0040ba99
    POP EDI                             ; 0040ba9f
    POP ESI                             ; 0040baa0
    RET                                 ; 0040baa1
    LEA ESI,[EDI + 0x78]                ; 0040baa2
        ;   Label: LAB_0040baa2
    MOV EDI,ESP                         ; 0040baa5
    PUSH EDI                            ; 0040baa7
    MOV AL,byte ptr [ESI]               ; 0040baa8
        ;   Label: LAB_0040baa8
    MOV byte ptr [EDI],AL               ; 0040baaa
    CMP AL,0x0                          ; 0040baac
    JZ 0x0040bac0                       ; 0040baae
        ;   XREF to: 0040bac0 (CONDITIONAL_JUMP)  ; LAB_0040bac0
    MOV AL,byte ptr [ESI + 0x1]         ; 0040bab0
    ADD ESI,0x2                         ; 0040bab3
    MOV byte ptr [EDI + 0x1],AL         ; 0040bab6
    ADD EDI,0x2                         ; 0040bab9
    CMP AL,0x0                          ; 0040babc
    JNZ 0x0040baa8                      ; 0040babe
        ;   XREF to: 0040baa8 (CONDITIONAL_JUMP)  ; LAB_0040baa8
    POP EDI                             ; 0040bac0
        ;   Label: LAB_0040bac0
    PUSH EDX                            ; 0040bac1
    LEA ESI,[ESP + 0x4]                 ; 0040bac2
    PUSH ESI                            ; 0040bac6
    CALL FUN_0040b730                   ; 0040bac7
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0040bacc
    ADD ESP,0xc8                        ; 0040bacf
    POP EDI                             ; 0040bad5
    POP ESI                             ; 0040bad6
    RET                                 ; 0040bad7

