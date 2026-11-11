; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_CInStreamMemory_ungetChar_FUN_005a1290(CInStreamMemory *this_ptr,int param_2)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1290
        ;   Label: support_trstream.cpp_CInStreamMemory_ungetChar_FUN_005a1290
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a1291
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a1295
    TEST EAX,EAX                        ; 005a1299
    JL 0x005a12c1                       ; 005a129b
        ;   XREF to: 005a12c1 (CONDITIONAL_JUMP)  ; LAB_005a12c1
    CMP EAX,0xff                        ; 005a129d
    JG 0x005a12c1                       ; 005a12a2
        ;   XREF to: 005a12c1 (CONDITIONAL_JUMP)  ; LAB_005a12c1
    CMP dword ptr [EDX + 0x4],0x0       ; 005a12a4
    JZ 0x005a12c1                       ; 005a12a8
        ;   XREF to: 005a12c1 (CONDITIONAL_JUMP)  ; LAB_005a12c1
    MOV EBX,dword ptr [EDX + 0xc]       ; 005a12aa
    TEST EBX,EBX                        ; 005a12ad
    JLE 0x005a12c1                      ; 005a12af
        ;   XREF to: 005a12c1 (CONDITIONAL_JUMP)  ; LAB_005a12c1
    PUSH ESI                            ; 005a12b1
    MOV EAX,0x1                         ; 005a12b2
    MOV ESI,EBX                         ; 005a12b7
    SUB ESI,EAX                         ; 005a12b9
    MOV dword ptr [EDX + 0xc],ESI       ; 005a12bb
    POP ESI                             ; 005a12be
    POP EBX                             ; 005a12bf
    RET                                 ; 005a12c0
    XOR EAX,EAX                         ; 005a12c1
        ;   Label: LAB_005a12c1
    POP EBX                             ; 005a12c3
    RET                                 ; 005a12c4

