; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00533640(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   FUN_005336e0 at 00533755
;   FUN_00533930 at 0053399f
;   FUN_00533dc0 at 005341c0
;   FUN_00535490 at 0053558f
;
; Referenced Globals:
;   undefined4 DAT_01fe5c1c
;
; Called Functions:
;   FUN_0048f120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533640
        ;   Label: FUN_00533640
    PUSH ESI                            ; 00533641
    PUSH EDI                            ; 00533642
    SUB ESP,0xc                         ; 00533643
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00533646
    MOV ECX,dword ptr [ESP + 0x20]      ; 0053364a
    MOV EDX,dword ptr [ESP + 0x24]      ; 0053364e
    MOV ESI,dword ptr [ESP + 0x28]      ; 00533652
    TEST EDX,EDX                        ; 00533656
    JL 0x00533696                       ; 00533658
        ;   XREF to: 00533696 (CONDITIONAL_JUMP)  ; LAB_00533696
    CMP EDX,0x64                        ; 0053365a
    JGE 0x00533696                      ; 0053365d
        ;   XREF to: 00533696 (CONDITIONAL_JUMP)  ; LAB_00533696
    TEST ECX,ECX                        ; 0053365f
    JL 0x00533696                       ; 00533661
        ;   XREF to: 00533696 (CONDITIONAL_JUMP)  ; LAB_00533696
    CMP ECX,0x64                        ; 00533663
    JGE 0x00533696                      ; 00533666
        ;   XREF to: 00533696 (CONDITIONAL_JUMP)  ; LAB_00533696
    LEA EAX,[ECX*0x4 + 0x0]             ; 00533668
    SUB EAX,ECX                         ; 0053366f
    SHL EAX,0x3                         ; 00533671
    ADD EAX,ECX                         ; 00533674
    SHL EAX,0x4                         ; 00533676
    LEA EBX,[EDX*0x4 + 0x0]             ; 00533679
    ADD EAX,EDI                         ; 00533680
    ADD EBX,EAX                         ; 00533682
    CMP ESI,dword ptr [EBX + 0x9c70]    ; 00533684
    JNZ 0x0053369d                      ; 0053368a
        ;   XREF to: 0053369d (CONDITIONAL_JUMP)  ; LAB_0053369d
    MOV EAX,dword ptr [EBX + 0x30]      ; 0053368c
    ADD ESP,0xc                         ; 0053368f
        ;   Label: LAB_0053368f
    POP EDI                             ; 00533692
    POP ESI                             ; 00533693
    POP EBX                             ; 00533694
    RET                                 ; 00533695
    MOV EAX,0xffffd8f1                  ; 00533696
        ;   Label: LAB_00533696
    JMP 0x0053368f                      ; 0053369b
        ;   XREF to: 0053368f (UNCONDITIONAL_JUMP)  ; LAB_0053368f
    MOV EAX,dword ptr [EDI + 0x24]      ; 0053369d
        ;   Label: LAB_0053369d
    ADD EAX,EDX                         ; 005336a0
    MOV dword ptr [ESP],EAX             ; 005336a2
    LEA EAX,[ESI + 0x4]                 ; 005336a5
    MOV dword ptr [ESP + 0x4],EAX       ; 005336a8
    MOV EAX,dword ptr [EDI + 0x2c]      ; 005336ac
    ADD EAX,ECX                         ; 005336af
    MOV dword ptr [ESP + 0x8],EAX       ; 005336b1
    MOV EAX,ESP                         ; 005336b5
    PUSH EAX                            ; 005336b7
    PUSH 0x1fe5c1c                      ; 005336b8 | DAT_01fe5c1c
    CALL FUN_0048f120                   ; 005336bd
        ;   XREF to: 0048f120 (UNCONDITIONAL_CALL)  ; undefined FUN_0048f120()
    MOV dword ptr [EBX + 0x30],EAX      ; 005336c2
    ADD ESP,0x8                         ; 005336c5
    MOV dword ptr [EBX + 0x9c70],ESI    ; 005336c8
    ADD ESP,0xc                         ; 005336ce
    POP EDI                             ; 005336d1
    POP ESI                             ; 005336d2
    POP EBX                             ; 005336d3
    RET                                 ; 005336d4

