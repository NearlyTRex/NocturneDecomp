; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055f950(int param_1,int *param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00407980 at 004079d8
;   FUN_0046bd80 at 0046bfd2
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01e61b58
;   undefined4 DAT_0264bbf8
;   undefined4 DAT_0264bbfc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f950
        ;   Label: FUN_0055f950
    PUSH ESI                            ; 0055f951
    PUSH EDI                            ; 0055f952
    PUSH EBP                            ; 0055f953
    SUB ESP,0x10                        ; 0055f954
    MOV EBX,dword ptr [ESP + 0x24]      ; 0055f957
    MOV EDX,dword ptr [ESP + 0x28]      ; 0055f95b
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0055f95f
    CMP dword ptr [0x01c37788],0x0      ; 0055f963 | DAT_01c37788
    JZ 0x0055fa48                       ; 0055f96a
        ;   XREF to: 0055fa48 (CONDITIONAL_JUMP)  ; LAB_0055fa48
    MOV EAX,[0x01e61b58]                ; 0055f970 | DAT_01e61b58
    MOV ESI,dword ptr [0x0264bbfc]      ; 0055f975 | DAT_0264bbfc
    ADD EAX,EBP                         ; 0055f97b
    TEST ESI,ESI                        ; 0055f97d
    JNZ 0x0055fa64                      ; 0055f97f
        ;   XREF to: 0055fa64 (CONDITIONAL_JUMP)  ; LAB_0055fa64
    MOV [0x01e61b58],EAX                ; 0055f985 | DAT_01e61b58
    XOR EDI,EDI                         ; 0055f98a
    TEST EBP,EBP                        ; 0055f98c
    JLE 0x0055fa39                      ; 0055f98e
        ;   XREF to: 0055fa39 (CONDITIONAL_JUMP)  ; LAB_0055fa39
    MOV ESI,EDX                         ; 0055f994
    MOV EAX,dword ptr [ESI]             ; 0055f996
        ;   Label: LAB_0055f996
    IMUL EDX,dword ptr [EAX + 0x18],0x30 ; 0055f998
    LEA ECX,[EBX + EDX*0x1]             ; 0055f99c
    MOV dword ptr [ESP],ECX             ; 0055f99f
    IMUL EDX,dword ptr [EAX + 0x24],0x30 ; 0055f9a2
    LEA ECX,[EBX + EDX*0x1]             ; 0055f9a6
    MOV dword ptr [ESP + 0x4],ECX       ; 0055f9a9
    IMUL EDX,dword ptr [EAX + 0x30],0x30 ; 0055f9ad
    LEA ECX,[EBX + EDX*0x1]             ; 0055f9b1
    MOV dword ptr [ESP + 0x8],ECX       ; 0055f9b4
    CMP dword ptr [EAX + 0x4],0x4       ; 0055f9b8
    JZ 0x0055fa54                       ; 0055f9bc
        ;   XREF to: 0055fa54 (CONDITIONAL_JUMP)  ; LAB_0055fa54
    MOV EDX,dword ptr [ESP]             ; 0055f9c2
        ;   Label: LAB_0055f9c2
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0055f9c5
    MOV dword ptr [EDX + 0x18],ECX      ; 0055f9c8
    MOV EDX,dword ptr [ESP]             ; 0055f9cb
    MOV ECX,dword ptr [EAX + 0x20]      ; 0055f9ce
    MOV dword ptr [EDX + 0x1c],ECX      ; 0055f9d1
    MOV ECX,dword ptr [ESP + 0x4]       ; 0055f9d4
    MOV EDX,dword ptr [EAX + 0x28]      ; 0055f9d8
    MOV dword ptr [ECX + 0x18],EDX      ; 0055f9db
    MOV ECX,dword ptr [ESP + 0x4]       ; 0055f9de
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0055f9e2
    MOV dword ptr [ECX + 0x1c],EDX      ; 0055f9e5
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055f9e8
    MOV ECX,dword ptr [EAX + 0x34]      ; 0055f9ec
    MOV dword ptr [EDX + 0x18],ECX      ; 0055f9ef
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055f9f2
    MOV ECX,dword ptr [EAX + 0x38]      ; 0055f9f6
    MOV dword ptr [EDX + 0x1c],ECX      ; 0055f9f9
    CMP dword ptr [EAX + 0x4],0x4       ; 0055f9fc
    JNZ 0x0055fa16                      ; 0055fa00
        ;   XREF to: 0055fa16 (CONDITIONAL_JUMP)  ; LAB_0055fa16
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055fa02
    MOV ECX,dword ptr [EAX + 0x40]      ; 0055fa06
    MOV dword ptr [EDX + 0x18],ECX      ; 0055fa09
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055fa0c
    MOV ECX,dword ptr [EAX + 0x44]      ; 0055fa10
    MOV dword ptr [EDX + 0x1c],ECX      ; 0055fa13
    MOV EDX,dword ptr [ESP + 0x30]      ; 0055fa16
        ;   Label: LAB_0055fa16
    PUSH EDX                            ; 0055fa1a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0055fa1b
    PUSH ECX                            ; 0055fa1e
    LEA EAX,[ESP + 0x8]                 ; 0055fa1f
    PUSH EAX                            ; 0055fa23
    ADD ESI,0x4                         ; 0055fa24
    INC EDI                             ; 0055fa27
    CALL dword ptr [0x0264bbf8]         ; 0055fa28 | DAT_0264bbf8
    ADD ESP,0xc                         ; 0055fa2e
    CMP EDI,EBP                         ; 0055fa31
    JL 0x0055f996                       ; 0055fa33
        ;   XREF to: 0055f996 (CONDITIONAL_JUMP)  ; LAB_0055f996
    MOV EDX,0x1                         ; 0055fa39
        ;   Label: LAB_0055fa39
    MOV EAX,EDX                         ; 0055fa3e
    ADD ESP,0x10                        ; 0055fa40
    POP EBP                             ; 0055fa43
    POP EDI                             ; 0055fa44
    POP ESI                             ; 0055fa45
    POP EBX                             ; 0055fa46
    RET                                 ; 0055fa47
    XOR EDX,EDX                         ; 0055fa48
        ;   Label: LAB_0055fa48
    MOV EAX,EDX                         ; 0055fa4a
    ADD ESP,0x10                        ; 0055fa4c
    POP EBP                             ; 0055fa4f
    POP EDI                             ; 0055fa50
    POP ESI                             ; 0055fa51
    POP EBX                             ; 0055fa52
    RET                                 ; 0055fa53
    IMUL EDX,dword ptr [EAX + 0x3c],0x30 ; 0055fa54
        ;   Label: LAB_0055fa54
    LEA ECX,[EBX + EDX*0x1]             ; 0055fa58
    MOV dword ptr [ESP + 0xc],ECX       ; 0055fa5b
    JMP 0x0055f9c2                      ; 0055fa5f
        ;   XREF to: 0055f9c2 (UNCONDITIONAL_JUMP)  ; LAB_0055f9c2
    MOV EDI,dword ptr [ESP + 0x30]      ; 0055fa64
        ;   Label: LAB_0055fa64
    PUSH EDI                            ; 0055fa68
    PUSH EBP                            ; 0055fa69
    PUSH EDX                            ; 0055fa6a
    PUSH EBX                            ; 0055fa6b
    MOV [0x01e61b58],EAX                ; 0055fa6c | DAT_01e61b58
    CALL dword ptr [0x0264bbfc]         ; 0055fa71 | DAT_0264bbfc
    ADD ESP,0x10                        ; 0055fa77
    MOV EDX,EAX                         ; 0055fa7a
    MOV EAX,EDX                         ; 0055fa7c
    ADD ESP,0x10                        ; 0055fa7e
    POP EBP                             ; 0055fa81
    POP EDI                             ; 0055fa82
    POP ESI                             ; 0055fa83
    POP EBX                             ; 0055fa84
    RET                                 ; 0055fa85

