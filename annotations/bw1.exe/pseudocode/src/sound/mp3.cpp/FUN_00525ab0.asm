; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_FUN_00525ab0(int *param_1,int param_2,ulong param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fseek_FUN_005c170c
;   crt_stdio.c_ftell_FUN_005c2e90
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525ab0
        ;   Label: sound_mp3.cpp_FUN_00525ab0
    PUSH ESI                            ; 00525ab1
    PUSH EDI                            ; 00525ab2
    PUSH EBP                            ; 00525ab3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00525ab4
    MOV EDX,dword ptr [EBX]             ; 00525ab8
    MOV ESI,EBX                         ; 00525aba
    TEST EDX,EDX                        ; 00525abc
    JNZ 0x00525b4a                      ; 00525abe
        ;   XREF to: 00525b4a (CONDITIONAL_JUMP)  ; LAB_00525b4a
    MOV EDI,dword ptr [ESI + 0x4]       ; 00525ac4
        ;   Label: LAB_00525ac4
    TEST EDI,EDI                        ; 00525ac7
    JZ 0x00525adb                       ; 00525ac9
        ;   XREF to: 00525adb (CONDITIONAL_JUMP)  ; LAB_00525adb
    PUSH EDI                            ; 00525acb
    CALL crt_unknown.c_FUN_005c09f0     ; 00525acc
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00525ad1
    MOV dword ptr [ESI + 0x4],0x0       ; 00525ad4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00525adb
        ;   Label: LAB_00525adb
    PUSH EAX                            ; 00525adf
    MOV dword ptr [EBX],EAX             ; 00525ae0
    CALL crt_stdio.c_ftell_FUN_005c2e90 ; 00525ae2
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005c2e90()
    ADD ESP,0x4                         ; 00525ae7
    MOV dword ptr [EBX + 0x20],EAX      ; 00525aea
    MOV EAX,dword ptr [ESP + 0x20]      ; 00525aed
    MOV dword ptr [EBX + 0x24],EAX      ; 00525af1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00525af4
    PUSH EAX                            ; 00525af8
    MOV dword ptr [EBX + 0x8],EAX       ; 00525af9
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00525afc
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00525b01
    MOV dword ptr [EBX + 0x4],EAX       ; 00525b04
    TEST EAX,EAX                        ; 00525b07
    JZ 0x00525b5e                       ; 00525b09
        ;   XREF to: 00525b5e (CONDITIONAL_JUMP)  ; LAB_00525b5e
    PUSH 0x0                            ; 00525b0b
        ;   Label: LAB_00525b0b
    MOV EBP,dword ptr [EBX + 0x20]      ; 00525b0d
    PUSH EBP                            ; 00525b10
    MOV EAX,dword ptr [EBX]             ; 00525b11
    PUSH EAX                            ; 00525b13
    CALL crt_stdio.c_fseek_FUN_005c170c ; 00525b14
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005c170c()
    MOV dword ptr [EBX + 0x10],0x0      ; 00525b19
    MOV dword ptr [EBX + 0x14],0x0      ; 00525b20
    MOV dword ptr [EBX + 0xc],0x0       ; 00525b27
    MOV dword ptr [EBX + 0x18],0x0      ; 00525b2e
    MOV dword ptr [EBX + 0x1c],0x0      ; 00525b35
    MOV EAX,dword ptr [EBX + 0x24]      ; 00525b3c
    ADD ESP,0xc                         ; 00525b3f
    MOV dword ptr [EBX + 0x28],EAX      ; 00525b42
    POP EBP                             ; 00525b45
    POP EDI                             ; 00525b46
    POP ESI                             ; 00525b47
    POP EBX                             ; 00525b48
    RET                                 ; 00525b49
    PUSH EDX                            ; 00525b4a
        ;   Label: LAB_00525b4a
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00525b4b
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00525b50
    MOV dword ptr [EBX],0x0             ; 00525b53
    JMP 0x00525ac4                      ; 00525b59
        ;   XREF to: 00525ac4 (UNCONDITIONAL_JUMP)  ; LAB_00525ac4
    PUSH 0x1d404c8                      ; 00525b5e
        ;   Label: LAB_00525b5e
    MOV ESI,0x5eb13d                    ; 00525b63
    MOV EDI,0x23d                       ; 00525b68
    PUSH 0x5eb14e                       ; 00525b6d
    MOV dword ptr [0x01d1d400],ESI      ; 00525b72 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00525b78 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00525b7e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00525b83
    JMP 0x00525b0b                      ; 00525b86
        ;   XREF to: 00525b0b (UNCONDITIONAL_JUMP)  ; LAB_00525b0b

