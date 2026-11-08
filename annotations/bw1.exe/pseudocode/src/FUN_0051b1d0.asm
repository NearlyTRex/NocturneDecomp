; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b1d0(int param_1,int param_2)
;
;
; XREF[4]:
;   FUN_004f7690 at 004f87d1
;   FUN_004f9ae0 at 004f9b02
;   FUN_0051b4d0 at 0051b4e1
;   FUN_0051bad0 at 0051bb60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b1d0
        ;   Label: FUN_0051b1d0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051b1d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051b1d5
    TEST EDX,EDX                        ; 0051b1d9
    JZ 0x0051b225                       ; 0051b1db
        ;   XREF to: 0051b225 (CONDITIONAL_JUMP)  ; LAB_0051b225
    MOV EAX,dword ptr [ECX + 0x1118]    ; 0051b1dd
    XOR EBX,EBX                         ; 0051b1e3
    TEST EAX,EAX                        ; 0051b1e5
    JZ 0x0051b231                       ; 0051b1e7
        ;   XREF to: 0051b231 (CONDITIONAL_JUMP)  ; LAB_0051b231
    CMP EAX,EDX                         ; 0051b1e9
        ;   Label: LAB_0051b1e9
    JNZ 0x0051b227                      ; 0051b1eb
        ;   XREF to: 0051b227 (CONDITIONAL_JUMP)  ; LAB_0051b227
    PUSH EDI                            ; 0051b1ed
        ;   Label: LAB_0051b1ed
    PUSH ESI                            ; 0051b1ee
    MOV EBX,dword ptr [EDX + 0x150]     ; 0051b1ef
    TEST EBX,EBX                        ; 0051b1f5
    JNZ 0x0051b245                      ; 0051b1f7
        ;   XREF to: 0051b245 (CONDITIONAL_JUMP)  ; LAB_0051b245
    MOV EDI,dword ptr [EDX + 0x14c]     ; 0051b1f9
    TEST EDI,EDI                        ; 0051b1ff
    JNZ 0x0051b237                      ; 0051b201
        ;   XREF to: 0051b237 (CONDITIONAL_JUMP)  ; LAB_0051b237
    MOV dword ptr [ECX + 0x1118],EBX    ; 0051b203
    MOV dword ptr [ECX + 0x111c],EBX    ; 0051b209
    MOV dword ptr [EDX + 0x14c],0x0     ; 0051b20f
        ;   Label: LAB_0051b20f
    MOV dword ptr [EDX + 0x150],0x0     ; 0051b219
    POP ESI                             ; 0051b223
    POP EDI                             ; 0051b224
    POP EBX                             ; 0051b225
        ;   Label: LAB_0051b225
    RET                                 ; 0051b226
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0051b227
        ;   Label: LAB_0051b227
    TEST EAX,EAX                        ; 0051b22d
    JNZ 0x0051b1e9                      ; 0051b22f
        ;   XREF to: 0051b1e9 (CONDITIONAL_JUMP)  ; LAB_0051b1e9
    TEST EBX,EBX                        ; 0051b231
        ;   Label: LAB_0051b231
    JNZ 0x0051b1ed                      ; 0051b233
        ;   XREF to: 0051b1ed (CONDITIONAL_JUMP)  ; LAB_0051b1ed
    POP EBX                             ; 0051b235
    RET                                 ; 0051b236
    MOV dword ptr [ECX + 0x1118],EDI    ; 0051b237
        ;   Label: LAB_0051b237
    MOV dword ptr [EDI + 0x150],EBX     ; 0051b23d
    JMP 0x0051b20f                      ; 0051b243
        ;   XREF to: 0051b20f (UNCONDITIONAL_JUMP)  ; LAB_0051b20f
    MOV ESI,dword ptr [EDX + 0x14c]     ; 0051b245
        ;   Label: LAB_0051b245
    TEST ESI,ESI                        ; 0051b24b
    JNZ 0x0051b25d                      ; 0051b24d
        ;   XREF to: 0051b25d (CONDITIONAL_JUMP)  ; LAB_0051b25d
    MOV dword ptr [ECX + 0x111c],EBX    ; 0051b24f
    MOV dword ptr [EBX + 0x14c],ESI     ; 0051b255
    JMP 0x0051b20f                      ; 0051b25b
        ;   XREF to: 0051b20f (UNCONDITIONAL_JUMP)  ; LAB_0051b20f
    MOV dword ptr [EBX + 0x14c],ESI     ; 0051b25d
        ;   Label: LAB_0051b25d
    MOV EAX,dword ptr [EDX + 0x150]     ; 0051b263
    MOV dword ptr [ESI + 0x150],EAX     ; 0051b269
    JMP 0x0051b20f                      ; 0051b26f
        ;   XREF to: 0051b20f (UNCONDITIONAL_JUMP)  ; LAB_0051b20f

