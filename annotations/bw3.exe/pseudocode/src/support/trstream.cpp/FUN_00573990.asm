; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * support_trstream_cpp_FUN_00573990(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; Called Functions:
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0
;   support_trstream.cpp_FUN_00572530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573990
        ;   Label: support_trstream.cpp_FUN_00573990
    PUSH ESI                            ; 00573991
    PUSH EDI                            ; 00573992
    MOV EDX,dword ptr [ESP + 0x10]      ; 00573993
    PUSH EDX                            ; 00573997
    CALL support_trstream.cpp_FUN_00572530 ; 00573998
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00572530()
    MOV dword ptr [EAX],0x5e5a84        ; 0057399d
    MOV dword ptr [EAX + 0x4],0x0       ; 005739a3
    MOV dword ptr [EAX + 0x8],0x0       ; 005739aa
    MOV dword ptr [EAX + 0xc],0x0       ; 005739b1
    ADD ESP,0x4                         ; 005739b8
    MOV dword ptr [EAX + 0x10],0x0      ; 005739bb
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005739c2
    MOV dword ptr [EAX + 0x14],0x0      ; 005739c6
    PUSH ECX                            ; 005739cd
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005739ce
    MOV dword ptr [EAX + 0x18],0x0      ; 005739d2
    PUSH ESI                            ; 005739d9
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005739da
    MOV dword ptr [EAX + 0x1c],0x0      ; 005739de
    PUSH EDI                            ; 005739e5
    MOV dword ptr [EAX + 0x20],0x0      ; 005739e6
    PUSH EAX                            ; 005739ed
    MOV EBX,EAX                         ; 005739ee
    MOV dword ptr [EAX + 0x24],0x0      ; 005739f0
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 005739f7
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 005739fc
    MOV EAX,EBX                         ; 005739ff
    POP EDI                             ; 00573a01
    POP ESI                             ; 00573a02
    POP EBX                             ; 00573a03
    RET                                 ; 00573a04

