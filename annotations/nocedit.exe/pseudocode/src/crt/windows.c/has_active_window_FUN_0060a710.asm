; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL __cdecl crt_windows_c_has_active_window_FUN_0060a710(void)
;
;
; XREF[1]:
;   crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4 at 0060a7ba
;
; Referenced Globals:
;   GET_PROC_ADDRESS_FUNC* g_GetProcAddressFunc = 00211f8e
;   LOAD_LIBRARY_A_FUNC* g_LoadLibraryAFunc = 0021205c
;   TerminatedCString s_USER32_DLL_00659110
;   TerminatedCString s_GetActiveWindow_0065911c
;
; Called Functions:
;   GetProcAddress
;   LoadLibraryA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a710
        ;   Label: crt_windows.c_has_active_window_FUN_0060a710
    PUSH 0x659110                       ; 0060a711 | = "USER32.DLL"
    CALL dword ptr CS:[0x6115e8]        ; 0060a716 | g_LoadLibraryAFunc
    XOR EBX,EBX                         ; 0060a71d
    TEST EAX,EAX                        ; 0060a71f
    JZ 0x0060a73a                       ; 0060a721
        ;   XREF to: 0060a73a (CONDITIONAL_JUMP)  ; LAB_0060a73a
    PUSH 0x65911c                       ; 0060a723 | = "GetActiveWindow"
    PUSH EAX                            ; 0060a728
    CALL dword ptr CS:[0x6115bc]        ; 0060a729 | g_GetProcAddressFunc
    MOV EDX,EAX                         ; 0060a730
    TEST EAX,EAX                        ; 0060a732
    JZ 0x0060a73a                       ; 0060a734
        ;   XREF to: 0060a73a (CONDITIONAL_JUMP)  ; LAB_0060a73a
    CALL EDX                            ; 0060a736
    MOV EBX,EAX                         ; 0060a738
    TEST EBX,EBX                        ; 0060a73a
        ;   Label: LAB_0060a73a
    SETNZ AL                            ; 0060a73c
    AND EAX,0xff                        ; 0060a73f
    POP EBX                             ; 0060a744
    RET                                 ; 0060a745

