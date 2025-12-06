; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00603c74()
;
; Local Variables:
; undefined1[10]   Stack[-0x1c]:10  local_1c
;
; XREF[1]:
;   crt_unknown.c_CondCallDoNothing_FUN_00603ccc at 00603d3a
;
; Referenced Globals:
;   undefined4 DAT_00684f30
;   undefined4 DAT_00684f34
;   undefined2 DAT_00684f38
;
; Called Functions:
;   crt_unknown.c_FUN_0060445e
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00603c74
        ;   Label: crt_unknown.c_FUN_00603c74
    MOV EBP,ESP                         ; 00603c75
    PUSH EBX                            ; 00603c77
    PUSH ESI                            ; 00603c78
    PUSH EDI                            ; 00603c79
    SUB ESP,0xc                         ; 00603c7a
    MOV EDI,dword ptr [EBP + 0xc]       ; 00603c7d
    CMP EDI,0x2000                      ; 00603c80
    JL 0x00603c8d                       ; 00603c86 | LAB_00603c8d
        ;   XREF to: 00603c8d (CONDITIONAL_JUMP)
    MOV EDI,0x2000                      ; 00603c88
    MOV ESI,0x684f30                    ; 00603c8d | undefined4 DAT_00684f30
        ;   Label: LAB_00603c8d
    JMP 0x00603cc3                      ; 00603c92 | LAB_00603cc3
        ;   XREF to: 00603cc3 (UNCONDITIONAL_JUMP)
    TEST DI,0x1                         ; 00603c94
        ;   Label: LAB_00603c94
    JZ 0x00603cbe                       ; 00603c99 | LAB_00603cbe
        ;   XREF to: 00603cbe (CONDITIONAL_JUMP)
    MOV AX,word ptr [ESI + 0x8]         ; 00603c9b | undefined2 DAT_00684f38
    MOV word ptr [EBP + -0x10],AX       ; 00603c9f
    MOV EAX,dword ptr [ESI + 0x4]       ; 00603ca3 | undefined4 DAT_00684f34
    MOV dword ptr [EBP + -0x14],EAX     ; 00603ca6
    MOV EBX,dword ptr [EBP + 0x8]       ; 00603ca9
    MOV EAX,dword ptr [ESI]             ; 00603cac | undefined4 DAT_00684f30
    LEA EDX,[EBP + -0x18]               ; 00603cae
    MOV dword ptr [EBP + -0x18],EAX     ; 00603cb1
    MOV EAX,EBX                         ; 00603cb4
    FLD extended double ptr [EAX]       ; 00603cb6
    FLD extended double ptr [EDX]       ; 00603cb8
    FMULP                               ; 00603cba
    FSTP extended double ptr [EBX]      ; 00603cbc
    SAR EDI,0x1                         ; 00603cbe
        ;   Label: LAB_00603cbe
    ADD ESI,0xa                         ; 00603cc0
    TEST EDI,EDI                        ; 00603cc3
        ;   Label: LAB_00603cc3
    JG 0x00603c94                       ; 00603cc5 | LAB_00603c94
        ;   XREF to: 00603c94 (CONDITIONAL_JUMP)
    JMP 0x0060445e                      ; 00603cc7
        ;   XREF to: 0060445e (UNCONDITIONAL_CALL)

