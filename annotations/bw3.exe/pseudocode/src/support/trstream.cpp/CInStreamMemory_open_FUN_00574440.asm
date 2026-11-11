; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trstream_cpp_CInStreamMemory_open_FUN_00574440(CInStreamMemory *this_ptr,int param_2,int param_3)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; XREF[1]:
;   support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_00574150 at 0057418e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574440
        ;   Label: support_trstream.cpp_CInStreamMemory_open_FUN_00574440
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574441
    PUSH EBX                            ; 00574445
    MOV EAX,dword ptr [EBX]             ; 00574446
    CALL dword ptr [EAX + 0x24]         ; 00574448
    MOV dword ptr [EBX + 0xc],0x0       ; 0057444b
    ADD ESP,0x4                         ; 00574452
    MOV dword ptr [EBX + 0x10],0x0      ; 00574455
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057445c
    MOV dword ptr [EBX + 0x4],EAX       ; 00574460
    MOV EAX,dword ptr [ESP + 0x10]      ; 00574463
    MOV dword ptr [EBX + 0x8],EAX       ; 00574467
    POP EBX                             ; 0057446a
    RET                                 ; 0057446b

