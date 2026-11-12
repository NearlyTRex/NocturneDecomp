; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SPageResource_ctor_FUN_004a1e60(SPageResource *this_ptr)
;
; Parameters:
; SPageResource *  Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004a2170 at 004a2180
;   core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a2140 at 004a2145
;   core_fldnotes.cpp_SPageResourceMap_ctor_FUN_004a4120 at 004a4125
;   core_fldnotes.cpp_SPageResourceText_ctor_FUN_004a1f80 at 004a1f88
;   core_fldnotes.cpp_SPageResourceTwanaEntry_ctor_FUN_004a23c0 at 004a23c6
;
; Referenced Globals:
;   void* g_SPageResourceVTable = 004a1e90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a1e60
        ;   Label: core_fldnotes.cpp_SPageResource_ctor_FUN_004a1e60
    MOV dword ptr [EAX + 0x10],0x0      ; 004a1e64
    MOV dword ptr [EAX + 0xc],0x0       ; 004a1e6b
    MOV dword ptr [EAX + 0x4],0x0       ; 004a1e72
    MOV dword ptr [EAX + 0x14],0x5f6ec4 ; 004a1e79 | g_SPageResourceVTable
    MOV EDX,dword ptr [EAX + 0xc]       ; 004a1e80
    MOV dword ptr [EAX + 0x8],EDX       ; 004a1e83
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a1e86
    MOV dword ptr [EAX],EDX             ; 004a1e89
    RET                                 ; 004a1e8b

