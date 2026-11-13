; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamMemory * __cdecl support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_00574150(CInStreamMemory *this_ptr,char *data,int size)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   data
; int              Stack[0xc]:4   size
;
; XREF[2]:
;   support_codec.cpp_CCodec_processBuffer_FUN_004409f0 at 00440a08
;   support_codec.cpp_FUN_00440970 at 00440988
;
; Referenced Globals:
;   undefined1* g_CInStreamMemoryVTable = 005741d0
;
; Called Functions:
;   support_trstream.cpp_CInStream_ctor_FUN_00572530
;   support_trstream.cpp_CInStreamMemory_open_FUN_00574440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574150
        ;   Label: support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_00574150
    PUSH ESI                            ; 00574151
    MOV EDX,dword ptr [ESP + 0xc]       ; 00574152
    PUSH EDX                            ; 00574156
    CALL support_trstream.cpp_CInStream_ctor_FUN_00572530 ; 00574157
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; CInStream * support_trstream.cpp_CInStream_ctor_FUN_00572530(CInStream * this_ptr)
    ADD ESP,0x4                         ; 0057415c
    MOV dword ptr [EAX],0x5e5ac4        ; 0057415f | g_CInStreamMemoryVTable
    MOV ECX,dword ptr [ESP + 0x14]      ; 00574165
    MOV dword ptr [EAX + 0x4],0x0       ; 00574169
    PUSH ECX                            ; 00574170
    MOV ESI,dword ptr [ESP + 0x14]      ; 00574171
    MOV dword ptr [EAX + 0x8],0x0       ; 00574175
    PUSH ESI                            ; 0057417c
    MOV dword ptr [EAX + 0xc],0x0       ; 0057417d
    PUSH EAX                            ; 00574184
    MOV EBX,EAX                         ; 00574185
    MOV dword ptr [EAX + 0x10],0x0      ; 00574187
    CALL support_trstream.cpp_CInStreamMemory_open_FUN_00574440 ; 0057418e
        ;   XREF to: 00574440 (UNCONDITIONAL_CALL)  ; void support_trstream.cpp_CInStreamMemory_open_FUN_00574440(CInStreamMemory * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 00574193
    MOV EAX,EBX                         ; 00574196
    POP ESI                             ; 00574198
    POP EBX                             ; 00574199
    RET                                 ; 0057419a

