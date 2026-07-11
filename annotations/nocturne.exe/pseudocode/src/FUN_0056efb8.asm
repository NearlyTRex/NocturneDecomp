; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056efb8(void)
;
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   FUN_005674b0 at 005674e0
;   FUN_0056fcd4 at 0056fced
;
; Referenced Globals:
;   undefined1 DAT_005c26ce
;   undefined1 DAT_005c26cf
;   undefined1 DAT_005c26d4
;   undefined1 DAT_005c26d5
;   void* PTR_LAB_005c26d6 = 0056b1ee
;   undefined1 DAT_005c26f8
;   undefined1 DAT_005c26f9
;   undefined4 DAT_005c26fa
;
; Called Functions:
;   FUN_0056ef50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056efb8
        ;   Label: FUN_0056efb8
    PUSH ESI                            ; 0056efb9
    PUSH ES                             ; 0056efba
    SUB ESP,0x8                         ; 0056efbb
    MOV ESI,0x5c26f8                    ; 0056efbe | DAT_005c26f8
    MOV byte ptr [ESP + 0x4],AL         ; 0056efc3
    MOV byte ptr [ESP],DL               ; 0056efc7
    MOV EAX,0x5c26ce                    ; 0056efca | DAT_005c26ce
        ;   Label: LAB_0056efca
    MOV DL,byte ptr [ESP + 0x4]         ; 0056efcf
    MOV EBX,ESI                         ; 0056efd3
    CMP ESI,EAX                         ; 0056efd5
    JBE 0x0056eff3                      ; 0056efd7
        ;   XREF to: 0056eff3 (CONDITIONAL_JUMP)  ; LAB_0056eff3
    CMP byte ptr [EAX],0x2              ; 0056efd9 | DAT_005c26ce | DAT_005c26d4
        ;   Label: LAB_0056efd9
    JZ 0x0056efe9                       ; 0056efdc
        ;   XREF to: 0056efe9 (CONDITIONAL_JUMP)  ; LAB_0056efe9
    MOV CL,byte ptr [EAX + 0x1]         ; 0056efde | DAT_005c26cf | DAT_005c26d5
    CMP DL,CL                           ; 0056efe1
    JA 0x0056efe9                       ; 0056efe3
        ;   XREF to: 0056efe9 (CONDITIONAL_JUMP)  ; LAB_0056efe9
    MOV EBX,EAX                         ; 0056efe5
    MOV DL,CL                           ; 0056efe7
    ADD EAX,0x6                         ; 0056efe9
        ;   Label: LAB_0056efe9
    CMP EAX,0x5c26f8                    ; 0056efec | DAT_005c26f8
    JC 0x0056efd9                       ; 0056eff1
        ;   XREF to: 0056efd9 (CONDITIONAL_JUMP)  ; LAB_0056efd9
    CMP EBX,0x5c26f8                    ; 0056eff3 | DAT_005c26f8
        ;   Label: LAB_0056eff3
    JZ 0x0056f014                       ; 0056eff9
        ;   XREF to: 0056f014 (CONDITIONAL_JUMP)  ; LAB_0056f014
    MOV AL,byte ptr [EBX + 0x1]         ; 0056effb | DAT_005c26d5 | DAT_005c26f9
    CMP AL,byte ptr [ESP]               ; 0056effe
    JA 0x0056f00f                       ; 0056f001
        ;   XREF to: 0056f00f (CONDITIONAL_JUMP)  ; LAB_0056f00f
    LEA EAX,[EBX + 0x2]                 ; 0056f003 | PTR_LAB_005c26d6
    PUSH EAX                            ; 0056f006 | PTR_LAB_005c26d6 | DAT_005c26fa
    CALL FUN_0056ef50                   ; 0056f007
        ;   XREF to: 0056ef50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ef50()
    ADD ESP,0x4                         ; 0056f00c
    MOV byte ptr [EBX],0x2              ; 0056f00f | DAT_005c26d4 | DAT_005c26f8
        ;   Label: LAB_0056f00f
    JMP 0x0056efca                      ; 0056f012
        ;   XREF to: 0056efca (UNCONDITIONAL_JUMP)  ; LAB_0056efca
    ADD ESP,0x8                         ; 0056f014
        ;   Label: LAB_0056f014
    POP ES                              ; 0056f017
    POP ESI                             ; 0056f018
    POP EBX                             ; 0056f019
    RET                                 ; 0056f01a

