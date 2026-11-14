; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamMemory_detachBuffer_FUN_00574d90(COutStreamMemory *this_ptr,int *param_2)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   param_2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574d90
        ;   Label: support_trstream.cpp_COutStreamMemory_detachBuffer_FUN_00574d90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00574d91
    MOV ECX,dword ptr [ESP + 0xc]       ; 00574d95
    MOV EDX,dword ptr [EAX + 0x10]      ; 00574d99
    MOV EBX,dword ptr [EAX + 0x4]       ; 00574d9c
    MOV dword ptr [ECX],EDX             ; 00574d9f
    PUSH EAX                            ; 00574da1
    MOV EDX,dword ptr [EAX]             ; 00574da2
    MOV dword ptr [EAX + 0x4],0x0       ; 00574da4
    CALL dword ptr [EDX + 0x14]         ; 00574dab
    ADD ESP,0x4                         ; 00574dae
    MOV EAX,EBX                         ; 00574db1
    POP EBX                             ; 00574db3
    RET                                 ; 00574db4

