; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0053e000(ushort *param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004844f0 at 00484704
;   FUN_00484c20 at 00484d4f
;
; Referenced Globals:
;   undefined4 DAT_00629014
;   undefined4 DAT_00629024
;   undefined4 DAT_00629028
;   undefined4 DAT_00713a7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e000
        ;   Label: FUN_0053e000
    PUSH ESI                            ; 0053e001
    PUSH EDI                            ; 0053e002
    PUSH EBP                            ; 0053e003
    MOV EBP,ESP                         ; 0053e004
    SUB ESP,0x14                        ; 0053e006
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053e009
    XOR EDX,EDX                         ; 0053e00c
    MOV DX,word ptr [EBX]               ; 0053e00e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053e011
    MOV ECX,0x629014                    ; 0053e018 | DAT_00629014
    SUB EAX,EDX                         ; 0053e01d
    XOR EDX,EDX                         ; 0053e01f
    SHL EAX,0x4                         ; 0053e021
    MOV DX,word ptr [EBX + 0x2]         ; 0053e024
    ADD ECX,EAX                         ; 0053e028
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053e02a
    SUB EAX,EDX                         ; 0053e031
    SHL EAX,0x4                         ; 0053e033
    MOV BX,word ptr [EBX + 0x4]         ; 0053e036
    ADD EAX,0x629014                    ; 0053e03a | DAT_00629014
    AND EBX,0xffff                      ; 0053e03f
    LEA EDX,[EBX*0x4 + 0x0]             ; 0053e045
    SUB EDX,EBX                         ; 0053e04c
    SHL EDX,0x4                         ; 0053e04e
    MOV EBX,dword ptr [0x00713a7c]      ; 0053e051 | DAT_00713a7c
    ADD EDX,0x629014                    ; 0053e057 | DAT_00629014
    CMP EBX,0x1                         ; 0053e05d
    JNZ 0x0053e0ca                      ; 0053e060
        ;   XREF to: 0053e0ca (CONDITIONAL_JUMP)  ; LAB_0053e0ca
    MOV EDI,dword ptr [ECX + 0x10]      ; 0053e062 | DAT_00629024
    MOV EBX,dword ptr [EAX + 0x10]      ; 0053e065 | DAT_00629024
    SUB EBX,EDI                         ; 0053e068
    MOV dword ptr [EBP + -0x14],EBX     ; 0053e06a
    MOV EBX,dword ptr [EAX + 0x14]      ; 0053e06d | DAT_00629028
    MOV ESI,dword ptr [ECX + 0x14]      ; 0053e070 | DAT_00629028
    SUB EBX,ESI                         ; 0053e073
    MOV dword ptr [EBP + -0x10],EBX     ; 0053e075
    MOV ECX,dword ptr [EDX + 0x10]      ; 0053e078 | DAT_00629024
    MOV EDI,dword ptr [EAX + 0x10]      ; 0053e07b | DAT_00629024
    SUB ECX,EDI                         ; 0053e07e
    MOV dword ptr [EBP + -0xc],ECX      ; 0053e080
    MOV EDX,dword ptr [EDX + 0x14]      ; 0053e083 | DAT_00629028
    MOV ECX,dword ptr [EAX + 0x14]      ; 0053e086 | DAT_00629028
    SUB EDX,ECX                         ; 0053e089
    MOV dword ptr [EBP + -0x8],EDX      ; 0053e08b
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0053e08e
        ;   Label: LAB_0053e08e
    IMUL dword ptr [EBP + 0xfffffff8]   ; 0053e094
    MOV EBX,EAX                         ; 0053e09a
    MOV ECX,EDX                         ; 0053e09c
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 0053e09e
    IMUL dword ptr [EBP + 0xfffffff4]   ; 0053e0a4
    SUB EAX,EBX                         ; 0053e0aa
    SBB EDX,ECX                         ; 0053e0ac
    MOV EAX,0x0                         ; 0053e0ae
    JGE 0x0053e0ba                      ; 0053e0b3
        ;   XREF to: 0053e0ba (CONDITIONAL_JUMP)  ; LAB_0053e0ba
    MOV EAX,0x1                         ; 0053e0b5
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 0053e0ba
        ;   Label: LAB_0053e0ba
    MOV EAX,dword ptr [EBP + -0x4]      ; 0053e0c0
    MOV ESP,EBP                         ; 0053e0c3
    POP EBP                             ; 0053e0c5
    POP EDI                             ; 0053e0c6
    POP ESI                             ; 0053e0c7
    POP EBX                             ; 0053e0c8
    RET                                 ; 0053e0c9
    MOV ESI,dword ptr [ECX + 0x10]      ; 0053e0ca | DAT_00629024
        ;   Label: LAB_0053e0ca
    MOV EBX,dword ptr [EAX + 0x10]      ; 0053e0cd | DAT_00629024
    SUB EBX,ESI                         ; 0053e0d0
    MOV dword ptr [EBP + -0xc],EBX      ; 0053e0d2
    MOV EBX,dword ptr [EAX + 0x14]      ; 0053e0d5 | DAT_00629028
    MOV EDI,dword ptr [ECX + 0x14]      ; 0053e0d8 | DAT_00629028
    SUB EBX,EDI                         ; 0053e0db
    MOV dword ptr [EBP + -0x8],EBX      ; 0053e0dd
    MOV ECX,dword ptr [EDX + 0x10]      ; 0053e0e0 | DAT_00629024
    MOV EBX,dword ptr [EAX + 0x10]      ; 0053e0e3 | DAT_00629024
    SUB ECX,EBX                         ; 0053e0e6
    MOV dword ptr [EBP + -0x14],ECX     ; 0053e0e8
    MOV EDX,dword ptr [EDX + 0x14]      ; 0053e0eb | DAT_00629028
    MOV ESI,dword ptr [EAX + 0x14]      ; 0053e0ee | DAT_00629028
    SUB EDX,ESI                         ; 0053e0f1
    MOV dword ptr [EBP + -0x10],EDX     ; 0053e0f3
    JMP 0x0053e08e                      ; 0053e0f6
        ;   XREF to: 0053e08e (UNCONDITIONAL_JUMP)  ; LAB_0053e08e

