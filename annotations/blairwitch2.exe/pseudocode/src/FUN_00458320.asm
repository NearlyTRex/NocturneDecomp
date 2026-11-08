; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00458320(int param_1)
;
;
; XREF[1]:
;   FUN_00453250 at 00453af9
;
; Referenced Globals:
;   undefined4 s_actionPending_d_doc_cpp_005d030e+1
;   undefined4 DAT_006138e0
;   undefined4 DAT_007bc3e0
;
; Called Functions:
;   FUN_0040c8f0
;   FUN_0040e670
;   FUN_0047bdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458320
        ;   Label: FUN_00458320
    PUSH EBP                            ; 00458321
    MOV EBX,dword ptr [ESP + 0xc]       ; 00458322
    CMP dword ptr [EBX + 0x25608],0x0   ; 00458326
    JZ 0x00458378                       ; 0045832d
        ;   XREF to: 00458378 (CONDITIONAL_JUMP)  ; LAB_00458378
    MOV ECX,dword ptr [EBX + 0x256a4]   ; 0045832f
    CMP ECX,0x4                         ; 00458335
    JNZ 0x0045837b                      ; 00458338
        ;   XREF to: 0045837b (CONDITIONAL_JUMP)  ; LAB_0045837b
    MOV EBP,dword ptr [0x007bc3e0]      ; 0045833a | DAT_007bc3e0
        ;   Label: LAB_0045833a
    PUSH EBP                            ; 00458340
    MOV EAX,dword ptr [EBX + 0x25608]   ; 00458341
    PUSH EAX                            ; 00458347
    CALL FUN_0040c8f0                   ; 00458348
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045834d
    TEST EAX,EAX                        ; 00458350
    JZ 0x00458364                       ; 00458352
        ;   XREF to: 00458364 (CONDITIONAL_JUMP)  ; LAB_00458364
    LEA EDX,[EBX + 0x2437c]             ; 00458354
    PUSH EDX                            ; 0045835a
    PUSH EAX                            ; 0045835b
    CALL FUN_0040e670                   ; 0045835c
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e670()
    ADD ESP,0x8                         ; 00458361
    MOV dword ptr [EBX + 0x256a4],0x1   ; 00458364
        ;   Label: LAB_00458364
    MOV dword ptr [EBX + 0x25608],0x0   ; 0045836e
    POP EBP                             ; 00458378
        ;   Label: LAB_00458378
    POP EBX                             ; 00458379
    RET                                 ; 0045837a
    PUSH EDI                            ; 0045837b
        ;   Label: LAB_0045837b
    PUSH 0xeeb                          ; 0045837c
    PUSH ECX                            ; 00458381
    PUSH 0x5d030f                       ; 00458382 | s_actionPending_d_doc_cpp_005d030e+1
    MOV EDI,dword ptr [0x006138e0]      ; 00458387 | DAT_006138e0
    PUSH EDI                            ; 0045838d
    CALL FUN_0047bdf0                   ; 0045838e
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bdf0()
    ADD ESP,0x10                        ; 00458393
    POP EDI                             ; 00458396
    JMP 0x0045833a                      ; 00458397
        ;   XREF to: 0045833a (UNCONDITIONAL_JUMP)  ; LAB_0045833a

