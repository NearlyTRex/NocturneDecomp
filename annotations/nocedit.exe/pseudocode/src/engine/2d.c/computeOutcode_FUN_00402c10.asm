; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl byte engine_2d.c_computeOutcode_FUN_00402c10(int x, int y, int x_min, int y_min, int x_max, int y_max)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   x_min
; int              Stack[0x10]:4   y_min
; int              Stack[0x14]:4   x_max
; int              Stack[0x18]:4   y_max
;
; XREF[1]:
;   engine_2d.c_clipAndDrawLine_FUN_00402ca0 at 00402cc5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402c10
        ;   Label: engine_2d.c_computeOutcode_FUN_00402c10
    MOV ECX,dword ptr [ESP + 0x8]       ; 00402c11
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402c15
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00402c19
    XOR EAX,EAX                         ; 00402c1d
    CMP EDX,EBX                         ; 00402c1f
    JLE 0x00402c28                      ; 00402c21
        ;   XREF to: 00402c28 (CONDITIONAL_JUMP)  ; LAB_00402c28
    MOV EAX,0x1                         ; 00402c23
    CMP EDX,dword ptr [ESP + 0x14]      ; 00402c28
        ;   Label: LAB_00402c28
    JGE 0x00402c30                      ; 00402c2c
        ;   XREF to: 00402c30 (CONDITIONAL_JUMP)  ; LAB_00402c30
    OR AL,0x2                           ; 00402c2e
    CMP ECX,dword ptr [ESP + 0x18]      ; 00402c30
        ;   Label: LAB_00402c30
    JLE 0x00402c38                      ; 00402c34
        ;   XREF to: 00402c38 (CONDITIONAL_JUMP)  ; LAB_00402c38
    OR AL,0x4                           ; 00402c36
    CMP ECX,dword ptr [ESP + 0x10]      ; 00402c38
        ;   Label: LAB_00402c38
    JGE 0x00402c40                      ; 00402c3c
        ;   XREF to: 00402c40 (CONDITIONAL_JUMP)  ; LAB_00402c40
    OR AL,0x8                           ; 00402c3e
    POP EBX                             ; 00402c40
        ;   Label: LAB_00402c40
    RET                                 ; 00402c41

