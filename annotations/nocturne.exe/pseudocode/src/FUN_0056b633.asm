; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056b633(int param_1,byte param_2)
;
;
; XREF[8]:
;   FUN_0056b538 at 0056b598
;   FUN_0056b5ad at 0056b61e
;   FUN_0056b6e8 at 0056b748
;   FUN_0056b810 at 0056b881
;   crt_fstream.cpp_ifstream_dtor_FUN_00565264 at 005652e9
;   crt_fstream.cpp_ofstream_dtor_FUN_005651ca at 0056524f
;   crt_strstream.cpp_istrstream_dtor_FUN_00564fd8 at 0056505d
;   crt_strstream.cpp_ostrstream_dtor_FUN_00564e98 at 00564f1d
;
; Referenced Globals:
;   void* PTR_FUN_005a4948 = 0056b633
;   WatcomTypeInfo g_iosTypeInfo_005a49a0
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   FUN_00570410
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b633
        ;   Label: FUN_0056b633
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b634
    TEST byte ptr [ESP + 0xc],0x4       ; 0056b638
    JNZ 0x0056b65a                      ; 0056b63d
        ;   XREF to: 0056b65a (CONDITIONAL_JUMP)  ; LAB_0056b65a
    PUSH EBX                            ; 0056b63f
    MOV dword ptr [EBX + 0x28],0x5a4948 ; 0056b640 | PTR_FUN_005a4948
    CALL FUN_00570410                   ; 0056b647
        ;   XREF to: 00570410 (UNCONDITIONAL_CALL)  ; undefined FUN_00570410()
    ADD ESP,0x4                         ; 0056b64c
    TEST byte ptr [ESP + 0xc],0x2       ; 0056b64f
    JNZ 0x0056b675                      ; 0056b654
        ;   XREF to: 0056b675 (CONDITIONAL_JUMP)  ; LAB_0056b675
    MOV EAX,EBX                         ; 0056b656
    POP EBX                             ; 0056b658
    RET                                 ; 0056b659
    PUSH 0x5a49a0                       ; 0056b65a | g_iosTypeInfo_005a49a0
        ;   Label: LAB_0056b65a
    PUSH EBX                            ; 0056b65f
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0056b660
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 0056b665
    PUSH EAX                            ; 0056b668
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0056b669
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0056b66e
        ;   Label: LAB_0056b66e
    MOV EAX,EBX                         ; 0056b671
    POP EBX                             ; 0056b673
    RET                                 ; 0056b674
    PUSH EBX                            ; 0056b675
        ;   Label: LAB_0056b675
    CALL crt_unknown.c_FUN_00564494     ; 0056b676
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    JMP 0x0056b66e                      ; 0056b67b
        ;   XREF to: 0056b66e (UNCONDITIONAL_JUMP)  ; LAB_0056b66e

