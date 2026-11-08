; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00513ca0(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_005148b0 at 00514996
;   FUN_00514cb0 at 00514cee
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513ca0
        ;   Label: FUN_00513ca0
    PUSH ESI                            ; 00513ca1
    PUSH EDI                            ; 00513ca2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00513ca3
    MOV EDX,dword ptr [ESP + 0x18]      ; 00513ca7
    MOV ECX,dword ptr [ESP + 0x14]      ; 00513cab
    LEA EAX,[ECX*0x4 + 0x0]             ; 00513caf
    ADD EAX,ECX                         ; 00513cb6
    LEA ESI,[EBX + 0x4]                 ; 00513cb8
    SHL EAX,0x2                         ; 00513cbb
    MOV ECX,dword ptr [EBX + 0x414]     ; 00513cbe
    LEA EDI,[EDX + 0x100]               ; 00513cc4
    ADD ECX,EAX                         ; 00513cca
    PUSH EDI                            ; 00513ccc
    MOV AL,byte ptr [ESI]               ; 00513ccd
        ;   Label: LAB_00513ccd
    MOV byte ptr [EDI],AL               ; 00513ccf
    CMP AL,0x0                          ; 00513cd1
    JZ 0x00513ce5                       ; 00513cd3
        ;   XREF to: 00513ce5 (CONDITIONAL_JUMP)  ; LAB_00513ce5
    MOV AL,byte ptr [ESI + 0x1]         ; 00513cd5
    ADD ESI,0x2                         ; 00513cd8
    MOV byte ptr [EDI + 0x1],AL         ; 00513cdb
    ADD EDI,0x2                         ; 00513cde
    CMP AL,0x0                          ; 00513ce1
    JNZ 0x00513ccd                      ; 00513ce3
        ;   XREF to: 00513ccd (CONDITIONAL_JUMP)  ; LAB_00513ccd
    POP EDI                             ; 00513ce5
        ;   Label: LAB_00513ce5
    MOV EAX,dword ptr [ECX + 0x8]       ; 00513ce6
    MOV dword ptr [EDX + 0x200],EAX     ; 00513ce9
    MOV EAX,dword ptr [ECX + 0x4]       ; 00513cef
    MOV dword ptr [EDX + 0x204],EAX     ; 00513cf2
    MOV EAX,dword ptr [ECX + 0xc]       ; 00513cf8
    MOV dword ptr [EDX + 0x20c],EAX     ; 00513cfb
    MOV EAX,dword ptr [EBX + 0x104]     ; 00513d01
    MOV dword ptr [EDX + 0x208],0x1     ; 00513d07
    MOV dword ptr [EDX + 0x210],EAX     ; 00513d11
    POP EDI                             ; 00513d17
    POP ESI                             ; 00513d18
    POP EBX                             ; 00513d19
    RET                                 ; 00513d1a

