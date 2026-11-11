; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl support_trstream_cpp_COutStreamMemory_ctorOpen_FUN_00574ac0(COutStreamMemory *this_ptr,int param_2,int param_3)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00441c80 at 00441cba
;   support_codec.cpp_FUN_004408e0 at 004408fb
;   support_codec.cpp_FUN_00440b60 at 00440b78
;
; Referenced Globals:
;   undefined1* g_COutStreamMemoryVTable = 00574b50
;
; Called Functions:
;   support_trstream.cpp_COutStreamMemory_open_FUN_00574d50
;   support_trstream.cpp_FUN_005744a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574ac0
        ;   Label: support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_00574ac0
    PUSH ESI                            ; 00574ac1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00574ac2
    PUSH EDX                            ; 00574ac6
    CALL support_trstream.cpp_FUN_005744a0 ; 00574ac7
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005744a0()
    MOV dword ptr [EAX],0x5e5b54        ; 00574acc | g_COutStreamMemoryVTable
    ADD ESP,0x4                         ; 00574ad2
    MOV dword ptr [EAX + 0x4],0x0       ; 00574ad5
    MOV ECX,dword ptr [ESP + 0x14]      ; 00574adc
    MOV dword ptr [EAX + 0x8],0x0       ; 00574ae0
    PUSH ECX                            ; 00574ae7
    MOV ESI,dword ptr [ESP + 0x14]      ; 00574ae8
    MOV dword ptr [EAX + 0xc],0x0       ; 00574aec
    PUSH ESI                            ; 00574af3
    MOV dword ptr [EAX + 0x10],0x0      ; 00574af4
    PUSH EAX                            ; 00574afb
    MOV EBX,EAX                         ; 00574afc
    MOV dword ptr [EAX + 0x14],0x1      ; 00574afe
    CALL support_trstream.cpp_COutStreamMemory_open_FUN_00574d50 ; 00574b05
        ;   XREF to: 00574d50 (UNCONDITIONAL_CALL)  ; void support_trstream.cpp_COutStreamMemory_open_FUN_00574d50(COutStreamMemory * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 00574b0a
    MOV EAX,EBX                         ; 00574b0d
    POP ESI                             ; 00574b0f
    POP EBX                             ; 00574b10
    RET                                 ; 00574b11

