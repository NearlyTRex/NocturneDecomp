; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWDictionary_initTable_FUN_00443070(CLZWDictionary *this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CLZWDictionary_addNode_FUN_00443110 at 00443190
;   support_codec.cpp_CLZWDictionary_init_FUN_00442ff0 at 0044300d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443070
        ;   Label: support_codec.cpp_CLZWDictionary_initTable_FUN_00443070
    MOV EAX,0x1                         ; 00443074
    MOV ECX,dword ptr [EDX + 0x4]       ; 00443079
    SHL EAX,CL                          ; 0044307c
    XOR ECX,ECX                         ; 0044307e
    MOV dword ptr [EDX + 0xc],EAX       ; 00443080
    TEST EAX,EAX                        ; 00443083
    JLE 0x004430bf                      ; 00443085
        ;   XREF to: 004430bf (CONDITIONAL_JUMP)  ; LAB_004430bf
    PUSH ESI                            ; 00443087
    PUSH EBX                            ; 00443088
    XOR EAX,EAX                         ; 00443089
    MOV EBX,dword ptr [EDX + 0x10]      ; 0044308b
        ;   Label: LAB_0044308b
    MOV dword ptr [EBX + EAX*0x1],ECX   ; 0044308e
    MOV EBX,dword ptr [EDX + 0x10]      ; 00443091
    MOV dword ptr [EBX + EAX*0x1 + 0x4],0xffffffff ; 00443094
    MOV EBX,dword ptr [EDX + 0x10]      ; 0044309c
    MOV dword ptr [EBX + EAX*0x1 + 0x8],0xffffffff ; 0044309f
    MOV EBX,dword ptr [EDX + 0x10]      ; 004430a7
    MOV dword ptr [EBX + EAX*0x1 + 0xc],0xffffffff ; 004430aa
    INC ECX                             ; 004430b2
    MOV ESI,dword ptr [EDX + 0xc]       ; 004430b3
    ADD EAX,0x10                        ; 004430b6
    CMP ECX,ESI                         ; 004430b9
    JL 0x0044308b                       ; 004430bb
        ;   XREF to: 0044308b (CONDITIONAL_JUMP)  ; LAB_0044308b
    POP EBX                             ; 004430bd
    POP ESI                             ; 004430be
    MOV EAX,dword ptr [EDX + 0x4]       ; 004430bf
        ;   Label: LAB_004430bf
    MOV dword ptr [EDX + 0x8],EAX       ; 004430c2
    RET                                 ; 004430c5

