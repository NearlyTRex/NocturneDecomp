; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool support_codec_cpp_FUN_00442d10(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 00453aff
;
; Called Functions:
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_005a11e0
;   support_trstream.cpp_FUN_005a1160
;   support_trstream.cpp_FUN_005a13b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442d10
        ;   Label: support_codec.cpp_FUN_00442d10
    PUSH ESI                            ; 00442d11
    PUSH EDI                            ; 00442d12
    PUSH EBP                            ; 00442d13
    SUB ESP,0x14                        ; 00442d14
    MOV ESI,dword ptr [ESP + 0x30]      ; 00442d17
    MOV EDX,dword ptr [ESI]             ; 00442d1b
    PUSH EDX                            ; 00442d1d
    MOV ECX,dword ptr [ESP + 0x30]      ; 00442d1e
    PUSH ECX                            ; 00442d22
    LEA EAX,[ESP + 0x8]                 ; 00442d23
    PUSH EAX                            ; 00442d27
    CALL support_trstream.cpp_FUN_005a1160 ; 00442d28
        ;   XREF to: 005a1160 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a1160()
    ADD ESP,0xc                         ; 00442d2d
    MOV EBX,dword ptr [ESP + 0x34]      ; 00442d30
    PUSH EBX                            ; 00442d34
    LEA EBX,[ESP + 0x4]                 ; 00442d35
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00442d39
    PUSH EBX                            ; 00442d3d
    MOV EDI,dword ptr [ESP + 0x30]      ; 00442d3e
    MOV EAX,dword ptr [EAX]             ; 00442d42
    PUSH EDI                            ; 00442d44
    CALL dword ptr [EAX + 0x8]          ; 00442d45
    ADD ESP,0xc                         ; 00442d48
    MOV EBX,EAX                         ; 00442d4b
    MOV EAX,ESP                         ; 00442d4d
    PUSH EAX                            ; 00442d4f
    CALL support_trstream.cpp_FUN_005a13b0 ; 00442d50
        ;   XREF to: 005a13b0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a13b0()
    MOV EBP,dword ptr [ESI]             ; 00442d55
    SUB EBP,EAX                         ; 00442d57
    ADD ESP,0x4                         ; 00442d59
    MOV dword ptr [ESI],EBP             ; 00442d5c
    CMP EBX,0x1                         ; 00442d5e
    SETZ AL                             ; 00442d61
    XOR EBX,EBX                         ; 00442d64
    PUSH 0x0                            ; 00442d66
    MOV BL,AL                           ; 00442d68
    LEA EAX,[ESP + 0x4]                 ; 00442d6a
    PUSH EAX                            ; 00442d6e
    CALL support_trstream.cpp_CInStreamMemory_dtor_FUN_005a11e0 ; 00442d6f
        ;   XREF to: 005a11e0 (UNCONDITIONAL_CALL)  ; CInStreamMemory * support_trstream.cpp_CInStreamMemory_dtor_FUN_005a11e0(CInStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00442d74
    MOV EAX,EBX                         ; 00442d77
    ADD ESP,0x14                        ; 00442d79
    POP EBP                             ; 00442d7c
    POP EDI                             ; 00442d7d
    POP ESI                             ; 00442d7e
    POP EBX                             ; 00442d7f
    RET                                 ; 00442d80

