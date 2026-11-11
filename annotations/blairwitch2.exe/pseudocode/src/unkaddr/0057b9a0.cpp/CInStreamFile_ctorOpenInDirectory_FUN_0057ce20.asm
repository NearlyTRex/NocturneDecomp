; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl unkaddr_0057b9a0_cpp_CInStreamFile_ctorOpenInDirectory_FUN_0057ce20(CInStreamFile *this_ptr,undefined4 param_2,undefined4 param_3)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; Called Functions:
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390
;   unkaddr_0057b9a0.cpp_FUN_0057b9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ce20
        ;   Label: unkaddr_0057b9a0.cpp_CInStreamFile_ctorOpenInDirectory_FUN_0057ce20
    PUSH ESI                            ; 0057ce21
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057ce22
    PUSH EDX                            ; 0057ce26
    CALL unkaddr_0057b9a0.cpp_FUN_0057b9c0 ; 0057ce27
        ;   XREF to: 0057b9c0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057b9c0()
    MOV dword ptr [EAX],0x5fd3e4        ; 0057ce2c
    MOV dword ptr [EAX + 0x4],0x0       ; 0057ce32
    MOV dword ptr [EAX + 0x8],0x0       ; 0057ce39
    MOV dword ptr [EAX + 0xc],0x0       ; 0057ce40
    MOV dword ptr [EAX + 0x10],0x0      ; 0057ce47
    ADD ESP,0x4                         ; 0057ce4e
    MOV dword ptr [EAX + 0x14],0x0      ; 0057ce51
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057ce58
    MOV dword ptr [EAX + 0x18],0x0      ; 0057ce5c
    PUSH ECX                            ; 0057ce63
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057ce64
    MOV dword ptr [EAX + 0x1c],0x0      ; 0057ce68
    PUSH ESI                            ; 0057ce6f
    MOV dword ptr [EAX + 0x20],0x0      ; 0057ce70
    PUSH EAX                            ; 0057ce77
    MOV EBX,EAX                         ; 0057ce78
    MOV dword ptr [EAX + 0x24],0x0      ; 0057ce7a
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 0057ce81
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 0057ce86
    MOV EAX,EBX                         ; 0057ce89
    POP ESI                             ; 0057ce8b
    POP EBX                             ; 0057ce8c
    RET                                 ; 0057ce8d

