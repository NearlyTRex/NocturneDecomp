; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint unkafter_asgaya_cpp_FUN_005ae560(WCHAR *param_1,byte *param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   crt_unknown.c_FUN_005a86c4 at 005a8783
;   crt_unknown.c_FUN_005a87bc at 005a88aa
;   unkafter_2d.cpp_FUN_005b19a0 at 005b19c3
;
; Referenced Globals:
;   void* PTR_MultiByteToWideChar_005b3604 = 001b408a
;   undefined4 DAT_00607e7c
;   undefined4 DAT_02d25930
;
; Called Functions:
;   crt_unknown.c_FUN_005aca50
;   MultiByteToWideChar
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae560
        ;   Label: unkafter_asgaya.cpp_FUN_005ae560
    PUSH ESI                            ; 005ae561
    PUSH EDI                            ; 005ae562
    PUSH EBP                            ; 005ae563
    MOV EBP,ESP                         ; 005ae564
    SUB ESP,0x4                         ; 005ae566
    MOV ESI,dword ptr [EBP + 0x14]      ; 005ae569
    MOV EBX,dword ptr [EBP + 0x18]      ; 005ae56c
    TEST EBX,EBX                        ; 005ae56f
    JNZ 0x005ae57a                      ; 005ae571
        ;   XREF to: 005ae57a (CONDITIONAL_JUMP)  ; LAB_005ae57a
    XOR EAX,EAX                         ; 005ae573
    JMP 0x005ae605                      ; 005ae575
        ;   XREF to: 005ae605 (UNCONDITIONAL_JUMP)  ; LAB_005ae605
    CMP dword ptr [EBP + 0x1c],0x0      ; 005ae57a
        ;   Label: LAB_005ae57a
    JBE 0x005ae600                      ; 005ae57e
        ;   XREF to: 005ae600 (CONDITIONAL_JUMP)  ; LAB_005ae600
    CMP byte ptr [EBX],0x0              ; 005ae584
    JNZ 0x005ae59b                      ; 005ae587
        ;   XREF to: 005ae59b (CONDITIONAL_JUMP)  ; LAB_005ae59b
    TEST ESI,ESI                        ; 005ae589
    JZ 0x005ae592                       ; 005ae58b
        ;   XREF to: 005ae592 (CONDITIONAL_JUMP)  ; LAB_005ae592
    MOV word ptr [ESI],0x0              ; 005ae58d
    XOR EAX,EAX                         ; 005ae592
        ;   Label: LAB_005ae592
    MOV ESP,EBP                         ; 005ae594
    POP EBP                             ; 005ae596
    POP EDI                             ; 005ae597
    POP ESI                             ; 005ae598
    POP EBX                             ; 005ae599
    RET                                 ; 005ae59a
    CMP dword ptr [0x02d25930],0x0      ; 005ae59b | DAT_02d25930
        ;   Label: LAB_005ae59b
    JZ 0x005ae5bd                       ; 005ae5a2
        ;   XREF to: 005ae5bd (CONDITIONAL_JUMP)  ; LAB_005ae5bd
    XOR EAX,EAX                         ; 005ae5a4
    MOV AL,byte ptr [EBX]               ; 005ae5a6
    MOV AL,byte ptr [EAX + 0x2d25941]   ; 005ae5a8
    AND AL,0x1                          ; 005ae5ae
    AND EAX,0xff                        ; 005ae5b0
    JZ 0x005ae5bd                       ; 005ae5b5
        ;   XREF to: 005ae5bd (CONDITIONAL_JUMP)  ; LAB_005ae5bd
    CMP byte ptr [EBX + 0x1],0x0        ; 005ae5b7
    JZ 0x005ae600                       ; 005ae5bb
        ;   XREF to: 005ae600 (CONDITIONAL_JUMP)  ; LAB_005ae600
    PUSH EBX                            ; 005ae5bd
        ;   Label: LAB_005ae5bd
    CALL crt_unknown.c_FUN_005aca50     ; 005ae5be
        ;   XREF to: 005aca50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca50()
    ADD ESP,0x4                         ; 005ae5c3
    PUSH 0x1                            ; 005ae5c6
    LEA EDX,[EBP + -0x4]                ; 005ae5c8
    PUSH EDX                            ; 005ae5cb
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005ae5cc
    MOV EDI,EAX                         ; 005ae5cf
    CMP EAX,EDX                         ; 005ae5d1
    JBE 0x005ae5d7                      ; 005ae5d3
        ;   XREF to: 005ae5d7 (CONDITIONAL_JUMP)  ; LAB_005ae5d7
    MOV EAX,EDX                         ; 005ae5d5
    PUSH EAX                            ; 005ae5d7
        ;   Label: LAB_005ae5d7
    PUSH EBX                            ; 005ae5d8
    PUSH 0x8                            ; 005ae5d9
    MOV EBX,dword ptr [0x00607e7c]      ; 005ae5db | DAT_00607e7c
    PUSH EBX                            ; 005ae5e1
    CALL dword ptr CS:[0x5b3604]        ; 005ae5e2 | PTR_MultiByteToWideChar_005b3604
    TEST EAX,EAX                        ; 005ae5e9
    JZ 0x005ae600                       ; 005ae5eb
        ;   XREF to: 005ae600 (CONDITIONAL_JUMP)  ; LAB_005ae600
    TEST ESI,ESI                        ; 005ae5ed
    JZ 0x005ae5f7                       ; 005ae5ef
        ;   XREF to: 005ae5f7 (CONDITIONAL_JUMP)  ; LAB_005ae5f7
    MOV EAX,dword ptr [EBP + -0x4]      ; 005ae5f1
    MOV word ptr [ESI],AX               ; 005ae5f4
    MOV EAX,EDI                         ; 005ae5f7
        ;   Label: LAB_005ae5f7
    MOV ESP,EBP                         ; 005ae5f9
    POP EBP                             ; 005ae5fb
    POP EDI                             ; 005ae5fc
    POP ESI                             ; 005ae5fd
    POP EBX                             ; 005ae5fe
    RET                                 ; 005ae5ff
    MOV EAX,0xffffffff                  ; 005ae600
        ;   Label: LAB_005ae600
    MOV ESP,EBP                         ; 005ae605
        ;   Label: LAB_005ae605
    POP EBP                             ; 005ae607
    POP EDI                             ; 005ae608
    POP ESI                             ; 005ae609
    POP EBX                             ; 005ae60a
    RET                                 ; 005ae60b

