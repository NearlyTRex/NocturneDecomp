; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_texture_cpp_FUN_00574240(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_00574ea0 at 00574efa
;
; Called Functions:
;   engine_texture.cpp_FUN_00573a60
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00574240
        ;   Label: engine_texture.cpp_FUN_00574240
    PUSH EDI                            ; 00574241
    MOV EDI,dword ptr [ESP + 0xc]       ; 00574242
    PUSH EDI                            ; 00574246
    CALL engine_texture.cpp_FUN_00573a60 ; 00574247
        ;   XREF to: 00573a60 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00573a60()
    MOV ECX,EAX                         ; 0057424c
    SHL EAX,0x2                         ; 0057424e
    SUB EAX,ECX                         ; 00574251
    LEA EDX,[EDI + 0x4]                 ; 00574253
    SHL EAX,0x5                         ; 00574256
    ADD ESP,0x4                         ; 00574259
    ADD EDX,EAX                         ; 0057425c
    MOV ESI,dword ptr [ESP + 0x10]      ; 0057425e
    LEA EDI,[EDX + 0x4]                 ; 00574262
    PUSH EDI                            ; 00574265
    MOV AL,byte ptr [ESI]               ; 00574266
        ;   Label: LAB_00574266
    MOV byte ptr [EDI],AL               ; 00574268
    CMP AL,0x0                          ; 0057426a
    JZ 0x0057427e                       ; 0057426c
        ;   XREF to: 0057427e (CONDITIONAL_JUMP)  ; LAB_0057427e
    MOV AL,byte ptr [ESI + 0x1]         ; 0057426e
    ADD ESI,0x2                         ; 00574271
    MOV byte ptr [EDI + 0x1],AL         ; 00574274
    ADD EDI,0x2                         ; 00574277
    CMP AL,0x0                          ; 0057427a
    JNZ 0x00574266                      ; 0057427c
        ;   XREF to: 00574266 (CONDITIONAL_JUMP)  ; LAB_00574266
    POP EDI                             ; 0057427e
        ;   Label: LAB_0057427e
    MOV EAX,dword ptr [ESP + 0x14]      ; 0057427f
    MOV dword ptr [EDX + 0x58],0x1      ; 00574283
    MOV dword ptr [EDX],EAX             ; 0057428a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0057428c
    MOV dword ptr [EDX + 0x44],EAX      ; 00574290
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00574293
    MOV dword ptr [EDX + 0x4c],EAX      ; 00574297
    MOV EAX,dword ptr [ESP + 0x20]      ; 0057429a
    MOV dword ptr [EDX + 0x48],EAX      ; 0057429e
    MOV EAX,ECX                         ; 005742a1
    POP EDI                             ; 005742a3
    POP ESI                             ; 005742a4
    RET                                 ; 005742a5

