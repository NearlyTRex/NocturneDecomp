; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_004a53a0(CPickList *this_ptr,int mouse_x,int mouse_y)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   mouse_x
; int              Stack[0xc]:4   mouse_y
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 at 004a449f
;
; Referenced Globals:
;   int g_ClipLeft
;   int g_ClipTop
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a53a0
        ;   Label: shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
    PUSH ESI                            ; 004a53a1
    PUSH EDI                            ; 004a53a2
    PUSH EBP                            ; 004a53a3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a53a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a53a8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a53ac
    SUB EDX,dword ptr [0x02d0255c]      ; 004a53b0 | g_ClipTop
    MOV EBP,dword ptr [ECX + 0x174]     ; 004a53b6
    MOV EAX,EDX                         ; 004a53bc
    SAR EDX,0x1f                        ; 004a53be
    IDIV EBP                            ; 004a53c1
    SUB ESI,dword ptr [0x02d02558]      ; 004a53c3 | g_ClipLeft
    MOV EBX,EAX                         ; 004a53c9
    MOV EDX,ESI                         ; 004a53cb
    MOV EAX,ESI                         ; 004a53cd
    SAR EDX,0x1f                        ; 004a53cf
    IDIV dword ptr [ECX + 0x18c]        ; 004a53d2
    TEST EBX,EBX                        ; 004a53d8
    JL 0x004a5405                       ; 004a53da
        ;   XREF to: 004a5405 (CONDITIONAL_JUMP)  ; LAB_004a5405
    MOV EDI,dword ptr [ECX + 0x188]     ; 004a53dc
    CMP EBX,EDI                         ; 004a53e2
    JGE 0x004a5405                      ; 004a53e4
        ;   XREF to: 004a5405 (CONDITIONAL_JUMP)  ; LAB_004a5405
    TEST EAX,EAX                        ; 004a53e6
    JL 0x004a5405                       ; 004a53e8
        ;   XREF to: 004a5405 (CONDITIONAL_JUMP)  ; LAB_004a5405
    CMP EAX,dword ptr [ECX + 0x190]     ; 004a53ea
    JGE 0x004a5405                      ; 004a53f0
        ;   XREF to: 004a5405 (CONDITIONAL_JUMP)  ; LAB_004a5405
    IMUL EAX,EDI                        ; 004a53f2
    ADD EAX,dword ptr [ECX + 0x180]     ; 004a53f5
    ADD EAX,EBX                         ; 004a53fb
    TEST EAX,EAX                        ; 004a53fd
    JL 0x004a5405                       ; 004a53ff
        ;   XREF to: 004a5405 (CONDITIONAL_JUMP)  ; LAB_004a5405
    CMP EAX,dword ptr [ECX]             ; 004a5401
    JL 0x004a540a                       ; 004a5403
        ;   XREF to: 004a540a (CONDITIONAL_JUMP)  ; LAB_004a540a
    MOV EAX,0xffffffff                  ; 004a5405
        ;   Label: LAB_004a5405
    POP EBP                             ; 004a540a
        ;   Label: LAB_004a540a
    POP EDI                             ; 004a540b
    POP ESI                             ; 004a540c
    POP EBX                             ; 004a540d
    RET                                 ; 004a540e

