; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_COutStreamMemory_putChar_FUN_00574bb0(COutStreamMemory *this_ptr,char param_2)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; undefined1       Stack[0x8]:1   param_2
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574bb0
        ;   Label: support_trstream.cpp_COutStreamMemory_putChar_FUN_00574bb0
    PUSH ESI                            ; 00574bb1
    PUSH EDI                            ; 00574bb2
    PUSH EBP                            ; 00574bb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00574bb4
    MOV EDX,dword ptr [EBX + 0x8]       ; 00574bb8
    MOV EAX,dword ptr [EBX + 0xc]       ; 00574bbb
    CMP EAX,EDX                         ; 00574bbe
    JL 0x00574bef                       ; 00574bc0
        ;   XREF to: 00574bef (CONDITIONAL_JUMP)  ; LAB_00574bef
    CMP dword ptr [EBX + 0x14],0x0      ; 00574bc2
    JNZ 0x00574bd2                      ; 00574bc6
        ;   XREF to: 00574bd2 (CONDITIONAL_JUMP)  ; LAB_00574bd2
    MOV EAX,0xffffffff                  ; 00574bc8
    POP EBP                             ; 00574bcd
    POP EDI                             ; 00574bce
    POP ESI                             ; 00574bcf
    POP EBX                             ; 00574bd0
    RET                                 ; 00574bd1
    LEA ESI,[EAX + 0x4000]              ; 00574bd2
        ;   Label: LAB_00574bd2
    PUSH ESI                            ; 00574bd8
    MOV EDI,dword ptr [EBX + 0x4]       ; 00574bd9
    PUSH EDI                            ; 00574bdc
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00574bdd
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00574be2
    TEST EAX,EAX                        ; 00574be5
    JZ 0x00574c15                       ; 00574be7
        ;   XREF to: 00574c15 (CONDITIONAL_JUMP)  ; LAB_00574c15
    MOV dword ptr [EBX + 0x4],EAX       ; 00574be9
    MOV dword ptr [EBX + 0x8],ESI       ; 00574bec
    MOV EBP,dword ptr [EBX + 0xc]       ; 00574bef
        ;   Label: LAB_00574bef
    MOV EAX,dword ptr [EBX + 0x4]       ; 00574bf2
    ADD EAX,EBP                         ; 00574bf5
    MOV DL,byte ptr [ESP + 0x18]        ; 00574bf7
    MOV byte ptr [EAX],DL               ; 00574bfb
    MOV EAX,dword ptr [EBX + 0xc]       ; 00574bfd
    INC EAX                             ; 00574c00
    MOV EDX,dword ptr [EBX + 0x10]      ; 00574c01
    MOV dword ptr [EBX + 0xc],EAX       ; 00574c04
    CMP EAX,EDX                         ; 00574c07
    JL 0x00574c0e                       ; 00574c09
        ;   XREF to: 00574c0e (CONDITIONAL_JUMP)  ; LAB_00574c0e
    MOV dword ptr [EBX + 0x10],EAX      ; 00574c0b
    XOR EAX,EAX                         ; 00574c0e
        ;   Label: LAB_00574c0e
    POP EBP                             ; 00574c10
    POP EDI                             ; 00574c11
    POP ESI                             ; 00574c12
    POP EBX                             ; 00574c13
    RET                                 ; 00574c14
    MOV EAX,0xfffffffe                  ; 00574c15
        ;   Label: LAB_00574c15
    POP EBP                             ; 00574c1a
    POP EDI                             ; 00574c1b
    POP ESI                             ; 00574c1c
    POP EBX                             ; 00574c1d
    RET                                 ; 00574c1e

