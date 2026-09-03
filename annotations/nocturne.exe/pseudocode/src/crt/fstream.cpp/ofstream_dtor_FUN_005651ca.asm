; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ofstream * __cdecl crt_fstream_cpp_ofstream_dtor_FUN_005651ca(void *this_ptr,uint flags)
;
; Parameters:
; void *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00446810 at 00446dda
;   core_game.cpp_CGame_FUN_004a3b90 at 004a3fae
;   core_game.cpp_CGame_FUN_004a4170 at 004a45a5
;   crt_unknown.c_FUN_0056519c at 005651a9
;   crt_unknown.c_FUN_005651b2 at 005651c1
;   support_codec.cpp_CCodec_processFiles_FUN_004391b0 at 00439277
;
; Referenced Globals:
;   WatcomTypeInfo g_ofstreamTypeInfo_0059b4f0
;   void* PTR_crt_fstream.cpp_ofstream_dtor_FUN_005651ca_005a4824 = 005651ca
;   void* PTR_crt_unknown.c_FUN_0056519c_005a482c = 0056519c
;   void* PTR_crt_unknown.c_FUN_005651b2_005a4834 = 005651b2
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_dtor_FUN_0056b810
;   crt_iostream.cpp_ios_dtor_FUN_0056b633
;   crt_iostream.cpp_ostream_dtor_FUN_0056b538
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005651ca
        ;   Label: crt_fstream.cpp_ofstream_dtor_FUN_005651ca
    MOV EBX,dword ptr [ESP + 0x8]       ; 005651cb
    TEST byte ptr [ESP + 0xc],0x4       ; 005651cf
    JNZ 0x0056522e                      ; 005651d4
        ;   XREF to: 0056522e (CONDITIONAL_JUMP)  ; LAB_0056522e
    MOV EAX,dword ptr [EBX]             ; 005651d6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005651d8
    LEA EAX,[EBX + EDX*0x1]             ; 005651db
    MOV dword ptr [EAX + -0x4],EDX      ; 005651de
    MOV dword ptr [EBX + 0x40],0x5a4824 ; 005651e1 | PTR_crt_fstream.cpp_ofstream_dtor_FUN_005651ca_005a4824
    PUSH 0x1                            ; 005651e8
    MOV EAX,dword ptr [EBX]             ; 005651ea
    MOV dword ptr [EBX + 0x48],0x5a482c ; 005651ec | PTR_crt_unknown.c_FUN_0056519c_005a482c
    ADD EBX,0x44                        ; 005651f3
    MOV EAX,dword ptr [EAX + 0x4]       ; 005651f6
    PUSH EBX                            ; 005651f9
    MOV dword ptr [EBX + EAX*0x1 + -0x1c],0x5a4834 ; 005651fa | PTR_crt_unknown.c_FUN_005651b2_005a4834
    CALL crt_iostream.cpp_ostream_dtor_FUN_0056b538 ; 00565202
        ;   XREF to: 0056b538 (UNCONDITIONAL_CALL)  ; _ostream * crt_iostream.cpp_ostream_dtor_FUN_0056b538(_ostream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00565207
    PUSH 0x1                            ; 0056520a
    LEA EBX,[EAX + -0x44]               ; 0056520c
    PUSH EBX                            ; 0056520f
    CALL crt_fstream.cpp_fstreambase_dtor_FUN_0056b810 ; 00565210
        ;   XREF to: 0056b810 (UNCONDITIONAL_CALL)  ; fstreambase * crt_fstream.cpp_fstreambase_dtor_FUN_0056b810(fstreambase * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00565215
    MOV DL,byte ptr [ESP + 0xc]         ; 00565218
    MOV EBX,EAX                         ; 0056521c
    TEST DL,0x1                         ; 0056521e
    JZ 0x00565249                       ; 00565221
        ;   XREF to: 00565249 (CONDITIONAL_JUMP)  ; LAB_00565249
    TEST byte ptr [ESP + 0xc],0x2       ; 00565223
        ;   Label: LAB_00565223
    JNZ 0x0056525c                      ; 00565228
        ;   XREF to: 0056525c (CONDITIONAL_JUMP)  ; LAB_0056525c
    MOV EAX,EBX                         ; 0056522a
    POP EBX                             ; 0056522c
    RET                                 ; 0056522d
    PUSH 0x59b4f0                       ; 0056522e | g_ofstreamTypeInfo_0059b4f0
        ;   Label: LAB_0056522e
    PUSH EBX                            ; 00565233
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00565234
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00565239
    PUSH EAX                            ; 0056523c
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0056523d
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00565242
        ;   Label: LAB_00565242
    MOV EAX,EBX                         ; 00565245
    POP EBX                             ; 00565247
    RET                                 ; 00565248
    PUSH 0x1                            ; 00565249
        ;   Label: LAB_00565249
    ADD EAX,0x50                        ; 0056524b
    PUSH EAX                            ; 0056524e
    CALL crt_iostream.cpp_ios_dtor_FUN_0056b633 ; 0056524f
        ;   XREF to: 0056b633 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_dtor_FUN_0056b633(ios * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00565254
    LEA EBX,[EAX + -0x50]               ; 00565257
    JMP 0x00565223                      ; 0056525a
        ;   XREF to: 00565223 (UNCONDITIONAL_JUMP)  ; LAB_00565223
    PUSH EBX                            ; 0056525c
        ;   Label: LAB_0056525c
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0056525d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    JMP 0x00565242                      ; 00565262
        ;   XREF to: 00565242 (UNCONDITIONAL_JUMP)  ; LAB_00565242

