; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00571280(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0056e608 at 0056e633
;   FUN_0056e6e4 at 0056e7cf
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae8 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1aec = 005671e4
;   undefined4 DAT_02de5d70
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c_FUN_005638d0
;   crt_unknown.c_FUN_00565c50
;   FUN_00572e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571280
        ;   Label: FUN_00571280
    PUSH ESI                            ; 00571281
    PUSH EDI                            ; 00571282
    MOV EDI,dword ptr [ESP + 0x14]      ; 00571283
    CALL dword ptr [0x005c1ae8]         ; 00571287 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae8
    PUSH 0x10                           ; 0057128d
    MOV ESI,0x1                         ; 0057128f
    PUSH ESI                            ; 00571294
    CALL crt_unknown.c_FUN_00565c50     ; 00571295
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00565c50()
    MOV EBX,EAX                         ; 0057129a
    ADD ESP,0x8                         ; 0057129c
    TEST EAX,EAX                        ; 0057129f
    JZ 0x005712de                       ; 005712a1
        ;   XREF to: 005712de (CONDITIONAL_JUMP)  ; LAB_005712de
    PUSH EDI                            ; 005712a3
    CALL FUN_00572e90                   ; 005712a4
        ;   XREF to: 00572e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00572e90()
    ADD ESP,0x4                         ; 005712a9
    TEST EAX,EAX                        ; 005712ac
    JZ 0x005712bd                       ; 005712ae
        ;   XREF to: 005712bd (CONDITIONAL_JUMP)  ; LAB_005712bd
    PUSH EBX                            ; 005712b0
    CALL crt_unknown.c_FUN_005638d0     ; 005712b1
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    XOR ESI,ESI                         ; 005712b6
    ADD ESP,0x4                         ; 005712b8
    JMP 0x005712e0                      ; 005712bb
        ;   XREF to: 005712e0 (UNCONDITIONAL_JUMP)  ; LAB_005712e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005712bd
        ;   Label: LAB_005712bd
    MOV dword ptr [EBX + 0x8],EDI       ; 005712c1
    MOV dword ptr [EBX + 0x4],EAX       ; 005712c4
    XOR EAX,EAX                         ; 005712c7
    MOV AL,byte ptr [EDI + 0x52]        ; 005712c9
    MOV dword ptr [EBX + 0xc],EAX       ; 005712cc
    MOV EAX,[0x02de5d70]                ; 005712cf | DAT_02de5d70
    MOV dword ptr [0x02de5d70],EBX      ; 005712d4 | DAT_02de5d70
    MOV dword ptr [EBX],EAX             ; 005712da
    JMP 0x005712e0                      ; 005712dc
        ;   XREF to: 005712e0 (UNCONDITIONAL_JUMP)  ; LAB_005712e0
    XOR ESI,ESI                         ; 005712de
        ;   Label: LAB_005712de
    CALL dword ptr [0x005c1aec]         ; 005712e0 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1aec
        ;   Label: LAB_005712e0
    MOV EAX,ESI                         ; 005712e6
    POP EDI                             ; 005712e8
    POP ESI                             ; 005712e9
    POP EBX                             ; 005712ea
    RET                                 ; 005712eb

