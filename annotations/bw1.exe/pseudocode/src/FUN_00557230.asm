; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00557230(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[8]:
;   FUN_00428ae0 at 00428df8
;   FUN_00432f10 at 00433517
;   FUN_00459100 at 00459470
;   FUN_004724a0 at 00472d28
;   FUN_004caff0 at 004cb17f
;   FUN_0057ce10 at 0057d553
;   FUN_0058eb50 at 0058f3d8
;   FUN_005bafb0 at 005bb291
;
; Referenced Globals:
;   undefined4 DAT_01fe5c1c
;
; Called Functions:
;   FUN_0048b880
;   FUN_005578b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557230
        ;   Label: FUN_00557230
    PUSH ESI                            ; 00557231
    PUSH EDI                            ; 00557232
    PUSH EBP                            ; 00557233
    MOV EBP,ESP                         ; 00557234
    SUB ESP,0xc                         ; 00557236
    AND ESP,0xfffffff8                  ; 00557239
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0055723c
    PUSH EDX                            ; 0055723f
    MOV ECX,dword ptr [EBP + 0x18]      ; 00557240
    PUSH ECX                            ; 00557243
    PUSH 0x1fe5c1c                      ; 00557244 | DAT_01fe5c1c
    CALL FUN_0048b880                   ; 00557249
        ;   XREF to: 0048b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0048b880()
    ADD ESP,0xc                         ; 0055724e
    TEST EAX,EAX                        ; 00557251
    JZ 0x00557261                       ; 00557253
        ;   XREF to: 00557261 (CONDITIONAL_JUMP)  ; LAB_00557261
    MOV EAX,0x1                         ; 00557255
        ;   Label: LAB_00557255
    MOV ESP,EBP                         ; 0055725a
    POP EBP                             ; 0055725c
    POP EDI                             ; 0055725d
    POP ESI                             ; 0055725e
    POP EBX                             ; 0055725f
    RET                                 ; 00557260
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00557261
        ;   Label: LAB_00557261
    PUSH 0x3f8147ae                     ; 00557264
    PUSH EBX                            ; 00557269
    MOV ESI,dword ptr [EBP + 0x18]      ; 0055726a
    PUSH ESI                            ; 0055726d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0055726e
    PUSH 0xbf800000                     ; 00557271
    PUSH EDI                            ; 00557276
    CALL FUN_005578b0                   ; 00557277
        ;   XREF to: 005578b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005578b0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0055727c
    FLD float ptr [ESP + 0x1c]          ; 00557280
    ADD ESP,0x14                        ; 00557284
    FLDZ                                ; 00557287
    FXCH                                ; 00557289
    FSTP double ptr [ESP]               ; 0055728b
    FCOMP double ptr [ESP]              ; 0055728e
    FNSTSW AX                           ; 00557291
    SAHF                                ; 00557293
    JA 0x005572a0                       ; 00557294
        ;   XREF to: 005572a0 (CONDITIONAL_JUMP)  ; LAB_005572a0
    FLD1                                ; 00557296
    FCOMP double ptr [ESP]              ; 00557298
    FNSTSW AX                           ; 0055729b
    SAHF                                ; 0055729d
    JNC 0x00557255                      ; 0055729e
        ;   XREF to: 00557255 (CONDITIONAL_JUMP)  ; LAB_00557255
    XOR EAX,EAX                         ; 005572a0
        ;   Label: LAB_005572a0
    MOV ESP,EBP                         ; 005572a2
    POP EBP                             ; 005572a4
    POP EDI                             ; 005572a5
    POP ESI                             ; 005572a6
    POP EBX                             ; 005572a7
    RET                                 ; 005572a8

