; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _ostrstream * __cdecl crt_strstream_cpp_ostrstream_ctor_FUN_005ff384(void *this_ptr,int flags,char *buffer,int buffer_size,int mode)
;
; Parameters:
; void *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   flags
; char *           Stack[0xc]:4   buffer
; int              Stack[0x10]:4   buffer_size
; int              Stack[0x14]:4   mode
;
; XREF[2]:
;   support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50 at 0043ed74
;   support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80 at 0043eaac
;
; Referenced Globals:
;   WatcomVirtualBaseDescriptor WatcomVirtualBaseDescriptor_00665b68
;   WatcomThunkedDestructor WatcomThunkedDestructor_00665b70
;   void* PTR_FUN_00665b7c = 005ff48a
;   void* PTR_LAB_00665b84 = 005ff42f
;   void* PTR_FUN_00665b8c = 005ff445
;
; Called Functions:
;   crt_iostream.cpp_ios_ctor_FUN_006061fc
;   crt_iostream.cpp_ostream_ctor_FUN_006061a2
;   crt_strstream.cpp_strstreambase_ctor_FUN_006060fe
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ff384
        ;   Label: crt_strstream.cpp_ostrstream_ctor_FUN_005ff384
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ff385
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ff389
    TEST byte ptr [ESP + 0xc],0x1       ; 005ff38d
    JZ 0x005ff406                       ; 005ff392
        ;   XREF to: 005ff406 (CONDITIONAL_JUMP)  ; LAB_005ff406
    TEST EBX,EBX                        ; 005ff394
        ;   Label: LAB_005ff394
    JZ 0x005ff427                       ; 005ff396
        ;   XREF to: 005ff427 (CONDITIONAL_JUMP)  ; LAB_005ff427
    TEST byte ptr [ESP + 0x18],0xc      ; 005ff39c
    JZ 0x005ff42b                       ; 005ff3a1
        ;   XREF to: 005ff42b (CONDITIONAL_JUMP)  ; LAB_005ff42b
    PUSH EDI                            ; 005ff3a7
    MOV EDI,EBX                         ; 005ff3a8
    SUB ECX,ECX                         ; 005ff3aa
    DEC ECX                             ; 005ff3ac
    XOR EAX,EAX                         ; 005ff3ad
    SCASB.REPNE ES:EDI                  ; 005ff3af
    NOT ECX                             ; 005ff3b1
    DEC ECX                             ; 005ff3b3
    MOV EAX,ECX                         ; 005ff3b4
    POP EDI                             ; 005ff3b6
    ADD EAX,EBX                         ; 005ff3b7
        ;   Label: LAB_005ff3b7
    PUSH EAX                            ; 005ff3b9
        ;   Label: LAB_005ff3b9
    MOV ECX,dword ptr [ESP + 0x18]      ; 005ff3ba
    PUSH ECX                            ; 005ff3be
    PUSH EBX                            ; 005ff3bf
    PUSH 0x1                            ; 005ff3c0
    PUSH EDX                            ; 005ff3c2
    CALL crt_strstream.cpp_strstreambase_ctor_FUN_006060fe ; 005ff3c3
        ;   XREF to: 006060fe (UNCONDITIONAL_CALL)  ; strstreambase * crt_strstream.cpp_strstreambase_ctor_FUN_006060fe(strstreambase * this_ptr, int ctor_flags, char * buffer, int size, ...)
    ADD ESP,0x14                        ; 005ff3c8
    PUSH 0x1                            ; 005ff3cb
    ADD EAX,0x48                        ; 005ff3cd
    PUSH EAX                            ; 005ff3d0
    CALL crt_iostream.cpp_ostream_ctor_FUN_006061a2 ; 005ff3d1
        ;   XREF to: 006061a2 (UNCONDITIONAL_CALL)  ; _ostream * crt_iostream.cpp_ostream_ctor_FUN_006061a2(_ostream * this_ptr, uint c1)
    LEA EDX,[EAX + -0x48]               ; 005ff3d6
    MOV EAX,dword ptr [EDX]             ; 005ff3d9
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff3db
    LEA ECX,[EDX + EAX*0x1]             ; 005ff3de
    MOV dword ptr [ECX + -0x4],EAX      ; 005ff3e1
    MOV dword ptr [EDX + 0x44],0x665b7c ; 005ff3e4 | PTR_FUN_00665b7c
    MOV EAX,dword ptr [EDX]             ; 005ff3eb
    MOV dword ptr [EDX + 0x4c],0x665b84 ; 005ff3ed | PTR_LAB_00665b84
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff3f4
    ADD ESP,0x8                         ; 005ff3f7
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665b8c ; 005ff3fa | PTR_FUN_00665b8c
    MOV EAX,EDX                         ; 005ff402
    POP EBX                             ; 005ff404
    RET                                 ; 005ff405
    MOV dword ptr [EDX],0x665b68        ; 005ff406 | WatcomVirtualBaseDescriptor_00665b68
        ;   Label: LAB_005ff406
    ADD EDX,0x54                        ; 005ff40c
    PUSH EDX                            ; 005ff40f
    MOV dword ptr [EDX + -0xc],0x665b70 ; 005ff410 | WatcomThunkedDestructor_00665b70
    CALL crt_iostream.cpp_ios_ctor_FUN_006061fc ; 005ff417
        ;   XREF to: 006061fc (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
    ADD ESP,0x4                         ; 005ff41c
    LEA EDX,[EAX + -0x54]               ; 005ff41f
    JMP 0x005ff394                      ; 005ff422
        ;   XREF to: 005ff394 (UNCONDITIONAL_JUMP)  ; LAB_005ff394
    XOR EAX,EAX                         ; 005ff427
        ;   Label: LAB_005ff427
    JMP 0x005ff3b9                      ; 005ff429
        ;   XREF to: 005ff3b9 (UNCONDITIONAL_JUMP)  ; LAB_005ff3b9
    XOR EAX,EAX                         ; 005ff42b
        ;   Label: LAB_005ff42b
    JMP 0x005ff3b7                      ; 005ff42d
        ;   XREF to: 005ff3b7 (UNCONDITIONAL_JUMP)  ; LAB_005ff3b7

