; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_CExternalRenderer_switchRenderer_FUN_005b8120(CExternalRenderer *this_ptr,int renderer_handle)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   renderer_handle
;
; Called Functions:
;   wincore_windll.cpp_switchRenderer_FUN_005b8140
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005b8120
        ;   Label: wincore_windll.cpp_CExternalRenderer_switchRenderer_FUN_005b8120
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b8124
    PUSH EDX                            ; 005b8128
    ADD EAX,0x1dc8                      ; 005b8129
    PUSH EAX                            ; 005b812e
    CALL wincore_windll.cpp_switchRenderer_FUN_005b8140 ; 005b812f
        ;   XREF to: 005b8140 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_switchRenderer_FUN_005b8140(char * new_dll_name, int renderer_handle)
    ADD ESP,0x8                         ; 005b8134
    RET                                 ; 005b8137

