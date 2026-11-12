; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_00575a4e(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)
;
; Parameters:
; int *            Stack[0x4]:4   out_bits_per_sample
; int *            Stack[0x8]:4   out_channels
; int *            Stack[0xc]:4   out_sample_rate
; int *            Stack[0x10]:4   out_signed
;
; Referenced Globals:
;   undefined4 DAT_00623320
;   undefined4 DAT_00623324
;   undefined4 DAT_00623328
;   undefined4 DAT_02c81040
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00575a4e
        ;   Label: sound_sndmain.cpp_getRecordingFormat_FUN_00575a4e
    PUSH EBX                            ; 00575a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00575a51
    MOV ECX,dword ptr [ESP + 0x10]      ; 00575a55
    MOV EDX,dword ptr [ESP + 0x14]      ; 00575a59
    TEST EBX,EBX                        ; 00575a5d
    JNZ 0x00575a81                      ; 00575a5f
        ;   XREF to: 00575a81 (CONDITIONAL_JUMP)  ; LAB_00575a81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00575a61
        ;   Label: LAB_00575a61
    TEST EBX,EBX                        ; 00575a65
    JZ 0x00575a70                       ; 00575a67
        ;   XREF to: 00575a70 (CONDITIONAL_JUMP)  ; LAB_00575a70
    MOV EAX,[0x00623324]                ; 00575a69 | DAT_00623324
    MOV dword ptr [EBX],EAX             ; 00575a6e
    TEST ECX,ECX                        ; 00575a70
        ;   Label: LAB_00575a70
    JZ 0x00575a7b                       ; 00575a72
        ;   XREF to: 00575a7b (CONDITIONAL_JUMP)  ; LAB_00575a7b
    MOV EAX,[0x00623328]                ; 00575a74 | DAT_00623328
    MOV dword ptr [ECX],EAX             ; 00575a79
    TEST EDX,EDX                        ; 00575a7b
        ;   Label: LAB_00575a7b
    JNZ 0x00575a8a                      ; 00575a7d
        ;   XREF to: 00575a8a (CONDITIONAL_JUMP)  ; LAB_00575a8a
    POP EBX                             ; 00575a7f
    RET                                 ; 00575a80
    MOV EAX,[0x00623320]                ; 00575a81 | DAT_00623320
        ;   Label: LAB_00575a81
    MOV dword ptr [EBX],EAX             ; 00575a86
    JMP 0x00575a61                      ; 00575a88
        ;   XREF to: 00575a61 (UNCONDITIONAL_JUMP)  ; LAB_00575a61
    MOV EAX,[0x02c81040]                ; 00575a8a | DAT_02c81040
        ;   Label: LAB_00575a8a
    MOV dword ptr [EDX],EAX             ; 00575a8f
    POP EBX                             ; 00575a91
    RET                                 ; 00575a92

