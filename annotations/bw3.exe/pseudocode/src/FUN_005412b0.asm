; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005412b0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00532b80 at 00533339
;
; Referenced Globals:
;   undefined4 DAT_005d0d18
;   TerminatedCString s_d_005d0d1c
;
; Called Functions:
;   FUN_005a3230
;   FUN_005a3f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005412b0
        ;   Label: FUN_005412b0
    PUSH ESI                            ; 005412b1
    PUSH EDI                            ; 005412b2
    PUSH EBP                            ; 005412b3
    SUB ESP,0x108                       ; 005412b4
    MOV ESI,dword ptr [ESP + 0x120]     ; 005412ba
    PUSH ESI                            ; 005412c1
    PUSH 0xff                           ; 005412c2
    LEA EAX,[ESP + 0x8]                 ; 005412c7
    PUSH EAX                            ; 005412cb
    CALL FUN_005a3f00                   ; 005412cc
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 005412d1
    LEA EAX,[ESP + 0x100]               ; 005412d4
    PUSH EAX                            ; 005412db
    PUSH 0x5d0d18                       ; 005412dc | DAT_005d0d18
    PUSH ESI                            ; 005412e1
    CALL FUN_005a3230                   ; 005412e2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 005412e7
    MOV EDX,dword ptr [ESP + 0x100]     ; 005412ea
    XOR EDI,EDI                         ; 005412f1
    TEST EDX,EDX                        ; 005412f3
    JLE 0x00541343                      ; 005412f5
        ;   XREF to: 00541343 (CONDITIONAL_JUMP)  ; LAB_00541343
    LEA EAX,[ESP + 0x104]               ; 005412f7
        ;   Label: LAB_005412f7
    PUSH EAX                            ; 005412fe
    PUSH 0x5d0d1c                       ; 005412ff | = "\"%*[^\"]\", %d\n"
    PUSH ESI                            ; 00541304
    CALL FUN_005a3230                   ; 00541305
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 0054130a
    MOV EBP,dword ptr [ESP + 0x104]     ; 0054130d
    XOR EBX,EBX                         ; 00541314
    TEST EBP,EBP                        ; 00541316
    JLE 0x00541337                      ; 00541318
        ;   XREF to: 00541337 (CONDITIONAL_JUMP)  ; LAB_00541337
    PUSH ESI                            ; 0054131a
        ;   Label: LAB_0054131a
    PUSH 0xff                           ; 0054131b
    LEA EAX,[ESP + 0x8]                 ; 00541320
    PUSH EAX                            ; 00541324
    CALL FUN_005a3f00                   ; 00541325
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 0054132a
    INC EBX                             ; 0054132d
    CMP EBX,dword ptr [ESP + 0x104]     ; 0054132e
    JL 0x0054131a                       ; 00541335
        ;   XREF to: 0054131a (CONDITIONAL_JUMP)  ; LAB_0054131a
    MOV ECX,dword ptr [ESP + 0x100]     ; 00541337
        ;   Label: LAB_00541337
    INC EDI                             ; 0054133e
    CMP EDI,ECX                         ; 0054133f
    JL 0x005412f7                       ; 00541341
        ;   XREF to: 005412f7 (CONDITIONAL_JUMP)  ; LAB_005412f7
    ADD ESP,0x108                       ; 00541343
        ;   Label: LAB_00541343
    POP EBP                             ; 00541349
    POP EDI                             ; 0054134a
    POP ESI                             ; 0054134b
    POP EBX                             ; 0054134c
    RET                                 ; 0054134d

