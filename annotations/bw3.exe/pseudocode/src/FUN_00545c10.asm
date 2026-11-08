; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00545c10(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545c10
        ;   Label: FUN_00545c10
    PUSH ESI                            ; 00545c11
    PUSH EDI                            ; 00545c12
    SUB ESP,0x18                        ; 00545c13
    MOV EAX,dword ptr [ESP + 0x28]      ; 00545c16
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00545c1a
    MOV EDX,dword ptr [EAX + 0xd058]    ; 00545c1e
    PUSH EDX                            ; 00545c24
    ADD EAX,0x158                       ; 00545c25
    PUSH EAX                            ; 00545c2a
    LEA ESI,[ESP + 0x8]                 ; 00545c2b
    LEA EDI,[ESP + 0x14]                ; 00545c2f
    CALL FUN_0054dcc0                   ; 00545c33
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x8]                 ; 00545c38
    ADD ESP,0x8                         ; 00545c3c
    LEA EAX,[ESP + 0xc]                 ; 00545c3f
    MOVSD ES:EDI,ESI                    ; 00545c43
    MOVSD ES:EDI,ESI                    ; 00545c44
    MOVSD ES:EDI,ESI                    ; 00545c45
    CMP EBX,EAX                         ; 00545c46
    JNZ 0x00545c56                      ; 00545c48
        ;   XREF to: 00545c56 (CONDITIONAL_JUMP)  ; LAB_00545c56
    MOV EAX,0x1                         ; 00545c4a
    ADD ESP,0x18                        ; 00545c4f
    POP EDI                             ; 00545c52
    POP ESI                             ; 00545c53
    POP EBX                             ; 00545c54
    RET                                 ; 00545c55
    MOV EAX,dword ptr [ESP + 0xc]       ; 00545c56
        ;   Label: LAB_00545c56
    MOV dword ptr [EBX],EAX             ; 00545c5a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00545c5c
    MOV dword ptr [EBX + 0x4],EAX       ; 00545c60
    MOV EAX,dword ptr [ESP + 0x14]      ; 00545c63
    MOV dword ptr [EBX + 0x8],EAX       ; 00545c67
    MOV EAX,0x1                         ; 00545c6a
    ADD ESP,0x18                        ; 00545c6f
    POP EDI                             ; 00545c72
    POP ESI                             ; 00545c73
    POP EBX                             ; 00545c74
    RET                                 ; 00545c75

