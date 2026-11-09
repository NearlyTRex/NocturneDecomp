; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_texture_cpp_FUN_005742b0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_00574f5c at 00574fb0
;
; Called Functions:
;   engine_texture.cpp_FUN_00573a60
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005742b0
        ;   Label: engine_texture.cpp_FUN_005742b0
    PUSH EDI                            ; 005742b1
    MOV EDI,dword ptr [ESP + 0xc]       ; 005742b2
    PUSH EDI                            ; 005742b6
    CALL engine_texture.cpp_FUN_00573a60 ; 005742b7
        ;   XREF to: 00573a60 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00573a60()
    MOV ECX,EAX                         ; 005742bc
    SHL EAX,0x2                         ; 005742be
    SUB EAX,ECX                         ; 005742c1
    LEA EDX,[EDI + 0x4]                 ; 005742c3
    SHL EAX,0x5                         ; 005742c6
    ADD ESP,0x4                         ; 005742c9
    ADD EDX,EAX                         ; 005742cc
    MOV ESI,dword ptr [ESP + 0x10]      ; 005742ce
    LEA EDI,[EDX + 0x4]                 ; 005742d2
    PUSH EDI                            ; 005742d5
    MOV AL,byte ptr [ESI]               ; 005742d6
        ;   Label: LAB_005742d6
    MOV byte ptr [EDI],AL               ; 005742d8
    CMP AL,0x0                          ; 005742da
    JZ 0x005742ee                       ; 005742dc
        ;   XREF to: 005742ee (CONDITIONAL_JUMP)  ; LAB_005742ee
    MOV AL,byte ptr [ESI + 0x1]         ; 005742de
    ADD ESI,0x2                         ; 005742e1
    MOV byte ptr [EDI + 0x1],AL         ; 005742e4
    ADD EDI,0x2                         ; 005742e7
    CMP AL,0x0                          ; 005742ea
    JNZ 0x005742d6                      ; 005742ec
        ;   XREF to: 005742d6 (CONDITIONAL_JUMP)  ; LAB_005742d6
    POP EDI                             ; 005742ee
        ;   Label: LAB_005742ee
    MOV EAX,dword ptr [ESP + 0x18]      ; 005742ef
    MOV dword ptr [EDX + 0x58],0x1      ; 005742f3
    MOV dword ptr [EDX + 0x50],EAX      ; 005742fa
    MOV EAX,dword ptr [ESP + 0x14]      ; 005742fd
    MOV dword ptr [EDX],EAX             ; 00574301
    MOV EAX,ECX                         ; 00574303
    POP EDI                             ; 00574305
    POP ESI                             ; 00574306
    RET                                 ; 00574307

