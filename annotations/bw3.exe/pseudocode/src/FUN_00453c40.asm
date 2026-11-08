; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00453c40(int *param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004540c0 at 0045428a
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_0053acf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453c40
        ;   Label: FUN_00453c40
    PUSH ESI                            ; 00453c41
    SUB ESP,0x28                        ; 00453c42
    MOV ESI,dword ptr [ESP + 0x34]      ; 00453c45
    MOV EBX,dword ptr [ESP + 0x38]      ; 00453c49
    MOV EDX,0x3                         ; 00453c4d
    XOR ECX,ECX                         ; 00453c52
    MOV dword ptr [ESP + 0x4],EDX       ; 00453c54
    MOV dword ptr [ESP + 0x14],ECX      ; 00453c58
    MOV dword ptr [ESP + 0x10],ECX      ; 00453c5c
    MOV dword ptr [ESP + 0xc],ECX       ; 00453c60
    MOV dword ptr [ESP + 0x8],ECX       ; 00453c64
    MOV ECX,0xc                         ; 00453c68
    MOV EAX,dword ptr [ESI]             ; 00453c6d
    XOR EDX,EDX                         ; 00453c6f
    SUB EAX,EBX                         ; 00453c71
    DIV ECX                             ; 00453c73
    MOV dword ptr [ESP + 0x18],EAX      ; 00453c75
    MOV EAX,dword ptr [ESI + 0x4]       ; 00453c79
    XOR EDX,EDX                         ; 00453c7c
    SUB EAX,EBX                         ; 00453c7e
    DIV ECX                             ; 00453c80
    MOV dword ptr [ESP + 0x1c],EAX      ; 00453c82
    MOV EAX,dword ptr [ESI + 0x8]       ; 00453c86
    XOR EDX,EDX                         ; 00453c89
    SUB EAX,EBX                         ; 00453c8b
    DIV ECX                             ; 00453c8d
    PUSH 0x1                            ; 00453c8f
    MOV dword ptr [ESP + 0x24],EAX      ; 00453c91
    LEA EAX,[ESP + 0x4]                 ; 00453c95
    PUSH EAX                            ; 00453c99
    MOV EDX,dword ptr [0x00603b28]      ; 00453c9a | DAT_00603b28
    PUSH EDX                            ; 00453ca0 | DAT_01ed78c8
    CALL FUN_0053acf0                   ; 00453ca1
        ;   XREF to: 0053acf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053acf0()
    ADD ESP,0xc                         ; 00453ca6
    ADD ESP,0x28                        ; 00453ca9
    POP ESI                             ; 00453cac
    POP EBX                             ; 00453cad
    RET                                 ; 00453cae

