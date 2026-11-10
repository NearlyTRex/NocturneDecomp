; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a2b30(int param_1)
;
;
; XREF[4]:
;   core_fldnotes.cpp_FUN_004a28b0 at 004a297d
;   core_fldnotes.cpp_FUN_004a2ad0 at 004a2adb
;   core_fldnotes.cpp_FUN_004a2bf0 at 004a2bf9
;   core_fldnotes.cpp_FUN_004a2c90 at 004a2c96
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005d5b6e
;   TerminatedCString s_Out_of_memory_005d5b83
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a1f80
;   core_fldnotes.cpp_FUN_004a2bb0
;   core_main.c_FUN_004e4500
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2b30
        ;   Label: core_fldnotes.cpp_FUN_004a2b30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a2b31
    CMP byte ptr [EBX + 0x48],0x0       ; 004a2b35
    JNZ 0x004a2b3d                      ; 004a2b39
        ;   XREF to: 004a2b3d (CONDITIONAL_JUMP)  ; LAB_004a2b3d
    POP EBX                             ; 004a2b3b
    RET                                 ; 004a2b3c
    PUSH ESI                            ; 004a2b3d
        ;   Label: LAB_004a2b3d
    PUSH 0x120                          ; 004a2b3e
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004a2b43
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004a2b48
    TEST EAX,EAX                        ; 004a2b4b
    JZ 0x004a2b60                       ; 004a2b4d
        ;   XREF to: 004a2b60 (CONDITIONAL_JUMP)  ; LAB_004a2b60
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004a2b4f
    PUSH EDX                            ; 004a2b52
    LEA ESI,[EBX + 0x48]                ; 004a2b53
    PUSH ESI                            ; 004a2b56
    PUSH EAX                            ; 004a2b57
    CALL core_fldnotes.cpp_FUN_004a1f80 ; 004a2b58
        ;   XREF to: 004a1f80 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a1f80()
    ADD ESP,0xc                         ; 004a2b5d
    MOV ESI,EAX                         ; 004a2b60
        ;   Label: LAB_004a2b60
    TEST EAX,EAX                        ; 004a2b62
    JNZ 0x004a2b8b                      ; 004a2b64
        ;   XREF to: 004a2b8b (CONDITIONAL_JUMP)  ; LAB_004a2b8b
    PUSH EDI                            ; 004a2b66
    MOV ECX,0x5d5b6e                    ; 004a2b67 | = "..\\core\\fldnotes.cpp"
    MOV EDI,0x538                       ; 004a2b6c
    PUSH 0x5d5b83                       ; 004a2b71 | = "Out of memory"
    MOV dword ptr [0x01d046a0],ECX      ; 004a2b76 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004a2b7c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a2b82
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a2b87
    POP EDI                             ; 004a2b8a
    MOV EAX,dword ptr [EBX + 0x40]      ; 004a2b8b
        ;   Label: LAB_004a2b8b
    MOV dword ptr [ESI],EAX             ; 004a2b8e
    MOV EAX,dword ptr [EBX + 0x44]      ; 004a2b90
    MOV dword ptr [ESI + 0x4],EAX       ; 004a2b93
    PUSH ESI                            ; 004a2b96
    MOV EAX,dword ptr [EBX + 0x34]      ; 004a2b97
    PUSH EBX                            ; 004a2b9a
    MOV dword ptr [ESI + 0x18],EAX      ; 004a2b9b
    CALL core_fldnotes.cpp_FUN_004a2bb0 ; 004a2b9e
        ;   XREF to: 004a2bb0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a2bb0()
    ADD ESP,0x8                         ; 004a2ba3
    MOV byte ptr [EBX + 0x48],0x0       ; 004a2ba6
    POP ESI                             ; 004a2baa
    POP EBX                             ; 004a2bab
    RET                                 ; 004a2bac

