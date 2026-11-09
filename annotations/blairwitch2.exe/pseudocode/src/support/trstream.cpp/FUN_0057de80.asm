; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * support_trstream_cpp_FUN_0057de80(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   support_codec.cpp_FUN_00433f60 at 00433f7b
;   support_codec.cpp_FUN_004341e0 at 004341f8
;   support_codec.cpp_FUN_00435300 at 0043533a
;
; Referenced Globals:
;   undefined1* g_COutStreamMemoryVTable = 0057df10
;
; Called Functions:
;   support_trstream.cpp_FUN_0057d860
;   support_trstream.cpp_FUN_0057e110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057de80
        ;   Label: support_trstream.cpp_FUN_0057de80
    PUSH ESI                            ; 0057de81
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057de82
    PUSH EDX                            ; 0057de86
    CALL support_trstream.cpp_FUN_0057d860 ; 0057de87
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d860()
    MOV dword ptr [EAX],0x5fd4b4        ; 0057de8c | g_COutStreamMemoryVTable
    ADD ESP,0x4                         ; 0057de92
    MOV dword ptr [EAX + 0x4],0x0       ; 0057de95
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057de9c
    MOV dword ptr [EAX + 0x8],0x0       ; 0057dea0
    PUSH ECX                            ; 0057dea7
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057dea8
    MOV dword ptr [EAX + 0xc],0x0       ; 0057deac
    PUSH ESI                            ; 0057deb3
    MOV dword ptr [EAX + 0x10],0x0      ; 0057deb4
    PUSH EAX                            ; 0057debb
    MOV EBX,EAX                         ; 0057debc
    MOV dword ptr [EAX + 0x14],0x1      ; 0057debe
    CALL support_trstream.cpp_FUN_0057e110 ; 0057dec5
        ;   XREF to: 0057e110 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057e110()
    ADD ESP,0xc                         ; 0057deca
    MOV EAX,EBX                         ; 0057decd
    POP ESI                             ; 0057decf
    POP EBX                             ; 0057ded0
    RET                                 ; 0057ded1

