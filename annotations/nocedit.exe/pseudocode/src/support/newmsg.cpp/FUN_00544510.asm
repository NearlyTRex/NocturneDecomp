; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 support_newmsg_cpp_FUN_00544510(void)
;
;
; Referenced Globals:
;   uint g_MouseButtonFlags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544510
        ;   Label: support_newmsg.cpp_FUN_00544510
    MOV ECX,dword ptr [ESP + 0x8]       ; 00544514
    TEST dword ptr [0x02cf6a94],ECX     ; 00544518 | g_MouseButtonFlags
    JZ 0x00544529                       ; 0054451e
        ;   XREF to: 00544529 (CONDITIONAL_JUMP)  ; LAB_00544529
    CMP dword ptr [EAX + 0x25c],0x0     ; 00544520
    JZ 0x0054452c                       ; 00544527
        ;   XREF to: 0054452c (CONDITIONAL_JUMP)  ; LAB_0054452c
    XOR EAX,EAX                         ; 00544529
        ;   Label: LAB_00544529
    RET                                 ; 0054452b
    MOV dword ptr [EAX + 0x25c],0x1     ; 0054452c
        ;   Label: LAB_0054452c
    XOR EAX,EAX                         ; 00544536
    RET                                 ; 00544538

