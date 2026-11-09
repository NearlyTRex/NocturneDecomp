; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_special_cpp_drawPolyList2_FUN_00565db0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0 at 0046de55
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01ed3198
;   undefined4 DAT_02cf6024
;   undefined4 DAT_02cf602c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565db0
        ;   Label: engine_special.cpp_drawPolyList2_FUN_00565db0
    PUSH ESI                            ; 00565db1
    PUSH EDI                            ; 00565db2
    PUSH EBP                            ; 00565db3
    SUB ESP,0xc                         ; 00565db4
    MOV EDI,dword ptr [ESP + 0x20]      ; 00565db7
    MOV EDX,dword ptr [ESP + 0x24]      ; 00565dbb
    CMP dword ptr [0x01c6cee8],0x0      ; 00565dbf | DAT_01c6cee8
    JZ 0x00565ebf                       ; 00565dc6
        ;   XREF to: 00565ebf (CONDITIONAL_JUMP)  ; LAB_00565ebf
    MOV EBX,dword ptr [ESP + 0x28]      ; 00565dcc
    MOV EAX,[0x01ed3198]                ; 00565dd0 | DAT_01ed3198
    MOV ESI,dword ptr [0x02cf602c]      ; 00565dd5 | DAT_02cf602c
    ADD EAX,EBX                         ; 00565ddb
    TEST ESI,ESI                        ; 00565ddd
    JNZ 0x00565ecb                      ; 00565ddf
        ;   XREF to: 00565ecb (CONDITIONAL_JUMP)  ; LAB_00565ecb
    MOV [0x01ed3198],EAX                ; 00565de5 | DAT_01ed3198
    TEST EBX,EBX                        ; 00565dea
    JLE 0x00565eb0                      ; 00565dec
        ;   XREF to: 00565eb0 (CONDITIONAL_JUMP)  ; LAB_00565eb0
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00565df2
    MOV EBX,EDX                         ; 00565df6
    MOV EAX,dword ptr [EBX]             ; 00565df8
        ;   Label: LAB_00565df8
    XOR EDX,EDX                         ; 00565dfa
    MOV DX,word ptr [EAX]               ; 00565dfc
    IMUL EDX,EDX,0x30                   ; 00565dff
    LEA ECX,[EDI + EDX*0x1]             ; 00565e02
    MOV dword ptr [ESP],ECX             ; 00565e05
    XOR EDX,EDX                         ; 00565e08
    MOV DX,word ptr [EAX + 0x2]         ; 00565e0a
    IMUL EDX,EDX,0x30                   ; 00565e0e
    LEA ECX,[EDI + EDX*0x1]             ; 00565e11
    MOV dword ptr [ESP + 0x4],ECX       ; 00565e14
    XOR EDX,EDX                         ; 00565e18
    MOV DX,word ptr [EAX + 0x4]         ; 00565e1a
    IMUL EDX,EDX,0x30                   ; 00565e1e
    LEA ECX,[EDI + EDX*0x1]             ; 00565e21
    MOV dword ptr [ESP + 0x8],ECX       ; 00565e24
    XOR ECX,ECX                         ; 00565e28
    MOV CX,word ptr [EAX + 0x6]         ; 00565e2a
    MOV EDX,dword ptr [ESP]             ; 00565e2e
    SHL ECX,0x8                         ; 00565e31
    MOV dword ptr [EDX + 0x18],ECX      ; 00565e34
    XOR ECX,ECX                         ; 00565e37
    MOV CX,word ptr [EAX + 0xc]         ; 00565e39
    MOV EDX,dword ptr [ESP]             ; 00565e3d
    SHL ECX,0x8                         ; 00565e40
    MOV dword ptr [EDX + 0x1c],ECX      ; 00565e43
    XOR ECX,ECX                         ; 00565e46
    MOV CX,word ptr [EAX + 0x8]         ; 00565e48
    MOV EDX,dword ptr [ESP + 0x4]       ; 00565e4c
    SHL ECX,0x8                         ; 00565e50
    MOV dword ptr [EDX + 0x18],ECX      ; 00565e53
    XOR ECX,ECX                         ; 00565e56
    MOV CX,word ptr [EAX + 0xe]         ; 00565e58
    MOV EDX,dword ptr [ESP + 0x4]       ; 00565e5c
    SHL ECX,0x8                         ; 00565e60
    MOV dword ptr [EDX + 0x1c],ECX      ; 00565e63
    XOR ECX,ECX                         ; 00565e66
    MOV CX,word ptr [EAX + 0xa]         ; 00565e68
    MOV EDX,dword ptr [ESP + 0x8]       ; 00565e6c
    SHL ECX,0x8                         ; 00565e70
    MOV dword ptr [EDX + 0x18],ECX      ; 00565e73
    MOV AX,word ptr [EAX + 0x10]        ; 00565e76
    MOV EDX,dword ptr [ESP + 0x8]       ; 00565e7a
    AND EAX,0xffff                      ; 00565e7e
    PUSH EBP                            ; 00565e83
    SHL EAX,0x8                         ; 00565e84
    PUSH 0x3                            ; 00565e87
    MOV dword ptr [EDX + 0x1c],EAX      ; 00565e89
    LEA EAX,[ESP + 0x8]                 ; 00565e8c
    PUSH EAX                            ; 00565e90
    CALL dword ptr [0x02cf6024]         ; 00565e91 | DAT_02cf6024
    ADD ESP,0xc                         ; 00565e97
    INC ESI                             ; 00565e9a
    MOV EAX,dword ptr [ESP + 0x28]      ; 00565e9b
    ADD EBX,0x4                         ; 00565e9f
    CMP ESI,EAX                         ; 00565ea2
    JL 0x00565df8                       ; 00565ea4
        ;   XREF to: 00565df8 (CONDITIONAL_JUMP)  ; LAB_00565df8
    LEA EAX,[EAX]                       ; 00565eaa
    MOV EDX,0x1                         ; 00565eb0
        ;   Label: LAB_00565eb0
    MOV EAX,EDX                         ; 00565eb5
    ADD ESP,0xc                         ; 00565eb7
    POP EBP                             ; 00565eba
    POP EDI                             ; 00565ebb
    POP ESI                             ; 00565ebc
    POP EBX                             ; 00565ebd
    RET                                 ; 00565ebe
    XOR EDX,EDX                         ; 00565ebf
        ;   Label: LAB_00565ebf
    MOV EAX,EDX                         ; 00565ec1
    ADD ESP,0xc                         ; 00565ec3
    POP EBP                             ; 00565ec6
    POP EDI                             ; 00565ec7
    POP ESI                             ; 00565ec8
    POP EBX                             ; 00565ec9
    RET                                 ; 00565eca
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00565ecb
        ;   Label: LAB_00565ecb
    PUSH EBP                            ; 00565ecf
    PUSH EBX                            ; 00565ed0
    PUSH EDX                            ; 00565ed1
    PUSH EDI                            ; 00565ed2
    MOV [0x01ed3198],EAX                ; 00565ed3 | DAT_01ed3198
    CALL dword ptr [0x02cf602c]         ; 00565ed8 | DAT_02cf602c
    ADD ESP,0x10                        ; 00565ede
    MOV EDX,EAX                         ; 00565ee1
    MOV EAX,EDX                         ; 00565ee3
    ADD ESP,0xc                         ; 00565ee5
    POP EBP                             ; 00565ee8
    POP EDI                             ; 00565ee9
    POP ESI                             ; 00565eea
    POP EBX                             ; 00565eeb
    RET                                 ; 00565eec

