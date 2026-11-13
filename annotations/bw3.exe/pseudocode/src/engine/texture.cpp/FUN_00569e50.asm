; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_texture_cpp_FUN_00569e50(CTextureCache *param_1,char *param_2,int param_3,uchar *param_4,uchar *param_5,uchar *param_6)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_0056aab0 at 0056ab0a
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_findFreeSlot_FUN_00569670
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00569e50
        ;   Label: engine_texture.cpp_FUN_00569e50
    PUSH EDI                            ; 00569e51
    MOV EDI,dword ptr [ESP + 0xc]       ; 00569e52
    PUSH EDI                            ; 00569e56
    CALL engine_texture.cpp_CTextureCache_findFreeSlot_FUN_00569670 ; 00569e57
        ;   XREF to: 00569670 (UNCONDITIONAL_CALL)  ; int engine_texture.cpp_CTextureCache_findFreeSlot_FUN_00569670(CTextureCache * this_ptr)
    MOV ECX,EAX                         ; 00569e5c
    SHL EAX,0x2                         ; 00569e5e
    SUB EAX,ECX                         ; 00569e61
    LEA EDX,[EDI + 0x4]                 ; 00569e63
    SHL EAX,0x5                         ; 00569e66
    ADD ESP,0x4                         ; 00569e69
    ADD EDX,EAX                         ; 00569e6c
    MOV ESI,dword ptr [ESP + 0x10]      ; 00569e6e
    LEA EDI,[EDX + 0x4]                 ; 00569e72
    PUSH EDI                            ; 00569e75
    MOV AL,byte ptr [ESI]               ; 00569e76
        ;   Label: LAB_00569e76
    MOV byte ptr [EDI],AL               ; 00569e78
    CMP AL,0x0                          ; 00569e7a
    JZ 0x00569e8e                       ; 00569e7c
        ;   XREF to: 00569e8e (CONDITIONAL_JUMP)  ; LAB_00569e8e
    MOV AL,byte ptr [ESI + 0x1]         ; 00569e7e
    ADD ESI,0x2                         ; 00569e81
    MOV byte ptr [EDI + 0x1],AL         ; 00569e84
    ADD EDI,0x2                         ; 00569e87
    CMP AL,0x0                          ; 00569e8a
    JNZ 0x00569e76                      ; 00569e8c
        ;   XREF to: 00569e76 (CONDITIONAL_JUMP)  ; LAB_00569e76
    POP EDI                             ; 00569e8e
        ;   Label: LAB_00569e8e
    MOV EAX,dword ptr [ESP + 0x14]      ; 00569e8f
    MOV dword ptr [EDX + 0x58],0x1      ; 00569e93
    MOV dword ptr [EDX],EAX             ; 00569e9a
    MOV EAX,dword ptr [ESP + 0x18]      ; 00569e9c
    MOV dword ptr [EDX + 0x44],EAX      ; 00569ea0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00569ea3
    MOV dword ptr [EDX + 0x4c],EAX      ; 00569ea7
    MOV EAX,dword ptr [ESP + 0x20]      ; 00569eaa
    MOV dword ptr [EDX + 0x48],EAX      ; 00569eae
    MOV EAX,ECX                         ; 00569eb1
    POP EDI                             ; 00569eb3
    POP ESI                             ; 00569eb4
    RET                                 ; 00569eb5

