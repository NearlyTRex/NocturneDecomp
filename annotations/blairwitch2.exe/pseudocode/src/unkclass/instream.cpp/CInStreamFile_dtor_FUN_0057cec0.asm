; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile *this_ptr,uint flags)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[17]:
;   cockpit_ckptutil.c_FUN_0042c520 at 0042c5c2
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042c780 at 0042c8b1
;   core_game.cpp_FUN_004bb9b0 at 004bbdbc
;   core_game.cpp_FUN_004bbf70 at 004bc364
;   engine_2d.c_FUN_00401010 at 004010d1
;   engine_2d.c_FUN_00401590 at 004015e2
;   engine_2d.c_FUN_00402940 at 00402a7f
;   engine_font.cpp_FUN_004a7d00 at 004a7f60
;   engine_font.cpp_FUN_004a7fe2 at 004a830c
;   engine_font.cpp_FUN_004a859e at 004a8619
;   ... and 7 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CInStreamFileTypeInfo
;   undefined1* g_CInStreamFileVTable = 0057cec0
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0057b9a0.cpp_FUN_0057b9d0
;   unkaddr_0057b9a0.cpp_FUN_0057d180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057cec0
        ;   Label: unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057cec1
    TEST byte ptr [ESP + 0xc],0x4       ; 0057cec5
    JNZ 0x0057cef5                      ; 0057ceca
        ;   XREF to: 0057cef5 (CONDITIONAL_JUMP)  ; LAB_0057cef5
    PUSH EBX                            ; 0057cecc
    MOV dword ptr [EBX],0x5fd3e4        ; 0057cecd | g_CInStreamFileVTable
    CALL unkaddr_0057b9a0.cpp_FUN_0057d180 ; 0057ced3
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057d180()
    ADD ESP,0x4                         ; 0057ced8
    PUSH 0x1                            ; 0057cedb
    PUSH EBX                            ; 0057cedd
    CALL unkaddr_0057b9a0.cpp_FUN_0057b9d0 ; 0057cede
        ;   XREF to: 0057b9d0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057b9d0()
    ADD ESP,0x8                         ; 0057cee3
    MOV DL,byte ptr [ESP + 0xc]         ; 0057cee6
    MOV EBX,EAX                         ; 0057ceea
    TEST DL,0x2                         ; 0057ceec
    JNZ 0x0057cf10                      ; 0057ceef
        ;   XREF to: 0057cf10 (CONDITIONAL_JUMP)  ; LAB_0057cf10
    MOV EAX,EBX                         ; 0057cef1
    POP EBX                             ; 0057cef3
    RET                                 ; 0057cef4
    PUSH 0x5f2120                       ; 0057cef5 | g_CInStreamFileTypeInfo
        ;   Label: LAB_0057cef5
    PUSH EBX                            ; 0057cefa
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0057cefb
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0057cf00
    PUSH EAX                            ; 0057cf03
    CALL crt_unknown.c_FUN_005b7fce     ; 0057cf04
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0057cf09
    MOV EAX,EBX                         ; 0057cf0c
    POP EBX                             ; 0057cf0e
    RET                                 ; 0057cf0f
    PUSH EAX                            ; 0057cf10
        ;   Label: LAB_0057cf10
    CALL crt_unknown.c_FUN_005b7fdc     ; 0057cf11
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0057cf16
    MOV EAX,EBX                         ; 0057cf19
    POP EBX                             ; 0057cf1b
    RET                                 ; 0057cf1c

