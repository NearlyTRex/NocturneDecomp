; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_005ff95c(ofstream *this_ptr,int c1)
;
; Parameters:
; ofstream *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   c1
;
; XREF[2]:
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e153e
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e0f9f
;
; Referenced Globals:
;   WatcomVirtualBaseDescriptor g_OFStream_VirtualBaseLayout
;   WatcomVirtualBaseDescriptor g_OFStream_OStreamSubobjectLayout
;   void* g_OFStream_FStreamBaseDestructor = 005ff7bc
;   void* g_OFStream_OStream = 005ff78e
;   void* g_OFStream_IOS = 005ff7a4
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_ctor_FUN_0060658f
;   crt_iostream.cpp_ios_ctor_FUN_006061fc
;   crt_iostream.cpp_ostream_ctor_FUN_006061a2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff95c
        ;   Label: crt_fstream.cpp_ofstream_ctor_FUN_005ff95c
    TEST byte ptr [ESP + 0x8],0x1       ; 005ff960
    JZ 0x005ff9aa                       ; 005ff965
        ;   XREF to: 005ff9aa (CONDITIONAL_JUMP)  ; LAB_005ff9aa
    PUSH 0x1                            ; 005ff967
        ;   Label: LAB_005ff967
    PUSH EAX                            ; 005ff969
    CALL crt_fstream.cpp_fstreambase_ctor_FUN_0060658f ; 005ff96a
        ;   XREF to: 0060658f (UNCONDITIONAL_CALL)  ; fstreambase * crt_fstream.cpp_fstreambase_ctor_FUN_0060658f(fstreambase * this_ptr, uint c1)
    ADD ESP,0x8                         ; 005ff96f
    PUSH 0x1                            ; 005ff972
    ADD EAX,0x44                        ; 005ff974
    PUSH EAX                            ; 005ff977
    CALL crt_iostream.cpp_ostream_ctor_FUN_006061a2 ; 005ff978
        ;   XREF to: 006061a2 (UNCONDITIONAL_CALL)  ; ostream * crt_iostream.cpp_ostream_ctor_FUN_006061a2(ostream * this_ptr, uint c1)
    SUB EAX,0x44                        ; 005ff97d
    MOV EDX,dword ptr [EAX]             ; 005ff980
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff982
    LEA ECX,[EAX + EDX*0x1]             ; 005ff985
    MOV dword ptr [ECX + -0x4],EDX      ; 005ff988
    MOV dword ptr [EAX + 0x40],0x665cd4 ; 005ff98b | g_OFStream_FStreamBaseDestructor
    MOV EDX,dword ptr [EAX]             ; 005ff992
    MOV dword ptr [EAX + 0x48],0x665cdc ; 005ff994 | g_OFStream_OStream
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff99b
    ADD ESP,0x8                         ; 005ff99e
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665ce4 ; 005ff9a1 | g_OFStream_IOS
    RET                                 ; 005ff9a9
    MOV dword ptr [EAX],0x665cc0        ; 005ff9aa | g_OFStream_VirtualBaseLayout
        ;   Label: LAB_005ff9aa
    ADD EAX,0x50                        ; 005ff9b0
    PUSH EAX                            ; 005ff9b3
    MOV dword ptr [EAX + -0xc],0x665cc8 ; 005ff9b4 | g_OFStream_OStreamSubobjectLayout
    CALL crt_iostream.cpp_ios_ctor_FUN_006061fc ; 005ff9bb
        ;   XREF to: 006061fc (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
    ADD ESP,0x4                         ; 005ff9c0
    SUB EAX,0x50                        ; 005ff9c3
    JMP 0x005ff967                      ; 005ff9c6
        ;   XREF to: 005ff967 (UNCONDITIONAL_JUMP)  ; LAB_005ff967

