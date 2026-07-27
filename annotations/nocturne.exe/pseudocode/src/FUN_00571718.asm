; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00571718(int param_1,int param_2)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_00566f98_005c1890 = 00566f98
;
; Called Functions:
;   FUN_00568e80
;   FUN_00571510
;   FUN_00571564
;   FUN_00571588
;   FUN_00571630
;   FUN_00571668
;   FUN_00571694
;   FUN_00572ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571718
        ;   Label: FUN_00571718
    PUSH ESI                            ; 00571719
    PUSH EDI                            ; 0057171a
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057171b
    MOV EDI,dword ptr [ESP + 0x14]      ; 0057171f
    CMP EBX,0x1                         ; 00571723
    JL 0x0057172d                       ; 00571726
        ;   XREF to: 0057172d (CONDITIONAL_JUMP)  ; LAB_0057172d
    CMP EBX,0xc                         ; 00571728
    JLE 0x00571740                      ; 0057172b
        ;   XREF to: 00571740 (CONDITIONAL_JUMP)  ; LAB_00571740
    PUSH 0x9                            ; 0057172d
        ;   Label: LAB_0057172d
    CALL FUN_00568e80                   ; 0057172f
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,0x3                         ; 00571734
    ADD ESP,0x4                         ; 00571739
    POP EDI                             ; 0057173c
    POP ESI                             ; 0057173d
    POP EBX                             ; 0057173e
    RET                                 ; 0057173f
    MOV dword ptr [0x005c1890],0x5716cc ; 00571740 | PTR_crt_unknown.c_FUN_00566f98_005c1890
        ;   Label: LAB_00571740
    CMP EDI,0x2                         ; 0057174a
    JZ 0x00571775                       ; 0057174d
        ;   XREF to: 00571775 (CONDITIONAL_JUMP)  ; LAB_00571775
    CMP EDI,0x3                         ; 0057174f
    JZ 0x00571775                       ; 00571752
        ;   XREF to: 00571775 (CONDITIONAL_JUMP)  ; LAB_00571775
    PUSH EBX                            ; 00571754
    CALL FUN_00571588                   ; 00571755
        ;   XREF to: 00571588 (UNCONDITIONAL_CALL)  ; undefined FUN_00571588()
    ADD ESP,0x4                         ; 0057175a
    TEST EAX,EAX                        ; 0057175d
    JZ 0x00571775                       ; 0057175f
        ;   XREF to: 00571775 (CONDITIONAL_JUMP)  ; LAB_00571775
    CMP EBX,0x2                         ; 00571761
    JNZ 0x00571775                      ; 00571764
        ;   XREF to: 00571775 (CONDITIONAL_JUMP)  ; LAB_00571775
    PUSH 0x9f                           ; 00571766
    PUSH 0x0                            ; 0057176b
    CALL FUN_00572ef0                   ; 0057176d
        ;   XREF to: 00572ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_00572ef0()
    ADD ESP,0x8                         ; 00571772
    PUSH EBX                            ; 00571775
        ;   Label: LAB_00571775
    CALL FUN_00571564                   ; 00571776
        ;   XREF to: 00571564 (UNCONDITIONAL_CALL)  ; undefined FUN_00571564()
    ADD ESP,0x4                         ; 0057177b
    PUSH EDI                            ; 0057177e
    PUSH EBX                            ; 0057177f
    MOV ESI,EAX                         ; 00571780
    CALL FUN_00571510                   ; 00571782
        ;   XREF to: 00571510 (UNCONDITIONAL_CALL)  ; undefined FUN_00571510()
    ADD ESP,0x8                         ; 00571787
    CALL FUN_00571630                   ; 0057178a
        ;   XREF to: 00571630 (UNCONDITIONAL_CALL)  ; undefined FUN_00571630()
    TEST EAX,EAX                        ; 0057178f
    JZ 0x0057179a                       ; 00571791
        ;   XREF to: 0057179a (CONDITIONAL_JUMP)  ; LAB_0057179a
    CALL FUN_00571668                   ; 00571793
        ;   XREF to: 00571668 (UNCONDITIONAL_CALL)  ; undefined FUN_00571668()
    JMP 0x0057179f                      ; 00571798
        ;   XREF to: 0057179f (UNCONDITIONAL_JUMP)  ; LAB_0057179f
    CALL FUN_00571694                   ; 0057179a
        ;   XREF to: 00571694 (UNCONDITIONAL_CALL)  ; undefined FUN_00571694()
        ;   Label: LAB_0057179a
    MOV EAX,ESI                         ; 0057179f
        ;   Label: LAB_0057179f
    POP EDI                             ; 005717a1
    POP ESI                             ; 005717a2
    POP EBX                             ; 005717a3
    RET                                 ; 005717a4

