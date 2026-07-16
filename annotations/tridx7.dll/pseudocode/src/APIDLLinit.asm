; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLinit(HWND windowHandle,CExternalRendererBridge *interface)
;
; Parameters:
; HWND             Stack[0x4]:4   windowHandle
; CExternalRendererBridge * Stack[0x8]:4   interface
;
; XREF[1]:
;   APIDLLselectCard at 100052d5
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_10000000
;   GUID g_IID_IDirectDraw4 = IDirectDraw4 9c59509a-39bd-11d1-8c4a-00c04fd930c5
;   IDirectDraw* g_DirectDraw = 00000000
;   IDirectDraw4* g_DirectDraw4 = 00000000
;   uint g_LocalVideoMem = 0x0
;   uint g_NonLocalVideoMem = 0x0
;   int g_SelectedCardIndex = 0x0
;   uint[16] g_AdapterDeviceId
;   uint[16] g_AdapterVendorId
;   HWND g_WindowHandle = 00000000
;   char[16][512] g_AdapterDriverName
;   int g_AdapterCount = 0x0
;   GUID*[16] g_AdapterGuids
;   undefined4 g_AdapterGuids[1]
;   CExternalRendererBridge g_ExternalRendererBridge
;   ... and 2 more
;
; Called Functions:
;   APIDLLkill
;   DirectDrawCreate
;   DirectDrawEnumerateExA
;   FUN_10001d70
;   FUN_10002370
;   FUN_10002ea0
;   FUN_10002f40
;
; *****************************************************************************

