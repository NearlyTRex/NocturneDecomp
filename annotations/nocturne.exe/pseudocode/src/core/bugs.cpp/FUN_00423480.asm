; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_00423480(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70 at 004233ac
;
; Referenced Globals:
;   double DOUBLE_00579d7d = 0.00390625
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040de00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423480
        ;   Label: core_bugs.cpp_FUN_00423480
    PUSH ESI                            ; 00423481
    PUSH EDI                            ; 00423482
    PUSH EBP                            ; 00423483
    SUB ESP,0x58                        ; 00423484
    MOV EAX,dword ptr [ESP + 0x70]      ; 00423487
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0042348b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042348e
    MOV EAX,dword ptr [ESP + 0x70]      ; 00423492
    MOV EDX,dword ptr [ESP + 0x70]      ; 00423496
    MOV EAX,dword ptr [EAX + 0x30]      ; 0042349a
    MOV dword ptr [EDX + 0x34],0x0      ; 0042349d
    MOV dword ptr [EDX + 0x2c],EAX      ; 004234a4
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004234a7
    XOR EDX,EDX                         ; 004234ab
    ADD EAX,0x129a0                     ; 004234ad
    MOV dword ptr [ESP + 0x48],EDX      ; 004234b2
    MOV dword ptr [ESP + 0x38],EAX      ; 004234b6
    MOV EAX,dword ptr [ESP + 0x70]      ; 004234ba
        ;   Label: LAB_004234ba
    IMUL EAX,dword ptr [EAX + 0x2c],0x28 ; 004234be
    MOV EDX,dword ptr [ESP + 0x38]      ; 004234c2
    ADD EDX,EAX                         ; 004234c6
    MOV EAX,dword ptr [ESP + 0x70]      ; 004234c8
    IMUL EAX,dword ptr [EAX + 0x2c],0xc ; 004234cc
    MOV dword ptr [ESP + 0x44],EDX      ; 004234d0
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004234d4
    MOV EDX,dword ptr [EDX + 0x12964]   ; 004234d8
    MOV EDX,dword ptr [EDX + 0x2234]    ; 004234de
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x4] ; 004234e4
    MOV dword ptr [ESP + 0x40],EAX      ; 004234e8
    MOV EAX,dword ptr [ESP + 0x44]      ; 004234ec
    XOR ESI,ESI                         ; 004234f0
    MOV EDI,dword ptr [EAX]             ; 004234f2
    XOR EDX,EDX                         ; 004234f4
    TEST EDI,EDI                        ; 004234f6
    JLE 0x0042354a                      ; 004234f8
        ;   XREF to: 0042354a (CONDITIONAL_JUMP)  ; LAB_0042354a
    MOV EBX,EAX                         ; 004234fa
    XOR ECX,ECX                         ; 004234fc
    MOV EAX,dword ptr [EBX + 0x8]       ; 004234fe
        ;   Label: LAB_004234fe
    IMUL EBP,EAX,0xc                    ; 00423501
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00423504
    MOV EDI,dword ptr [EDI + 0x12964]   ; 00423508
    MOV EDI,dword ptr [EDI + 0x2234]    ; 0042350e
    ADD EDI,EBP                         ; 00423514
    MOV EDI,dword ptr [EDI + 0x4]       ; 00423516
    MOV dword ptr [ESP + 0x4c],EDI      ; 00423519
    MOV EDI,0x1                         ; 0042351d
    MOV EBP,dword ptr [ESP + 0x48]      ; 00423522
    MOV dword ptr [ESP + 0x50],EDI      ; 00423526
    TEST EBP,EBP                        ; 0042352a
    JNZ 0x0042363f                      ; 0042352c
        ;   XREF to: 0042363f (CONDITIONAL_JUMP)  ; LAB_0042363f
    CMP EAX,dword ptr [ESP + 0x3c]      ; 00423532
    JNZ 0x00423627                      ; 00423536
        ;   XREF to: 00423627 (CONDITIONAL_JUMP)  ; LAB_00423627
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042353c
        ;   Label: LAB_0042353c
    INC EDX                             ; 00423540
    MOV EBP,dword ptr [EAX]             ; 00423541
    ADD EBX,0x4                         ; 00423543
    CMP EDX,EBP                         ; 00423546
    JL 0x004234fe                       ; 00423548
        ;   XREF to: 004234fe (CONDITIONAL_JUMP)  ; LAB_004234fe
    TEST ESI,ESI                        ; 0042354a
        ;   Label: LAB_0042354a
    JLE 0x00423610                      ; 0042354c
        ;   XREF to: 00423610 (CONDITIONAL_JUMP)  ; LAB_00423610
    MOV EAX,dword ptr [ESP + 0x70]      ; 00423552
        ;   Label: LAB_00423552
    MOV ECX,dword ptr [EAX + 0x3c]      ; 00423556
    TEST ECX,ECX                        ; 00423559
    JLE 0x00423563                      ; 0042355b
        ;   XREF to: 00423563 (CONDITIONAL_JUMP)  ; LAB_00423563
    LEA EBX,[ECX + -0x1]                ; 0042355d
    MOV dword ptr [EAX + 0x3c],EBX      ; 00423560
    TEST ESI,ESI                        ; 00423563
        ;   Label: LAB_00423563
    JG 0x00423657                       ; 00423565
        ;   XREF to: 00423657 (CONDITIONAL_JUMP)  ; LAB_00423657
    MOV EDX,dword ptr [ESP + 0x70]      ; 0042356b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042356f
    MOV dword ptr [EDX + 0x30],EAX      ; 00423573
    TEST EAX,EAX                        ; 00423576
    JL 0x00423672                       ; 00423578
        ;   XREF to: 00423672 (CONDITIONAL_JUMP)  ; LAB_00423672
    MOV EDX,dword ptr [ESP + 0x70]      ; 0042357e
        ;   Label: LAB_0042357e
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00423582
    LEA EAX,[EDX*0x4 + 0x0]             ; 00423585
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0042358c
    SUB EAX,EDX                         ; 00423590
    MOV ECX,dword ptr [ECX + 0x12964]   ; 00423592
    SHL EAX,0x2                         ; 00423598
    MOV EDX,dword ptr [ECX + 0x2234]    ; 0042359b
    LEA EDI,[ESP + 0x2c]                ; 004235a1
    LEA ESI,[EDX + EAX*0x1]             ; 004235a5
    MOV ECX,dword ptr [ESP + 0x70]      ; 004235a8
    MOVSD ES:EDI,ESI                    ; 004235ac
    MOVSD ES:EDI,ESI                    ; 004235ad
    MOVSD ES:EDI,ESI                    ; 004235ae
    MOV ECX,dword ptr [ECX + 0x30]      ; 004235af
    LEA EAX,[ECX*0x4 + 0x0]             ; 004235b2
    SUB EAX,ECX                         ; 004235b9
    SHL EAX,0x2                         ; 004235bb
    LEA EDI,[ESP + 0x20]                ; 004235be
    LEA ESI,[EDX + EAX*0x1]             ; 004235c2
    MOVSD ES:EDI,ESI                    ; 004235c5
    MOVSD ES:EDI,ESI                    ; 004235c6
    MOVSD ES:EDI,ESI                    ; 004235c7
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004235c8
    SUB EDX,dword ptr [ESP + 0x20]      ; 004235cc
    IMUL EDX,EDX                        ; 004235d0
    MOV EAX,dword ptr [ESP + 0x30]      ; 004235d3
    SUB EAX,dword ptr [ESP + 0x24]      ; 004235d7
    IMUL EAX,EAX                        ; 004235db
    MOV EBX,dword ptr [ESP + 0x28]      ; 004235de
    MOV ECX,dword ptr [ESP + 0x34]      ; 004235e2
    SUB ECX,EBX                         ; 004235e6
    ADD EDX,EAX                         ; 004235e8
    MOV EAX,ECX                         ; 004235ea
    IMUL EAX,ECX                        ; 004235ec
    ADD EAX,EDX                         ; 004235ef
    MOV dword ptr [ESP + 0x54],EAX      ; 004235f1
    FILD dword ptr [ESP + 0x54]         ; 004235f5
    FSQRT                               ; 004235f9
    FMUL double ptr [0x00579d7d]        ; 004235fb | DOUBLE_00579d7d
    MOV EAX,dword ptr [ESP + 0x70]      ; 00423601
    FSTP float ptr [EAX + 0x38]         ; 00423605
    ADD ESP,0x58                        ; 00423608
    POP EBP                             ; 0042360b
    POP EDI                             ; 0042360c
    POP ESI                             ; 0042360d
    POP EBX                             ; 0042360e
    RET                                 ; 0042360f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00423610
        ;   Label: LAB_00423610
    INC EAX                             ; 00423614
    MOV dword ptr [ESP + 0x48],EAX      ; 00423615
    CMP EAX,0x2                         ; 00423619
    JL 0x004234ba                       ; 0042361c
        ;   XREF to: 004234ba (CONDITIONAL_JUMP)  ; LAB_004234ba
    JMP 0x00423552                      ; 00423622
        ;   XREF to: 00423552 (UNCONDITIONAL_JUMP)  ; LAB_00423552
    MOV EDI,dword ptr [ESP + 0x70]      ; 00423627
        ;   Label: LAB_00423627
    CMP dword ptr [EDI + 0x3c],0x0      ; 0042362b
    JLE 0x0042363f                      ; 0042362f
        ;   XREF to: 0042363f (CONDITIONAL_JUMP)  ; LAB_0042363f
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00423631
    CMP EDI,dword ptr [ESP + 0x40]      ; 00423635
    JL 0x0042353c                       ; 00423639
        ;   XREF to: 0042353c (CONDITIONAL_JUMP)  ; LAB_0042353c
    CMP dword ptr [ESP + 0x50],0x0      ; 0042363f
        ;   Label: LAB_0042363f
    JZ 0x0042353c                       ; 00423644
        ;   XREF to: 0042353c (CONDITIONAL_JUMP)  ; LAB_0042353c
    ADD ECX,0x4                         ; 0042364a
    INC ESI                             ; 0042364d
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EAX ; 0042364e
    JMP 0x0042353c                      ; 00423652
        ;   XREF to: 0042353c (UNCONDITIONAL_JUMP)  ; LAB_0042353c
    DEC ESI                             ; 00423657
        ;   Label: LAB_00423657
    PUSH ESI                            ; 00423658
    PUSH 0x0                            ; 00423659
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0042365b
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 00423660
    MOV EDX,dword ptr [ESP + 0x70]      ; 00423663
    MOV EAX,dword ptr [ESP + EAX*0x4]   ; 00423667
    MOV dword ptr [EDX + 0x30],EAX      ; 0042366a
    JMP 0x0042357e                      ; 0042366d
        ;   XREF to: 0042357e (UNCONDITIONAL_JUMP)  ; LAB_0042357e
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00423672
        ;   Label: LAB_00423672
    MOV dword ptr [EDX + 0x30],EAX      ; 00423675
    JMP 0x0042357e                      ; 00423678
        ;   XREF to: 0042357e (UNCONDITIONAL_JUMP)  ; LAB_0042357e

