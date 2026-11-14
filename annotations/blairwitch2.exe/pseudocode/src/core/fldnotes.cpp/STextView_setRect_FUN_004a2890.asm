; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004a2890(STextView *this_ptr,int left,int top,int right,int bottom)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
;
; XREF[5]:
;   core_flashlit.cpp_FUN_004a1d50 at 004a1d65
;   core_flashlit.cpp_FUN_004a1dd0 at 004a1df5
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004a5700 at 004a5756
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0 at 004a434f
;   core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004a5490 at 004a54f2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2890
        ;   Label: core_fldnotes.cpp_STextView_setRect_FUN_004a2890
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a2894
    MOV dword ptr [EAX],EDX             ; 004a2898
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a289a
    MOV dword ptr [EAX + 0x4],EDX       ; 004a289e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a28a1
    MOV dword ptr [EAX + 0x8],EDX       ; 004a28a5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a28a8
    MOV dword ptr [EAX + 0xc],EDX       ; 004a28ac
    RET                                 ; 004a28af

