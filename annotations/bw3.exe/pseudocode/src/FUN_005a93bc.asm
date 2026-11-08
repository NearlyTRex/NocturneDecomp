; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a93bc(uint param_1)
;
;
; XREF[2]:
;   FUN_005a33b0 at 005a33dc
;   FUN_005a93b0 at 005a93b2
;
; Referenced Globals:
;   void* PTR_FUN_006079b4 = 005a7f44
;   void* PTR_FUN_006079b8 = 005a7f44
;   undefined4 DAT_02d252a0
;
; Called Functions:
;   FUN_005a7f44
;   FUN_005a9bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a93bc
        ;   Label: FUN_005a93bc
    PUSH ESI                            ; 005a93bd
    PUSH EDI                            ; 005a93be
    MOV EDI,dword ptr [ESP + 0x10]      ; 005a93bf
    CALL dword ptr [0x006079b4]         ; 005a93c3 | PTR_FUN_006079b4
    MOV EBX,dword ptr [0x02d252a0]      ; 005a93c9 | DAT_02d252a0
    XOR ESI,ESI                         ; 005a93cf
    TEST EBX,EBX                        ; 005a93d1
    JZ 0x005a93f5                       ; 005a93d3
        ;   XREF to: 005a93f5 (CONDITIONAL_JUMP)  ; LAB_005a93f5
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a93d5
        ;   Label: LAB_005a93d5
    TEST dword ptr [EAX + 0xc],EDI      ; 005a93d8
    JZ 0x005a93ef                       ; 005a93db
        ;   XREF to: 005a93ef (CONDITIONAL_JUMP)  ; LAB_005a93ef
    MOV DL,byte ptr [EAX + 0xd]         ; 005a93dd
    INC ESI                             ; 005a93e0
    TEST DL,0x10                        ; 005a93e1
    JZ 0x005a93ef                       ; 005a93e4
        ;   XREF to: 005a93ef (CONDITIONAL_JUMP)  ; LAB_005a93ef
    PUSH EAX                            ; 005a93e6
    CALL FUN_005a9bc0                   ; 005a93e7
        ;   XREF to: 005a9bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9bc0()
    ADD ESP,0x4                         ; 005a93ec
    MOV EBX,dword ptr [EBX]             ; 005a93ef
        ;   Label: LAB_005a93ef
    TEST EBX,EBX                        ; 005a93f1
    JNZ 0x005a93d5                      ; 005a93f3
        ;   XREF to: 005a93d5 (CONDITIONAL_JUMP)  ; LAB_005a93d5
    CALL dword ptr [0x006079b8]         ; 005a93f5 | PTR_FUN_006079b8
        ;   Label: LAB_005a93f5
    MOV EAX,ESI                         ; 005a93fb
    POP EDI                             ; 005a93fd
    POP ESI                             ; 005a93fe
    POP EBX                             ; 005a93ff
    RET                                 ; 005a9400

