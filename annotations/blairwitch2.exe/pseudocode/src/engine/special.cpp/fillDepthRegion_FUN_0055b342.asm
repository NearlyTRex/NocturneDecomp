; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_fillDepthRegion_FUN_0055b342(int left,int right,int top,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   right
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   bottom
;
; XREF[1]:
;   unkaddr_0059aa80.cpp_FUN_0059bb60 at 0059bc1f
;
; Referenced Globals:
;   undefined8 DAT_0061c78c
;   undefined4 DAT_0061c794
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c37788
;
; Called Functions:
;   engine_special.cpp_clearZBox_FUN_0055ff10
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0055b342
        ;   Label: engine_special.cpp_fillDepthRegion_FUN_0055b342
    MOV EBP,ESP                         ; 0055b343
    PUSH ESI                            ; 0055b345
    PUSH EDI                            ; 0055b346
    CMP dword ptr [0x01c37788],0x0      ; 0055b347 | DAT_01c37788
    JZ 0x0055b369                       ; 0055b34e
        ;   XREF to: 0055b369 (CONDITIONAL_JUMP)  ; LAB_0055b369
    PUSH dword ptr [EBP + 0x14]         ; 0055b350
    PUSH dword ptr [EBP + 0x10]         ; 0055b353
    PUSH dword ptr [EBP + 0xc]          ; 0055b356
    PUSH dword ptr [EBP + 0x8]          ; 0055b359
    CALL engine_special.cpp_clearZBox_FUN_0055ff10 ; 0055b35c
        ;   XREF to: 0055ff10 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clearZBox_FUN_0055ff10(int left, int right, int top, int bottom)
    POP EAX                             ; 0055b361
    POP EAX                             ; 0055b362
    POP EAX                             ; 0055b363
    POP EAX                             ; 0055b364
    POP EDI                             ; 0055b365
    POP ESI                             ; 0055b366
    LEAVE                               ; 0055b367
    RET                                 ; 0055b368
    PUSHAD                              ; 0055b369
        ;   Label: LAB_0055b369
    CLD                                 ; 0055b36a
    PUSH DS                             ; 0055b36b
    POP ES                              ; 0055b36c
    MOV ECX,dword ptr [EBP + 0xc]       ; 0055b36d
    MOV EBX,dword ptr [EBP + 0x10]      ; 0055b370
    SUB ECX,dword ptr [EBP + 0x8]       ; 0055b373
    MOV EAX,0x0                         ; 0055b376
    INC ECX                             ; 0055b37b
    MOV EDX,dword ptr [EBP + 0x8]       ; 0055b37c
    SHL EDX,0x2                         ; 0055b37f
    FLD double ptr [0x0061c78c]         ; 0055b382 | DAT_0061c78c
    PUSH ECX                            ; 0055b388
        ;   Label: LAB_0055b388
    MOV EDI,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0055b389 | DAT_01c2b64c
    ADD EDI,EDX                         ; 0055b390
    AND EDI,0xfffffff8                  ; 0055b392
    SHR ECX,0x1                         ; 0055b395
    FST double ptr [EDI]                ; 0055b397
        ;   Label: LAB_0055b397
    ADD EDI,0x8                         ; 0055b399
    DEC ECX                             ; 0055b39c
    JGE 0x0055b397                      ; 0055b39d
        ;   XREF to: 0055b397 (CONDITIONAL_JUMP)  ; LAB_0055b397
    POP ECX                             ; 0055b39f
    INC EBX                             ; 0055b3a0
    CMP EBX,dword ptr [EBP + 0x14]      ; 0055b3a1
    JBE 0x0055b388                      ; 0055b3a4
        ;   XREF to: 0055b388 (CONDITIONAL_JUMP)  ; LAB_0055b388
    FSTP double ptr [0x0061c794]        ; 0055b3a6 | DAT_0061c794
    POPAD                               ; 0055b3ac
    POP EDI                             ; 0055b3ad
    POP ESI                             ; 0055b3ae
    LEAVE                               ; 0055b3af
    RET                                 ; 0055b3b0

