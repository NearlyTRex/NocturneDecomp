; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004e6590(CGore *this_ptr,CVector3f *position,int *out_blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; int *            Stack[0xc]:4   out_blood_type
;
; XREF[1]:
;   core_actor.cpp_FUN_0040c870 at 0040c938
;
; Referenced Globals:
;   undefined4 DAT_005e415d
;   undefined4 DAT_005e4165
;   undefined4 DAT_01cd56b0
;   undefined4 DAT_01cd56c4
;   undefined4 DAT_01cd56fc
;   undefined4 DAT_01cd5700
;   undefined4 DAT_01cd5704
;   undefined4 DAT_01cd5708
;   undefined4 DAT_01cd570c
;   undefined4 DAT_01cf69f8
;   undefined4 DAT_01cf6a04
;   undefined4 DAT_01cf6a28
;   undefined4 DAT_01cf6a2c
;   undefined4 DAT_01cf6a30
;   undefined4 DAT_01cf6a34
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6590
        ;   Label: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004e6590
    PUSH ESI                            ; 004e6591
    PUSH EDI                            ; 004e6592
    PUSH EBP                            ; 004e6593
    MOV EBP,ESP                         ; 004e6594
    AND ESP,0xfffffff8                  ; 004e6596
    MOV ESI,dword ptr [0x01cd56b0]      ; 004e6599 | DAT_01cd56b0
    MOV EDI,dword ptr [0x01cf69f8]      ; 004e659f | DAT_01cf69f8
    MOV ECX,dword ptr [EBP + 0x18]      ; 004e65a5
    XOR EBX,EBX                         ; 004e65a8
    TEST EDI,EDI                        ; 004e65aa
    JLE 0x004e65ce                      ; 004e65ac
        ;   XREF to: 004e65ce (CONDITIONAL_JUMP)  ; LAB_004e65ce
    MOV EDX,0x1cf69fc                   ; 004e65ae
    FLD float ptr [ECX + 0x4]           ; 004e65b3
        ;   Label: LAB_004e65b3
    FSUB float ptr [EDX + 0x8]          ; 004e65b6 | DAT_01cf6a04 | DAT_01cf6a2c
    FABS                                ; 004e65b9
    FCOMP double ptr [0x005e415d]       ; 004e65bb | DAT_005e415d
    FNSTSW AX                           ; 004e65c1
    SAHF                                ; 004e65c3
    JBE 0x004e65fe                      ; 004e65c4
        ;   XREF to: 004e65fe (CONDITIONAL_JUMP)  ; LAB_004e65fe
    INC EBX                             ; 004e65c6
        ;   Label: LAB_004e65c6
    ADD EDX,0x28                        ; 004e65c7
    CMP EBX,EDI                         ; 004e65ca
    JL 0x004e65b3                       ; 004e65cc
        ;   XREF to: 004e65b3 (CONDITIONAL_JUMP)  ; LAB_004e65b3
    XOR EBX,EBX                         ; 004e65ce
        ;   Label: LAB_004e65ce
    TEST ESI,ESI                        ; 004e65d0
    JLE 0x004e65e7                      ; 004e65d2
        ;   XREF to: 004e65e7 (CONDITIONAL_JUMP)  ; LAB_004e65e7
    MOV EDX,0x1cd56b4                   ; 004e65d4
    CMP dword ptr [EDX + 0x10],0x0      ; 004e65d9 | DAT_01cd56c4 | DAT_01cd5708
        ;   Label: LAB_004e65d9
    JZ 0x004e6632                       ; 004e65dd
        ;   XREF to: 004e6632 (CONDITIONAL_JUMP)  ; LAB_004e6632
    INC EBX                             ; 004e65df
        ;   Label: LAB_004e65df
    ADD EDX,0x44                        ; 004e65e0
    CMP EBX,ESI                         ; 004e65e3
    JL 0x004e65d9                       ; 004e65e5
        ;   XREF to: 004e65d9 (CONDITIONAL_JUMP)  ; LAB_004e65d9
    XOR EDX,EDX                         ; 004e65e7
        ;   Label: LAB_004e65e7
    MOV EAX,EDX                         ; 004e65e9
        ;   Label: LAB_004e65e9
    MOV dword ptr [0x01cf69f8],EDI      ; 004e65eb | DAT_01cf69f8
    MOV dword ptr [0x01cd56b0],ESI      ; 004e65f1 | DAT_01cd56b0
    MOV ESP,EBP                         ; 004e65f7
    POP EBP                             ; 004e65f9
    POP EDI                             ; 004e65fa
    POP ESI                             ; 004e65fb
    POP EBX                             ; 004e65fc
    RET                                 ; 004e65fd
    FLD float ptr [ECX]                 ; 004e65fe
        ;   Label: LAB_004e65fe
    FSUB float ptr [EDX + 0x4]          ; 004e6600 | DAT_01cf6a28
    FABS                                ; 004e6603
    FCOMP double ptr [0x005e4165]       ; 004e6605 | DAT_005e4165
    FNSTSW AX                           ; 004e660b
    SAHF                                ; 004e660d
    JA 0x004e65c6                       ; 004e660e
        ;   XREF to: 004e65c6 (CONDITIONAL_JUMP)  ; LAB_004e65c6
    FLD float ptr [ECX + 0x8]           ; 004e6610
    FSUB float ptr [EDX + 0xc]          ; 004e6613 | DAT_01cf6a30
    FABS                                ; 004e6616
    FCOMP double ptr [0x005e4165]       ; 004e6618 | DAT_005e4165
    FNSTSW AX                           ; 004e661e
    SAHF                                ; 004e6620
    JA 0x004e65c6                       ; 004e6621
        ;   XREF to: 004e65c6 (CONDITIONAL_JUMP)  ; LAB_004e65c6
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004e6623
    MOV EDX,dword ptr [EDX + 0x10]      ; 004e6626 | DAT_01cf6a34
    MOV dword ptr [ECX],EDX             ; 004e6629
    MOV EDX,0x1                         ; 004e662b
    JMP 0x004e65e9                      ; 004e6630
        ;   XREF to: 004e65e9 (UNCONDITIONAL_JUMP)  ; LAB_004e65e9
    FLD float ptr [ECX + 0x4]           ; 004e6632
        ;   Label: LAB_004e6632
    FSUB float ptr [EDX + 0x8]          ; 004e6635 | DAT_01cd5700
    FABS                                ; 004e6638
    FCOMP double ptr [0x005e415d]       ; 004e663a | DAT_005e415d
    FNSTSW AX                           ; 004e6640
    SAHF                                ; 004e6642
    JA 0x004e65df                       ; 004e6643
        ;   XREF to: 004e65df (CONDITIONAL_JUMP)  ; LAB_004e65df
    FLD float ptr [ECX]                 ; 004e6645
    FSUB float ptr [EDX + 0x4]          ; 004e6647 | DAT_01cd56fc
    FABS                                ; 004e664a
    FCOMP double ptr [0x005e415d]       ; 004e664c | DAT_005e415d
    FNSTSW AX                           ; 004e6652
    SAHF                                ; 004e6654
    JA 0x004e65df                       ; 004e6655
        ;   XREF to: 004e65df (CONDITIONAL_JUMP)  ; LAB_004e65df
    FLD float ptr [ECX + 0x8]           ; 004e6657
    FSUB float ptr [EDX + 0xc]          ; 004e665a | DAT_01cd5704
    FABS                                ; 004e665d
    FCOMP double ptr [0x005e415d]       ; 004e665f | DAT_005e415d
    FNSTSW AX                           ; 004e6665
    SAHF                                ; 004e6667
    JA 0x004e65df                       ; 004e6668
        ;   XREF to: 004e65df (CONDITIONAL_JUMP)  ; LAB_004e65df
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004e666e
    MOV EDX,dword ptr [EDX + 0x14]      ; 004e6671 | DAT_01cd570c
    MOV dword ptr [ECX],EDX             ; 004e6674
    MOV EDX,0x1                         ; 004e6676
    JMP 0x004e65e9                      ; 004e667b
        ;   XREF to: 004e65e9 (UNCONDITIONAL_JUMP)  ; LAB_004e65e9

