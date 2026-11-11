; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_addResource_FUN_004a2bb0(STextView *this_ptr,int param_2)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
;
; XREF[3]:
;   core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30 at 004a2b9e
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a2cc0 at 004a2e83
;   core_fldnotes.cpp_STextView_placeResource_FUN_004a2ad0 at 004a2b11
;
; Called Functions:
;   core_fldnotes.cpp_STextPage_addResource_FUN_004a26e0
;   core_fldnotes.cpp_STextView_ensurePage_FUN_004a31c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2bb0
        ;   Label: core_fldnotes.cpp_STextView_addResource_FUN_004a2bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a2bb1
    PUSH EBX                            ; 004a2bb5
    CALL core_fldnotes.cpp_STextView_ensurePage_FUN_004a31c0 ; 004a2bb6
        ;   XREF to: 004a31c0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_ensurePage_FUN_004a31c0(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a2bbb
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a2bbe
    PUSH EDX                            ; 004a2bc2
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a2bc3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a2bc6
    ADD EAX,EDX                         ; 004a2bcd
    SHL EAX,0x4                         ; 004a2bcf
    ADD EAX,EDX                         ; 004a2bd2
    SHL EAX,0x2                         ; 004a2bd4
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004a2bd7
    ADD EAX,EDX                         ; 004a2bda
    PUSH EAX                            ; 004a2bdc
    CALL core_fldnotes.cpp_STextPage_addResource_FUN_004a26e0 ; 004a2bdd
        ;   XREF to: 004a26e0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextPage_addResource_FUN_004a26e0(STextPage * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004a2be2
    POP EBX                             ; 004a2be5
    RET                                 ; 004a2be6

