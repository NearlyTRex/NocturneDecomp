; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_0056b2b4(int *param_1,undefined1 *param_2)
;
;
; XREF[1]:
;   FUN_00564c53 at 00564cd6
;
; Called Functions:
;   FUN_0056b327
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b2b4
        ;   Label: FUN_0056b2b4
    PUSH ESI                            ; 0056b2b5
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056b2b6
    MOV EAX,dword ptr [EBX]             ; 0056b2ba
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b2bc
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0056b2bf
    MOV EDX,dword ptr [EAX + 0x14]      ; 0056b2c3
    MOV ECX,dword ptr [EAX + 0x10]      ; 0056b2c6
    MOV ESI,EAX                         ; 0056b2c9
    CMP EDX,ECX                         ; 0056b2cb
    JNC 0x0056b2f8                      ; 0056b2cd
        ;   XREF to: 0056b2f8 (CONDITIONAL_JUMP)  ; LAB_0056b2f8
    MOV EAX,dword ptr [ESI + 0x14]      ; 0056b2cf
        ;   Label: LAB_0056b2cf
    LEA EDX,[EAX + 0x1]                 ; 0056b2d2
    MOV dword ptr [ESI + 0x14],EDX      ; 0056b2d5
    MOV AL,byte ptr [EAX]               ; 0056b2d8
    AND EAX,0xff                        ; 0056b2da
    MOV EDX,EAX                         ; 0056b2df
        ;   Label: LAB_0056b2df
    CMP EAX,-0x1                        ; 0056b2e1
    JZ 0x0056b309                       ; 0056b2e4
        ;   XREF to: 0056b309 (CONDITIONAL_JUMP)  ; LAB_0056b309
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056b2e6
    MOV byte ptr [EAX],DL               ; 0056b2ea
    MOV dword ptr [EBX + 0x4],0x1       ; 0056b2ec
    MOV EAX,EBX                         ; 0056b2f3
    POP ESI                             ; 0056b2f5
    POP EBX                             ; 0056b2f6
    RET                                 ; 0056b2f7
    PUSH EAX                            ; 0056b2f8
        ;   Label: LAB_0056b2f8
    MOV EDX,dword ptr [EAX + 0x28]      ; 0056b2f9
    CALL dword ptr [EDX + 0x10]         ; 0056b2fc
    ADD ESP,0x4                         ; 0056b2ff
    CMP EAX,-0x1                        ; 0056b302
    JNZ 0x0056b2cf                      ; 0056b305
        ;   XREF to: 0056b2cf (CONDITIONAL_JUMP)  ; LAB_0056b2cf
    JMP 0x0056b2df                      ; 0056b307
        ;   XREF to: 0056b2df (UNCONDITIONAL_JUMP)  ; LAB_0056b2df
    MOV EAX,dword ptr [EBX]             ; 0056b309
        ;   Label: LAB_0056b309
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b30b
    PUSH 0x6                            ; 0056b30e
    ADD EAX,EBX                         ; 0056b310
    PUSH EAX                            ; 0056b312
    CALL FUN_0056b327                   ; 0056b313
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b327()
    ADD ESP,0x8                         ; 0056b318
    MOV dword ptr [EBX + 0x4],0x0       ; 0056b31b
    MOV EAX,EBX                         ; 0056b322
    POP ESI                             ; 0056b324
    POP EBX                             ; 0056b325
    RET                                 ; 0056b326

