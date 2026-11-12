; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * support_trstream_cpp_FUN_005a09a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; Called Functions:
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
;   support_trstream.cpp_FUN_0059f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a09a0
        ;   Label: support_trstream.cpp_FUN_005a09a0
    PUSH ESI                            ; 005a09a1
    PUSH EDI                            ; 005a09a2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a09a3
    PUSH EDX                            ; 005a09a7
    CALL support_trstream.cpp_FUN_0059f540 ; 005a09a8
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0059f540()
    MOV dword ptr [EAX],0x607384        ; 005a09ad
    MOV dword ptr [EAX + 0x4],0x0       ; 005a09b3
    MOV dword ptr [EAX + 0x8],0x0       ; 005a09ba
    MOV dword ptr [EAX + 0xc],0x0       ; 005a09c1
    ADD ESP,0x4                         ; 005a09c8
    MOV dword ptr [EAX + 0x10],0x0      ; 005a09cb
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005a09d2
    MOV dword ptr [EAX + 0x14],0x0      ; 005a09d6
    PUSH ECX                            ; 005a09dd
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a09de
    MOV dword ptr [EAX + 0x18],0x0      ; 005a09e2
    PUSH ESI                            ; 005a09e9
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005a09ea
    MOV dword ptr [EAX + 0x1c],0x0      ; 005a09ee
    PUSH EDI                            ; 005a09f5
    MOV dword ptr [EAX + 0x20],0x0      ; 005a09f6
    PUSH EAX                            ; 005a09fd
    MOV EBX,EAX                         ; 005a09fe
    MOV dword ptr [EAX + 0x24],0x0      ; 005a0a00
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 005a0a07
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 005a0a0c
    MOV EAX,EBX                         ; 005a0a0f
    POP EDI                             ; 005a0a11
    POP ESI                             ; 005a0a12
    POP EBX                             ; 005a0a13
    RET                                 ; 005a0a14

