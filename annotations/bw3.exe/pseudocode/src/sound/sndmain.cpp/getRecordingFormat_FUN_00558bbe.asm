; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_getRecordingFormat_FUN_00558bbe(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_0060425c
;   undefined4 DAT_00604260
;   undefined4 DAT_00604264
;   undefined4 DAT_02cf3c70
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00558bbe
        ;   Label: sound_sndmain.cpp_getRecordingFormat_FUN_00558bbe
    PUSH EBX                            ; 00558bc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00558bc1
    MOV ECX,dword ptr [ESP + 0x10]      ; 00558bc5
    MOV EDX,dword ptr [ESP + 0x14]      ; 00558bc9
    TEST EBX,EBX                        ; 00558bcd
    JNZ 0x00558bf1                      ; 00558bcf
        ;   XREF to: 00558bf1 (CONDITIONAL_JUMP)  ; LAB_00558bf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00558bd1
        ;   Label: LAB_00558bd1
    TEST EBX,EBX                        ; 00558bd5
    JZ 0x00558be0                       ; 00558bd7
        ;   XREF to: 00558be0 (CONDITIONAL_JUMP)  ; LAB_00558be0
    MOV EAX,[0x00604260]                ; 00558bd9 | DAT_00604260
    MOV dword ptr [EBX],EAX             ; 00558bde
    TEST ECX,ECX                        ; 00558be0
        ;   Label: LAB_00558be0
    JZ 0x00558beb                       ; 00558be2
        ;   XREF to: 00558beb (CONDITIONAL_JUMP)  ; LAB_00558beb
    MOV EAX,[0x00604264]                ; 00558be4 | DAT_00604264
    MOV dword ptr [ECX],EAX             ; 00558be9
    TEST EDX,EDX                        ; 00558beb
        ;   Label: LAB_00558beb
    JNZ 0x00558bfa                      ; 00558bed
        ;   XREF to: 00558bfa (CONDITIONAL_JUMP)  ; LAB_00558bfa
    POP EBX                             ; 00558bef
    RET                                 ; 00558bf0
    MOV EAX,[0x0060425c]                ; 00558bf1 | DAT_0060425c
        ;   Label: LAB_00558bf1
    MOV dword ptr [EBX],EAX             ; 00558bf6
    JMP 0x00558bd1                      ; 00558bf8
        ;   XREF to: 00558bd1 (UNCONDITIONAL_JUMP)  ; LAB_00558bd1
    MOV EAX,[0x02cf3c70]                ; 00558bfa | DAT_02cf3c70
        ;   Label: LAB_00558bfa
    MOV dword ptr [EDX],EAX             ; 00558bff
    POP EBX                             ; 00558c01
    RET                                 ; 00558c02

