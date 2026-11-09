; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005b8250(undefined4 *param_1)
;
;
; XREF[1]:
;   crt_stdio.c_fgetc_FUN_005b8180 at 005b81e5
;
; Called Functions:
;   crt_unknown.c_FUN_005b8280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8250
        ;   Label: crt_unknown.c_FUN_005b8250
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b8251
    PUSH EBX                            ; 005b8255
    CALL crt_unknown.c_FUN_005b8280     ; 005b8256
        ;   XREF to: 005b8280 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8280()
    ADD ESP,0x4                         ; 005b825b
    TEST EAX,EAX                        ; 005b825e
    JNZ 0x005b8269                      ; 005b8260
        ;   XREF to: 005b8269 (CONDITIONAL_JUMP)  ; LAB_005b8269
    MOV EAX,0xffffffff                  ; 005b8262
    POP EBX                             ; 005b8267
    RET                                 ; 005b8268
    MOV EDX,dword ptr [EBX + 0x4]       ; 005b8269
        ;   Label: LAB_005b8269
    MOV ECX,dword ptr [EBX]             ; 005b826c
    DEC EDX                             ; 005b826e
    INC ECX                             ; 005b826f
    MOV dword ptr [EBX + 0x4],EDX       ; 005b8270
    MOV dword ptr [EBX],ECX             ; 005b8273
    MOV AL,byte ptr [ECX + -0x1]        ; 005b8275
    AND EAX,0xff                        ; 005b8278
    POP EBX                             ; 005b827d
    RET                                 ; 005b827e

