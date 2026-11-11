; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_00573eb0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   unkafter_turret.cpp_CInStreamFile_read_FUN_00573c00 at 00573c5e
;   unkafter_turret.cpp_FUN_00573b90 at 00573be1
;
; Referenced Globals:
;   void* PTR_ReadFile_005b3618 = 001b4100
;   void* PTR_SetFilePointer_005b3640 = 001b41c4
;
; Called Functions:
;   ReadFile
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573eb0
        ;   Label: support_trstream.cpp_FUN_00573eb0
    PUSH ESI                            ; 00573eb1
    PUSH EDI                            ; 00573eb2
    PUSH EBP                            ; 00573eb3
    SUB ESP,0x4                         ; 00573eb4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00573eb7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00573ebb
    MOV EDX,dword ptr [EBX + 0xc]       ; 00573ebf
    ADD EAX,EDX                         ; 00573ec2
    AND AX,0xf000                       ; 00573ec4
    MOV ECX,EAX                         ; 00573ec8
    SUB ECX,EDX                         ; 00573eca
    MOV EDX,dword ptr [EBX + 0x8]       ; 00573ecc
    SUB EDX,ECX                         ; 00573ecf
    MOV dword ptr [EBX + 0x24],EDX      ; 00573ed1
    ADD EDX,0xfff                       ; 00573ed4
    MOV dword ptr [EBX + 0x1c],ECX      ; 00573eda
    AND DX,0xf000                       ; 00573edd
    MOV ESI,dword ptr [EBX + 0x20]      ; 00573ee2
    MOV dword ptr [EBX + 0x24],EDX      ; 00573ee5
    CMP EDX,ESI                         ; 00573ee8
    JLE 0x00573eef                      ; 00573eea
        ;   XREF to: 00573eef (CONDITIONAL_JUMP)  ; LAB_00573eef
    MOV dword ptr [EBX + 0x24],ESI      ; 00573eec
    PUSH 0x0                            ; 00573eef
        ;   Label: LAB_00573eef
    PUSH 0x0                            ; 00573ef1
    PUSH EAX                            ; 00573ef3
    MOV EDI,dword ptr [EBX + 0x4]       ; 00573ef4
    PUSH EDI                            ; 00573ef7
    XOR EBP,EBP                         ; 00573ef8
    CALL dword ptr CS:[0x5b3640]        ; 00573efa | PTR_SetFilePointer_005b3640
    PUSH EBP                            ; 00573f01
    LEA EAX,[ESP + 0x4]                 ; 00573f02
    MOV dword ptr [ESP + 0x4],EBP       ; 00573f06
    PUSH EAX                            ; 00573f0a
    MOV EAX,dword ptr [EBX + 0x24]      ; 00573f0b
    PUSH EAX                            ; 00573f0e
    MOV EDX,dword ptr [EBX + 0x18]      ; 00573f0f
    PUSH EDX                            ; 00573f12
    MOV ECX,dword ptr [EBX + 0x4]       ; 00573f13
    PUSH ECX                            ; 00573f16
    CALL dword ptr CS:[0x5b3618]        ; 00573f17 | PTR_ReadFile_005b3618
    MOV EAX,dword ptr [ESP]             ; 00573f1e
    MOV dword ptr [EBX + 0x24],EAX      ; 00573f21
    CMP EAX,0x1                         ; 00573f24
    JGE 0x00573f36                      ; 00573f27
        ;   XREF to: 00573f36 (CONDITIONAL_JUMP)  ; LAB_00573f36
    XOR EAX,EAX                         ; 00573f29
    MOV dword ptr [EBX + 0x24],EBP      ; 00573f2b
    ADD ESP,0x4                         ; 00573f2e
    POP EBP                             ; 00573f31
    POP EDI                             ; 00573f32
    POP ESI                             ; 00573f33
    POP EBX                             ; 00573f34
    RET                                 ; 00573f35
    MOV EAX,0x1                         ; 00573f36
        ;   Label: LAB_00573f36
    ADD ESP,0x4                         ; 00573f3b
    POP EBP                             ; 00573f3e
    POP EDI                             ; 00573f3f
    POP ESI                             ; 00573f40
    POP EBX                             ; 00573f41
    RET                                 ; 00573f42

