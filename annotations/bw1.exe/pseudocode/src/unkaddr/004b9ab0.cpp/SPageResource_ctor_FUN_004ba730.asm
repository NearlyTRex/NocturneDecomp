; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl unkaddr_004b9ab0_cpp_SPageResource_ctor_FUN_004ba730(SPageResource *this_ptr)
;
; Parameters:
; SPageResource *  Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40 at 004baa50
;   core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004baa10 at 004baa15
;   core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004bcb10 at 004bcb15
;   core_fldnotes.cpp_SPageResourceText_ctor_FUN_004ba850 at 004ba858
;   core_fldnotes.cpp_SPageResourceTwanaEntry_ctor_FUN_004bac90 at 004bac96
;
; Referenced Globals:
;   void* g_SPageResourceVTable = 004ba760
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ba730
        ;   Label: unkaddr_004b9ab0.cpp_SPageResource_ctor_FUN_004ba730
    MOV dword ptr [EAX + 0x10],0x0      ; 004ba734
    MOV dword ptr [EAX + 0xc],0x0       ; 004ba73b
    MOV dword ptr [EAX + 0x4],0x0       ; 004ba742
    MOV dword ptr [EAX + 0x14],0x600924 ; 004ba749 | g_SPageResourceVTable
    MOV EDX,dword ptr [EAX + 0xc]       ; 004ba750
    MOV dword ptr [EAX + 0x8],EDX       ; 004ba753
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ba756
    MOV dword ptr [EAX],EDX             ; 004ba759
    RET                                 ; 004ba75b

