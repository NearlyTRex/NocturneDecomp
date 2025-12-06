; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined engine_colquant.c_FUN_00440c80()
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_colquant.c_FUN_004406c0 at 00440936
;
; Called Functions:
;   engine_colquant.c_FUN_00441110
;   engine_colquant.c_FUN_00441260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440c80
        ;   Label: engine_colquant.c_FUN_00440c80
    PUSH ESI                            ; 00440c81
    PUSH EDI                            ; 00440c82
    PUSH EBP                            ; 00440c83
    SUB ESP,0x8                         ; 00440c84
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00440c87
    MOV EDI,dword ptr [ESP + 0x20]      ; 00440c8b
    SHL EDI,0x6                         ; 00440c8f
    MOV EAX,dword ptr [EDI + EBX*0x1 + 0x4040] ; 00440c92
    MOV ECX,dword ptr [EDI + EBX*0x1 + 0x4044] ; 00440c99
    MOV dword ptr [ESP + 0x4],EAX       ; 00440ca0
    LEA EDX,[EAX + ECX*0x1]             ; 00440ca4
    MOV EDI,dword ptr [EDI + EBX*0x1 + 0x4008] ; 00440ca7
    DEC EDX                             ; 00440cae
    SAR EDI,0x10                        ; 00440caf
    CMP EDX,EAX                         ; 00440cb2
    JLE 0x00440d34                      ; 00440cb4 | LAB_00440d34
        ;   XREF to: 00440d34 (CONDITIONAL_JUMP)
    SHL EAX,0x2                         ; 00440cba
    MOV dword ptr [ESP],EAX             ; 00440cbd
    MOV ESI,dword ptr [ESP]             ; 00440cc0
        ;   Label: LAB_00440cc0
    MOV EAX,dword ptr [EBX + 0x2004]    ; 00440cc3
    ADD EAX,ESI                         ; 00440cc9
    MOV AL,byte ptr [EAX + 0x1]         ; 00440ccb
    AND EAX,0xff                        ; 00440cce
    CMP EAX,EDI                         ; 00440cd3
    JLE 0x00440d1e                      ; 00440cd5 | LAB_00440d1e
        ;   XREF to: 00440d1e (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x4]       ; 00440cd7
    LEA EAX,[EDX*0x4 + 0x0]             ; 00440cdb
    SHL ESI,0x2                         ; 00440ce2
    CMP ESI,EAX                         ; 00440ce5
        ;   Label: LAB_00440ce5
    JGE 0x00440d03                      ; 00440ce7 | LAB_00440d03
        ;   XREF to: 00440d03 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x2004]    ; 00440ce9
    MOV CL,byte ptr [ECX + EAX*0x1 + 0x1] ; 00440cef
    AND ECX,0xff                        ; 00440cf3
    CMP ECX,EDI                         ; 00440cf9
    JLE 0x00440d03                      ; 00440cfb | LAB_00440d03
        ;   XREF to: 00440d03 (CONDITIONAL_JUMP)
    DEC EDX                             ; 00440cfd
    SUB EAX,0x4                         ; 00440cfe
    JMP 0x00440ce5                      ; 00440d01 | LAB_00440ce5
        ;   XREF to: 00440ce5 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP]             ; 00440d03
        ;   Label: LAB_00440d03
    MOV ESI,dword ptr [EBX + 0x2004]    ; 00440d06
    ADD ECX,ESI                         ; 00440d0c
    MOV ESI,dword ptr [ESI + EDX*0x4]   ; 00440d0e
    MOV EBP,dword ptr [ECX]             ; 00440d11
    MOV dword ptr [ECX],ESI             ; 00440d13
    MOV ECX,dword ptr [EBX + 0x2004]    ; 00440d15
    MOV dword ptr [ECX + EDX*0x4],EBP   ; 00440d1b
    MOV EBP,dword ptr [ESP]             ; 00440d1e
        ;   Label: LAB_00440d1e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00440d21
    ADD EBP,0x4                         ; 00440d25
    INC EAX                             ; 00440d28
    MOV dword ptr [ESP],EBP             ; 00440d29
    MOV dword ptr [ESP + 0x4],EAX       ; 00440d2c
    CMP EDX,EAX                         ; 00440d30
    JG 0x00440cc0                       ; 00440d32 | LAB_00440cc0
        ;   XREF to: 00440cc0 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x24]      ; 00440d34
        ;   Label: LAB_00440d34
    MOV ESI,dword ptr [ESP + 0x20]      ; 00440d38
    SHL EAX,0x6                         ; 00440d3c
    SHL ESI,0x6                         ; 00440d3f
    MOV dword ptr [EBX + EAX*0x1 + 0x4040],EDX ; 00440d42
    MOV ECX,EDX                         ; 00440d49
    MOV EBP,dword ptr [ESI + EBX*0x1 + 0x4040] ; 00440d4b
    MOV EDI,dword ptr [ESI + EBX*0x1 + 0x4044] ; 00440d52
    SUB ECX,EBP                         ; 00440d59
    MOV EBP,EDI                         ; 00440d5b
    SUB EBP,ECX                         ; 00440d5d
    MOV dword ptr [EBX + EAX*0x1 + 0x4044],EBP ; 00440d5f
    MOV EAX,dword ptr [ESI + EBX*0x1 + 0x4040] ; 00440d66
    SUB EDX,EAX                         ; 00440d6d
    MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDX ; 00440d6f
    MOV EDX,dword ptr [ESP + 0x20]      ; 00440d76
    PUSH EDX                            ; 00440d7a
    PUSH EBX                            ; 00440d7b
    CALL engine_colquant.c_FUN_00441260 ; 00440d7c | undefined engine_colquant.c_FUN_00441260()
        ;   XREF to: 00441260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00440d81
    MOV ECX,dword ptr [ESP + 0x24]      ; 00440d84
    PUSH ECX                            ; 00440d88
    PUSH EBX                            ; 00440d89
    CALL engine_colquant.c_FUN_00441260 ; 00440d8a | undefined engine_colquant.c_FUN_00441260()
        ;   XREF to: 00441260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00440d8f
    MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDI ; 00440d92
    MOV ESI,dword ptr [ESP + 0x24]      ; 00440d99
    PUSH ESI                            ; 00440d9d
    MOV EDI,dword ptr [ESP + 0x24]      ; 00440d9e
    PUSH EDI                            ; 00440da2
    PUSH EBX                            ; 00440da3
    CALL engine_colquant.c_FUN_00441110 ; 00440da4 | undefined engine_colquant.c_FUN_00441110()
        ;   XREF to: 00441110 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00440da9
    ADD ESP,0x8                         ; 00440dac
    POP EBP                             ; 00440daf
    POP EDI                             ; 00440db0
    POP ESI                             ; 00440db1
    POP EBX                             ; 00440db2
    RET                                 ; 00440db3

