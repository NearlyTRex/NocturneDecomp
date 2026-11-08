; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045cd20(int param_1,int *param_2,byte param_3,byte param_4)
;
;
; XREF[1]:
;   FUN_0044aa20 at 0044aeae
;
; Referenced Globals:
;   undefined4 DAT_005f2820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cd20
        ;   Label: FUN_0045cd20
    PUSH ESI                            ; 0045cd21
    PUSH EDI                            ; 0045cd22
    PUSH EBP                            ; 0045cd23
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045cd24
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045cd28
    MOV CL,byte ptr [ESP + 0x1c]        ; 0045cd2c
    XOR EDX,EDX                         ; 0045cd30
    XOR EAX,EAX                         ; 0045cd32
    TEST CL,0x1                         ; 0045cd34
    JZ 0x0045cd40                       ; 0045cd37
        ;   XREF to: 0045cd40 (CONDITIONAL_JUMP)  ; LAB_0045cd40
    MOV EAX,0x4000                      ; 0045cd39
    MOV EDX,EAX                         ; 0045cd3e
    TEST byte ptr [ESP + 0x20],0x1      ; 0045cd40
        ;   Label: LAB_0045cd40
    JZ 0x0045cd4d                       ; 0045cd45
        ;   XREF to: 0045cd4d (CONDITIONAL_JUMP)  ; LAB_0045cd4d
    OR DH,0x80                          ; 0045cd47
    OR AH,0x80                          ; 0045cd4a
    CMP dword ptr [ESI + 0x8],0x0       ; 0045cd4d
        ;   Label: LAB_0045cd4d
    JLE 0x0045cd94                      ; 0045cd51
        ;   XREF to: 0045cd94 (CONDITIONAL_JUMP)  ; LAB_0045cd94
    MOV EDI,dword ptr [ESI]             ; 0045cd53
    MOV EBP,dword ptr [ESI + 0x4]       ; 0045cd55
    LEA ECX,[EAX + EDI*0x1]             ; 0045cd58
    LEA ESI,[EDX + EBP*0x1]             ; 0045cd5b
    SAR ECX,0x10                        ; 0045cd5e
    MOV EAX,dword ptr [EBX + 0x1cb8]    ; 0045cd61
    SAR ESI,0x10                        ; 0045cd67
    TEST EAX,EAX                        ; 0045cd6a
    JZ 0x0045cd9b                       ; 0045cd6c
        ;   XREF to: 0045cd9b (CONDITIONAL_JUMP)  ; LAB_0045cd9b
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0045cd6e
    MOV EDX,EAX                         ; 0045cd74
    SAR EDX,0x1f                        ; 0045cd76
    SUB EAX,EDX                         ; 0045cd79
    SAR EAX,0x1                         ; 0045cd7b
    MOV EDI,ECX                         ; 0045cd7d
    SUB EDI,EAX                         ; 0045cd7f
    IMUL EDI,EDI                        ; 0045cd81
    MOV EDX,ESI                         ; 0045cd84
    SUB EDX,EAX                         ; 0045cd86
    IMUL EDX,EDX                        ; 0045cd88
    IMUL EAX,EAX                        ; 0045cd8b
    ADD EDX,EDI                         ; 0045cd8e
    CMP EDX,EAX                         ; 0045cd90
    JLE 0x0045cdb3                      ; 0045cd92
        ;   XREF to: 0045cdb3 (CONDITIONAL_JUMP)  ; LAB_0045cdb3
    XOR EAX,EAX                         ; 0045cd94
        ;   Label: LAB_0045cd94
    POP EBP                             ; 0045cd96
        ;   Label: LAB_0045cd96
    POP EDI                             ; 0045cd97
    POP ESI                             ; 0045cd98
    POP EBX                             ; 0045cd99
    RET                                 ; 0045cd9a
    TEST ECX,ECX                        ; 0045cd9b
        ;   Label: LAB_0045cd9b
    JL 0x0045cd96                       ; 0045cd9d
        ;   XREF to: 0045cd96 (CONDITIONAL_JUMP)  ; LAB_0045cd96
    CMP ECX,dword ptr [EBX + 0x1cc0]    ; 0045cd9f
    JGE 0x0045cd96                      ; 0045cda5
        ;   XREF to: 0045cd96 (CONDITIONAL_JUMP)  ; LAB_0045cd96
    TEST ESI,ESI                        ; 0045cda7
    JL 0x0045cd96                       ; 0045cda9
        ;   XREF to: 0045cd96 (CONDITIONAL_JUMP)  ; LAB_0045cd96
    CMP ESI,dword ptr [EBX + 0x1cc4]    ; 0045cdab
    JGE 0x0045cd96                      ; 0045cdb1
        ;   XREF to: 0045cd96 (CONDITIONAL_JUMP)  ; LAB_0045cd96
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 0045cdb3
        ;   Label: LAB_0045cdb3
    IMUL EDX,ESI                        ; 0045cdb9
    MOV EAX,EDX                         ; 0045cdbc
    SAR EDX,0x1f                        ; 0045cdbe
    SHL EDX,0x3                         ; 0045cdc1
    SBB EAX,EDX                         ; 0045cdc4
    SAR EAX,0x3                         ; 0045cdc6
    MOV EDI,EAX                         ; 0045cdc9
    MOV EDX,ECX                         ; 0045cdcb
    MOV EAX,ECX                         ; 0045cdcd
    SAR EDX,0x1f                        ; 0045cdcf
    SHL EDX,0x3                         ; 0045cdd2
    SBB EAX,EDX                         ; 0045cdd5
    SAR EAX,0x3                         ; 0045cdd7
    ADD EDI,EAX                         ; 0045cdda
    MOV EAX,dword ptr [EBX + 0x2fa0]    ; 0045cddc
    ADD EAX,EDI                         ; 0045cde2
    MOV EDI,ECX                         ; 0045cde4
    AND EDI,0x7                         ; 0045cde6
    MOV DL,byte ptr [EDI + 0x5f2820]    ; 0045cde9 | DAT_005f2820
    OR byte ptr [EAX],DL                ; 0045cdef
    IMUL ESI,dword ptr [EBX + 0x1cc0]   ; 0045cdf1
    ADD ECX,ESI                         ; 0045cdf8
    MOV EAX,dword ptr [EBX + 0x2f94]    ; 0045cdfa
    ADD ECX,ECX                         ; 0045ce00
    ADD EAX,ECX                         ; 0045ce02
    POP EBP                             ; 0045ce04
    POP EDI                             ; 0045ce05
    POP ESI                             ; 0045ce06
    POP EBX                             ; 0045ce07
    RET                                 ; 0045ce08

