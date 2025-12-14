; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_io.c_chdir_FUN_006012a0(char * path)
;
; Parameters:
; char *           Stack[0x4]:4   path
;
; XREF[2]:
;   crt_io.c_stat_FUN_00607e64 at 00607f63
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 at 0049f9a2
;
; Referenced Globals:
;   SetCurrentDirectoryA* SetCurrentDirectoryA = 00212138
;
; Called Functions:
;   SetCurrentDirectoryA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 006012a0
        ;   Label: crt_io.c_chdir_FUN_006012a0
    PUSH EDX                            ; 006012a4
    CALL dword ptr CS:[0x611614]        ; 006012a5 | SetCurrentDirectoryA
    TEST EAX,EAX                        ; 006012ac
    JZ 0x006083fc                       ; 006012ae
        ;   XREF to: 006083fc (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 006012b4
    RET                                 ; 006012b6

