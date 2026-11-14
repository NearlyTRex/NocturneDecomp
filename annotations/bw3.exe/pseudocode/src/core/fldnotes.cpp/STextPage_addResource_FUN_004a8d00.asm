; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextPage_addResource_FUN_004a8d00(STextPage *this_ptr,SPageResource *resource)
;
; Parameters:
; STextPage *      Stack[0x4]:4   this_ptr
; SPageResource *  Stack[0x8]:4   resource
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_addResource_FUN_004a9230 at 004a925d
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005c0dff
;   TerminatedCString s_TextPage_addResource_too_005c0e14
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8d00
        ;   Label: core_fldnotes.cpp_STextPage_addResource_FUN_004a8d00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a8d01
    CMP dword ptr [EBX],0x50            ; 004a8d05
    JGE 0x004a8d18                      ; 004a8d08
        ;   XREF to: 004a8d18 (CONDITIONAL_JUMP)  ; LAB_004a8d18
    MOV EAX,dword ptr [EBX]             ; 004a8d0a
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a8d0c
    MOV dword ptr [EBX + EAX*0x4 + 0x4],EDX ; 004a8d10
    INC dword ptr [EBX]                 ; 004a8d14
    POP EBX                             ; 004a8d16
    RET                                 ; 004a8d17
    PUSH ESI                            ; 004a8d18
        ;   Label: LAB_004a8d18
    MOV ECX,0x5c0dff                    ; 004a8d19 | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x47d                       ; 004a8d1e
    PUSH 0x5c0e14                       ; 004a8d23 | = "TextPage::addResource - too many reso..."
    MOV dword ptr [0x01d71de0],ECX      ; 004a8d28 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004a8d2e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004a8d34
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004a8d39
    POP ESI                             ; 004a8d3c
    MOV EAX,dword ptr [EBX]             ; 004a8d3d
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a8d3f
    MOV dword ptr [EBX + EAX*0x4 + 0x4],EDX ; 004a8d43
    INC dword ptr [EBX]                 ; 004a8d47
    POP EBX                             ; 004a8d49
    RET                                 ; 004a8d4a

