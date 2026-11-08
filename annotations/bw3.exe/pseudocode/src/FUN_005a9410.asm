; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a9410(void)
;
;
; XREF[1]:
;   FUN_005a33b0 at 005a340e
;
; Referenced Globals:
;   undefined4 DAT_0060796c
;
; Called Functions:
;   FUN_005ae798
;   FUN_005ae830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9410
        ;   Label: FUN_005a9410
    PUSH ESI                            ; 005a9411
    MOV ESI,dword ptr [0x0060796c]      ; 005a9412 | DAT_0060796c
    CALL FUN_005ae798                   ; 005a9418
        ;   XREF to: 005ae798 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae798()
    MOV EBX,EAX                         ; 005a941d
    CMP EAX,-0x1                        ; 005a941f
    JZ 0x005a9431                       ; 005a9422
        ;   XREF to: 005a9431 (CONDITIONAL_JUMP)  ; LAB_005a9431
    TEST ESI,ESI                        ; 005a9424
    JNZ 0x005a9431                      ; 005a9426
        ;   XREF to: 005a9431 (CONDITIONAL_JUMP)  ; LAB_005a9431
    PUSH EAX                            ; 005a9428
    CALL FUN_005ae830                   ; 005a9429
        ;   XREF to: 005ae830 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae830()
    ADD ESP,0x4                         ; 005a942e
    MOV EAX,EBX                         ; 005a9431
        ;   Label: LAB_005a9431
    POP ESI                             ; 005a9433
    POP EBX                             ; 005a9434
    RET                                 ; 005a9435

