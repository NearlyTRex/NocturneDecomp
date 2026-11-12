; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamMemory * support_trstream_cpp_CInStreamMemory_ctor_FUN_005a1130(CInStreamMemory *this_ptr)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_trstream.cpp_FUN_0059f540
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1130
        ;   Label: support_trstream.cpp_CInStreamMemory_ctor_FUN_005a1130
    PUSH EDX                            ; 005a1134
    CALL support_trstream.cpp_FUN_0059f540 ; 005a1135
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f540()
    MOV dword ptr [EAX],0x6073c4        ; 005a113a
    MOV dword ptr [EAX + 0x4],0x0       ; 005a1140
    MOV dword ptr [EAX + 0x8],0x0       ; 005a1147
    MOV dword ptr [EAX + 0xc],0x0       ; 005a114e
    ADD ESP,0x4                         ; 005a1155
    MOV dword ptr [EAX + 0x10],0x0      ; 005a1158
    RET                                 ; 005a115f

