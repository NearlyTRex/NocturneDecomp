; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00561c70()
;
;
; XREF[2]:
;   core_script.cpp_FUN_00565ae0 at 00565b56
;   core_script.cpp_FUN_00565e70 at 00565ee8
;
; Referenced Globals:
;   void* PTR_s_label_006441c0_00680e28 = 006441c0
;
; Called Functions:
;   core_script.cpp_FUN_00561690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561c70
        ;   Label: core_script.cpp_FUN_00561c70
    PUSH ESI                            ; 00561c71
    PUSH EDI                            ; 00561c72
    PUSH EBP                            ; 00561c73
    PUSH 0x78                           ; 00561c74
    PUSH 0x680e28                       ; 00561c76 | void * PTR_s_label_006441c0_00680e28
    MOV EDX,dword ptr [ESP + 0x34]      ; 00561c7b
    PUSH EDX                            ; 00561c7f
    MOV ECX,dword ptr [ESP + 0x34]      ; 00561c80
    PUSH ECX                            ; 00561c84
    MOV EBX,dword ptr [ESP + 0x34]      ; 00561c85
    PUSH EBX                            ; 00561c89
    MOV ESI,dword ptr [ESP + 0x34]      ; 00561c8a
    PUSH ESI                            ; 00561c8e
    MOV EDI,dword ptr [ESP + 0x34]      ; 00561c8f
    PUSH EDI                            ; 00561c93
    MOV EBP,dword ptr [ESP + 0x34]      ; 00561c94
    PUSH EBP                            ; 00561c98
    MOV EAX,dword ptr [ESP + 0x34]      ; 00561c99
    PUSH EAX                            ; 00561c9d
    CALL core_script.cpp_FUN_00561690   ; 00561c9e | undefined core_script.cpp_FUN_00561690()
        ;   XREF to: 00561690 (UNCONDITIONAL_CALL)
    ADD ESP,0x24                        ; 00561ca3
    POP EBP                             ; 00561ca6
    POP EDI                             ; 00561ca7
    POP ESI                             ; 00561ca8
    POP EBX                             ; 00561ca9
    RET                                 ; 00561caa

