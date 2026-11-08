; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004972d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004972d0
        ;   Label: FUN_004972d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004972d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004972d5
    MOV ECX,dword ptr [ESP + 0x10]      ; 004972d9
    CMP EAX,EDX                         ; 004972dd
    JNZ 0x004972ff                      ; 004972df
        ;   XREF to: 004972ff (CONDITIONAL_JUMP)  ; LAB_004972ff
    LEA EDX,[EAX + 0xc]                 ; 004972e1
        ;   Label: LAB_004972e1
    CMP EDX,ECX                         ; 004972e4
    JNZ 0x00497311                      ; 004972e6
        ;   XREF to: 00497311 (CONDITIONAL_JUMP)  ; LAB_00497311
    MOV EDX,dword ptr [ESP + 0x14]      ; 004972e8
        ;   Label: LAB_004972e8
    MOV dword ptr [EAX + 0x20],0x2      ; 004972ec
    MOV dword ptr [EAX + 0x18],EDX      ; 004972f3
    MOV EDX,dword ptr [ESP + 0x18]      ; 004972f6
    MOV dword ptr [EAX + 0x1c],EDX      ; 004972fa
    POP EBX                             ; 004972fd
    RET                                 ; 004972fe
    MOV EBX,dword ptr [EDX]             ; 004972ff
        ;   Label: LAB_004972ff
    MOV dword ptr [EAX],EBX             ; 00497301
    MOV EBX,dword ptr [EDX + 0x4]       ; 00497303
    MOV dword ptr [EAX + 0x4],EBX       ; 00497306
    MOV EBX,dword ptr [EDX + 0x8]       ; 00497309
    MOV dword ptr [EAX + 0x8],EBX       ; 0049730c
    JMP 0x004972e1                      ; 0049730f
        ;   XREF to: 004972e1 (UNCONDITIONAL_JUMP)  ; LAB_004972e1
    MOV EBX,dword ptr [ECX]             ; 00497311
        ;   Label: LAB_00497311
    MOV dword ptr [EDX],EBX             ; 00497313
    MOV EBX,dword ptr [ECX + 0x4]       ; 00497315
    MOV dword ptr [EDX + 0x4],EBX       ; 00497318
    MOV EBX,dword ptr [ECX + 0x8]       ; 0049731b
    MOV dword ptr [EDX + 0x8],EBX       ; 0049731e
    JMP 0x004972e8                      ; 00497321
        ;   XREF to: 004972e8 (UNCONDITIONAL_JUMP)  ; LAB_004972e8

