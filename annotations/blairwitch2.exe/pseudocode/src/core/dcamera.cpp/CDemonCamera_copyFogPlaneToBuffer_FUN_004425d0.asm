; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_004425d0(CDemonCamera *this_ptr,int plane_index)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   plane_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 00442298
;
; Referenced Globals:
;   undefined4 DAT_01326d20
;   undefined4 DAT_01326d21
;   undefined4 DAT_01326d22
;   undefined4 DAT_01326e60
;   undefined4 DAT_01326e61
;   undefined4 DAT_01326e62
;   undefined4 DAT_01326fa1
;   undefined4 DAT_01339a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004425d0
        ;   Label: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_004425d0
    PUSH ESI                            ; 004425d1
    PUSH EDI                            ; 004425d2
    PUSH EBP                            ; 004425d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004425d4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004425d8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004425dc
    ADD EAX,EDX                         ; 004425e3
    SHL EAX,0xa                         ; 004425e5
    MOV EDX,EAX                         ; 004425e8
    SHL EAX,0x4                         ; 004425ea
    SUB EAX,EDX                         ; 004425ed
    MOV EDI,0x1                         ; 004425ef
    LEA EBP,[EAX + 0x140]               ; 004425f4
    MOV EAX,dword ptr [ESI + 0x154]     ; 004425fa
        ;   Label: LAB_004425fa
    DEC EAX                             ; 00442600
    CMP EDI,EAX                         ; 00442601
    JGE 0x0044263a                      ; 00442603
        ;   XREF to: 0044263a (CONDITIONAL_JUMP)  ; LAB_0044263a
    IMUL ECX,EDI,0x140                  ; 00442605
    MOV EDX,0x1                         ; 0044260b
    LEA EAX,[EDX + EBP*0x1]             ; 00442610
    ADD ECX,EDX                         ; 00442613
    MOV EBX,dword ptr [ESI + 0x150]     ; 00442615
        ;   Label: LAB_00442615
    DEC EBX                             ; 0044261b
    CMP EDX,EBX                         ; 0044261c
    JGE 0x00442631                      ; 0044261e
        ;   XREF to: 00442631 (CONDITIONAL_JUMP)  ; LAB_00442631
    INC EAX                             ; 00442620
    MOV BL,byte ptr [ECX + 0x1326d20]   ; 00442621 | DAT_01326e61 | DAT_01326e62 | DAT_01326fa1
    INC ECX                             ; 00442627
    INC EDX                             ; 00442628
    MOV byte ptr [EAX + 0x133991f],BL   ; 00442629
    JMP 0x00442615                      ; 0044262f
        ;   XREF to: 00442615 (UNCONDITIONAL_JUMP)  ; LAB_00442615
    INC EDI                             ; 00442631
        ;   Label: LAB_00442631
    ADD EBP,0x140                       ; 00442632
    JMP 0x004425fa                      ; 00442638
        ;   XREF to: 004425fa (UNCONDITIONAL_JUMP)  ; LAB_004425fa
    MOV EDX,dword ptr [ESI + 0x154]     ; 0044263a
        ;   Label: LAB_0044263a
    XOR EAX,EAX                         ; 00442640
    TEST EDX,EDX                        ; 00442642
    JLE 0x004426a0                      ; 00442644
        ;   XREF to: 004426a0 (CONDITIONAL_JUMP)  ; LAB_004426a0
    MOV ECX,dword ptr [ESP + 0x18]      ; 00442646
    LEA EDX,[ECX*0x4 + 0x0]             ; 0044264a
    ADD EDX,ECX                         ; 00442651
    SHL EDX,0xa                         ; 00442653
    MOV ECX,EDX                         ; 00442656
    SHL EDX,0x4                         ; 00442658
    SUB EDX,ECX                         ; 0044265b
    IMUL EBX,EAX,0x140                  ; 0044265d
        ;   Label: LAB_0044265d
    MOV CL,byte ptr [EBX + 0x1326d20]   ; 00442663 | DAT_01326d20 | DAT_01326e60
    MOV byte ptr [EDX + 0x1339920],CL   ; 00442669 | DAT_01339a60
    MOV ECX,dword ptr [ESI + 0x150]     ; 0044266f
    MOV BL,byte ptr [ECX + EBX*0x1 + 0x1326d1f] ; 00442675
    MOV byte ptr [ECX + EDX*0x1 + 0x133991f],BL ; 0044267c
    INC EAX                             ; 00442683
    MOV ECX,dword ptr [ESI + 0x154]     ; 00442684
    ADD EDX,0x140                       ; 0044268a
    CMP EAX,ECX                         ; 00442690
    JL 0x0044265d                       ; 00442692
        ;   XREF to: 0044265d (CONDITIONAL_JUMP)  ; LAB_0044265d
    LEA EAX,[EAX]                       ; 00442694
    LEA EDX,[EDX]                       ; 0044269a
    MOV EDX,dword ptr [ESP + 0x18]      ; 004426a0
        ;   Label: LAB_004426a0
    LEA EDI,[EDX*0x4 + 0x0]             ; 004426a4
    ADD EDI,EDX                         ; 004426ab
    SHL EDI,0xa                         ; 004426ad
    MOV EDX,EDI                         ; 004426b0
    SHL EDI,0x4                         ; 004426b2
    MOV EAX,0x1                         ; 004426b5
    SUB EDI,EDX                         ; 004426ba
    MOV EBP,0xffffffff                  ; 004426bc
    LEA EDX,[EDI + EAX*0x1]             ; 004426c1
    MOV ECX,dword ptr [ESI + 0x150]     ; 004426c4
        ;   Label: LAB_004426c4
    ADD ECX,EBP                         ; 004426ca
    CMP EAX,ECX                         ; 004426cc
    JGE 0x00442534                      ; 004426ce
        ;   XREF to: 00442534 (CONDITIONAL_JUMP)  ; LAB_00442534
    MOV BL,byte ptr [EAX + 0x1326d20]   ; 004426d4 | DAT_01326d21 | DAT_01326d22
    MOV byte ptr [EDX + 0x1339920],BL   ; 004426da
    MOV ECX,dword ptr [ESI + 0x154]     ; 004426e0
    DEC ECX                             ; 004426e6
    IMUL ECX,ECX,0x140                  ; 004426e7
    LEA EBX,[ECX + EAX*0x1]             ; 004426ed
    INC EAX                             ; 004426f0
    ADD ECX,EDI                         ; 004426f1
    MOV BL,byte ptr [EBX + 0x1326d20]   ; 004426f3 | DAT_01326d21 | DAT_01326d22
    INC EDX                             ; 004426f9
    MOV byte ptr [ECX + EAX*0x1 + 0x133991f],BL ; 004426fa
    JMP 0x004426c4                      ; 00442701
        ;   XREF to: 004426c4 (UNCONDITIONAL_JUMP)  ; LAB_004426c4

