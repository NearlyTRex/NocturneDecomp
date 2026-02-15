; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ifstream * __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0(ifstream *this_ptr,int c1)
;
; Parameters:
; ifstream *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   c1
;
; XREF[2]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e152c
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e0f8e
;
; Referenced Globals:
;   WatcomVirtualBaseDescriptor g_IFStream_LayoutInfo
;   WatcomVirtualBaseDescriptor g_IFStream_IStreamSubobjectLayout
;   void* g_IFStream_FStreamBaseDestructor = 005ff856
;   void* g_IFStream_IStreamDestructor = 005ff6e2
;   void* g_IFStream_IOSDestructor = 005ff6f8
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_ctor_FUN_0060658f
;   crt_iostream.cpp_ios_ctor_FUN_006061fc
;   crt_iostream.cpp_istream_ctor_FUN_00606376
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff8f0
        ;   Label: crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0
    TEST byte ptr [ESP + 0x8],0x1       ; 005ff8f4
    JZ 0x005ff93e                       ; 005ff8f9
        ;   XREF to: 005ff93e (CONDITIONAL_JUMP)  ; LAB_005ff93e
    PUSH 0x1                            ; 005ff8fb
        ;   Label: LAB_005ff8fb
    PUSH EAX                            ; 005ff8fd
    CALL crt_fstream.cpp_fstreambase_ctor_FUN_0060658f ; 005ff8fe
        ;   XREF to: 0060658f (UNCONDITIONAL_CALL)  ; fstreambase * crt_fstream.cpp_fstreambase_ctor_FUN_0060658f(fstreambase * this_ptr, uint c1)
    ADD ESP,0x8                         ; 005ff903
    PUSH 0x1                            ; 005ff906
    ADD EAX,0x44                        ; 005ff908
    PUSH EAX                            ; 005ff90b
    CALL crt_iostream.cpp_istream_ctor_FUN_00606376 ; 005ff90c
        ;   XREF to: 00606376 (UNCONDITIONAL_CALL)  ; istream * crt_iostream.cpp_istream_ctor_FUN_00606376(istream * this_ptr, uint c1)
    SUB EAX,0x44                        ; 005ff911
    MOV EDX,dword ptr [EAX]             ; 005ff914
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff916
    LEA ECX,[EAX + EDX*0x1]             ; 005ff919
    MOV dword ptr [ECX + -0x4],EDX      ; 005ff91c
    MOV dword ptr [EAX + 0x40],0x665c68 ; 005ff91f | g_IFStream_FStreamBaseDestructor
    MOV EDX,dword ptr [EAX]             ; 005ff926
    MOV dword ptr [EAX + 0x4c],0x665c70 ; 005ff928 | g_IFStream_IStreamDestructor
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff92f
    ADD ESP,0x8                         ; 005ff932
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665c78 ; 005ff935 | g_IFStream_IOSDestructor
    RET                                 ; 005ff93d
    MOV dword ptr [EAX],0x665c54        ; 005ff93e | g_IFStream_LayoutInfo
        ;   Label: LAB_005ff93e
    ADD EAX,0x54                        ; 005ff944
    PUSH EAX                            ; 005ff947
    MOV dword ptr [EAX + -0x10],0x665c5c ; 005ff948 | g_IFStream_IStreamSubobjectLayout
    CALL crt_iostream.cpp_ios_ctor_FUN_006061fc ; 005ff94f
        ;   XREF to: 006061fc (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
    ADD ESP,0x4                         ; 005ff954
    SUB EAX,0x54                        ; 005ff957
    JMP 0x005ff8fb                      ; 005ff95a
        ;   XREF to: 005ff8fb (UNCONDITIONAL_JUMP)  ; LAB_005ff8fb

