; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d7f80(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_004c8440
;   FUN_004d8720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7f80
        ;   Label: FUN_004d7f80
    PUSH EDI                            ; 004d7f81
    PUSH 0x589669                       ; 004d7f82
    MOV EDX,dword ptr [ESP + 0x14]      ; 004d7f87
    PUSH EDX                            ; 004d7f8b
    PUSH 0x58966c                       ; 004d7f8c
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004d7f91
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004d7f96
    MOV EBX,EAX                         ; 004d7f99
    TEST EAX,EAX                        ; 004d7f9b
    JZ 0x004d7fb9                       ; 004d7f9d
        ;   XREF to: 004d7fb9 (CONDITIONAL_JUMP)  ; LAB_004d7fb9
    PUSH EBX                            ; 004d7f9f
        ;   Label: LAB_004d7f9f
    MOV EDI,dword ptr [ESP + 0x10]      ; 004d7fa0
    PUSH EDI                            ; 004d7fa4
    CALL FUN_004d8720                   ; 004d7fa5
        ;   XREF to: 004d8720 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8720()
    ADD ESP,0x8                         ; 004d7faa
    PUSH EBX                            ; 004d7fad
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004d7fae
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004d7fb3
    POP EDI                             ; 004d7fb6
    POP EBX                             ; 004d7fb7
    RET                                 ; 004d7fb8
    PUSH ESI                            ; 004d7fb9
        ;   Label: LAB_004d7fb9
    MOV ECX,0x589672                    ; 004d7fba
    MOV ESI,0xb6                        ; 004d7fbf
    PUSH 0x589686                       ; 004d7fc4
    MOV dword ptr [0x01cc4800],ECX      ; 004d7fc9 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d7fcf | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d7fd5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d7fda
    POP ESI                             ; 004d7fdd
    JMP 0x004d7f9f                      ; 004d7fde
        ;   XREF to: 004d7f9f (UNCONDITIONAL_JUMP)  ; LAB_004d7f9f

