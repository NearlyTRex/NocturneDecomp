; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004bb270(STextView *this_ptr,int param_2,int param_3,int param_4,int param_5)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
; undefined4       Stack[0x14]:4   param_5
;
; XREF[5]:
;   core_flashlit.cpp_FUN_004ba62e at 004ba646
;   core_flashlit.cpp_FUN_004ba6ae at 004ba6d3
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 at 004bcd3f
;   core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004bde80 at 004bdee2
;   core_fldnotes.cpp_FUN_004be0f0 at 004be146
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bb270
        ;   Label: core_fldnotes.cpp_STextView_setRect_FUN_004bb270
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bb274
    MOV dword ptr [EAX],EDX             ; 004bb278
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bb27a
    MOV dword ptr [EAX + 0x4],EDX       ; 004bb27e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004bb281
    MOV dword ptr [EAX + 0x8],EDX       ; 004bb285
    MOV EDX,dword ptr [ESP + 0x14]      ; 004bb288
    MOV dword ptr [EAX + 0xc],EDX       ; 004bb28c
    RET                                 ; 004bb28f

