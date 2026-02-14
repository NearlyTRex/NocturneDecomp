; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl wincore_windll_cpp_CExternalRenderer_setProcessingData_FUN_005b5d10(CExternalRenderer *this_ptr,char *other)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b5d10
        ;   Label: wincore_windll.cpp_CExternalRenderer_setProcessingData_FUN_005b5d10
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b5d14
    MOV dword ptr [EDX],EAX             ; 005b5d18
    RET                                 ; 005b5d1a

