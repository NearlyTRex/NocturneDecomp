; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040b1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbce0
        ;   Label: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cbce1
    PUSH EBX                            ; 004cbce5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cbce6
    PUSH EDX                            ; 004cbcea
    CALL core_actor.cpp_FUN_0040b1b0    ; 004cbceb
        ;   XREF to: 0040b1b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040b1b0()
    ADD ESP,0x8                         ; 004cbcf0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cbcf3
    MOV dword ptr [EBX],0x1             ; 004cbcf7
    MOV EAX,dword ptr [EAX + 0x2cc]     ; 004cbcfd
    MOV dword ptr [EBX + 0x10],0x40c90fdb ; 004cbd03
    MOV dword ptr [EBX + 0x14],0xc0c90fdb ; 004cbd0a
    MOV dword ptr [EBX + 0x8],0xbf800000 ; 004cbd11
    MOV dword ptr [EBX + 0xc],0x0       ; 004cbd18
    MOV dword ptr [EBX + 0x4],EAX       ; 004cbd1f
    POP EBX                             ; 004cbd22
    RET                                 ; 004cbd23

