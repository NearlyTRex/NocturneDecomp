; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_drawPage_FUN_004a98b0(STextView *this_ptr,int page)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   page
;
; XREF[1]:
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004abe00 at 004abf8d
;
; Called Functions:
;   core_fldnotes.cpp_STextPage_draw_FUN_004a8da0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004a98b0
        ;   Label: core_fldnotes.cpp_STextView_drawPage_FUN_004a98b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a98b4
    TEST EDX,EDX                        ; 004a98b8
    JL 0x004a98c1                       ; 004a98ba
        ;   XREF to: 004a98c1 (CONDITIONAL_JUMP)  ; LAB_004a98c1
    CMP EDX,dword ptr [ECX + 0x38]      ; 004a98bc
    JL 0x004a98c2                       ; 004a98bf
        ;   XREF to: 004a98c2 (CONDITIONAL_JUMP)  ; LAB_004a98c2
    RET                                 ; 004a98c1
        ;   Label: LAB_004a98c1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a98c2
        ;   Label: LAB_004a98c2
    ADD EAX,EDX                         ; 004a98c9
    SHL EAX,0x4                         ; 004a98cb
    ADD EAX,EDX                         ; 004a98ce
    SHL EAX,0x2                         ; 004a98d0
    MOV EDX,dword ptr [ECX + 0x3c]      ; 004a98d3
    ADD EAX,EDX                         ; 004a98d6
    PUSH EAX                            ; 004a98d8
    CALL core_fldnotes.cpp_STextPage_draw_FUN_004a8da0 ; 004a98d9
        ;   XREF to: 004a8da0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextPage_draw_FUN_004a8da0(STextPage * this_ptr)
    ADD ESP,0x4                         ; 004a98de
    RET                                 ; 004a98e1

