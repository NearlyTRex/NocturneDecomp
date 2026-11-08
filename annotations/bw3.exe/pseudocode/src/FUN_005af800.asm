; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005af800(UINT param_1)
;
;
; XREF[1]:
;   FUN_005ad524 at 005ad526
;
; Referenced Globals:
;   undefined4 DAT_00607e7c
;   undefined4 DAT_02d25930
;
; Called Functions:
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af800
        ;   Label: FUN_005af800
    PUSH ESI                            ; 005af801
    PUSH EBP                            ; 005af802
    SUB ESP,0x14                        ; 005af803
    MOV ESI,dword ptr [ESP + 0x24]      ; 005af806
    CMP ESI,-0x1                        ; 005af80a
    JNZ 0x005af81d                      ; 005af80d
        ;   XREF to: 005af81d (CONDITIONAL_JUMP)  ; LAB_005af81d
    CALL dword ptr CS:[0x5b356c]        ; 005af80f
    MOV ESI,EAX                         ; 005af816
    JMP 0x005af8bb                      ; 005af818
        ;   XREF to: 005af8bb (UNCONDITIONAL_JUMP)  ; LAB_005af8bb
    CMP ESI,-0x2                        ; 005af81d
        ;   Label: LAB_005af81d
    JNZ 0x005af830                      ; 005af820
        ;   XREF to: 005af830 (CONDITIONAL_JUMP)  ; LAB_005af830
    CALL dword ptr CS:[0x5b35c4]        ; 005af822
    MOV ESI,EAX                         ; 005af829
    JMP 0x005af8bb                      ; 005af82b
        ;   XREF to: 005af8bb (UNCONDITIONAL_JUMP)  ; LAB_005af8bb
    CMP ESI,-0x3                        ; 005af830
        ;   Label: LAB_005af830
    JNZ 0x005af85e                      ; 005af833
        ;   XREF to: 005af85e (CONDITIONAL_JUMP)  ; LAB_005af85e
    PUSH 0x101                          ; 005af835
    PUSH 0x0                            ; 005af83a
    PUSH 0x2d25940                      ; 005af83c
    CALL FUN_005a28f0                   ; 005af841
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 005af846
    XOR EDX,EDX                         ; 005af849
    XOR EAX,EAX                         ; 005af84b
    MOV dword ptr [0x02d25930],EDX      ; 005af84d | DAT_02d25930
    MOV dword ptr [0x00607e7c],EDX      ; 005af853 | DAT_00607e7c
    JMP 0x005af961                      ; 005af859
        ;   XREF to: 005af961 (UNCONDITIONAL_JUMP)  ; LAB_005af961
    CMP ESI,-0x4                        ; 005af85e
        ;   Label: LAB_005af85e
    JNZ 0x005af8bb                      ; 005af861
        ;   XREF to: 005af8bb (CONDITIONAL_JUMP)  ; LAB_005af8bb
    PUSH 0x101                          ; 005af863
    PUSH 0x0                            ; 005af868
    PUSH 0x2d25940                      ; 005af86a
    CALL FUN_005a28f0                   ; 005af86f
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    MOV EAX,0x81                        ; 005af874
    MOV DL,0x1                          ; 005af879
    ADD ESP,0xc                         ; 005af87b
    INC EAX                             ; 005af87e
        ;   Label: LAB_005af87e
    MOV byte ptr [EAX + 0x2d25940],DL   ; 005af87f
    CMP EAX,0x9f                        ; 005af885
    JLE 0x005af87e                      ; 005af88a
        ;   XREF to: 005af87e (CONDITIONAL_JUMP)  ; LAB_005af87e
    MOV EAX,0xe0                        ; 005af88c
    MOV DH,0x1                          ; 005af891
    INC EAX                             ; 005af893
        ;   Label: LAB_005af893
    MOV byte ptr [EAX + 0x2d25940],DH   ; 005af894
    CMP EAX,0xfc                        ; 005af89a
    JLE 0x005af893                      ; 005af89f
        ;   XREF to: 005af893 (CONDITIONAL_JUMP)  ; LAB_005af893
    MOV EBP,0x1                         ; 005af8a1
    MOV EAX,0x3a4                       ; 005af8a6
    MOV dword ptr [0x02d25930],EBP      ; 005af8ab | DAT_02d25930
    MOV [0x00607e7c],EAX                ; 005af8b1 | DAT_00607e7c
    JMP 0x005af95f                      ; 005af8b6
        ;   XREF to: 005af95f (UNCONDITIONAL_JUMP)  ; LAB_005af95f
    TEST ESI,ESI                        ; 005af8bb
        ;   Label: LAB_005af8bb
    JNZ 0x005af8c4                      ; 005af8bd
        ;   XREF to: 005af8c4 (CONDITIONAL_JUMP)  ; LAB_005af8c4
    MOV ESI,0x1                         ; 005af8bf
    MOV EAX,ESP                         ; 005af8c4
        ;   Label: LAB_005af8c4
    PUSH EAX                            ; 005af8c6
    PUSH ESI                            ; 005af8c7
    CALL dword ptr CS:[0x5b3570]        ; 005af8c8
    TEST EAX,EAX                        ; 005af8cf
    JNZ 0x005af8df                      ; 005af8d1
        ;   XREF to: 005af8df (CONDITIONAL_JUMP)  ; LAB_005af8df
    MOV EAX,0x1                         ; 005af8d3
    ADD ESP,0x14                        ; 005af8d8
    POP EBP                             ; 005af8db
    POP ESI                             ; 005af8dc
    POP EBX                             ; 005af8dd
    RET                                 ; 005af8de
    PUSH 0x101                          ; 005af8df
        ;   Label: LAB_005af8df
    PUSH 0x0                            ; 005af8e4
    PUSH 0x2d25940                      ; 005af8e6
    CALL FUN_005a28f0                   ; 005af8eb
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 005af8f0
    XOR ECX,ECX                         ; 005af8f3
    MOV AH,byte ptr [ESP + 0x6]         ; 005af8f5
    MOV dword ptr [0x02d25930],ECX      ; 005af8f9 | DAT_02d25930
    TEST AH,AH                          ; 005af8ff
    JZ 0x005af90d                       ; 005af901
        ;   XREF to: 005af90d (CONDITIONAL_JUMP)  ; LAB_005af90d
    MOV dword ptr [0x02d25930],0x1      ; 005af903 | DAT_02d25930
    XOR EBX,EBX                         ; 005af90d
        ;   Label: LAB_005af90d
    MOV CL,0x1                          ; 005af90f
    XOR CH,CH                           ; 005af911
    JMP 0x005af931                      ; 005af913
        ;   XREF to: 005af931 (UNCONDITIONAL_JUMP)  ; LAB_005af931
    XOR EAX,EAX                         ; 005af915
        ;   Label: LAB_005af915
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x6] ; 005af917
    JMP 0x005af924                      ; 005af91b
        ;   XREF to: 005af924 (UNCONDITIONAL_JUMP)  ; LAB_005af924
    INC EAX                             ; 005af91d
        ;   Label: LAB_005af91d
    MOV byte ptr [EAX + 0x2d25940],CL   ; 005af91e
    XOR EDX,EDX                         ; 005af924
        ;   Label: LAB_005af924
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x7] ; 005af926
    CMP EAX,EDX                         ; 005af92a
    JLE 0x005af91d                      ; 005af92c
        ;   XREF to: 005af91d (CONDITIONAL_JUMP)  ; LAB_005af91d
    ADD EBX,0x2                         ; 005af92e
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x6] ; 005af931
        ;   Label: LAB_005af931
    CMP CH,AL                           ; 005af935
    JNZ 0x005af915                      ; 005af937
        ;   XREF to: 005af915 (CONDITIONAL_JUMP)  ; LAB_005af915
    CMP AL,byte ptr [ESP + EBX*0x1 + 0x7] ; 005af939
    JNZ 0x005af915                      ; 005af93d
        ;   XREF to: 005af915 (CONDITIONAL_JUMP)  ; LAB_005af915
    CMP ESI,0x1                         ; 005af93f
    JNZ 0x005af959                      ; 005af942
        ;   XREF to: 005af959 (CONDITIONAL_JUMP)  ; LAB_005af959
    CALL dword ptr CS:[0x5b35c4]        ; 005af944
    MOV [0x00607e7c],EAX                ; 005af94b | DAT_00607e7c
    XOR EAX,EAX                         ; 005af950
    ADD ESP,0x14                        ; 005af952
    POP EBP                             ; 005af955
    POP ESI                             ; 005af956
    POP EBX                             ; 005af957
    RET                                 ; 005af958
    MOV dword ptr [0x00607e7c],ESI      ; 005af959 | DAT_00607e7c
        ;   Label: LAB_005af959
    XOR EAX,EAX                         ; 005af95f
        ;   Label: LAB_005af95f
    ADD ESP,0x14                        ; 005af961
        ;   Label: LAB_005af961
    POP EBP                             ; 005af964
    POP ESI                             ; 005af965
    POP EBX                             ; 005af966
    RET                                 ; 005af967

