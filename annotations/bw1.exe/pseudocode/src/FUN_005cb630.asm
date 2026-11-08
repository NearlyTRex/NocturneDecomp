; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005cb630(void)
;
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   FUN_005c5348 at 005c5388
;   FUN_005ca370 at 005ca37c
;
; Referenced Globals:
;   undefined1 DAT_00626d0a
;   undefined1 DAT_00626d0b
;   undefined1 DAT_00626d10
;   undefined1 DAT_00626d11
;   void* PTR_FUN_00626d12 = 0040db60
;   undefined1 DAT_00627142
;   void* PTR_FUN_00627144 = 005bfbc3
;
; Called Functions:
;   FUN_005cb620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb630
        ;   Label: FUN_005cb630
    PUSH ESI                            ; 005cb631
    PUSH ES                             ; 005cb632
    SUB ESP,0x4                         ; 005cb633
    MOV ESI,0x627142                    ; 005cb636 | DAT_00627142
    MOV byte ptr [ESP],AL               ; 005cb63b
    MOV EAX,0x626d0a                    ; 005cb63e | DAT_00626d0a
        ;   Label: LAB_005cb63e
    MOV DL,byte ptr [ESP]               ; 005cb643
    MOV EBX,ESI                         ; 005cb646
    CMP ESI,EAX                         ; 005cb648
    JBE 0x005cb666                      ; 005cb64a
        ;   XREF to: 005cb666 (CONDITIONAL_JUMP)  ; LAB_005cb666
    CMP byte ptr [EAX],0x2              ; 005cb64c | DAT_00626d0a | DAT_00626d10
        ;   Label: LAB_005cb64c
    JZ 0x005cb65c                       ; 005cb64f
        ;   XREF to: 005cb65c (CONDITIONAL_JUMP)  ; LAB_005cb65c
    MOV CL,byte ptr [EAX + 0x1]         ; 005cb651 | DAT_00626d0b | DAT_00626d11
    CMP DL,CL                           ; 005cb654
    JC 0x005cb65c                       ; 005cb656
        ;   XREF to: 005cb65c (CONDITIONAL_JUMP)  ; LAB_005cb65c
    MOV EBX,EAX                         ; 005cb658
    MOV DL,CL                           ; 005cb65a
    ADD EAX,0x6                         ; 005cb65c
        ;   Label: LAB_005cb65c
    CMP EAX,0x627142                    ; 005cb65f | DAT_00627142
    JC 0x005cb64c                       ; 005cb664
        ;   XREF to: 005cb64c (CONDITIONAL_JUMP)  ; LAB_005cb64c
    CMP EBX,0x627142                    ; 005cb666 | DAT_00627142
        ;   Label: LAB_005cb666
    JZ 0x005cb67f                       ; 005cb66c
        ;   XREF to: 005cb67f (CONDITIONAL_JUMP)  ; LAB_005cb67f
    LEA EAX,[EBX + 0x2]                 ; 005cb66e | PTR_FUN_00626d12
    PUSH EAX                            ; 005cb671 | PTR_FUN_00626d12 | PTR_FUN_00627144
    CALL FUN_005cb620                   ; 005cb672
        ;   XREF to: 005cb620 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb620()
    ADD ESP,0x4                         ; 005cb677
    MOV byte ptr [EBX],0x2              ; 005cb67a | DAT_00626d10
    JMP 0x005cb63e                      ; 005cb67d
        ;   XREF to: 005cb63e (UNCONDITIONAL_JUMP)  ; LAB_005cb63e
    ADD ESP,0x4                         ; 005cb67f
        ;   Label: LAB_005cb67f
    POP ES                              ; 005cb682
    POP ESI                             ; 005cb683
    POP EBX                             ; 005cb684
    RET                                 ; 005cb685

