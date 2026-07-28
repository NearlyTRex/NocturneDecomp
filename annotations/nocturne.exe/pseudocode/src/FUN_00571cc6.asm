; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00571cc6(int *param_1)
;
;
; XREF[1]:
;   crt_string.c_mbstrncpy_core_FUN_0056fd26 at 0056fd5b
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_0056b327
;   FUN_0056ce57
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571cc6
        ;   Label: FUN_00571cc6
    PUSH ESI                            ; 00571cc7
    MOV EBX,dword ptr [ESP + 0xc]       ; 00571cc8
    PUSH 0x1                            ; 00571ccc
    PUSH EBX                            ; 00571cce
    MOV ESI,0xffffffff                  ; 00571ccf
    CALL FUN_0056ce57                   ; 00571cd4
        ;   XREF to: 0056ce57 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ce57()
    ADD ESP,0x8                         ; 00571cd9
    TEST EAX,EAX                        ; 00571cdc
    JZ 0x00571d47                       ; 00571cde
        ;   XREF to: 00571d47 (CONDITIONAL_JUMP)  ; LAB_00571d47
    MOV EAX,dword ptr [EBX]             ; 00571ce0
    MOV EAX,dword ptr [EAX + 0x4]       ; 00571ce2
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00571ce5
    MOV EDX,dword ptr [EAX + 0x14]      ; 00571ce9
    MOV ECX,dword ptr [EAX + 0x10]      ; 00571cec
    MOV ESI,EAX                         ; 00571cef
    CMP EDX,ECX                         ; 00571cf1
    JNC 0x00571d18                      ; 00571cf3
        ;   XREF to: 00571d18 (CONDITIONAL_JUMP)  ; LAB_00571d18
    MOV EAX,dword ptr [ESI + 0x14]      ; 00571cf5
        ;   Label: LAB_00571cf5
    LEA EDX,[EAX + 0x1]                 ; 00571cf8
    MOV dword ptr [ESI + 0x14],EDX      ; 00571cfb
    MOV AL,byte ptr [EAX]               ; 00571cfe
    AND EAX,0xff                        ; 00571d00
    MOV ESI,EAX                         ; 00571d05
        ;   Label: LAB_00571d05
    CMP EAX,-0x1                        ; 00571d07
    JZ 0x00571d29                       ; 00571d0a
        ;   XREF to: 00571d29 (CONDITIONAL_JUMP)  ; LAB_00571d29
    MOV dword ptr [EBX + 0x4],0x1       ; 00571d0c
    MOV EAX,ESI                         ; 00571d13
    POP ESI                             ; 00571d15
    POP EBX                             ; 00571d16
    RET                                 ; 00571d17
    PUSH EAX                            ; 00571d18
        ;   Label: LAB_00571d18
    MOV EDX,dword ptr [EAX + 0x28]      ; 00571d19
    CALL dword ptr [EDX + 0x10]         ; 00571d1c
    ADD ESP,0x4                         ; 00571d1f
    CMP EAX,-0x1                        ; 00571d22
    JNZ 0x00571cf5                      ; 00571d25
        ;   XREF to: 00571cf5 (CONDITIONAL_JUMP)  ; LAB_00571cf5
    JMP 0x00571d05                      ; 00571d27
        ;   XREF to: 00571d05 (UNCONDITIONAL_JUMP)  ; LAB_00571d05
    MOV EAX,dword ptr [EBX]             ; 00571d29
        ;   Label: LAB_00571d29
    MOV EAX,dword ptr [EAX + 0x4]       ; 00571d2b
    PUSH 0x4                            ; 00571d2e
    ADD EAX,EBX                         ; 00571d30
    PUSH EAX                            ; 00571d32
    CALL crt_stdio.c_reportStreamError_FUN_0056b327 ; 00571d33
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_0056b327(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 00571d38
    MOV dword ptr [EBX + 0x4],0x0       ; 00571d3b
    MOV EAX,ESI                         ; 00571d42
    POP ESI                             ; 00571d44
    POP EBX                             ; 00571d45
    RET                                 ; 00571d46
    MOV dword ptr [EBX + 0x4],EAX       ; 00571d47
        ;   Label: LAB_00571d47
    MOV EAX,ESI                         ; 00571d4a
    POP ESI                             ; 00571d4c
    POP EBX                             ; 00571d4d
    RET                                 ; 00571d4e

