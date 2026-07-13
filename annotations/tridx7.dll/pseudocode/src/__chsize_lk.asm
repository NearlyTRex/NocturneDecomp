; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __chsize_lk(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
;
; XREF[1]:
;   FUN_100093f0 at 1000977c
;
; Referenced Globals:
;   void* PTR_GetLastError_102421c8 = 00242418
;   void* PTR_SetEndOfFile_10242258 = 00242682
;
; Called Functions:
;   __lseek_lk
;   __setmode_lk
;   FUN_10005600
;   FUN_10008a20
;   FUN_10008a30
;   FUN_10008cd0
;   FUN_10008fb0
;   GetLastError
;   SetEndOfFile
;
; *****************************************************************************

section .text

    MOV EAX,0x1008                      ; 1000b560
        ;   Label: __chsize_lk
    CALL FUN_10005600                   ; 1000b565
        ;   XREF to: 10005600 (UNCONDITIONAL_CALL)  ; undefined FUN_10005600()
    PUSH EBX                            ; 1000b56a
    PUSH ESI                            ; 1000b56b
    PUSH EDI                            ; 1000b56c
    XOR EBX,EBX                         ; 1000b56d
    MOV ESI,dword ptr [ESP + 0x1018]    ; 1000b56f
    PUSH EBP                            ; 1000b576
    PUSH 0x1                            ; 1000b577
    PUSH EBX                            ; 1000b579
    PUSH ESI                            ; 1000b57a
    CALL __lseek_lk                     ; 1000b57b
        ;   XREF to: 1000a670 (UNCONDITIONAL_CALL)  ; undefined __lseek_lk()
    MOV dword ptr [ESP + 0x1c],EAX      ; 1000b580
    ADD ESP,0xc                         ; 1000b584
    CMP EAX,-0x1                        ; 1000b587
    JZ 0x1000b682                       ; 1000b58a
        ;   XREF to: 1000b682 (CONDITIONAL_JUMP)  ; LAB_1000b682
    PUSH 0x2                            ; 1000b590
    PUSH EBX                            ; 1000b592
    PUSH ESI                            ; 1000b593
    CALL __lseek_lk                     ; 1000b594
        ;   XREF to: 1000a670 (UNCONDITIONAL_CALL)  ; undefined __lseek_lk()
    ADD ESP,0xc                         ; 1000b599
    CMP EAX,-0x1                        ; 1000b59c
    JZ 0x1000b682                       ; 1000b59f
        ;   XREF to: 1000b682 (CONDITIONAL_JUMP)  ; LAB_1000b682
    MOV ECX,dword ptr [ESP + 0x1020]    ; 1000b5a5
    MOV EBP,ECX                         ; 1000b5ac
    SUB EBP,EAX                         ; 1000b5ae
    TEST EBP,EBP                        ; 1000b5b0
    JLE 0x1000b623                      ; 1000b5b2
        ;   XREF to: 1000b623 (CONDITIONAL_JUMP)  ; LAB_1000b623
    LEA EDI,[ESP + 0x18]                ; 1000b5b4
    XOR EAX,EAX                         ; 1000b5b8
    MOV ECX,0x400                       ; 1000b5ba
    PUSH 0x8000                         ; 1000b5bf
    STOSD.REP ES:EDI                    ; 1000b5c4
    PUSH ESI                            ; 1000b5c6
    CALL __setmode_lk                   ; 1000b5c7
        ;   XREF to: 1000e880 (UNCONDITIONAL_CALL)  ; undefined __setmode_lk()
    MOV dword ptr [ESP + 0x1c],EAX      ; 1000b5cc
    ADD ESP,0x8                         ; 1000b5d0
    MOV EAX,0x1000                      ; 1000b5d3
        ;   Label: LAB_1000b5d3
    CMP EBP,EAX                         ; 1000b5d8
    JGE 0x1000b5de                      ; 1000b5da
        ;   XREF to: 1000b5de (CONDITIONAL_JUMP)  ; LAB_1000b5de
    MOV EAX,EBP                         ; 1000b5dc
    PUSH EAX                            ; 1000b5de
        ;   Label: LAB_1000b5de
    LEA EAX,[ESP + 0x1c]                ; 1000b5df
    PUSH EAX                            ; 1000b5e3
    PUSH ESI                            ; 1000b5e4
    CALL FUN_10008fb0                   ; 1000b5e5
        ;   XREF to: 10008fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_10008fb0()
    ADD ESP,0xc                         ; 1000b5ea
    MOV EDI,EAX                         ; 1000b5ed
    CMP EDI,-0x1                        ; 1000b5ef
    JZ 0x1000b5fc                       ; 1000b5f2
        ;   XREF to: 1000b5fc (CONDITIONAL_JUMP)  ; LAB_1000b5fc
    SUB EBP,EDI                         ; 1000b5f4
    TEST EBP,EBP                        ; 1000b5f6
    JG 0x1000b5d3                       ; 1000b5f8
        ;   XREF to: 1000b5d3 (CONDITIONAL_JUMP)  ; LAB_1000b5d3
    JMP 0x1000b613                      ; 1000b5fa
        ;   XREF to: 1000b613 (UNCONDITIONAL_JUMP)  ; LAB_1000b613
    CALL FUN_10008a30                   ; 1000b5fc
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
        ;   Label: LAB_1000b5fc
    CMP dword ptr [EAX],0x5             ; 1000b601
    JNZ 0x1000b611                      ; 1000b604
        ;   XREF to: 1000b611 (CONDITIONAL_JUMP)  ; LAB_1000b611
    CALL FUN_10008a20                   ; 1000b606
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
    MOV dword ptr [EAX],0xd             ; 1000b60b
    MOV EBX,EDI                         ; 1000b611
        ;   Label: LAB_1000b611
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000b613
        ;   Label: LAB_1000b613
    PUSH EAX                            ; 1000b617
    PUSH ESI                            ; 1000b618
    CALL __setmode_lk                   ; 1000b619
        ;   XREF to: 1000e880 (UNCONDITIONAL_CALL)  ; undefined __setmode_lk()
    ADD ESP,0x8                         ; 1000b61e
    JMP 0x1000b665                      ; 1000b621
        ;   XREF to: 1000b665 (UNCONDITIONAL_JUMP)  ; LAB_1000b665
    JGE 0x1000b665                      ; 1000b623
        ;   XREF to: 1000b665 (CONDITIONAL_JUMP)  ; LAB_1000b665
        ;   Label: LAB_1000b623
    PUSH 0x0                            ; 1000b625
    PUSH ECX                            ; 1000b627
    PUSH ESI                            ; 1000b628
    CALL __lseek_lk                     ; 1000b629
        ;   XREF to: 1000a670 (UNCONDITIONAL_CALL)  ; undefined __lseek_lk()
    ADD ESP,0xc                         ; 1000b62e
    PUSH ESI                            ; 1000b631
    CALL FUN_10008cd0                   ; 1000b632
        ;   XREF to: 10008cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_10008cd0()
    ADD ESP,0x4                         ; 1000b637
    PUSH EAX                            ; 1000b63a
    CALL dword ptr [0x10242258]         ; 1000b63b | PTR_SetEndOfFile_10242258
    CMP EAX,0x1                         ; 1000b641
    SBB EBX,EBX                         ; 1000b644
    CMP EBX,-0x1                        ; 1000b646
    JNZ 0x1000b665                      ; 1000b649
        ;   XREF to: 1000b665 (CONDITIONAL_JUMP)  ; LAB_1000b665
    CALL FUN_10008a20                   ; 1000b64b
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
    MOV dword ptr [EAX],0xd             ; 1000b650
    CALL FUN_10008a30                   ; 1000b656
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    MOV EDI,EAX                         ; 1000b65b
    CALL dword ptr [0x102421c8]         ; 1000b65d | PTR_GetLastError_102421c8
    MOV dword ptr [EDI],EAX             ; 1000b663
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000b665
        ;   Label: LAB_1000b665
    PUSH 0x0                            ; 1000b669
    PUSH EAX                            ; 1000b66b
    PUSH ESI                            ; 1000b66c
    CALL __lseek_lk                     ; 1000b66d
        ;   XREF to: 1000a670 (UNCONDITIONAL_CALL)  ; undefined __lseek_lk()
    ADD ESP,0xc                         ; 1000b672
    MOV EAX,EBX                         ; 1000b675
    POP EBP                             ; 1000b677
    POP EDI                             ; 1000b678
    POP ESI                             ; 1000b679
    POP EBX                             ; 1000b67a
    ADD ESP,0x1008                      ; 1000b67b
    RET                                 ; 1000b681
    MOV EAX,0xffffffff                  ; 1000b682
        ;   Label: LAB_1000b682
    POP EBP                             ; 1000b687
    POP EDI                             ; 1000b688
    POP ESI                             ; 1000b689
    POP EBX                             ; 1000b68a
    ADD ESP,0x1008                      ; 1000b68b
    RET                                 ; 1000b691

