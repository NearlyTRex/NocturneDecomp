; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056ae10(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   crt_stdio.c_fprintf_FUN_005644f0 at 00564508
;   crt_unknown.c_FUN_00564c30 at 00564c47
;
; Referenced Globals:
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;
; Called Functions:
;   FUN_005671e4
;   FUN_00568890
;   FUN_00568ed0
;   FUN_00569040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ae10
        ;   Label: FUN_0056ae10
    PUSH ESI                            ; 0056ae11
    PUSH EDI                            ; 0056ae12
    PUSH EBP                            ; 0056ae13
    MOV EBX,dword ptr [ESP + 0x14]      ; 0056ae14
    MOV EDX,dword ptr [EBX + 0x10]      ; 0056ae18
    PUSH EDX                            ; 0056ae1b
    CALL dword ptr [0x005c1ac0]         ; 0056ae1c | PTR_FUN_005c1ac0
    MOV EAX,dword ptr [EBX + 0x8]       ; 0056ae22
    MOV ECX,dword ptr [EAX + 0xc]       ; 0056ae25
    ADD ESP,0x4                         ; 0056ae28
    CMP ECX,0x1                         ; 0056ae2b
    JZ 0x0056ae4f                       ; 0056ae2e
        ;   XREF to: 0056ae4f (CONDITIONAL_JUMP)  ; LAB_0056ae4f
    TEST ECX,ECX                        ; 0056ae30
    JZ 0x0056ae48                       ; 0056ae32
        ;   XREF to: 0056ae48 (CONDITIONAL_JUMP)  ; LAB_0056ae48
    MOV EDI,dword ptr [EBX + 0x10]      ; 0056ae34
    PUSH EDI                            ; 0056ae37
    CALL dword ptr [0x005c1ac4]         ; 0056ae38 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 0056ae3e
    XOR EAX,EAX                         ; 0056ae41
    POP EBP                             ; 0056ae43
    POP EDI                             ; 0056ae44
    POP ESI                             ; 0056ae45
    POP EBX                             ; 0056ae46
    RET                                 ; 0056ae47
    MOV dword ptr [EAX + 0xc],0x1       ; 0056ae48
        ;   Label: LAB_0056ae48
    MOV AH,byte ptr [EBX + 0xc]         ; 0056ae4f
        ;   Label: LAB_0056ae4f
    AND AH,0xcf                         ; 0056ae52
    MOV EBP,dword ptr [EBX + 0xc]       ; 0056ae55
    MOV byte ptr [EBX + 0xc],AH         ; 0056ae58
    MOV EAX,dword ptr [EBX + 0x8]       ; 0056ae5b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056ae5e
    AND EBP,0x30                        ; 0056ae61
    TEST EDX,EDX                        ; 0056ae64
    JNZ 0x0056ae71                      ; 0056ae66
        ;   XREF to: 0056ae71 (CONDITIONAL_JUMP)  ; LAB_0056ae71
    PUSH EBX                            ; 0056ae68
    CALL FUN_00568ed0                   ; 0056ae69
        ;   XREF to: 00568ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00568ed0()
    ADD ESP,0x4                         ; 0056ae6e
    MOV DL,byte ptr [EBX + 0xd]         ; 0056ae71
        ;   Label: LAB_0056ae71
    XOR EDI,EDI                         ; 0056ae74
    TEST DL,0x4                         ; 0056ae76
    JZ 0x0056ae90                       ; 0056ae79
        ;   XREF to: 0056ae90 (CONDITIONAL_JUMP)  ; LAB_0056ae90
    MOV DH,DL                           ; 0056ae7b
    AND DH,0xfa                         ; 0056ae7d
    MOV CL,DH                           ; 0056ae80
    MOV byte ptr [EBX + 0xd],DH         ; 0056ae82
    OR CL,0x1                           ; 0056ae85
    MOV EDI,0x1                         ; 0056ae88
    MOV byte ptr [EBX + 0xd],CL         ; 0056ae8d
    PUSH 0x56adf0                       ; 0056ae90
        ;   Label: LAB_0056ae90
    MOV ECX,dword ptr [ESP + 0x20]      ; 0056ae95
    PUSH ECX                            ; 0056ae99
    MOV ESI,dword ptr [ESP + 0x20]      ; 0056ae9a
    PUSH ESI                            ; 0056ae9e
    PUSH EBX                            ; 0056ae9f
    CALL FUN_00569040                   ; 0056aea0
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x10                        ; 0056aea5
    MOV ESI,EAX                         ; 0056aea8
    TEST EDI,EDI                        ; 0056aeaa
    JZ 0x0056aec7                       ; 0056aeac
        ;   XREF to: 0056aec7 (CONDITIONAL_JUMP)  ; LAB_0056aec7
    MOV CH,byte ptr [EBX + 0xd]         ; 0056aeae
    AND CH,0xfa                         ; 0056aeb1
    MOV AL,CH                           ; 0056aeb4
    MOV byte ptr [EBX + 0xd],CH         ; 0056aeb6
    OR AL,0x4                           ; 0056aeb9
    PUSH EBX                            ; 0056aebb
    MOV byte ptr [EBX + 0xd],AL         ; 0056aebc
    CALL FUN_00568890                   ; 0056aebf
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined FUN_00568890()
    ADD ESP,0x4                         ; 0056aec4
    TEST byte ptr [EBX + 0xc],0x20      ; 0056aec7
        ;   Label: LAB_0056aec7
    JZ 0x0056aed2                       ; 0056aecb
        ;   XREF to: 0056aed2 (CONDITIONAL_JUMP)  ; LAB_0056aed2
    MOV ESI,0xffffffff                  ; 0056aecd
    MOV EDI,dword ptr [EBX + 0xc]       ; 0056aed2
        ;   Label: LAB_0056aed2
    OR EDI,EBP                          ; 0056aed5
    MOV EBP,dword ptr [EBX + 0x10]      ; 0056aed7
    PUSH EBP                            ; 0056aeda
    MOV dword ptr [EBX + 0xc],EDI       ; 0056aedb
    CALL dword ptr [0x005c1ac4]         ; 0056aede | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 0056aee4
    MOV EAX,ESI                         ; 0056aee7
    POP EBP                             ; 0056aee9
    POP EDI                             ; 0056aeea
    POP ESI                             ; 0056aeeb
    POP EBX                             ; 0056aeec
    RET                                 ; 0056aeed

