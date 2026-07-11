; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056af50(void)
;
;
; XREF[1]:
;   FUN_00564670 at 005646ce
;
; Referenced Globals:
;   undefined4 DAT_005c1cf8
;
; Called Functions:
;   FUN_0056fb98
;   FUN_0056fc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056af50
        ;   Label: FUN_0056af50
    PUSH ESI                            ; 0056af51
    MOV ESI,dword ptr [0x005c1cf8]      ; 0056af52 | DAT_005c1cf8
    CALL FUN_0056fb98                   ; 0056af58
        ;   XREF to: 0056fb98 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fb98()
    MOV EBX,EAX                         ; 0056af5d
    CMP EAX,-0x1                        ; 0056af5f
    JZ 0x0056af71                       ; 0056af62
        ;   XREF to: 0056af71 (CONDITIONAL_JUMP)  ; LAB_0056af71
    TEST ESI,ESI                        ; 0056af64
    JNZ 0x0056af71                      ; 0056af66
        ;   XREF to: 0056af71 (CONDITIONAL_JUMP)  ; LAB_0056af71
    PUSH EAX                            ; 0056af68
    CALL FUN_0056fc30                   ; 0056af69
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fc30()
    ADD ESP,0x4                         ; 0056af6e
    MOV EAX,EBX                         ; 0056af71
        ;   Label: LAB_0056af71
    POP ESI                             ; 0056af73
    POP EBX                             ; 0056af74
    RET                                 ; 0056af75

