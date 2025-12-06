; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void crt_io.c_generateTempFilename_FUN_00601f1c(char * buffer, int file_handle)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; int              Stack[0x8]:4   file_handle
;
; XREF[1]:
;   crt_stdio.c_fclose_FUN_00601fd0 at 0060207e
;
; Called Functions:
;   crt_io.c_getTempDirectory_FUN_00609afc
;   crt_process.c_getpid_FUN_006099c0
;   crt_string.c_hexDigitToChar_FUN_00601f0c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601f1c
        ;   Label: crt_io.c_generateTempFilename_FUN_00601f1c
    PUSH ESI                            ; 00601f1d
    PUSH EDI                            ; 00601f1e
    PUSH EBP                            ; 00601f1f
    MOV EBX,dword ptr [ESP + 0x14]      ; 00601f20
    CALL crt_process.c_getpid_FUN_006099c0 ; 00601f24 | undefined crt_process.c_getpid_FUN_006099c0()
        ;   XREF to: 006099c0 (UNCONDITIONAL_CALL)
    MOV EBP,EAX                         ; 00601f29
    SHR EBP,0x10                        ; 00601f2b
    MOV EDI,EBX                         ; 00601f2e
    OR EBP,EAX                          ; 00601f30
    CALL crt_io.c_getTempDirectory_FUN_00609afc ; 00601f32 | undefined crt_io.c_getTempDirectory_FUN_00609afc()
        ;   XREF to: 00609afc (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 00601f37
    PUSH EDI                            ; 00601f39
    MOV AL,byte ptr [ESI]               ; 00601f3a
        ;   Label: LAB_00601f3a
    MOV byte ptr [EDI],AL               ; 00601f3c
    CMP AL,0x0                          ; 00601f3e
    JZ 0x00601f52                       ; 00601f40 | LAB_00601f52
        ;   XREF to: 00601f52 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00601f42
    ADD ESI,0x2                         ; 00601f45
    MOV byte ptr [EDI + 0x1],AL         ; 00601f48
    ADD EDI,0x2                         ; 00601f4b
    CMP AL,0x0                          ; 00601f4e
    JNZ 0x00601f3a                      ; 00601f50 | LAB_00601f3a
        ;   XREF to: 00601f3a (CONDITIONAL_JUMP)
    POP EDI                             ; 00601f52
        ;   Label: LAB_00601f52
    PUSH ES                             ; 00601f53
    MOV AX,DS                           ; 00601f54
    MOV ES,AX                           ; 00601f56
    SUB ECX,ECX                         ; 00601f58
    DEC ECX                             ; 00601f5a
    XOR EAX,EAX                         ; 00601f5b
    SCASB.REPNE ES:EDI                  ; 00601f5d
    NOT ECX                             ; 00601f5f
    DEC ECX                             ; 00601f61
    POP ES                              ; 00601f62
    LEA EDI,[EBX + ECX*0x1]             ; 00601f63
    LEA EBX,[EDI + 0x4]                 ; 00601f66
    MOV byte ptr [EDI],0x74             ; 00601f69
    MOV ESI,EDI                         ; 00601f6c
    MOV EAX,EBP                         ; 00601f6e
        ;   Label: LAB_00601f6e
    AND EAX,0xf                         ; 00601f70
    DEC EBX                             ; 00601f73
    PUSH EAX                            ; 00601f74
    SHR EBP,0x4                         ; 00601f75
    CALL crt_string.c_hexDigitToChar_FUN_00601f0c ; 00601f78 | char crt_string.c_hexDigitToChar_FUN_00601f0c(int digit)
        ;   XREF to: 00601f0c (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00601f7d
    MOV byte ptr [EBX + 0x1],AL         ; 00601f80
    CMP EBX,ESI                         ; 00601f83
    JNZ 0x00601f6e                      ; 00601f85 | LAB_00601f6e
        ;   XREF to: 00601f6e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x18]      ; 00601f87
    SAR EAX,0x4                         ; 00601f8b
    AND EAX,0xf                         ; 00601f8e
    PUSH EAX                            ; 00601f91
    MOV byte ptr [EDI + 0x5],0x5f       ; 00601f92
    CALL crt_string.c_hexDigitToChar_FUN_00601f0c ; 00601f96 | char crt_string.c_hexDigitToChar_FUN_00601f0c(int digit)
        ;   XREF to: 00601f0c (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00601f9b
    MOV byte ptr [EDI + 0x6],AL         ; 00601f9e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00601fa1
    AND EAX,0xf                         ; 00601fa5
    PUSH EAX                            ; 00601fa8
    CALL crt_string.c_hexDigitToChar_FUN_00601f0c ; 00601fa9 | char crt_string.c_hexDigitToChar_FUN_00601f0c(int digit)
        ;   XREF to: 00601f0c (UNCONDITIONAL_CALL)
    MOV byte ptr [EDI + 0x8],0x2e       ; 00601fae
    MOV byte ptr [EDI + 0x9],0x74       ; 00601fb2
    MOV byte ptr [EDI + 0xa],0x6d       ; 00601fb6
    MOV byte ptr [EDI + 0xb],0x70       ; 00601fba
    MOV byte ptr [EDI + 0xc],0x0        ; 00601fbe
    ADD ESP,0x4                         ; 00601fc2
    MOV byte ptr [EDI + 0x7],AL         ; 00601fc5
    POP EBP                             ; 00601fc8
    POP EDI                             ; 00601fc9
    POP ESI                             ; 00601fca
    POP EBX                             ; 00601fcb
    RET                                 ; 00601fcc

