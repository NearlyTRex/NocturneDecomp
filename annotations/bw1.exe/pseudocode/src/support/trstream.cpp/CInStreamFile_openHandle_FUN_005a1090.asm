; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_CInStreamFile_openHandle_FUN_005a1090(CInStreamFile *this_ptr,int param_2,int param_3,int param_4)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005f88d3
;   TerminatedCString s_Hey_we_re_using_windows_005f88eb
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fseek_FUN_005c170c
;   support_trstream.cpp_CInStreamFile_allocBuffer_FUN_005a0e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1090
        ;   Label: support_trstream.cpp_CInStreamFile_openHandle_FUN_005a1090
    PUSH ESI                            ; 005a1091
    PUSH EDI                            ; 005a1092
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a1093
    MOV EDX,0x5f88d3                    ; 005a1097 | = "..\\support\\trstream.cpp"
    MOV ECX,0x714                       ; 005a109c
    PUSH 0x5f88eb                       ; 005a10a1 | = "Hey, we're using windows handles for ..."
    MOV dword ptr [0x01d1d400],EDX      ; 005a10a6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005a10ac | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005a10b2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005a10b7
    MOV EAX,dword ptr [EBX]             ; 005a10ba
    PUSH EBX                            ; 005a10bc
    CALL dword ptr [EAX + 0x24]         ; 005a10bd
    ADD ESP,0x4                         ; 005a10c0
    MOV dword ptr [EBX + 0x10],0x0      ; 005a10c3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a10ca
    MOV dword ptr [EBX + 0x4],EAX       ; 005a10ce
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a10d1
    PUSH 0x0                            ; 005a10d5
    MOV dword ptr [EBX + 0x8],EAX       ; 005a10d7
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a10da
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a10de
    MOV dword ptr [EBX + 0xc],EAX       ; 005a10e1
    ADD EAX,ESI                         ; 005a10e4
    PUSH EAX                            ; 005a10e6
    MOV EDI,dword ptr [EBX + 0x4]       ; 005a10e7
    PUSH EDI                            ; 005a10ea
    CALL crt_stdio.c_fseek_FUN_005c170c ; 005a10eb
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005c170c()
    ADD ESP,0xc                         ; 005a10f0
    MOV EAX,dword ptr [EBX]             ; 005a10f3
    PUSH EBX                            ; 005a10f5
    CALL dword ptr [EAX + 0x1c]         ; 005a10f6
    ADD ESP,0x4                         ; 005a10f9
    TEST EAX,EAX                        ; 005a10fc
    JZ 0x005a1112                       ; 005a10fe
        ;   XREF to: 005a1112 (CONDITIONAL_JUMP)  ; LAB_005a1112
    PUSH EBX                            ; 005a1100
    CALL support_trstream.cpp_CInStreamFile_allocBuffer_FUN_005a0e10 ; 005a1101
        ;   XREF to: 005a0e10 (UNCONDITIONAL_CALL)  ; void support_trstream.cpp_CInStreamFile_allocBuffer_FUN_005a0e10(CInStreamFile * this_ptr)
    MOV EAX,0x1                         ; 005a1106
    ADD ESP,0x4                         ; 005a110b
    POP EDI                             ; 005a110e
    POP ESI                             ; 005a110f
    POP EBX                             ; 005a1110
    RET                                 ; 005a1111
    PUSH EBX                            ; 005a1112
        ;   Label: LAB_005a1112
    MOV EAX,dword ptr [EBX]             ; 005a1113
    CALL dword ptr [EAX + 0x24]         ; 005a1115
    ADD ESP,0x4                         ; 005a1118
    XOR EAX,EAX                         ; 005a111b
    POP EDI                             ; 005a111d
    POP ESI                             ; 005a111e
    POP EBX                             ; 005a111f
    RET                                 ; 005a1120

