; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(STextView *this_ptr,int left,int top,int right,int bottom)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
;
; XREF[5]:
;   core_flashlit.cpp_FUN_004a8270 at 004a8286
;   core_flashlit.cpp_FUN_004a82f0 at 004a8313
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004abe00 at 004abe5f
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810 at 004aa9af
;   core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004abb90 at 004abbf2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8eb0
        ;   Label: core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a8eb4
    MOV dword ptr [EAX],EDX             ; 004a8eb8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a8eba
    MOV dword ptr [EAX + 0x4],EDX       ; 004a8ebe
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a8ec1
    MOV dword ptr [EAX + 0x8],EDX       ; 004a8ec5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a8ec8
    MOV dword ptr [EAX + 0xc],EDX       ; 004a8ecc
    RET                                 ; 004a8ecf

