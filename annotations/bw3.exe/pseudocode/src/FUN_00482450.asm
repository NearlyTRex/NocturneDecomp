; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482450(undefined4 param_1,char *param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined1       Stack[-0x134]:1  local_134
;
; XREF[1]:
;   FUN_0047db70 at 0047dbe8
;
; Called Functions:
;   FUN_00482440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482450
        ;   Label: FUN_00482450
    PUSH ESI                            ; 00482451
    SUB ESP,0x12c                       ; 00482452
    MOV ESI,dword ptr [ESP + 0x144]     ; 00482458
    MOV EDX,dword ptr [ESP + 0x140]     ; 0048245f
    PUSH EDX                            ; 00482466
    MOV ECX,dword ptr [ESP + 0x13c]     ; 00482467
    PUSH ECX                            ; 0048246e
    CALL FUN_00482440                   ; 0048246f
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; undefined FUN_00482440()
    ADD ESP,0x8                         ; 00482474
    MOV ECX,EAX                         ; 00482477
    TEST EAX,EAX                        ; 00482479
    JZ 0x004824a1                       ; 0048247b
        ;   XREF to: 004824a1 (CONDITIONAL_JUMP)  ; LAB_004824a1
    TEST ESI,ESI                        ; 0048247d
        ;   Label: LAB_0048247d
    JLE 0x004824a1                      ; 0048247f
        ;   XREF to: 004824a1 (CONDITIONAL_JUMP)  ; LAB_004824a1
    MOV EDX,ESP                         ; 00482481
    MOV BH,byte ptr [ECX]               ; 00482483
    MOV EAX,ECX                         ; 00482485
    TEST BH,BH                          ; 00482487
    JZ 0x00482497                       ; 00482489
        ;   XREF to: 00482497 (CONDITIONAL_JUMP)  ; LAB_00482497
    MOV BH,byte ptr [EAX]               ; 0048248b
        ;   Label: LAB_0048248b
    LEA ECX,[EAX + 0x1]                 ; 0048248d
    CMP BH,0x9                          ; 00482490
    JNZ 0x004824d1                      ; 00482493
        ;   XREF to: 004824d1 (CONDITIONAL_JUMP)  ; LAB_004824d1
    MOV EAX,ECX                         ; 00482495
    MOV byte ptr [EDX],0x0              ; 00482497
        ;   Label: LAB_00482497
    MOV ECX,EAX                         ; 0048249a
    DEC ESI                             ; 0048249c
    TEST EAX,EAX                        ; 0048249d
    JNZ 0x0048247d                      ; 0048249f
        ;   XREF to: 0048247d (CONDITIONAL_JUMP)  ; LAB_0048247d
    TEST ECX,ECX                        ; 004824a1
        ;   Label: LAB_004824a1
    JZ 0x004824e0                       ; 004824a3
        ;   XREF to: 004824e0 (CONDITIONAL_JUMP)  ; LAB_004824e0
    MOV EDX,dword ptr [ESP + 0x13c]     ; 004824a5
    MOV BL,byte ptr [ECX]               ; 004824ac
    MOV EAX,ECX                         ; 004824ae
    TEST BL,BL                          ; 004824b0
    JZ 0x004824c5                       ; 004824b2
        ;   XREF to: 004824c5 (CONDITIONAL_JUMP)  ; LAB_004824c5
    CMP byte ptr [EAX],0x9              ; 004824b4
        ;   Label: LAB_004824b4
    JZ 0x004824c5                       ; 004824b7
        ;   XREF to: 004824c5 (CONDITIONAL_JUMP)  ; LAB_004824c5
    MOV CL,byte ptr [EAX]               ; 004824b9
    INC EAX                             ; 004824bb
    MOV byte ptr [EDX],CL               ; 004824bc
    MOV CL,byte ptr [EAX]               ; 004824be
    INC EDX                             ; 004824c0
    TEST CL,CL                          ; 004824c1
    JNZ 0x004824b4                      ; 004824c3
        ;   XREF to: 004824b4 (CONDITIONAL_JUMP)  ; LAB_004824b4
    MOV byte ptr [EDX],0x0              ; 004824c5
        ;   Label: LAB_004824c5
    ADD ESP,0x12c                       ; 004824c8
    POP ESI                             ; 004824ce
    POP EBX                             ; 004824cf
    RET                                 ; 004824d0
    MOV AL,byte ptr [EAX]               ; 004824d1
        ;   Label: LAB_004824d1
    MOV byte ptr [EDX],AL               ; 004824d3
    INC EDX                             ; 004824d5
    MOV BL,byte ptr [ECX]               ; 004824d6
    MOV EAX,ECX                         ; 004824d8
    TEST BL,BL                          ; 004824da
    JNZ 0x0048248b                      ; 004824dc
        ;   XREF to: 0048248b (CONDITIONAL_JUMP)  ; LAB_0048248b
    JMP 0x00482497                      ; 004824de
        ;   XREF to: 00482497 (UNCONDITIONAL_JUMP)  ; LAB_00482497
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004824e0
        ;   Label: LAB_004824e0
    MOV byte ptr [EAX],0x0              ; 004824e7
    ADD ESP,0x12c                       ; 004824ea
    POP ESI                             ; 004824f0
    POP EBX                             ; 004824f1
    RET                                 ; 004824f2

