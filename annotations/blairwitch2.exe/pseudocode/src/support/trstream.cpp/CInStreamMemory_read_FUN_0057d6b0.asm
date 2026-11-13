; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStreamMemory_read_FUN_0057d6b0(CInStreamMemory *this_ptr,void *buffer,int count)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   count
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d6b0
        ;   Label: support_trstream.cpp_CInStreamMemory_read_FUN_0057d6b0
    PUSH ESI                            ; 0057d6b1
    PUSH EBP                            ; 0057d6b2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0057d6b3
    MOV EBX,dword ptr [ESP + 0x18]      ; 0057d6b7
    CMP dword ptr [EDX + 0x4],0x0       ; 0057d6bb
    JZ 0x0057d6fd                       ; 0057d6bf
        ;   XREF to: 0057d6fd (CONDITIONAL_JUMP)  ; LAB_0057d6fd
    MOV ESI,dword ptr [EDX + 0x8]       ; 0057d6c1
    CMP ESI,dword ptr [EDX + 0xc]       ; 0057d6c4
    JLE 0x0057d706                      ; 0057d6c7
        ;   XREF to: 0057d706 (CONDITIONAL_JUMP)  ; LAB_0057d706
    MOV EAX,ESI                         ; 0057d6c9
    SUB EAX,dword ptr [EDX + 0xc]       ; 0057d6cb
    CMP EBX,EAX                         ; 0057d6ce
    JLE 0x0057d6d4                      ; 0057d6d0
        ;   XREF to: 0057d6d4 (CONDITIONAL_JUMP)  ; LAB_0057d6d4
    MOV EBX,EAX                         ; 0057d6d2
    PUSH EDI                            ; 0057d6d4
        ;   Label: LAB_0057d6d4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0057d6d5
    MOV ESI,dword ptr [EDX + 0x4]       ; 0057d6d9
    MOV EBP,dword ptr [EDX + 0xc]       ; 0057d6dc
    MOV ECX,EBX                         ; 0057d6df
    ADD ESI,EBP                         ; 0057d6e1
    PUSH EDI                            ; 0057d6e3
    MOV EAX,ECX                         ; 0057d6e4
    SHR ECX,0x2                         ; 0057d6e6
    MOVSD.REP ES:EDI,ESI                ; 0057d6e9
    MOV CL,AL                           ; 0057d6eb
    AND CL,0x3                          ; 0057d6ed
    MOVSB.REP ES:EDI,ESI                ; 0057d6f0
    POP EDI                             ; 0057d6f2
    ADD dword ptr [EDX + 0xc],EBX       ; 0057d6f3
    MOV EAX,EBX                         ; 0057d6f6
    POP EDI                             ; 0057d6f8
    POP EBP                             ; 0057d6f9
    POP ESI                             ; 0057d6fa
    POP EBX                             ; 0057d6fb
    RET                                 ; 0057d6fc
    MOV EAX,0xfffffffe                  ; 0057d6fd
        ;   Label: LAB_0057d6fd
    POP EBP                             ; 0057d702
    POP ESI                             ; 0057d703
    POP EBX                             ; 0057d704
    RET                                 ; 0057d705
    MOV EAX,0xffffffff                  ; 0057d706
        ;   Label: LAB_0057d706
    POP EBP                             ; 0057d70b
    POP ESI                             ; 0057d70c
    POP EBX                             ; 0057d70d
    RET                                 ; 0057d70e

