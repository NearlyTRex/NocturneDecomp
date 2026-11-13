; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStreamMemory_ungetChar_FUN_0057d640(CInStreamMemory *this_ptr,int ch)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ch
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d640
        ;   Label: support_trstream.cpp_CInStreamMemory_ungetChar_FUN_0057d640
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057d641
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057d645
    TEST EAX,EAX                        ; 0057d649
    JL 0x0057d671                       ; 0057d64b
        ;   XREF to: 0057d671 (CONDITIONAL_JUMP)  ; LAB_0057d671
    CMP EAX,0xff                        ; 0057d64d
    JG 0x0057d671                       ; 0057d652
        ;   XREF to: 0057d671 (CONDITIONAL_JUMP)  ; LAB_0057d671
    CMP dword ptr [EDX + 0x4],0x0       ; 0057d654
    JZ 0x0057d671                       ; 0057d658
        ;   XREF to: 0057d671 (CONDITIONAL_JUMP)  ; LAB_0057d671
    MOV EBX,dword ptr [EDX + 0xc]       ; 0057d65a
    TEST EBX,EBX                        ; 0057d65d
    JLE 0x0057d671                      ; 0057d65f
        ;   XREF to: 0057d671 (CONDITIONAL_JUMP)  ; LAB_0057d671
    PUSH ESI                            ; 0057d661
    MOV EAX,0x1                         ; 0057d662
    MOV ESI,EBX                         ; 0057d667
    SUB ESI,EAX                         ; 0057d669
    MOV dword ptr [EDX + 0xc],ESI       ; 0057d66b
    POP ESI                             ; 0057d66e
    POP EBX                             ; 0057d66f
    RET                                 ; 0057d670
    XOR EAX,EAX                         ; 0057d671
        ;   Label: LAB_0057d671
    POP EBX                             ; 0057d673
    RET                                 ; 0057d674

