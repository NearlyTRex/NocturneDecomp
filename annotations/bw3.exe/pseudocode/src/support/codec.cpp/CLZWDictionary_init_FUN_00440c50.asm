; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_00440c50(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   new_dict_size
; int              Stack[0xc]:4   new_num_bits
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_init_FUN_00441140 at 00441155
;   support_codec.cpp_CLZWDecompress_init_FUN_00441350 at 00441365
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005b92c8
;   TerminatedCString s_CLZWDictionary_init_out_005b92dd
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_realloc_FUN_005a3e50
;   support_codec.cpp_CLZWDictionary_initTable_FUN_00440cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440c50
        ;   Label: support_codec.cpp_CLZWDictionary_init_FUN_00440c50
    PUSH ESI                            ; 00440c51
    PUSH EBP                            ; 00440c52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00440c53
    MOV EAX,dword ptr [ESP + 0x14]      ; 00440c57
    CMP EAX,dword ptr [EBX]             ; 00440c5b
    JNZ 0x00440c79                      ; 00440c5d
        ;   XREF to: 00440c79 (CONDITIONAL_JUMP)  ; LAB_00440c79
    CMP dword ptr [EBX + 0x10],0x0      ; 00440c5f
    JZ 0x00440c79                       ; 00440c63
        ;   XREF to: 00440c79 (CONDITIONAL_JUMP)  ; LAB_00440c79
    MOV EAX,dword ptr [ESP + 0x18]      ; 00440c65
        ;   Label: LAB_00440c65
    PUSH EBX                            ; 00440c69
    MOV dword ptr [EBX + 0x4],EAX       ; 00440c6a
    CALL support_codec.cpp_CLZWDictionary_initTable_FUN_00440cd0 ; 00440c6d
        ;   XREF to: 00440cd0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_initTable_FUN_00440cd0(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 00440c72
    POP EBP                             ; 00440c75
    POP ESI                             ; 00440c76
    POP EBX                             ; 00440c77
    RET                                 ; 00440c78
    MOV dword ptr [EBX],EAX             ; 00440c79
        ;   Label: LAB_00440c79
    SHL EAX,0x4                         ; 00440c7b
    PUSH EAX                            ; 00440c7e
    MOV ESI,dword ptr [EBX + 0x10]      ; 00440c7f
    PUSH ESI                            ; 00440c82
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00440c83
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00440c88
    MOV dword ptr [EBX + 0x10],EAX      ; 00440c8b
    TEST EAX,EAX                        ; 00440c8e
    JNZ 0x00440c65                      ; 00440c90
        ;   XREF to: 00440c65 (CONDITIONAL_JUMP)  ; LAB_00440c65
    MOV EBP,0x5b92c8                    ; 00440c92 | = "..\\support\\codec.cpp"
    MOV EAX,0x348                       ; 00440c97
    PUSH 0x5b92dd                       ; 00440c9c | = "CLZWDictionary::init - out of memory"
    MOV dword ptr [0x01d71de0],EBP      ; 00440ca1 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00440ca7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00440cac
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00440cb1
    MOV EAX,dword ptr [ESP + 0x18]      ; 00440cb4
    PUSH EBX                            ; 00440cb8
    MOV dword ptr [EBX + 0x4],EAX       ; 00440cb9
    CALL support_codec.cpp_CLZWDictionary_initTable_FUN_00440cd0 ; 00440cbc
        ;   XREF to: 00440cd0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_initTable_FUN_00440cd0(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 00440cc1
    POP EBP                             ; 00440cc4
    POP ESI                             ; 00440cc5
    POP EBX                             ; 00440cc6
    RET                                 ; 00440cc7

