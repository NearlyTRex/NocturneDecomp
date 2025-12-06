; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void support_codec.cpp_CLZWDictionary_free_FUN_0043ee10(CLZWDictionary * this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0 at 0043edf6
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_00618b0d
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ee10
        ;   Label: support_codec.cpp_CLZWDictionary_free_FUN_0043ee10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043ee11
    MOV EDX,dword ptr [EBX + 0x10]      ; 0043ee15
    TEST EDX,EDX                        ; 0043ee18
    JNZ 0x0043ee2a                      ; 0043ee1a | LAB_0043ee2a
        ;   XREF to: 0043ee2a (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xc],0x0       ; 0043ee1c
    MOV EAX,dword ptr [EBX + 0xc]       ; 0043ee23
    MOV dword ptr [EBX],EAX             ; 0043ee26
    POP EBX                             ; 0043ee28
    RET                                 ; 0043ee29
    PUSH 0x2b5                          ; 0043ee2a
        ;   Label: LAB_0043ee2a
    PUSH 0x618b0d                       ; 0043ee2f | = "..\\support\\codec.cpp" | s_support_codec_cpp_00618b0d = ..\support\codec.cpp
    PUSH EDX                            ; 0043ee34
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0043ee35 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0043ee3a
    MOV dword ptr [EBX + 0x10],0x0      ; 0043ee3d
    MOV dword ptr [EBX + 0xc],0x0       ; 0043ee44
    MOV EAX,dword ptr [EBX + 0xc]       ; 0043ee4b
    MOV dword ptr [EBX],EAX             ; 0043ee4e
    POP EBX                             ; 0043ee50
    RET                                 ; 0043ee51

