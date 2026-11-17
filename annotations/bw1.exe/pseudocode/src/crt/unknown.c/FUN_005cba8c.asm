; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cba8c(Heap *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cbaec at 005cbaf9
;
; Referenced Globals:
;   void* PTR_VirtualFree_005d0678 = 001d12ae
;   Heap* g_MainHeap = 00000000
;   Heap* g_SecondaryHeap = 00000000
;   int g_INT_00626228 = 0x0
;   int g_INT_02c9f040
;
; Called Functions:
;   VirtualFree
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cba8c
        ;   Label: crt_unknown.c_FUN_005cba8c
    PUSH ESI                            ; 005cba8d
    MOV ESI,dword ptr [ESP + 0xc]       ; 005cba8e
    PUSH 0x8000                         ; 005cba92
    PUSH 0x0                            ; 005cba97
    PUSH ESI                            ; 005cba99
    MOV EBX,dword ptr [ESI + 0x8]       ; 005cba9a
    CALL dword ptr CS:[0x5d0678]        ; 005cba9d | PTR_VirtualFree_005d0678
    TEST EAX,EAX                        ; 005cbaa4
    JNZ 0x005cbab0                      ; 005cbaa6
        ;   XREF to: 005cbab0 (CONDITIONAL_JUMP)  ; LAB_005cbab0
    MOV EAX,0xffffffff                  ; 005cbaa8
    POP ESI                             ; 005cbaad
    POP EBX                             ; 005cbaae
    RET                                 ; 005cbaaf
    CMP ESI,dword ptr [0x00626224]      ; 005cbab0 | g_SecondaryHeap
        ;   Label: LAB_005cbab0
    JNZ 0x005cbad4                      ; 005cbab6
        ;   XREF to: 005cbad4 (CONDITIONAL_JUMP)  ; LAB_005cbad4
    TEST EBX,EBX                        ; 005cbab8
    JZ 0x005cbac4                       ; 005cbaba
        ;   XREF to: 005cbac4 (CONDITIONAL_JUMP)  ; LAB_005cbac4
    MOV dword ptr [0x00626224],EBX      ; 005cbabc | g_SecondaryHeap
    JMP 0x005cbad4                      ; 005cbac2
        ;   XREF to: 005cbad4 (UNCONDITIONAL_JUMP)  ; LAB_005cbad4
    MOV EAX,[0x00626220]                ; 005cbac4 | g_MainHeap
        ;   Label: LAB_005cbac4
    MOV dword ptr [0x00626228],EBX      ; 005cbac9 | g_INT_00626228
    MOV [0x00626224],EAX                ; 005cbacf | g_SecondaryHeap
    MOV ECX,dword ptr [0x02c9f040]      ; 005cbad4 | g_INT_02c9f040
        ;   Label: LAB_005cbad4
    CMP ESI,ECX                         ; 005cbada
    JNZ 0x005cbae6                      ; 005cbadc
        ;   XREF to: 005cbae6 (CONDITIONAL_JUMP)  ; LAB_005cbae6
    XOR ESI,ECX                         ; 005cbade
    MOV dword ptr [0x02c9f040],ESI      ; 005cbae0 | g_INT_02c9f040
    XOR EAX,EAX                         ; 005cbae6
        ;   Label: LAB_005cbae6
    POP ESI                             ; 005cbae8
    POP EBX                             ; 005cbae9
    RET                                 ; 005cbaea

