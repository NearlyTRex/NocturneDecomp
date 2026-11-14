; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_codec_cpp_CCheesyCipher_transformByte_FUN_00443a80(CCheesyCipher *this_ptr,byte param_2)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; byte             Stack[0x8]:1   param_2
;
; XREF[1]:
;   support_codec.cpp_CCheesyCipher_process_FUN_00443af0 at 00443b2d
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005d6a92
;   TerminatedCString s_Invalid_mode_005d6aa7
;   undefined4 DAT_00610db8
;   undefined4 DAT_00610eb8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   support_codec.cpp_CCheesyCipher_advanceKey_FUN_00443b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443a80
        ;   Label: support_codec.cpp_CCheesyCipher_transformByte_FUN_00443a80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00443a81
    PUSH EBX                            ; 00443a85
    CALL support_codec.cpp_CCheesyCipher_advanceKey_FUN_00443b70 ; 00443a86
        ;   XREF to: 00443b70 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CCheesyCipher_advanceKey_FUN_00443b70(CCheesyCipher * this_ptr)
    MOV EAX,dword ptr [EBX + 0x4]       ; 00443a8b
    ADD ESP,0x4                         ; 00443a8e
    TEST EAX,EAX                        ; 00443a91
    JBE 0x00443aab                      ; 00443a93
        ;   XREF to: 00443aab (CONDITIONAL_JUMP)  ; LAB_00443aab
    CMP EAX,0x1                         ; 00443a95
    JNZ 0x00443ac3                      ; 00443a98
        ;   XREF to: 00443ac3 (CONDITIONAL_JUMP)  ; LAB_00443ac3
    XOR EAX,EAX                         ; 00443a9a
    MOV AL,byte ptr [ESP + 0xc]         ; 00443a9c
    MOV AL,byte ptr [EAX + 0x610eb8]    ; 00443aa0 | DAT_00610eb8
    SUB AL,byte ptr [EBX + 0x8]         ; 00443aa6
    POP EBX                             ; 00443aa9
    RET                                 ; 00443aaa
    XOR EAX,EAX                         ; 00443aab
        ;   Label: LAB_00443aab
    MOV EDX,dword ptr [EBX + 0x8]       ; 00443aad
    MOV AL,byte ptr [ESP + 0xc]         ; 00443ab0
    ADD EAX,EDX                         ; 00443ab4
    AND EAX,0xff                        ; 00443ab6
    MOV AL,byte ptr [EAX + 0x610db8]    ; 00443abb | DAT_00610db8
    POP EBX                             ; 00443ac1
    RET                                 ; 00443ac2
    MOV ECX,0x5d6a92                    ; 00443ac3 | = "..\\support\\codec.cpp"
        ;   Label: LAB_00443ac3
    MOV EBX,0x70b                       ; 00443ac8
    PUSH 0x5d6aa7                       ; 00443acd | = "Invalid mode."
    MOV dword ptr [0x01d1d400],ECX      ; 00443ad2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00443ad8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00443ade
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00443ae3
    XOR AL,AL                           ; 00443ae6
    POP EBX                             ; 00443ae8
    RET                                 ; 00443ae9

