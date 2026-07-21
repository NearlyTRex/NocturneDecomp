; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl crt_fstream_cpp_ifstream_dtor_FUN_00565264(int *param_1,byte param_2)
;
;
; XREF[5]:
;   FUN_004a3b90 at 004a3fbf
;   FUN_004a4170 at 004a45b7
;   FUN_005650f0 at 005650fd
;   FUN_00565106 at 00565115
;   support_codec.cpp_CCodec_processFiles_FUN_004391b0 at 00439288
;
; Referenced Globals:
;   undefined4 DAT_0059b4d0
;   void* PTR_crt_fstream.cpp_ifstream_dtor_FUN_00565264_005a47b8 = 00565264
;   void* PTR_FUN_005a47c0 = 005650f0
;   void* PTR_FUN_005a47c8 = 00565106
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   FUN_0056b633
;   FUN_0056b6e8
;   FUN_0056b810
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565264
        ;   Label: crt_fstream.cpp_ifstream_dtor_FUN_00565264
    MOV EBX,dword ptr [ESP + 0x8]       ; 00565265
    TEST byte ptr [ESP + 0xc],0x4       ; 00565269
    JNZ 0x005652c8                      ; 0056526e
        ;   XREF to: 005652c8 (CONDITIONAL_JUMP)  ; LAB_005652c8
    MOV EAX,dword ptr [EBX]             ; 00565270
    MOV EDX,dword ptr [EAX + 0x4]       ; 00565272
    LEA EAX,[EBX + EDX*0x1]             ; 00565275
    MOV dword ptr [EAX + -0x4],EDX      ; 00565278
    MOV dword ptr [EBX + 0x40],0x5a47b8 ; 0056527b | PTR_crt_fstream.cpp_ifstream_dtor_FUN_00565264_005a47b8
    PUSH 0x1                            ; 00565282
    MOV EAX,dword ptr [EBX]             ; 00565284
    MOV dword ptr [EBX + 0x4c],0x5a47c0 ; 00565286 | PTR_FUN_005a47c0
    ADD EBX,0x44                        ; 0056528d
    MOV EAX,dword ptr [EAX + 0x4]       ; 00565290
    PUSH EBX                            ; 00565293
    MOV dword ptr [EBX + EAX*0x1 + -0x1c],0x5a47c8 ; 00565294 | PTR_FUN_005a47c8
    CALL FUN_0056b6e8                   ; 0056529c
        ;   XREF to: 0056b6e8 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b6e8()
    ADD ESP,0x8                         ; 005652a1
    PUSH 0x1                            ; 005652a4
    LEA EBX,[EAX + -0x44]               ; 005652a6
    PUSH EBX                            ; 005652a9
    CALL FUN_0056b810                   ; 005652aa
        ;   XREF to: 0056b810 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b810()
    ADD ESP,0x8                         ; 005652af
    MOV DL,byte ptr [ESP + 0xc]         ; 005652b2
    MOV EBX,EAX                         ; 005652b6
    TEST DL,0x1                         ; 005652b8
    JZ 0x005652e3                       ; 005652bb
        ;   XREF to: 005652e3 (CONDITIONAL_JUMP)  ; LAB_005652e3
    TEST byte ptr [ESP + 0xc],0x2       ; 005652bd
        ;   Label: LAB_005652bd
    JNZ 0x005652f6                      ; 005652c2
        ;   XREF to: 005652f6 (CONDITIONAL_JUMP)  ; LAB_005652f6
    MOV EAX,EBX                         ; 005652c4
    POP EBX                             ; 005652c6
    RET                                 ; 005652c7
    PUSH 0x59b4d0                       ; 005652c8 | DAT_0059b4d0
        ;   Label: LAB_005652c8
    PUSH EBX                            ; 005652cd
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 005652ce
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 005652d3
    PUSH EAX                            ; 005652d6
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 005652d7
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 005652dc
        ;   Label: LAB_005652dc
    MOV EAX,EBX                         ; 005652df
    POP EBX                             ; 005652e1
    RET                                 ; 005652e2
    PUSH 0x1                            ; 005652e3
        ;   Label: LAB_005652e3
    ADD EAX,0x54                        ; 005652e5
    PUSH EAX                            ; 005652e8
    CALL FUN_0056b633                   ; 005652e9
        ;   XREF to: 0056b633 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b633()
    ADD ESP,0x8                         ; 005652ee
    LEA EBX,[EAX + -0x54]               ; 005652f1
    JMP 0x005652bd                      ; 005652f4
        ;   XREF to: 005652bd (UNCONDITIONAL_JUMP)  ; LAB_005652bd
    PUSH EBX                            ; 005652f6
        ;   Label: LAB_005652f6
    CALL FUN_00564494                   ; 005652f7
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    JMP 0x005652dc                      ; 005652fc
        ;   XREF to: 005652dc (UNCONDITIONAL_JUMP)  ; LAB_005652dc

