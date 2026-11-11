; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamMemory_detachBuffer_FUN_005a1da0(COutStreamMemory *this_ptr,int *param_2)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   param_2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1da0
        ;   Label: support_trstream.cpp_COutStreamMemory_detachBuffer_FUN_005a1da0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a1da1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a1da5
    MOV EDX,dword ptr [EAX + 0x10]      ; 005a1da9
    MOV EBX,dword ptr [EAX + 0x4]       ; 005a1dac
    MOV dword ptr [ECX],EDX             ; 005a1daf
    PUSH EAX                            ; 005a1db1
    MOV EDX,dword ptr [EAX]             ; 005a1db2
    MOV dword ptr [EAX + 0x4],0x0       ; 005a1db4
    CALL dword ptr [EDX + 0x14]         ; 005a1dbb
    ADD ESP,0x4                         ; 005a1dbe
    MOV EAX,EBX                         ; 005a1dc1
    POP EBX                             ; 005a1dc3
    RET                                 ; 005a1dc4

