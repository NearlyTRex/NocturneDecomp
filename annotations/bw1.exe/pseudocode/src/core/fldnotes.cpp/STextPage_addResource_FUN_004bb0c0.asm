; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextPage_addResource_FUN_004bb0c0(STextPage *this_ptr,SPageResource *resource)
;
; Parameters:
; STextPage *      Stack[0x4]:4   this_ptr
; SPageResource *  Stack[0x8]:4   resource
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_addResource_FUN_004bb5f0 at 004bb61d
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005df912
;   TerminatedCString s_TextPage_addResource_too_005df927
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb0c0
        ;   Label: core_fldnotes.cpp_STextPage_addResource_FUN_004bb0c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bb0c1
    CMP dword ptr [EBX],0x50            ; 004bb0c5
    JGE 0x004bb0d8                      ; 004bb0c8
        ;   XREF to: 004bb0d8 (CONDITIONAL_JUMP)  ; LAB_004bb0d8
    MOV EAX,dword ptr [EBX]             ; 004bb0ca
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bb0cc
    MOV dword ptr [EBX + EAX*0x4 + 0x4],EDX ; 004bb0d0
    INC dword ptr [EBX]                 ; 004bb0d4
    POP EBX                             ; 004bb0d6
    RET                                 ; 004bb0d7
    PUSH ESI                            ; 004bb0d8
        ;   Label: LAB_004bb0d8
    MOV ECX,0x5df912                    ; 004bb0d9 | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x484                       ; 004bb0de
    PUSH 0x5df927                       ; 004bb0e3 | = "TextPage::addResource - too many reso..."
    MOV dword ptr [0x01d1d400],ECX      ; 004bb0e8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004bb0ee | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bb0f4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bb0f9
    POP ESI                             ; 004bb0fc
    MOV EAX,dword ptr [EBX]             ; 004bb0fd
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bb0ff
    MOV dword ptr [EBX + EAX*0x4 + 0x4],EDX ; 004bb103
    INC dword ptr [EBX]                 ; 004bb107
    POP EBX                             ; 004bb109
    RET                                 ; 004bb10a

