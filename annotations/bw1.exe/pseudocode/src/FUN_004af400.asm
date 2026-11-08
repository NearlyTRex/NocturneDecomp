; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af400(int *param_1)
;
;
; XREF[1]:
;   FUN_004b4dd0 at 004b4e64
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;
; Called Functions:
;   FUN_004b5620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004af400
        ;   Label: FUN_004af400
    MOV EDX,dword ptr [EAX]             ; 004af404
    DEC EDX                             ; 004af406
    MOV dword ptr [EAX],EDX             ; 004af407
    TEST EDX,EDX                        ; 004af409
    JL 0x004af413                       ; 004af40b
        ;   XREF to: 004af413 (CONDITIONAL_JUMP)  ; LAB_004af413
    CMP EDX,0x1                         ; 004af40d
    JZ 0x004af41a                       ; 004af410
        ;   XREF to: 004af41a (CONDITIONAL_JUMP)  ; LAB_004af41a
    RET                                 ; 004af412
    MOV dword ptr [EAX],0x0             ; 004af413
        ;   Label: LAB_004af413
    RET                                 ; 004af419
    PUSH ESI                            ; 004af41a
        ;   Label: LAB_004af41a
    ADD EAX,0x4                         ; 004af41b
    PUSH EAX                            ; 004af41e
    MOV ESI,dword ptr [0x0061c010]      ; 004af41f | DAT_0061c010
    PUSH ESI                            ; 004af425
    CALL FUN_004b5620                   ; 004af426
        ;   XREF to: 004b5620 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5620()
    ADD ESP,0x8                         ; 004af42b
    POP ESI                             ; 004af42e
    RET                                 ; 004af42f

