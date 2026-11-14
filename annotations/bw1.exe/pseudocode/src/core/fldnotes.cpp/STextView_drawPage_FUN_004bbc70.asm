; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004bbc70(STextView *this_ptr,int page)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   page
;
; XREF[1]:
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004be0f0 at 004be268
;
; Called Functions:
;   core_fldnotes.cpp_STextPage_draw_FUN_004bb160
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004bbc70
        ;   Label: core_fldnotes.cpp_STextView_drawPage_FUN_004bbc70
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bbc74
    TEST EDX,EDX                        ; 004bbc78
    JL 0x004bbc81                       ; 004bbc7a
        ;   XREF to: 004bbc81 (CONDITIONAL_JUMP)  ; LAB_004bbc81
    CMP EDX,dword ptr [ECX + 0x38]      ; 004bbc7c
    JL 0x004bbc82                       ; 004bbc7f
        ;   XREF to: 004bbc82 (CONDITIONAL_JUMP)  ; LAB_004bbc82
    RET                                 ; 004bbc81
        ;   Label: LAB_004bbc81
    LEA EAX,[EDX*0x4 + 0x0]             ; 004bbc82
        ;   Label: LAB_004bbc82
    ADD EAX,EDX                         ; 004bbc89
    SHL EAX,0x4                         ; 004bbc8b
    ADD EAX,EDX                         ; 004bbc8e
    SHL EAX,0x2                         ; 004bbc90
    MOV EDX,dword ptr [ECX + 0x3c]      ; 004bbc93
    ADD EAX,EDX                         ; 004bbc96
    PUSH EAX                            ; 004bbc98
    CALL core_fldnotes.cpp_STextPage_draw_FUN_004bb160 ; 004bbc99
        ;   XREF to: 004bb160 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextPage_draw_FUN_004bb160(STextPage * this_ptr)
    ADD ESP,0x4                         ; 004bbc9e
    RET                                 ; 004bbca1

