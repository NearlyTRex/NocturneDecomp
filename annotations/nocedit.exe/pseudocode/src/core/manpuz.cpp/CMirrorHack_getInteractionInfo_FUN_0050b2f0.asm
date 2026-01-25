; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_0050b2f0(CMirrorHack * this_ptr, SInteractionInfo * out_info)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; SInteractionInfo * Stack[0x8]:4   out_info
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b2f0
        ;   Label: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_0050b2f0
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050b2f1
    PUSH EBX                            ; 0050b2f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050b2f6
    PUSH EDX                            ; 0050b2fa
    CALL core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030 ; 0050b2fb
        ;   XREF to: 0040a030 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getInteractionInfo_FUN_0040a030(CDemonActor * this_ptr, SInteractionInfo * out_info)
    ADD ESP,0x8                         ; 0050b300
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050b303
    MOV dword ptr [EBX],0x1             ; 0050b307
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 0050b30d
    MOV dword ptr [EBX + 0x10],0x40c90fdb ; 0050b313
    MOV dword ptr [EBX + 0x14],0xc0c90fdb ; 0050b31a
    MOV dword ptr [EBX + 0x8],0xbf800000 ; 0050b321
    MOV dword ptr [EBX + 0xc],0x0       ; 0050b328
    MOV dword ptr [EBX + 0x4],EAX       ; 0050b32f
    POP EBX                             ; 0050b332
    RET                                 ; 0050b333

