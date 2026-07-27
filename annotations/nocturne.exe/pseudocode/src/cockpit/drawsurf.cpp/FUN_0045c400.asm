; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte cockpit_drawsurf_cpp_FUN_0045c400(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c400
        ;   Label: cockpit_drawsurf.cpp_FUN_0045c400
    MOV ECX,dword ptr [ESP + 0x8]       ; 0045c401
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045c405
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045c409
    XOR EAX,EAX                         ; 0045c40d
    CMP EDX,EBX                         ; 0045c40f
    JLE 0x0045c418                      ; 0045c411
        ;   XREF to: 0045c418 (CONDITIONAL_JUMP)  ; LAB_0045c418
    MOV EAX,0x1                         ; 0045c413
    CMP EDX,dword ptr [ESP + 0x14]      ; 0045c418
        ;   Label: LAB_0045c418
    JGE 0x0045c420                      ; 0045c41c
        ;   XREF to: 0045c420 (CONDITIONAL_JUMP)  ; LAB_0045c420
    OR AL,0x2                           ; 0045c41e
    CMP ECX,dword ptr [ESP + 0x18]      ; 0045c420
        ;   Label: LAB_0045c420
    JLE 0x0045c428                      ; 0045c424
        ;   XREF to: 0045c428 (CONDITIONAL_JUMP)  ; LAB_0045c428
    OR AL,0x4                           ; 0045c426
    CMP ECX,dword ptr [ESP + 0x10]      ; 0045c428
        ;   Label: LAB_0045c428
    JGE 0x0045c430                      ; 0045c42c
        ;   XREF to: 0045c430 (CONDITIONAL_JUMP)  ; LAB_0045c430
    OR AL,0x8                           ; 0045c42e
    POP EBX                             ; 0045c430
        ;   Label: LAB_0045c430
    RET                                 ; 0045c431

