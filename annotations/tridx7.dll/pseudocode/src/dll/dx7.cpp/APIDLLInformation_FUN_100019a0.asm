; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl dll_dx7_cpp_APIDLLInformation_FUN_100019a0(HMODULE dll_handle,void *info_buffer)
;
; Parameters:
; undefined        Stack[0x0]:1   local_res0
; HMODULE          Stack[0x4]:4   dll_handle
; void *           Stack[0x8]:4   info_buffer
;
; Referenced Globals:
;   TerminatedCString s_Terminal_Reality_Inc_10014238
;   undefined4 s_Terminal_Reality_Inc_10014238+1
;   void* PTR_LoadStringA_1024228c = 002422d4
;   PascalUnicode pu_DirectX6_(Some_hardware)_10243062
;
; Called Functions:
;   crt_startup.c__chkstk_FUN_10005600
;
; *****************************************************************************

section .text

    MOV EAX,0x1ec8                      ; 100019a0
        ;   Label: dll_dx7.cpp_APIDLLInformation_FUN_100019a0
    CALL crt_startup.c__chkstk_FUN_10005600 ; 100019a5
        ;   XREF to: 10005600 (UNCONDITIONAL_CALL)  ; void crt_startup.c__chkstk_FUN_10005600()
    PUSH ESI                            ; 100019aa
    XOR EAX,EAX                         ; 100019ab
    PUSH EDI                            ; 100019ad
    MOV ECX,0x772                       ; 100019ae
    LEA EDI,[ESP + 0x108]               ; 100019b3
    STOSD.REP ES:EDI                    ; 100019ba
    MOV EDI,0x10014238                  ; 100019bc | = "Terminal Reality Inc."
    MOV ECX,0xffffffff                  ; 100019c1
    SUB EAX,EAX                         ; 100019c6
    SCASB.REPNE ES:EDI                  ; 100019c8 | = "Terminal Reality Inc." | s_Terminal_Reality_Inc_10014238+1
    NOT ECX                             ; 100019ca
    SUB EDI,ECX                         ; 100019cc
    MOV EAX,ECX                         ; 100019ce
    SHR ECX,0x2                         ; 100019d0
    MOV ESI,EDI                         ; 100019d3
    LEA EDI,[ESP + 0x208]               ; 100019d5
    MOVSD.REP ES:EDI,ESI                ; 100019dc | = "Terminal Reality Inc."
    MOV ECX,EAX                         ; 100019de
    AND ECX,0x3                         ; 100019e0
    MOVSB.REP ES:EDI,ESI                ; 100019e3 | = "Terminal Reality Inc."
    MOV word ptr [ESP + 0x30c],0xffff   ; 100019e5
    MOV EAX,0x100                       ; 100019ef
    LEA ECX,[ESP + 0x8]                 ; 100019f4
    MOV word ptr [ESP + 0x308],AX       ; 100019f8
    PUSH EAX                            ; 10001a00
    MOV word ptr [ESP + 0x30e],AX       ; 10001a01
    PUSH ECX                            ; 10001a09
    MOV EDX,dword ptr [ESP + 0x1edc]    ; 10001a0a
    PUSH 0x1                            ; 10001a11
    MOV dword ptr [ESP + 0x320],0x10    ; 10001a13
    MOV dword ptr [ESP + 0x31c],0x3     ; 10001a1e
    PUSH EDX                            ; 10001a29
    CALL dword ptr [0x1024228c]         ; 10001a2a | PTR_LoadStringA_1024228c | = "DirectX6 (Some hardware)"
    LEA EDI,[ESP + 0x8]                 ; 10001a30
    MOV ECX,0xffffffff                  ; 10001a34
    SUB EAX,EAX                         ; 10001a39
    SCASB.REPNE ES:EDI                  ; 10001a3b
    NOT ECX                             ; 10001a3d
    SUB EDI,ECX                         ; 10001a3f
    MOV EDX,ECX                         ; 10001a41
    SHR ECX,0x2                         ; 10001a43
    MOV ESI,EDI                         ; 10001a46
    LEA EDI,[ESP + 0x108]               ; 10001a48
    MOVSD.REP ES:EDI,ESI                ; 10001a4f
    MOV ECX,EDX                         ; 10001a51
    AND ECX,0x3                         ; 10001a53
    MOVSB.REP ES:EDI,ESI                ; 10001a56
    LEA ESI,[ESP + 0x108]               ; 10001a58
    MOV EDI,dword ptr [ESP + 0x1ed8]    ; 10001a5f
    MOV ECX,0x772                       ; 10001a66
    MOVSD.REP ES:EDI,ESI                ; 10001a6b
    POP EDI                             ; 10001a6d
    POP ESI                             ; 10001a6e
    ADD ESP,0x1ec8                      ; 10001a6f
    RET                                 ; 10001a75

