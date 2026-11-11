; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_trstream_cpp_CInStreamMemory_getChar_FUN_0057d600(CInStreamMemory *this_ptr)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d600
        ;   Label: support_trstream.cpp_CInStreamMemory_getChar_FUN_0057d600
    CMP dword ptr [EAX + 0x4],0x0       ; 0057d604
    JZ 0x0057d61a                       ; 0057d608
        ;   XREF to: 0057d61a (CONDITIONAL_JUMP)  ; LAB_0057d61a
    MOV ECX,dword ptr [EAX + 0x8]       ; 0057d60a
    CMP ECX,dword ptr [EAX + 0xc]       ; 0057d60d
    JG 0x0057d622                       ; 0057d610
        ;   XREF to: 0057d622 (CONDITIONAL_JUMP)  ; LAB_0057d622
    MOV EDX,0xffffffff                  ; 0057d612
    MOV EAX,EDX                         ; 0057d617
    RET                                 ; 0057d619
    MOV EDX,0xfffffffe                  ; 0057d61a
        ;   Label: LAB_0057d61a
    MOV EAX,EDX                         ; 0057d61f
    RET                                 ; 0057d621
    PUSH ESI                            ; 0057d622
        ;   Label: LAB_0057d622
    PUSH EBX                            ; 0057d623
    MOV EBX,dword ptr [EAX + 0xc]       ; 0057d624
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057d627
    ADD EDX,EBX                         ; 0057d62a
    MOV DL,byte ptr [EDX]               ; 0057d62c
    LEA ESI,[EBX + 0x1]                 ; 0057d62e
    AND EDX,0xff                        ; 0057d631
    MOV dword ptr [EAX + 0xc],ESI       ; 0057d637
    POP EBX                             ; 0057d63a
    POP ESI                             ; 0057d63b
    MOV EAX,EDX                         ; 0057d63c
    RET                                 ; 0057d63e

