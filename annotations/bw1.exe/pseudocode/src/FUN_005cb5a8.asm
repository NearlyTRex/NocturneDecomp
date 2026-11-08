; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005cb5a8(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_005c5348 at 005c537b
;   FUN_005cea10 at 005cea87
;
; Referenced Globals:
;   void* PTR_SetUnhandledExceptionFilter_005d0654 = 001d1212
;   void* PTR_FUN_006265fc = 005c50cc
;
; Called Functions:
;   FUN_005c50cc
;   SetUnhandledExceptionFilter
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb5a8
        ;   Label: FUN_005cb5a8
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cb5a9
    CALL dword ptr [0x006265fc]         ; 005cb5ad | PTR_FUN_006265fc
    MOV dword ptr [EAX + 0x54],EBX      ; 005cb5b3
    XOR EAX,EAX                         ; 005cb5b6
    MOV EAX,dword ptr FS:[EAX]          ; 005cb5b8
    MOV EBX,EAX                         ; 005cb5bb
    CALL dword ptr [0x006265fc]         ; 005cb5bd | PTR_FUN_006265fc
    MOV EAX,dword ptr [EAX + 0x54]      ; 005cb5c3
    MOV dword ptr [EAX],EBX             ; 005cb5c6
    CALL dword ptr [0x006265fc]         ; 005cb5c8 | PTR_FUN_006265fc
    MOV EAX,dword ptr [EAX + 0x54]      ; 005cb5ce
    MOV dword ptr [EAX + 0x4],0x5cb3d8  ; 005cb5d1 | LAB_005cb3d8
    CALL dword ptr [0x006265fc]         ; 005cb5d8 | PTR_FUN_006265fc
    MOV EAX,dword ptr [EAX + 0x54]      ; 005cb5de
    XOR EDX,EDX                         ; 005cb5e1
    MOV dword ptr FS:[EDX],EAX          ; 005cb5e3
    PUSH 0x5cb1a4                       ; 005cb5e6 | LAB_005cb1a4
    CALL dword ptr CS:[0x5d0654]        ; 005cb5eb | PTR_SetUnhandledExceptionFilter_005d0654
    POP EBX                             ; 005cb5f2
    RET                                 ; 005cb5f3

