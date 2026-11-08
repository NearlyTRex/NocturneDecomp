; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005cf340(uint param_1)
;
;
; XREF[1]:
;   FUN_005cf2f0 at 005cf2f6
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; Called Functions:
;   FUN_005cf390
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005cf340
        ;   Label: FUN_005cf340
    CMP dword ptr [0x02c9f6e0],0x0      ; 005cf344 | DAT_02c9f6e0
    JZ 0x005cf380                       ; 005cf34b
        ;   XREF to: 005cf380 (CONDITIONAL_JUMP)  ; LAB_005cf380
    MOV EAX,EDX                         ; 005cf34d
    SHR EAX,0x8                         ; 005cf34f
    AND EAX,0xff                        ; 005cf352
    MOV AL,byte ptr [EAX + 0x2c9f6f1]   ; 005cf357
    AND AL,0x1                          ; 005cf35d
    AND EAX,0xff                        ; 005cf35f
    JZ 0x005cf380                       ; 005cf364
        ;   XREF to: 005cf380 (CONDITIONAL_JUMP)  ; LAB_005cf380
    MOV EAX,EDX                         ; 005cf366
    AND EAX,0xff                        ; 005cf368
    PUSH EAX                            ; 005cf36d
    CALL FUN_005cf390                   ; 005cf36e
        ;   XREF to: 005cf390 (UNCONDITIONAL_CALL)  ; undefined FUN_005cf390()
    ADD ESP,0x4                         ; 005cf373
    TEST EAX,EAX                        ; 005cf376
    JZ 0x005cf380                       ; 005cf378
        ;   XREF to: 005cf380 (CONDITIONAL_JUMP)  ; LAB_005cf380
    MOV EAX,0x1                         ; 005cf37a
    RET                                 ; 005cf37f
    XOR EAX,EAX                         ; 005cf380
        ;   Label: LAB_005cf380
    RET                                 ; 005cf382

