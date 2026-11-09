; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * support_trstream_cpp_FUN_0057d520(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   support_codec.cpp_FUN_00433ff0 at 00434008
;   support_codec.cpp_FUN_00434070 at 00434088
;
; Referenced Globals:
;   undefined1* g_CInStreamMemoryVTable = 0057d5a0
;
; Called Functions:
;   support_trstream.cpp_FUN_0057d800
;   unkaddr_0057b9a0.cpp_FUN_0057b9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d520
        ;   Label: support_trstream.cpp_FUN_0057d520
    PUSH ESI                            ; 0057d521
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057d522
    PUSH EDX                            ; 0057d526
    CALL unkaddr_0057b9a0.cpp_FUN_0057b9c0 ; 0057d527
        ;   XREF to: 0057b9c0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057b9c0()
    ADD ESP,0x4                         ; 0057d52c
    MOV dword ptr [EAX],0x5fd424        ; 0057d52f | g_CInStreamMemoryVTable
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057d535
    MOV dword ptr [EAX + 0x4],0x0       ; 0057d539
    PUSH ECX                            ; 0057d540
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057d541
    MOV dword ptr [EAX + 0x8],0x0       ; 0057d545
    PUSH ESI                            ; 0057d54c
    MOV dword ptr [EAX + 0xc],0x0       ; 0057d54d
    PUSH EAX                            ; 0057d554
    MOV EBX,EAX                         ; 0057d555
    MOV dword ptr [EAX + 0x10],0x0      ; 0057d557
    CALL support_trstream.cpp_FUN_0057d800 ; 0057d55e
        ;   XREF to: 0057d800 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d800()
    ADD ESP,0xc                         ; 0057d563
    MOV EAX,EBX                         ; 0057d566
    POP ESI                             ; 0057d568
    POP EBX                             ; 0057d569
    RET                                 ; 0057d56a

