; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamMemory * support_trstream_cpp_CInStreamMemory_dtor_FUN_005741d0(CInStreamMemory *this_ptr,uint flags)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   support_codec.cpp_FUN_00440970 at 004409cf
;   support_codec.cpp_FUN_004409f0 at 00440a4f
;
; Referenced Globals:
;   WatcomTypeInfo g_CInStreamMemoryTypeInfo
;   undefined1* g_CInStreamMemoryVTable = 005741d0
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   support_trstream.cpp_FUN_005743f0
;   unkafter_turret.cpp_FUN_00572540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005741d0
        ;   Label: support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005741d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005741d5
    JNZ 0x00574205                      ; 005741da
        ;   XREF to: 00574205 (CONDITIONAL_JUMP)  ; LAB_00574205
    PUSH EBX                            ; 005741dc
    MOV dword ptr [EBX],0x5e5ac4        ; 005741dd | g_CInStreamMemoryVTable
    CALL support_trstream.cpp_FUN_005743f0 ; 005741e3
        ;   XREF to: 005743f0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005743f0()
    ADD ESP,0x4                         ; 005741e8
    PUSH 0x1                            ; 005741eb
    PUSH EBX                            ; 005741ed
    CALL unkafter_turret.cpp_FUN_00572540 ; 005741ee
        ;   XREF to: 00572540 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00572540()
    ADD ESP,0x8                         ; 005741f3
    MOV DL,byte ptr [ESP + 0xc]         ; 005741f6
    MOV EBX,EAX                         ; 005741fa
    TEST DL,0x2                         ; 005741fc
    JNZ 0x00574220                      ; 005741ff
        ;   XREF to: 00574220 (CONDITIONAL_JUMP)  ; LAB_00574220
    MOV EAX,EBX                         ; 00574201
    POP EBX                             ; 00574203
    RET                                 ; 00574204
    PUSH 0x5dd5c0                       ; 00574205 | g_CInStreamMemoryTypeInfo
        ;   Label: LAB_00574205
    PUSH EBX                            ; 0057420a
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0057420b
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00574210
    PUSH EAX                            ; 00574213
    CALL crt_unknown.c_FUN_005a30b6     ; 00574214
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00574219
    MOV EAX,EBX                         ; 0057421c
    POP EBX                             ; 0057421e
    RET                                 ; 0057421f
    PUSH EAX                            ; 00574220
        ;   Label: LAB_00574220
    CALL crt_unknown.c_FUN_005a30c4     ; 00574221
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00574226
    MOV EAX,EBX                         ; 00574229
    POP EBX                             ; 0057422b
    RET                                 ; 0057422c

