; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)
;
; Parameters:
; LPCSTR           Stack[0x4]:4   _LpText
; LPCSTR           Stack[0x8]:4   _LpCaption
; UINT             Stack[0xc]:4   _UType
;
; XREF[1]:
;   FUN_10008610 at 100087a4
;
; Referenced Globals:
;   TerminatedCString s_GetLastActivePopup_100126d8
;   TerminatedCString s_GetActiveWindow_100126ec
;   TerminatedCString s_MessageBoxA_100126fc
;   TerminatedCString s_user32_dll_10012708
;   undefined4 DAT_10017774
;   undefined4 DAT_10017778
;   undefined4 DAT_1001777c
;   void* PTR_GetProcAddress_102421a4 = 00242364
;   void* PTR_LoadLibraryA_10242214 = 0024266a
;
; Called Functions:
;   GetProcAddress
;   LoadLibraryA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000a950
        ;   Label: ___crtMessageBoxA
    PUSH ESI                            ; 1000a951
    PUSH EDI                            ; 1000a952
    XOR ESI,ESI                         ; 1000a953
    CMP dword ptr [0x10017774],ESI      ; 1000a955 | DAT_10017774
    JNZ 0x1000a99f                      ; 1000a95b
        ;   XREF to: 1000a99f (CONDITIONAL_JUMP)  ; LAB_1000a99f
    PUSH 0x10012708                     ; 1000a95d | = "user32.dll"
    CALL dword ptr [0x10242214]         ; 1000a962 | PTR_LoadLibraryA_10242214
    MOV EBX,EAX                         ; 1000a968
    TEST EBX,EBX                        ; 1000a96a
    JZ 0x1000a9dc                       ; 1000a96c
        ;   XREF to: 1000a9dc (CONDITIONAL_JUMP)  ; LAB_1000a9dc
    PUSH 0x100126fc                     ; 1000a96e | = "MessageBoxA"
    MOV EDI,dword ptr [0x102421a4]      ; 1000a973 | PTR_GetProcAddress_102421a4
    PUSH EBX                            ; 1000a979
    CALL EDI                            ; 1000a97a | FARPROC GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
    MOV [0x10017774],EAX                ; 1000a97c | DAT_10017774
    TEST EAX,EAX                        ; 1000a981
    JZ 0x1000a9dc                       ; 1000a983
        ;   XREF to: 1000a9dc (CONDITIONAL_JUMP)  ; LAB_1000a9dc
    PUSH 0x100126ec                     ; 1000a985 | = "GetActiveWindow"
    PUSH EBX                            ; 1000a98a
    CALL EDI                            ; 1000a98b | FARPROC GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
    PUSH 0x100126d8                     ; 1000a98d | = "GetLastActivePopup"
    MOV [0x10017778],EAX                ; 1000a992 | DAT_10017778
    PUSH EBX                            ; 1000a997
    CALL EDI                            ; 1000a998 | FARPROC GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
    MOV [0x1001777c],EAX                ; 1000a99a | DAT_1001777c
    MOV EAX,[0x10017778]                ; 1000a99f | DAT_10017778
        ;   Label: LAB_1000a99f
    TEST EAX,EAX                        ; 1000a9a4
    JZ 0x1000a9ac                       ; 1000a9a6
        ;   XREF to: 1000a9ac (CONDITIONAL_JUMP)  ; LAB_1000a9ac
    CALL EAX                            ; 1000a9a8
    MOV ESI,EAX                         ; 1000a9aa
    TEST ESI,ESI                        ; 1000a9ac
        ;   Label: LAB_1000a9ac
    JZ 0x1000a9c2                       ; 1000a9ae
        ;   XREF to: 1000a9c2 (CONDITIONAL_JUMP)  ; LAB_1000a9c2
    CMP dword ptr [0x1001777c],0x0      ; 1000a9b0 | DAT_1001777c
    JZ 0x1000a9c2                       ; 1000a9b7
        ;   XREF to: 1000a9c2 (CONDITIONAL_JUMP)  ; LAB_1000a9c2
    PUSH ESI                            ; 1000a9b9
    CALL dword ptr [0x1001777c]         ; 1000a9ba | DAT_1001777c
    MOV ESI,EAX                         ; 1000a9c0
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000a9c2
        ;   Label: LAB_1000a9c2
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000a9c6
    MOV EDX,dword ptr [ESP + 0x10]      ; 1000a9ca
    PUSH EAX                            ; 1000a9ce
    PUSH ECX                            ; 1000a9cf
    PUSH EDX                            ; 1000a9d0
    PUSH ESI                            ; 1000a9d1
    CALL dword ptr [0x10017774]         ; 1000a9d2 | DAT_10017774
    POP EDI                             ; 1000a9d8
    POP ESI                             ; 1000a9d9
    POP EBX                             ; 1000a9da
    RET                                 ; 1000a9db
    XOR EAX,EAX                         ; 1000a9dc
        ;   Label: LAB_1000a9dc
    POP EDI                             ; 1000a9de
    POP ESI                             ; 1000a9df
    POP EBX                             ; 1000a9e0
    RET                                 ; 1000a9e1

