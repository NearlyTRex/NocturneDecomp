; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_switchRenderer_FUN_005b8140(char *new_dll_name,int renderer_handle)
;
; Parameters:
; char *           Stack[0x4]:4   new_dll_name
; int              Stack[0x8]:4   renderer_handle
;
; XREF[1]:
;   wincore_windll.cpp_CExternalRenderer_switchRenderer_FUN_005b8117 at 005b812f
;
; Referenced Globals:
;   TerminatedCString g_RendererDllName
;   undefined4 DAT_00684011
;   undefined4 s_id3d_dll_00684012
;   undefined4 s_d3d.dll_00684013
;   int g_RendererHandle
;   HWND g_StoredWindowHandle
;
; Called Functions:
;   wincore_windll.cpp_kill_FUN_005b71e0
;   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b8140
        ;   Label: wincore_windll.cpp_switchRenderer_FUN_005b8140
    PUSH EDI                            ; 005b8141
    CALL wincore_windll.cpp_kill_FUN_005b71e0 ; 005b8142
        ;   XREF to: 005b71e0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_kill_FUN_005b71e0()
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b8147
    MOV ESI,dword ptr [ESP + 0xc]       ; 005b814b
    MOV EDI,0x684010                    ; 005b814f | = "trid3d.dll"
    MOV [0x03f6b87c],EAX                ; 005b8154 | g_RendererHandle
    PUSH EDI                            ; 005b8159 | = "trid3d.dll"
    MOV AL,byte ptr [ESI]               ; 005b815a
        ;   Label: LAB_005b815a
    MOV byte ptr [EDI],AL               ; 005b815c | = "trid3d.dll" | s_id3d_dll_00684012
    CMP AL,0x0                          ; 005b815e
    JZ 0x005b8172                       ; 005b8160
        ;   XREF to: 005b8172 (CONDITIONAL_JUMP)  ; LAB_005b8172
    MOV AL,byte ptr [ESI + 0x1]         ; 005b8162
    ADD ESI,0x2                         ; 005b8165
    MOV byte ptr [EDI + 0x1],AL         ; 005b8168 | DAT_00684011 | s_d3d.dll_00684013
    ADD EDI,0x2                         ; 005b816b
    CMP AL,0x0                          ; 005b816e
    JNZ 0x005b815a                      ; 005b8170
        ;   XREF to: 005b815a (CONDITIONAL_JUMP)  ; LAB_005b815a
    POP EDI                             ; 005b8172
        ;   Label: LAB_005b8172
    MOV EDX,dword ptr [0x03f6b98c]      ; 005b8173 | g_StoredWindowHandle
    PUSH EDX                            ; 005b8179
    CALL wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 ; 005b817a
        ;   XREF to: 005b6750 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle)
    ADD ESP,0x4                         ; 005b817f
    POP EDI                             ; 005b8182
    POP ESI                             ; 005b8183
    RET                                 ; 005b8184

