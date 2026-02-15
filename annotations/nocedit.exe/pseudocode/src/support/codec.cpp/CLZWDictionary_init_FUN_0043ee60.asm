; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_0043ee60(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits,int normal_code_width,int fallback_code_width)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   new_dict_size
; int              Stack[0xc]:4   new_num_bits
; int              Stack[0x10]:4   normal_code_width
; int              Stack[0x14]:4   fallback_code_width
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_init_FUN_0043f320 at 0043f335
;   support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0 at 0043f4e5
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_00618b22
;   TerminatedCString s_support_codec_cpp_00618b37
;   TerminatedCString s_CLZWDictionary_init_out__00618b4c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;   support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ee60
        ;   Label: support_codec.cpp_CLZWDictionary_init_FUN_0043ee60
    PUSH ESI                            ; 0043ee61
    PUSH EBP                            ; 0043ee62
    MOV EBX,dword ptr [ESP + 0x10]      ; 0043ee63
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043ee67
    CMP EAX,dword ptr [EBX]             ; 0043ee6b
    JNZ 0x0043ee89                      ; 0043ee6d
        ;   XREF to: 0043ee89 (CONDITIONAL_JUMP)  ; LAB_0043ee89
    CMP dword ptr [EBX + 0x10],0x0      ; 0043ee6f
    JZ 0x0043ee89                       ; 0043ee73
        ;   XREF to: 0043ee89 (CONDITIONAL_JUMP)  ; LAB_0043ee89
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043ee75
        ;   Label: LAB_0043ee75
    PUSH EBX                            ; 0043ee79
    MOV dword ptr [EBX + 0x4],EAX       ; 0043ee7a
    CALL support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0 ; 0043ee7d
        ;   XREF to: 0043eef0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 0043ee82
    POP EBP                             ; 0043ee85
    POP ESI                             ; 0043ee86
    POP EBX                             ; 0043ee87
    RET                                 ; 0043ee88
    PUSH 0x2c6                          ; 0043ee89
        ;   Label: LAB_0043ee89
    MOV dword ptr [EBX],EAX             ; 0043ee8e
    PUSH 0x618b22                       ; 0043ee90 | = "..\\support\\codec.cpp"
    SHL EAX,0x4                         ; 0043ee95
    PUSH EAX                            ; 0043ee98
    MOV ESI,dword ptr [EBX + 0x10]      ; 0043ee99
    PUSH ESI                            ; 0043ee9c
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0043ee9d
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0043eea2
    MOV dword ptr [EBX + 0x10],EAX      ; 0043eea5
    TEST EAX,EAX                        ; 0043eea8
    JNZ 0x0043ee75                      ; 0043eeaa
        ;   XREF to: 0043ee75 (CONDITIONAL_JUMP)  ; LAB_0043ee75
    MOV EBP,0x618b37                    ; 0043eeac | = "..\\support\\codec.cpp"
    MOV EAX,0x2c7                       ; 0043eeb1
    PUSH 0x618b4c                       ; 0043eeb6 | = "CLZWDictionary::init - out of memory"
    MOV dword ptr [0x02f0ca48],EBP      ; 0043eebb | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0043eec1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043eec6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043eecb
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043eece
    PUSH EBX                            ; 0043eed2
    MOV dword ptr [EBX + 0x4],EAX       ; 0043eed3
    CALL support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0 ; 0043eed6
        ;   XREF to: 0043eef0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 0043eedb
    POP EBP                             ; 0043eede
    POP ESI                             ; 0043eedf
    POP EBX                             ; 0043eee0
    RET                                 ; 0043eee1

