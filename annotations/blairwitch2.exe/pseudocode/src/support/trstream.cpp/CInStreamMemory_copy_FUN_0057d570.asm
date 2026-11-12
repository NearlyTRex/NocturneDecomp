; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamMemory * support_trstream_cpp_CInStreamMemory_copy_FUN_0057d570(CInStreamMemory *this_ptr,CInStreamMemory *other)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; CInStreamMemory * Stack[0x8]:4   other
;
; Called Functions:
;   core_terrain.cpp_FUN_0057b9c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057d570
        ;   Label: support_trstream.cpp_CInStreamMemory_copy_FUN_0057d570
    PUSH EDX                            ; 0057d574
    CALL core_terrain.cpp_FUN_0057b9c0  ; 0057d575
        ;   XREF to: 0057b9c0 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_FUN_0057b9c0()
    ADD ESP,0x4                         ; 0057d57a
    MOV dword ptr [EAX],0x5fd424        ; 0057d57d
    RET                                 ; 0057d583

