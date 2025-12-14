; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90(CLZWDictionary * this_ptr, int code, int parent_index)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   code
; int              Stack[0xc]:4   parent_index
;
; XREF[3]:
;   support_codec.cpp_CLZWCompress_process_FUN_0043f360 at 0043f402
;   support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0 at 0043f613
;   support_codec.cpp_CLZWDecompress_process_FUN_0043f510 at 0043f53c
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ef90
        ;   Label: support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
    PUSH EBP                            ; 0043ef91
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043ef92
    MOV EBX,dword ptr [ESP + 0x14]      ; 0043ef96
    MOV ECX,dword ptr [EAX]             ; 0043ef9a
    MOV EDX,dword ptr [EAX + 0xc]       ; 0043ef9c
    CMP EDX,ECX                         ; 0043ef9f
    JGE 0x0043f00f                      ; 0043efa1
        ;   XREF to: 0043f00f (CONDITIONAL_JUMP)  ; LAB_0043f00f
    DEC EDX                             ; 0043efa3
    TEST dword ptr [EAX + 0xc],EDX      ; 0043efa4
    JNZ 0x0043efac                      ; 0043efa7
        ;   XREF to: 0043efac (CONDITIONAL_JUMP)  ; LAB_0043efac
    INC dword ptr [EAX + 0x8]           ; 0043efa9
    PUSH ESI                            ; 0043efac
        ;   Label: LAB_0043efac
    MOV EDX,dword ptr [EAX + 0xc]       ; 0043efad
    MOV ECX,dword ptr [EAX + 0x10]      ; 0043efb0
    SHL EDX,0x4                         ; 0043efb3
    ADD EDX,ECX                         ; 0043efb6
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043efb8
    MOV dword ptr [EDX],ECX             ; 0043efbc
    MOV EDX,dword ptr [EAX + 0xc]       ; 0043efbe
    MOV ECX,dword ptr [EAX + 0x10]      ; 0043efc1
    SHL EDX,0x4                         ; 0043efc4
    MOV dword ptr [ECX + EDX*0x1 + 0x4],EBX ; 0043efc7
    MOV ECX,dword ptr [EAX + 0xc]       ; 0043efcb
    MOV EDX,dword ptr [EAX + 0x10]      ; 0043efce
    SHL ECX,0x4                         ; 0043efd1
    MOV dword ptr [ECX + EDX*0x1 + 0x8],0xffffffff ; 0043efd4
    MOV ECX,EBX                         ; 0043efdc
    MOV EDX,dword ptr [EAX + 0x10]      ; 0043efde
    MOV EBX,dword ptr [EAX + 0xc]       ; 0043efe1
    SHL ECX,0x4                         ; 0043efe4
    SHL EBX,0x4                         ; 0043efe7
    LEA ESI,[EDX + ECX*0x1]             ; 0043efea
    ADD EBX,EDX                         ; 0043efed
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043efef
    MOV dword ptr [EBX + 0xc],EDX       ; 0043eff2
    MOV EDX,dword ptr [EAX + 0x10]      ; 0043eff5
    ADD ECX,EDX                         ; 0043eff8
    MOV EDX,dword ptr [EAX + 0xc]       ; 0043effa
    MOV dword ptr [ECX + 0x8],EDX       ; 0043effd
    MOV EBP,dword ptr [EAX + 0xc]       ; 0043f000
    INC EBP                             ; 0043f003
    XOR EDX,EDX                         ; 0043f004
    MOV dword ptr [EAX + 0xc],EBP       ; 0043f006
    POP ESI                             ; 0043f009
    MOV EAX,EDX                         ; 0043f00a
    POP EBP                             ; 0043f00c
    POP EBX                             ; 0043f00d
    RET                                 ; 0043f00e
    PUSH EAX                            ; 0043f00f
        ;   Label: LAB_0043f00f
    CALL support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0 ; 0043f010
        ;   XREF to: 0043eef0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0(CLZWDictionary * this_ptr)
    MOV EDX,0x1                         ; 0043f015
    ADD ESP,0x4                         ; 0043f01a
    MOV EAX,EDX                         ; 0043f01d
    POP EBP                             ; 0043f01f
    POP EBX                             ; 0043f020
    RET                                 ; 0043f021

