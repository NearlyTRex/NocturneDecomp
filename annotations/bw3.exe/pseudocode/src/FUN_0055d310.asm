; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055d310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_00604500
;   undefined4 DAT_02cf49d4
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0055d310
        ;   Label: FUN_0055d310
    MOV EDX,dword ptr [0x02cf49d4]      ; 0055d313 | DAT_02cf49d4
    TEST EDX,EDX                        ; 0055d319
    JNZ 0x0055d321                      ; 0055d31b
        ;   XREF to: 0055d321 (CONDITIONAL_JUMP)  ; LAB_0055d321
    ADD ESP,0x10                        ; 0055d31d
    RET                                 ; 0055d320
    MOV EAX,dword ptr [ESP + 0x18]      ; 0055d321
        ;   Label: LAB_0055d321
    PUSH 0x10                           ; 0055d325
    MOV dword ptr [ESP + 0x8],EAX       ; 0055d327
    MOV EAX,dword ptr [ESP + 0x20]      ; 0055d32b
    XOR ECX,ECX                         ; 0055d32f
    MOV dword ptr [ESP + 0xc],EAX       ; 0055d331
    MOV EAX,dword ptr [ESP + 0x24]      ; 0055d335
    MOV dword ptr [ESP + 0x4],ECX       ; 0055d339
    MOV dword ptr [ESP + 0x10],EAX      ; 0055d33d
    MOV EAX,EDX                         ; 0055d341
    MOV ECX,dword ptr [EDX]             ; 0055d343
    LEA EDX,[ESP + 0x4]                 ; 0055d345
    PUSH EDX                            ; 0055d349
    PUSH 0x0                            ; 0055d34a
    PUSH 0x0                            ; 0055d34c
    PUSH 0x0                            ; 0055d34e
    PUSH 0x604500                       ; 0055d350 | DAT_00604500
    PUSH EAX                            ; 0055d355
    CALL dword ptr [ECX + 0x10]         ; 0055d356
    ADD ESP,0x10                        ; 0055d359
    RET                                 ; 0055d35c

