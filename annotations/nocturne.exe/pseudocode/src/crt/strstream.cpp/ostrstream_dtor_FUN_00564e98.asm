; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_00564e98(int *param_1,byte param_2)
;
;
; XREF[4]:
;   FUN_00564e3d at 00564e4a
;   FUN_00564e53 at 00564e62
;   support_codec.cpp_CCodec_finalizeBuffer_FUN_004392d0 at 00439334
;   support_codec.cpp_CCodec_processToBuffer_FUN_00439000 at 0043908c
;
; Referenced Globals:
;   undefined4 DAT_0059b490
;   void* PTR_crt_strstream.cpp_ostrstream_dtor_FUN_00564e98_005a46cc = 00564e98
;   void* PTR_FUN_005a46d4 = 00564e3d
;   void* PTR_FUN_005a46dc = 00564e53
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   FUN_0056b538
;   FUN_0056b5ad
;   FUN_0056b633
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564e98
        ;   Label: crt_strstream.cpp_ostrstream_dtor_FUN_00564e98
    MOV EBX,dword ptr [ESP + 0x8]       ; 00564e99
    TEST byte ptr [ESP + 0xc],0x4       ; 00564e9d
    JNZ 0x00564efc                      ; 00564ea2
        ;   XREF to: 00564efc (CONDITIONAL_JUMP)  ; LAB_00564efc
    MOV EAX,dword ptr [EBX]             ; 00564ea4
    MOV EDX,dword ptr [EAX + 0x4]       ; 00564ea6
    LEA EAX,[EBX + EDX*0x1]             ; 00564ea9
    MOV dword ptr [EAX + -0x4],EDX      ; 00564eac
    MOV dword ptr [EBX + 0x44],0x5a46cc ; 00564eaf | PTR_crt_strstream.cpp_ostrstream_dtor_FUN_00564e98_005a46cc
    PUSH 0x1                            ; 00564eb6
    MOV EAX,dword ptr [EBX]             ; 00564eb8
    MOV dword ptr [EBX + 0x4c],0x5a46d4 ; 00564eba | PTR_FUN_005a46d4
    ADD EBX,0x48                        ; 00564ec1
    MOV EAX,dword ptr [EAX + 0x4]       ; 00564ec4
    PUSH EBX                            ; 00564ec7
    MOV dword ptr [EBX + EAX*0x1 + -0x20],0x5a46dc ; 00564ec8 | PTR_FUN_005a46dc
    CALL FUN_0056b538                   ; 00564ed0
        ;   XREF to: 0056b538 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b538()
    ADD ESP,0x8                         ; 00564ed5
    PUSH 0x1                            ; 00564ed8
    LEA EBX,[EAX + -0x48]               ; 00564eda
    PUSH EBX                            ; 00564edd
    CALL FUN_0056b5ad                   ; 00564ede
        ;   XREF to: 0056b5ad (UNCONDITIONAL_CALL)  ; undefined FUN_0056b5ad()
    ADD ESP,0x8                         ; 00564ee3
    MOV DL,byte ptr [ESP + 0xc]         ; 00564ee6
    MOV EBX,EAX                         ; 00564eea
    TEST DL,0x1                         ; 00564eec
    JZ 0x00564f17                       ; 00564eef
        ;   XREF to: 00564f17 (CONDITIONAL_JUMP)  ; LAB_00564f17
    TEST byte ptr [ESP + 0xc],0x2       ; 00564ef1
        ;   Label: LAB_00564ef1
    JNZ 0x00564f2a                      ; 00564ef6
        ;   XREF to: 00564f2a (CONDITIONAL_JUMP)  ; LAB_00564f2a
    MOV EAX,EBX                         ; 00564ef8
    POP EBX                             ; 00564efa
    RET                                 ; 00564efb
    PUSH 0x59b490                       ; 00564efc | DAT_0059b490
        ;   Label: LAB_00564efc
    PUSH EBX                            ; 00564f01
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00564f02
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 00564f07
    PUSH EAX                            ; 00564f0a
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00564f0b
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 00564f10
        ;   Label: LAB_00564f10
    MOV EAX,EBX                         ; 00564f13
    POP EBX                             ; 00564f15
    RET                                 ; 00564f16
    PUSH 0x1                            ; 00564f17
        ;   Label: LAB_00564f17
    ADD EAX,0x54                        ; 00564f19
    PUSH EAX                            ; 00564f1c
    CALL FUN_0056b633                   ; 00564f1d
        ;   XREF to: 0056b633 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b633()
    ADD ESP,0x8                         ; 00564f22
    LEA EBX,[EAX + -0x54]               ; 00564f25
    JMP 0x00564ef1                      ; 00564f28
        ;   XREF to: 00564ef1 (UNCONDITIONAL_JUMP)  ; LAB_00564ef1
    PUSH EBX                            ; 00564f2a
        ;   Label: LAB_00564f2a
    CALL FUN_00564494                   ; 00564f2b
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    JMP 0x00564f10                      ; 00564f30
        ;   XREF to: 00564f10 (UNCONDITIONAL_JUMP)  ; LAB_00564f10

