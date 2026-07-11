; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_0056dc68(int param_1,undefined1 *param_2,int param_3)
;
;
; XREF[3]:
;   FUN_00566634 at 00566894
;   FUN_005696e8 at 005696f8
;   FUN_0056974c at 00569789
;
; Called Functions:
;   FUN_0056dc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056dc68
        ;   Label: FUN_0056dc68
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056dc69
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056dc6d
    MOV ECX,dword ptr [ESP + 0x10]      ; 0056dc71
    MOV EDX,EBX                         ; 0056dc75
    CMP ECX,0xa                         ; 0056dc77
    JNZ 0x0056dc88                      ; 0056dc7a
        ;   XREF to: 0056dc88 (CONDITIONAL_JUMP)  ; LAB_0056dc88
    TEST EAX,EAX                        ; 0056dc7c
    JGE 0x0056dc88                      ; 0056dc7e
        ;   XREF to: 0056dc88 (CONDITIONAL_JUMP)  ; LAB_0056dc88
    NEG EAX                             ; 0056dc80
    LEA EDX,[EBX + 0x1]                 ; 0056dc82
    MOV byte ptr [EBX],0x2d             ; 0056dc85
    PUSH ECX                            ; 0056dc88
        ;   Label: LAB_0056dc88
    PUSH EDX                            ; 0056dc89
    PUSH EAX                            ; 0056dc8a
    CALL FUN_0056dc10                   ; 0056dc8b
        ;   XREF to: 0056dc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dc10()
    ADD ESP,0xc                         ; 0056dc90
    MOV EAX,EBX                         ; 0056dc93
    POP EBX                             ; 0056dc95
    RET                                 ; 0056dc96

