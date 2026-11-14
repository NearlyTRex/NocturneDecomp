; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_004e7980(CMirrorHack *this_ptr,SInteractionInfo *out_info)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; SInteractionInfo * Stack[0x8]:4   out_info
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getInteractionInfo_FUN_00409ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7980
        ;   Label: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_004e7980
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e7981
    PUSH EBX                            ; 004e7985
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e7986
    PUSH EDX                            ; 004e798a
    CALL core_actor.cpp_CDemonActor_getInteractionInfo_FUN_00409ed0 ; 004e798b
        ;   XREF to: 00409ed0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getInteractionInfo_FUN_00409ed0(CDemonActor * this_ptr, SInteractionInfo * out_info)
    ADD ESP,0x8                         ; 004e7990
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e7993
    MOV dword ptr [EBX],0x1             ; 004e7997
    MOV EAX,dword ptr [EAX + 0x430]     ; 004e799d
    MOV dword ptr [EBX + 0x10],0x40c90fdb ; 004e79a3
    MOV dword ptr [EBX + 0x14],0xc0c90fdb ; 004e79aa
    MOV dword ptr [EBX + 0x8],0xbf800000 ; 004e79b1
    MOV dword ptr [EBX + 0xc],0x0       ; 004e79b8
    MOV dword ptr [EBX + 0x4],EAX       ; 004e79bf
    POP EBX                             ; 004e79c2
    RET                                 ; 004e79c3

