; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamMemory_putChar_FUN_0057df70(COutStreamMemory *this_ptr,char ch)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   ch
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057df70
        ;   Label: support_trstream.cpp_COutStreamMemory_putChar_FUN_0057df70
    PUSH ESI                            ; 0057df71
    PUSH EDI                            ; 0057df72
    PUSH EBP                            ; 0057df73
    MOV EBX,dword ptr [ESP + 0x14]      ; 0057df74
    MOV EDX,dword ptr [EBX + 0x8]       ; 0057df78
    MOV EAX,dword ptr [EBX + 0xc]       ; 0057df7b
    CMP EAX,EDX                         ; 0057df7e
    JL 0x0057dfaf                       ; 0057df80
        ;   XREF to: 0057dfaf (CONDITIONAL_JUMP)  ; LAB_0057dfaf
    CMP dword ptr [EBX + 0x14],0x0      ; 0057df82
    JNZ 0x0057df92                      ; 0057df86
        ;   XREF to: 0057df92 (CONDITIONAL_JUMP)  ; LAB_0057df92
    MOV EAX,0xffffffff                  ; 0057df88
    POP EBP                             ; 0057df8d
    POP EDI                             ; 0057df8e
    POP ESI                             ; 0057df8f
    POP EBX                             ; 0057df90
    RET                                 ; 0057df91
    LEA ESI,[EAX + 0x4000]              ; 0057df92
        ;   Label: LAB_0057df92
    PUSH ESI                            ; 0057df98
    MOV EDI,dword ptr [EBX + 0x4]       ; 0057df99
    PUSH EDI                            ; 0057df9c
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 0057df9d
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0057dfa2
    TEST EAX,EAX                        ; 0057dfa5
    JZ 0x0057dfd5                       ; 0057dfa7
        ;   XREF to: 0057dfd5 (CONDITIONAL_JUMP)  ; LAB_0057dfd5
    MOV dword ptr [EBX + 0x4],EAX       ; 0057dfa9
    MOV dword ptr [EBX + 0x8],ESI       ; 0057dfac
    MOV EBP,dword ptr [EBX + 0xc]       ; 0057dfaf
        ;   Label: LAB_0057dfaf
    MOV EAX,dword ptr [EBX + 0x4]       ; 0057dfb2
    ADD EAX,EBP                         ; 0057dfb5
    MOV DL,byte ptr [ESP + 0x18]        ; 0057dfb7
    MOV byte ptr [EAX],DL               ; 0057dfbb
    MOV EAX,dword ptr [EBX + 0xc]       ; 0057dfbd
    INC EAX                             ; 0057dfc0
    MOV EDX,dword ptr [EBX + 0x10]      ; 0057dfc1
    MOV dword ptr [EBX + 0xc],EAX       ; 0057dfc4
    CMP EAX,EDX                         ; 0057dfc7
    JL 0x0057dfce                       ; 0057dfc9
        ;   XREF to: 0057dfce (CONDITIONAL_JUMP)  ; LAB_0057dfce
    MOV dword ptr [EBX + 0x10],EAX      ; 0057dfcb
    XOR EAX,EAX                         ; 0057dfce
        ;   Label: LAB_0057dfce
    POP EBP                             ; 0057dfd0
    POP EDI                             ; 0057dfd1
    POP ESI                             ; 0057dfd2
    POP EBX                             ; 0057dfd3
    RET                                 ; 0057dfd4
    MOV EAX,0xfffffffe                  ; 0057dfd5
        ;   Label: LAB_0057dfd5
    POP EBP                             ; 0057dfda
    POP EDI                             ; 0057dfdb
    POP ESI                             ; 0057dfdc
    POP EBX                             ; 0057dfdd
    RET                                 ; 0057dfde

