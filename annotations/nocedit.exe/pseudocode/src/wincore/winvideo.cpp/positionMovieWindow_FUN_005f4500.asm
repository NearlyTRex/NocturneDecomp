; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl wincore_winvideo_cpp_positionMovieWindow_FUN_005f4500(HWND parent_window)
;
; Parameters:
; HWND             Stack[0x4]:4   parent_window
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   mciSendStringA* g_mciSendStringAFunc = 00211850
;   GetClientRect* g_GetClientRectFunc = 00211ac0
;   MoveWindow* g_MoveWindowFunc = 00211b52
;   SetRectEmpty* g_SetRectEmptyFunc = 00211bf6
;   TerminatedCString s_where_mov_source_006581dd
;   HWND g_MovieWindowHandle
;   int g_MoviePlaying
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005f4500
        ;   Label: wincore_winvideo.cpp_positionMovieWindow_FUN_005f4500
    SUB ESP,0xa0                        ; 005f4501
    CMP dword ptr [0x03f99504],0x0      ; 005f4507 | g_MoviePlaying
    JNZ 0x005f4518                      ; 005f450e
        ;   XREF to: 005f4518 (CONDITIONAL_JUMP)  ; LAB_005f4518
    ADD ESP,0xa0                        ; 005f4510
    POP EBP                             ; 005f4516
    RET                                 ; 005f4517
    LEA EAX,[ESP + 0x80]                ; 005f4518
        ;   Label: LAB_005f4518
    PUSH EAX                            ; 005f451f
    MOV ECX,dword ptr [ESP + 0xac]      ; 005f4520
    PUSH ECX                            ; 005f4527
    CALL dword ptr CS:[0x6114a4]        ; 005f4528 | g_GetClientRectFunc
    PUSH 0x0                            ; 005f452f
    PUSH 0x80                           ; 005f4531
    LEA EAX,[ESP + 0x8]                 ; 005f4536
    PUSH EAX                            ; 005f453a
    PUSH 0x6581dd                       ; 005f453b | = "where mov source"
    CALL dword ptr CS:[0x611410]        ; 005f4540 | g_mciSendStringAFunc
    LEA EAX,[ESP + 0x90]                ; 005f4547
    PUSH EAX                            ; 005f454e
    CALL dword ptr CS:[0x6114f0]        ; 005f454f | g_SetRectEmptyFunc
    MOV DL,byte ptr [ESP]               ; 005f4556
    MOV EAX,ESP                         ; 005f4559
    CMP DL,0x20                         ; 005f455b
    JNZ 0x005f4570                      ; 005f455e
        ;   XREF to: 005f4570 (CONDITIONAL_JUMP)  ; LAB_005f4570
    MOV DH,byte ptr [EAX + 0x1]         ; 005f4560
        ;   Label: LAB_005f4560
    INC EAX                             ; 005f4563
    CMP DH,0x20                         ; 005f4564
    JZ 0x005f4560                       ; 005f4567
        ;   XREF to: 005f4560 (CONDITIONAL_JUMP)  ; LAB_005f4560
    LEA EAX,[EAX]                       ; 005f4569
    NOP                                 ; 005f456f
    CMP byte ptr [EAX],0x20             ; 005f4570
        ;   Label: LAB_005f4570
    JZ 0x005f4578                       ; 005f4573
        ;   XREF to: 005f4578 (CONDITIONAL_JUMP)  ; LAB_005f4578
    INC EAX                             ; 005f4575
    JMP 0x005f4570                      ; 005f4576
        ;   XREF to: 005f4570 (UNCONDITIONAL_JUMP)  ; LAB_005f4570
    CMP byte ptr [EAX],0x20             ; 005f4578
        ;   Label: LAB_005f4578
    JNZ 0x005f4580                      ; 005f457b
        ;   XREF to: 005f4580 (CONDITIONAL_JUMP)  ; LAB_005f4580
    INC EAX                             ; 005f457d
    JMP 0x005f4578                      ; 005f457e
        ;   XREF to: 005f4578 (UNCONDITIONAL_JUMP)  ; LAB_005f4578
    CMP byte ptr [EAX],0x20             ; 005f4580
        ;   Label: LAB_005f4580
    JZ 0x005f4588                       ; 005f4583
        ;   XREF to: 005f4588 (CONDITIONAL_JUMP)  ; LAB_005f4588
    INC EAX                             ; 005f4585
    JMP 0x005f4580                      ; 005f4586
        ;   XREF to: 005f4580 (UNCONDITIONAL_JUMP)  ; LAB_005f4580
    CMP byte ptr [EAX],0x20             ; 005f4588
        ;   Label: LAB_005f4588
    JNZ 0x005f45a9                      ; 005f458b
        ;   XREF to: 005f45a9 (CONDITIONAL_JUMP)  ; LAB_005f45a9
    INC EAX                             ; 005f458d
    JMP 0x005f4588                      ; 005f458e
        ;   XREF to: 005f4588 (UNCONDITIONAL_JUMP)  ; LAB_005f4588
    IMUL ECX,dword ptr [ESP + 0x98],0xa ; 005f4590
        ;   Label: LAB_005f4590
    XOR EDX,EDX                         ; 005f4598
    MOV DL,byte ptr [EAX]               ; 005f459a
    SUB EDX,0x30                        ; 005f459c
    ADD ECX,EDX                         ; 005f459f
    INC EAX                             ; 005f45a1
    MOV dword ptr [ESP + 0x98],ECX      ; 005f45a2
    MOV DL,byte ptr [EAX]               ; 005f45a9
        ;   Label: LAB_005f45a9
    CMP DL,0x30                         ; 005f45ab
    JNC 0x005f45bc                      ; 005f45ae
        ;   XREF to: 005f45bc (CONDITIONAL_JUMP)  ; LAB_005f45bc
    CMP byte ptr [EAX],0x20             ; 005f45b0
        ;   Label: LAB_005f45b0
    JNZ 0x005f468e                      ; 005f45b3
        ;   XREF to: 005f468e (CONDITIONAL_JUMP)  ; LAB_005f468e
    INC EAX                             ; 005f45b9
    JMP 0x005f45b0                      ; 005f45ba
        ;   XREF to: 005f45b0 (UNCONDITIONAL_JUMP)  ; LAB_005f45b0
    CMP DL,0x39                         ; 005f45bc
        ;   Label: LAB_005f45bc
    JBE 0x005f4590                      ; 005f45bf
        ;   XREF to: 005f4590 (CONDITIONAL_JUMP)  ; LAB_005f4590
    JMP 0x005f45b0                      ; 005f45c1
        ;   XREF to: 005f45b0 (UNCONDITIONAL_JUMP)  ; LAB_005f45b0
    IMUL ECX,dword ptr [ESP + 0xa8],0xa ; 005f45c3
        ;   Label: LAB_005f45c3
    XOR EDX,EDX                         ; 005f45cb
    MOV DL,BH                           ; 005f45cd
    SUB EDX,0x30                        ; 005f45cf
    ADD ECX,EDX                         ; 005f45d2
    INC EAX                             ; 005f45d4
    MOV dword ptr [ESP + 0xa8],ECX      ; 005f45d5
    MOV BH,byte ptr [EAX]               ; 005f45dc
        ;   Label: LAB_005f45dc
    CMP BH,0x30                         ; 005f45de
    JC 0x005f45e8                       ; 005f45e1
        ;   XREF to: 005f45e8 (CONDITIONAL_JUMP)  ; LAB_005f45e8
    CMP BH,0x39                         ; 005f45e3
    JBE 0x005f45c3                      ; 005f45e6
        ;   XREF to: 005f45c3 (CONDITIONAL_JUMP)  ; LAB_005f45c3
    CMP dword ptr [ESP + 0x94],0x190    ; 005f45e8
        ;   Label: LAB_005f45e8
    JLE 0x005f4696                      ; 005f45f3
        ;   XREF to: 005f4696 (CONDITIONAL_JUMP)  ; LAB_005f4696
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005f45f9
        ;   Label: LAB_005f45f9
    MOV EBP,dword ptr [ESP + 0xa8]      ; 005f4600
    ADD EAX,EAX                         ; 005f4607
    ADD EBP,EBP                         ; 005f4609
    MOV dword ptr [ESP + 0xa4],EAX      ; 005f460b
    MOV dword ptr [ESP + 0xa8],EBP      ; 005f4612
    MOV EAX,dword ptr [ESP + 0x94]      ; 005f4619
        ;   Label: LAB_005f4619
    MOV EDX,EAX                         ; 005f4620
    SAR EDX,0x1f                        ; 005f4622
    SUB EAX,EDX                         ; 005f4625
    SAR EAX,0x1                         ; 005f4627
    MOV EBX,EAX                         ; 005f4629
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005f462b
    MOV EDX,EAX                         ; 005f4632
    SAR EDX,0x1f                        ; 005f4634
    SUB EAX,EDX                         ; 005f4637
    SAR EAX,0x1                         ; 005f4639
    SUB EBX,EAX                         ; 005f463b
    MOV EAX,dword ptr [ESP + 0x98]      ; 005f463d
    MOV EDX,EAX                         ; 005f4644
    SAR EDX,0x1f                        ; 005f4646
    SUB EAX,EDX                         ; 005f4649
    SAR EAX,0x1                         ; 005f464b
    MOV ECX,EAX                         ; 005f464d
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005f464f
    MOV EDX,EAX                         ; 005f4656
    SAR EDX,0x1f                        ; 005f4658
    SUB EAX,EDX                         ; 005f465b
    SAR EAX,0x1                         ; 005f465d
    PUSH 0x1                            ; 005f465f
    MOV EDX,dword ptr [ESP + 0xac]      ; 005f4661
    PUSH EDX                            ; 005f4668
    MOV ESI,dword ptr [ESP + 0xac]      ; 005f4669
    PUSH ESI                            ; 005f4670
    SUB ECX,EAX                         ; 005f4671
    PUSH ECX                            ; 005f4673
    PUSH EBX                            ; 005f4674
    MOV EDI,dword ptr [0x03f994fc]      ; 005f4675 | g_MovieWindowHandle
    PUSH EDI                            ; 005f467b
    CALL dword ptr CS:[0x6114c8]        ; 005f467c | g_MoveWindowFunc
    POP EBX                             ; 005f4683
    POP ESI                             ; 005f4684
    POP EDI                             ; 005f4685
    ADD ESP,0xa0                        ; 005f4686
    POP EBP                             ; 005f468c
    RET                                 ; 005f468d
    PUSH EDI                            ; 005f468e
        ;   Label: LAB_005f468e
    PUSH ESI                            ; 005f468f
    PUSH EBX                            ; 005f4690
    JMP 0x005f45dc                      ; 005f4691
        ;   XREF to: 005f45dc (UNCONDITIONAL_JUMP)  ; LAB_005f45dc
    CMP dword ptr [ESP + 0x98],0x12c    ; 005f4696
        ;   Label: LAB_005f4696
    JG 0x005f45f9                       ; 005f46a1
        ;   XREF to: 005f45f9 (CONDITIONAL_JUMP)  ; LAB_005f45f9
    JMP 0x005f4619                      ; 005f46a7
        ;   XREF to: 005f4619 (UNCONDITIONAL_JUMP)  ; LAB_005f4619

