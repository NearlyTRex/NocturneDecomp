; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void dll_dx7_cpp_FUN_100015d0(undefined4 param_1)
;
;
; XREF[1]:
;   dll_dx7.cpp_APIDLLupdateTexture_FUN_10003ed0 at 10003ef2
;
; Referenced Globals:
;   void* switchdataD_10001634 = 100015f0
;   byte switchdataD_10001648 = 0x0
;   CDLLTextureCache* g_TextureCache32 = 10060678
;   CDLLTextureCache* g_TextureCache64 = 100a8688
;   CDLLTextureCache* g_TextureCache128 = 100f0698
;   CDLLTextureCache* g_TextureCache256 = 10018660
;   undefined4 g_ExternalRendererBridge.texture_dimension
;
; Called Functions:
;   dll_dx7.cpp_FUN_10001180
;
; *****************************************************************************

section .text

    MOV EAX,[0x10226900]                ; 100015d0 | g_ExternalRendererBridge.texture_dimension
        ;   Label: dll_dx7.cpp_FUN_100015d0
    MOV EAX,dword ptr [EAX]             ; 100015d5
    SUB EAX,0x20                        ; 100015d7
    CMP EAX,0xe0                        ; 100015da
    JA 0x10001633                       ; 100015df
        ;   XREF to: 10001633 (CONDITIONAL_JUMP)  ; caseD_ff
    XOR ECX,ECX                         ; 100015e1
    MOV CL,byte ptr [EAX + 0x10001648]  ; 100015e3 | switchdataD_10001648
    JMP dword ptr [ECX*0x4 + 0x10001634] ; 100015e9 | caseD_20 | caseD_ff | caseD_40
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x4]       ; 100015f0
        ;   Label: caseD_20
    MOV ECX,dword ptr [0x10014044]      ; 100015f4 | g_TextureCache32
    PUSH EAX                            ; 100015fa
    CALL dll_dx7.cpp_FUN_10001180       ; 100015fb
        ;   XREF to: 10001180 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10001180()
    RET                                 ; 10001600
    MOV EAX,dword ptr [ESP + 0x4]       ; 10001601
        ;   Label: caseD_40
    MOV ECX,dword ptr [0x10014048]      ; 10001605 | g_TextureCache64
    PUSH EAX                            ; 1000160b
    CALL dll_dx7.cpp_FUN_10001180       ; 1000160c
        ;   XREF to: 10001180 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10001180()
    RET                                 ; 10001611
    MOV EAX,dword ptr [ESP + 0x4]       ; 10001612
        ;   Label: caseD_80
    MOV ECX,dword ptr [0x1001404c]      ; 10001616 | g_TextureCache128
    PUSH EAX                            ; 1000161c
    CALL dll_dx7.cpp_FUN_10001180       ; 1000161d
        ;   XREF to: 10001180 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10001180()
    RET                                 ; 10001622
    MOV EAX,dword ptr [ESP + 0x4]       ; 10001623
        ;   Label: caseD_100
    MOV ECX,dword ptr [0x10014050]      ; 10001627 | g_TextureCache256
    PUSH EAX                            ; 1000162d
    CALL dll_dx7.cpp_FUN_10001180       ; 1000162e
        ;   XREF to: 10001180 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10001180()
    RET                                 ; 10001633
        ;   Label: caseD_21

