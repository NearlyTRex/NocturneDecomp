; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004df210(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004df210
        ;   Label: FUN_004df210
    MOV EAX,dword ptr [ESP + 0x8]       ; 004df211
    MOV EDX,dword ptr [ESP + 0xc]       ; 004df215
    MOV ESI,dword ptr [ESP + 0x10]      ; 004df219
    XOR ECX,ECX                         ; 004df21d
    TEST EAX,EAX                        ; 004df21f
    JLE 0x004df234                      ; 004df221
        ;   XREF to: 004df234 (CONDITIONAL_JUMP)  ; LAB_004df234
    PUSH EBX                            ; 004df223
    MOV EBX,dword ptr [EDX + 0x4]       ; 004df224
        ;   Label: LAB_004df224
    DEC EAX                             ; 004df227
    SUB EBX,0x2                         ; 004df228
    ADD EDX,ESI                         ; 004df22b
    ADD ECX,EBX                         ; 004df22d
    TEST EAX,EAX                        ; 004df22f
    JG 0x004df224                       ; 004df231
        ;   XREF to: 004df224 (CONDITIONAL_JUMP)  ; LAB_004df224
    POP EBX                             ; 004df233
    MOV EAX,ECX                         ; 004df234
        ;   Label: LAB_004df234
    POP ESI                             ; 004df236
    RET                                 ; 004df237

