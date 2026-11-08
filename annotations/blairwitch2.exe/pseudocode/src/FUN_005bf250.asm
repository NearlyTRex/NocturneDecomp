; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_005bf250(uint param_1)
;
;
; XREF[2]:
;   FUN_005b929c at 005b93c0
;   FUN_005baab0 at 005baad1
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005c862c = 001c9182
;   void* PTR_FUN_0061f2a8 = 005bce04
;   void* PTR_FUN_0061f2ac = 005bce04
;   undefined4 DAT_0061f480
;   undefined4 DAT_0061f4d8
;
; Called Functions:
;   FUN_005bce04
;   FUN_005be180
;   FUN_005c036c
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bf250
        ;   Label: FUN_005bf250
    PUSH ESI                            ; 005bf251
    MOV EBX,dword ptr [ESP + 0xc]       ; 005bf252
    TEST EBX,EBX                        ; 005bf256
    JL 0x005bf262                       ; 005bf258
        ;   XREF to: 005bf262 (CONDITIONAL_JUMP)  ; LAB_005bf262
    CMP EBX,dword ptr [0x0061f480]      ; 005bf25a | DAT_0061f480
    JBE 0x005bf274                      ; 005bf260
        ;   XREF to: 005bf274 (CONDITIONAL_JUMP)  ; LAB_005bf274
    PUSH 0x4                            ; 005bf262
        ;   Label: LAB_005bf262
    CALL FUN_005be180                   ; 005bf264
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    MOV EAX,0xffffffff                  ; 005bf269
    ADD ESP,0x4                         ; 005bf26e
    POP ESI                             ; 005bf271
    POP EBX                             ; 005bf272
    RET                                 ; 005bf273
    MOV ESI,dword ptr [0x0061f4d8]      ; 005bf274 | DAT_0061f4d8
        ;   Label: LAB_005bf274
    PUSH EBX                            ; 005bf27a
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 005bf27b
    CALL dword ptr [0x0061f2a8]         ; 005bf27e | PTR_FUN_0061f2a8
    ADD ESP,0x4                         ; 005bf284
    PUSH 0x1                            ; 005bf287
    PUSH 0x0                            ; 005bf289
    PUSH 0x0                            ; 005bf28b
    PUSH ESI                            ; 005bf28d
    CALL dword ptr CS:[0x5c862c]        ; 005bf28e | PTR_SetFilePointer_005c862c
    PUSH EBX                            ; 005bf295
    MOV ESI,EAX                         ; 005bf296
    CALL dword ptr [0x0061f2ac]         ; 005bf298 | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005bf29e
    CMP ESI,-0x1                        ; 005bf2a1
    JNZ 0x005bf2ab                      ; 005bf2a4
        ;   XREF to: 005bf2ab (CONDITIONAL_JUMP)  ; LAB_005bf2ab
    CALL FUN_005c036c                   ; 005bf2a6
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined FUN_005c036c()
    MOV EAX,ESI                         ; 005bf2ab
        ;   Label: LAB_005bf2ab
    POP ESI                             ; 005bf2ad
    POP EBX                             ; 005bf2ae
    RET                                 ; 005bf2af

