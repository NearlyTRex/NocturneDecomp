; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined support_newmsg.cpp_FUN_00544540()
;
;
; Referenced Globals:
;   int g_MouseButtonFlags
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x02cf6a94]      ; 00544540 | g_MouseButtonFlags
        ;   Label: support_newmsg.cpp_FUN_00544540
    MOV EDX,dword ptr [ESP + 0x4]       ; 00544546
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054454a
    TEST ECX,EAX                        ; 0054454e
    JZ 0x0054458b                       ; 00544550
        ;   XREF to: 0054458b (CONDITIONAL_JUMP)  ; LAB_0054458b
    PUSH EBX                            ; 00544552
    XOR AL,0xff                         ; 00544553
    MOV EBX,dword ptr [EDX + 0x25c]     ; 00544555
    AND ECX,EAX                         ; 0054455b
    TEST EBX,EBX                        ; 0054455d
    JNZ 0x00544572                      ; 0054455f
        ;   XREF to: 00544572 (CONDITIONAL_JUMP)  ; LAB_00544572
    CMP dword ptr [ESP + 0x10],0x0      ; 00544561
    JZ 0x0054457f                       ; 00544566
        ;   XREF to: 0054457f (CONDITIONAL_JUMP)  ; LAB_0054457f
    MOV dword ptr [EDX + 0x25c],0x2     ; 00544568
    MOV EAX,0x1                         ; 00544572
        ;   Label: LAB_00544572
    POP EBX                             ; 00544577
    MOV dword ptr [0x02cf6a94],ECX      ; 00544578 | g_MouseButtonFlags
    RET                                 ; 0054457e
    MOV dword ptr [EDX + 0x25c],0x1     ; 0054457f
        ;   Label: LAB_0054457f
    JMP 0x00544572                      ; 00544589
        ;   XREF to: 00544572 (UNCONDITIONAL_JUMP)  ; LAB_00544572
    XOR EAX,EAX                         ; 0054458b
        ;   Label: LAB_0054458b
    MOV dword ptr [0x02cf6a94],ECX      ; 0054458d | g_MouseButtonFlags
    RET                                 ; 00544593

