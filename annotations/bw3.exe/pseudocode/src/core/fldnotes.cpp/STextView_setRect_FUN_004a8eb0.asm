; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(STextView *this_ptr,int param_2,int param_3,int param_4,int param_5)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
; undefined4       Stack[0x14]:4   param_5
;
; XREF[5]:
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810 at 004aa9af
;   core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004abb90 at 004abbf2
;   core_fldnotes.cpp_FUN_004abe00 at 004abe5f
;   unkaddr_004a76f0.cpp_FUN_004a826e at 004a8286
;   unkaddr_004a76f0.cpp_FUN_004a82ee at 004a8313
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

