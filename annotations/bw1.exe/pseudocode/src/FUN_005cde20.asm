; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005cde20(void)
;
;
; XREF[1]:
;   FUN_005cc99c at 005cc99e
;
; Referenced Globals:
;   undefined4 DAT_02c9f6d0
;   undefined4 DAT_02c9f6d4
;
; Called Functions:
;   FUN_005c08d0
;   FUN_005c09f0
;   FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cde20
        ;   Label: FUN_005cde20
    PUSH ESI                            ; 005cde21
    PUSH EDI                            ; 005cde22
    MOV EDX,dword ptr [0x02c9f6d4]      ; 005cde23 | DAT_02c9f6d4
    TEST EDX,EDX                        ; 005cde29
    JZ 0x005cdeb5                       ; 005cde2b
        ;   XREF to: 005cdeb5 (CONDITIONAL_JUMP)  ; LAB_005cdeb5
    MOV EBX,EDX                         ; 005cde31
    JMP 0x005cde66                      ; 005cde33
        ;   XREF to: 005cde66 (UNCONDITIONAL_JUMP)  ; LAB_005cde66
    MOV ESI,dword ptr [0x02c9f6d0]      ; 005cde35 | DAT_02c9f6d0
        ;   Label: LAB_005cde35
    TEST ESI,ESI                        ; 005cde3b
    JZ 0x005cde63                       ; 005cde3d
        ;   XREF to: 005cde63 (CONDITIONAL_JUMP)  ; LAB_005cde63
    MOV EDI,dword ptr [0x02c9f6d4]      ; 005cde3f | DAT_02c9f6d4
    MOV ECX,EBX                         ; 005cde45
    SUB ECX,EDI                         ; 005cde47
    MOV EDX,ESI                         ; 005cde49
    SAR ECX,0x2                         ; 005cde4b
    CMP byte ptr [ECX + EDX*0x1],0x0    ; 005cde4e
    JZ 0x005cde5d                       ; 005cde52
        ;   XREF to: 005cde5d (CONDITIONAL_JUMP)  ; LAB_005cde5d
    PUSH EAX                            ; 005cde54
    CALL FUN_005c09f0                   ; 005cde55
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 005cde5a
    MOV dword ptr [EBX],0x0             ; 005cde5d
        ;   Label: LAB_005cde5d
    ADD EBX,0x4                         ; 005cde63
        ;   Label: LAB_005cde63
    MOV EAX,dword ptr [EBX]             ; 005cde66
        ;   Label: LAB_005cde66
    TEST EAX,EAX                        ; 005cde68
    JNZ 0x005cde35                      ; 005cde6a
        ;   XREF to: 005cde35 (CONDITIONAL_JUMP)  ; LAB_005cde35
    CMP dword ptr [0x02c9f6d0],0x0      ; 005cde6c | DAT_02c9f6d0
    JNZ 0x005cde81                      ; 005cde73
        ;   XREF to: 005cde81 (CONDITIONAL_JUMP)  ; LAB_005cde81
    PUSH 0x5                            ; 005cde75
    CALL FUN_005c08d0                   ; 005cde77
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 005cde7c
    JMP 0x005cde92                      ; 005cde7f
        ;   XREF to: 005cde92 (UNCONDITIONAL_JUMP)  ; LAB_005cde92
    PUSH 0x5                            ; 005cde81
        ;   Label: LAB_005cde81
    MOV ECX,dword ptr [0x02c9f6d4]      ; 005cde83 | DAT_02c9f6d4
    PUSH ECX                            ; 005cde89
    CALL FUN_005c10d0                   ; 005cde8a
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 005cde8f
    TEST EAX,EAX                        ; 005cde92
        ;   Label: LAB_005cde92
    JNZ 0x005cde9f                      ; 005cde94
        ;   XREF to: 005cde9f (CONDITIONAL_JUMP)  ; LAB_005cde9f
    MOV EAX,0xffffffff                  ; 005cde96
    POP EDI                             ; 005cde9b
    POP ESI                             ; 005cde9c
    POP EBX                             ; 005cde9d
    RET                                 ; 005cde9e
    MOV [0x02c9f6d4],EAX                ; 005cde9f | DAT_02c9f6d4
        ;   Label: LAB_005cde9f
    MOV dword ptr [EAX],0x0             ; 005cdea4
    ADD EAX,0x4                         ; 005cdeaa
    MOV [0x02c9f6d0],EAX                ; 005cdead | DAT_02c9f6d0
    MOV byte ptr [EAX],0x0              ; 005cdeb2
    XOR EAX,EAX                         ; 005cdeb5
        ;   Label: LAB_005cdeb5
    POP EDI                             ; 005cdeb7
    POP ESI                             ; 005cdeb8
    POP EBX                             ; 005cdeb9
    RET                                 ; 005cdeba

