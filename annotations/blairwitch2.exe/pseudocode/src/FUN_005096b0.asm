; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005096b0(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_0050a280 at 0050a84b
;
; Referenced Globals:
;   undefined4 DAT_00618e88
;   undefined4 DAT_00618f40
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005096b0
        ;   Label: FUN_005096b0
    PUSH ESI                            ; 005096b1
    SUB ESP,0x8                         ; 005096b2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005096b5
    MOV EDX,dword ptr [EDX]             ; 005096b9
    LEA EAX,[EDX*0x4 + 0x0]             ; 005096bb
    SUB EAX,EDX                         ; 005096c2
    SHL EAX,0x2                         ; 005096c4
    MOV EDX,EAX                         ; 005096c7
    SHL EAX,0x4                         ; 005096c9
    SUB EAX,EDX                         ; 005096cc
    MOV EDX,EAX                         ; 005096ce
    MOV EAX,dword ptr [ESP + 0x14]      ; 005096d0
    MOV EAX,dword ptr [EAX + 0xc]       ; 005096d4
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x618f40] ; 005096d7 | DAT_00618f40
    LEA EAX,[EDX*0x8 + 0x0]             ; 005096de
    ADD EAX,EDX                         ; 005096e5
    SHL EAX,0x4                         ; 005096e7
    MOV dword ptr [ESP + 0x4],EAX       ; 005096ea
    MOV EAX,dword ptr [ESP + 0x14]      ; 005096ee
    MOV EDX,dword ptr [EAX]             ; 005096f2
    SHL EDX,0x5                         ; 005096f4
    MOV EAX,dword ptr [EAX + 0x10]      ; 005096f7
    FILD dword ptr [ESP + 0x4]          ; 005096fa
    FDIV double ptr [EDX + EAX*0x8 + 0x618e88] ; 005096fe | DAT_00618e88
    MOV EAX,dword ptr [ESP + 0x14]      ; 00509705
    CALL FUN_005b7ff0                   ; 00509709
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    MOV EDX,dword ptr [EAX]             ; 0050970e
    FISTP dword ptr [ESP]               ; 00509710
    TEST EDX,EDX                        ; 00509713
    JZ 0x00509752                       ; 00509715
        ;   XREF to: 00509752 (CONDITIONAL_JUMP)  ; LAB_00509752
    CMP dword ptr [ESP + 0x24],0x1      ; 00509717
    JNZ 0x0050974c                      ; 0050971c
        ;   XREF to: 0050974c (CONDITIONAL_JUMP)  ; LAB_0050974c
    SUB dword ptr [ESP],0x11            ; 0050971e
    MOV EAX,dword ptr [ESP + 0x14]      ; 00509722
        ;   Label: LAB_00509722
    CMP dword ptr [EAX + 0x14],0x0      ; 00509726
    JZ 0x0050972f                       ; 0050972a
        ;   XREF to: 0050972f (CONDITIONAL_JUMP)  ; LAB_0050972f
    INC dword ptr [ESP]                 ; 0050972c
    MOV EBX,dword ptr [ESP]             ; 0050972f
        ;   Label: LAB_0050972f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00509732
    SUB EBX,0x4                         ; 00509736
    MOV ESI,dword ptr [EAX + 0x8]       ; 00509739
    MOV dword ptr [ESP],EBX             ; 0050973c
    TEST ESI,ESI                        ; 0050973f
    JNZ 0x0050977a                      ; 00509741
        ;   XREF to: 0050977a (CONDITIONAL_JUMP)  ; LAB_0050977a
    MOV EAX,dword ptr [ESP]             ; 00509743
    ADD ESP,0x8                         ; 00509746
    POP ESI                             ; 00509749
    POP EBX                             ; 0050974a
    RET                                 ; 0050974b
    SUB dword ptr [ESP],0x20            ; 0050974c
        ;   Label: LAB_0050974c
    JMP 0x00509722                      ; 00509750
        ;   XREF to: 00509722 (UNCONDITIONAL_JUMP)  ; LAB_00509722
    MOV EAX,dword ptr [ESP]             ; 00509752
        ;   Label: LAB_00509752
    MOV EDX,EAX                         ; 00509755
    SAR EDX,0x1f                        ; 00509757
    SUB EAX,EDX                         ; 0050975a
    SAR EAX,0x1                         ; 0050975c
    MOV ECX,dword ptr [ESP + 0x24]      ; 0050975e
    MOV dword ptr [ESP],EAX             ; 00509762
    CMP ECX,0x1                         ; 00509765
    JNZ 0x00509772                      ; 00509768
        ;   XREF to: 00509772 (CONDITIONAL_JUMP)  ; LAB_00509772
    LEA ESI,[EAX + -0x9]                ; 0050976a
    MOV dword ptr [ESP],ESI             ; 0050976d
    JMP 0x00509722                      ; 00509770
        ;   XREF to: 00509722 (UNCONDITIONAL_JUMP)  ; LAB_00509722
    LEA EBX,[EAX + -0x11]               ; 00509772
        ;   Label: LAB_00509772
    MOV dword ptr [ESP],EBX             ; 00509775
    JMP 0x00509722                      ; 00509778
        ;   XREF to: 00509722 (UNCONDITIONAL_JUMP)  ; LAB_00509722
    PUSH EDI                            ; 0050977a
        ;   Label: LAB_0050977a
    LEA EDI,[EBX + -0x2]                ; 0050977b
    MOV dword ptr [ESP + 0x4],EDI       ; 0050977e
    POP EDI                             ; 00509782
    MOV EAX,dword ptr [ESP]             ; 00509783
    ADD ESP,0x8                         ; 00509786
    POP ESI                             ; 00509789
    POP EBX                             ; 0050978a
    RET                                 ; 0050978b

