; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl APIDLLkill(void)
;
;
; XREF[2]:
;   APIDLLinit at 10001a8a
;   FUN_10002340 at 10002340
;
; Referenced Globals:
;   undefined4 DAT_10014184
;   undefined4 DAT_10014188
;
; Called Functions:
;   FUN_10002370
;
; *****************************************************************************

section .text

    CALL FUN_10002370                   ; 10002460
        ;   XREF to: 10002370 (UNCONDITIONAL_CALL)  ; undefined FUN_10002370()
        ;   Label: APIDLLkill
    CMP dword ptr [0x10014188],0x0      ; 10002465 | DAT_10014188
    JZ 0x10002483                       ; 1000246c
        ;   XREF to: 10002483 (CONDITIONAL_JUMP)  ; LAB_10002483
    MOV EAX,[0x10014188]                ; 1000246e | DAT_10014188
    PUSH EAX                            ; 10002473
    MOV EAX,dword ptr [EAX]             ; 10002474
    CALL dword ptr [EAX + 0x8]          ; 10002476
    MOV dword ptr [0x10014188],0x0      ; 10002479 | DAT_10014188
    CMP dword ptr [0x10014184],0x0      ; 10002483 | DAT_10014184
        ;   Label: LAB_10002483
    JZ 0x100024a1                       ; 1000248a
        ;   XREF to: 100024a1 (CONDITIONAL_JUMP)  ; LAB_100024a1
    MOV EAX,[0x10014184]                ; 1000248c | DAT_10014184
    PUSH EAX                            ; 10002491
    MOV EAX,dword ptr [EAX]             ; 10002492
    CALL dword ptr [EAX + 0x8]          ; 10002494
    MOV dword ptr [0x10014184],0x0      ; 10002497 | DAT_10014184
    MOV EAX,0x1                         ; 100024a1
        ;   Label: LAB_100024a1
    RET                                 ; 100024a6

