; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_0057d280(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   unkaddr_0057b9a0.cpp_CInStreamFile_peekChar_FUN_0057cf80 at 0057cfcc
;   unkaddr_0057b9a0.cpp_CInStreamFile_read_FUN_0057cfe0 at 0057d03a
;
; Referenced Globals:
;   void* PTR_ReadFile_005c8604 = 001c90be
;   void* PTR_SetFilePointer_005c862c = 001c9182
;
; Called Functions:
;   ReadFile
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d280
        ;   Label: support_trstream.cpp_FUN_0057d280
    PUSH ESI                            ; 0057d281
    PUSH EDI                            ; 0057d282
    PUSH EBP                            ; 0057d283
    SUB ESP,0x4                         ; 0057d284
    MOV EBX,dword ptr [ESP + 0x18]      ; 0057d287
    MOV EDX,dword ptr [EBX + 0xc]       ; 0057d28b
    MOV EAX,dword ptr [EBX + 0x10]      ; 0057d28e
    ADD EAX,EDX                         ; 0057d291
    AND AX,0xf000                       ; 0057d293
    MOV ECX,EAX                         ; 0057d297
    SUB ECX,EDX                         ; 0057d299
    MOV EDX,dword ptr [EBX + 0x8]       ; 0057d29b
    SUB EDX,ECX                         ; 0057d29e
    MOV dword ptr [EBX + 0x24],EDX      ; 0057d2a0
    ADD EDX,0xfff                       ; 0057d2a3
    MOV dword ptr [EBX + 0x1c],ECX      ; 0057d2a9
    AND DX,0xf000                       ; 0057d2ac
    MOV ESI,dword ptr [EBX + 0x20]      ; 0057d2b1
    MOV dword ptr [EBX + 0x24],EDX      ; 0057d2b4
    CMP EDX,ESI                         ; 0057d2b7
    JLE 0x0057d2be                      ; 0057d2b9
        ;   XREF to: 0057d2be (CONDITIONAL_JUMP)  ; LAB_0057d2be
    MOV dword ptr [EBX + 0x24],ESI      ; 0057d2bb
    PUSH 0x0                            ; 0057d2be
        ;   Label: LAB_0057d2be
    PUSH 0x0                            ; 0057d2c0
    PUSH EAX                            ; 0057d2c2
    MOV EDI,dword ptr [EBX + 0x4]       ; 0057d2c3
    PUSH EDI                            ; 0057d2c6
    XOR EBP,EBP                         ; 0057d2c7
    CALL dword ptr CS:[0x5c862c]        ; 0057d2c9 | PTR_SetFilePointer_005c862c
    PUSH EBP                            ; 0057d2d0
    LEA EAX,[ESP + 0x4]                 ; 0057d2d1
    MOV dword ptr [ESP + 0x4],EBP       ; 0057d2d5
    PUSH EAX                            ; 0057d2d9
    MOV EAX,dword ptr [EBX + 0x24]      ; 0057d2da
    PUSH EAX                            ; 0057d2dd
    MOV EDX,dword ptr [EBX + 0x18]      ; 0057d2de
    PUSH EDX                            ; 0057d2e1
    MOV ECX,dword ptr [EBX + 0x4]       ; 0057d2e2
    PUSH ECX                            ; 0057d2e5
    CALL dword ptr CS:[0x5c8604]        ; 0057d2e6 | PTR_ReadFile_005c8604
    MOV EAX,dword ptr [ESP]             ; 0057d2ed
    MOV dword ptr [EBX + 0x24],EAX      ; 0057d2f0
    CMP EAX,0x1                         ; 0057d2f3
    JGE 0x0057d305                      ; 0057d2f6
        ;   XREF to: 0057d305 (CONDITIONAL_JUMP)  ; LAB_0057d305
    XOR EAX,EAX                         ; 0057d2f8
    MOV dword ptr [EBX + 0x24],EBP      ; 0057d2fa
    ADD ESP,0x4                         ; 0057d2fd
    POP EBP                             ; 0057d300
    POP EDI                             ; 0057d301
    POP ESI                             ; 0057d302
    POP EBX                             ; 0057d303
    RET                                 ; 0057d304
    MOV EAX,0x1                         ; 0057d305
        ;   Label: LAB_0057d305
    ADD ESP,0x4                         ; 0057d30a
    POP EBP                             ; 0057d30d
    POP EDI                             ; 0057d30e
    POP ESI                             ; 0057d30f
    POP EBX                             ; 0057d310
    RET                                 ; 0057d311

