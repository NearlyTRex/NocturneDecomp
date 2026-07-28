; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_00475f10(CPickList *this_ptr,int mouse_x,int mouse_y)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   mouse_x
; int              Stack[0xc]:4   mouse_y
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00475230 at 0047537f
;
; Referenced Globals:
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475f10
        ;   Label: shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_00475f10
    PUSH ESI                            ; 00475f11
    PUSH EDI                            ; 00475f12
    PUSH EBP                            ; 00475f13
    MOV ECX,dword ptr [ESP + 0x14]      ; 00475f14
    MOV ESI,dword ptr [ESP + 0x18]      ; 00475f18
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00475f1c
    SUB EDX,dword ptr [0x01c00c5c]      ; 00475f20 | DAT_01c00c5c
    MOV EBP,dword ptr [ECX + 0x110]     ; 00475f26
    MOV EAX,EDX                         ; 00475f2c
    SAR EDX,0x1f                        ; 00475f2e
    IDIV EBP                            ; 00475f31
    SUB ESI,dword ptr [0x01c00c58]      ; 00475f33 | DAT_01c00c58
    MOV EBX,EAX                         ; 00475f39
    MOV EDX,ESI                         ; 00475f3b
    MOV EAX,ESI                         ; 00475f3d
    SAR EDX,0x1f                        ; 00475f3f
    IDIV dword ptr [ECX + 0x128]        ; 00475f42
    TEST EBX,EBX                        ; 00475f48
    JL 0x00475f75                       ; 00475f4a
        ;   XREF to: 00475f75 (CONDITIONAL_JUMP)  ; LAB_00475f75
    MOV EDI,dword ptr [ECX + 0x124]     ; 00475f4c
    CMP EBX,EDI                         ; 00475f52
    JGE 0x00475f75                      ; 00475f54
        ;   XREF to: 00475f75 (CONDITIONAL_JUMP)  ; LAB_00475f75
    TEST EAX,EAX                        ; 00475f56
    JL 0x00475f75                       ; 00475f58
        ;   XREF to: 00475f75 (CONDITIONAL_JUMP)  ; LAB_00475f75
    CMP EAX,dword ptr [ECX + 0x12c]     ; 00475f5a
    JGE 0x00475f75                      ; 00475f60
        ;   XREF to: 00475f75 (CONDITIONAL_JUMP)  ; LAB_00475f75
    IMUL EAX,EDI                        ; 00475f62
    ADD EAX,dword ptr [ECX + 0x11c]     ; 00475f65
    ADD EAX,EBX                         ; 00475f6b
    TEST EAX,EAX                        ; 00475f6d
    JL 0x00475f75                       ; 00475f6f
        ;   XREF to: 00475f75 (CONDITIONAL_JUMP)  ; LAB_00475f75
    CMP EAX,dword ptr [ECX]             ; 00475f71
    JL 0x00475f7a                       ; 00475f73
        ;   XREF to: 00475f7a (CONDITIONAL_JUMP)  ; LAB_00475f7a
    MOV EAX,0xffffffff                  ; 00475f75
        ;   Label: LAB_00475f75
    POP EBP                             ; 00475f7a
        ;   Label: LAB_00475f7a
    POP EDI                             ; 00475f7b
    POP ESI                             ; 00475f7c
    POP EBX                             ; 00475f7d
    RET                                 ; 00475f7e

