; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_005a0ec0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   unkaddr_0059f520.cpp_FUN_005a0ba0 at 005a0bf1
;   unkaddr_0059f520.cpp_FUN_005a0c10 at 005a0c6e
;
; Referenced Globals:
;   void* PTR_ReadFile_005d0618 = 001d10fa
;   void* PTR_SetFilePointer_005d0640 = 001d11be
;
; Called Functions:
;   ReadFile
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0ec0
        ;   Label: support_trstream.cpp_FUN_005a0ec0
    PUSH ESI                            ; 005a0ec1
    PUSH EDI                            ; 005a0ec2
    PUSH EBP                            ; 005a0ec3
    SUB ESP,0x4                         ; 005a0ec4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a0ec7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a0ecb
    MOV EDX,dword ptr [EBX + 0xc]       ; 005a0ecf
    ADD EAX,EDX                         ; 005a0ed2
    AND AX,0xf000                       ; 005a0ed4
    MOV ECX,EAX                         ; 005a0ed8
    SUB ECX,EDX                         ; 005a0eda
    MOV EDX,dword ptr [EBX + 0x8]       ; 005a0edc
    SUB EDX,ECX                         ; 005a0edf
    MOV dword ptr [EBX + 0x24],EDX      ; 005a0ee1
    ADD EDX,0xfff                       ; 005a0ee4
    MOV dword ptr [EBX + 0x1c],ECX      ; 005a0eea
    AND DX,0xf000                       ; 005a0eed
    MOV ESI,dword ptr [EBX + 0x20]      ; 005a0ef2
    MOV dword ptr [EBX + 0x24],EDX      ; 005a0ef5
    CMP EDX,ESI                         ; 005a0ef8
    JLE 0x005a0eff                      ; 005a0efa
        ;   XREF to: 005a0eff (CONDITIONAL_JUMP)  ; LAB_005a0eff
    MOV dword ptr [EBX + 0x24],ESI      ; 005a0efc
    PUSH 0x0                            ; 005a0eff
        ;   Label: LAB_005a0eff
    PUSH 0x0                            ; 005a0f01
    PUSH EAX                            ; 005a0f03
    MOV EDI,dword ptr [EBX + 0x4]       ; 005a0f04
    PUSH EDI                            ; 005a0f07
    XOR EBP,EBP                         ; 005a0f08
    CALL dword ptr CS:[0x5d0640]        ; 005a0f0a | PTR_SetFilePointer_005d0640
    PUSH EBP                            ; 005a0f11
    LEA EAX,[ESP + 0x4]                 ; 005a0f12
    MOV dword ptr [ESP + 0x4],EBP       ; 005a0f16
    PUSH EAX                            ; 005a0f1a
    MOV EAX,dword ptr [EBX + 0x24]      ; 005a0f1b
    PUSH EAX                            ; 005a0f1e
    MOV EDX,dword ptr [EBX + 0x18]      ; 005a0f1f
    PUSH EDX                            ; 005a0f22
    MOV ECX,dword ptr [EBX + 0x4]       ; 005a0f23
    PUSH ECX                            ; 005a0f26
    CALL dword ptr CS:[0x5d0618]        ; 005a0f27 | PTR_ReadFile_005d0618
    MOV EAX,dword ptr [ESP]             ; 005a0f2e
    MOV dword ptr [EBX + 0x24],EAX      ; 005a0f31
    CMP EAX,0x1                         ; 005a0f34
    JGE 0x005a0f46                      ; 005a0f37
        ;   XREF to: 005a0f46 (CONDITIONAL_JUMP)  ; LAB_005a0f46
    XOR EAX,EAX                         ; 005a0f39
    MOV dword ptr [EBX + 0x24],EBP      ; 005a0f3b
    ADD ESP,0x4                         ; 005a0f3e
    POP EBP                             ; 005a0f41
    POP EDI                             ; 005a0f42
    POP ESI                             ; 005a0f43
    POP EBX                             ; 005a0f44
    RET                                 ; 005a0f45
    MOV EAX,0x1                         ; 005a0f46
        ;   Label: LAB_005a0f46
    ADD ESP,0x4                         ; 005a0f4b
    POP EBP                             ; 005a0f4e
    POP EDI                             ; 005a0f4f
    POP ESI                             ; 005a0f50
    POP EBX                             ; 005a0f51
    RET                                 ; 005a0f52

