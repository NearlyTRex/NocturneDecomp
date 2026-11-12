; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_005a1160(CInStreamMemory *this_ptr,int param_2,int param_3)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; XREF[2]:
;   support_codec.cpp_CCodec_processBuffer_FUN_00442d90 at 00442da8
;   support_codec.cpp_FUN_00442d10 at 00442d28
;
; Referenced Globals:
;   undefined1* g_CInStreamMemoryVTable = 005a11e0
;
; Called Functions:
;   support_trstream.cpp_CInStreamMemory_open_FUN_005a1450
;   support_trstream.cpp_FUN_0059f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1160
        ;   Label: support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_005a1160
    PUSH ESI                            ; 005a1161
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a1162
    PUSH EDX                            ; 005a1166
    CALL support_trstream.cpp_FUN_0059f540 ; 005a1167
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f540()
    ADD ESP,0x4                         ; 005a116c
    MOV dword ptr [EAX],0x6073c4        ; 005a116f | g_CInStreamMemoryVTable
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a1175
    MOV dword ptr [EAX + 0x4],0x0       ; 005a1179
    PUSH ECX                            ; 005a1180
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a1181
    MOV dword ptr [EAX + 0x8],0x0       ; 005a1185
    PUSH ESI                            ; 005a118c
    MOV dword ptr [EAX + 0xc],0x0       ; 005a118d
    PUSH EAX                            ; 005a1194
    MOV EBX,EAX                         ; 005a1195
    MOV dword ptr [EAX + 0x10],0x0      ; 005a1197
    CALL support_trstream.cpp_CInStreamMemory_open_FUN_005a1450 ; 005a119e
        ;   XREF to: 005a1450 (UNCONDITIONAL_CALL)  ; void support_trstream.cpp_CInStreamMemory_open_FUN_005a1450(CInStreamMemory * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 005a11a3
    MOV EAX,EBX                         ; 005a11a6
    POP ESI                             ; 005a11a8
    POP EBX                             ; 005a11a9
    RET                                 ; 005a11aa

