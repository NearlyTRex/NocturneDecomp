; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLrestoreVideoMode(void)
;
;
; Referenced Globals:
;   undefined4 DAT_10014184
;   undefined4 DAT_10014188
;   undefined4 DAT_100141f8
;   TerminatedCString s_Cannot_unlock_back_buffe_10016a14
;   undefined4 DAT_10138fb8
;   void* PTR_ShowCursor_10242294 = 002422f0
;
; Called Functions:
;   FUN_10002340
;   FUN_10002370
;   FUN_10002c50
;   ShowCursor
;
; *****************************************************************************

section .text

    CMP dword ptr [0x100141f8],0x0      ; 10002be0 | DAT_100141f8
        ;   Label: APIDLLrestoreVideoMode
    PUSH ESI                            ; 10002be7
    JZ 0x10002c00                       ; 10002be8
        ;   XREF to: 10002c00 (CONDITIONAL_JUMP)  ; LAB_10002c00
    CALL FUN_10002c50                   ; 10002bea
        ;   XREF to: 10002c50 (UNCONDITIONAL_CALL)  ; undefined FUN_10002c50()
    TEST EAX,EAX                        ; 10002bef
    JNZ 0x10002c00                      ; 10002bf1
        ;   XREF to: 10002c00 (CONDITIONAL_JUMP)  ; LAB_10002c00
    PUSH 0x10016a14                     ; 10002bf3 | = "Cannot unlock back buffer"
    CALL FUN_10002340                   ; 10002bf8
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; undefined FUN_10002340()
    ADD ESP,0x4                         ; 10002bfd
    MOV EAX,[0x10014184]                ; 10002c00 | DAT_10014184
        ;   Label: LAB_10002c00
    PUSH EAX                            ; 10002c05
    MOV ESI,dword ptr [EAX]             ; 10002c06
    CALL dword ptr [ESI + 0x28]         ; 10002c08
    MOV ECX,dword ptr [0x10014188]      ; 10002c0b | DAT_10014188
    PUSH ECX                            ; 10002c11
    MOV EAX,dword ptr [ECX]             ; 10002c12
    CALL dword ptr [EAX + 0x4c]         ; 10002c14
    PUSH 0x8                            ; 10002c17
    MOV ECX,dword ptr [0x10138fb8]      ; 10002c19 | DAT_10138fb8
    PUSH ECX                            ; 10002c1f
    MOV EDX,dword ptr [0x10014188]      ; 10002c20 | DAT_10014188
    PUSH EDX                            ; 10002c26
    MOV EAX,dword ptr [EDX]             ; 10002c27
    CALL dword ptr [EAX + 0x50]         ; 10002c29
    CALL FUN_10002370                   ; 10002c2c
        ;   XREF to: 10002370 (UNCONDITIONAL_CALL)  ; undefined FUN_10002370()
    MOV ESI,dword ptr [0x10242294]      ; 10002c31 | PTR_ShowCursor_10242294
    PUSH 0x1                            ; 10002c37
        ;   Label: LAB_10002c37
    CALL ESI                            ; 10002c39 | int ShowCursor(BOOL bShow)
    CMP EAX,0x1                         ; 10002c3b
    JL 0x10002c37                       ; 10002c3e
        ;   XREF to: 10002c37 (CONDITIONAL_JUMP)  ; LAB_10002c37
    MOV EAX,0x1                         ; 10002c40
    POP ESI                             ; 10002c45
    RET                                 ; 10002c46

