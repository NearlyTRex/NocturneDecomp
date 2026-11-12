; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamMemory * support_trstream_cpp_CInStreamMemory_dtor_FUN_005a11e0(CInStreamMemory *this_ptr,uint flags)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   support_codec.cpp_FUN_00442d10 at 00442d6f
;   support_codec.cpp_FUN_00442d90 at 00442def
;
; Referenced Globals:
;   WatcomTypeInfo g_CInStreamMemoryTypeInfo
;   undefined1* g_CInStreamMemoryVTable = 005a11e0
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   support_trstream.cpp_CInStreamMemory_close_FUN_005a1400
;   support_trstream.cpp_FUN_0059f550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a11e0
        ;   Label: support_trstream.cpp_CInStreamMemory_dtor_FUN_005a11e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a11e1
    TEST byte ptr [ESP + 0xc],0x4       ; 005a11e5
    JNZ 0x005a1215                      ; 005a11ea
        ;   XREF to: 005a1215 (CONDITIONAL_JUMP)  ; LAB_005a1215
    PUSH EBX                            ; 005a11ec
    MOV dword ptr [EBX],0x6073c4        ; 005a11ed | g_CInStreamMemoryVTable
    CALL support_trstream.cpp_CInStreamMemory_close_FUN_005a1400 ; 005a11f3
        ;   XREF to: 005a1400 (UNCONDITIONAL_CALL)  ; void support_trstream.cpp_CInStreamMemory_close_FUN_005a1400(CInStreamMemory * this_ptr)
    ADD ESP,0x4                         ; 005a11f8
    PUSH 0x1                            ; 005a11fb
    PUSH EBX                            ; 005a11fd
    CALL support_trstream.cpp_FUN_0059f550 ; 005a11fe
        ;   XREF to: 0059f550 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f550()
    ADD ESP,0x8                         ; 005a1203
    MOV DL,byte ptr [ESP + 0xc]         ; 005a1206
    MOV EBX,EAX                         ; 005a120a
    TEST DL,0x2                         ; 005a120c
    JNZ 0x005a1230                      ; 005a120f
        ;   XREF to: 005a1230 (CONDITIONAL_JUMP)  ; LAB_005a1230
    MOV EAX,EBX                         ; 005a1211
    POP EBX                             ; 005a1213
    RET                                 ; 005a1214
    PUSH 0x5fdae0                       ; 005a1215 | g_CInStreamMemoryTypeInfo
        ;   Label: LAB_005a1215
    PUSH EBX                            ; 005a121a
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005a121b
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 005a1220
    PUSH EAX                            ; 005a1223
    CALL crt_unknown.c_FUN_005c0336     ; 005a1224
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005a1229
    MOV EAX,EBX                         ; 005a122c
    POP EBX                             ; 005a122e
    RET                                 ; 005a122f
    PUSH EAX                            ; 005a1230
        ;   Label: LAB_005a1230
    CALL crt_unknown.c_FUN_005c0344     ; 005a1231
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005a1236
    MOV EAX,EBX                         ; 005a1239
    POP EBX                             ; 005a123b
    RET                                 ; 005a123c

