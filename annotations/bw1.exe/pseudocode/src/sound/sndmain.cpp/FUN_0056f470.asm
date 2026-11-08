; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056f470(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00575120 at 005751aa
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f314c
;   TerminatedCString s_allocMixBuffers_out_of_m_005f3161
;   undefined4 DAT_006232ec
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c80660
;   undefined4 DAT_02c80664
;   undefined4 DAT_02c80668
;   undefined4 DAT_02c8066c
;   undefined4 DAT_02c80670
;   undefined4 DAT_02c80694
;   undefined4 DAT_02c806b8
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f470
        ;   Label: FUN_0056f470
    PUSH ESI                            ; 0056f471
    PUSH EBP                            ; 0056f472
    SUB ESP,0x10                        ; 0056f473
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056f476
    MOV EDX,dword ptr [ESP + 0x24]      ; 0056f47a
    MOV EBX,0x1                         ; 0056f47e
    MOV dword ptr [0x02c8066c],EDX      ; 0056f483 | DAT_02c8066c
    CMP EAX,EBX                         ; 0056f489
    JLE 0x0056f4a0                      ; 0056f48b
        ;   XREF to: 0056f4a0 (CONDITIONAL_JUMP)  ; LAB_0056f4a0
    ADD EBX,EBX                         ; 0056f48d
        ;   Label: LAB_0056f48d
    CMP EBX,EAX                         ; 0056f48f
    JL 0x0056f48d                       ; 0056f491
        ;   XREF to: 0056f48d (CONDITIONAL_JUMP)  ; LAB_0056f48d
    LEA EAX,[EAX]                       ; 0056f493
    LEA EDX,[EDX]                       ; 0056f499
    NOP                                 ; 0056f49f
    MOV EAX,[0x02c8066c]                ; 0056f4a0 | DAT_02c8066c
        ;   Label: LAB_0056f4a0
    LEA ESI,[EBX*0x4 + 0x0]             ; 0056f4a5
    IMUL EAX,ESI                        ; 0056f4ac
    IMUL EAX,dword ptr [0x006232ec]     ; 0056f4af | DAT_006232ec
    XOR EDX,EDX                         ; 0056f4b6
    PUSH EAX                            ; 0056f4b8
    MOV EBP,dword ptr [0x02c80694]      ; 0056f4b9 | DAT_02c80694
    MOV dword ptr [0x02c80660],EDX      ; 0056f4bf | DAT_02c80660
    PUSH EBP                            ; 0056f4c5
    MOV dword ptr [0x02c80664],EDX      ; 0056f4c6 | DAT_02c80664
    MOV dword ptr [0x02c80668],EBX      ; 0056f4cc | DAT_02c80668
    CALL FUN_005c10d0                   ; 0056f4d2
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    MOV [0x02c80694],EAX                ; 0056f4d7 | DAT_02c80694
    MOV EAX,[0x006232ec]                ; 0056f4dc | DAT_006232ec
    IMUL EAX,ESI                        ; 0056f4e1
    ADD ESP,0x8                         ; 0056f4e4
    ADD EAX,EAX                         ; 0056f4e7
    PUSH EAX                            ; 0056f4e9
    MOV EAX,[0x02c806b8]                ; 0056f4ea | DAT_02c806b8
    PUSH EAX                            ; 0056f4ef
    CALL FUN_005c10d0                   ; 0056f4f0
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    IMUL ESI,dword ptr [0x006232ec]     ; 0056f4f5 | DAT_006232ec
    ADD ESP,0x8                         ; 0056f4fc
    PUSH ESI                            ; 0056f4ff
    MOV ECX,dword ptr [0x02c80670]      ; 0056f500 | DAT_02c80670
    PUSH ECX                            ; 0056f506
    MOV [0x02c806b8],EAX                ; 0056f507 | DAT_02c806b8
    CALL FUN_005c10d0                   ; 0056f50c
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    MOV EBX,dword ptr [0x02c80668]      ; 0056f511 | DAT_02c80668
    MOV ESI,dword ptr [0x02c80694]      ; 0056f517 | DAT_02c80694
    ADD ESP,0x8                         ; 0056f51d
    MOV [0x02c80670],EAX                ; 0056f520 | DAT_02c80670
    TEST ESI,ESI                        ; 0056f525
    JNZ 0x0056f607                      ; 0056f527
        ;   XREF to: 0056f607 (CONDITIONAL_JUMP)  ; LAB_0056f607
    MOV EBP,0x5f314c                    ; 0056f52d | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0056f52d
    MOV EAX,0x55f                       ; 0056f532
    PUSH 0x5f3161                       ; 0056f537 | = "allocMixBuffers - out of memory"
    MOV dword ptr [0x01d1d400],EBP      ; 0056f53c | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0056f542 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0056f547
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0056f54c
    MOV ECX,dword ptr [0x006232ec]      ; 0056f54f | DAT_006232ec
        ;   Label: LAB_0056f54f
    MOV EBX,dword ptr [0x02c80668]      ; 0056f555 | DAT_02c80668
    XOR EDX,EDX                         ; 0056f55b
    TEST ECX,ECX                        ; 0056f55d
    JLE 0x0056f5fa                      ; 0056f55f
        ;   XREF to: 0056f5fa (CONDITIONAL_JUMP)  ; LAB_0056f5fa
    PUSH EDI                            ; 0056f565
    LEA EAX,[EBX*0x8 + 0x0]             ; 0056f566
    IMUL ECX,EBX,0x0                    ; 0056f56d
    MOV dword ptr [ESP + 0x10],EAX      ; 0056f570
    MOV EDI,dword ptr [ESP + 0x10]      ; 0056f574
    LEA EAX,[EBX*0x4 + 0x0]             ; 0056f578
    MOV dword ptr [ESP + 0xc],EDI       ; 0056f57f
    LEA ESI,[ECX + EAX*0x1]             ; 0056f583
    MOV dword ptr [ESP + 0x8],EAX       ; 0056f586
    MOV EDI,ECX                         ; 0056f58a
    XOR EAX,EAX                         ; 0056f58c
    MOV EBP,EBX                         ; 0056f58e
        ;   Label: LAB_0056f58e
    IMUL EBP,EDX                        ; 0056f590
    IMUL EBP,dword ptr [0x02c8066c]     ; 0056f593 | DAT_02c8066c
    SHL EBP,0x2                         ; 0056f59a
    MOV dword ptr [ESP + 0x4],EBP       ; 0056f59d
    MOV EBP,dword ptr [0x02c80694]      ; 0056f5a1 | DAT_02c80694
    ADD EBP,dword ptr [ESP + 0x4]       ; 0056f5a7
    MOV dword ptr [EAX + 0x2c80698],EBP ; 0056f5ab
    MOV EBP,dword ptr [0x02c80670]      ; 0056f5b1 | DAT_02c80670
    ADD EBP,ECX                         ; 0056f5b7
    MOV dword ptr [EAX + 0x2c80674],EBP ; 0056f5b9
    MOV EBP,dword ptr [0x02c806b8]      ; 0056f5bf | DAT_02c806b8
    MOV dword ptr [ESP + 0x4],EBP       ; 0056f5c5
    ADD EBP,EDI                         ; 0056f5c9
    MOV dword ptr [EAX + 0x2c806bc],EBP ; 0056f5cb
    MOV EBP,dword ptr [ESP + 0x4]       ; 0056f5d1
    ADD EBP,ESI                         ; 0056f5d5
    MOV dword ptr [EAX + 0x2c806dc],EBP ; 0056f5d7
    ADD ESI,dword ptr [ESP + 0x10]      ; 0056f5dd
    ADD EDI,dword ptr [ESP + 0xc]       ; 0056f5e1
    MOV EBP,dword ptr [ESP + 0x8]       ; 0056f5e5
    INC EDX                             ; 0056f5e9
    ADD ECX,EBP                         ; 0056f5ea
    MOV EBP,dword ptr [0x006232ec]      ; 0056f5ec | DAT_006232ec
    ADD EAX,0x4                         ; 0056f5f2
    CMP EDX,EBP                         ; 0056f5f5
    JL 0x0056f58e                       ; 0056f5f7
        ;   XREF to: 0056f58e (CONDITIONAL_JUMP)  ; LAB_0056f58e
    POP EDI                             ; 0056f5f9
    MOV dword ptr [0x02c80668],EBX      ; 0056f5fa | DAT_02c80668
        ;   Label: LAB_0056f5fa
    ADD ESP,0x10                        ; 0056f600
    POP EBP                             ; 0056f603
    POP ESI                             ; 0056f604
    POP EBX                             ; 0056f605
    RET                                 ; 0056f606
    CMP dword ptr [0x02c806b8],0x0      ; 0056f607 | DAT_02c806b8
        ;   Label: LAB_0056f607
    JZ 0x0056f52d                       ; 0056f60e
        ;   XREF to: 0056f52d (CONDITIONAL_JUMP)  ; LAB_0056f52d
    TEST EAX,EAX                        ; 0056f614
    JZ 0x0056f52d                       ; 0056f616
        ;   XREF to: 0056f52d (CONDITIONAL_JUMP)  ; LAB_0056f52d
    JMP 0x0056f54f                      ; 0056f61c
        ;   XREF to: 0056f54f (UNCONDITIONAL_JUMP)  ; LAB_0056f54f

