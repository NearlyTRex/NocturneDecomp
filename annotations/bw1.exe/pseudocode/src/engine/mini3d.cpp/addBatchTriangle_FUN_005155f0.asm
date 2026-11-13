; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_addBatchTriangle_FUN_005155f0(float *v0,float *v1,float *v2)
;
; Parameters:
; float *          Stack[0x4]:4   v0
; float *          Stack[0x8]:4   v1
; float *          Stack[0xc]:4   v2
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   engine_mini3d.cpp_clipBatchTriangle_FUN_00515850 at 005158db
;
; Referenced Globals:
;   undefined4 DAT_01d22578
;   undefined4 DAT_01d227e0
;   undefined4 DAT_01d25f48
;   undefined4 DAT_01d25f4c
;   undefined4 DAT_01d25f50
;
; Called Functions:
;   engine_mini3d.cpp_flushTriangleBatch_FUN_00515750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005155f0
        ;   Label: engine_mini3d.cpp_addBatchTriangle_FUN_005155f0
    PUSH ESI                            ; 005155f1
    PUSH EBP                            ; 005155f2
    SUB ESP,0x18                        ; 005155f3
    MOV ESI,dword ptr [ESP + 0x28]      ; 005155f6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005155fa
    MOV EBP,dword ptr [ESP + 0x30]      ; 005155fe
    FLD float ptr [EBP + 0x14]          ; 00515602
    FLD float ptr [EBX + 0x18]          ; 00515605
    FSUB float ptr [ESI + 0x18]         ; 00515608
    FXCH                                ; 0051560b
    FSUB float ptr [EBX + 0x14]         ; 0051560d
    FXCH                                ; 00515610
    FSTP float ptr [ESP]                ; 00515612
    FSTP float ptr [ESP + 0xc]          ; 00515615
    FLD float ptr [ESP]                 ; 00515619
    FMUL float ptr [ESP + 0xc]          ; 0051561c
    FLD float ptr [EBP + 0x18]          ; 00515620
    FLD float ptr [EBX + 0x14]          ; 00515623
    FSUB float ptr [ESI + 0x14]         ; 00515626
    FXCH                                ; 00515629
    FSUB float ptr [EBX + 0x18]         ; 0051562b
    FXCH                                ; 0051562e
    FSTP float ptr [ESP + 0x4]          ; 00515630
    FSTP float ptr [ESP + 0x8]          ; 00515634
    FLD float ptr [ESP + 0x4]           ; 00515638
    FMUL float ptr [ESP + 0x8]          ; 0051563c
    MOV EDX,dword ptr [0x01d22578]      ; 00515640 | DAT_01d22578
    FXCH                                ; 00515646
    FSTP float ptr [ESP + 0x10]         ; 00515648
    FSTP float ptr [ESP + 0x14]         ; 0051564c
    TEST EDX,EDX                        ; 00515650
    JNZ 0x0051571b                      ; 00515652
        ;   XREF to: 0051571b (CONDITIONAL_JUMP)  ; LAB_0051571b
    FLD float ptr [ESP + 0x14]          ; 00515658
    FCOMP float ptr [ESP + 0x10]        ; 0051565c
    FNSTSW AX                           ; 00515660
    SAHF                                ; 00515662
    JBE 0x00515714                      ; 00515663
        ;   XREF to: 00515714 (CONDITIONAL_JUMP)  ; LAB_00515714
    MOV ECX,dword ptr [0x01d25f4c]      ; 00515669 | DAT_01d25f4c
        ;   Label: LAB_00515669
    MOV EAX,[0x01d25f48]                ; 0051566f | DAT_01d25f48
    ADD EAX,ECX                         ; 00515674
    ADD EAX,0x3                         ; 00515676
    CMP EAX,0x2710                      ; 00515679
    JL 0x0051572d                       ; 0051567e
        ;   XREF to: 0051572d (CONDITIONAL_JUMP)  ; LAB_0051572d
    CALL engine_mini3d.cpp_flushTriangleBatch_FUN_00515750 ; 00515684
        ;   XREF to: 00515750 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_flushTriangleBatch_FUN_00515750()
        ;   Label: LAB_00515684
    PUSH EDI                            ; 00515689
        ;   Label: LAB_00515689
    MOV EDI,dword ptr [0x01d25f4c]      ; 0051568a | DAT_01d25f4c
    MOV EDX,dword ptr [0x01d25f48]      ; 00515690 | DAT_01d25f48
    ADD EDX,EDI                         ; 00515696
    MOV EAX,[0x01d227e0]                ; 00515698 | DAT_01d227e0
    SHL EDX,0x6                         ; 0051569d
    ADD EAX,EDX                         ; 005156a0
    MOV ECX,0x10                        ; 005156a2
    MOV EDI,EAX                         ; 005156a7
    MOVSD.REP ES:EDI,ESI                ; 005156a9
    MOV ECX,0x10                        ; 005156ab
    MOV ESI,EBX                         ; 005156b0
    LEA EDI,[EAX + 0x40]                ; 005156b2
    MOVSD.REP ES:EDI,ESI                ; 005156b5
    MOV ECX,0x10                        ; 005156b7
    MOV ESI,EBP                         ; 005156bc
    LEA EDI,[EAX + 0x80]                ; 005156be
    MOV EDX,dword ptr [0x01d25f50]      ; 005156c4 | DAT_01d25f50
    MOV AX,[0x01d25f4c]                 ; 005156ca | DAT_01d25f4c
    MOVSD.REP ES:EDI,ESI                ; 005156d0
    MOV EBP,dword ptr [0x01d25f4c]      ; 005156d2 | DAT_01d25f4c
    MOV SI,word ptr [0x01d25f4c]        ; 005156d8 | DAT_01d25f4c
    MOV word ptr [EDX*0x2 + 0x1d25f54],AX ; 005156df
    MOV EDX,EAX                         ; 005156e7
    MOV EAX,[0x01d25f50]                ; 005156e9 | DAT_01d25f50
    ADD EBP,0x3                         ; 005156ee
    ADD EAX,0x3                         ; 005156f1
    INC EDX                             ; 005156f4
    ADD ESI,0x2                         ; 005156f5
    MOV word ptr [EAX*0x2 + 0x1d25f50],DX ; 005156f8 | DAT_01d25f50
    MOV dword ptr [0x01d25f4c],EBP      ; 00515700 | DAT_01d25f4c
    MOV word ptr [EAX*0x2 + 0x1d25f52],SI ; 00515706
    MOV [0x01d25f50],EAX                ; 0051570e | DAT_01d25f50
    POP EDI                             ; 00515713
    ADD ESP,0x18                        ; 00515714
        ;   Label: LAB_00515714
    POP EBP                             ; 00515717
    POP ESI                             ; 00515718
    POP EBX                             ; 00515719
    RET                                 ; 0051571a
    FLD float ptr [ESP + 0x14]          ; 0051571b
        ;   Label: LAB_0051571b
    FCOMP float ptr [ESP + 0x10]        ; 0051571f
    FNSTSW AX                           ; 00515723
    SAHF                                ; 00515725
    JNC 0x00515714                      ; 00515726
        ;   XREF to: 00515714 (CONDITIONAL_JUMP)  ; LAB_00515714
    JMP 0x00515669                      ; 00515728
        ;   XREF to: 00515669 (UNCONDITIONAL_JUMP)  ; LAB_00515669
    MOV EAX,[0x01d25f50]                ; 0051572d | DAT_01d25f50
        ;   Label: LAB_0051572d
    ADD EAX,0x3                         ; 00515732
    CMP EAX,0x2710                      ; 00515735
    JGE 0x00515684                      ; 0051573a
        ;   XREF to: 00515684 (CONDITIONAL_JUMP)  ; LAB_00515684
    JMP 0x00515689                      ; 00515740
        ;   XREF to: 00515689 (UNCONDITIONAL_JUMP)  ; LAB_00515689

