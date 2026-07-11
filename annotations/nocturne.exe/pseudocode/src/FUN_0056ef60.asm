; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ef60(void)
;
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   FUN_00567458 at 00567498
;   FUN_0056df10 at 0056df1c
;
; Referenced Globals:
;   undefined1 DAT_005c2302
;   undefined1 DAT_005c2303
;   undefined1 DAT_005c2308
;   undefined1 DAT_005c2309
;   void* PTR_LAB_005c230a = 0040eb10
;   undefined1 DAT_005c26ce
;   void* PTR_LAB_005c26d0 = 00563d13
;
; Called Functions:
;   FUN_0056ef50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ef60
        ;   Label: FUN_0056ef60
    PUSH ESI                            ; 0056ef61
    PUSH ES                             ; 0056ef62
    SUB ESP,0x4                         ; 0056ef63
    MOV ESI,0x5c26ce                    ; 0056ef66 | DAT_005c26ce
    MOV byte ptr [ESP],AL               ; 0056ef6b
    MOV EAX,0x5c2302                    ; 0056ef6e | DAT_005c2302
        ;   Label: LAB_0056ef6e
    MOV DL,byte ptr [ESP]               ; 0056ef73
    MOV EBX,ESI                         ; 0056ef76
    CMP ESI,EAX                         ; 0056ef78
    JBE 0x0056ef96                      ; 0056ef7a
        ;   XREF to: 0056ef96 (CONDITIONAL_JUMP)  ; LAB_0056ef96
    CMP byte ptr [EAX],0x2              ; 0056ef7c | DAT_005c2302 | DAT_005c2308
        ;   Label: LAB_0056ef7c
    JZ 0x0056ef8c                       ; 0056ef7f
        ;   XREF to: 0056ef8c (CONDITIONAL_JUMP)  ; LAB_0056ef8c
    MOV CL,byte ptr [EAX + 0x1]         ; 0056ef81 | DAT_005c2303 | DAT_005c2309
    CMP DL,CL                           ; 0056ef84
    JC 0x0056ef8c                       ; 0056ef86
        ;   XREF to: 0056ef8c (CONDITIONAL_JUMP)  ; LAB_0056ef8c
    MOV EBX,EAX                         ; 0056ef88
    MOV DL,CL                           ; 0056ef8a
    ADD EAX,0x6                         ; 0056ef8c
        ;   Label: LAB_0056ef8c
    CMP EAX,0x5c26ce                    ; 0056ef8f | DAT_005c26ce
    JC 0x0056ef7c                       ; 0056ef94
        ;   XREF to: 0056ef7c (CONDITIONAL_JUMP)  ; LAB_0056ef7c
    CMP EBX,0x5c26ce                    ; 0056ef96 | DAT_005c26ce
        ;   Label: LAB_0056ef96
    JZ 0x0056efaf                       ; 0056ef9c
        ;   XREF to: 0056efaf (CONDITIONAL_JUMP)  ; LAB_0056efaf
    LEA EAX,[EBX + 0x2]                 ; 0056ef9e | PTR_LAB_005c230a
    PUSH EAX                            ; 0056efa1 | PTR_LAB_005c230a | PTR_LAB_005c26d0
    CALL FUN_0056ef50                   ; 0056efa2
        ;   XREF to: 0056ef50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ef50()
    ADD ESP,0x4                         ; 0056efa7
    MOV byte ptr [EBX],0x2              ; 0056efaa | DAT_005c2308
    JMP 0x0056ef6e                      ; 0056efad
        ;   XREF to: 0056ef6e (UNCONDITIONAL_JUMP)  ; LAB_0056ef6e
    ADD ESP,0x4                         ; 0056efaf
        ;   Label: LAB_0056efaf
    POP ES                              ; 0056efb2
    POP ESI                             ; 0056efb3
    POP EBX                             ; 0056efb4
    RET                                 ; 0056efb5

