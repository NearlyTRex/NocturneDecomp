; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_heap_c_VirtualFreeBlock_FUN_0060c95c(HeapBlock *block)
;
; Parameters:
; HeapBlock *      Stack[0x4]:4   block
;
; XREF[1]:
;   crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc at 0060c9c9
;
; Referenced Globals:
;   VIRTUAL_FREE_FUNC* g_VirtualFreeFunc = 002122a6
;   Heap* g_MainHeap = 00000000
;   Heap* g_SecondaryHeap = 00000000
;   undefined4 DAT_00684edc
;   undefined4 DAT_03f9b210
;
; Called Functions:
;   VirtualFree
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c95c
        ;   Label: crt_heap.c_VirtualFreeBlock_FUN_0060c95c
    PUSH ESI                            ; 0060c95d
    MOV ESI,dword ptr [ESP + 0xc]       ; 0060c95e
    PUSH 0x8000                         ; 0060c962
    PUSH 0x0                            ; 0060c967
    PUSH ESI                            ; 0060c969
    MOV EBX,dword ptr [ESI + 0x8]       ; 0060c96a
    CALL dword ptr CS:[0x611664]        ; 0060c96d | g_VirtualFreeFunc
    TEST EAX,EAX                        ; 0060c974
    JNZ 0x0060c980                      ; 0060c976
        ;   XREF to: 0060c980 (CONDITIONAL_JUMP)  ; LAB_0060c980
    MOV EAX,0xffffffff                  ; 0060c978
    POP ESI                             ; 0060c97d
    POP EBX                             ; 0060c97e
    RET                                 ; 0060c97f
    CMP ESI,dword ptr [0x00684ed8]      ; 0060c980 | g_SecondaryHeap
        ;   Label: LAB_0060c980
    JNZ 0x0060c9a4                      ; 0060c986
        ;   XREF to: 0060c9a4 (CONDITIONAL_JUMP)  ; LAB_0060c9a4
    TEST EBX,EBX                        ; 0060c988
    JZ 0x0060c994                       ; 0060c98a
        ;   XREF to: 0060c994 (CONDITIONAL_JUMP)  ; LAB_0060c994
    MOV dword ptr [0x00684ed8],EBX      ; 0060c98c | g_SecondaryHeap
    JMP 0x0060c9a4                      ; 0060c992
        ;   XREF to: 0060c9a4 (UNCONDITIONAL_JUMP)  ; LAB_0060c9a4
    MOV EAX,[0x00684ed4]                ; 0060c994 | g_MainHeap
        ;   Label: LAB_0060c994
    MOV dword ptr [0x00684edc],EBX      ; 0060c999 | DAT_00684edc
    MOV [0x00684ed8],EAX                ; 0060c99f | g_SecondaryHeap
    MOV ECX,dword ptr [0x03f9b210]      ; 0060c9a4 | DAT_03f9b210
        ;   Label: LAB_0060c9a4
    CMP ESI,ECX                         ; 0060c9aa
    JNZ 0x0060c9b6                      ; 0060c9ac
        ;   XREF to: 0060c9b6 (CONDITIONAL_JUMP)  ; LAB_0060c9b6
    XOR ESI,ECX                         ; 0060c9ae
    MOV dword ptr [0x03f9b210],ESI      ; 0060c9b0 | DAT_03f9b210
    XOR EAX,EAX                         ; 0060c9b6
        ;   Label: LAB_0060c9b6
    POP ESI                             ; 0060c9b8
    POP EBX                             ; 0060c9b9
    RET                                 ; 0060c9ba

