; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trstream_cpp_CInStreamMemory_openOwned_FUN_005a1480(CInStreamMemory *this_ptr,int param_2,int param_3)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1480
        ;   Label: support_trstream.cpp_CInStreamMemory_openOwned_FUN_005a1480
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1481
    PUSH EBX                            ; 005a1485
    MOV EAX,dword ptr [EBX]             ; 005a1486
    CALL dword ptr [EAX + 0x24]         ; 005a1488
    MOV dword ptr [EBX + 0xc],0x0       ; 005a148b
    ADD ESP,0x4                         ; 005a1492
    MOV dword ptr [EBX + 0x10],0x1      ; 005a1495
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a149c
    MOV dword ptr [EBX + 0x4],EAX       ; 005a14a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a14a3
    MOV dword ptr [EBX + 0x8],EAX       ; 005a14a7
    POP EBX                             ; 005a14aa
    RET                                 ; 005a14ab

