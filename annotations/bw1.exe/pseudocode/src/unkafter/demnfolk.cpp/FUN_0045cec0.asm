; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_demnfolk_cpp_FUN_0045cec0(int param_1)
;
;
; Referenced Globals:
;   undefined1 DAT_005d82f3
;   undefined1 DAT_005d82f4
;   undefined1 DAT_005d82f5
;   undefined1 DAT_005d82f6
;   undefined1 DAT_005d82f9
;   undefined1 DAT_005d82fa
;   undefined1 DAT_005d82fb
;   TerminatedCString s_rt_wav_2_005d82fc
;   undefined4 DAT_0152c320
;   undefined4 DAT_0152c321
;   undefined4 DAT_0152c322
;   undefined4 DAT_0152c323
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cec0
        ;   Label: unkafter_demnfolk.cpp_FUN_0045cec0
    PUSH ESI                            ; 0045cec1
    PUSH EDI                            ; 0045cec2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045cec3
    MOV ESI,0x5d82f3                    ; 0045cec7 | DAT_005d82f3
    MOV EDI,0x152c320                   ; 0045cecc
    PUSH EDI                            ; 0045ced1 | DAT_0152c320
    MOV AL,byte ptr [ESI]               ; 0045ced2 | DAT_005d82f3 | DAT_005d82f5
        ;   Label: LAB_0045ced2
    MOV byte ptr [EDI],AL               ; 0045ced4 | DAT_0152c320 | DAT_0152c322
    CMP AL,0x0                          ; 0045ced6
    JZ 0x0045ceea                       ; 0045ced8
        ;   XREF to: 0045ceea (CONDITIONAL_JUMP)  ; LAB_0045ceea
    MOV AL,byte ptr [ESI + 0x1]         ; 0045ceda | DAT_005d82f4 | DAT_005d82f6
    ADD ESI,0x2                         ; 0045cedd
    MOV byte ptr [EDI + 0x1],AL         ; 0045cee0 | DAT_0152c321 | DAT_0152c323
    ADD EDI,0x2                         ; 0045cee3
    CMP AL,0x0                          ; 0045cee6
    JNZ 0x0045ced2                      ; 0045cee8
        ;   XREF to: 0045ced2 (CONDITIONAL_JUMP)  ; LAB_0045ced2
    POP EDI                             ; 0045ceea
        ;   Label: LAB_0045ceea
    LEA ESI,[EBX + 0xc36c]              ; 0045ceeb
    PUSH EDI                            ; 0045cef1 | DAT_0152c320
    SUB ECX,ECX                         ; 0045cef2
    DEC ECX                             ; 0045cef4
    MOV AL,0x0                          ; 0045cef5
    SCASB.REPNE ES:EDI                  ; 0045cef7 | DAT_0152c320 | DAT_0152c321
    DEC EDI                             ; 0045cef9
    MOV AL,byte ptr [ESI]               ; 0045cefa
        ;   Label: LAB_0045cefa
    MOV byte ptr [EDI],AL               ; 0045cefc | DAT_0152c320 | DAT_0152c322
    CMP AL,0x0                          ; 0045cefe
    JZ 0x0045cf12                       ; 0045cf00
        ;   XREF to: 0045cf12 (CONDITIONAL_JUMP)  ; LAB_0045cf12
    MOV AL,byte ptr [ESI + 0x1]         ; 0045cf02
    ADD ESI,0x2                         ; 0045cf05
    MOV byte ptr [EDI + 0x1],AL         ; 0045cf08 | DAT_0152c321 | DAT_0152c323
    ADD EDI,0x2                         ; 0045cf0b
    CMP AL,0x0                          ; 0045cf0e
    JNZ 0x0045cefa                      ; 0045cf10
        ;   XREF to: 0045cefa (CONDITIONAL_JUMP)  ; LAB_0045cefa
    POP EDI                             ; 0045cf12
        ;   Label: LAB_0045cf12
    MOV ESI,0x5d82f9                    ; 0045cf13 | DAT_005d82f9
    PUSH EDI                            ; 0045cf18 | DAT_0152c320
    SUB ECX,ECX                         ; 0045cf19
    DEC ECX                             ; 0045cf1b
    MOV AL,0x0                          ; 0045cf1c
    SCASB.REPNE ES:EDI                  ; 0045cf1e | DAT_0152c320 | DAT_0152c321
    DEC EDI                             ; 0045cf20
    MOV AL,byte ptr [ESI]               ; 0045cf21 | DAT_005d82f9 | DAT_005d82fb
        ;   Label: LAB_0045cf21
    MOV byte ptr [EDI],AL               ; 0045cf23 | DAT_0152c320 | DAT_0152c322 | DAT_0152c321
    CMP AL,0x0                          ; 0045cf25
    JZ 0x0045cf39                       ; 0045cf27
        ;   XREF to: 0045cf39 (CONDITIONAL_JUMP)  ; LAB_0045cf39
    MOV AL,byte ptr [ESI + 0x1]         ; 0045cf29 | DAT_005d82fa | = "rt?.wav @ 2"
    ADD ESI,0x2                         ; 0045cf2c
    MOV byte ptr [EDI + 0x1],AL         ; 0045cf2f | DAT_0152c321 | DAT_0152c323 | DAT_0152c322
    ADD EDI,0x2                         ; 0045cf32
    CMP AL,0x0                          ; 0045cf35
    JNZ 0x0045cf21                      ; 0045cf37
        ;   XREF to: 0045cf21 (CONDITIONAL_JUMP)  ; LAB_0045cf21
    POP EDI                             ; 0045cf39
        ;   Label: LAB_0045cf39
    MOV EDX,dword ptr [EBX + 0xc34c]    ; 0045cf3a
    PUSH EDX                            ; 0045cf40
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0045cf41
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0045cf46
    TEST EAX,EAX                        ; 0045cf49
    JZ 0x0045cf51                       ; 0045cf4b
        ;   XREF to: 0045cf51 (CONDITIONAL_JUMP)  ; LAB_0045cf51
    POP EDI                             ; 0045cf4d
    POP ESI                             ; 0045cf4e
    POP EBX                             ; 0045cf4f
    RET                                 ; 0045cf50
    PUSH EDI                            ; 0045cf51 | DAT_0152c320
        ;   Label: LAB_0045cf51
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045cf52
    PUSH EBX                            ; 0045cf58
    CALL dword ptr [EAX + 0x2c]         ; 0045cf59
    ADD ESP,0x8                         ; 0045cf5c
    MOV dword ptr [EBX + 0xc34c],EAX    ; 0045cf5f
    POP EDI                             ; 0045cf65
    POP ESI                             ; 0045cf66
    POP EBX                             ; 0045cf67
    RET                                 ; 0045cf68

