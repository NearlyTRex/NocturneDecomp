; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl dll_dx7_cpp_readIniInt_FUN_10002b20(char *section,char *key,uint *value_inout)
;
; Parameters:
; char *           Stack[0x4]:4   section
; char *           Stack[0x8]:4   key
; uint *           Stack[0xc]:4   value_inout
;
; XREF[1]:
;   dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500 at 100025e1
;
; Referenced Globals:
;   TerminatedCString s_system_render_ini_10014150
;   void* PTR_GetPrivateProfileIntA_10242208 = 002422a0
;
; Called Functions:
;   GetPrivateProfileIntA
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 10002b20
        ;   Label: dll_dx7.cpp_readIniInt_FUN_10002b20
    PUSH ESI                            ; 10002b24
    MOV ESI,dword ptr [ESP + 0x10]      ; 10002b25
    PUSH 0x10014150                     ; 10002b29 | = ".\\system\\render.ini"
    MOV EDX,dword ptr [ESP + 0xc]       ; 10002b2e
    MOV EAX,dword ptr [ESI]             ; 10002b32
    PUSH EAX                            ; 10002b34
    PUSH ECX                            ; 10002b35
    PUSH EDX                            ; 10002b36
    CALL dword ptr [0x10242208]         ; 10002b37 | PTR_GetPrivateProfileIntA_10242208
    MOV dword ptr [ESI],EAX             ; 10002b3d
    POP ESI                             ; 10002b3f
    RET                                 ; 10002b40

