; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005c0530(undefined4 *param_1)
;
;
; XREF[23]:
;   FUN_0040b110 at 0040b12b
;   FUN_0040b440 at 0040b460
;   FUN_0040b870 at 0040b88b
;   FUN_0040b960 at 0040b983
;   FUN_0040bbf0 at 0040bc0b
;   FUN_0040bce0 at 0040bd00
;   FUN_0040be80 at 0040be9c
;   FUN_0040d220 at 0040d307
;   FUN_00442a80 at 00442a9a
;   FUN_00447db0 at 00447de8
;   ... and 13 more
;
; Referenced Globals:
;   void* PTR_FUN_00626600 = 005c50d4
;   void* PTR_FUN_00626604 = 005c50d4
;
; Called Functions:
;   FUN_005c0600
;   FUN_005c50d4
;   FUN_005c6450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0530
        ;   Label: FUN_005c0530
    PUSH ESI                            ; 005c0531
    PUSH EDI                            ; 005c0532
    PUSH EBP                            ; 005c0533
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c0534
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c0538
    PUSH EDX                            ; 005c053b
    CALL dword ptr [0x00626600]         ; 005c053c | PTR_FUN_00626600
    MOV ESI,dword ptr [EBX + 0x8]       ; 005c0542
    MOV ECX,dword ptr [ESI + 0xc]       ; 005c0545
    ADD ESP,0x4                         ; 005c0548
    CMP ECX,0x1                         ; 005c054b
    JZ 0x005c0569                       ; 005c054e
        ;   XREF to: 005c0569 (CONDITIONAL_JUMP)  ; LAB_005c0569
    TEST ECX,ECX                        ; 005c0550
    JZ 0x005c0562                       ; 005c0552
        ;   XREF to: 005c0562 (CONDITIONAL_JUMP)  ; LAB_005c0562
    MOV EBP,dword ptr [EBX + 0x10]      ; 005c0554
    PUSH EBP                            ; 005c0557
    MOV ESI,0xffffffff                  ; 005c0558
    JMP 0x005c05ee                      ; 005c055d
        ;   XREF to: 005c05ee (UNCONDITIONAL_JUMP)  ; LAB_005c05ee
    MOV dword ptr [ESI + 0xc],0x1       ; 005c0562
        ;   Label: LAB_005c0562
    TEST byte ptr [EBX + 0xc],0x1       ; 005c0569
        ;   Label: LAB_005c0569
    JNZ 0x005c0589                      ; 005c056d
        ;   XREF to: 005c0589 (CONDITIONAL_JUMP)  ; LAB_005c0589
    PUSH 0x4                            ; 005c056f
    CALL FUN_005c6450                   ; 005c0571
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    MOV DL,byte ptr [EBX + 0xc]         ; 005c0576
    MOV ESI,0xffffffff                  ; 005c0579
    OR DL,0x20                          ; 005c057e
    ADD ESP,0x4                         ; 005c0581
    MOV byte ptr [EBX + 0xc],DL         ; 005c0584
    JMP 0x005c05aa                      ; 005c0587
        ;   XREF to: 005c05aa (UNCONDITIONAL_JUMP)  ; LAB_005c05aa
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c0589
        ;   Label: LAB_005c0589
    DEC EAX                             ; 005c058c
    MOV dword ptr [EBX + 0x4],EAX       ; 005c058d
    TEST EAX,EAX                        ; 005c0590
    JGE 0x005c05a1                      ; 005c0592
        ;   XREF to: 005c05a1 (CONDITIONAL_JUMP)  ; LAB_005c05a1
    PUSH EBX                            ; 005c0594
    CALL FUN_005c0600                   ; 005c0595
        ;   XREF to: 005c0600 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0600()
    ADD ESP,0x4                         ; 005c059a
    MOV ESI,EAX                         ; 005c059d
    JMP 0x005c05aa                      ; 005c059f
        ;   XREF to: 005c05aa (UNCONDITIONAL_JUMP)  ; LAB_005c05aa
    MOV EAX,dword ptr [EBX]             ; 005c05a1
        ;   Label: LAB_005c05a1
    INC EAX                             ; 005c05a3
    MOVZX ESI,byte ptr [EAX + -0x1]     ; 005c05a4
    MOV dword ptr [EBX],EAX             ; 005c05a8
    TEST byte ptr [EBX + 0xc],0x40      ; 005c05aa
        ;   Label: LAB_005c05aa
    JNZ 0x005c05ea                      ; 005c05ae
        ;   XREF to: 005c05ea (CONDITIONAL_JUMP)  ; LAB_005c05ea
    CMP ESI,0xd                         ; 005c05b0
    JNZ 0x005c05d7                      ; 005c05b3
        ;   XREF to: 005c05d7 (CONDITIONAL_JUMP)  ; LAB_005c05d7
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c05b5
    DEC ECX                             ; 005c05b8
    MOV dword ptr [EBX + 0x4],ECX       ; 005c05b9
    TEST ECX,ECX                        ; 005c05bc
    JGE 0x005c05cd                      ; 005c05be
        ;   XREF to: 005c05cd (CONDITIONAL_JUMP)  ; LAB_005c05cd
    PUSH EBX                            ; 005c05c0
    CALL FUN_005c0600                   ; 005c05c1
        ;   XREF to: 005c0600 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0600()
    ADD ESP,0x4                         ; 005c05c6
    MOV ESI,EAX                         ; 005c05c9
    JMP 0x005c05d7                      ; 005c05cb
        ;   XREF to: 005c05d7 (UNCONDITIONAL_JUMP)  ; LAB_005c05d7
    MOV EAX,dword ptr [EBX]             ; 005c05cd
        ;   Label: LAB_005c05cd
    MOV DL,byte ptr [EAX]               ; 005c05cf
    INC EAX                             ; 005c05d1
    MOVZX ESI,DL                        ; 005c05d2
    MOV dword ptr [EBX],EAX             ; 005c05d5
    CMP ESI,0x1a                        ; 005c05d7
        ;   Label: LAB_005c05d7
    JNZ 0x005c05ea                      ; 005c05da
        ;   XREF to: 005c05ea (CONDITIONAL_JUMP)  ; LAB_005c05ea
    MOV CL,byte ptr [EBX + 0xc]         ; 005c05dc
    OR CL,0x10                          ; 005c05df
    MOV ESI,0xffffffff                  ; 005c05e2
    MOV byte ptr [EBX + 0xc],CL         ; 005c05e7
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c05ea
        ;   Label: LAB_005c05ea
    PUSH EDI                            ; 005c05ed
    CALL dword ptr [0x00626604]         ; 005c05ee | PTR_FUN_00626604
        ;   Label: LAB_005c05ee
    ADD ESP,0x4                         ; 005c05f4
    MOV EAX,ESI                         ; 005c05f7
    POP EBP                             ; 005c05f9
    POP EDI                             ; 005c05fa
    POP ESI                             ; 005c05fb
    POP EBX                             ; 005c05fc
    RET                                 ; 005c05fd

