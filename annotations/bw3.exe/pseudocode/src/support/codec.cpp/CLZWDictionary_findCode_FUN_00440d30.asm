; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CLZWDictionary_findCode_FUN_00440d30(CLZWDictionary *this_ptr,int search_code,int start_index)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   search_code
; int              Stack[0xc]:4   start_index
;
; XREF[1]:
;   support_codec.cpp_FUN_00441190 at 004411cb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440d30
        ;   Label: support_codec.cpp_CLZWDictionary_findCode_FUN_00440d30
    MOV EBX,dword ptr [ESP + 0xc]       ; 00440d31
    MOV EAX,dword ptr [ESP + 0x10]      ; 00440d35
    TEST EAX,EAX                        ; 00440d39
    JL 0x00440d68                       ; 00440d3b
        ;   XREF to: 00440d68 (CONDITIONAL_JUMP)  ; LAB_00440d68
    MOV ECX,dword ptr [ESP + 0x8]       ; 00440d3d
    SHL EAX,0x4                         ; 00440d41
    MOV ECX,dword ptr [ECX + 0x10]      ; 00440d44
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8] ; 00440d47
    TEST EAX,EAX                        ; 00440d4b
    JL 0x00440d61                       ; 00440d4d
        ;   XREF to: 00440d61 (CONDITIONAL_JUMP)  ; LAB_00440d61
    MOV EDX,EAX                         ; 00440d4f
        ;   Label: LAB_00440d4f
    SHL EDX,0x4                         ; 00440d51
    ADD EDX,ECX                         ; 00440d54
    CMP EBX,dword ptr [EDX]             ; 00440d56
    JZ 0x00440d66                       ; 00440d58
        ;   XREF to: 00440d66 (CONDITIONAL_JUMP)  ; LAB_00440d66
    MOV EAX,dword ptr [EDX + 0xc]       ; 00440d5a
    TEST EAX,EAX                        ; 00440d5d
    JGE 0x00440d4f                      ; 00440d5f
        ;   XREF to: 00440d4f (CONDITIONAL_JUMP)  ; LAB_00440d4f
    MOV EAX,0xffffffff                  ; 00440d61
        ;   Label: LAB_00440d61
    POP EBX                             ; 00440d66
        ;   Label: LAB_00440d66
    RET                                 ; 00440d67
    MOV EAX,EBX                         ; 00440d68
        ;   Label: LAB_00440d68
    POP EBX                             ; 00440d6a
    RET                                 ; 00440d6b

