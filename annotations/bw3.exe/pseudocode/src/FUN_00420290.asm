; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00420290(int param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; Called Functions:
;   FUN_004088f0
;   FUN_0041f1e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420290
        ;   Label: FUN_00420290
    PUSH ESI                            ; 00420291
    PUSH EDI                            ; 00420292
    MOV EDI,dword ptr [ESP + 0x10]      ; 00420293
    MOV ESI,dword ptr [ESP + 0x14]      ; 00420297
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042029b
    LEA EAX,[EDI + 0x20]                ; 0042029f
    MOV EDX,dword ptr [ESI]             ; 004202a2
    MOV dword ptr [EAX],EDX             ; 004202a4
    MOV EDX,dword ptr [ESI + 0x4]       ; 004202a6
    MOV dword ptr [EAX + 0x4],EDX       ; 004202a9
    MOV EDX,dword ptr [ESI + 0x8]       ; 004202ac
    MOV dword ptr [EAX + 0x8],EDX       ; 004202af
    LEA EAX,[EDI + 0x30]                ; 004202b2
    CMP EAX,EBX                         ; 004202b5
    JZ 0x004202c9                       ; 004202b7
        ;   XREF to: 004202c9 (CONDITIONAL_JUMP)  ; LAB_004202c9
    MOV EDX,dword ptr [EBX]             ; 004202b9
    MOV dword ptr [EAX],EDX             ; 004202bb
    MOV EDX,dword ptr [EBX + 0x4]       ; 004202bd
    MOV dword ptr [EAX + 0x4],EDX       ; 004202c0
    MOV EDX,dword ptr [EBX + 0x8]       ; 004202c3
    MOV dword ptr [EAX + 0x8],EDX       ; 004202c6
    PUSH EDI                            ; 004202c9
        ;   Label: LAB_004202c9
    CALL FUN_004088f0                   ; 004202ca
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088f0()
    LEA EAX,[EDI + 0x394]               ; 004202cf
    ADD ESP,0x4                         ; 004202d5
    CMP EAX,ESI                         ; 004202d8
    JZ 0x004202ec                       ; 004202da
        ;   XREF to: 004202ec (CONDITIONAL_JUMP)  ; LAB_004202ec
    MOV EDX,dword ptr [ESI]             ; 004202dc
    MOV dword ptr [EAX],EDX             ; 004202de
    MOV EDX,dword ptr [ESI + 0x4]       ; 004202e0
    MOV dword ptr [EAX + 0x4],EDX       ; 004202e3
    MOV EDX,dword ptr [ESI + 0x8]       ; 004202e6
    MOV dword ptr [EAX + 0x8],EDX       ; 004202e9
    LEA EAX,[EDI + 0x3a0]               ; 004202ec
        ;   Label: LAB_004202ec
    CMP EAX,EBX                         ; 004202f2
    JZ 0x00420306                       ; 004202f4
        ;   XREF to: 00420306 (CONDITIONAL_JUMP)  ; LAB_00420306
    MOV EDX,dword ptr [EBX]             ; 004202f6
    MOV dword ptr [EAX],EDX             ; 004202f8
    MOV EDX,dword ptr [EBX + 0x4]       ; 004202fa
    MOV dword ptr [EAX + 0x4],EDX       ; 004202fd
    MOV EDX,dword ptr [EBX + 0x8]       ; 00420300
    MOV dword ptr [EAX + 0x8],EDX       ; 00420303
    PUSH EDI                            ; 00420306
        ;   Label: LAB_00420306
    CALL FUN_0041f1e0                   ; 00420307
        ;   XREF to: 0041f1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041f1e0()
    ADD ESP,0x4                         ; 0042030c
    POP EDI                             ; 0042030f
    POP ESI                             ; 00420310
    POP EBX                             ; 00420311
    RET                                 ; 00420312

