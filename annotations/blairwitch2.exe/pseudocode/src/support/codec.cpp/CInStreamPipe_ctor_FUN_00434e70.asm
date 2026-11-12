; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamPipe * support_codec_cpp_CInStreamPipe_ctor_FUN_00434e70(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_terrain.cpp_FUN_0057b9c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00434e70
        ;   Label: support_codec.cpp_CInStreamPipe_ctor_FUN_00434e70
    PUSH EDX                            ; 00434e74
    CALL core_terrain.cpp_FUN_0057b9c0  ; 00434e75
        ;   XREF to: 0057b9c0 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057b9c0()
    MOV dword ptr [EAX],0x5f4344        ; 00434e7a
    MOV dword ptr [EAX + 0x4],0x0       ; 00434e80
    MOV dword ptr [EAX + 0x8],0x0       ; 00434e87
    MOV dword ptr [EAX + 0xc],0x0       ; 00434e8e
    MOV dword ptr [EAX + 0x10],0x0      ; 00434e95
    MOV dword ptr [EAX + 0x14],0x0      ; 00434e9c
    MOV dword ptr [EAX + 0x18],0x0      ; 00434ea3
    MOV dword ptr [EAX + 0x1c],0x0      ; 00434eaa
    ADD ESP,0x4                         ; 00434eb1
    MOV dword ptr [EAX + 0x20],0x0      ; 00434eb4
    RET                                 ; 00434ebb

