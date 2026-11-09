; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_FUN_00574af0(CTextureCache *this_ptr,char *output_buffer)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   output_buffer
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_texture.cpp_getTextureCacheStats_FUN_005750b0 at 005750bc
;
; Referenced Globals:
;   TerminatedCString s_Texture_cache_has_wrappe_005ec934
;   TerminatedCString s_Total_d_32_d_64_d_128_d_005ec968
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574af0
        ;   Label: engine_texture.cpp_FUN_00574af0
    PUSH ESI                            ; 00574af1
    PUSH EDI                            ; 00574af2
    PUSH EBP                            ; 00574af3
    SUB ESP,0x8                         ; 00574af4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00574af7
    XOR ESI,ESI                         ; 00574afb
    XOR EDI,EDI                         ; 00574afd
    XOR ECX,ECX                         ; 00574aff
    XOR EBX,EBX                         ; 00574b01
    MOV dword ptr [ESP + 0x4],ESI       ; 00574b03
    MOV EDX,dword ptr [EAX]             ; 00574b07
    MOV dword ptr [ESP],ESI             ; 00574b09
    TEST EDX,EDX                        ; 00574b0c
    JNZ 0x00574ba1                      ; 00574b0e
        ;   XREF to: 00574ba1 (CONDITIONAL_JUMP)  ; LAB_00574ba1
    CMP dword ptr [EAX + 0x18004],0x0   ; 00574b14
    JLE 0x00574b68                      ; 00574b1b
        ;   XREF to: 00574b68 (CONDITIONAL_JUMP)  ; LAB_00574b68
    CMP dword ptr [EAX + 0x4],0x20      ; 00574b1d
        ;   Label: LAB_00574b1d
    JNZ 0x00574b24                      ; 00574b21
        ;   XREF to: 00574b24 (CONDITIONAL_JUMP)  ; LAB_00574b24
    INC ESI                             ; 00574b23
    CMP dword ptr [EAX + 0x4],0x40      ; 00574b24
        ;   Label: LAB_00574b24
    JNZ 0x00574b2b                      ; 00574b28
        ;   XREF to: 00574b2b (CONDITIONAL_JUMP)  ; LAB_00574b2b
    INC EDI                             ; 00574b2a
    CMP dword ptr [EAX + 0x4],0x80      ; 00574b2b
        ;   Label: LAB_00574b2b
    JNZ 0x00574b35                      ; 00574b32
        ;   XREF to: 00574b35 (CONDITIONAL_JUMP)  ; LAB_00574b35
    INC ECX                             ; 00574b34
    CMP dword ptr [EAX + 0x4],0x100     ; 00574b35
        ;   Label: LAB_00574b35
    JNZ 0x00574b42                      ; 00574b3c
        ;   XREF to: 00574b42 (CONDITIONAL_JUMP)  ; LAB_00574b42
    INC dword ptr [ESP + 0x4]           ; 00574b3e
    CMP dword ptr [EAX + 0x4],0x200     ; 00574b42
        ;   Label: LAB_00574b42
    JNZ 0x00574b4c                      ; 00574b49
        ;   XREF to: 00574b4c (CONDITIONAL_JUMP)  ; LAB_00574b4c
    INC EBX                             ; 00574b4b
    CMP dword ptr [EAX + 0x4],0x400     ; 00574b4c
        ;   Label: LAB_00574b4c
    JNZ 0x00574b58                      ; 00574b53
        ;   XREF to: 00574b58 (CONDITIONAL_JUMP)  ; LAB_00574b58
    INC dword ptr [ESP]                 ; 00574b55
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00574b58
        ;   Label: LAB_00574b58
    INC EDX                             ; 00574b5c
    ADD EAX,0x60                        ; 00574b5d
    CMP EDX,dword ptr [EBP + 0x18004]   ; 00574b60
    JL 0x00574b1d                       ; 00574b66
        ;   XREF to: 00574b1d (CONDITIONAL_JUMP)  ; LAB_00574b1d
    MOV EDX,dword ptr [ESP]             ; 00574b68
        ;   Label: LAB_00574b68
    PUSH EDX                            ; 00574b6b
    PUSH EBX                            ; 00574b6c
    MOV EBX,dword ptr [ESP + 0xc]       ; 00574b6d
    PUSH EBX                            ; 00574b71
    PUSH ECX                            ; 00574b72
    PUSH EDI                            ; 00574b73
    MOV EAX,dword ptr [ESP + 0x30]      ; 00574b74
    PUSH ESI                            ; 00574b78
    MOV ESI,dword ptr [EAX + 0x18004]   ; 00574b79
    PUSH ESI                            ; 00574b7f
    PUSH 0x5ec968                       ; 00574b80 | = "Total: %d, 32: %d, 64: %d, 128: %d, 2..."
    MOV EDI,dword ptr [ESP + 0x40]      ; 00574b85
    PUSH EDI                            ; 00574b89
    CALL crt_unknown.c_FUN_005b7790     ; 00574b8a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x24                        ; 00574b8f
    ADD ESP,0x8                         ; 00574b92
    POP EBP                             ; 00574b95
    POP EDI                             ; 00574b96
    POP ESI                             ; 00574b97
    POP EBX                             ; 00574b98
    LEA EAX,[EAX]                       ; 00574b99
    NOP                                 ; 00574b9f
    RET                                 ; 00574ba0
    PUSH 0x5ec934                       ; 00574ba1 | = "Texture cache has wrapped.  Make it b..."
        ;   Label: LAB_00574ba1
    MOV EAX,dword ptr [ESP + 0x24]      ; 00574ba6
    PUSH EAX                            ; 00574baa
    CALL crt_unknown.c_FUN_005b7790     ; 00574bab
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 00574bb0
    ADD ESP,0x8                         ; 00574bb3
    POP EBP                             ; 00574bb6
    POP EDI                             ; 00574bb7
    POP ESI                             ; 00574bb8
    POP EBX                             ; 00574bb9
    RET                                 ; 00574bba

