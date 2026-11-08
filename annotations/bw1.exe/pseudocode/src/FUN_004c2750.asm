; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c2750(int param_1)
;
;
; XREF[1]:
;   FUN_004c47f0 at 004c48f5
;
; Called Functions:
;   FUN_005121b0
;   FUN_00512300
;   FUN_005124c0
;   FUN_005124d0
;   FUN_005124e0
;   FUN_00512de0
;   FUN_00514ae0
;   FUN_005320b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2750
        ;   Label: FUN_004c2750
    PUSH EBP                            ; 004c2751
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c2752
    CMP dword ptr [EBX + 0x4210],0x0    ; 004c2756
    JNZ 0x004c2788                      ; 004c275d
        ;   XREF to: 004c2788 (CONDITIONAL_JUMP)  ; LAB_004c2788
    CMP dword ptr [EBX + 0x1dd8],0x0    ; 004c275f
    JLE 0x004c2771                      ; 004c2766
        ;   XREF to: 004c2771 (CONDITIONAL_JUMP)  ; LAB_004c2771
    CMP dword ptr [EBX + 0x1ddc],0x0    ; 004c2768
    JG 0x004c279a                       ; 004c276f
        ;   XREF to: 004c279a (CONDITIONAL_JUMP)  ; LAB_004c279a
    MOV dword ptr [EBX + 0x1ddc],0x0    ; 004c2771
        ;   Label: LAB_004c2771
    MOV dword ptr [EBX + 0x1dd8],0x0    ; 004c277b
    POP EBP                             ; 004c2785
    POP EBX                             ; 004c2786
    RET                                 ; 004c2787
    MOV EDX,dword ptr [EBX + 0x4214]    ; 004c2788
        ;   Label: LAB_004c2788
    PUSH EDX                            ; 004c278e
    CALL FUN_005320b0                   ; 004c278f
        ;   XREF to: 005320b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005320b0()
    ADD ESP,0x4                         ; 004c2794
    POP EBP                             ; 004c2797
    POP EBX                             ; 004c2798
    RET                                 ; 004c2799
    PUSH EDI                            ; 004c279a
        ;   Label: LAB_004c279a
    LEA EAX,[EBX + 0x1db4]              ; 004c279b
    PUSH EAX                            ; 004c27a1
    CALL FUN_005121b0                   ; 004c27a2
        ;   XREF to: 005121b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005121b0()
    ADD ESP,0x4                         ; 004c27a7
    PUSH 0x0                            ; 004c27aa
    CALL FUN_00512300                   ; 004c27ac
        ;   XREF to: 00512300 (UNCONDITIONAL_CALL)  ; undefined FUN_00512300()
    ADD ESP,0x4                         ; 004c27b1
    CALL FUN_00514ae0                   ; 004c27b4
        ;   XREF to: 00514ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00514ae0()
    CALL FUN_005124c0                   ; 004c27b9
        ;   XREF to: 005124c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005124c0()
    CALL FUN_005124d0                   ; 004c27be
        ;   XREF to: 005124d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005124d0()
    MOV EAX,dword ptr [EBX + 0x1ddc]    ; 004c27c3
    MOV EDX,EAX                         ; 004c27c9
    MOV ECX,0x3                         ; 004c27cb
    SAR EDX,0x1f                        ; 004c27d0
    IDIV ECX                            ; 004c27d3
    PUSH EAX                            ; 004c27d5
    MOV EDI,dword ptr [EBX + 0x1dd4]    ; 004c27d6
    PUSH EDI                            ; 004c27dc
    MOV EBP,dword ptr [EBX + 0x1dd8]    ; 004c27dd
    PUSH EBP                            ; 004c27e3
    MOV EAX,dword ptr [EBX + 0x1dd0]    ; 004c27e4
    PUSH EAX                            ; 004c27ea
    CALL FUN_00512de0                   ; 004c27eb
        ;   XREF to: 00512de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00512de0()
    ADD ESP,0x10                        ; 004c27f0
    CALL FUN_005124e0                   ; 004c27f3
        ;   XREF to: 005124e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005124e0()
    PUSH 0xc0                           ; 004c27f8
    CALL FUN_00512300                   ; 004c27fd
        ;   XREF to: 00512300 (UNCONDITIONAL_CALL)  ; undefined FUN_00512300()
    ADD ESP,0x4                         ; 004c2802
    POP EDI                             ; 004c2805
    JMP 0x004c2771                      ; 004c2806
        ;   XREF to: 004c2771 (UNCONDITIONAL_JUMP)  ; LAB_004c2771

