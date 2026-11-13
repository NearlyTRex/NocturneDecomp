; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_codec_cpp_CInStreamPipe_fillBuffer_FUN_00444020(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_getChar_FUN_00443cc0 at 00443cf6
;   support_codec.cpp_CInStreamPipe_peekChar_FUN_00443d40 at 00443d6e
;   support_codec.cpp_CInStreamPipe_read_FUN_00443d80 at 00443e08
;
; Called Functions:
;   support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60
;   support_trstream.cpp_COutStreamMemory_tell_FUN_005a1d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444020
        ;   Label: support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00444020
    PUSH ESI                            ; 00444021
    PUSH EDI                            ; 00444022
    SUB ESP,0x18                        ; 00444023
    MOV EBX,dword ptr [ESP + 0x28]      ; 00444026
    MOV dword ptr [EBX + 0x1c],0x0      ; 0044402a
    MOV EDX,dword ptr [EBX + 0x20]      ; 00444031
    MOV dword ptr [EBX + 0x18],0x0      ; 00444034
    TEST EDX,EDX                        ; 0044403b
    JZ 0x0044404d                       ; 0044403d
        ;   XREF to: 0044404d (CONDITIONAL_JUMP)  ; LAB_0044404d
    MOV EBX,0xffffffff                  ; 0044403f
    MOV EAX,EBX                         ; 00444044
    ADD ESP,0x18                        ; 00444046
    POP EDI                             ; 00444049
    POP ESI                             ; 0044404a
    POP EBX                             ; 0044404b
    RET                                 ; 0044404c
    MOV ECX,dword ptr [EBX + 0x14]      ; 0044404d
        ;   Label: LAB_0044404d
    PUSH ECX                            ; 00444050
    MOV ESI,dword ptr [EBX + 0x10]      ; 00444051
    PUSH ESI                            ; 00444054
    LEA EAX,[ESP + 0x8]                 ; 00444055
    PUSH EAX                            ; 00444059
    CALL support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0 ; 0044405a
        ;   XREF to: 005a1ad0 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0(COutStreamMemory * this_ptr, char * buffer, int capacity)
    ADD ESP,0xc                         ; 0044405f
    MOV EDX,ESP                         ; 00444062
    PUSH EDX                            ; 00444064
    MOV EDI,dword ptr [EBX + 0x8]       ; 00444065
    MOV EAX,dword ptr [EBX + 0x4]       ; 00444068
    PUSH EDI                            ; 0044406b
    MOV ECX,dword ptr [EAX]             ; 0044406c
    PUSH EAX                            ; 0044406e
    CALL dword ptr [ECX + 0x8]          ; 0044406f
    ADD ESP,0xc                         ; 00444072
    TEST EAX,EAX                        ; 00444075
    JZ 0x004440c6                       ; 00444077
        ;   XREF to: 004440c6 (CONDITIONAL_JUMP)  ; LAB_004440c6
    CMP EAX,0x1                         ; 00444079
    JNZ 0x00444099                      ; 0044407c
        ;   XREF to: 00444099 (CONDITIONAL_JUMP)  ; LAB_00444099
    MOV EDX,ESP                         ; 0044407e
    MOV EAX,dword ptr [EBX + 0x4]       ; 00444080
    PUSH EDX                            ; 00444083
    MOV ECX,dword ptr [EAX]             ; 00444084
    PUSH EAX                            ; 00444086
    CALL dword ptr [ECX + 0xc]          ; 00444087
    ADD ESP,0x8                         ; 0044408a
    TEST EAX,EAX                        ; 0044408d
    JZ 0x004440c6                       ; 0044408f
        ;   XREF to: 004440c6 (CONDITIONAL_JUMP)  ; LAB_004440c6
    CMP EAX,0x1                         ; 00444091
    JNZ 0x00444099                      ; 00444094
        ;   XREF to: 00444099 (CONDITIONAL_JUMP)  ; LAB_00444099
    MOV dword ptr [EBX + 0x20],EAX      ; 00444096
    MOV EAX,ESP                         ; 00444099
        ;   Label: LAB_00444099
    PUSH EAX                            ; 0044409b
    CALL support_trstream.cpp_COutStreamMemory_tell_FUN_005a1d10 ; 0044409c
        ;   XREF to: 005a1d10 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamMemory_tell_FUN_005a1d10(COutStreamMemory * this_ptr)
    ADD ESP,0x4                         ; 004440a1
    TEST EAX,EAX                        ; 004440a4
    JL 0x004440e2                       ; 004440a6
        ;   XREF to: 004440e2 (CONDITIONAL_JUMP)  ; LAB_004440e2
    JNZ 0x004440ff                      ; 004440a8
        ;   XREF to: 004440ff (CONDITIONAL_JUMP)  ; LAB_004440ff
    PUSH EAX                            ; 004440aa
    LEA EAX,[ESP + 0x4]                 ; 004440ab
    PUSH EAX                            ; 004440af
    MOV EBX,0xffffffff                  ; 004440b0
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60 ; 004440b5
        ;   XREF to: 005a1b60 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004440ba
    MOV EAX,EBX                         ; 004440bd
    ADD ESP,0x18                        ; 004440bf
    POP EDI                             ; 004440c2
    POP ESI                             ; 004440c3
    POP EBX                             ; 004440c4
    RET                                 ; 004440c5
    PUSH EAX                            ; 004440c6
        ;   Label: LAB_004440c6
    LEA EAX,[ESP + 0x4]                 ; 004440c7
    PUSH EAX                            ; 004440cb
    MOV EBX,0xfffffffe                  ; 004440cc
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60 ; 004440d1
        ;   XREF to: 005a1b60 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004440d6
    MOV EAX,EBX                         ; 004440d9
    ADD ESP,0x18                        ; 004440db
    POP EDI                             ; 004440de
    POP ESI                             ; 004440df
    POP EBX                             ; 004440e0
    RET                                 ; 004440e1
    PUSH 0x0                            ; 004440e2
        ;   Label: LAB_004440e2
    LEA EAX,[ESP + 0x4]                 ; 004440e4
    PUSH EAX                            ; 004440e8
    MOV EBX,0xfffffffe                  ; 004440e9
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60 ; 004440ee
        ;   XREF to: 005a1b60 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004440f3
    MOV EAX,EBX                         ; 004440f6
    ADD ESP,0x18                        ; 004440f8
    POP EDI                             ; 004440fb
    POP ESI                             ; 004440fc
    POP EBX                             ; 004440fd
    RET                                 ; 004440fe
    MOV dword ptr [EBX + 0x18],EAX      ; 004440ff
        ;   Label: LAB_004440ff
    XOR EBX,EBX                         ; 00444102
    PUSH EBX                            ; 00444104
    LEA EAX,[ESP + 0x4]                 ; 00444105
    PUSH EAX                            ; 00444109
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60 ; 0044410a
        ;   XREF to: 005a1b60 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044410f
    MOV EAX,EBX                         ; 00444112
    ADD ESP,0x18                        ; 00444114
    POP EDI                             ; 00444117
    POP ESI                             ; 00444118
    POP EBX                             ; 00444119
    RET                                 ; 0044411a

