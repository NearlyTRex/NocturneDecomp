; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c3350(int param_1)
;
;
; Referenced Globals:
;   string s_Auto_use_selected_health_0058752f
;   string s_Auto_use_health_00587549
;   string s_no_more_auto_health_left_0058755a
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01cae0d0
;
; Called Functions:
;   FUN_0040d890
;   FUN_0043ac60
;   FUN_004c1580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3350
        ;   Label: FUN_004c3350
    PUSH ESI                            ; 004c3351
    PUSH EDI                            ; 004c3352
    PUSH EBP                            ; 004c3353
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c3354
    MOV EDX,dword ptr [EDI + 0x334]     ; 004c3358
    TEST EDX,EDX                        ; 004c335e
    JNZ 0x004c33a8                      ; 004c3360
        ;   XREF to: 004c33a8 (CONDITIONAL_JUMP)  ; LAB_004c33a8
    MOV ESI,dword ptr [EDI + 0x8]       ; 004c3362
        ;   Label: LAB_004c3362
    XOR EBX,EBX                         ; 004c3365
    TEST ESI,ESI                        ; 004c3367
    JLE 0x004c338f                      ; 004c3369
        ;   XREF to: 004c338f (CONDITIONAL_JUMP)  ; LAB_004c338f
    MOV ESI,EDI                         ; 004c336b
    MOV ECX,dword ptr [0x01cae0d0]      ; 004c336d | DAT_01cae0d0
        ;   Label: LAB_004c336d
    PUSH ECX                            ; 004c3373
    MOV EBP,dword ptr [ESI + 0xc]       ; 004c3374
    PUSH EBP                            ; 004c3377
    CALL FUN_0040d890                   ; 004c3378
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 004c337d
    TEST EAX,EAX                        ; 004c3380
    JNZ 0x004c33db                      ; 004c3382
        ;   XREF to: 004c33db (CONDITIONAL_JUMP)  ; LAB_004c33db
    INC EBX                             ; 004c3384
    MOV EAX,dword ptr [EDI + 0x8]       ; 004c3385
    ADD ESI,0x4                         ; 004c3388
    CMP EBX,EAX                         ; 004c338b
    JL 0x004c336d                       ; 004c338d
        ;   XREF to: 004c336d (CONDITIONAL_JUMP)  ; LAB_004c336d
    PUSH 0x58755a                       ; 004c338f | = "no more auto health left\n"
        ;   Label: LAB_004c338f
    MOV EDX,dword ptr [0x005ad350]      ; 004c3394 | PTR_DAT_005ad350
    PUSH EDX                            ; 004c339a | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 004c339b
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0x8                         ; 004c33a0
        ;   Label: LAB_004c33a0
    POP EBP                             ; 004c33a3
    POP EDI                             ; 004c33a4
    POP ESI                             ; 004c33a5
    POP EBX                             ; 004c33a6
    RET                                 ; 004c33a7
    MOV ECX,dword ptr [0x01cae0d0]      ; 004c33a8 | DAT_01cae0d0
        ;   Label: LAB_004c33a8
    PUSH ECX                            ; 004c33ae
    PUSH EDX                            ; 004c33af
    CALL FUN_0040d890                   ; 004c33b0
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    MOV EBX,EAX                         ; 004c33b5
    ADD ESP,0x8                         ; 004c33b7
    TEST EAX,EAX                        ; 004c33ba
    JZ 0x004c3362                       ; 004c33bc
        ;   XREF to: 004c3362 (CONDITIONAL_JUMP)  ; LAB_004c3362
    PUSH 0x58752f                       ; 004c33be | = "Auto use selected health\n"
    MOV EBP,dword ptr [0x005ad350]      ; 004c33c3 | PTR_DAT_005ad350
    PUSH EBP                            ; 004c33c9 | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 004c33ca
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0x8                         ; 004c33cf
    PUSH EBX                            ; 004c33d2
    PUSH EDI                            ; 004c33d3
    CALL FUN_004c1580                   ; 004c33d4
        ;   XREF to: 004c1580 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1580()
    JMP 0x004c33a0                      ; 004c33d9
        ;   XREF to: 004c33a0 (UNCONDITIONAL_JUMP)  ; LAB_004c33a0
    PUSH EAX                            ; 004c33db
        ;   Label: LAB_004c33db
    PUSH EDI                            ; 004c33dc
    CALL FUN_004c1580                   ; 004c33dd
        ;   XREF to: 004c1580 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1580()
    ADD ESP,0x8                         ; 004c33e2
    PUSH 0x587549                       ; 004c33e5 | = "Auto use health\n"
    MOV EAX,[0x005ad350]                ; 004c33ea | PTR_DAT_005ad350
    PUSH EAX                            ; 004c33ef | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 004c33f0
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0x8                         ; 004c33f5
    POP EBP                             ; 004c33f8
    POP EDI                             ; 004c33f9
    POP ESI                             ; 004c33fa
    POP EBX                             ; 004c33fb
    RET                                 ; 004c33fc

