; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0(CLZWDictionary * this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90 at 0043f010
;   support_codec.cpp_CLZWDictionary_init_FUN_0043ee60 at 0043eed6
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043eef0
        ;   Label: support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0
    MOV EAX,0x1                         ; 0043eef4
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043eef9
    SHL EAX,CL                          ; 0043eefc
    XOR ECX,ECX                         ; 0043eefe
    MOV dword ptr [EDX + 0xc],EAX       ; 0043ef00
    TEST EAX,EAX                        ; 0043ef03
    JLE 0x0043ef3f                      ; 0043ef05
        ;   XREF to: 0043ef3f (CONDITIONAL_JUMP)  ; LAB_0043ef3f
    PUSH ESI                            ; 0043ef07
    PUSH EBX                            ; 0043ef08
    XOR EAX,EAX                         ; 0043ef09
    MOV EBX,dword ptr [EDX + 0x10]      ; 0043ef0b
        ;   Label: LAB_0043ef0b
    MOV dword ptr [EBX + EAX*0x1],ECX   ; 0043ef0e
    MOV EBX,dword ptr [EDX + 0x10]      ; 0043ef11
    MOV dword ptr [EBX + EAX*0x1 + 0x4],0xffffffff ; 0043ef14
    MOV EBX,dword ptr [EDX + 0x10]      ; 0043ef1c
    MOV dword ptr [EBX + EAX*0x1 + 0x8],0xffffffff ; 0043ef1f
    MOV EBX,dword ptr [EDX + 0x10]      ; 0043ef27
    MOV dword ptr [EBX + EAX*0x1 + 0xc],0xffffffff ; 0043ef2a
    INC ECX                             ; 0043ef32
    MOV ESI,dword ptr [EDX + 0xc]       ; 0043ef33
    ADD EAX,0x10                        ; 0043ef36
    CMP ECX,ESI                         ; 0043ef39
    JL 0x0043ef0b                       ; 0043ef3b
        ;   XREF to: 0043ef0b (CONDITIONAL_JUMP)  ; LAB_0043ef0b
    POP EBX                             ; 0043ef3d
    POP ESI                             ; 0043ef3e
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043ef3f
        ;   Label: LAB_0043ef3f
    MOV dword ptr [EDX + 0x8],EAX       ; 0043ef42
    RET                                 ; 0043ef45

