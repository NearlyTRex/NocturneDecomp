; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a2380(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01cab780
;
; Called Functions:
;   FUN_004a2620
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01cab780]      ; 004a2380 | DAT_01cab780
        ;   Label: FUN_004a2380
    TEST EDX,EDX                        ; 004a2386
    JZ 0x004a2397                       ; 004a2388
        ;   XREF to: 004a2397 (CONDITIONAL_JUMP)  ; LAB_004a2397
    CMP dword ptr [ESP + 0x8],0x1       ; 004a238a
    JZ 0x004a239a                       ; 004a238f
        ;   XREF to: 004a239a (CONDITIONAL_JUMP)  ; LAB_004a239a
    MOV EAX,0x1                         ; 004a2391
    RET                                 ; 004a2396
    XOR EAX,EAX                         ; 004a2397
        ;   Label: LAB_004a2397
    RET                                 ; 004a2399
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a239a
        ;   Label: LAB_004a239a
    ADD EAX,0x2c                        ; 004a239e
    PUSH EAX                            ; 004a23a1
    PUSH EDX                            ; 004a23a2
    CALL FUN_004a2620                   ; 004a23a3
        ;   XREF to: 004a2620 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2620()
    ADD ESP,0x8                         ; 004a23a8
    MOV EAX,0x1                         ; 004a23ab
    RET                                 ; 004a23b0

