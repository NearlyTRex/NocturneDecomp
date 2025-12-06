; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_codec.cpp_CLZWDictionary_findCode_FUN_0043ef50(CLZWDictionary * this_ptr, int search_code, int start_index)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   search_code
; int              Stack[0xc]:4   start_index
;
; XREF[1]:
;   support_codec.cpp_CLZWCompress_process_FUN_0043f360 at 0043f396
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ef50
        ;   Label: support_codec.cpp_CLZWDictionary_findCode_FUN_0043ef50
    MOV EBX,dword ptr [ESP + 0xc]       ; 0043ef51
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043ef55
    TEST EAX,EAX                        ; 0043ef59
    JL 0x0043ef88                       ; 0043ef5b | LAB_0043ef88
        ;   XREF to: 0043ef88 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043ef5d
    SHL EAX,0x4                         ; 0043ef61
    MOV ECX,dword ptr [ECX + 0x10]      ; 0043ef64
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8] ; 0043ef67
    TEST EAX,EAX                        ; 0043ef6b
    JL 0x0043ef81                       ; 0043ef6d | LAB_0043ef81
        ;   XREF to: 0043ef81 (CONDITIONAL_JUMP)
    MOV EDX,EAX                         ; 0043ef6f
        ;   Label: LAB_0043ef6f
    SHL EDX,0x4                         ; 0043ef71
    ADD EDX,ECX                         ; 0043ef74
    CMP EBX,dword ptr [EDX]             ; 0043ef76
    JZ 0x0043ef86                       ; 0043ef78 | LAB_0043ef86
        ;   XREF to: 0043ef86 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX + 0xc]       ; 0043ef7a
    TEST EAX,EAX                        ; 0043ef7d
    JGE 0x0043ef6f                      ; 0043ef7f | LAB_0043ef6f
        ;   XREF to: 0043ef6f (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0043ef81
        ;   Label: LAB_0043ef81
    POP EBX                             ; 0043ef86
        ;   Label: LAB_0043ef86
    RET                                 ; 0043ef87
    MOV EAX,EBX                         ; 0043ef88
        ;   Label: LAB_0043ef88
    POP EBX                             ; 0043ef8a
    RET                                 ; 0043ef8b

