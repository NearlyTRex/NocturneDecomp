; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0051c539(void)
;
;
; XREF[2]:
;   FUN_0051c450 at 0051c456
;   FUN_0051c54f at 0051c565
;
; Referenced Globals:
;   undefined4 DAT_0061f7bd
;   undefined1 DAT_0061f7c1
;   undefined4 DAT_00800000
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 0051c539
        ;   Label: FUN_0051c539
    MOV EAX,[0x0061f7bd]                ; 0051c53a | DAT_0061f7bd
    TEST EAX,0x800000                   ; 0051c53f | DAT_00800000
    JZ 0x0051c54d                       ; 0051c544
        ;   XREF to: 0051c54d (CONDITIONAL_JUMP)  ; LAB_0051c54d
    MOV byte ptr [0x0061f7c1],0x1       ; 0051c546 | DAT_0061f7c1
    POP EAX                             ; 0051c54d
        ;   Label: LAB_0051c54d
    RET                                 ; 0051c54e

