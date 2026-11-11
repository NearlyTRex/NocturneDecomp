; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextPage_addResource_FUN_004a26e0(STextPage *this_ptr,int param_2)
;
; Parameters:
; STextPage *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_addResource_FUN_004a2bb0 at 004a2bdd
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005d5ab1
;   TerminatedCString s_TextPage_addResource_too_005d5ac6
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a26e0
        ;   Label: core_fldnotes.cpp_STextPage_addResource_FUN_004a26e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a26e1
    CMP dword ptr [EBX],0x50            ; 004a26e5
    JGE 0x004a26f8                      ; 004a26e8
        ;   XREF to: 004a26f8 (CONDITIONAL_JUMP)  ; LAB_004a26f8
    MOV EAX,dword ptr [EBX]             ; 004a26ea
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a26ec
    MOV dword ptr [EBX + EAX*0x4 + 0x4],EDX ; 004a26f0
    INC dword ptr [EBX]                 ; 004a26f4
    POP EBX                             ; 004a26f6
    RET                                 ; 004a26f7
    PUSH ESI                            ; 004a26f8
        ;   Label: LAB_004a26f8
    MOV ECX,0x5d5ab1                    ; 004a26f9 | = "..\\core\\fldnotes.cpp"
    MOV ESI,0x450                       ; 004a26fe
    PUSH 0x5d5ac6                       ; 004a2703 | = "TextPage::addResource - too many reso..."
    MOV dword ptr [0x01d046a0],ECX      ; 004a2708 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004a270e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a2714
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a2719
    POP ESI                             ; 004a271c
    MOV EAX,dword ptr [EBX]             ; 004a271d
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a271f
    MOV dword ptr [EBX + EAX*0x4 + 0x4],EDX ; 004a2723
    INC dword ptr [EBX]                 ; 004a2727
    POP EBX                             ; 004a2729
    RET                                 ; 004a272a

