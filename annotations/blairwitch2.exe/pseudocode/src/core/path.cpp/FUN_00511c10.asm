; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_00511c10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01e5ec6c
;   undefined4 DAT_01e5ec70
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511c10
        ;   Label: core_path.cpp_FUN_00511c10
    MOV EBX,dword ptr [0x01e5ec6c]      ; 00511c11 | DAT_01e5ec6c
    CMP EBX,dword ptr [0x01e5ec70]      ; 00511c17 | DAT_01e5ec70
    JZ 0x00511c68                       ; 00511c1d
        ;   XREF to: 00511c68 (CONDITIONAL_JUMP)  ; LAB_00511c68
    MOV EBX,dword ptr [0x01e5ec6c]      ; 00511c1f | DAT_01e5ec6c
        ;   Label: LAB_00511c1f
    LEA EAX,[EBX*0x4 + 0x0]             ; 00511c25
    SUB EAX,EBX                         ; 00511c2c
    MOV ECX,dword ptr [ESP + 0x8]       ; 00511c2e
    MOV EDX,dword ptr [EAX*0x4 + 0x1e5020c] ; 00511c32
    MOV dword ptr [ECX],EDX             ; 00511c39
    MOV ECX,dword ptr [ESP + 0xc]       ; 00511c3b
    MOV EDX,dword ptr [EAX*0x4 + 0x1e50210] ; 00511c3f
    MOV dword ptr [ECX],EDX             ; 00511c46
    MOV EDX,dword ptr [ESP + 0x10]      ; 00511c48
    MOV EAX,dword ptr [EAX*0x4 + 0x1e50214] ; 00511c4c
    INC EBX                             ; 00511c53
    MOV dword ptr [EDX],EAX             ; 00511c54
    CMP EBX,0x1388                      ; 00511c56
    JL 0x00511c60                       ; 00511c5c
        ;   XREF to: 00511c60 (CONDITIONAL_JUMP)  ; LAB_00511c60
    XOR EBX,EBX                         ; 00511c5e
    MOV dword ptr [0x01e5ec6c],EBX      ; 00511c60 | DAT_01e5ec6c
        ;   Label: LAB_00511c60
    POP EBX                             ; 00511c66
    RET                                 ; 00511c67
    PUSH ESI                            ; 00511c68
        ;   Label: LAB_00511c68
    MOV ECX,0x5e1681                    ; 00511c69
    MOV ESI,0xdf                        ; 00511c6e
    PUSH 0x5e1692                       ; 00511c73
    MOV dword ptr [0x01d046a0],ECX      ; 00511c78 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00511c7e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00511c84
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00511c89
    POP ESI                             ; 00511c8c
    JMP 0x00511c1f                      ; 00511c8d
        ;   XREF to: 00511c1f (UNCONDITIONAL_JUMP)  ; LAB_00511c1f

