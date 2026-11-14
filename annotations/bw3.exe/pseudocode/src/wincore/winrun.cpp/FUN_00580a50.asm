; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LRESULT __stdcall wincore_winrun_cpp_FUN_00580a50(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)
;
; Parameters:
; HWND             Stack[0x4]:4   hWnd
; UINT             Stack[0x8]:4   message
; WPARAM           Stack[0xc]:4   wParam
; LPARAM           Stack[0x10]:4   lParam
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_00581080 at 005811f4
;
; Referenced Globals:
;   void* PTR_DefWindowProcA_005b34ac = 001b3a9e
;   void* PTR_PostQuitMessage_005b34e8 = 001b3b90
;   void* PTR_SetCursor_005b34f8 = 001b3bd8
;   void* PTR_GetCurrentProcess_005b3588 = 001b3e46
;   void* PTR_SetThreadPriority_005b3650 = 001b4204
;   undefined4 DAT_005fba2c
;   undefined4 DAT_00607288
;   undefined4 DAT_00607290
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c5fae4
;   undefined4 DAT_01c6cef0
;   undefined4 DAT_01c6d0f0
;   undefined4 DAT_01c6d0f1
;   undefined4 DAT_01c6d0fc
;   ... and 12 more
;
; Called Functions:
;   DefWindowProcA
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   GetCurrentProcess
;   PostQuitMessage
;   SetCursor
;   SetThreadPriority
;   wincore_wddvmem.cpp_FUN_0057ab20
;   wincore_wddvmem.cpp_stubFunction_FUN_0057ac80
;   wincore_wddvmem.cpp_videoRestore_FUN_0057ab70
;   wincore_winrun.cpp_enqueueInput_FUN_00580830
;   wincore_winvideo.cpp_closeMovie_FUN_00582b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580a50
        ;   Label: wincore_winrun.cpp_FUN_00580a50
    PUSH ESI                            ; 00580a51
    PUSH EDI                            ; 00580a52
    PUSH EBP                            ; 00580a53
    MOV EBP,dword ptr [ESP + 0x14]      ; 00580a54
    MOV EDI,dword ptr [ESP + 0x18]      ; 00580a58
    CMP EBP,dword ptr [0x02d21b78]      ; 00580a5c | DAT_02d21b78
    JNZ 0x00580af2                      ; 00580a62
        ;   XREF to: 00580af2 (CONDITIONAL_JUMP)  ; LAB_00580af2
    MOV ECX,dword ptr [0x02d224f8]      ; 00580a68 | DAT_02d224f8
    XOR ESI,ESI                         ; 00580a6e
    TEST ECX,ECX                        ; 00580a70
    JLE 0x00580a9e                      ; 00580a72
        ;   XREF to: 00580a9e (CONDITIONAL_JUMP)  ; LAB_00580a9e
    XOR EBX,EBX                         ; 00580a74
    MOV EDX,dword ptr [ESP + 0x20]      ; 00580a76
        ;   Label: LAB_00580a76
    PUSH EDX                            ; 00580a7a
    MOV ECX,dword ptr [ESP + 0x20]      ; 00580a7b
    PUSH ECX                            ; 00580a7f
    PUSH EDI                            ; 00580a80
    MOV EAX,EBX                         ; 00580a81
    PUSH EBP                            ; 00580a83
    CALL dword ptr [EAX + 0x2d224fc]    ; 00580a84
    ADD ESP,0x10                        ; 00580a8a
    TEST EAX,EAX                        ; 00580a8d
    JNZ 0x00580afe                      ; 00580a8f
        ;   XREF to: 00580afe (CONDITIONAL_JUMP)  ; LAB_00580afe
    MOV EAX,[0x02d224f8]                ; 00580a91 | DAT_02d224f8
    INC ESI                             ; 00580a96
    ADD EBX,0x4                         ; 00580a97
    CMP ESI,EAX                         ; 00580a9a
    JL 0x00580a76                       ; 00580a9c
        ;   XREF to: 00580a76 (CONDITIONAL_JUMP)  ; LAB_00580a76
    MOV EAX,EDI                         ; 00580a9e
        ;   Label: LAB_00580a9e
    CMP EDI,0x105                       ; 00580aa0
    JNC 0x00580e2d                      ; 00580aa6
        ;   XREF to: 00580e2d (CONDITIONAL_JUMP)  ; LAB_00580e2d
    CMP EDI,0x20                        ; 00580aac
    JNC 0x00580ef3                      ; 00580aaf
        ;   XREF to: 00580ef3 (CONDITIONAL_JUMP)  ; LAB_00580ef3
    CMP EDI,0x2                         ; 00580ab5
    JC 0x00580ad4                       ; 00580ab8
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    JA 0x00580f44                       ; 00580aba
        ;   XREF to: 00580f44 (CONDITIONAL_JUMP)  ; LAB_00580f44
    PUSH 0x0                            ; 00580ac0
    MOV EBX,0x1                         ; 00580ac2
    CALL dword ptr CS:[0x5b34e8]        ; 00580ac7 | PTR_PostQuitMessage_005b34e8
    MOV dword ptr [0x02d21b80],EBX      ; 00580ace | DAT_02d21b80
    MOV ESI,dword ptr [ESP + 0x20]      ; 00580ad4
        ;   Label: LAB_00580ad4
    PUSH ESI                            ; 00580ad8
    MOV EAX,dword ptr [ESP + 0x20]      ; 00580ad9
    PUSH EAX                            ; 00580add
    PUSH EDI                            ; 00580ade
        ;   Label: LAB_00580ade
    PUSH EBP                            ; 00580adf
    CALL dword ptr CS:[0x5b34ac]        ; 00580ae0 | PTR_DefWindowProcA_005b34ac
    MOV EDI,EAX                         ; 00580ae7
    MOV EAX,EDI                         ; 00580ae9
    POP EBP                             ; 00580aeb
    POP EDI                             ; 00580aec
    POP ESI                             ; 00580aed
    POP EBX                             ; 00580aee
    RET 0x10                            ; 00580aef
    MOV EBX,dword ptr [ESP + 0x20]      ; 00580af2
        ;   Label: LAB_00580af2
    PUSH EBX                            ; 00580af6
    MOV ESI,dword ptr [ESP + 0x20]      ; 00580af7
    PUSH ESI                            ; 00580afb
    JMP 0x00580ade                      ; 00580afc
        ;   XREF to: 00580ade (UNCONDITIONAL_JUMP)  ; LAB_00580ade
    XOR EDI,EDI                         ; 00580afe
        ;   Label: LAB_00580afe
    MOV EAX,EDI                         ; 00580b00
    POP EBP                             ; 00580b02
    POP EDI                             ; 00580b03
    POP ESI                             ; 00580b04
    POP EBX                             ; 00580b05
    RET 0x10                            ; 00580b06
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00580b09
        ;   Label: LAB_00580b09
    CMP EAX,0xf140                      ; 00580b0d
    JC 0x00580ad4                       ; 00580b12
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580afe                      ; 00580b14
        ;   XREF to: 00580afe (CONDITIONAL_JUMP)  ; LAB_00580afe
    CMP EAX,0xf170                      ; 00580b16
    JZ 0x00580afe                       ; 00580b1b
        ;   XREF to: 00580afe (CONDITIONAL_JUMP)  ; LAB_00580afe
    JMP 0x00580ad4                      ; 00580b1d
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    MOV EAX,[0x00607288]                ; 00580b1f | DAT_00607288
        ;   Label: LAB_00580b1f
    MOV [0x00607290],EAX                ; 00580b24 | DAT_00607290
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00580b29
    MOV [0x00607288],EAX                ; 00580b2d | DAT_00607288
    MOV EAX,[0x00607290]                ; 00580b32 | DAT_00607290
    CMP EAX,dword ptr [0x00607288]      ; 00580b37 | DAT_00607288
    JZ 0x00580ad4                       ; 00580b3d
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    CALL dword ptr CS:[0x5b3588]        ; 00580b3f | PTR_GetCurrentProcess_005b3588
    MOV ESI,dword ptr [0x00607288]      ; 00580b46 | DAT_00607288
    MOV EBX,EAX                         ; 00580b4c
    TEST ESI,ESI                        ; 00580b4e
    JZ 0x00580b82                       ; 00580b50
        ;   XREF to: 00580b82 (CONDITIONAL_JUMP)  ; LAB_00580b82
    PUSH 0x1                            ; 00580b52
    PUSH EAX                            ; 00580b54
    CALL dword ptr CS:[0x5b3650]        ; 00580b55 | PTR_SetThreadPriority_005b3650
    CALL wincore_wddvmem.cpp_videoRestore_FUN_0057ab70 ; 00580b5c
        ;   XREF to: 0057ab70 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_videoRestore_FUN_0057ab70()
    CMP dword ptr [0x00607290],-0x1     ; 00580b61 | DAT_00607290
    JZ 0x00580ad4                       ; 00580b68
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00580b6e
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV dword ptr [0x02d21b84],0x1      ; 00580b73 | DAT_02d21b84
    JMP 0x00580ad4                      ; 00580b7d
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    CALL wincore_wddvmem.cpp_FUN_0057ab20 ; 00580b82
        ;   XREF to: 0057ab20 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_0057ab20()
        ;   Label: LAB_00580b82
    PUSH -0xf                           ; 00580b87
    PUSH EBX                            ; 00580b89
    CALL dword ptr CS:[0x5b3650]        ; 00580b8a | PTR_SetThreadPriority_005b3650
    MOV dword ptr [0x02d21b84],ESI      ; 00580b91 | DAT_02d21b84
    JMP 0x00580ad4                      ; 00580b97
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    PUSH 0x0                            ; 00580b9c
        ;   Label: LAB_00580b9c
    MOV EDI,0x1                         ; 00580b9e
    CALL dword ptr CS:[0x5b34f8]        ; 00580ba3 | PTR_SetCursor_005b34f8
    MOV EAX,EDI                         ; 00580baa
    POP EBP                             ; 00580bac
    POP EDI                             ; 00580bad
    POP ESI                             ; 00580bae
    POP EBX                             ; 00580baf
    RET 0x10                            ; 00580bb0
    CMP EBP,dword ptr [ESP + 0x1c]      ; 00580bb3
        ;   Label: LAB_00580bb3
    JZ 0x00580ad4                       ; 00580bb7
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    CALL wincore_wddvmem.cpp_stubFunction_FUN_0057ac80 ; 00580bbd
        ;   XREF to: 0057ac80 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_stubFunction_FUN_0057ac80()
        ;   Label: LAB_00580bbd
    JMP 0x00580ad4                      ; 00580bc2
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    CALL wincore_wddvmem.cpp_stubFunction_FUN_0057ac80 ; 00580bc7
        ;   XREF to: 0057ac80 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_stubFunction_FUN_0057ac80()
        ;   Label: LAB_00580bc7
    JMP 0x00580ad4                      ; 00580bcc
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    MOV EAX,dword ptr [ESP + 0x20]      ; 00580bd1
        ;   Label: LAB_00580bd1
    MOV EDX,dword ptr [0x005fba2c]      ; 00580bd5 | DAT_005fba2c
    SAR EAX,0x10                        ; 00580bdb
    XOR ECX,ECX                         ; 00580bde
    AND EAX,EDX                         ; 00580be0
    MOV DL,0x1                          ; 00580be2
    MOV dword ptr [0x02d224f0],ECX      ; 00580be4 | DAT_02d224f0
    MOV byte ptr [EAX + 0x1c6cef0],DL   ; 00580bea | DAT_01c6cef0
    CMP EAX,0x3e                        ; 00580bf0
    JNZ 0x00580ad4                      ; 00580bf3
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    XOR EDI,EDI                         ; 00580bf9
        ;   Label: LAB_00580bf9
    MOV EAX,EDI                         ; 00580bfb
    POP EBP                             ; 00580bfd
    POP EDI                             ; 00580bfe
    POP ESI                             ; 00580bff
    POP EBX                             ; 00580c00
    RET 0x10                            ; 00580c01
    XOR EAX,EDI                         ; 00580c04
        ;   Label: LAB_00580c04
    MOV AL,byte ptr [ESP + 0x1c]        ; 00580c06
    TEST EAX,EAX                        ; 00580c0a
    JZ 0x00580ad4                       ; 00580c0c
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    AND EAX,0xffff                      ; 00580c12
    PUSH EAX                            ; 00580c17
    CALL wincore_winrun.cpp_enqueueInput_FUN_00580830 ; 00580c18
        ;   XREF to: 00580830 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_enqueueInput_FUN_00580830(int input_value)
    ADD ESP,0x4                         ; 00580c1d
    JMP 0x00580ad4                      ; 00580c20
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    MOV EAX,dword ptr [ESP + 0x20]      ; 00580c25
        ;   Label: LAB_00580c25
    MOV EBX,dword ptr [0x005fba2c]      ; 00580c29 | DAT_005fba2c
    SAR EAX,0x10                        ; 00580c2f
    AND EAX,EBX                         ; 00580c32
    MOV dword ptr [EAX*0x4 + 0x2d21b90],0x1 ; 00580c34
    XOR EAX,EAX                         ; 00580c3f
    MOV [0x02d224f0],EAX                ; 00580c41 | DAT_02d224f0
    JMP 0x00580ad4                      ; 00580c46
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    XOR EBX,EBX                         ; 00580c4b
        ;   Label: LAB_00580c4b
    MOV BX,word ptr [ESP + 0x20]        ; 00580c4d
    MOV dword ptr [0x01c5fadc],EBX      ; 00580c52 | DAT_01c5fadc
    AND EAX,0xffff                      ; 00580c58
    XOR EBP,EBP                         ; 00580c5d
    XOR EDI,EDI                         ; 00580c5f
    MOV [0x01c5fae0],EAX                ; 00580c61 | DAT_01c5fae0
    MOV dword ptr [0x02d224f4],EBP      ; 00580c66 | DAT_02d224f4
    MOV EAX,EDI                         ; 00580c6c
    POP EBP                             ; 00580c6e
    POP EDI                             ; 00580c6f
    POP ESI                             ; 00580c70
    POP EBX                             ; 00580c71
    RET 0x10                            ; 00580c72
    XOR EBX,EBX                         ; 00580c75
        ;   Label: LAB_00580c75
    MOV BX,word ptr [ESP + 0x20]        ; 00580c77
    MOV dword ptr [0x01c5fadc],EBX      ; 00580c7c | DAT_01c5fadc
    AND EAX,0xffff                      ; 00580c82
    MOV [0x01c5fae0],EAX                ; 00580c87 | DAT_01c5fae0
    MOV AL,[0x01c5fae4]                 ; 00580c8c | DAT_01c5fae4
    OR AL,0x1                           ; 00580c91
    XOR EDI,EDI                         ; 00580c93
    MOV [0x01c5fae4],AL                 ; 00580c95 | DAT_01c5fae4
    MOV AH,0x1                          ; 00580c9a
    MOV dword ptr [0x02d224f4],EDI      ; 00580c9c | DAT_02d224f4
    MOV byte ptr [0x01c6d0f0],AH        ; 00580ca2 | DAT_01c6d0f0
    MOV EAX,EDI                         ; 00580ca8
    POP EBP                             ; 00580caa
    POP EDI                             ; 00580cab
    POP ESI                             ; 00580cac
    POP EBX                             ; 00580cad
    RET 0x10                            ; 00580cae
    XOR EBX,EBX                         ; 00580cb1
        ;   Label: LAB_00580cb1
    MOV BX,word ptr [ESP + 0x20]        ; 00580cb3
    MOV dword ptr [0x01c5fadc],EBX      ; 00580cb8 | DAT_01c5fadc
    MOV EBX,0x1                         ; 00580cbe
    MOV CH,byte ptr [0x01c5fae4]        ; 00580cc3 | DAT_01c5fae4
    AND EAX,0xffff                      ; 00580cc9
    XOR ESI,ESI                         ; 00580cce
    XOR EDI,EDI                         ; 00580cd0
    MOV [0x01c5fae0],EAX                ; 00580cd2 | DAT_01c5fae0
    AND CH,0xfe                         ; 00580cd7
    MOV dword ptr [0x02d22390],EBX      ; 00580cda | DAT_02d22390
    MOV dword ptr [0x02d224f4],ESI      ; 00580ce0 | DAT_02d224f4
    MOV byte ptr [0x01c5fae4],CH        ; 00580ce6 | DAT_01c5fae4
    MOV EAX,EDI                         ; 00580cec
    POP EBP                             ; 00580cee
    POP EDI                             ; 00580cef
    POP ESI                             ; 00580cf0
    POP EBX                             ; 00580cf1
    RET 0x10                            ; 00580cf2
    XOR EBX,EBX                         ; 00580cf5
        ;   Label: LAB_00580cf5
    MOV BX,word ptr [ESP + 0x20]        ; 00580cf7
    MOV dword ptr [0x01c5fadc],EBX      ; 00580cfc | DAT_01c5fadc
    MOV CL,0x1                          ; 00580d02
    MOV BH,byte ptr [0x01c5fae4]        ; 00580d04 | DAT_01c5fae4
    AND EAX,0xffff                      ; 00580d0a
    XOR EDI,EDI                         ; 00580d0f
    MOV [0x01c5fae0],EAX                ; 00580d11 | DAT_01c5fae0
    OR BH,0x2                           ; 00580d16
    MOV byte ptr [0x01c6d0f1],CL        ; 00580d19 | DAT_01c6d0f1
    XOR ECX,ECX                         ; 00580d1f
    MOV byte ptr [0x01c5fae4],BH        ; 00580d21 | DAT_01c5fae4
    MOV dword ptr [0x02d224f4],ECX      ; 00580d27 | DAT_02d224f4
    MOV EAX,EDI                         ; 00580d2d
    POP EBP                             ; 00580d2f
    POP EDI                             ; 00580d30
    POP ESI                             ; 00580d31
    POP EBX                             ; 00580d32
    RET 0x10                            ; 00580d33
    XOR EBX,EBX                         ; 00580d36
        ;   Label: LAB_00580d36
    MOV BX,word ptr [ESP + 0x20]        ; 00580d38
    MOV dword ptr [0x01c5fadc],EBX      ; 00580d3d | DAT_01c5fadc
    MOV BL,byte ptr [0x01c5fae4]        ; 00580d43 | DAT_01c5fae4
    AND EAX,0xffff                      ; 00580d49
    XOR EDX,EDX                         ; 00580d4e
    XOR EDI,EDI                         ; 00580d50
    MOV [0x01c5fae0],EAX                ; 00580d52 | DAT_01c5fae0
    AND BL,0xfd                         ; 00580d57
    MOV dword ptr [0x02d224f4],EDX      ; 00580d5a | DAT_02d224f4
    MOV EAX,0x1                         ; 00580d60
    MOV byte ptr [0x01c5fae4],BL        ; 00580d65 | DAT_01c5fae4
    MOV [0x02d22394],EAX                ; 00580d6b | DAT_02d22394
    MOV EAX,EDI                         ; 00580d70
    POP EBP                             ; 00580d72
    POP EDI                             ; 00580d73
    POP ESI                             ; 00580d74
    POP EBX                             ; 00580d75
    RET 0x10                            ; 00580d76
    XOR EBX,EBX                         ; 00580d79
        ;   Label: LAB_00580d79
    MOV BX,word ptr [ESP + 0x20]        ; 00580d7b
    MOV dword ptr [0x01c5fadc],EBX      ; 00580d80 | DAT_01c5fadc
    MOV DL,byte ptr [0x01c5fae4]        ; 00580d86 | DAT_01c5fae4
    AND EAX,0xffff                      ; 00580d8c
    XOR EBP,EBP                         ; 00580d91
    XOR EDI,EDI                         ; 00580d93
    OR DL,0x4                           ; 00580d95
    MOV [0x01c5fae0],EAX                ; 00580d98 | DAT_01c5fae0
    MOV byte ptr [0x01c5fae4],DL        ; 00580d9d | DAT_01c5fae4
    MOV DH,0x1                          ; 00580da3
    MOV dword ptr [0x02d224f4],EBP      ; 00580da5 | DAT_02d224f4
    MOV byte ptr [0x01c6d0fc],DH        ; 00580dab | DAT_01c6d0fc
    MOV EAX,EDI                         ; 00580db1
    POP EBP                             ; 00580db3
    POP EDI                             ; 00580db4
    POP ESI                             ; 00580db5
    POP EBX                             ; 00580db6
    RET 0x10                            ; 00580db7
    XOR EBX,EBX                         ; 00580dba
        ;   Label: LAB_00580dba
    MOV BX,word ptr [ESP + 0x20]        ; 00580dbc
    MOV dword ptr [0x01c5fadc],EBX      ; 00580dc1 | DAT_01c5fadc
    MOV ESI,0x1                         ; 00580dc7
    AND EAX,0xffff                      ; 00580dcc
    XOR EDI,EDI                         ; 00580dd1
    MOV [0x01c5fae0],EAX                ; 00580dd3 | DAT_01c5fae0
    MOV AH,byte ptr [0x01c5fae4]        ; 00580dd8 | DAT_01c5fae4
    MOV dword ptr [0x02d223c0],ESI      ; 00580dde | DAT_02d223c0
    AND AH,0xfb                         ; 00580de4
    MOV dword ptr [0x02d224f4],EDI      ; 00580de7 | DAT_02d224f4
    MOV byte ptr [0x01c5fae4],AH        ; 00580ded | DAT_01c5fae4
    MOV EAX,EDI                         ; 00580df3
    POP EBP                             ; 00580df5
    POP EDI                             ; 00580df6
    POP ESI                             ; 00580df7
    POP EBX                             ; 00580df8
    RET 0x10                            ; 00580df9
    MOV EDX,dword ptr [0x02d21b78]      ; 00580dfc | DAT_02d21b78
        ;   Label: LAB_00580dfc
    PUSH EDX                            ; 00580e02
    CALL wincore_winvideo.cpp_closeMovie_FUN_00582b60 ; 00580e03
        ;   XREF to: 00582b60 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_00582b60(HWND window_handle)
    ADD ESP,0x4                         ; 00580e08
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00580e0b
    MOV ECX,0x1                         ; 00580e0f
    MOV [0x02d2250c],EAX                ; 00580e14 | DAT_02d2250c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00580e19
    MOV dword ptr [0x02d22508],ECX      ; 00580e1d | DAT_02d22508
    MOV [0x02d22510],EAX                ; 00580e23 | DAT_02d22510
    JMP 0x00580ad4                      ; 00580e28
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580c25                      ; 00580e2d
        ;   XREF to: 00580c25 (CONDITIONAL_JUMP)  ; LAB_00580c25
        ;   Label: LAB_00580e2d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00580e33
    SHR EAX,0x10                        ; 00580e37
    AND EAX,0xffff                      ; 00580e3a
    CMP EDI,0x205                       ; 00580e3f
    JNC 0x00580e76                      ; 00580e45
        ;   XREF to: 00580e76 (CONDITIONAL_JUMP)  ; LAB_00580e76
    CMP EDI,0x201                       ; 00580e47
    JNC 0x00580ed0                      ; 00580e4d
        ;   XREF to: 00580ed0 (CONDITIONAL_JUMP)  ; LAB_00580ed0
    CMP EDI,0x112                       ; 00580e53
    JC 0x00580ad4                       ; 00580e59
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580b09                      ; 00580e5f
        ;   XREF to: 00580b09 (CONDITIONAL_JUMP)  ; LAB_00580b09
    CMP EDI,0x200                       ; 00580e65
    JZ 0x00580c4b                       ; 00580e6b
        ;   XREF to: 00580c4b (CONDITIONAL_JUMP)  ; LAB_00580c4b
    JMP 0x00580ad4                      ; 00580e71
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580d36                      ; 00580e76
        ;   XREF to: 00580d36 (CONDITIONAL_JUMP)  ; LAB_00580d36
        ;   Label: LAB_00580e76
    CMP EDI,0x30f                       ; 00580e7c
    JNC 0x00580ea7                      ; 00580e82
        ;   XREF to: 00580ea7 (CONDITIONAL_JUMP)  ; LAB_00580ea7
    CMP EDI,0x207                       ; 00580e84
    JC 0x00580ad4                       ; 00580e8a
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580d79                      ; 00580e90
        ;   XREF to: 00580d79 (CONDITIONAL_JUMP)  ; LAB_00580d79
    CMP EDI,0x208                       ; 00580e96
    JZ 0x00580dba                       ; 00580e9c
        ;   XREF to: 00580dba (CONDITIONAL_JUMP)  ; LAB_00580dba
    JMP 0x00580ad4                      ; 00580ea2
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580bbd                      ; 00580ea7
        ;   XREF to: 00580bbd (CONDITIONAL_JUMP)  ; LAB_00580bbd
        ;   Label: LAB_00580ea7
    CMP EDI,0x311                       ; 00580ead
    JC 0x00580ad4                       ; 00580eb3
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580bb3                      ; 00580eb9
        ;   XREF to: 00580bb3 (CONDITIONAL_JUMP)  ; LAB_00580bb3
    CMP EDI,0x3b9                       ; 00580ebf
    JZ 0x00580dfc                       ; 00580ec5
        ;   XREF to: 00580dfc (CONDITIONAL_JUMP)  ; LAB_00580dfc
    JMP 0x00580ad4                      ; 00580ecb
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580c75                      ; 00580ed0
        ;   XREF to: 00580c75 (CONDITIONAL_JUMP)  ; LAB_00580c75
        ;   Label: LAB_00580ed0
    CMP EDI,0x202                       ; 00580ed6
    JBE 0x00580cb1                      ; 00580edc
        ;   XREF to: 00580cb1 (CONDITIONAL_JUMP)  ; LAB_00580cb1
    CMP EDI,0x204                       ; 00580ee2
    JZ 0x00580cf5                       ; 00580ee8
        ;   XREF to: 00580cf5 (CONDITIONAL_JUMP)  ; LAB_00580cf5
    JMP 0x00580ad4                      ; 00580eee
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580b9c                      ; 00580ef3
        ;   XREF to: 00580b9c (CONDITIONAL_JUMP)  ; LAB_00580b9c
        ;   Label: LAB_00580ef3
    CMP EDI,0x101                       ; 00580ef9
    JNC 0x00580f21                      ; 00580eff
        ;   XREF to: 00580f21 (CONDITIONAL_JUMP)  ; LAB_00580f21
    CMP EDI,0x7e                        ; 00580f01
    JC 0x00580ad4                       ; 00580f04
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580bf9                      ; 00580f0a
        ;   XREF to: 00580bf9 (CONDITIONAL_JUMP)  ; LAB_00580bf9
    CMP EDI,0x100                       ; 00580f10
    JZ 0x00580bd1                       ; 00580f16
        ;   XREF to: 00580bd1 (CONDITIONAL_JUMP)  ; LAB_00580bd1
    JMP 0x00580ad4                      ; 00580f1c
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580c25                      ; 00580f21
        ;   XREF to: 00580c25 (CONDITIONAL_JUMP)  ; LAB_00580c25
        ;   Label: LAB_00580f21
    CMP EDI,0x102                       ; 00580f27
    JBE 0x00580c04                      ; 00580f2d
        ;   XREF to: 00580c04 (CONDITIONAL_JUMP)  ; LAB_00580c04
    CMP EDI,0x104                       ; 00580f33
    JZ 0x00580bd1                       ; 00580f39
        ;   XREF to: 00580bd1 (CONDITIONAL_JUMP)  ; LAB_00580bd1
    JMP 0x00580ad4                      ; 00580f3f
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4
    CMP EDI,0xf                         ; 00580f44
        ;   Label: LAB_00580f44
    JC 0x00580ad4                       ; 00580f47
        ;   XREF to: 00580ad4 (CONDITIONAL_JUMP)  ; LAB_00580ad4
    JBE 0x00580bc7                      ; 00580f4d
        ;   XREF to: 00580bc7 (CONDITIONAL_JUMP)  ; LAB_00580bc7
    CMP EDI,0x1c                        ; 00580f53
    JZ 0x00580b1f                       ; 00580f56
        ;   XREF to: 00580b1f (CONDITIONAL_JUMP)  ; LAB_00580b1f
    JMP 0x00580ad4                      ; 00580f5c
        ;   XREF to: 00580ad4 (UNCONDITIONAL_JUMP)  ; LAB_00580ad4

