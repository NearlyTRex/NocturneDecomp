; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trstream_cpp_CInStreamMemory_open_FUN_0057d800(CInStreamMemory *this_ptr,int param_2,int param_3)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; XREF[1]:
;   support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_0057d520 at 0057d55e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d800
        ;   Label: support_trstream.cpp_CInStreamMemory_open_FUN_0057d800
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057d801
    PUSH EBX                            ; 0057d805
    MOV EAX,dword ptr [EBX]             ; 0057d806
    CALL dword ptr [EAX + 0x24]         ; 0057d808
    MOV dword ptr [EBX + 0xc],0x0       ; 0057d80b
    ADD ESP,0x4                         ; 0057d812
    MOV dword ptr [EBX + 0x10],0x0      ; 0057d815
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057d81c
    MOV dword ptr [EBX + 0x4],EAX       ; 0057d820
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057d823
    MOV dword ptr [EBX + 0x8],EAX       ; 0057d827
    POP EBX                             ; 0057d82a
    RET                                 ; 0057d82b

