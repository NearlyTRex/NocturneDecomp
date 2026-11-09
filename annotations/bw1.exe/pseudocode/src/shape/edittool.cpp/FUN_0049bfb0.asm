; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_FUN_0049bfb0(CPickList *this_ptr,int mouse_x,int mouse_y)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   mouse_x
; int              Stack[0xc]:4   mouse_y
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0049add0 at 0049af46
;
; Referenced Globals:
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049bfb0
        ;   Label: shape_edittool.cpp_FUN_0049bfb0
    PUSH ESI                            ; 0049bfb1
    PUSH EDI                            ; 0049bfb2
    PUSH EBP                            ; 0049bfb3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0049bfb4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0049bfb8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0049bfbc
    MOV ESI,dword ptr [0x01c4f008]      ; 0049bfc0 | DAT_01c4f008
    MOV EDI,dword ptr [0x01c4f00c]      ; 0049bfc6 | DAT_01c4f00c
    SUB EBX,ESI                         ; 0049bfcc
    SUB EDX,EDI                         ; 0049bfce
    TEST EBX,EBX                        ; 0049bfd0
    JL 0x0049c021                       ; 0049bfd2
        ;   XREF to: 0049c021 (CONDITIONAL_JUMP)  ; LAB_0049c021
    TEST EDX,EDX                        ; 0049bfd4
    JL 0x0049c021                       ; 0049bfd6
        ;   XREF to: 0049c021 (CONDITIONAL_JUMP)  ; LAB_0049c021
    MOV EAX,EDX                         ; 0049bfd8
    MOV EBP,dword ptr [ECX + 0x18c]     ; 0049bfda
    SAR EDX,0x1f                        ; 0049bfe0
    IDIV EBP                            ; 0049bfe3
    MOV ESI,EAX                         ; 0049bfe5
    MOV EDX,EBX                         ; 0049bfe7
    MOV EAX,EBX                         ; 0049bfe9
    SAR EDX,0x1f                        ; 0049bfeb
    IDIV dword ptr [ECX + 0x1a4]        ; 0049bfee
    TEST ESI,ESI                        ; 0049bff4
    JL 0x0049c021                       ; 0049bff6
        ;   XREF to: 0049c021 (CONDITIONAL_JUMP)  ; LAB_0049c021
    MOV EDI,dword ptr [ECX + 0x1a0]     ; 0049bff8
    CMP ESI,EDI                         ; 0049bffe
    JGE 0x0049c021                      ; 0049c000
        ;   XREF to: 0049c021 (CONDITIONAL_JUMP)  ; LAB_0049c021
    TEST EAX,EAX                        ; 0049c002
    JL 0x0049c021                       ; 0049c004
        ;   XREF to: 0049c021 (CONDITIONAL_JUMP)  ; LAB_0049c021
    CMP EAX,dword ptr [ECX + 0x1a8]     ; 0049c006
    JGE 0x0049c021                      ; 0049c00c
        ;   XREF to: 0049c021 (CONDITIONAL_JUMP)  ; LAB_0049c021
    IMUL EAX,EDI                        ; 0049c00e
    ADD EAX,dword ptr [ECX + 0x198]     ; 0049c011
    ADD EAX,ESI                         ; 0049c017
    TEST EAX,EAX                        ; 0049c019
    JL 0x0049c021                       ; 0049c01b
        ;   XREF to: 0049c021 (CONDITIONAL_JUMP)  ; LAB_0049c021
    CMP EAX,dword ptr [ECX]             ; 0049c01d
    JL 0x0049c026                       ; 0049c01f
        ;   XREF to: 0049c026 (CONDITIONAL_JUMP)  ; LAB_0049c026
    MOV EAX,0xffffffff                  ; 0049c021
        ;   Label: LAB_0049c021
    POP EBP                             ; 0049c026
        ;   Label: LAB_0049c026
    POP EDI                             ; 0049c027
    POP ESI                             ; 0049c028
    POP EBX                             ; 0049c029
    RET                                 ; 0049c02a