section .text

    SUB ESP,0x430                       ; 10001a80
        ;   Label: APIDLLinit
    PUSH EBX                            ; 10001a86
    PUSH ESI                            ; 10001a87
    PUSH EDI                            ; 10001a88
    PUSH EBP                            ; 10001a89
    CALL APIDLLkill                     ; 10001a8a
        ;   XREF to: 10002460 (UNCONDITIONAL_CALL)  ; void APIDLLkill() | Ordinal_20
    MOV dword ptr [0x1020de34],0x0      ; 10001a8f | g_AdapterCount
    PUSH 0x7                            ; 10001a99
    PUSH 0x0                            ; 10001a9b
    PUSH 0x100017b0                     ; 10001a9d
    CALL DirectDrawEnumerateExA         ; 10001aa2
        ;   XREF to: 1000542a (UNCONDITIONAL_CALL)  ; HRESULT DirectDrawEnumerateExA(DDENUMCALLBACKEXA * lpCallback, void * lpContext, DWORD dwFlags)
    MOV dword ptr [ESP + 0x10],0x0      ; 10001aa7
    CMP dword ptr [0x1020de34],0x0      ; 10001aaf | g_AdapterCount
    JLE 0x10001be2                      ; 10001ab6
        ;   XREF to: 10001be2 (CONDITIONAL_JUMP)  ; LAB_10001be2
    XOR EBP,EBP                         ; 10001abc
    XOR EBX,EBX                         ; 10001abe
    PUSH 0x0                            ; 10001ac0
        ;   Label: LAB_10001ac0
    MOV EAX,dword ptr [EBP + 0x10226870] ; 10001ac2 | g_AdapterGuids | g_AdapterGuids[1]
    PUSH 0x10014184                     ; 10001ac8 | g_DirectDraw
    PUSH EAX                            ; 10001acd
    CALL DirectDrawCreate               ; 10001ace
        ;   XREF to: 10005424 (UNCONDITIONAL_CALL)  ; HRESULT DirectDrawCreate(GUID * lpGUID, IDirectDraw * * lplpDD, IUnknown * pUnkOuter)
    TEST EAX,EAX                        ; 10001ad3
    JNZ 0x10001c31                      ; 10001ad5
        ;   XREF to: 10001c31 (CONDITIONAL_JUMP)  ; LAB_10001c31
    PUSH 0x10014188                     ; 10001adb | g_DirectDraw4
    MOV EAX,[0x10014184]                ; 10001ae0 | g_DirectDraw
    MOV ESI,dword ptr [EAX]             ; 10001ae5
    PUSH 0x10012098                     ; 10001ae7 | g_IID_IDirectDraw4
    PUSH EAX                            ; 10001aec
    CALL dword ptr [ESI]                ; 10001aed
    TEST EAX,EAX                        ; 10001aef
    JNZ 0x10001c3e                      ; 10001af1
        ;   XREF to: 10001c3e (CONDITIONAL_JUMP)  ; LAB_10001c3e
    LEA EDI,[ESP + 0x18]                ; 10001af7
    XOR EAX,EAX                         ; 10001afb
    MOV ECX,0x10a                       ; 10001afd
    PUSH EAX                            ; 10001b02
    STOSD.REP ES:EDI                    ; 10001b03
    LEA EAX,[ESP + 0x1c]                ; 10001b05
    MOV ECX,dword ptr [0x10014188]      ; 10001b09 | g_DirectDraw4
    PUSH EAX                            ; 10001b0f
    PUSH ECX                            ; 10001b10
    MOV EAX,dword ptr [ECX]             ; 10001b11
    CALL dword ptr [EAX + 0x6c]         ; 10001b13
    TEST EAX,EAX                        ; 10001b16
    JNZ 0x10001c4b                      ; 10001b18
        ;   XREF to: 10001c4b (CONDITIONAL_JUMP)  ; LAB_10001c4b
    LEA EDI,[ESP + 0x18]                ; 10001b1e
    MOV ECX,0xffffffff                  ; 10001b22
    SUB EAX,EAX                         ; 10001b27
    SCASB.REPNE ES:EDI                  ; 10001b29
    NOT ECX                             ; 10001b2b
    SUB EDI,ECX                         ; 10001b2d
    MOV EAX,ECX                         ; 10001b2f
    SHR ECX,0x2                         ; 10001b31
    MOV ESI,EDI                         ; 10001b34
    LEA EDI,[EBX + 0x101398d0]          ; 10001b36 | g_AdapterDriverName
    MOVSD.REP ES:EDI,ESI                ; 10001b3c | g_AdapterDriverName
    MOV ECX,EAX                         ; 10001b3e
    AND ECX,0x3                         ; 10001b40
    MOVSB.REP ES:EDI,ESI                ; 10001b43 | g_AdapterDriverName
    LEA EDI,[ESP + 0x218]               ; 10001b45
    MOV ECX,0xffffffff                  ; 10001b4c
    SUB EAX,EAX                         ; 10001b51
    SCASB.REPNE ES:EDI                  ; 10001b53
    NOT ECX                             ; 10001b55
    SUB EDI,ECX                         ; 10001b57
    MOV EDX,ECX                         ; 10001b59
    SHR ECX,0x2                         ; 10001b5b
    MOV ESI,EDI                         ; 10001b5e
    LEA EDI,[EBX + 0x10236910]          ; 10001b60 | g_AdapterDescription
    MOVSD.REP ES:EDI,ESI                ; 10001b66 | g_AdapterDescription
    MOV ECX,EDX                         ; 10001b68
    AND ECX,0x3                         ; 10001b6a
    MOVSB.REP ES:EDI,ESI                ; 10001b6d | g_AdapterDescription
    MOV EAX,dword ptr [ESP + 0x420]     ; 10001b6f
    MOV ECX,dword ptr [ESP + 0x424]     ; 10001b76
    MOV dword ptr [EBP + 0x10138ef0],EAX ; 10001b7d | g_AdapterVendorId
    MOV dword ptr [EBP + 0x101386b0],ECX ; 10001b83 | g_AdapterDeviceId
    CMP dword ptr [0x10014188],0x0      ; 10001b89 | g_DirectDraw4
    JZ 0x10001ba7                       ; 10001b90
        ;   XREF to: 10001ba7 (CONDITIONAL_JUMP)  ; LAB_10001ba7
    MOV EAX,[0x10014188]                ; 10001b92 | g_DirectDraw4
    PUSH EAX                            ; 10001b97
    MOV ESI,dword ptr [EAX]             ; 10001b98
    CALL dword ptr [ESI + 0x8]          ; 10001b9a
    MOV dword ptr [0x10014188],0x0      ; 10001b9d | g_DirectDraw4
    CMP dword ptr [0x10014184],0x0      ; 10001ba7 | g_DirectDraw
        ;   Label: LAB_10001ba7
    JZ 0x10001bc5                       ; 10001bae
        ;   XREF to: 10001bc5 (CONDITIONAL_JUMP)  ; LAB_10001bc5
    MOV EAX,[0x10014184]                ; 10001bb0 | g_DirectDraw
    PUSH EAX                            ; 10001bb5
    MOV ESI,dword ptr [EAX]             ; 10001bb6
    CALL dword ptr [ESI + 0x8]          ; 10001bb8
    MOV dword ptr [0x10014184],0x0      ; 10001bbb | g_DirectDraw
    ADD EBP,0x4                         ; 10001bc5
        ;   Label: LAB_10001bc5
    ADD EBX,0x200                       ; 10001bc8
    INC dword ptr [ESP + 0x10]          ; 10001bce
    MOV EAX,dword ptr [ESP + 0x10]      ; 10001bd2
    CMP EAX,dword ptr [0x1020de34]      ; 10001bd6 | g_AdapterCount
    JL 0x10001ac0                       ; 10001bdc
        ;   XREF to: 10001ac0 (CONDITIONAL_JUMP)  ; LAB_10001ac0
    MOV EAX,dword ptr [ESP + 0x444]     ; 10001be2
        ;   Label: LAB_10001be2
    MOV EDI,0x102268b8                  ; 10001be9 | g_ExternalRendererBridge
    MOV ESI,dword ptr [ESP + 0x448]     ; 10001bee
    MOV ECX,0x23                        ; 10001bf5
    PUSH 0x0                            ; 10001bfa
    MOV [0x10138fb8],EAX                ; 10001bfc | g_WindowHandle
    MOVSD.REP ES:EDI,ESI                ; 10001c01 | g_ExternalRendererBridge | g_ExternalRendererBridge.red_scale_factor
    PUSH 0x10014184                     ; 10001c03 | g_DirectDraw
    MOV ECX,dword ptr [0x10014210]      ; 10001c08 | g_SelectedCardIndex
    MOV EDX,dword ptr [ECX*0x4 + 0x10226870] ; 10001c0e | g_AdapterGuids
    PUSH EDX                            ; 10001c15
    CALL DirectDrawCreate               ; 10001c16
        ;   XREF to: 10005424 (UNCONDITIONAL_CALL)  ; HRESULT DirectDrawCreate(GUID * lpGUID, IDirectDraw * * lplpDD, IUnknown * pUnkOuter)
    TEST EAX,EAX                        ; 10001c1b
    JZ 0x10001c58                       ; 10001c1d
        ;   XREF to: 10001c58 (CONDITIONAL_JUMP)  ; LAB_10001c58
    CALL APIDLLkill                     ; 10001c1f
        ;   XREF to: 10002460 (UNCONDITIONAL_CALL)  ; void APIDLLkill() | Ordinal_20
    XOR EAX,EAX                         ; 10001c24
    POP EBP                             ; 10001c26
    POP EDI                             ; 10001c27
    POP ESI                             ; 10001c28
    POP EBX                             ; 10001c29
    ADD ESP,0x430                       ; 10001c2a
    RET                                 ; 10001c30
    XOR EAX,EAX                         ; 10001c31
        ;   Label: LAB_10001c31
    POP EBP                             ; 10001c33
    POP EDI                             ; 10001c34
    POP ESI                             ; 10001c35
    POP EBX                             ; 10001c36
    ADD ESP,0x430                       ; 10001c37
    RET                                 ; 10001c3d
    XOR EAX,EAX                         ; 10001c3e
        ;   Label: LAB_10001c3e
    POP EBP                             ; 10001c40
    POP EDI                             ; 10001c41
    POP ESI                             ; 10001c42
    POP EBX                             ; 10001c43
    ADD ESP,0x430                       ; 10001c44
    RET                                 ; 10001c4a
    XOR EAX,EAX                         ; 10001c4b
        ;   Label: LAB_10001c4b
    POP EBP                             ; 10001c4d
    POP EDI                             ; 10001c4e
    POP ESI                             ; 10001c4f
    POP EBX                             ; 10001c50
    ADD ESP,0x430                       ; 10001c51
    RET                                 ; 10001c57
    PUSH 0x10014188                     ; 10001c58 | g_DirectDraw4
        ;   Label: LAB_10001c58
    MOV EAX,[0x10014184]                ; 10001c5d | g_DirectDraw
    MOV EBX,dword ptr [EAX]             ; 10001c62
    PUSH 0x10012098                     ; 10001c64 | g_IID_IDirectDraw4
    PUSH EAX                            ; 10001c69
    CALL dword ptr [EBX]                ; 10001c6a
    PUSH EAX                            ; 10001c6c
    MOV ESI,EAX                         ; 10001c6d
    CALL FUN_10001d70                   ; 10001c6f
        ;   XREF to: 10001d70 (UNCONDITIONAL_CALL)  ; undefined FUN_10001d70()
    ADD ESP,0x4                         ; 10001c74
    TEST ESI,ESI                        ; 10001c77
    JZ 0x10001c8d                       ; 10001c79
        ;   XREF to: 10001c8d (CONDITIONAL_JUMP)  ; LAB_10001c8d
    CALL APIDLLkill                     ; 10001c7b
        ;   XREF to: 10002460 (UNCONDITIONAL_CALL)  ; void APIDLLkill() | Ordinal_20
    XOR EAX,EAX                         ; 10001c80
    POP EBP                             ; 10001c82
    POP EDI                             ; 10001c83
    POP ESI                             ; 10001c84
    POP EBX                             ; 10001c85
    ADD ESP,0x430                       ; 10001c86
    RET                                 ; 10001c8c
    LEA ECX,[ESP + 0x18]                ; 10001c8d
        ;   Label: LAB_10001c8d
    XOR EAX,EAX                         ; 10001c91
    LEA EDX,[ESP + 0x10]                ; 10001c93
    MOV dword ptr [ECX],EAX             ; 10001c97
    PUSH EDX                            ; 10001c99
    MOV dword ptr [ECX + 0x4],EAX       ; 10001c9a
    MOV dword ptr [ECX + 0x8],EAX       ; 10001c9d
    MOV EDX,dword ptr [0x10014188]      ; 10001ca0 | g_DirectDraw4
    MOV dword ptr [ECX + 0xc],EAX       ; 10001ca6
    LEA ECX,[ESP + 0x18]                ; 10001ca9
    LEA EAX,[ESP + 0x1c]                ; 10001cad
    PUSH ECX                            ; 10001cb1
    MOV dword ptr [ESP + 0x20],0x10000000 ; 10001cb2 | IMAGE_DOS_HEADER_10000000
    PUSH EAX                            ; 10001cba
    PUSH EDX                            ; 10001cbb
    MOV EAX,dword ptr [EDX]             ; 10001cbc
    CALL dword ptr [EAX + 0x5c]         ; 10001cbe
    TEST EAX,EAX                        ; 10001cc1
    JZ 0x10001cdc                       ; 10001cc3
        ;   XREF to: 10001cdc (CONDITIONAL_JUMP)  ; LAB_10001cdc
    CALL FUN_10002370                   ; 10001cc5
        ;   XREF to: 10002370 (UNCONDITIONAL_CALL)  ; undefined FUN_10002370()
    CALL APIDLLkill                     ; 10001cca
        ;   XREF to: 10002460 (UNCONDITIONAL_CALL)  ; void APIDLLkill() | Ordinal_20
    XOR EAX,EAX                         ; 10001ccf
    POP EBP                             ; 10001cd1
    POP EDI                             ; 10001cd2
    POP ESI                             ; 10001cd3
    POP EBX                             ; 10001cd4
    ADD ESP,0x430                       ; 10001cd5
    RET                                 ; 10001cdb
    MOV EAX,dword ptr [ESP + 0x14]      ; 10001cdc
        ;   Label: LAB_10001cdc
    LEA ECX,[ESP + 0x18]                ; 10001ce0
    MOV [0x10014208],EAX                ; 10001ce4 | g_LocalVideoMem
    XOR EAX,EAX                         ; 10001ce9
    LEA EDX,[ESP + 0x10]                ; 10001ceb
    MOV dword ptr [ECX],EAX             ; 10001cef
    PUSH EDX                            ; 10001cf1
    MOV dword ptr [ECX + 0x4],EAX       ; 10001cf2
    MOV dword ptr [ECX + 0x8],EAX       ; 10001cf5
    MOV EDX,dword ptr [0x10014188]      ; 10001cf8 | g_DirectDraw4
    MOV dword ptr [ECX + 0xc],EAX       ; 10001cfe
    LEA ECX,[ESP + 0x18]                ; 10001d01
    LEA EAX,[ESP + 0x1c]                ; 10001d05
    PUSH ECX                            ; 10001d09
    MOV dword ptr [ESP + 0x20],0x20000000 ; 10001d0a
    PUSH EAX                            ; 10001d12
    PUSH EDX                            ; 10001d13
    MOV EAX,dword ptr [EDX]             ; 10001d14
    CALL dword ptr [EAX + 0x5c]         ; 10001d16
    TEST EAX,EAX                        ; 10001d19
    JZ 0x10001d34                       ; 10001d1b
        ;   XREF to: 10001d34 (CONDITIONAL_JUMP)  ; LAB_10001d34
    CALL FUN_10002370                   ; 10001d1d
        ;   XREF to: 10002370 (UNCONDITIONAL_CALL)  ; undefined FUN_10002370()
    CALL APIDLLkill                     ; 10001d22
        ;   XREF to: 10002460 (UNCONDITIONAL_CALL)  ; void APIDLLkill() | Ordinal_20
    XOR EAX,EAX                         ; 10001d27
    POP EBP                             ; 10001d29
    POP EDI                             ; 10001d2a
    POP ESI                             ; 10001d2b
    POP EBX                             ; 10001d2c
    ADD ESP,0x430                       ; 10001d2d
    RET                                 ; 10001d33
    MOV EAX,dword ptr [ESP + 0x14]      ; 10001d34
        ;   Label: LAB_10001d34
    MOV [0x1001420c],EAX                ; 10001d38 | g_NonLocalVideoMem
    CALL FUN_10002ea0                   ; 10001d3d
        ;   XREF to: 10002ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_10002ea0()
    CALL FUN_10002f40                   ; 10001d42
        ;   XREF to: 10002f40 (UNCONDITIONAL_CALL)  ; undefined FUN_10002f40()
    TEST EAX,EAX                        ; 10001d47
    JNZ 0x10001d58                      ; 10001d49
        ;   XREF to: 10001d58 (CONDITIONAL_JUMP)  ; LAB_10001d58
    XOR EAX,EAX                         ; 10001d4b
    POP EBP                             ; 10001d4d
    POP EDI                             ; 10001d4e
    POP ESI                             ; 10001d4f
    POP EBX                             ; 10001d50
    ADD ESP,0x430                       ; 10001d51
    RET                                 ; 10001d57
    CALL FUN_10002370                   ; 10001d58
        ;   XREF to: 10002370 (UNCONDITIONAL_CALL)  ; undefined FUN_10002370()
        ;   Label: LAB_10001d58
    MOV EAX,0x1                         ; 10001d5d
    POP EBP                             ; 10001d62
    POP EDI                             ; 10001d63
    POP ESI                             ; 10001d64
    POP EBX                             ; 10001d65
    ADD ESP,0x430                       ; 10001d66
    RET                                 ; 10001d6c

