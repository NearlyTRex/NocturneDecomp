; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLselectCard_FUN_100052c0(int card_index)
;
; Parameters:
; int              Stack[0x4]:4   card_index
;
; Referenced Globals:
;   int g_SelectedCardIndex = 0x0
;   HWND g_WindowHandle = 00000000
;   CExternalRendererBridge g_ExternalRendererBridge
;
; Called Functions:
;   dll_dx7.cpp_APIDLLinit_FUN_10001a80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100052c0
        ;   Label: dll_dx7.cpp_APIDLLselectCard_FUN_100052c0
    PUSH 0x102268b8                     ; 100052c4 | g_ExternalRendererBridge
    MOV ECX,dword ptr [0x10138fb8]      ; 100052c9 | g_WindowHandle
    MOV [0x10014210],EAX                ; 100052cf | g_SelectedCardIndex
    PUSH ECX                            ; 100052d4
    CALL dll_dx7.cpp_APIDLLinit_FUN_10001a80 ; 100052d5
        ;   XREF to: 10001a80 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_APIDLLinit_FUN_10001a80(HWND windowHandle, CExternalRendererBridge * interface) | Ordinal_19
    ADD ESP,0x8                         ; 100052da
    RET                                 ; 100052dd

