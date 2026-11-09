; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_00440d70(CLZWDictionary *this_ptr,int code,int parent_index)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   code
; int              Stack[0xc]:4   parent_index
;
; XREF[2]:
;   support_codec.cpp_FUN_00441190 at 0044121b
;   support_codec.cpp_FUN_004413f0 at 00441433
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_initTable_FUN_00440cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440d70
        ;   Label: support_codec.cpp_CLZWDictionary_addNode_FUN_00440d70
    PUSH EBP                            ; 00440d71
    MOV EAX,dword ptr [ESP + 0xc]       ; 00440d72
    MOV EBX,dword ptr [ESP + 0x14]      ; 00440d76
    MOV ECX,dword ptr [EAX]             ; 00440d7a
    MOV EDX,dword ptr [EAX + 0xc]       ; 00440d7c
    CMP EDX,ECX                         ; 00440d7f
    JGE 0x00440def                      ; 00440d81
        ;   XREF to: 00440def (CONDITIONAL_JUMP)  ; LAB_00440def
    DEC EDX                             ; 00440d83
    TEST dword ptr [EAX + 0xc],EDX      ; 00440d84
    JNZ 0x00440d8c                      ; 00440d87
        ;   XREF to: 00440d8c (CONDITIONAL_JUMP)  ; LAB_00440d8c
    INC dword ptr [EAX + 0x8]           ; 00440d89
    PUSH ESI                            ; 00440d8c
        ;   Label: LAB_00440d8c
    MOV EDX,dword ptr [EAX + 0xc]       ; 00440d8d
    MOV ECX,dword ptr [EAX + 0x10]      ; 00440d90
    SHL EDX,0x4                         ; 00440d93
    ADD EDX,ECX                         ; 00440d96
    MOV ECX,dword ptr [ESP + 0x14]      ; 00440d98
    MOV dword ptr [EDX],ECX             ; 00440d9c
    MOV EDX,dword ptr [EAX + 0xc]       ; 00440d9e
    MOV ECX,dword ptr [EAX + 0x10]      ; 00440da1
    SHL EDX,0x4                         ; 00440da4
    MOV dword ptr [ECX + EDX*0x1 + 0x4],EBX ; 00440da7
    MOV ECX,dword ptr [EAX + 0xc]       ; 00440dab
    MOV EDX,dword ptr [EAX + 0x10]      ; 00440dae
    SHL ECX,0x4                         ; 00440db1
    MOV dword ptr [ECX + EDX*0x1 + 0x8],0xffffffff ; 00440db4
    MOV ECX,EBX                         ; 00440dbc
    MOV EDX,dword ptr [EAX + 0x10]      ; 00440dbe
    MOV EBX,dword ptr [EAX + 0xc]       ; 00440dc1
    SHL ECX,0x4                         ; 00440dc4
    SHL EBX,0x4                         ; 00440dc7
    LEA ESI,[EDX + ECX*0x1]             ; 00440dca
    ADD EBX,EDX                         ; 00440dcd
    MOV EDX,dword ptr [ESI + 0x8]       ; 00440dcf
    MOV dword ptr [EBX + 0xc],EDX       ; 00440dd2
    MOV EDX,dword ptr [EAX + 0x10]      ; 00440dd5
    ADD ECX,EDX                         ; 00440dd8
    MOV EDX,dword ptr [EAX + 0xc]       ; 00440dda
    MOV dword ptr [ECX + 0x8],EDX       ; 00440ddd
    MOV EBP,dword ptr [EAX + 0xc]       ; 00440de0
    INC EBP                             ; 00440de3
    XOR EDX,EDX                         ; 00440de4
    MOV dword ptr [EAX + 0xc],EBP       ; 00440de6
    POP ESI                             ; 00440de9
    MOV EAX,EDX                         ; 00440dea
    POP EBP                             ; 00440dec
    POP EBX                             ; 00440ded
    RET                                 ; 00440dee
    PUSH EAX                            ; 00440def
        ;   Label: LAB_00440def
    CALL support_codec.cpp_CLZWDictionary_initTable_FUN_00440cd0 ; 00440df0
        ;   XREF to: 00440cd0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_initTable_FUN_00440cd0(CLZWDictionary * this_ptr)
    MOV EDX,0x1                         ; 00440df5
    ADD ESP,0x4                         ; 00440dfa
    MOV EAX,EDX                         ; 00440dfd
    POP EBP                             ; 00440dff
    POP EBX                             ; 00440e00
    RET                                 ; 00440e01

