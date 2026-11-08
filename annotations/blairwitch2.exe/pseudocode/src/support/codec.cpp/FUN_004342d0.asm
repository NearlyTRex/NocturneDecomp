; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004342d0(int *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004347c0 at 004347d5
;   FUN_004349d0 at 004349e5
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005cd996
;   TerminatedCString s_CLZWDictionary_init_out_005cd9ab
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00434350
;   FUN_004e4500
;   FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004342d0
        ;   Label: FUN_004342d0
    PUSH ESI                            ; 004342d1
    PUSH EBP                            ; 004342d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004342d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004342d7
    CMP EAX,dword ptr [EBX]             ; 004342db
    JNZ 0x004342f9                      ; 004342dd
        ;   XREF to: 004342f9 (CONDITIONAL_JUMP)  ; LAB_004342f9
    CMP dword ptr [EBX + 0x10],0x0      ; 004342df
    JZ 0x004342f9                       ; 004342e3
        ;   XREF to: 004342f9 (CONDITIONAL_JUMP)  ; LAB_004342f9
    MOV EAX,dword ptr [ESP + 0x18]      ; 004342e5
        ;   Label: LAB_004342e5
    PUSH EBX                            ; 004342e9
    MOV dword ptr [EBX + 0x4],EAX       ; 004342ea
    CALL FUN_00434350                   ; 004342ed
        ;   XREF to: 00434350 (UNCONDITIONAL_CALL)  ; undefined FUN_00434350()
    ADD ESP,0x4                         ; 004342f2
    POP EBP                             ; 004342f5
    POP ESI                             ; 004342f6
    POP EBX                             ; 004342f7
    RET                                 ; 004342f8
    MOV dword ptr [EBX],EAX             ; 004342f9
        ;   Label: LAB_004342f9
    SHL EAX,0x4                         ; 004342fb
    PUSH EAX                            ; 004342fe
    MOV ESI,dword ptr [EBX + 0x10]      ; 004342ff
    PUSH ESI                            ; 00434302
    CALL FUN_005b8ce0                   ; 00434303
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    ADD ESP,0x8                         ; 00434308
    MOV dword ptr [EBX + 0x10],EAX      ; 0043430b
    TEST EAX,EAX                        ; 0043430e
    JNZ 0x004342e5                      ; 00434310
        ;   XREF to: 004342e5 (CONDITIONAL_JUMP)  ; LAB_004342e5
    MOV EBP,0x5cd996                    ; 00434312 | = "..\\support\\codec.cpp"
    MOV EAX,0x342                       ; 00434317
    PUSH 0x5cd9ab                       ; 0043431c | = "CLZWDictionary::init - out of memory"
    MOV dword ptr [0x01d046a0],EBP      ; 00434321 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00434327 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0043432c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00434331
    MOV EAX,dword ptr [ESP + 0x18]      ; 00434334
    PUSH EBX                            ; 00434338
    MOV dword ptr [EBX + 0x4],EAX       ; 00434339
    CALL FUN_00434350                   ; 0043433c
        ;   XREF to: 00434350 (UNCONDITIONAL_CALL)  ; undefined FUN_00434350()
    ADD ESP,0x4                         ; 00434341
    POP EBP                             ; 00434344
    POP ESI                             ; 00434345
    POP EBX                             ; 00434346
    RET                                 ; 00434347

